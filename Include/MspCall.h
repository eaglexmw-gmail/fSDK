/*+@@file@@----------------------------------------------------------------*//*!
 \file		MspCall.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:29:45 2016
 \date		Modified on Sun Aug 14 22:29:45 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MSPCALL_H_
#define __MSPCALL_H_
#if __POCC__ >= 500
#pragma once
#endif
#pragma message ("C++ header")
#if 0
class ATL_NO_VTABLE CMSPCallBase 
    public CComObjectRootEx<CComMultiThreadModelNoCS>,
    public IDispatchImpl<ITStreamControl, &IID_ITStreamControl, &LIBID_TAPI3Lib>
{
public
DECLARE_POLY_AGGREGATABLE(CMSPCallBase)
BEGIN_COM_MAP(CMSPCallBase)
    COM_INTERFACE_ENTRY(IDispatch)
    COM_INTERFACE_ENTRY(ITStreamControl)
END_COM_MAP()
DECLARE_GET_CONTROLLING_UNKNOWN()
DECLARE_VQI()
    CMSPCallBase();
    virtual ~CMSPCallBase();
    virtual ULONG MSPCallAddRef  (void) = 0;
    virtual ULONG MSPCallRelease (void) = 0;
    STDMETHOD (CreateStream) (
             long                lMediaType,
             TERMINAL_DIRECTION  Direction,
  ITStream **         ppStream
        );
    STDMETHOD (EnumerateStreams) (
     IEnumStream **      ppEnumStream
        );
    STDMETHOD (RemoveStream) (
             ITStream *          pStream
        ) = 0;
    STDMETHOD (get_Streams) (
     VARIANT *           pStreams
        );
    virtual HRESULT Init(
             CMSPAddress *       pMSPAddress,
             MSP_HANDLE          htCall,
             DWORD               dwReserved,
             DWORD               dwMediaType
        ) = 0;
    virtual HRESULT ShutDown(
        ) = 0;
    virtual HRESULT ReceiveTSPCallData(
             PBYTE               pBuffer,
             DWORD               dwSize
        );
    HRESULT HandleStreamEvent(
             MSPEVENTITEM *      EventItem
        ) const;
protected
    virtual HRESULT InternalCreateStream(
             DWORD               dwMediaType,
             TERMINAL_DIRECTION  Direction,
  ITStream **         ppStream
        ) = 0;
    virtual HRESULT CreateStreamObject(
             DWORD               dwMediaType,
             TERMINAL_DIRECTION  Direction,
             IMediaEvent *       pGraph,
             ITStream **         ppStream
        ) = 0;
protected
    CMSPAddress*                m_pMSPAddress;
    MSP_HANDLE                  m_htCall;
    DWORD                       m_dwMediaType;
    CMSPArray <ITStream *>      m_Streams;
    CMSPCritSection             m_lock;
};
class ATL_NO_VTABLE CMSPCallMultiGraph : public CMSPCallBase
{
public
    typedef struct
    {
        CMSPCallMultiGraph *    pMSPCall;
        ITStream *              pITStream;
        IMediaEvent *           pIMediaEvent;
    } MSPSTREAMCONTEXT, *PMSPSTREAMCONTEXT;
    typedef struct _THREADPOOLWAITBLOCK
    {
        HANDLE              hWaitHandle;
        MSPSTREAMCONTEXT *  pContext;
        BOOL operator ==(struct _THREADPOOLWAITBLOCK &t)
        {
            return ((hWaitHandle == t.hWaitHandle)
                && (pContext == t.pContext));
        }
    } THREADPOOLWAITBLOCK, *PTHREADPOOLWAITBLOCK;
public
    CMSPCallMultiGraph();
    virtual ~CMSPCallMultiGraph();
    STDMETHOD (RemoveStream) (
             ITStream *          ppStream
        );
    HRESULT Init(
             CMSPAddress *       pMSPAddress,
             MSP_HANDLE          htCall,
             DWORD               dwReserved,
             DWORD               dwMediaType
        );
    HRESULT ShutDown(
        );
    static VOID NTAPI DispatchGraphEvent(
             VOID *              pContext,
             BOOLEAN             bFlag
        );
    virtual VOID HandleGraphEvent(
             MSPSTREAMCONTEXT *  pContext
    );
    virtual HRESULT ProcessGraphEvent(
             ITStream *          pITStream,
             long                lEventCode,
             LONG_PTR            lParam1,
             LONG_PTR            lParam2
    );
protected
    HRESULT RegisterWaitEvent(
             IMediaEvent *       pIMediaEvent,
             ITStream *           pITStream
        );
    HRESULT UnregisterWaitEvent(
             int                 index
        );
    virtual HRESULT InternalCreateStream(
             DWORD               dwMediaType,
             TERMINAL_DIRECTION  Direction,
  ITStream **         ppStream
        );
protected
    CMSPArray <THREADPOOLWAITBLOCK>      m_ThreadPoolWaitBlocks;
};
struct MULTI_GRAPH_EVENT_DATA
{
    CMSPCallMultiGraph * pCall;
    ITStream           * pITStream;
    long                 lEventCode;
    LONG_PTR             lParam1;
    LONG_PTR             lParam2;
    IMediaEvent        * pIMediaEvent;
    MULTI_GRAPH_EVENT_DATA()
        :pIMediaEvent(NULL),
        pITStream(NULL),
        lEventCode(0),
        lParam1(0),
        lParam2(0)
    {}
};
DWORD WINAPI AsyncMultiGraphEvent(LPVOID pVoid);
#endif
#endif
