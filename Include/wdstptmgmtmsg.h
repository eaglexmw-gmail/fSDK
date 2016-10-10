/*+@@file@@----------------------------------------------------------------*//*!
 \file		wdstptmgmtmsg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:39:47 2016
 \date		Modified on Mon Sep 19 00:39:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#define FACILITY_WDSTPTMGMT              0x110
#define FACILITY_MAX_WDSTPTMGMT          0x110
#define FACILITY_BASE_WDSTPTMGMT         0x100
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3
#define WDSTPTMGMT_CATEGORY              ((HRESULT)0x00000001L)
#define WDSTPTMGMT_E_INVALID_PROPERTY    ((HRESULT)0xC1100100L)
#define WDSTPTMGMT_E_INVALID_OPERATION   ((HRESULT)0xC1100101L)
#define WDSTPTMGMT_E_INVALID_CLASS       ((HRESULT)0xC1100102L)
#define WDSTPTMGMT_E_CONTENT_PROVIDER_ALREADY_REGISTERED ((HRESULT)0xC1100103L)
#define WDSTPTMGMT_E_CONTENT_PROVIDER_NOT_REGISTERED ((HRESULT)0xC1100104L)
#define WDSTPTMGMT_E_INVALID_CONTENT_PROVIDER_NAME ((HRESULT)0xC1100105L)
#define WDSTPTMGMT_E_TRANSPORT_SERVER_ROLE_NOT_CONFIGURED ((HRESULT)0xC1100106L)
#define WDSTPTMGMT_E_NAMESPACE_ALREADY_REGISTERED ((HRESULT)0xC1100107L)
#define WDSTPTMGMT_E_NAMESPACE_NOT_REGISTERED ((HRESULT)0xC1100108L)
#define WDSTPTMGMT_E_CANNOT_REINITIALIZE_OBJECT ((HRESULT)0xC1100109L)
#define WDSTPTMGMT_E_INVALID_NAMESPACE_NAME ((HRESULT)0xC110010AL)
#define WDSTPTMGMT_E_INVALID_NAMESPACE_DATA ((HRESULT)0xC110010BL)
#define WDSTPTMGMT_E_NAMESPACE_READ_ONLY ((HRESULT)0xC110010CL)
#define WDSTPTMGMT_E_INVALID_NAMESPACE_START_TIME ((HRESULT)0xC110010DL)
#define WDSTPTMGMT_E_INVALID_DIAGNOSTICS_COMPONENTS ((HRESULT)0xC110010EL)
#define WDSTPTMGMT_E_CANNOT_REFRESH_DIRTY_OBJECT ((HRESULT)0xC110010FL)
#define WDSTPTMGMT_E_INVALID_SERVICE_IP_ADDRESS_RANGE ((HRESULT)0xC1100110L)
#define WDSTPTMGMT_E_INVALID_SERVICE_PORT_RANGE ((HRESULT)0xC1100111L)
#define WDSTPTMGMT_E_INVALID_NAMESPACE_START_PARAMETERS ((HRESULT)0xC1100112L)
#define WDSTPTMGMT_E_TRANSPORT_SERVER_UNAVAILABLE ((HRESULT)0xC1100113L)
#define WDSTPTMGMT_E_NAMESPACE_NOT_ON_SERVER ((HRESULT)0xC1100114L)
#define WDSTPTMGMT_E_NAMESPACE_REMOVED_FROM_SERVER ((HRESULT)0xC1100115L)
#define WDSTPTMGMT_E_INVALID_IP_ADDRESS  ((HRESULT)0xC1100116L)
#define WDSTPTMGMT_E_INVALID_IPV4_MULTICAST_ADDRESS ((HRESULT)0xC1100117L)
#define WDSTPTMGMT_E_INVALID_IPV6_MULTICAST_ADDRESS ((HRESULT)0xC1100118L)
#define WDSTPTMGMT_E_IPV6_NOT_SUPPORTED  ((HRESULT)0xC1100119L)
#define WDSTPTMGMT_E_INVALID_IPV6_MULTICAST_ADDRESS_SOURCE ((HRESULT)0xC110011AL)
#define WDSTPTMGMT_E_INVALID_MULTISTREAM_STREAM_COUNT ((HRESULT)0xC110011BL)
#define WDSTPTMGMT_E_INVALID_AUTO_DISCONNECT_THRESHOLD ((HRESULT)0xC110011CL)
#define WDSTPTMGMT_E_MULTICAST_SESSION_POLICY_NOT_SUPPORTED ((HRESULT)0xC110011DL)
#define WDSTPTMGMT_E_INVALID_SLOW_CLIENT_HANDLING_TYPE ((HRESULT)0xC110011EL)
#define WDSTPTMGMT_E_NETWORK_PROFILES_NOT_SUPPORTED ((HRESULT)0xC110011FL)
