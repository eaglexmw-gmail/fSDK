/*+@@file@@----------------------------------------------------------------*//*!
 \file		Msi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 20:00:16 2016
 \date		Modified on Sun Aug 14 20:00:16 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSI_H_
#define _MSI_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef NTDDI_WIN2K
#define NTDDI_WIN2K                         0x05000000
#endif
#ifndef NTDDI_WINXP
#define NTDDI_WINXP                         0x05010000
#endif
#ifndef NTDDI_WINXPSP2
#define NTDDI_WINXPSP2                      0x05010200
#endif
#ifndef NTDDI_WS03SP1
#define NTDDI_WS03SP1                       0x05020100
#endif
#ifndef NTDDI_VISTA
#define NTDDI_VISTA                         0x06000000
#endif
#ifndef NTDDI_VISTASP1
#define NTDDI_VISTASP1                      0x06000100
#endif
#ifndef NTDDI_WIN7
#define NTDDI_WIN7                          0x06010000
#endif
#ifndef _WIN32_MSI
#if (_WIN32_WINNT >= 0x0601 || (defined(NTDDI_VERSION) && NTDDI_VERSION >= NTDDI_WIN7))
#define _WIN32_MSI   500
#elif (_WIN32_WINNT >= 0x0501 || (defined(NTDDI_VERSION) && NTDDI_VERSION >= NTDDI_WINXP))
#if (defined(NTDDI_VERSION) && NTDDI_VERSION >= NTDDI_VISTASP1)
#define _WIN32_MSI   450
#elif (defined(NTDDI_VERSION) && NTDDI_VERSION >= NTDDI_VISTA)
#define _WIN32_MSI   400
#elif (defined(NTDDI_VERSION) && NTDDI_VERSION >= NTDDI_WS03SP1)
#define _WIN32_MSI   310
#elif (defined(NTDDI_VERSION) && NTDDI_VERSION >= NTDDI_WINXPSP2)
#define _WIN32_MSI   300
#else
#define _WIN32_MSI   200
#endif
#elif (_WIN32_WINNT >= 0x0500 || (defined(NTDDI_VERSION) && NTDDI_VERSION >= NTDDI_WIN2K))
#define _WIN32_MSI   110
#else
#define _WIN32_MSI   100
#endif
#endif
#define MAX_GUID_CHARS  38
#if (_WIN32_MSI >= 150)
#ifndef _MSI_NO_CRYPTO
#include <wincrypt.h>
#endif
#endif
typedef unsigned long MSIHANDLE;
UINT WINAPI MsiCloseHandle(MSIHANDLE hAny);
UINT WINAPI MsiCloseAllHandles(void);
typedef enum tagINSTALLMESSAGE
{
	INSTALLMESSAGE_FATALEXIT      = 0x00000000L,
	INSTALLMESSAGE_ERROR          = 0x01000000L,
	INSTALLMESSAGE_WARNING        = 0x02000000L,
	INSTALLMESSAGE_USER           = 0x03000000L,
	INSTALLMESSAGE_INFO           = 0x04000000L,
	INSTALLMESSAGE_FILESINUSE     = 0x05000000L,
	INSTALLMESSAGE_RESOLVESOURCE  = 0x06000000L,
	INSTALLMESSAGE_OUTOFDISKSPACE = 0x07000000L,
	INSTALLMESSAGE_ACTIONSTART    = 0x08000000L,
	INSTALLMESSAGE_ACTIONDATA     = 0x09000000L,
	INSTALLMESSAGE_PROGRESS       = 0x0A000000L,
	INSTALLMESSAGE_COMMONDATA     = 0x0B000000L,
	INSTALLMESSAGE_INITIALIZE     = 0x0C000000L,
	INSTALLMESSAGE_TERMINATE      = 0x0D000000L,
	INSTALLMESSAGE_SHOWDIALOG     = 0x0E000000L,
#if (_WIN32_MSI >= 500)
	INSTALLMESSAGE_PERFORMANCE    = 0x0F000000L,
#endif
#if (_WIN32_MSI >= 400)
	INSTALLMESSAGE_RMFILESINUSE   = 0x19000000L,
#endif
#if (_WIN32_MSI >= 450)
	INSTALLMESSAGE_INSTALLSTART   = 0x1A000000L,
	INSTALLMESSAGE_INSTALLEND     = 0x1B000000L,
#endif
} INSTALLMESSAGE;
typedef int (WINAPI *INSTALLUI_HANDLERA)(LPVOID pvContext, UINT iMessageType, LPCSTR szMessage);
typedef int (WINAPI *INSTALLUI_HANDLERW)(LPVOID pvContext, UINT iMessageType, LPCWSTR szMessage);
#ifdef UNICODE
#define INSTALLUI_HANDLER  INSTALLUI_HANDLERW
#else
#define INSTALLUI_HANDLER  INSTALLUI_HANDLERA
#endif
#if (_WIN32_MSI >= 310)
typedef int (WINAPI *INSTALLUI_HANDLER_RECORD)(LPVOID pvContext, UINT iMessageType, MSIHANDLE hRecord);
typedef INSTALLUI_HANDLER_RECORD* PINSTALLUI_HANDLER_RECORD;
#endif
typedef enum tagINSTALLUILEVEL
{
	INSTALLUILEVEL_NOCHANGE = 0,
	INSTALLUILEVEL_DEFAULT  = 1,
	INSTALLUILEVEL_NONE     = 2,
	INSTALLUILEVEL_BASIC    = 3,
	INSTALLUILEVEL_REDUCED  = 4,
	INSTALLUILEVEL_FULL     = 5,
	INSTALLUILEVEL_ENDDIALOG    = 0x80,
	INSTALLUILEVEL_PROGRESSONLY = 0x40,
	INSTALLUILEVEL_HIDECANCEL   = 0x20,
	INSTALLUILEVEL_SOURCERESONLY = 0x100,
#if (_WIN32_MSI >= 500)
	INSTALLUILEVEL_UACONLY = 0x200,
#endif
} INSTALLUILEVEL;
typedef enum tagINSTALLSTATE
{
	INSTALLSTATE_NOTUSED      = -7,
	INSTALLSTATE_BADCONFIG    = -6,
	INSTALLSTATE_INCOMPLETE   = -5,
	INSTALLSTATE_SOURCEABSENT = -4,
	INSTALLSTATE_MOREDATA     = -3,
	INSTALLSTATE_INVALIDARG   = -2,
	INSTALLSTATE_UNKNOWN      = -1,
	INSTALLSTATE_BROKEN       =  0,
	INSTALLSTATE_ADVERTISED   =  1,
	INSTALLSTATE_REMOVED      =  1,
	INSTALLSTATE_ABSENT       =  2,
	INSTALLSTATE_LOCAL        =  3,
	INSTALLSTATE_SOURCE       =  4,
	INSTALLSTATE_DEFAULT      =  5,
} INSTALLSTATE;
typedef enum tagUSERINFOSTATE
{
	USERINFOSTATE_MOREDATA   = -3,
	USERINFOSTATE_INVALIDARG = -2,
	USERINFOSTATE_UNKNOWN    = -1,
	USERINFOSTATE_ABSENT     =  0,
	USERINFOSTATE_PRESENT    =  1,
} USERINFOSTATE;
typedef enum tagINSTALLLEVEL
{
	INSTALLLEVEL_DEFAULT = 0,
	INSTALLLEVEL_MINIMUM = 1,
	INSTALLLEVEL_MAXIMUM = 0xFFFF,
} INSTALLLEVEL;
typedef enum tagREINSTALLMODE
{
	REINSTALLMODE_REPAIR           = 0x00000001,
	REINSTALLMODE_FILEMISSING      = 0x00000002,
	REINSTALLMODE_FILEOLDERVERSION = 0x00000004,
	REINSTALLMODE_FILEEQUALVERSION = 0x00000008,
	REINSTALLMODE_FILEEXACT        = 0x00000010,
	REINSTALLMODE_FILEVERIFY       = 0x00000020,
	REINSTALLMODE_FILEREPLACE      = 0x00000040,
	REINSTALLMODE_MACHINEDATA      = 0x00000080,
	REINSTALLMODE_USERDATA         = 0x00000100,
	REINSTALLMODE_SHORTCUT         = 0x00000200,
	REINSTALLMODE_PACKAGE          = 0x00000400,
} REINSTALLMODE;
typedef enum tagINSTALLOGMODE
{
	INSTALLLOGMODE_FATALEXIT      = (1 << (INSTALLMESSAGE_FATALEXIT      >> 24)),
	INSTALLLOGMODE_ERROR          = (1 << (INSTALLMESSAGE_ERROR          >> 24)),
	INSTALLLOGMODE_WARNING        = (1 << (INSTALLMESSAGE_WARNING        >> 24)),
	INSTALLLOGMODE_USER           = (1 << (INSTALLMESSAGE_USER           >> 24)),
	INSTALLLOGMODE_INFO           = (1 << (INSTALLMESSAGE_INFO           >> 24)),
	INSTALLLOGMODE_RESOLVESOURCE  = (1 << (INSTALLMESSAGE_RESOLVESOURCE  >> 24)),
	INSTALLLOGMODE_OUTOFDISKSPACE = (1 << (INSTALLMESSAGE_OUTOFDISKSPACE >> 24)),
	INSTALLLOGMODE_ACTIONSTART    = (1 << (INSTALLMESSAGE_ACTIONSTART    >> 24)),
	INSTALLLOGMODE_ACTIONDATA     = (1 << (INSTALLMESSAGE_ACTIONDATA     >> 24)),
	INSTALLLOGMODE_COMMONDATA     = (1 << (INSTALLMESSAGE_COMMONDATA     >> 24)),
	INSTALLLOGMODE_PROPERTYDUMP   = (1 << (INSTALLMESSAGE_PROGRESS       >> 24)),
	INSTALLLOGMODE_VERBOSE        = (1 << (INSTALLMESSAGE_INITIALIZE     >> 24)),
	INSTALLLOGMODE_EXTRADEBUG     = (1 << (INSTALLMESSAGE_TERMINATE      >> 24)),
	INSTALLLOGMODE_LOGONLYONERROR = (1 << (INSTALLMESSAGE_SHOWDIALOG     >> 24)),
#if (_WIN32_MSI >= 500)
	INSTALLLOGMODE_LOGPERFORMANCE = (1 << (INSTALLMESSAGE_PERFORMANCE    >> 24)),
#endif
	INSTALLLOGMODE_PROGRESS       = (1 << (INSTALLMESSAGE_PROGRESS       >> 24)),
	INSTALLLOGMODE_INITIALIZE     = (1 << (INSTALLMESSAGE_INITIALIZE     >> 24)),
	INSTALLLOGMODE_TERMINATE      = (1 << (INSTALLMESSAGE_TERMINATE      >> 24)),
	INSTALLLOGMODE_SHOWDIALOG     = (1 << (INSTALLMESSAGE_SHOWDIALOG     >> 24)),
	INSTALLLOGMODE_FILESINUSE     = (1 << (INSTALLMESSAGE_FILESINUSE     >> 24)),
#if (_WIN32_MSI >= 400)
	INSTALLLOGMODE_RMFILESINUSE   = (1 << (INSTALLMESSAGE_RMFILESINUSE   >> 24)),
#endif
#if (_WIN32_MSI >= 450)
	INSTALLLOGMODE_INSTALLSTART   = (1 << (INSTALLMESSAGE_INSTALLSTART   >> 24)),
	INSTALLLOGMODE_INSTALLEND     = (1 << (INSTALLMESSAGE_INSTALLEND     >> 24)),
#endif
} INSTALLLOGMODE;
typedef enum tagINSTALLLOGATTRIBUTES
{
	INSTALLLOGATTRIBUTES_APPEND            = (1 << 0),
	INSTALLLOGATTRIBUTES_FLUSHEACHLINE     = (1 << 1),
} INSTALLLOGATTRIBUTES;
typedef enum tagINSTALLFEATUREATTRIBUTE
{
	INSTALLFEATUREATTRIBUTE_FAVORLOCAL             = 1 << 0,
	INSTALLFEATUREATTRIBUTE_FAVORSOURCE            = 1 << 1,
	INSTALLFEATUREATTRIBUTE_FOLLOWPARENT           = 1 << 2,
	INSTALLFEATUREATTRIBUTE_FAVORADVERTISE         = 1 << 3,
	INSTALLFEATUREATTRIBUTE_DISALLOWADVERTISE      = 1 << 4,
	INSTALLFEATUREATTRIBUTE_NOUNSUPPORTEDADVERTISE = 1 << 5,
} INSTALLFEATUREATTRIBUTE;
typedef enum tagINSTALLMODE
{
#if (_WIN32_MSI >=  150)
	INSTALLMODE_NODETECTION_ANY      = -4,
#endif
	INSTALLMODE_NOSOURCERESOLUTION   = -3,
	INSTALLMODE_NODETECTION          = -2,
	INSTALLMODE_EXISTING             = -1,
	INSTALLMODE_DEFAULT              =  0,
} INSTALLMODE;
#if (_WIN32_MSI >=  300)
typedef enum tagMSIPATCHSTATE
{
	MSIPATCHSTATE_INVALID     =  0,
	MSIPATCHSTATE_APPLIED     =  1,
	MSIPATCHSTATE_SUPERSEDED  =  2,
	MSIPATCHSTATE_OBSOLETED   =  4,
	MSIPATCHSTATE_REGISTERED  =  8,
	MSIPATCHSTATE_ALL         =  (MSIPATCHSTATE_APPLIED | MSIPATCHSTATE_SUPERSEDED | MSIPATCHSTATE_OBSOLETED | MSIPATCHSTATE_REGISTERED)
} MSIPATCHSTATE;
typedef enum tagMSIINSTALLCONTEXT
{
        MSIINSTALLCONTEXT_FIRSTVISIBLE   =  0,
        MSIINSTALLCONTEXT_NONE           =  0,
        MSIINSTALLCONTEXT_USERMANAGED    =  1,
        MSIINSTALLCONTEXT_USERUNMANAGED  =  2,
        MSIINSTALLCONTEXT_MACHINE        =  4,
        MSIINSTALLCONTEXT_ALL            =  (MSIINSTALLCONTEXT_USERMANAGED | MSIINSTALLCONTEXT_USERUNMANAGED | MSIINSTALLCONTEXT_MACHINE),
        MSIINSTALLCONTEXT_ALLUSERMANAGED =  8,
} MSIINSTALLCONTEXT;
typedef enum tagMSIPATCHDATATYPE
{
	MSIPATCH_DATATYPE_PATCHFILE = 0,
	MSIPATCH_DATATYPE_XMLPATH   = 1,
	MSIPATCH_DATATYPE_XMLBLOB   = 2,
} MSIPATCHDATATYPE, * PMSIPATCHDATATYPE;
typedef struct tagMSIPATCHSEQUENCEINFOA
{
	LPCSTR   szPatchData;
	MSIPATCHDATATYPE ePatchDataType;
	DWORD   dwOrder;
	UINT    uStatus;
} MSIPATCHSEQUENCEINFOA, * PMSIPATCHSEQUENCEINFOA;
typedef struct tagMSIPATCHSEQUENCEINFOW
{
	LPCWSTR  szPatchData;
	MSIPATCHDATATYPE ePatchDataType;
	DWORD   dwOrder;
	UINT    uStatus;
} MSIPATCHSEQUENCEINFOW, * PMSIPATCHSEQUENCEINFOW;
#ifdef UNICODE
typedef MSIPATCHSEQUENCEINFOW MSIPATCHSEQUENCEINFO;
typedef PMSIPATCHSEQUENCEINFOW PMSIPATCHSEQUENCEINFO;
#else
typedef MSIPATCHSEQUENCEINFOA MSIPATCHSEQUENCEINFO;
typedef PMSIPATCHSEQUENCEINFOA PMSIPATCHSEQUENCEINFO;
#endif
#endif
#define MAX_FEATURE_CHARS  38
#define INSTALLPROPERTY_PACKAGENAME           __TEXT("PackageName")
#define INSTALLPROPERTY_TRANSFORMS            __TEXT("Transforms")
#define INSTALLPROPERTY_LANGUAGE              __TEXT("Language")
#define INSTALLPROPERTY_PRODUCTNAME           __TEXT("ProductName")
#define INSTALLPROPERTY_ASSIGNMENTTYPE        __TEXT("AssignmentType")
#if (_WIN32_MSI >= 150)
#define INSTALLPROPERTY_INSTANCETYPE          __TEXT("InstanceType")
#endif
#if (_WIN32_MSI >= 300)
#define INSTALLPROPERTY_AUTHORIZED_LUA_APP    __TEXT("AuthorizedLUAApp")
#endif
#define INSTALLPROPERTY_PACKAGECODE           __TEXT("PackageCode")
#define INSTALLPROPERTY_VERSION               __TEXT("Version")
#if (_WIN32_MSI >=  110)
#define INSTALLPROPERTY_PRODUCTICON           __TEXT("ProductIcon")
#endif
#define INSTALLPROPERTY_INSTALLEDPRODUCTNAME  __TEXT("InstalledProductName")
#define INSTALLPROPERTY_VERSIONSTRING         __TEXT("VersionString")
#define INSTALLPROPERTY_HELPLINK              __TEXT("HelpLink")
#define INSTALLPROPERTY_HELPTELEPHONE         __TEXT("HelpTelephone")
#define INSTALLPROPERTY_INSTALLLOCATION       __TEXT("InstallLocation")
#define INSTALLPROPERTY_INSTALLSOURCE         __TEXT("InstallSource")
#define INSTALLPROPERTY_INSTALLDATE           __TEXT("InstallDate")
#define INSTALLPROPERTY_PUBLISHER             __TEXT("Publisher")
#define INSTALLPROPERTY_LOCALPACKAGE          __TEXT("LocalPackage")
#define INSTALLPROPERTY_URLINFOABOUT          __TEXT("URLInfoAbout")
#define INSTALLPROPERTY_URLUPDATEINFO         __TEXT("URLUpdateInfo")
#define INSTALLPROPERTY_VERSIONMINOR          __TEXT("VersionMinor")
#define INSTALLPROPERTY_VERSIONMAJOR          __TEXT("VersionMajor")
#define INSTALLPROPERTY_PRODUCTID             __TEXT("ProductID")
#define INSTALLPROPERTY_REGCOMPANY            __TEXT("RegCompany")
#define INSTALLPROPERTY_REGOWNER              __TEXT("RegOwner")
#if (_WIN32_MSI >= 500)
#define INSTALLPROPERTY_INSTALLEDLANGUAGE     __TEXT("InstalledLanguage")
#endif
#if (_WIN32_MSI >= 300)
#define	INSTALLPROPERTY_UNINSTALLABLE         __TEXT("Uninstallable")
#define	INSTALLPROPERTY_PRODUCTSTATE          __TEXT("State")
#define	INSTALLPROPERTY_PATCHSTATE            __TEXT("State")
#define INSTALLPROPERTY_PATCHTYPE             __TEXT("PatchType")
#define INSTALLPROPERTY_LUAENABLED            __TEXT("LUAEnabled")
#define INSTALLPROPERTY_DISPLAYNAME           __TEXT("DisplayName")
#define INSTALLPROPERTY_MOREINFOURL           __TEXT("MoreInfoURL")
#define INSTALLPROPERTY_LASTUSEDSOURCE        __TEXT("LastUsedSource")
#define INSTALLPROPERTY_LASTUSEDTYPE          __TEXT("LastUsedType")
#define INSTALLPROPERTY_MEDIAPACKAGEPATH      __TEXT("MediaPackagePath")
#define INSTALLPROPERTY_DISKPROMPT            __TEXT("DiskPrompt")
#endif
typedef enum tagSCRIPTFLAGS
{
	SCRIPTFLAGS_CACHEINFO                = 0x00000001L,
	SCRIPTFLAGS_SHORTCUTS                = 0x00000004L,
	SCRIPTFLAGS_MACHINEASSIGN            = 0x00000008L,
	SCRIPTFLAGS_REGDATA_CNFGINFO         = 0x00000020L,
	SCRIPTFLAGS_VALIDATE_TRANSFORMS_LIST = 0x00000040L,
#if (_WIN32_MSI >=  110)
	SCRIPTFLAGS_REGDATA_CLASSINFO        = 0x00000080L,
	SCRIPTFLAGS_REGDATA_EXTENSIONINFO    = 0x00000100L,
	SCRIPTFLAGS_REGDATA_APPINFO          = SCRIPTFLAGS_REGDATA_CLASSINFO | SCRIPTFLAGS_REGDATA_EXTENSIONINFO,
#else
	SCRIPTFLAGS_REGDATA_APPINFO          = 0x00000010L,
#endif
	SCRIPTFLAGS_REGDATA                  = SCRIPTFLAGS_REGDATA_APPINFO | SCRIPTFLAGS_REGDATA_CNFGINFO,
}SCRIPTFLAGS;
typedef enum tagADVERTISEFLAGS
{
	ADVERTISEFLAGS_MACHINEASSIGN   =    0,
	ADVERTISEFLAGS_USERASSIGN      =    1,
}ADVERTISEFLAGS;
typedef enum tagINSTALLTYPE
{
	INSTALLTYPE_DEFAULT            =    0,
	INSTALLTYPE_NETWORK_IMAGE      =    1,
	INSTALLTYPE_SINGLE_INSTANCE    =    2,
}INSTALLTYPE;
#if (_WIN32_MSI >=  150)
typedef struct _MSIFILEHASHINFO {
	ULONG dwFileHashInfoSize;
	ULONG dwData [ 4 ];
} MSIFILEHASHINFO, *PMSIFILEHASHINFO;
typedef enum tagMSIARCHITECTUREFLAGS
{
	MSIARCHITECTUREFLAGS_X86   = 0x00000001L,
	MSIARCHITECTUREFLAGS_IA64  = 0x00000002L,
	MSIARCHITECTUREFLAGS_AMD64 = 0x00000004L
}MSIARCHITECTUREFLAGS;
typedef enum tagMSIOPENPACKAGEFLAGS
{
	MSIOPENPACKAGEFLAGS_IGNOREMACHINESTATE = 0x00000001L,
}MSIOPENPACKAGEFLAGS;
typedef enum tagMSIADVERTISEOPTIONFLAGS
{
	MSIADVERTISEOPTIONFLAGS_INSTANCE = 0x00000001L,
}MSIADVERTISEOPTIONFLAGS;
#endif
#if (_WIN32_MSI >= 300)
typedef enum tagMSISOURCETYPE
{
	MSISOURCETYPE_UNKNOWN = 0x00000000L,
	MSISOURCETYPE_NETWORK = 0x00000001L,
	MSISOURCETYPE_URL     = 0x00000002L,
	MSISOURCETYPE_MEDIA   = 0x00000004L
}MSISOURCETYPE;
typedef enum tagMSICODE
{
	MSICODE_PRODUCT = 0x00000000L,
	MSICODE_PATCH   = 0x40000000L
}MSICODE;
#if (_WIN32_MSI >= 450)
typedef enum tagMSITRANSACTION
{
	MSITRANSACTION_CHAIN_EMBEDDEDUI = 0x00000001L,
	MSITRANSACTION_JOIN_EXISTING_EMBEDDEDUI = 0x00000002L,
}MSITRANSACTION;
typedef enum tagMSITRANSACTIONSTATE
{
	MSITRANSACTIONSTATE_ROLLBACK = 0x00000000L,
	MSITRANSACTIONSTATE_COMMIT   = 0x00000001L,
}MSITRANSACTIONSTATE;
#endif
#endif

INSTALLUILEVEL WINAPI MsiSetInternalUI(INSTALLUILEVEL dwUILevel, HWND *phWnd);
INSTALLUI_HANDLERA WINAPI MsiSetExternalUIA(INSTALLUI_HANDLERA puiHandler, DWORD dwMessageFilter, LPVOID pvContext);
INSTALLUI_HANDLERW WINAPI MsiSetExternalUIW(INSTALLUI_HANDLERW puiHandler, DWORD dwMessageFilter, LPVOID pvContext);
#ifdef UNICODE
#define MsiSetExternalUI  MsiSetExternalUIW
#else
#define MsiSetExternalUI  MsiSetExternalUIA
#endif
#if (_WIN32_MSI >= 310)
UINT WINAPI MsiSetExternalUIRecord(INSTALLUI_HANDLER_RECORD puiHandler, DWORD dwMessageFilter, LPVOID pvContext, PINSTALLUI_HANDLER_RECORD ppuiPrevHandler);

#endif
UINT WINAPI MsiEnableLogA(DWORD dwLogMode, LPCSTR szLogFile, DWORD dwLogAttributes);
UINT WINAPI MsiEnableLogW(DWORD dwLogMode, LPCWSTR szLogFile, DWORD dwLogAttributes);
#ifdef UNICODE
#define MsiEnableLog  MsiEnableLogW
#else
#define MsiEnableLog  MsiEnableLogA
#endif
INSTALLSTATE WINAPI MsiQueryProductStateA(LPCSTR szProduct);
INSTALLSTATE WINAPI MsiQueryProductStateW(LPCWSTR szProduct);
#ifdef UNICODE
#define MsiQueryProductState  MsiQueryProductStateW
#else
#define MsiQueryProductState  MsiQueryProductStateA
#endif
UINT WINAPI MsiGetProductInfoA(LPCSTR szProduct, LPCSTR szAttribute, LPSTR lpValueBuf, LPDWORD pcchValueBuf);
UINT WINAPI MsiGetProductInfoW(LPCWSTR szProduct, LPCWSTR szAttribute, LPWSTR lpValueBuf, LPDWORD pcchValueBuf);
#ifdef UNICODE
#define MsiGetProductInfo  MsiGetProductInfoW
#else
#define MsiGetProductInfo  MsiGetProductInfoA
#endif
#if (_WIN32_MSI >= 300)
UINT WINAPI MsiGetProductInfoExA(LPCSTR szProductCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPCSTR szProperty, LPSTR szValue, LPDWORD pcchValue);
UINT WINAPI MsiGetProductInfoExW(LPCWSTR szProductCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPCWSTR szProperty, LPWSTR szValue, LPDWORD pcchValue);
#ifdef UNICODE
#define MsiGetProductInfoEx  MsiGetProductInfoExW
#else
#define MsiGetProductInfoEx  MsiGetProductInfoExA
#endif
#endif
UINT WINAPI MsiInstallProductA(LPCSTR szPackagePath, LPCSTR szCommandLine);
UINT WINAPI MsiInstallProductW(LPCWSTR szPackagePath, LPCWSTR szCommandLine);
#ifdef UNICODE
#define MsiInstallProduct  MsiInstallProductW
#else
#define MsiInstallProduct  MsiInstallProductA
#endif
UINT WINAPI MsiConfigureProductA(LPCSTR szProduct, int iInstallLevel, INSTALLSTATE eInstallState);
UINT WINAPI MsiConfigureProductW(LPCWSTR szProduct, int iInstallLevel, INSTALLSTATE eInstallState);
#ifdef UNICODE
#define MsiConfigureProduct  MsiConfigureProductW
#else
#define MsiConfigureProduct  MsiConfigureProductA
#endif
UINT WINAPI MsiConfigureProductExA(LPCSTR szProduct, int iInstallLevel, INSTALLSTATE eInstallState, LPCSTR szCommandLine);
UINT WINAPI MsiConfigureProductExW(LPCWSTR szProduct, int iInstallLevel, INSTALLSTATE eInstallState, LPCWSTR szCommandLine);
#ifdef UNICODE
#define MsiConfigureProductEx  MsiConfigureProductExW
#else
#define MsiConfigureProductEx  MsiConfigureProductExA
#endif
UINT WINAPI MsiReinstallProductA(LPCSTR szProduct, DWORD szReinstallMode);
UINT WINAPI MsiReinstallProductW(LPCWSTR szProduct, DWORD szReinstallMode);
#ifdef UNICODE
#define MsiReinstallProduct  MsiReinstallProductW
#else
#define MsiReinstallProduct  MsiReinstallProductA
#endif
#if (_WIN32_MSI >=  150)
UINT WINAPI MsiAdvertiseProductExA(LPCSTR szPackagePath, LPCSTR szScriptfilePath, LPCSTR szTransforms, LANGID lgidLanguage, DWORD dwPlatform, DWORD dwOptions);
UINT WINAPI MsiAdvertiseProductExW(LPCWSTR szPackagePath, LPCWSTR szScriptfilePath, LPCWSTR szTransforms, LANGID lgidLanguage, DWORD dwPlatform, DWORD dwOptions);
#ifdef UNICODE
#define MsiAdvertiseProductEx  MsiAdvertiseProductExW
#else
#define MsiAdvertiseProductEx  MsiAdvertiseProductExA
#endif
#endif
UINT WINAPI MsiAdvertiseProductA(LPCSTR szPackagePath, LPCSTR szScriptfilePath, LPCSTR szTransforms, LANGID lgidLanguage);
UINT WINAPI MsiAdvertiseProductW(LPCWSTR szPackagePath, LPCWSTR szScriptfilePath, LPCWSTR szTransforms, LANGID lgidLanguage);
#ifdef UNICODE
#define MsiAdvertiseProduct  MsiAdvertiseProductW
#else
#define MsiAdvertiseProduct  MsiAdvertiseProductA
#endif
#if (_WIN32_MSI >=  150)
UINT WINAPI MsiProcessAdvertiseScriptA(LPCSTR szScriptFile, LPCSTR szIconFolder, HKEY hRegData, BOOL fShortcuts, BOOL fRemoveItems);
UINT WINAPI MsiProcessAdvertiseScriptW(LPCWSTR szScriptFile, LPCWSTR szIconFolder, HKEY hRegData, BOOL fShortcuts, BOOL fRemoveItems);
#ifdef UNICODE
#define MsiProcessAdvertiseScript  MsiProcessAdvertiseScriptW
#else
#define MsiProcessAdvertiseScript  MsiProcessAdvertiseScriptA
#endif
#endif
UINT WINAPI MsiAdvertiseScriptA(LPCSTR szScriptFile, DWORD dwFlags, PHKEY phRegData, BOOL fRemoveItems);
UINT WINAPI MsiAdvertiseScriptW(LPCWSTR szScriptFile, DWORD dwFlags, PHKEY phRegData, BOOL fRemoveItems);
#ifdef UNICODE
#define MsiAdvertiseScript  MsiAdvertiseScriptW
#else
#define MsiAdvertiseScript  MsiAdvertiseScriptA
#endif
UINT WINAPI MsiGetProductInfoFromScriptA(LPCSTR szScriptFile, LPSTR lpProductBuf39, LANGID *plgidLanguage, LPDWORD pdwVersion, LPSTR lpNameBuf, LPDWORD pcchNameBuf, LPSTR lpPackageBuf, LPDWORD pcchPackageBuf);
UINT WINAPI MsiGetProductInfoFromScriptW(LPCWSTR szScriptFile, LPWSTR lpProductBuf39, LANGID *plgidLanguage, LPDWORD pdwVersion, LPWSTR lpNameBuf, LPDWORD pcchNameBuf, LPWSTR lpPackageBuf, LPDWORD pcchPackageBuf);
#ifdef UNICODE
#define MsiGetProductInfoFromScript  MsiGetProductInfoFromScriptW
#else
#define MsiGetProductInfoFromScript  MsiGetProductInfoFromScriptA
#endif
UINT WINAPI MsiGetProductCodeA(LPCSTR szComponent, LPSTR lpBuf39);
UINT WINAPI MsiGetProductCodeW(LPCWSTR szComponent, LPWSTR lpBuf39);
#ifdef UNICODE
#define MsiGetProductCode  MsiGetProductCodeW
#else
#define MsiGetProductCode  MsiGetProductCodeA
#endif
USERINFOSTATE WINAPI MsiGetUserInfoA(LPCSTR szProduct, LPSTR lpUserNameBuf, LPDWORD pcchUserNameBuf, LPSTR lpOrgNameBuf, LPDWORD pcchOrgNameBuf, LPSTR lpSerialBuf, LPDWORD pcchSerialBuf);
USERINFOSTATE WINAPI MsiGetUserInfoW(LPCWSTR szProduct, LPWSTR lpUserNameBuf, LPDWORD pcchUserNameBuf, LPWSTR lpOrgNameBuf, LPDWORD pcchOrgNameBuf, LPWSTR lpSerialBuf, LPDWORD pcchSerialBuf);
#ifdef UNICODE
#define MsiGetUserInfo  MsiGetUserInfoW
#else
#define MsiGetUserInfo  MsiGetUserInfoA
#endif
UINT WINAPI MsiCollectUserInfoA(LPCSTR szProduct);
UINT WINAPI MsiCollectUserInfoW(LPCWSTR szProduct);
#ifdef UNICODE
#define MsiCollectUserInfo  MsiCollectUserInfoW
#else
#define MsiCollectUserInfo  MsiCollectUserInfoA
#endif
UINT WINAPI MsiApplyPatchA(LPCSTR szPatchPackage, LPCSTR szInstallPackage, INSTALLTYPE eInstallType, LPCSTR szCommandLine);
UINT WINAPI MsiApplyPatchW(LPCWSTR szPatchPackage, LPCWSTR szInstallPackage, INSTALLTYPE eInstallType, LPCWSTR szCommandLine);
#ifdef UNICODE
#define MsiApplyPatch  MsiApplyPatchW
#else
#define MsiApplyPatch  MsiApplyPatchA
#endif
UINT WINAPI MsiGetPatchInfoA(LPCSTR szPatch, LPCSTR szAttribute, LPSTR lpValueBuf, LPDWORD pcchValueBuf);
UINT WINAPI MsiGetPatchInfoW(LPCWSTR szPatch, LPCWSTR szAttribute, LPWSTR lpValueBuf, LPDWORD pcchValueBuf);
#ifdef UNICODE
#define MsiGetPatchInfo  MsiGetPatchInfoW
#else
#define MsiGetPatchInfo  MsiGetPatchInfoA
#endif
UINT WINAPI MsiEnumPatchesA(LPCSTR szProduct, DWORD iPatchIndex, LPSTR lpPatchBuf, LPSTR lpTransformsBuf, LPDWORD pcchTransformsBuf);
UINT WINAPI MsiEnumPatchesW(LPCWSTR szProduct, DWORD iPatchIndex, LPWSTR lpPatchBuf, LPWSTR lpTransformsBuf, LPDWORD pcchTransformsBuf);
#ifdef UNICODE
#define MsiEnumPatches  MsiEnumPatchesW
#else
#define MsiEnumPatches  MsiEnumPatchesA
#endif

#if (_WIN32_MSI >= 300)
UINT WINAPI MsiRemovePatchesA(LPCSTR szPatchList, LPCSTR szProductCode, INSTALLTYPE eUninstallType, LPCSTR szPropertyList);
UINT WINAPI MsiRemovePatchesW(LPCWSTR szPatchList, LPCWSTR szProductCode, INSTALLTYPE eUninstallType, LPCWSTR szPropertyList);
#ifdef UNICODE
#define MsiRemovePatches  MsiRemovePatchesW
#else
#define MsiRemovePatches  MsiRemovePatchesA
#endif
UINT WINAPI MsiExtractPatchXMLDataA(LPCSTR szPatchPath, DWORD dwReserved, LPSTR szXMLData, LPDWORD pcchXMLData);
UINT WINAPI MsiExtractPatchXMLDataW(LPCWSTR szPatchPath, DWORD dwReserved, LPWSTR szXMLData, LPDWORD pcchXMLData);
#ifdef UNICODE
#define MsiExtractPatchXMLData  MsiExtractPatchXMLDataW
#else
#define MsiExtractPatchXMLData  MsiExtractPatchXMLDataA
#endif
UINT WINAPI MsiGetPatchInfoExA(LPCSTR szPatchCode, LPCSTR szProductCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPCSTR szProperty, LPSTR lpValue, LPDWORD pcchValue);
UINT WINAPI MsiGetPatchInfoExW(LPCWSTR szPatchCode, LPCWSTR szProductCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPCWSTR szProperty, LPWSTR lpValue, LPDWORD pcchValue);
#ifdef UNICODE
#define MsiGetPatchInfoEx  MsiGetPatchInfoExW
#else
#define MsiGetPatchInfoEx  MsiGetPatchInfoExA
#endif
UINT WINAPI MsiApplyMultiplePatchesA(LPCSTR szPatchPackages, LPCSTR szProductCode, LPCSTR szPropertiesList);
UINT WINAPI MsiApplyMultiplePatchesW(LPCWSTR szPatchPackages, LPCWSTR szProductCode, LPCWSTR szPropertiesList);
#ifdef UNICODE
#define MsiApplyMultiplePatches  MsiApplyMultiplePatchesW
#else
#define MsiApplyMultiplePatches  MsiApplyMultiplePatchesA
#endif
UINT WINAPI MsiDeterminePatchSequenceA(LPCSTR szProductCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD cPatchInfo, PMSIPATCHSEQUENCEINFOA pPatchInfo);
UINT WINAPI MsiDeterminePatchSequenceW(LPCWSTR szProductCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD cPatchInfo, PMSIPATCHSEQUENCEINFOW pPatchInfo);
#ifdef UNICODE
#define MsiDeterminePatchSequence  MsiDeterminePatchSequenceW
#else
#define MsiDeterminePatchSequence  MsiDeterminePatchSequenceA
#endif
UINT WINAPI MsiDetermineApplicablePatchesA(LPCSTR szProductPackagePath, DWORD cPatchInfo, PMSIPATCHSEQUENCEINFOA pPatchInfo);
UINT WINAPI MsiDetermineApplicablePatchesW(LPCWSTR szProductPackagePath, DWORD cPatchInfo, PMSIPATCHSEQUENCEINFOW pPatchInfo);
#ifdef UNICODE
#define MsiDetermineApplicablePatches  MsiDetermineApplicablePatchesW
#else
#define MsiDetermineApplicablePatches  MsiDetermineApplicablePatchesA
#endif
UINT WINAPI MsiEnumPatchesExA(LPCSTR szProductCode, LPCSTR szUserSid, DWORD dwContext, DWORD dwFilter, DWORD dwIndex, CHAR szPatchCode[39], CHAR szTargetProductCode[39], MSIINSTALLCONTEXT *pdwTargetProductContext, LPSTR szTargetUserSid, LPDWORD pcchTargetUserSid);
UINT WINAPI MsiEnumPatchesExW(LPCWSTR szProductCode, LPCWSTR szUserSid, DWORD dwContext, DWORD dwFilter, DWORD dwIndex, WCHAR szPatchCode[39], WCHAR szTargetProductCode[39], MSIINSTALLCONTEXT *pdwTargetProductContext, LPWSTR szTargetUserSid, LPDWORD pcchTargetUserSid);
#ifdef UNICODE
#define MsiEnumPatchesEx  MsiEnumPatchesExW
#else
#define MsiEnumPatchesEx  MsiEnumPatchesExA
#endif
#endif
INSTALLSTATE WINAPI MsiQueryFeatureStateA(LPCSTR szProduct, LPCSTR szFeature);
INSTALLSTATE WINAPI MsiQueryFeatureStateW(LPCWSTR szProduct, LPCWSTR szFeature);
#ifdef UNICODE
#define MsiQueryFeatureState  MsiQueryFeatureStateW
#else
#define MsiQueryFeatureState  MsiQueryFeatureStateA
#endif
#if (_WIN32_MSI >= 300)
UINT WINAPI MsiQueryFeatureStateExA(LPCSTR szProductCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPCSTR szFeature, INSTALLSTATE *pdwState);
UINT WINAPI MsiQueryFeatureStateExW(LPCWSTR szProductCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPCWSTR szFeature, INSTALLSTATE *pdwState);
#ifdef UNICODE
#define MsiQueryFeatureStateEx  MsiQueryFeatureStateExW
#else
#define MsiQueryFeatureStateEx  MsiQueryFeatureStateExA
#endif
#endif
INSTALLSTATE WINAPI MsiUseFeatureA(LPCSTR szProduct, LPCSTR szFeature);
INSTALLSTATE WINAPI MsiUseFeatureW(LPCWSTR szProduct, LPCWSTR szFeature);
#ifdef UNICODE
#define MsiUseFeature  MsiUseFeatureW
#else
#define MsiUseFeature  MsiUseFeatureA
#endif
INSTALLSTATE WINAPI MsiUseFeatureExA(LPCSTR szProduct, LPCSTR szFeature, DWORD dwInstallMode, DWORD dwReserved);
INSTALLSTATE WINAPI MsiUseFeatureExW(LPCWSTR szProduct, LPCWSTR szFeature, DWORD dwInstallMode, DWORD dwReserved);
#ifdef UNICODE
#define MsiUseFeatureEx  MsiUseFeatureExW
#else
#define MsiUseFeatureEx  MsiUseFeatureExA
#endif
UINT WINAPI MsiGetFeatureUsageA(LPCSTR szProduct, LPCSTR szFeature, LPDWORD pdwUseCount, LPWORD pwDateUsed);
UINT WINAPI MsiGetFeatureUsageW(LPCWSTR szProduct, LPCWSTR szFeature, LPDWORD pdwUseCount, LPWORD pwDateUsed);
#ifdef UNICODE
#define MsiGetFeatureUsage  MsiGetFeatureUsageW
#else
#define MsiGetFeatureUsage  MsiGetFeatureUsageA
#endif
UINT WINAPI MsiConfigureFeatureA(LPCSTR szProduct, LPCSTR szFeature, INSTALLSTATE eInstallState);
UINT WINAPI MsiConfigureFeatureW(LPCWSTR szProduct, LPCWSTR szFeature, INSTALLSTATE eInstallState);
#ifdef UNICODE
#define MsiConfigureFeature  MsiConfigureFeatureW
#else
#define MsiConfigureFeature  MsiConfigureFeatureA
#endif
UINT WINAPI MsiReinstallFeatureA(LPCSTR szProduct, LPCSTR szFeature, DWORD dwReinstallMode);
UINT WINAPI MsiReinstallFeatureW(LPCWSTR szProduct, LPCWSTR szFeature, DWORD dwReinstallMode);
#ifdef UNICODE
#define MsiReinstallFeature  MsiReinstallFeatureW
#else
#define MsiReinstallFeature  MsiReinstallFeatureA
#endif
UINT WINAPI MsiProvideComponentA(LPCSTR szProduct, LPCSTR szFeature, LPCSTR szComponent, DWORD dwInstallMode, LPSTR lpPathBuf, LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideComponentW(LPCWSTR szProduct, LPCWSTR szFeature, LPCWSTR szComponent, DWORD dwInstallMode, LPWSTR lpPathBuf, LPDWORD pcchPathBuf);
#ifdef UNICODE
#define MsiProvideComponent  MsiProvideComponentW
#else
#define MsiProvideComponent  MsiProvideComponentA
#endif
UINT WINAPI MsiProvideQualifiedComponentA(LPCSTR szCategory, LPCSTR szQualifier, DWORD dwInstallMode, LPSTR lpPathBuf, LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideQualifiedComponentW(LPCWSTR szCategory, LPCWSTR szQualifier, DWORD dwInstallMode, LPWSTR lpPathBuf, LPDWORD pcchPathBuf);
#ifdef UNICODE
#define MsiProvideQualifiedComponent  MsiProvideQualifiedComponentW
#else
#define MsiProvideQualifiedComponent  MsiProvideQualifiedComponentA
#endif
UINT WINAPI MsiProvideQualifiedComponentExA(LPCSTR szCategory, LPCSTR szQualifier, DWORD dwInstallMode, LPCSTR szProduct, DWORD dwUnused1, DWORD dwUnused2, LPSTR lpPathBuf, LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideQualifiedComponentExW(LPCWSTR szCategory, LPCWSTR szQualifier, DWORD dwInstallMode, LPCWSTR szProduct, DWORD dwUnused1, DWORD dwUnused2, LPWSTR lpPathBuf, LPDWORD pcchPathBuf);
#ifdef UNICODE
#define MsiProvideQualifiedComponentEx  MsiProvideQualifiedComponentExW
#else
#define MsiProvideQualifiedComponentEx  MsiProvideQualifiedComponentExA
#endif
INSTALLSTATE WINAPI MsiGetComponentPathA(LPCSTR szProduct, LPCSTR szComponent, LPSTR lpPathBuf, LPDWORD pcchBuf);
INSTALLSTATE WINAPI MsiGetComponentPathW(LPCWSTR szProduct, LPCWSTR szComponent, LPWSTR lpPathBuf, LPDWORD pcchBuf);
#ifdef UNICODE
#define MsiGetComponentPath  MsiGetComponentPathW
#else
#define MsiGetComponentPath  MsiGetComponentPathA
#endif
#if (_WIN32_MSI >= 500)
INSTALLSTATE WINAPI MsiGetComponentPathExA(LPCSTR szProductCode, LPCSTR szComponentCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPSTR lpOutPathBuffer, LPDWORD pcchOutPathBuffer);
INSTALLSTATE WINAPI MsiGetComponentPathExW(LPCWSTR szProductCode, LPCWSTR szComponentCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPWSTR lpOutPathBuffer, LPDWORD pcchOutPathBuffer);
#ifdef UNICODE
#define MsiGetComponentPathEx  MsiGetComponentPathExW
#else
#define MsiGetComponentPathEx  MsiGetComponentPathExA
#endif
#endif
#if (_WIN32_MSI >= 150)
#define MSIASSEMBLYINFO_NETASSEMBLY   0
#define MSIASSEMBLYINFO_WIN32ASSEMBLY 1
UINT WINAPI MsiProvideAssemblyA(LPCSTR szAssemblyName, LPCSTR szAppContext, DWORD dwInstallMode, DWORD dwAssemblyInfo, LPSTR lpPathBuf, LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideAssemblyW(LPCWSTR szAssemblyName, LPCWSTR szAppContext, DWORD dwInstallMode, DWORD dwAssemblyInfo, LPWSTR lpPathBuf, LPDWORD pcchPathBuf);
#ifdef UNICODE
#define MsiProvideAssembly  MsiProvideAssemblyW
#else
#define MsiProvideAssembly  MsiProvideAssemblyA
#endif
#endif
#if (_WIN32_MSI >= 300)
UINT WINAPI MsiQueryComponentStateA(LPCSTR szProductCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPCSTR szComponentCode, INSTALLSTATE *pdwState);
UINT WINAPI MsiQueryComponentStateW(LPCWSTR szProductCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, LPCWSTR szComponentCode, INSTALLSTATE *pdwState);
#ifdef UNICODE
#define MsiQueryComponentState  MsiQueryComponentStateW
#else
#define MsiQueryComponentState  MsiQueryComponentStateA
#endif
#endif
UINT WINAPI MsiEnumProductsA(DWORD iProductIndex, LPSTR lpProductBuf);
UINT WINAPI MsiEnumProductsW(DWORD iProductIndex, LPWSTR lpProductBuf);
#ifdef UNICODE
#define MsiEnumProducts  MsiEnumProductsW
#else
#define MsiEnumProducts  MsiEnumProductsA
#endif
#if (_WIN32_MSI >= 300)
UINT WINAPI MsiEnumProductsExA(LPCSTR szProductCode, LPCSTR szUserSid, DWORD dwContext, DWORD dwIndex, CHAR szInstalledProductCode[39], MSIINSTALLCONTEXT *pdwInstalledContext, LPSTR szSid, LPDWORD pcchSid);
UINT WINAPI MsiEnumProductsExW(LPCWSTR szProductCode, LPCWSTR szUserSid, DWORD dwContext, DWORD dwIndex, WCHAR szInstalledProductCode[39], MSIINSTALLCONTEXT *pdwInstalledContext, LPWSTR szSid, LPDWORD pcchSid);
#ifdef UNICODE
#define MsiEnumProductsEx  MsiEnumProductsExW
#else
#define MsiEnumProductsEx  MsiEnumProductsExA
#endif
#endif
#if (_WIN32_MSI >=  110)
UINT WINAPI MsiEnumRelatedProductsA(LPCSTR lpUpgradeCode, DWORD dwReserved, DWORD iProductIndex, LPSTR lpProductBuf);
UINT WINAPI MsiEnumRelatedProductsW(LPCWSTR lpUpgradeCode, DWORD dwReserved, DWORD iProductIndex, LPWSTR lpProductBuf);
#ifdef UNICODE
#define MsiEnumRelatedProducts  MsiEnumRelatedProductsW
#else
#define MsiEnumRelatedProducts  MsiEnumRelatedProductsA
#endif
#endif
UINT WINAPI MsiEnumFeaturesA(LPCSTR szProduct, DWORD iFeatureIndex, LPSTR lpFeatureBuf, LPSTR lpParentBuf);
UINT WINAPI MsiEnumFeaturesW(LPCWSTR szProduct, DWORD iFeatureIndex, LPWSTR lpFeatureBuf, LPWSTR lpParentBuf);
#ifdef UNICODE
#define MsiEnumFeatures  MsiEnumFeaturesW
#else
#define MsiEnumFeatures  MsiEnumFeaturesA
#endif
UINT WINAPI MsiEnumComponentsA(DWORD iComponentIndex, LPSTR lpComponentBuf);
UINT WINAPI MsiEnumComponentsW(DWORD iComponentIndex, LPWSTR lpComponentBuf);
#ifdef UNICODE
#define MsiEnumComponents  MsiEnumComponentsW
#else
#define MsiEnumComponents  MsiEnumComponentsA
#endif
#if (_WIN32_MSI >=  500)
UINT WINAPI MsiEnumComponentsExA(LPCSTR szUserSid, DWORD dwContext, DWORD dwIndex, CHAR szInstalledComponentCode[39], MSIINSTALLCONTEXT *pdwInstalledContext, LPSTR szSid, LPDWORD pcchSid);
UINT WINAPI MsiEnumComponentsExW(LPCWSTR szUserSid, DWORD dwContext, DWORD dwIndex, WCHAR szInstalledComponentCode[39], MSIINSTALLCONTEXT *pdwInstalledContext, LPWSTR szSid, LPDWORD pcchSid);
#ifdef UNICODE
#define MsiEnumComponentsEx  MsiEnumComponentsExW
#else
#define MsiEnumComponentsEx  MsiEnumComponentsExA
#endif

#endif
UINT WINAPI MsiEnumClientsA(LPCSTR szComponent, DWORD iProductIndex, LPSTR lpProductBuf);
UINT WINAPI MsiEnumClientsW(LPCWSTR szComponent, DWORD iProductIndex, LPWSTR lpProductBuf);
#ifdef UNICODE
#define MsiEnumClients  MsiEnumClientsW
#else
#define MsiEnumClients  MsiEnumClientsA
#endif
#if (_WIN32_MSI >=  500)
UINT WINAPI MsiEnumClientsExA(LPCSTR szComponent, LPCSTR szUserSid, DWORD dwContext, DWORD dwProductIndex, CHAR szProductBuf[39], MSIINSTALLCONTEXT *pdwInstalledContext, LPSTR szSid, LPDWORD pcchSid);
UINT WINAPI MsiEnumClientsExW(LPCWSTR szComponent, LPCWSTR szUserSid, DWORD dwContext, DWORD dwProductIndex, WCHAR szProductBuf[39], MSIINSTALLCONTEXT *pdwInstalledContext, LPWSTR szSid, LPDWORD pcchSid);
#ifdef UNICODE
#define MsiEnumClientsEx  MsiEnumClientsExW
#else
#define MsiEnumClientsEx  MsiEnumClientsExA
#endif
#endif
UINT WINAPI MsiEnumComponentQualifiersA(LPCSTR szComponent, DWORD iIndex, LPSTR lpQualifierBuf, LPDWORD pcchQualifierBuf, LPSTR lpApplicationDataBuf, LPDWORD pcchApplicationDataBuf);
UINT WINAPI MsiEnumComponentQualifiersW(LPCWSTR szComponent, DWORD iIndex, LPWSTR lpQualifierBuf, LPDWORD pcchQualifierBuf, LPWSTR lpApplicationDataBuf, LPDWORD pcchApplicationDataBuf);
#ifdef UNICODE
#define MsiEnumComponentQualifiers  MsiEnumComponentQualifiersW
#else
#define MsiEnumComponentQualifiers  MsiEnumComponentQualifiersA
#endif
UINT WINAPI MsiOpenProductA(LPCSTR szProduct, MSIHANDLE *hProduct);
UINT WINAPI MsiOpenProductW(LPCWSTR szProduct, MSIHANDLE *hProduct);
#ifdef UNICODE
#define MsiOpenProduct  MsiOpenProductW
#else
#define MsiOpenProduct  MsiOpenProductA
#endif
UINT WINAPI MsiOpenPackageA(LPCSTR szPackagePath, MSIHANDLE *hProduct);
UINT WINAPI MsiOpenPackageW(LPCWSTR szPackagePath, MSIHANDLE *hProduct);
#ifdef UNICODE
#define MsiOpenPackage  MsiOpenPackageW
#else
#define MsiOpenPackage  MsiOpenPackageA
#endif
#if (_WIN32_MSI >=  150)
UINT WINAPI MsiOpenPackageExA(LPCSTR szPackagePath, DWORD dwOptions, MSIHANDLE *hProduct);
UINT WINAPI MsiOpenPackageExW(LPCWSTR szPackagePath, DWORD dwOptions, MSIHANDLE *hProduct);
#ifdef UNICODE
#define MsiOpenPackageEx  MsiOpenPackageExW
#else
#define MsiOpenPackageEx  MsiOpenPackageExA
#endif
#endif
#if (_WIN32_MSI >= 400)
UINT WINAPI MsiGetPatchFileListA(LPCSTR szProductCode, LPCSTR szPatchPackages, LPDWORD pcFiles, MSIHANDLE **pphFileRecords);
UINT WINAPI MsiGetPatchFileListW(LPCWSTR szProductCode, LPCWSTR szPatchPackages, LPDWORD pcFiles, MSIHANDLE **pphFileRecords);
#ifdef UNICODE
#define MsiGetPatchFileList  MsiGetPatchFileListW
#else
#define MsiGetPatchFileList  MsiGetPatchFileListA
#endif
#endif
UINT WINAPI MsiGetProductPropertyA(MSIHANDLE hProduct, LPCSTR szProperty, LPSTR lpValueBuf, LPDWORD pcchValueBuf);
UINT WINAPI MsiGetProductPropertyW(MSIHANDLE hProduct, LPCWSTR szProperty, LPWSTR lpValueBuf, LPDWORD pcchValueBuf);
#ifdef UNICODE
#define MsiGetProductProperty  MsiGetProductPropertyW
#else
#define MsiGetProductProperty  MsiGetProductPropertyA
#endif
UINT WINAPI MsiVerifyPackageA(LPCSTR szPackagePath);
UINT WINAPI MsiVerifyPackageW(LPCWSTR szPackagePath);
#ifdef UNICODE
#define MsiVerifyPackage  MsiVerifyPackageW
#else
#define MsiVerifyPackage  MsiVerifyPackageA
#endif
UINT WINAPI MsiGetFeatureInfoA(MSIHANDLE hProduct, LPCSTR szFeature, LPDWORD lpAttributes, LPSTR lpTitleBuf, LPDWORD pcchTitleBuf, LPSTR lpHelpBuf, LPDWORD pcchHelpBuf);
UINT WINAPI MsiGetFeatureInfoW(MSIHANDLE hProduct, LPCWSTR szFeature, LPDWORD lpAttributes, LPWSTR lpTitleBuf, LPDWORD pcchTitleBuf, LPWSTR lpHelpBuf, LPDWORD pcchHelpBuf);
#ifdef UNICODE
#define MsiGetFeatureInfo  MsiGetFeatureInfoW
#else
#define MsiGetFeatureInfo  MsiGetFeatureInfoA
#endif
UINT WINAPI MsiInstallMissingComponentA(LPCSTR szProduct, LPCSTR szComponent, INSTALLSTATE eInstallState);
UINT WINAPI MsiInstallMissingComponentW(LPCWSTR szProduct, LPCWSTR szComponent, INSTALLSTATE eInstallState);
#ifdef UNICODE
#define MsiInstallMissingComponent  MsiInstallMissingComponentW
#else
#define MsiInstallMissingComponent  MsiInstallMissingComponentA
#endif
UINT WINAPI MsiInstallMissingFileA(LPCSTR szProduct, LPCSTR szFile);
UINT WINAPI MsiInstallMissingFileW(LPCWSTR szProduct, LPCWSTR szFile);
#ifdef UNICODE
#define MsiInstallMissingFile  MsiInstallMissingFileW
#else
#define MsiInstallMissingFile  MsiInstallMissingFileA
#endif
INSTALLSTATE WINAPI MsiLocateComponentA(LPCSTR szComponent, LPSTR lpPathBuf, LPDWORD pcchBuf);
INSTALLSTATE WINAPI MsiLocateComponentW(LPCWSTR szComponent, LPWSTR lpPathBuf, LPDWORD pcchBuf);
#ifdef UNICODE
#define MsiLocateComponent  MsiLocateComponentW
#else
#define MsiLocateComponent  MsiLocateComponentA
#endif
#if (_WIN32_MSI >=  110)
UINT WINAPI MsiSourceListClearAllA(LPCSTR szProduct, LPCSTR szUserName, DWORD dwReserved);
UINT WINAPI MsiSourceListClearAllW(LPCWSTR szProduct, LPCWSTR szUserName, DWORD dwReserved);
#ifdef UNICODE
#define MsiSourceListClearAll  MsiSourceListClearAllW
#else
#define MsiSourceListClearAll  MsiSourceListClearAllA
#endif
UINT WINAPI MsiSourceListAddSourceA(LPCSTR szProduct, LPCSTR szUserName, DWORD dwReserved, LPCSTR szSource);
UINT WINAPI MsiSourceListAddSourceW(LPCWSTR szProduct, LPCWSTR szUserName, DWORD dwReserved, LPCWSTR szSource);
#ifdef UNICODE
#define MsiSourceListAddSource  MsiSourceListAddSourceW
#else
#define MsiSourceListAddSource  MsiSourceListAddSourceA
#endif
UINT WINAPI MsiSourceListForceResolutionA(LPCSTR szProduct, LPCSTR szUserName, DWORD dwReserved);
UINT WINAPI MsiSourceListForceResolutionW(LPCWSTR szProduct, LPCWSTR szUserName, DWORD dwReserved);
#ifdef UNICODE
#define MsiSourceListForceResolution  MsiSourceListForceResolutionW
#else
#define MsiSourceListForceResolution  MsiSourceListForceResolutionA
#endif
#endif
#if (_WIN32_MSI >= 300)
UINT WINAPI MsiSourceListAddSourceExA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, LPCSTR szSource, DWORD dwIndex);
UINT WINAPI MsiSourceListAddSourceExW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, LPCWSTR szSource, DWORD dwIndex);
#ifdef UNICODE
#define MsiSourceListAddSourceEx  MsiSourceListAddSourceExW
#else
#define MsiSourceListAddSourceEx  MsiSourceListAddSourceExA
#endif
UINT WINAPI MsiSourceListAddMediaDiskA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, DWORD dwDiskId, LPCSTR szVolumeLabel, LPCSTR szDiskPrompt);
UINT WINAPI MsiSourceListAddMediaDiskW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, DWORD dwDiskId, LPCWSTR szVolumeLabel, LPCWSTR szDiskPrompt);
#ifdef UNICODE
#define MsiSourceListAddMediaDisk  MsiSourceListAddMediaDiskW
#else
#define MsiSourceListAddMediaDisk  MsiSourceListAddMediaDiskA
#endif
UINT WINAPI MsiSourceListClearSourceA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, LPCSTR szSource);
UINT WINAPI MsiSourceListClearSourceW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, LPCWSTR szSource);
#ifdef UNICODE
#define MsiSourceListClearSource  MsiSourceListClearSourceW
#else
#define MsiSourceListClearSource  MsiSourceListClearSourceA
#endif
UINT WINAPI MsiSourceListClearMediaDiskA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, DWORD dwDiskId);
UINT WINAPI MsiSourceListClearMediaDiskW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, DWORD dwDiskId);
#ifdef UNICODE
#define MsiSourceListClearMediaDisk  MsiSourceListClearMediaDiskW
#else
#define MsiSourceListClearMediaDisk  MsiSourceListClearMediaDiskA
#endif
UINT WINAPI MsiSourceListClearAllExA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions);
UINT WINAPI MsiSourceListClearAllExW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions);
#ifdef UNICODE
#define MsiSourceListClearAllEx  MsiSourceListClearAllExW
#else
#define MsiSourceListClearAllEx  MsiSourceListClearAllExA
#endif
UINT WINAPI MsiSourceListForceResolutionExA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions);
UINT WINAPI MsiSourceListForceResolutionExW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions);
#ifdef UNICODE
#define MsiSourceListForceResolutionEx  MsiSourceListForceResolutionExW
#else
#define MsiSourceListForceResolutionEx  MsiSourceListForceResolutionExA
#endif
UINT WINAPI MsiSourceListSetInfoA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, LPCSTR szProperty, LPCSTR szValue);
UINT WINAPI MsiSourceListSetInfoW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, LPCWSTR szProperty, LPCWSTR szValue);
#ifdef UNICODE
#define MsiSourceListSetInfo  MsiSourceListSetInfoW
#else
#define MsiSourceListSetInfo  MsiSourceListSetInfoA
#endif
UINT WINAPI MsiSourceListGetInfoA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, LPCSTR szProperty, LPSTR szValue, LPDWORD pcchValue);
UINT WINAPI MsiSourceListGetInfoW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, LPCWSTR szProperty, LPWSTR szValue, LPDWORD pcchValue);
#ifdef UNICODE
#define MsiSourceListGetInfo  MsiSourceListGetInfoW
#else
#define MsiSourceListGetInfo  MsiSourceListGetInfoA
#endif
UINT WINAPI MsiSourceListEnumSourcesA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, DWORD dwIndex, LPSTR szSource, LPDWORD pcchSource);
UINT WINAPI MsiSourceListEnumSourcesW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, DWORD dwIndex, LPWSTR szSource, LPDWORD pcchSource);
#ifdef UNICODE
#define MsiSourceListEnumSources  MsiSourceListEnumSourcesW
#else
#define MsiSourceListEnumSources  MsiSourceListEnumSourcesA
#endif
UINT WINAPI MsiSourceListEnumMediaDisksA(LPCSTR szProductCodeOrPatchCode, LPCSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, DWORD dwIndex, LPDWORD pdwDiskId, LPSTR szVolumeLabel, LPDWORD pcchVolumeLabel, LPSTR szDiskPrompt, LPDWORD pcchDiskPrompt);
UINT WINAPI MsiSourceListEnumMediaDisksW(LPCWSTR szProductCodeOrPatchCode, LPCWSTR szUserSid, MSIINSTALLCONTEXT dwContext, DWORD dwOptions, DWORD dwIndex, LPDWORD pdwDiskId, LPWSTR szVolumeLabel, LPDWORD pcchVolumeLabel, LPWSTR szDiskPrompt, LPDWORD pcchDiskPrompt);
#ifdef UNICODE
#define MsiSourceListEnumMediaDisks  MsiSourceListEnumMediaDisksW
#else
#define MsiSourceListEnumMediaDisks  MsiSourceListEnumMediaDisksA
#endif
#endif
UINT WINAPI MsiGetFileVersionA(LPCSTR szFilePath, LPSTR lpVersionBuf, LPDWORD pcchVersionBuf, LPSTR lpLangBuf, LPDWORD pcchLangBuf);
UINT WINAPI MsiGetFileVersionW(LPCWSTR szFilePath, LPWSTR lpVersionBuf, LPDWORD pcchVersionBuf, LPWSTR lpLangBuf, LPDWORD pcchLangBuf);
#ifdef UNICODE
#define MsiGetFileVersion  MsiGetFileVersionW
#else
#define MsiGetFileVersion  MsiGetFileVersionA
#endif
#if (_WIN32_MSI >=  150)
UINT WINAPI MsiGetFileHashA(LPCSTR szFilePath, DWORD dwOptions, PMSIFILEHASHINFO pHash);
UINT WINAPI MsiGetFileHashW(LPCWSTR szFilePath, DWORD dwOptions, PMSIFILEHASHINFO pHash);
#ifdef UNICODE
#define MsiGetFileHash  MsiGetFileHashW
#else
#define MsiGetFileHash  MsiGetFileHashA
#endif
#endif
#if (_WIN32_MSI >= 150)
#ifndef _MSI_NO_CRYPTO
HRESULT WINAPI MsiGetFileSignatureInformationA(LPCSTR szSignedObjectPath, DWORD dwFlags, PCCERT_CONTEXT *ppcCertContext, LPBYTE pbHashData, LPDWORD pcbHashData);
HRESULT WINAPI MsiGetFileSignatureInformationW(LPCWSTR szSignedObjectPath, DWORD dwFlags, PCCERT_CONTEXT *ppcCertContext, LPBYTE pbHashData, LPDWORD pcbHashData);
#ifdef UNICODE
#define MsiGetFileSignatureInformation  MsiGetFileSignatureInformationW
#else
#define MsiGetFileSignatureInformation  MsiGetFileSignatureInformationA
#endif
#define MSI_INVALID_HASH_IS_FATAL 0x1
#endif
#endif
#if (_WIN32_MSI >=  110)
UINT WINAPI MsiGetShortcutTargetA(LPCSTR szShortcutPath, LPSTR szProductCode, LPSTR szFeatureId, LPSTR szComponentCode);
UINT WINAPI MsiGetShortcutTargetW(LPCWSTR szShortcutPath, LPWSTR szProductCode, LPWSTR szFeatureId, LPWSTR szComponentCode);
#ifdef UNICODE
#define MsiGetShortcutTarget  MsiGetShortcutTargetW
#else
#define MsiGetShortcutTarget  MsiGetShortcutTargetA
#endif
#endif
#if (_WIN32_MSI >=  110)
UINT WINAPI MsiIsProductElevatedA(LPCSTR szProduct, BOOL *pfElevated);
UINT WINAPI MsiIsProductElevatedW(LPCWSTR szProduct, BOOL *pfElevated);
#ifdef UNICODE
#define MsiIsProductElevated  MsiIsProductElevatedW
#else
#define MsiIsProductElevated  MsiIsProductElevatedA
#endif
#endif
#if (_WIN32_MSI >= 310)
UINT WINAPI MsiNotifySidChangeA(LPCSTR pOldSid, LPCSTR pNewSid);
UINT WINAPI MsiNotifySidChangeW(LPCWSTR pOldSid, LPCWSTR pNewSid);
#ifdef UNICODE
#define MsiNotifySidChange  MsiNotifySidChangeW
#else
#define MsiNotifySidChange  MsiNotifySidChangeA
#endif
#else
#endif
#if (_WIN32_MSI >=  450)
UINT WINAPI MsiBeginTransactionA(LPCSTR szName, DWORD dwTransactionAttributes, MSIHANDLE *phTransactionHandle, HANDLE *phChangeOfOwnerEvent);
UINT WINAPI MsiBeginTransactionW(LPCWSTR szName, DWORD dwTransactionAttributes, MSIHANDLE *phTransactionHandle, HANDLE *phChangeOfOwnerEvent);
#ifdef UNICODE
#define MsiBeginTransaction  MsiBeginTransactionW
#else
#define MsiBeginTransaction  MsiBeginTransactionA
#endif
UINT WINAPI MsiEndTransaction(DWORD dwTransactionState);
UINT WINAPI MsiJoinTransaction(MSIHANDLE hTransactionHandle, DWORD dwTransactionAttributes, HANDLE *phChangeOfOwnerEvent);
#endif
#ifndef ERROR_INSTALL_FAILURE
#define ERROR_INSTALL_USEREXIT      1602L
#define ERROR_INSTALL_FAILURE       1603L
#define ERROR_INSTALL_SUSPEND       1604L
#define ERROR_UNKNOWN_PRODUCT       1605L
#define ERROR_UNKNOWN_FEATURE       1606L
#define ERROR_UNKNOWN_COMPONENT     1607L
#define ERROR_UNKNOWN_PROPERTY      1608L
#define ERROR_INVALID_HANDLE_STATE  1609L
#define ERROR_BAD_CONFIGURATION     1610L
#define ERROR_INDEX_ABSENT          1611L
#define ERROR_INSTALL_SOURCE_ABSENT 1612L
#define ERROR_PRODUCT_UNINSTALLED   1614L
#define ERROR_BAD_QUERY_SYNTAX      1615L
#define ERROR_INVALID_FIELD         1616L
#endif
#ifndef ERROR_INSTALL_SERVICE_FAILURE
#define ERROR_INSTALL_SERVICE_FAILURE      1601L
#define ERROR_INSTALL_PACKAGE_VERSION      1613L
#define ERROR_INSTALL_ALREADY_RUNNING      1618L
#define ERROR_INSTALL_PACKAGE_OPEN_FAILED  1619L
#define ERROR_INSTALL_PACKAGE_INVALID      1620L
#define ERROR_INSTALL_UI_FAILURE           1621L
#define ERROR_INSTALL_LOG_FAILURE          1622L
#define ERROR_INSTALL_LANGUAGE_UNSUPPORTED 1623L
#define ERROR_INSTALL_PACKAGE_REJECTED     1625L
#define ERROR_FUNCTION_NOT_CALLED          1626L
#define ERROR_FUNCTION_FAILED              1627L
#define ERROR_INVALID_TABLE                1628L
#define ERROR_DATATYPE_MISMATCH            1629L
#define ERROR_UNSUPPORTED_TYPE             1630L
#define ERROR_CREATE_FAILED                1631L
#endif
#ifndef ERROR_INSTALL_TEMP_UNWRITABLE      
#define ERROR_INSTALL_TEMP_UNWRITABLE      1632L
#endif
#ifndef ERROR_INSTALL_PLATFORM_UNSUPPORTED
#define ERROR_INSTALL_PLATFORM_UNSUPPORTED 1633L
#endif
#ifndef ERROR_INSTALL_NOTUSED
#define ERROR_INSTALL_NOTUSED              1634L
#endif
#ifndef ERROR_INSTALL_TRANSFORM_FAILURE
#define ERROR_INSTALL_TRANSFORM_FAILURE    1624L
#endif
#ifndef ERROR_PATCH_PACKAGE_OPEN_FAILED
#define ERROR_PATCH_PACKAGE_OPEN_FAILED    1635L
#define ERROR_PATCH_PACKAGE_INVALID        1636L
#define ERROR_PATCH_PACKAGE_UNSUPPORTED    1637L
#endif
#ifndef ERROR_PRODUCT_VERSION
#define ERROR_PRODUCT_VERSION              1638L
#endif
#ifndef ERROR_INVALID_COMMAND_LINE
#define ERROR_INVALID_COMMAND_LINE         1639L
#endif
#ifndef ERROR_INSTALL_REMOTE_DISALLOWED
#define ERROR_INSTALL_REMOTE_DISALLOWED    1640L
#endif
#ifndef ERROR_SUCCESS_REBOOT_INITIATED
#define ERROR_SUCCESS_REBOOT_INITIATED     1641L
#endif
#ifndef ERROR_PATCH_TARGET_NOT_FOUND
#define ERROR_PATCH_TARGET_NOT_FOUND       1642L
#endif
#ifndef ERROR_PATCH_PACKAGE_REJECTED
#define ERROR_PATCH_PACKAGE_REJECTED       1643L
#endif
#ifndef ERROR_INSTALL_TRANSFORM_REJECTED
#define ERROR_INSTALL_TRANSFORM_REJECTED   1644L
#endif
#ifndef ERROR_INSTALL_REMOTE_PROHIBITED
#define ERROR_INSTALL_REMOTE_PROHIBITED    1645L
#endif
#ifndef ERROR_PATCH_REMOVAL_UNSUPPORTED
#define ERROR_PATCH_REMOVAL_UNSUPPORTED    1646L
#endif
#ifndef ERROR_UNKNOWN_PATCH
#define ERROR_UNKNOWN_PATCH                1647L
#endif
#ifndef ERROR_PATCH_NO_SEQUENCE
#define ERROR_PATCH_NO_SEQUENCE            1648L
#endif
#ifndef ERROR_PATCH_REMOVAL_DISALLOWED
#define ERROR_PATCH_REMOVAL_DISALLOWED      1649L
#endif
#ifndef ERROR_INVALID_PATCH_XML
#define ERROR_INVALID_PATCH_XML             1650L
#endif
#ifndef ERROR_PATCH_MANAGED_ADVERTISED_PRODUCT
#define ERROR_PATCH_MANAGED_ADVERTISED_PRODUCT 1651L
#endif
#ifndef ERROR_INSTALL_SERVICE_SAFEBOOT
#define ERROR_INSTALL_SERVICE_SAFEBOOT     1652L
#endif
#ifndef ERROR_ROLLBACK_DISABLED
#define ERROR_ROLLBACK_DISABLED            1653L
#endif
#endif
