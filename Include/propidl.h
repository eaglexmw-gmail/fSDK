/*+@@file@@----------------------------------------------------------------*//*!
 \file		propidl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 14:25:47 2016
 \date		Modified on Mon Jun 27 14:25:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __propidl_h__
#define __propidl_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IPropertyStorage_FWD_DEFINED__
#define __IPropertyStorage_FWD_DEFINED__
typedef interface IPropertyStorage IPropertyStorage;
#endif
#ifndef __IPropertySetStorage_FWD_DEFINED__
#define __IPropertySetStorage_FWD_DEFINED__
typedef interface IPropertySetStorage IPropertySetStorage;
#endif
#ifndef __IEnumSTATPROPSTG_FWD_DEFINED__
#define __IEnumSTATPROPSTG_FWD_DEFINED__
typedef interface IEnumSTATPROPSTG IEnumSTATPROPSTG;
#endif
#ifndef __IEnumSTATPROPSETSTG_FWD_DEFINED__
#define __IEnumSTATPROPSETSTG_FWD_DEFINED__
typedef interface IEnumSTATPROPSETSTG IEnumSTATPROPSETSTG;
#endif
#include "objidl.h"
#include "oaidl.h"
typedef struct tagVersionedStream
{
	GUID guidVersion;
	IStream *pStream;
} VERSIONEDSTREAM;
typedef struct tagVersionedStream *LPVERSIONEDSTREAM;
#define	PROPSETFLAG_DEFAULT	( 0 )
#define	PROPSETFLAG_NONSIMPLE	( 1 )
#define	PROPSETFLAG_ANSI	( 2 )
#define	PROPSETFLAG_UNBUFFERED	( 4 )
#define	PROPSETFLAG_CASE_SENSITIVE	( 8 )
#define	PROPSET_BEHAVIOR_CASE_SENSITIVE	( 1 )
#ifdef MIDL_PASS
typedef struct tag_inner_PROPVARIANT PROPVARIANT;
#else
typedef struct tagPROPVARIANT PROPVARIANT;
#endif
typedef struct tagCAC
{
	ULONG cElems;
	CHAR *pElems;
} CAC;
typedef struct tagCAUB
{
	ULONG cElems;
	UCHAR *pElems;
} CAUB;
typedef struct tagCAI
{
	ULONG cElems;
	SHORT *pElems;
} CAI;
typedef struct tagCAUI
{
	ULONG cElems;
	USHORT *pElems;
} CAUI;
typedef struct tagCAL
{
	ULONG cElems;
	LONG *pElems;
} CAL;
typedef struct tagCAUL
{
	ULONG cElems;
	ULONG *pElems;
} CAUL;
typedef struct tagCAFLT
{
	ULONG cElems;
	FLOAT *pElems;
} CAFLT;
typedef struct tagCADBL
{
	ULONG cElems;
	DOUBLE *pElems;
} CADBL;
typedef struct tagCACY
{
	ULONG cElems;
	CY *pElems;
} CACY;
typedef struct tagCADATE
{
	ULONG cElems;
	DATE *pElems;
} CADATE;
typedef struct tagCABSTR
{
	ULONG cElems;
	BSTR *pElems;
} CABSTR;
typedef struct tagCABSTRBLOB
{
	ULONG cElems;
	BSTRBLOB *pElems;
} CABSTRBLOB;
typedef struct tagCABOOL
{
	ULONG cElems;
	VARIANT_BOOL *pElems;
} CABOOL;
typedef struct tagCASCODE
{
	ULONG cElems;
	SCODE *pElems;
} CASCODE;
typedef struct tagCAPROPVARIANT
{
	ULONG cElems;
	PROPVARIANT *pElems;
} CAPROPVARIANT;
typedef struct tagCAH
{
	ULONG cElems;
	LARGE_INTEGER *pElems;
} CAH;
typedef struct tagCAUH
{
	ULONG cElems;
	ULARGE_INTEGER *pElems;
} CAUH;
typedef struct tagCALPSTR
{
	ULONG cElems;
	LPSTR *pElems;
} CALPSTR;
typedef struct tagCALPWSTR
{
	ULONG cElems;
	LPWSTR *pElems;
} CALPWSTR;
typedef struct tagCAFILETIME
{
	ULONG cElems;
	FILETIME *pElems;
} CAFILETIME;
typedef struct tagCACLIPDATA
{
	ULONG cElems;
	CLIPDATA *pElems;
} CACLIPDATA;
typedef struct tagCACLSID
{
	ULONG cElems;
	CLSID *pElems;
} CACLSID;
#ifdef MIDL_PASS
typedef BYTE PROPVAR_PAD1;
typedef BYTE PROPVAR_PAD2;
typedef ULONG PROPVAR_PAD3;
#else
typedef WORD PROPVAR_PAD1;
typedef WORD PROPVAR_PAD2;
typedef WORD PROPVAR_PAD3;
#define tag_inner_PROPVARIANT
#endif
#if !defined(_MSC_EXTENSIONS)
struct tagPROPVARIANT;
#else
#ifndef MIDL_PASS
struct tagPROPVARIANT
{
	union
	{
#endif
		struct tag_inner_PROPVARIANT
		{
			VARTYPE vt;
			PROPVAR_PAD1 wReserved1;
			PROPVAR_PAD2 wReserved2;
			PROPVAR_PAD3 wReserved3;
			union
			{
				CHAR cVal;
				UCHAR bVal;
				SHORT iVal;
				USHORT uiVal;
				LONG lVal;
				ULONG ulVal;
				INT intVal;
				UINT uintVal;
				LARGE_INTEGER hVal;
				ULARGE_INTEGER uhVal;
				FLOAT fltVal;
				DOUBLE dblVal;
				VARIANT_BOOL boolVal;
				_VARIANT_BOOL bool;
				SCODE scode;
				CY cyVal;
				DATE date;
				FILETIME filetime;
				CLSID *puuid;
				CLIPDATA *pclipdata;
				BSTR bstrVal;
				BSTRBLOB bstrblobVal;
				BLOB blob;
				LPSTR pszVal;
				LPWSTR pwszVal;
				IUnknown *punkVal;
				IDispatch *pdispVal;
				IStream *pStream;
				IStorage *pStorage;
				LPVERSIONEDSTREAM pVersionedStream;
				LPSAFEARRAY parray;
				CAC cac;
				CAUB caub;
				CAI cai;
				CAUI caui;
				CAL cal;
				CAUL caul;
				CAH cah;
				CAUH cauh;
				CAFLT caflt;
				CADBL cadbl;
				CABOOL cabool;
				CASCODE cascode;
				CACY cacy;
				CADATE cadate;
				CAFILETIME cafiletime;
				CACLSID cauuid;
				CACLIPDATA caclipdata;
				CABSTR cabstr;
				CABSTRBLOB cabstrblob;
				CALPSTR calpstr;
				CALPWSTR calpwstr;
				CAPROPVARIANT capropvar;
				CHAR *pcVal;
				UCHAR *pbVal;
				SHORT *piVal;
				USHORT *puiVal;
				LONG *plVal;
				ULONG *pulVal;
				INT *pintVal;
				UINT *puintVal;
				FLOAT *pfltVal;
				DOUBLE *pdblVal;
				VARIANT_BOOL *pboolVal;
				DECIMAL *pdecVal;
				SCODE *pscode;
				CY *pcyVal;
				DATE *pdate;
				BSTR *pbstrVal;
				IUnknown **ppunkVal;
				IDispatch **ppdispVal;
				LPSAFEARRAY *pparray;
				PROPVARIANT *pvarVal;
			};
		};
#ifndef MIDL_PASS
		DECIMAL decVal;
	};
};
#endif
#endif
#ifdef MIDL_PASS
typedef struct tag_inner_PROPVARIANT *LPPROPVARIANT;
typedef const PROPVARIANT *REFPROPVARIANT;
#else
typedef struct tagPROPVARIANT *LPPROPVARIANT;
#ifndef _REFPROPVARIANT_DEFINED
#define _REFPROPVARIANT_DEFINED
#define REFPROPVARIANT const PROPVARIANT * __MIDL_CONST
#endif
#endif
#define	PID_DICTIONARY	( 0 )
#define	PID_CODEPAGE	( 0x1 )
#define	PID_FIRST_USABLE	( 0x2 )
#define	PID_FIRST_NAME_DEFAULT	( 0xfff )
#define	PID_LOCALE	( 0x80000000 )
#define	PID_MODIFY_TIME	( 0x80000001 )
#define	PID_SECURITY	( 0x80000002 )
#define	PID_BEHAVIOR	( 0x80000003 )
#define	PID_ILLEGAL	( 0xffffffff )
#define	PID_MIN_READONLY	( 0x80000000 )
#define	PID_MAX_READONLY	( 0xbfffffff )
#define PIDDI_THUMBNAIL          0x00000002L
#define PIDSI_TITLE               0x00000002L
#define PIDSI_SUBJECT             0x00000003L
#define PIDSI_AUTHOR              0x00000004L
#define PIDSI_KEYWORDS            0x00000005L
#define PIDSI_COMMENTS            0x00000006L
#define PIDSI_TEMPLATE            0x00000007L
#define PIDSI_LASTAUTHOR          0x00000008L
#define PIDSI_REVNUMBER           0x00000009L
#define PIDSI_EDITTIME            0x0000000aL
#define PIDSI_LASTPRINTED         0x0000000bL
#define PIDSI_CREATE_DTM          0x0000000cL
#define PIDSI_LASTSAVE_DTM        0x0000000dL
#define PIDSI_PAGECOUNT           0x0000000eL
#define PIDSI_WORDCOUNT           0x0000000fL
#define PIDSI_CHARCOUNT           0x00000010L
#define PIDSI_THUMBNAIL           0x00000011L
#define PIDSI_APPNAME             0x00000012L
#define PIDSI_DOC_SECURITY        0x00000013L
#define PIDDSI_CATEGORY          0x00000002
#define PIDDSI_PRESFORMAT        0x00000003
#define PIDDSI_BYTECOUNT         0x00000004
#define PIDDSI_LINECOUNT         0x00000005
#define PIDDSI_PARCOUNT          0x00000006
#define PIDDSI_SLIDECOUNT        0x00000007
#define PIDDSI_NOTECOUNT         0x00000008
#define PIDDSI_HIDDENCOUNT       0x00000009
#define PIDDSI_MMCLIPCOUNT       0x0000000A
#define PIDDSI_SCALE             0x0000000B
#define PIDDSI_HEADINGPAIR       0x0000000C
#define PIDDSI_DOCPARTS          0x0000000D
#define PIDDSI_MANAGER           0x0000000E
#define PIDDSI_COMPANY           0x0000000F
#define PIDDSI_LINKSDIRTY        0x00000010
#define PIDMSI_EDITOR                   0x00000002L
#define PIDMSI_SUPPLIER                 0x00000003L
#define PIDMSI_SOURCE                   0x00000004L
#define PIDMSI_SEQUENCE_NO              0x00000005L
#define PIDMSI_PROJECT                  0x00000006L
#define PIDMSI_STATUS                   0x00000007L
#define PIDMSI_OWNER                    0x00000008L
#define PIDMSI_RATING                   0x00000009L
#define PIDMSI_PRODUCTION               0x0000000AL
#define PIDMSI_COPYRIGHT                0x0000000BL
enum PIDMSI_STATUS_VALUE { PIDMSI_STATUS_NORMAL = 0,
	PIDMSI_STATUS_NEW = (PIDMSI_STATUS_NORMAL + 1),
	PIDMSI_STATUS_PRELIM = (PIDMSI_STATUS_NEW + 1),
	PIDMSI_STATUS_DRAFT = (PIDMSI_STATUS_PRELIM + 1),
	PIDMSI_STATUS_INPROGRESS = (PIDMSI_STATUS_DRAFT + 1),
	PIDMSI_STATUS_EDIT = (PIDMSI_STATUS_INPROGRESS + 1),
	PIDMSI_STATUS_REVIEW = (PIDMSI_STATUS_EDIT + 1),
	PIDMSI_STATUS_PROOF = (PIDMSI_STATUS_REVIEW + 1),
	PIDMSI_STATUS_FINAL = (PIDMSI_STATUS_PROOF + 1),
	PIDMSI_STATUS_OTHER = 0x7fff
};
#define	PRSPEC_INVALID	( 0xffffffff )
#define	PRSPEC_LPWSTR	( 0 )
#define	PRSPEC_PROPID	( 1 )
typedef struct tagPROPSPEC
{
	ULONG ulKind;
	union
	{
		PROPID propid;
		LPOLESTR lpwstr;
	} DUMMYUNIONNAME;
} PROPSPEC;
typedef struct tagSTATPROPSTG
{
	LPOLESTR lpwstrName;
	PROPID propid;
	VARTYPE vt;
} STATPROPSTG;
#define PROPSETHDR_OSVER_KIND(dwOSVer)      HIWORD( (dwOSVer) )
#define PROPSETHDR_OSVER_MAJOR(dwOSVer)     LOBYTE(LOWORD( (dwOSVer) ))
#define PROPSETHDR_OSVER_MINOR(dwOSVer)     HIBYTE(LOWORD( (dwOSVer) ))
#define PROPSETHDR_OSVERSION_UNKNOWN        0xFFFFFFFF
typedef struct tagSTATPROPSETSTG
{
	FMTID fmtid;
	CLSID clsid;
	DWORD grfFlags;
	FILETIME mtime;
	FILETIME ctime;
	FILETIME atime;
	DWORD dwOSVersion;
} STATPROPSETSTG;
extern RPC_IF_HANDLE __MIDL_itf_propidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propidl_0000_0000_v0_0_s_ifspec;
#ifndef __IPropertyStorage_INTERFACE_DEFINED__
#define __IPropertyStorage_INTERFACE_DEFINED__
extern const IID IID_IPropertyStorage;
typedef struct IPropertyStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyStorage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyStorage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyStorage * This);
	HRESULT(STDMETHODCALLTYPE * ReadMultiple) (IPropertyStorage * This, ULONG cpspec, const PROPSPEC rgpspec[], PROPVARIANT rgpropvar[]);
	HRESULT(STDMETHODCALLTYPE * WriteMultiple) (IPropertyStorage * This, ULONG cpspec, const PROPSPEC rgpspec[], const PROPVARIANT rgpropvar[], PROPID propidNameFirst);
	HRESULT(STDMETHODCALLTYPE * DeleteMultiple) (IPropertyStorage * This, ULONG cpspec, const PROPSPEC rgpspec[]);
	HRESULT(STDMETHODCALLTYPE * ReadPropertyNames) (IPropertyStorage * This, ULONG cpropid, const PROPID rgpropid[], LPOLESTR rglpwstrName[]);
	HRESULT(STDMETHODCALLTYPE * WritePropertyNames) (IPropertyStorage * This, ULONG cpropid, const PROPID rgpropid[], const LPOLESTR rglpwstrName[]);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyNames) (IPropertyStorage * This, ULONG cpropid, const PROPID rgpropid[]);
	HRESULT(STDMETHODCALLTYPE * Commit) (IPropertyStorage * This, DWORD grfCommitFlags);
	HRESULT(STDMETHODCALLTYPE * Revert) (IPropertyStorage * This);
	HRESULT(STDMETHODCALLTYPE * Enum) (IPropertyStorage * This, IEnumSTATPROPSTG ** ppenum);
	HRESULT(STDMETHODCALLTYPE * SetTimes) (IPropertyStorage * This, const FILETIME * pctime, const FILETIME * patime, const FILETIME * pmtime);
	HRESULT(STDMETHODCALLTYPE * SetClass) (IPropertyStorage * This, REFCLSID clsid);
	HRESULT(STDMETHODCALLTYPE * Stat) (IPropertyStorage * This, STATPROPSETSTG * pstatpsstg);
	END_INTERFACE
} IPropertyStorageVtbl;
interface IPropertyStorage
{
	CONST_VTBL struct IPropertyStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyStorage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyStorage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyStorage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyStorage_ReadMultiple(This,cpspec,rgpspec,rgpropvar)    ( (This)->lpVtbl -> ReadMultiple(This,cpspec,rgpspec,rgpropvar) )
#define IPropertyStorage_WriteMultiple(This,cpspec,rgpspec,rgpropvar,propidNameFirst)    ( (This)->lpVtbl -> WriteMultiple(This,cpspec,rgpspec,rgpropvar,propidNameFirst) )
#define IPropertyStorage_DeleteMultiple(This,cpspec,rgpspec)    ( (This)->lpVtbl -> DeleteMultiple(This,cpspec,rgpspec) )
#define IPropertyStorage_ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName)    ( (This)->lpVtbl -> ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName) )
#define IPropertyStorage_WritePropertyNames(This,cpropid,rgpropid,rglpwstrName)    ( (This)->lpVtbl -> WritePropertyNames(This,cpropid,rgpropid,rglpwstrName) )
#define IPropertyStorage_DeletePropertyNames(This,cpropid,rgpropid)    ( (This)->lpVtbl -> DeletePropertyNames(This,cpropid,rgpropid) )
#define IPropertyStorage_Commit(This,grfCommitFlags)    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
#define IPropertyStorage_Revert(This)    ( (This)->lpVtbl -> Revert(This) )
#define IPropertyStorage_Enum(This,ppenum)    ( (This)->lpVtbl -> Enum(This,ppenum) )
#define IPropertyStorage_SetTimes(This,pctime,patime,pmtime)    ( (This)->lpVtbl -> SetTimes(This,pctime,patime,pmtime) )
#define IPropertyStorage_SetClass(This,clsid)    ( (This)->lpVtbl -> SetClass(This,clsid) )
#define IPropertyStorage_Stat(This,pstatpsstg)    ( (This)->lpVtbl -> Stat(This,pstatpsstg) )
#endif
#endif
#ifndef __IPropertySetStorage_INTERFACE_DEFINED__
#define __IPropertySetStorage_INTERFACE_DEFINED__
typedef IPropertySetStorage *LPPROPERTYSETSTORAGE;
extern const IID IID_IPropertySetStorage;
typedef struct IPropertySetStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertySetStorage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertySetStorage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertySetStorage * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IPropertySetStorage * This, REFFMTID rfmtid, const CLSID * pclsid, DWORD grfFlags, DWORD grfMode, IPropertyStorage ** ppprstg);
	HRESULT(STDMETHODCALLTYPE * Open) (IPropertySetStorage * This, REFFMTID rfmtid, DWORD grfMode, IPropertyStorage ** ppprstg);
	HRESULT(STDMETHODCALLTYPE * Delete) (IPropertySetStorage * This, REFFMTID rfmtid);
	HRESULT(STDMETHODCALLTYPE * Enum) (IPropertySetStorage * This, IEnumSTATPROPSETSTG ** ppenum);
	END_INTERFACE
} IPropertySetStorageVtbl;
interface IPropertySetStorage
{
	CONST_VTBL struct IPropertySetStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertySetStorage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertySetStorage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertySetStorage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertySetStorage_Create(This,rfmtid,pclsid,grfFlags,grfMode,ppprstg)    ( (This)->lpVtbl -> Create(This,rfmtid,pclsid,grfFlags,grfMode,ppprstg) )
#define IPropertySetStorage_Open(This,rfmtid,grfMode,ppprstg)    ( (This)->lpVtbl -> Open(This,rfmtid,grfMode,ppprstg) )
#define IPropertySetStorage_Delete(This,rfmtid)    ( (This)->lpVtbl -> Delete(This,rfmtid) )
#define IPropertySetStorage_Enum(This,ppenum)    ( (This)->lpVtbl -> Enum(This,ppenum) )
#endif
#endif
#ifndef __IEnumSTATPROPSTG_INTERFACE_DEFINED__
#define __IEnumSTATPROPSTG_INTERFACE_DEFINED__
typedef IEnumSTATPROPSTG *LPENUMSTATPROPSTG;
extern const IID IID_IEnumSTATPROPSTG;
typedef struct IEnumSTATPROPSTGVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSTATPROPSTG * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSTATPROPSTG * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSTATPROPSTG * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSTATPROPSTG * This, ULONG celt, STATPROPSTG * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSTATPROPSTG * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSTATPROPSTG * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSTATPROPSTG * This, IEnumSTATPROPSTG ** ppenum);
	END_INTERFACE
} IEnumSTATPROPSTGVtbl;
interface IEnumSTATPROPSTG
{
	CONST_VTBL struct IEnumSTATPROPSTGVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSTATPROPSTG_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSTATPROPSTG_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSTATPROPSTG_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumSTATPROPSTG_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSTATPROPSTG_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSTATPROPSTG_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumSTATPROPSTG_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumSTATPROPSTG_RemoteNext_Proxy(IEnumSTATPROPSTG *This, ULONG celt, STATPROPSTG *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumSTATPROPSTG_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumSTATPROPSETSTG_INTERFACE_DEFINED__
#define __IEnumSTATPROPSETSTG_INTERFACE_DEFINED__
typedef IEnumSTATPROPSETSTG *LPENUMSTATPROPSETSTG;
extern const IID IID_IEnumSTATPROPSETSTG;
typedef struct IEnumSTATPROPSETSTGVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumSTATPROPSETSTG *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumSTATPROPSETSTG *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumSTATPROPSETSTG *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumSTATPROPSETSTG *This, ULONG celt, STATPROPSETSTG *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumSTATPROPSETSTG *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumSTATPROPSETSTG *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumSTATPROPSETSTG *This, IEnumSTATPROPSETSTG **ppenum);
	END_INTERFACE
} IEnumSTATPROPSETSTGVtbl;
interface IEnumSTATPROPSETSTG
{
	CONST_VTBL struct IEnumSTATPROPSETSTGVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSTATPROPSETSTG_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSTATPROPSETSTG_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSTATPROPSETSTG_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumSTATPROPSETSTG_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSTATPROPSETSTG_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSTATPROPSETSTG_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumSTATPROPSETSTG_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumSTATPROPSETSTG_RemoteNext_Proxy(IEnumSTATPROPSETSTG *This, ULONG celt, STATPROPSETSTG *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumSTATPROPSETSTG_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
typedef IPropertyStorage *LPPROPERTYSTORAGE;
WINOLEAPI PropVariantCopy(PROPVARIANT *pvarDest, const PROPVARIANT *pvarSrc);
WINOLEAPI PropVariantClear(PROPVARIANT *pvar);
WINOLEAPI FreePropVariantArray(ULONG cVariants, PROPVARIANT *rgvars);
#if defined(_MSC_EXTENSIONS)
#define _PROPVARIANTINIT_DEFINED_
#   define PropVariantInit(pvar) memset ( (pvar), 0, sizeof(PROPVARIANT) )
#endif
#ifndef _STGCREATEPROPSTG_DEFINED_
WINOLEAPI StgCreatePropStg(IUnknown *pUnk, REFFMTID fmtid, const CLSID *pclsid, DWORD grfFlags, DWORD dwReserved, IPropertyStorage **ppPropStg);
WINOLEAPI StgOpenPropStg(IUnknown *pUnk, REFFMTID fmtid, DWORD grfFlags, DWORD dwReserved, IPropertyStorage **ppPropStg);
WINOLEAPI StgCreatePropSetStg(IStorage *pStorage, DWORD dwReserved, IPropertySetStorage **ppPropSetStg);
#define CCH_MAX_PROPSTG_NAME    31
WINOLEAPI FmtIdToPropStgName(const FMTID *pfmtid, LPOLESTR oszName);
WINOLEAPI PropStgNameToFmtId(const LPOLESTR oszName, FMTID *pfmtid);
#endif
#ifndef _SERIALIZEDPROPERTYVALUE_DEFINED_
#define _SERIALIZEDPROPERTYVALUE_DEFINED_
typedef struct tagSERIALIZEDPROPERTYVALUE
{
	DWORD dwType;
	BYTE rgb[1];
} SERIALIZEDPROPERTYVALUE;
#endif
extern SERIALIZEDPROPERTYVALUE *__stdcall StgConvertVariantToProperty(const PROPVARIANT *pvar, USHORT CodePage, SERIALIZEDPROPERTYVALUE *pprop, ULONG *pcb, PROPID pid, BOOLEAN fReserved, ULONG *pcIndirect);
extern RPC_IF_HANDLE __MIDL_itf_propidl_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propidl_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
HRESULT STDMETHODCALLTYPE IEnumSTATPROPSTG_Next_Proxy(IEnumSTATPROPSTG *This, ULONG celt, STATPROPSTG *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumSTATPROPSTG_Next_Stub(IEnumSTATPROPSTG *This, ULONG celt, STATPROPSTG *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumSTATPROPSETSTG_Next_Proxy(IEnumSTATPROPSETSTG *This, ULONG celt, STATPROPSETSTG *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumSTATPROPSETSTG_Next_Stub(IEnumSTATPROPSETSTG *This, ULONG celt, STATPROPSETSTG *rgelt, ULONG *pceltFetched);
#endif
