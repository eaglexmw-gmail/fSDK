/*+@@file@@----------------------------------------------------------------*//*!
 \file		OleDlg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 18:36:12 2016
 \date		Modified on Sat Sep  3 18:36:12 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _OLEDLG_H_
#define _OLEDLG_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef RC_INVOKED
#if defined(_UNICODE) && !defined(UNICODE)
#define UNICODE
#endif
#if defined(UNICODE) && !defined(_UNICODE)
#define _UNICODE
#endif
#ifndef _WINDOWS_
#include <windows.h>
#endif
#ifndef _INC_SHELLAPI
#include <shellapi.h>
#endif
#ifndef _INC_COMMDLG
#include <commdlg.h>
#endif
#ifndef _OLE2_H_
#include <ole2.h>
#endif
#include <string.h>
#include <tchar.h>
#endif
#include <dlgs.h>
#define IDC_OLEUIHELP                   99
#define IDC_IO_CREATENEW                2100
#define IDC_IO_CREATEFROMFILE           2101
#define IDC_IO_LINKFILE                 2102
#define IDC_IO_OBJECTTYPELIST           2103
#define IDC_IO_DISPLAYASICON            2104
#define IDC_IO_CHANGEICON               2105
#define IDC_IO_FILE                     2106
#define IDC_IO_FILEDISPLAY              2107
#define IDC_IO_RESULTIMAGE              2108
#define IDC_IO_RESULTTEXT               2109
#define IDC_IO_ICONDISPLAY              2110
#define IDC_IO_OBJECTTYPETEXT           2111
#define IDC_IO_FILETEXT                 2112
#define IDC_IO_FILETYPE                 2113
#define IDC_IO_INSERTCONTROL            2114
#define IDC_IO_ADDCONTROL               2115
#define IDC_IO_CONTROLTYPELIST          2116
#define IDC_PS_PASTE                    500
#define IDC_PS_PASTELINK                501
#define IDC_PS_SOURCETEXT               502
#define IDC_PS_PASTELIST                503
#define IDC_PS_PASTELINKLIST            504
#define IDC_PS_DISPLAYLIST              505
#define IDC_PS_DISPLAYASICON            506
#define IDC_PS_ICONDISPLAY              507
#define IDC_PS_CHANGEICON               508
#define IDC_PS_RESULTIMAGE              509
#define IDC_PS_RESULTTEXT               510
#define IDC_CI_GROUP                    120
#define IDC_CI_CURRENT                  121
#define IDC_CI_CURRENTICON              122
#define IDC_CI_DEFAULT                  123
#define IDC_CI_DEFAULTICON              124
#define IDC_CI_FROMFILE                 125
#define IDC_CI_FROMFILEEDIT             126
#define IDC_CI_ICONLIST                 127
#define IDC_CI_LABEL                    128
#define IDC_CI_LABELEDIT                129
#define IDC_CI_BROWSE                   130
#define IDC_CI_ICONDISPLAY              131
#define IDC_CV_OBJECTTYPE               150
#define IDC_CV_DISPLAYASICON            152
#define IDC_CV_CHANGEICON               153
#define IDC_CV_ACTIVATELIST             154
#define IDC_CV_CONVERTTO                155
#define IDC_CV_ACTIVATEAS               156
#define IDC_CV_RESULTTEXT               157
#define IDC_CV_CONVERTLIST              158
#define IDC_CV_ICONDISPLAY              165
#define IDC_EL_CHANGESOURCE             201
#define IDC_EL_AUTOMATIC                202
#define IDC_EL_CANCELLINK               209
#define IDC_EL_UPDATENOW                210
#define IDC_EL_OPENSOURCE               211
#define IDC_EL_MANUAL                   212
#define IDC_EL_LINKSOURCE               216
#define IDC_EL_LINKTYPE                 217
#define IDC_EL_LINKSLISTBOX             206
#define IDC_EL_COL1                     220
#define IDC_EL_COL2                     221
#define IDC_EL_COL3                     222
#define IDC_BZ_RETRY                    600
#define IDC_BZ_ICON                     601
#define IDC_BZ_MESSAGE1                 602
#define IDC_BZ_SWITCHTO                 604
#define IDC_UL_METER                    1029
#define IDC_UL_STOP                     1030
#define IDC_UL_PERCENT                  1031
#define IDC_UL_PROGRESS                 1032
#define IDC_PU_LINKS                    900
#define IDC_PU_TEXT                     901
#define IDC_PU_CONVERT                  902
#define IDC_PU_ICON                     908
#define IDC_GP_OBJECTNAME               1009
#define IDC_GP_OBJECTTYPE               1010
#define IDC_GP_OBJECTSIZE               1011
#define IDC_GP_CONVERT                  1013
#define IDC_GP_OBJECTICON               1014
#define IDC_GP_OBJECTLOCATION           1022
#define IDC_VP_PERCENT                  1000
#define IDC_VP_CHANGEICON               1001
#define IDC_VP_EDITABLE                 1002
#define IDC_VP_ASICON                   1003
#define IDC_VP_RELATIVE                 1005
#define IDC_VP_SPIN                     1006
#define IDC_VP_SCALETXT                 1034
#define IDC_VP_ICONDISPLAY              1021
#define IDC_VP_RESULTIMAGE              1033
#define IDC_LP_OPENSOURCE               1006
#define IDC_LP_UPDATENOW                1007
#define IDC_LP_BREAKLINK                1008
#define IDC_LP_LINKSOURCE               1012
#define IDC_LP_CHANGESOURCE             1015
#define IDC_LP_AUTOMATIC                1016
#define IDC_LP_MANUAL                   1017
#define IDC_LP_DATE                     1018
#define IDC_LP_TIME                     1019
#define IDD_INSERTOBJECT                1000
#define IDD_CHANGEICON                  1001
#define IDD_CONVERT                     1002
#define IDD_PASTESPECIAL                1003
#define IDD_EDITLINKS                   1004
#define IDD_BUSY                        1006
#define IDD_UPDATELINKS                 1007
#define IDD_CHANGESOURCE                1009
#define IDD_INSERTFILEBROWSE            1010
#define IDD_CHANGEICONBROWSE            1011
#define IDD_CONVERTONLY                 1012
#define IDD_CHANGESOURCE4               1013
#define IDD_GNRLPROPS                   1100
#define IDD_VIEWPROPS                   1101
#define IDD_LINKPROPS                   1102
#define IDD_CONVERT4                    1103
#define IDD_CONVERTONLY4                1104
#define IDD_EDITLINKS4                  1105
#define IDD_GNRLPROPS4                  1106
#define IDD_LINKPROPS4                  1107
#define IDD_PASTESPECIAL4               1108
#define IDD_CANNOTUPDATELINK            1008
#define IDD_LINKSOURCEUNAVAILABLE       1020
#define IDD_SERVERNOTFOUND              1023
#define IDD_OUTOFMEMORY                 1024
#define IDD_SERVERNOTREGW               1021
#define IDD_LINKTYPECHANGEDW            1022
#define IDD_SERVERNOTREGA               1025
#define IDD_LINKTYPECHANGEDA            1026
#ifdef UNICODE
#define IDD_SERVERNOTREG                IDD_SERVERNOTREGW
#define IDD_LINKTYPECHANGED             IDD_LINKTYPECHANGEDW
#else
#define IDD_SERVERNOTREG                IDD_SERVERNOTREGA
#define IDD_LINKTYPECHANGED             IDD_LINKTYPECHANGEDA
#endif
#ifndef RC_INVOKED
#pragma pack(push, 8)
#define OLESTDDELIM TEXT("\\")
typedef UINT (CALLBACK *LPFNOLEUIHOOK)(HWND, UINT, WPARAM, LPARAM);
#define SZOLEUI_MSG_HELP                TEXT("OLEUI_MSG_HELP")
#define SZOLEUI_MSG_ENDDIALOG           TEXT("OLEUI_MSG_ENDDIALOG")
#define SZOLEUI_MSG_BROWSE              TEXT("OLEUI_MSG_BROWSE")
#define SZOLEUI_MSG_CHANGEICON          TEXT("OLEUI_MSG_CHANGEICON")
#define SZOLEUI_MSG_CLOSEBUSYDIALOG     TEXT("OLEUI_MSG_CLOSEBUSYDIALOG")
#define SZOLEUI_MSG_CONVERT             TEXT("OLEUI_MSG_CONVERT")
#define SZOLEUI_MSG_CHANGESOURCE        TEXT("OLEUI_MSG_CHANGESOURCE")
#define SZOLEUI_MSG_ADDCONTROL          TEXT("OLEUI_MSG_ADDCONTROL")
#define SZOLEUI_MSG_BROWSE_OFN          TEXT("OLEUI_MSG_BROWSE_OFN")
#define ID_BROWSE_CHANGEICON            1
#define ID_BROWSE_INSERTFILE            2
#define ID_BROWSE_ADDCONTROL            3
#define ID_BROWSE_CHANGESOURCE          4
#define OLEUI_FALSE                     0
#define OLEUI_SUCCESS                   1
#define OLEUI_OK                        1
#define OLEUI_CANCEL                    2
#define OLEUI_ERR_STANDARDMIN           100
#define OLEUI_ERR_OLEMEMALLOC           100
#define OLEUI_ERR_STRUCTURENULL         101
#define OLEUI_ERR_STRUCTUREINVALID      102
#define OLEUI_ERR_CBSTRUCTINCORRECT     103
#define OLEUI_ERR_HWNDOWNERINVALID      104
#define OLEUI_ERR_LPSZCAPTIONINVALID    105
#define OLEUI_ERR_LPFNHOOKINVALID       106
#define OLEUI_ERR_HINSTANCEINVALID      107
#define OLEUI_ERR_LPSZTEMPLATEINVALID   108
#define OLEUI_ERR_HRESOURCEINVALID      109
#define OLEUI_ERR_FINDTEMPLATEFAILURE   110
#define OLEUI_ERR_LOADTEMPLATEFAILURE   111
#define OLEUI_ERR_DIALOGFAILURE         112
#define OLEUI_ERR_LOCALMEMALLOC         113
#define OLEUI_ERR_GLOBALMEMALLOC        114
#define OLEUI_ERR_LOADSTRING            115
#define OLEUI_ERR_STANDARDMAX           116
STDAPI_(BOOL)OleUIAddVerbMenuW(LPOLEOBJECT lpOleObj, LPCWSTR lpszShortType, HMENU hMenu, UINT uPos, UINT uIDVerbMin, UINT uIDVerbMax, BOOL bAddConvert, UINT idConvert, HMENU * lphMenu);
STDAPI_(BOOL)OleUIAddVerbMenuA(LPOLEOBJECT lpOleObj, LPCSTR lpszShortType, HMENU hMenu, UINT uPos, UINT uIDVerbMin, UINT uIDVerbMax, BOOL bAddConvert, UINT idConvert, HMENU * lphMenu);
#ifdef UNICODE
#define OleUIAddVerbMenu OleUIAddVerbMenuW
#else
#define OleUIAddVerbMenu OleUIAddVerbMenuA
#endif
typedef struct tagOLEUIINSERTOBJECTW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCWSTR         lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCWSTR         lpszTemplate;
        HRSRC           hResource;
        CLSID           clsid;
        LPWSTR          lpszFile;
        UINT            cchFile;
        UINT            cClsidExclude;
        LPCLSID         lpClsidExclude;
        IID             iid;
        DWORD           oleRender;
        LPFORMATETC     lpFormatEtc;
        LPOLECLIENTSITE lpIOleClientSite;
        LPSTORAGE       lpIStorage;
        LPVOID          *ppvObj;
        SCODE           sc;
        HGLOBAL         hMetaPict;
} OLEUIINSERTOBJECTW, *POLEUIINSERTOBJECTW, *LPOLEUIINSERTOBJECTW;
typedef struct tagOLEUIINSERTOBJECTA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCSTR          lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCSTR          lpszTemplate;
        HRSRC           hResource;
        CLSID           clsid;
        LPSTR           lpszFile;
        UINT            cchFile;
        UINT            cClsidExclude;
        LPCLSID         lpClsidExclude;
        IID             iid;
        DWORD           oleRender;
        LPFORMATETC     lpFormatEtc;
        LPOLECLIENTSITE lpIOleClientSite;
        LPSTORAGE       lpIStorage;
        LPVOID          *ppvObj;
        SCODE           sc;
        HGLOBAL         hMetaPict;
} OLEUIINSERTOBJECTA, *POLEUIINSERTOBJECTA, *LPOLEUIINSERTOBJECTA;
STDAPI_(UINT) OleUIInsertObjectW(LPOLEUIINSERTOBJECTW);
STDAPI_(UINT) OleUIInsertObjectA(LPOLEUIINSERTOBJECTA);
#ifdef UNICODE
#define tagOLEUIINSERTOBJECT tagOLEUIINSERTOBJECTW
#define OLEUIINSERTOBJECT OLEUIINSERTOBJECTW
#define POLEUIINSERTOBJECT POLEUIINSERTOBJECTW
#define LPOLEUIINSERTOBJECT LPOLEUIINSERTOBJECTW
#define OleUIInsertObject OleUIInsertObjectW
#else
#define tagOLEUIINSERTOBJECT tagOLEUIINSERTOBJECTA
#define OLEUIINSERTOBJECT OLEUIINSERTOBJECTA
#define POLEUIINSERTOBJECT POLEUIINSERTOBJECTA
#define LPOLEUIINSERTOBJECT LPOLEUIINSERTOBJECTA
#define OleUIInsertObject OleUIInsertObjectA
#endif
#define IOF_SHOWHELP                    0x00000001L
#define IOF_SELECTCREATENEW             0x00000002L
#define IOF_SELECTCREATEFROMFILE        0x00000004L
#define IOF_CHECKLINK                   0x00000008L
#define IOF_CHECKDISPLAYASICON          0x00000010L
#define IOF_CREATENEWOBJECT             0x00000020L
#define IOF_CREATEFILEOBJECT            0x00000040L
#define IOF_CREATELINKOBJECT            0x00000080L
#define IOF_DISABLELINK                 0x00000100L
#define IOF_VERIFYSERVERSEXIST          0x00000200L
#define IOF_DISABLEDISPLAYASICON        0x00000400L
#define IOF_HIDECHANGEICON              0x00000800L
#define IOF_SHOWINSERTCONTROL           0x00001000L
#define IOF_SELECTCREATECONTROL         0x00002000L
#define OLEUI_IOERR_LPSZFILEINVALID         (OLEUI_ERR_STANDARDMAX+0)
#define OLEUI_IOERR_LPSZLABELINVALID        (OLEUI_ERR_STANDARDMAX+1)
#define OLEUI_IOERR_HICONINVALID            (OLEUI_ERR_STANDARDMAX+2)
#define OLEUI_IOERR_LPFORMATETCINVALID      (OLEUI_ERR_STANDARDMAX+3)
#define OLEUI_IOERR_PPVOBJINVALID           (OLEUI_ERR_STANDARDMAX+4)
#define OLEUI_IOERR_LPIOLECLIENTSITEINVALID (OLEUI_ERR_STANDARDMAX+5)
#define OLEUI_IOERR_LPISTORAGEINVALID       (OLEUI_ERR_STANDARDMAX+6)
#define OLEUI_IOERR_SCODEHASERROR           (OLEUI_ERR_STANDARDMAX+7)
#define OLEUI_IOERR_LPCLSIDEXCLUDEINVALID   (OLEUI_ERR_STANDARDMAX+8)
#define OLEUI_IOERR_CCHFILEINVALID          (OLEUI_ERR_STANDARDMAX+9)
typedef enum tagOLEUIPASTEFLAG
{
   OLEUIPASTE_ENABLEICON    = 2048,
   OLEUIPASTE_PASTEONLY     = 0,
   OLEUIPASTE_PASTE         = 512,
   OLEUIPASTE_LINKANYTYPE   = 1024,
   OLEUIPASTE_LINKTYPE1     = 1,
   OLEUIPASTE_LINKTYPE2     = 2,
   OLEUIPASTE_LINKTYPE3     = 4,
   OLEUIPASTE_LINKTYPE4     = 8,
   OLEUIPASTE_LINKTYPE5     = 16,
   OLEUIPASTE_LINKTYPE6     = 32,
   OLEUIPASTE_LINKTYPE7     = 64,
   OLEUIPASTE_LINKTYPE8     = 128
} OLEUIPASTEFLAG;
typedef struct tagOLEUIPASTEENTRYW
{
   FORMATETC        fmtetc;
   LPCWSTR          lpstrFormatName;
   LPCWSTR          lpstrResultText;
   DWORD            dwFlags;
   DWORD            dwScratchSpace;
} OLEUIPASTEENTRYW, *POLEUIPASTEENTRYW, *LPOLEUIPASTEENTRYW;
typedef struct tagOLEUIPASTEENTRYA
{
   FORMATETC        fmtetc;
   LPCSTR           lpstrFormatName;
   LPCSTR           lpstrResultText;
   DWORD            dwFlags;
   DWORD            dwScratchSpace;
} OLEUIPASTEENTRYA, *POLEUIPASTEENTRYA, *LPOLEUIPASTEENTRYA;
#ifdef UNICODE
#define tagOLEUIPASTEENTRY tagOLEUIPASTEENTRYW
#define OLEUIPASTEENTRY OLEUIPASTEENTRYW
#define POLEUIPASTEENTRY POLEUIPASTEENTRYW
#define LPOLEUIPASTEENTRY LPOLEUIPASTEENTRYW
#else
#define tagOLEUIPASTEENTRY tagOLEUIPASTEENTRYA
#define OLEUIPASTEENTRY OLEUIPASTEENTRYA
#define POLEUIPASTEENTRY POLEUIPASTEENTRYA
#define LPOLEUIPASTEENTRY LPOLEUIPASTEENTRYA
#endif
#define PS_MAXLINKTYPES  8
typedef struct tagOLEUIPASTESPECIALW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCWSTR         lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCWSTR         lpszTemplate;
        HRSRC           hResource;
        LPDATAOBJECT    lpSrcDataObj;
        LPOLEUIPASTEENTRYW arrPasteEntries;
        int             cPasteEntries;
        UINT FAR*       arrLinkTypes;
        int             cLinkTypes;
        UINT            cClsidExclude;
        LPCLSID         lpClsidExclude;
        int             nSelectedIndex;
        BOOL            fLink;
        HGLOBAL         hMetaPict;
        SIZEL           sizel;
} OLEUIPASTESPECIALW, *POLEUIPASTESPECIALW, *LPOLEUIPASTESPECIALW;
typedef struct tagOLEUIPASTESPECIALA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCSTR          lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCSTR          lpszTemplate;
        HRSRC           hResource;
        LPDATAOBJECT    lpSrcDataObj;
        LPOLEUIPASTEENTRYA arrPasteEntries;
        int             cPasteEntries;
        UINT FAR*       arrLinkTypes;
        int             cLinkTypes;
        UINT            cClsidExclude;
        LPCLSID         lpClsidExclude;
        int             nSelectedIndex;
        BOOL            fLink;
        HGLOBAL         hMetaPict;
        SIZEL           sizel;
} OLEUIPASTESPECIALA, *POLEUIPASTESPECIALA, *LPOLEUIPASTESPECIALA;
#ifdef UNICODE
#define tagOLEUIPASTESPECIAL tagOLEUIPASTESPECIALW
#define OLEUIPASTESPECIAL OLEUIPASTESPECIALW
#define POLEUIPASTESPECIAL POLEUIPASTESPECIALW
#define LPOLEUIPASTESPECIAL LPOLEUIPASTESPECIALW
#else
#define tagOLEUIPASTESPECIAL tagOLEUIPASTESPECIALA
#define OLEUIPASTESPECIAL OLEUIPASTESPECIALA
#define POLEUIPASTESPECIAL POLEUIPASTESPECIALA
#define LPOLEUIPASTESPECIAL LPOLEUIPASTESPECIALA
#endif
STDAPI_(UINT) OleUIPasteSpecialW(LPOLEUIPASTESPECIALW);
STDAPI_(UINT) OleUIPasteSpecialA(LPOLEUIPASTESPECIALA);
#ifdef UNICODE
#define OleUIPasteSpecial OleUIPasteSpecialW
#else
#define OleUIPasteSpecial OleUIPasteSpecialA
#endif
#define PSF_SHOWHELP                    0x00000001L
#define PSF_SELECTPASTE                 0x00000002L
#define PSF_SELECTPASTELINK             0x00000004L
#define PSF_CHECKDISPLAYASICON          0x00000008L
#define PSF_DISABLEDISPLAYASICON        0x00000010L
#define PSF_HIDECHANGEICON              0x00000020L
#define PSF_STAYONCLIPBOARDCHANGE       0x00000040L
#define PSF_NOREFRESHDATAOBJECT         0x00000080L
#define OLEUI_IOERR_SRCDATAOBJECTINVALID    (OLEUI_ERR_STANDARDMAX+0)
#define OLEUI_IOERR_ARRPASTEENTRIESINVALID  (OLEUI_ERR_STANDARDMAX+1)
#define OLEUI_IOERR_ARRLINKTYPESINVALID     (OLEUI_ERR_STANDARDMAX+2)
#define OLEUI_PSERR_CLIPBOARDCHANGED        (OLEUI_ERR_STANDARDMAX+3)
#define OLEUI_PSERR_GETCLIPBOARDFAILED      (OLEUI_ERR_STANDARDMAX+4)
#undef  INTERFACE
#define INTERFACE   IOleUILinkContainerW
DECLARE_INTERFACE_(IOleUILinkContainerW, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD_(DWORD, GetNextLink) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(SetLinkUpdateOptions) (THIS_ DWORD dwLink, DWORD dwUpdateOpt)PURE;
	STDMETHOD(GetLinkUpdateOptions) (THIS_ DWORD dwLink, DWORD FAR * lpdwUpdateOpt)PURE;
	STDMETHOD(SetLinkSource) (THIS_ DWORD dwLink, LPWSTR lpszDisplayName, ULONG lenFileName, ULONG FAR * pchEaten, BOOL fValidateSource)PURE;
	STDMETHOD(GetLinkSource) (THIS_ DWORD dwLink, LPWSTR FAR * lplpszDisplayName, ULONG FAR * lplenFileName, LPWSTR FAR * lplpszFullLinkType, LPWSTR FAR * lplpszShortLinkType, BOOL FAR * lpfSourceAvailable, BOOL FAR * lpfIsSelected)PURE;
	STDMETHOD(OpenLinkSource) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(UpdateLink) (THIS_ DWORD dwLink, BOOL fErrorMessage, BOOL fReserved)PURE;
	STDMETHOD(CancelLink) (THIS_ DWORD dwLink)PURE;
};
typedef IOleUILinkContainerW FAR* LPOLEUILINKCONTAINERW;
#undef  INTERFACE
#define INTERFACE   IOleUILinkContainerA
DECLARE_INTERFACE_(IOleUILinkContainerA, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD_(DWORD, GetNextLink) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(SetLinkUpdateOptions) (THIS_ DWORD dwLink, DWORD dwUpdateOpt)PURE;
	STDMETHOD(GetLinkUpdateOptions) (THIS_ DWORD dwLink, DWORD FAR * lpdwUpdateOpt)PURE;
	STDMETHOD(SetLinkSource) (THIS_ DWORD dwLink, LPSTR lpszDisplayName, ULONG lenFileName, ULONG FAR * pchEaten, BOOL fValidateSource)PURE;
	STDMETHOD(GetLinkSource) (THIS_ DWORD dwLink, LPSTR FAR * lplpszDisplayName, ULONG FAR * lplenFileName, LPSTR FAR * lplpszFullLinkType, LPSTR FAR * lplpszShortLinkType, BOOL FAR * lpfSourceAvailable, BOOL FAR * lpfIsSelected)PURE;
	STDMETHOD(OpenLinkSource) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(UpdateLink) (THIS_ DWORD dwLink, BOOL fErrorMessage, BOOL fReserved)PURE;
	STDMETHOD(CancelLink) (THIS_ DWORD dwLink)PURE;
};
typedef IOleUILinkContainerA FAR* LPOLEUILINKCONTAINERA;
#ifdef UNICODE
#define IOleUILinkContainer IOleUILinkContainerW
#define IOleUILinkContainerVtbl IOleUILinkContainerWVtbl
#define LPOLEUILINKCONTAINER LPOLEUILINKCONTAINERW
#else
#define IOleUILinkContainer IOleUILinkContainerA
#define IOleUILinkContainerVtbl IOleUILinkContainerAVtbl
#define LPOLEUILINKCONTAINER LPOLEUILINKCONTAINERA
#endif
typedef struct tagOLEUIEDITLINKSW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCWSTR         lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCWSTR         lpszTemplate;
        HRSRC           hResource;
        LPOLEUILINKCONTAINERW lpOleUILinkContainer;
} OLEUIEDITLINKSW, *POLEUIEDITLINKSW, *LPOLEUIEDITLINKSW;
typedef struct tagOLEUIEDITLINKSA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCSTR          lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCSTR          lpszTemplate;
        HRSRC           hResource;
        LPOLEUILINKCONTAINERA lpOleUILinkContainer;
} OLEUIEDITLINKSA, *POLEUIEDITLINKSA, *LPOLEUIEDITLINKSA;
#ifdef UNICODE
#define tagOLEUIEDITLINKS tagOLEUIEDITLINKSW
#define OLEUIEDITLINKS OLEUIEDITLINKSW
#define POLEUIEDITLINKS POLEUIEDITLINKSW
#define LPOLEUIEDITLINKS LPOLEUIEDITLINKSW
#else
#define tagOLEUIEDITLINKS tagOLEUIEDITLINKSA
#define OLEUIEDITLINKS OLEUIEDITLINKSA
#define POLEUIEDITLINKS POLEUIEDITLINKSA
#define LPOLEUIEDITLINKS LPOLEUIEDITLINKSA
#endif
#define OLEUI_ELERR_LINKCNTRNULL        (OLEUI_ERR_STANDARDMAX+0)
#define OLEUI_ELERR_LINKCNTRINVALID     (OLEUI_ERR_STANDARDMAX+1)
STDAPI_(UINT) OleUIEditLinksW(LPOLEUIEDITLINKSW);
STDAPI_(UINT) OleUIEditLinksA(LPOLEUIEDITLINKSA);
#ifdef UNICODE
#define OleUIEditLinks OleUIEditLinksW
#else
#define OleUIEditLinks OleUIEditLinksA
#endif
#define ELF_SHOWHELP                    0x00000001L
#define ELF_DISABLEUPDATENOW            0x00000002L
#define ELF_DISABLEOPENSOURCE           0x00000004L
#define ELF_DISABLECHANGESOURCE         0x00000008L
#define ELF_DISABLECANCELLINK           0x00000010L
typedef struct tagOLEUICHANGEICONW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCWSTR         lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCWSTR         lpszTemplate;
        HRSRC           hResource;
        HGLOBAL         hMetaPict;
        CLSID           clsid;
        WCHAR           szIconExe[MAX_PATH];
        int             cchIconExe;
} OLEUICHANGEICONW, *POLEUICHANGEICONW, *LPOLEUICHANGEICONW;
typedef struct tagOLEUICHANGEICONA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCSTR          lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCSTR          lpszTemplate;
        HRSRC           hResource;
        HGLOBAL         hMetaPict;
        CLSID           clsid;
        CHAR            szIconExe[MAX_PATH];
        int             cchIconExe;
} OLEUICHANGEICONA, *POLEUICHANGEICONA, *LPOLEUICHANGEICONA;
STDAPI_(UINT) OleUIChangeIconW(LPOLEUICHANGEICONW);
STDAPI_(UINT) OleUIChangeIconA(LPOLEUICHANGEICONA);
#ifdef UNICODE
#define tagOLEUICHANGEICON tagOLEUICHANGEICONW
#define OLEUICHANGEICON OLEUICHANGEICONW
#define POLEUICHANGEICON POLEUICHANGEICONW
#define LPOLEUICHANGEICON LPOLEUICHANGEICONW
#define OleUIChangeIcon OleUIChangeIconW
#else
#define tagOLEUICHANGEICON tagOLEUICHANGEICONA
#define OLEUICHANGEICON OLEUICHANGEICONA
#define POLEUICHANGEICON POLEUICHANGEICONA
#define LPOLEUICHANGEICON LPOLEUICHANGEICONA
#define OleUIChangeIcon OleUIChangeIconA
#endif
#define CIF_SHOWHELP                    0x00000001L
#define CIF_SELECTCURRENT               0x00000002L
#define CIF_SELECTDEFAULT               0x00000004L
#define CIF_SELECTFROMFILE              0x00000008L
#define CIF_USEICONEXE                  0x00000010L
#define OLEUI_CIERR_MUSTHAVECLSID           (OLEUI_ERR_STANDARDMAX+0)
#define OLEUI_CIERR_MUSTHAVECURRENTMETAFILE (OLEUI_ERR_STANDARDMAX+1)
#define OLEUI_CIERR_SZICONEXEINVALID        (OLEUI_ERR_STANDARDMAX+2)
#define PROP_HWND_CHGICONDLG    TEXT("HWND_CIDLG")
typedef struct tagOLEUICONVERTW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCWSTR         lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCWSTR         lpszTemplate;
        HRSRC           hResource;
        CLSID           clsid;
        CLSID           clsidConvertDefault;
        CLSID           clsidActivateDefault;
        CLSID           clsidNew;
        DWORD           dvAspect;
        WORD            wFormat;
        BOOL            fIsLinkedObject;
        HGLOBAL         hMetaPict;
        LPWSTR          lpszUserType;
        BOOL            fObjectsIconChanged;
        LPWSTR          lpszDefLabel;
        UINT            cClsidExclude;
        LPCLSID         lpClsidExclude;
} OLEUICONVERTW, *POLEUICONVERTW, *LPOLEUICONVERTW;
typedef struct tagOLEUICONVERTA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCSTR          lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCSTR          lpszTemplate;
        HRSRC           hResource;
        CLSID           clsid;
        CLSID           clsidConvertDefault;
        CLSID           clsidActivateDefault;
        CLSID           clsidNew;
        DWORD           dvAspect;
        WORD            wFormat;
        BOOL            fIsLinkedObject;
        HGLOBAL         hMetaPict;
        LPSTR           lpszUserType;
        BOOL            fObjectsIconChanged;
        LPSTR           lpszDefLabel;
        UINT            cClsidExclude;
        LPCLSID         lpClsidExclude;
} OLEUICONVERTA, *POLEUICONVERTA, *LPOLEUICONVERTA;
STDAPI_(UINT) OleUIConvertW(LPOLEUICONVERTW);
STDAPI_(UINT) OleUIConvertA(LPOLEUICONVERTA);
#ifdef UNICODE
#define tagOLEUICONVERT tagOLEUICONVERTW
#define OLEUICONVERT OLEUICONVERTW
#define POLEUICONVERT POLEUICONVERTW
#define LPOLEUICONVERT LPOLEUICONVERTW
#define OleUIConvert OleUIConvertW
#else
#define tagOLEUICONVERT tagOLEUICONVERTA
#define OLEUICONVERT OLEUICONVERTA
#define POLEUICONVERT POLEUICONVERTA
#define LPOLEUICONVERT LPOLEUICONVERTA
#define OleUIConvert OleUIConvertA
#endif
STDAPI_(BOOL)OleUICanConvertOrActivateAs(REFCLSID rClsid, BOOL fIsLinkedObject, WORD wFormat);
#define CF_SHOWHELPBUTTON               0x00000001L
#define CF_SETCONVERTDEFAULT            0x00000002L
#define CF_SETACTIVATEDEFAULT           0x00000004L
#define CF_SELECTCONVERTTO              0x00000008L
#define CF_SELECTACTIVATEAS             0x00000010L
#define CF_DISABLEDISPLAYASICON         0x00000020L
#define CF_DISABLEACTIVATEAS            0x00000040L
#define CF_HIDECHANGEICON               0x00000080L
#define CF_CONVERTONLY                  0x00000100L
#define OLEUI_CTERR_CLASSIDINVALID      (OLEUI_ERR_STANDARDMAX+1)
#define OLEUI_CTERR_DVASPECTINVALID     (OLEUI_ERR_STANDARDMAX+2)
#define OLEUI_CTERR_CBFORMATINVALID     (OLEUI_ERR_STANDARDMAX+3)
#define OLEUI_CTERR_HMETAPICTINVALID    (OLEUI_ERR_STANDARDMAX+4)
#define OLEUI_CTERR_STRINGINVALID       (OLEUI_ERR_STANDARDMAX+5)
typedef struct tagOLEUIBUSYW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCWSTR         lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCWSTR         lpszTemplate;
        HRSRC           hResource;
        HTASK           hTask;
        HWND *          lphWndDialog;
} OLEUIBUSYW, *POLEUIBUSYW, *LPOLEUIBUSYW;
typedef struct tagOLEUIBUSYA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCSTR          lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCSTR          lpszTemplate;
        HRSRC           hResource;
        HTASK           hTask;
        HWND *          lphWndDialog;
} OLEUIBUSYA, *POLEUIBUSYA, *LPOLEUIBUSYA;
STDAPI_(UINT) OleUIBusyW(LPOLEUIBUSYW);
STDAPI_(UINT) OleUIBusyA(LPOLEUIBUSYA);
#ifdef UNICODE
#define tagOLEUIBUSY tagOLEUIBUSYW
#define OLEUIBUSY OLEUIBUSYW
#define POLEUIBUSY POLEUIBUSYW
#define LPOLEUIBUSY LPOLEUIBUSYW
#define OleUIBusy OleUIBusyW
#else
#define tagOLEUIBUSY tagOLEUIBUSYA
#define OLEUIBUSY OLEUIBUSYA
#define POLEUIBUSY POLEUIBUSYA
#define LPOLEUIBUSY LPOLEUIBUSYA
#define OleUIBusy OleUIBusyA
#endif
#define BZ_DISABLECANCELBUTTON          0x00000001L
#define BZ_DISABLESWITCHTOBUTTON        0x00000002L
#define BZ_DISABLERETRYBUTTON           0x00000004L
#define BZ_NOTRESPONDINGDIALOG          0x00000008L
#define OLEUI_BZERR_HTASKINVALID     (OLEUI_ERR_STANDARDMAX+0)
#define OLEUI_BZ_SWITCHTOSELECTED    (OLEUI_ERR_STANDARDMAX+1)
#define OLEUI_BZ_RETRYSELECTED       (OLEUI_ERR_STANDARDMAX+2)
#define OLEUI_BZ_CALLUNBLOCKED       (OLEUI_ERR_STANDARDMAX+3)
typedef struct tagOLEUICHANGESOURCEW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCWSTR         lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCWSTR         lpszTemplate;
        HRSRC           hResource;
        OPENFILENAMEW*  lpOFN;
        DWORD           dwReserved1[4];
        LPOLEUILINKCONTAINERW lpOleUILinkContainer;
        DWORD           dwLink;
        LPWSTR          lpszDisplayName;
        ULONG           nFileLength;
        LPWSTR          lpszFrom;
        LPWSTR          lpszTo;
} OLEUICHANGESOURCEW, *POLEUICHANGESOURCEW, *LPOLEUICHANGESOURCEW;
typedef struct tagOLEUICHANGESOURCEA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        HWND            hWndOwner;
        LPCSTR          lpszCaption;
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        HINSTANCE       hInstance;
        LPCSTR          lpszTemplate;
        HRSRC           hResource;
        OPENFILENAMEA*  lpOFN;
        DWORD           dwReserved1[4];
        LPOLEUILINKCONTAINERA lpOleUILinkContainer;
        DWORD           dwLink;
        LPSTR           lpszDisplayName;
        ULONG           nFileLength;
        LPSTR           lpszFrom;
        LPSTR           lpszTo;
} OLEUICHANGESOURCEA, *POLEUICHANGESOURCEA, *LPOLEUICHANGESOURCEA;
STDAPI_(UINT) OleUIChangeSourceW(LPOLEUICHANGESOURCEW);
STDAPI_(UINT) OleUIChangeSourceA(LPOLEUICHANGESOURCEA);
#ifdef UNICODE
#define tagOLEUICHANGESOURCE tagOLEUICHANGESOURCEW
#define OLEUICHANGESOURCE OLEUICHANGESOURCEW
#define POLEUICHANGESOURCE POLEUICHANGESOURCEW
#define LPOLEUICHANGESOURCE LPOLEUICHANGESOURCEW
#define OleUIChangeSource OleUIChangeSourceW
#else
#define tagOLEUICHANGESOURCE tagOLEUICHANGESOURCEA
#define OLEUICHANGESOURCE OLEUICHANGESOURCEA
#define POLEUICHANGESOURCE POLEUICHANGESOURCEA
#define LPOLEUICHANGESOURCE LPOLEUICHANGESOURCEA
#define OleUIChangeSource OleUIChangeSourceA
#endif
#define CSF_SHOWHELP                    0x00000001L
#define CSF_VALIDSOURCE                 0x00000002L
#define CSF_ONLYGETSOURCE               0x00000004L
#define CSF_EXPLORER                    0x00000008L
#define OLEUI_CSERR_LINKCNTRNULL        (OLEUI_ERR_STANDARDMAX+0)
#define OLEUI_CSERR_LINKCNTRINVALID     (OLEUI_ERR_STANDARDMAX+1)
#define OLEUI_CSERR_FROMNOTNULL         (OLEUI_ERR_STANDARDMAX+2)
#define OLEUI_CSERR_TONOTNULL           (OLEUI_ERR_STANDARDMAX+3)
#define OLEUI_CSERR_SOURCENULL          (OLEUI_ERR_STANDARDMAX+4)
#define OLEUI_CSERR_SOURCEINVALID       (OLEUI_ERR_STANDARDMAX+5)
#define OLEUI_CSERR_SOURCEPARSERROR     (OLEUI_ERR_STANDARDMAX+6)
#define OLEUI_CSERR_SOURCEPARSEERROR    (OLEUI_ERR_STANDARDMAX+6)
#undef  INTERFACE
#define INTERFACE   IOleUIObjInfoW
DECLARE_INTERFACE_(IOleUIObjInfoW, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetObjectInfo) (THIS_ DWORD dwObject, DWORD FAR * lpdwObjSize, LPWSTR FAR * lplpszLabel, LPWSTR FAR * lplpszType, LPWSTR FAR * lplpszShortType, LPWSTR FAR * lplpszLocation)PURE;
	STDMETHOD(GetConvertInfo) (THIS_ DWORD dwObject, CLSID FAR * lpClassID, WORD FAR * lpwFormat, CLSID FAR * lpConvertDefaultClassID, LPCLSID FAR * lplpClsidExclude, UINT FAR * lpcClsidExclude)PURE;
	STDMETHOD(ConvertObject) (THIS_ DWORD dwObject, REFCLSID clsidNew)PURE;
	STDMETHOD(GetViewInfo) (THIS_ DWORD dwObject, HGLOBAL FAR * phMetaPict, DWORD * pdvAspect, int *pnCurrentScale)PURE;
	STDMETHOD(SetViewInfo) (THIS_ DWORD dwObject, HGLOBAL hMetaPict, DWORD dvAspect, int nCurrentScale, BOOL bRelativeToOrig)PURE;
};
typedef IOleUIObjInfoW FAR* LPOLEUIOBJINFOW;
#undef  INTERFACE
#define INTERFACE   IOleUIObjInfoA
DECLARE_INTERFACE_(IOleUIObjInfoA, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetObjectInfo) (THIS_ DWORD dwObject, DWORD FAR * lpdwObjSize, LPSTR FAR * lplpszLabel, LPSTR FAR * lplpszType, LPSTR FAR * lplpszShortType, LPSTR FAR * lplpszLocation)PURE;
	STDMETHOD(GetConvertInfo) (THIS_ DWORD dwObject, CLSID FAR * lpClassID, WORD FAR * lpwFormat, CLSID FAR * lpConvertDefaultClassID, LPCLSID FAR * lplpClsidExclude, UINT FAR * lpcClsidExclude)PURE;
	STDMETHOD(ConvertObject) (THIS_ DWORD dwObject, REFCLSID clsidNew)PURE;
	STDMETHOD(GetViewInfo) (THIS_ DWORD dwObject, HGLOBAL FAR * phMetaPict, DWORD * pdvAspect, int *pnCurrentScale)PURE;
	STDMETHOD(SetViewInfo) (THIS_ DWORD dwObject, HGLOBAL hMetaPict, DWORD dvAspect, int nCurrentScale, BOOL bRelativeToOrig)PURE;
};
typedef IOleUIObjInfoA FAR* LPOLEUIOBJINFOA;
#ifdef UNICODE
#define IOleUIObjInfo IOleUIObjInfoW
#define IOleUIObjInfoVtbl IOleUIObjInfoWVtbl
#define LPOLEUIOBJINFO LPOLEUIOBJINFOW
#else
#define IOleUIObjInfo IOleUIObjInfoA
#define IOleUIObjInfoVtbl IOleUIObjInfoAVtbl
#define LPOLEUIOBJINFO LPOLEUIOBJINFOA
#endif
#undef  INTERFACE
#define INTERFACE   IOleUILinkInfoW
DECLARE_INTERFACE_(IOleUILinkInfoW, IOleUILinkContainerW)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD_(DWORD, GetNextLink) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(SetLinkUpdateOptions) (THIS_ DWORD dwLink, DWORD dwUpdateOpt)PURE;
	STDMETHOD(GetLinkUpdateOptions) (THIS_ DWORD dwLink, DWORD FAR * lpdwUpdateOpt)PURE;
	STDMETHOD(SetLinkSource) (THIS_ DWORD dwLink, LPWSTR lpszDisplayName, ULONG lenFileName, ULONG FAR * pchEaten, BOOL fValidateSource)PURE;
	STDMETHOD(GetLinkSource) (THIS_ DWORD dwLink, LPWSTR FAR * lplpszDisplayName, ULONG FAR * lplenFileName, LPWSTR FAR * lplpszFullLinkType, LPWSTR FAR * lplpszShortLinkType, BOOL FAR * lpfSourceAvailable, BOOL FAR * lpfIsSelected)PURE;
	STDMETHOD(OpenLinkSource) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(UpdateLink) (THIS_ DWORD dwLink, BOOL fErrorMessage, BOOL fReserved)PURE;
	STDMETHOD(CancelLink) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(GetLastUpdate) (THIS_ DWORD dwLink, FILETIME FAR * lpLastUpdate)PURE;
};
typedef IOleUILinkInfoW FAR* LPOLEUILINKINFOW;
#undef  INTERFACE
#define INTERFACE   IOleUILinkInfoA
DECLARE_INTERFACE_(IOleUILinkInfoA, IOleUILinkContainerA)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD_(DWORD, GetNextLink) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(SetLinkUpdateOptions) (THIS_ DWORD dwLink, DWORD dwUpdateOpt)PURE;
	STDMETHOD(GetLinkUpdateOptions) (THIS_ DWORD dwLink, DWORD FAR * lpdwUpdateOpt)PURE;
	STDMETHOD(SetLinkSource) (THIS_ DWORD dwLink, LPSTR lpszDisplayName, ULONG lenFileName, ULONG FAR * pchEaten, BOOL fValidateSource)PURE;
	STDMETHOD(GetLinkSource) (THIS_ DWORD dwLink, LPSTR FAR * lplpszDisplayName, ULONG FAR * lplenFileName, LPSTR FAR * lplpszFullLinkType, LPSTR FAR * lplpszShortLinkType, BOOL FAR * lpfSourceAvailable, BOOL FAR * lpfIsSelected)PURE;
	STDMETHOD(OpenLinkSource) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(UpdateLink) (THIS_ DWORD dwLink, BOOL fErrorMessage, BOOL fReserved)PURE;
	STDMETHOD(CancelLink) (THIS_ DWORD dwLink)PURE;
	STDMETHOD(GetLastUpdate) (THIS_ DWORD dwLink, FILETIME FAR * lpLastUpdate)PURE;
};
typedef IOleUILinkInfoA FAR* LPOLEUILINKINFOA;
#ifdef UNICODE
#define IOleUILinkInfo IOleUILinkInfoW
#define IOleUILinkInfoVtbl IOleUILinkInfoWVtbl
#define LPOLEUILINKINFO LPOLEUILINKINFOW
#else
#define IOleUILinkInfo IOleUILinkInfoA
#define IOleUILinkInfoVtbl IOleUILinkInfoAVtbl
#define LPOLEUILINKINFO LPOLEUILINKINFOA
#endif
struct tagOLEUIOBJECTPROPSW;
struct tagOLEUIOBJECTPROPSA;
typedef struct tagOLEUIGNRLPROPSW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        DWORD           dwReserved1[2];
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        DWORD           dwReserved2[3];
        struct tagOLEUIOBJECTPROPSW* lpOP;
} OLEUIGNRLPROPSW, *POLEUIGNRLPROPSW, FAR* LPOLEUIGNRLPROPSW;
typedef struct tagOLEUIGNRLPROPSA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        DWORD           dwReserved1[2];
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        DWORD           dwReserved2[3];
        struct tagOLEUIOBJECTPROPSA* lpOP;
} OLEUIGNRLPROPSA, *POLEUIGNRLPROPSA, FAR* LPOLEUIGNRLPROPSA;
#ifdef UNICODE
#define tagOLEUIGNRLPROPS tagOLEUIGNRLPROPSW
#define OLEUIGNRLPROPS OLEUIGNRLPROPSW
#define POLEUIGNRLPROPS POLEUIGNRLPROPSW
#define LPOLEUIGNRLPROPS LPOLEUIGNRLPROPSW
#else
#define tagOLEUIGNRLPROPS tagOLEUIGNRLPROPSA
#define OLEUIGNRLPROPS OLEUIGNRLPROPSA
#define POLEUIGNRLPROPS POLEUIGNRLPROPSA
#define LPOLEUIGNRLPROPS LPOLEUIGNRLPROPSA
#endif
typedef struct tagOLEUIVIEWPROPSW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        DWORD           dwReserved1[2];
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        DWORD           dwReserved2[3];
        struct tagOLEUIOBJECTPROPSW* lpOP;
        int             nScaleMin;
        int             nScaleMax;
} OLEUIVIEWPROPSW, *POLEUIVIEWPROPSW, FAR* LPOLEUIVIEWPROPSW;
typedef struct tagOLEUIVIEWPROPSA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        DWORD           dwReserved1[2];
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        DWORD           dwReserved2[3];
        struct tagOLEUIOBJECTPROPSA* lpOP;
        int             nScaleMin;
        int             nScaleMax;
} OLEUIVIEWPROPSA, *POLEUIVIEWPROPSA, FAR* LPOLEUIVIEWPROPSA;
#ifdef UNICODE
#define tagOLEUIVIEWPROPS tagOLEUIVIEWPROPSW
#define OLEUIVIEWPROPS OLEUIVIEWPROPSW
#define POLEUIVIEWPROPS POLEUIVIEWPROPSW
#define LPOLEUIVIEWPROPS LPOLEUIVIEWPROPSW
#else
#define tagOLEUIVIEWPROPS tagOLEUIVIEWPROPSA
#define OLEUIVIEWPROPS OLEUIVIEWPROPSA
#define POLEUIVIEWPROPS POLEUIVIEWPROPSA
#define LPOLEUIVIEWPROPS LPOLEUIVIEWPROPSA
#endif
#define VPF_SELECTRELATIVE          0x00000001L
#define VPF_DISABLERELATIVE         0x00000002L
#define VPF_DISABLESCALE            0x00000004L
typedef struct tagOLEUILINKPROPSW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        DWORD           dwReserved1[2];
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        DWORD           dwReserved2[3];
        struct tagOLEUIOBJECTPROPSW* lpOP;
} OLEUILINKPROPSW, *POLEUILINKPROPSW, FAR* LPOLEUILINKPROPSW;
typedef struct tagOLEUILINKPROPSA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        DWORD           dwReserved1[2];
        LPFNOLEUIHOOK   lpfnHook;
        LPARAM          lCustData;
        DWORD           dwReserved2[3];
        struct tagOLEUIOBJECTPROPSA* lpOP;
} OLEUILINKPROPSA, *POLEUILINKPROPSA, FAR* LPOLEUILINKPROPSA;
#ifdef UNICODE
#define tagOLEUILINKPROPS tagOLEUILINKPROPSW
#define OLEUILINKPROPS OLEUILINKPROPSW
#define POLEUILINKPROPS POLEUILINKPROPSW
#define LPOLEUILINKPROPS LPOLEUILINKPROPSW
#else
#define tagOLEUILINKPROPS tagOLEUILINKPROPSA
#define OLEUILINKPROPS OLEUILINKPROPSA
#define POLEUILINKPROPS POLEUILINKPROPSA
#define LPOLEUILINKPROPS LPOLEUILINKPROPSA
#endif
#if (WINVER >= 0x400)
#include <prsht.h>
#ifndef PSM_SETFINISHTEXTA
typedef struct _PROPSHEETHEADER FAR* LPPROPSHEETHEADERW;
typedef struct _PROPSHEETHEADER FAR* LPPROPSHEETHEADERA;
#endif
#else
typedef void FAR* LPPROPSHEETHEADERW;
typedef void FAR* LPPROPSHEETHEADERA;
#ifdef UNICODE
#define LPPROPSHEETHEADER LPPROPSHEETHEADERW
#else
#define LPPROPSHEETHEADER LPPROPSHEETHEADERA
#endif
#endif
typedef struct tagOLEUIOBJECTPROPSW
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        LPPROPSHEETHEADERW   lpPS;
        DWORD           dwObject;
        LPOLEUIOBJINFOW lpObjInfo;
        DWORD           dwLink;
        LPOLEUILINKINFOW lpLinkInfo;
        LPOLEUIGNRLPROPSW lpGP;
        LPOLEUIVIEWPROPSW lpVP;
        LPOLEUILINKPROPSW lpLP;
} OLEUIOBJECTPROPSW, *POLEUIOBJECTPROPSW, FAR* LPOLEUIOBJECTPROPSW;
typedef struct tagOLEUIOBJECTPROPSA
{
        DWORD           cbStruct;
        DWORD           dwFlags;
        LPPROPSHEETHEADERA  lpPS;
        DWORD           dwObject;
        LPOLEUIOBJINFOA lpObjInfo;
        DWORD           dwLink;
        LPOLEUILINKINFOA lpLinkInfo;
        LPOLEUIGNRLPROPSA lpGP;
        LPOLEUIVIEWPROPSA lpVP;
        LPOLEUILINKPROPSA lpLP;
} OLEUIOBJECTPROPSA, *POLEUIOBJECTPROPSA, FAR* LPOLEUIOBJECTPROPSA;
STDAPI_(UINT) OleUIObjectPropertiesW(LPOLEUIOBJECTPROPSW);
STDAPI_(UINT) OleUIObjectPropertiesA(LPOLEUIOBJECTPROPSA);
#ifdef UNICODE
#define tagOLEUIOBJECTPROPS tagOLEUIOBJECTPROPSW
#define OLEUIOBJECTPROPS OLEUIOBJECTPROPSW
#define POLEUIOBJECTPROPS POLEUIOBJECTPROPSW
#define LPOLEUIOBJECTPROPS LPOLEUIOBJECTPROPSW
#define OleUIObjectProperties OleUIObjectPropertiesW
#else
#define tagOLEUIOBJECTPROPS tagOLEUIOBJECTPROPSA
#define OLEUIOBJECTPROPS OLEUIOBJECTPROPSA
#define POLEUIOBJECTPROPS POLEUIOBJECTPROPSA
#define LPOLEUIOBJECTPROPS LPOLEUIOBJECTPROPSA
#define OleUIObjectProperties OleUIObjectPropertiesA
#endif
#define OPF_OBJECTISLINK                0x00000001L
#define OPF_NOFILLDEFAULT               0x00000002L
#define OPF_SHOWHELP                    0x00000004L
#define OPF_DISABLECONVERT              0x00000008L
#define OLEUI_OPERR_SUBPROPNULL         (OLEUI_ERR_STANDARDMAX+0)
#define OLEUI_OPERR_SUBPROPINVALID      (OLEUI_ERR_STANDARDMAX+1)
#define OLEUI_OPERR_PROPSHEETNULL       (OLEUI_ERR_STANDARDMAX+2)
#define OLEUI_OPERR_PROPSHEETINVALID    (OLEUI_ERR_STANDARDMAX+3)
#define OLEUI_OPERR_SUPPROP             (OLEUI_ERR_STANDARDMAX+4)
#define OLEUI_OPERR_PROPSINVALID        (OLEUI_ERR_STANDARDMAX+5)
#define OLEUI_OPERR_PAGESINCORRECT      (OLEUI_ERR_STANDARDMAX+6)
#define OLEUI_OPERR_INVALIDPAGES        (OLEUI_ERR_STANDARDMAX+7)
#define OLEUI_OPERR_NOTSUPPORTED        (OLEUI_ERR_STANDARDMAX+8)
#define OLEUI_OPERR_DLGPROCNOTNULL      (OLEUI_ERR_STANDARDMAX+9)
#define OLEUI_OPERR_LPARAMNOTZERO       (OLEUI_ERR_STANDARDMAX+10)
#define OLEUI_GPERR_STRINGINVALID       (OLEUI_ERR_STANDARDMAX+11)
#define OLEUI_GPERR_CLASSIDINVALID      (OLEUI_ERR_STANDARDMAX+12)
#define OLEUI_GPERR_LPCLSIDEXCLUDEINVALID   (OLEUI_ERR_STANDARDMAX+13)
#define OLEUI_GPERR_CBFORMATINVALID     (OLEUI_ERR_STANDARDMAX+14)
#define OLEUI_VPERR_METAPICTINVALID     (OLEUI_ERR_STANDARDMAX+15)
#define OLEUI_VPERR_DVASPECTINVALID     (OLEUI_ERR_STANDARDMAX+16)
#define OLEUI_LPERR_LINKCNTRNULL        (OLEUI_ERR_STANDARDMAX+17)
#define OLEUI_LPERR_LINKCNTRINVALID     (OLEUI_ERR_STANDARDMAX+18)
#define OLEUI_OPERR_PROPERTYSHEET       (OLEUI_ERR_STANDARDMAX+19)
#define OLEUI_OPERR_OBJINFOINVALID      (OLEUI_ERR_STANDARDMAX+20)
#define OLEUI_OPERR_LINKINFOINVALID     (OLEUI_ERR_STANDARDMAX+21)
#define OLEUI_QUERY_GETCLASSID          0xFF00
#define OLEUI_QUERY_LINKBROKEN          0xFF01
int __cdecl OleUIPromptUserW(int nTemplate, HWND hwndParent, ...);
int __cdecl OleUIPromptUserA(int nTemplate, HWND hwndParent, ...);
#ifdef UNICODE
#define OleUIPromptUser OleUIPromptUserW
#else
#define OleUIPromptUser OleUIPromptUserA
#endif
STDAPI_(BOOL) OleUIUpdateLinksW(LPOLEUILINKCONTAINERW lpOleUILinkCntr,
        HWND hwndParent, LPWSTR lpszTitle, int cLinks);
STDAPI_(BOOL) OleUIUpdateLinksA(LPOLEUILINKCONTAINERA lpOleUILinkCntr,
        HWND hwndParent, LPSTR lpszTitle, int cLinks);
#ifdef UNICODE
#define OleUIUpdateLinks OleUIUpdateLinksW
#else
#define OleUIUpdateLinks OleUIUpdateLinksA
#endif
#pragma pack(pop)
#endif
#endif
