/*+@@file@@----------------------------------------------------------------*//*!
 \file		pnrpdef.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 19:00:21 2016
 \date		Modified on Sat Sep  3 19:00:21 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#if defined(PNRP_USE_V1_API) && defined(PNRP_USE_V2_API)
#error Conflicting versioning macros are defined
#endif
#if(_WIN32_WINNT >= 0x0600)
#if !defined(PNRP_USE_V1_API)
#if !defined(PNRP_USE_V2_API)
#define PNRP_USE_V2_API
#endif
#endif
#else
#if !defined(PNRP_USE_V2_API)
#if !defined(PNRP_USE_V1_API)
#define PNRP_USE_V1_API
#endif
#endif
#endif
#define PNRP_MAX_ENDPOINT_ADDRESSES   (10)
#define     WSZ_SCOPE_GLOBAL            L"GLOBAL"
#define     WSZ_SCOPE_SITELOCAL         L"SITELOCAL"
#define     WSZ_SCOPE_LINKLOCAL         L"LINKLOCAL"
typedef enum _PNRP_SCOPE 
{
    PNRP_SCOPE_ANY                  = 0,
    PNRP_GLOBAL_SCOPE               = 1,
    PNRP_SITE_LOCAL_SCOPE           = 2,
    PNRP_LINK_LOCAL_SCOPE           = 3
} PNRP_SCOPE, *PPNRP_SCOPE;
typedef enum _PNRP_CLOUD_STATE 
{
    PNRP_CLOUD_STATE_VIRTUAL       = 0,
    PNRP_CLOUD_STATE_SYNCHRONISING = 1,
    PNRP_CLOUD_STATE_ACTIVE        = 2,
    PNRP_CLOUD_STATE_DEAD          = 3,
    PNRP_CLOUD_STATE_DISABLED      = 4,
    PNRP_CLOUD_STATE_NO_NET        = 5,
    PNRP_CLOUD_STATE_ALONE         = 6
} PNRP_CLOUD_STATE;
typedef enum _PNRP_CLOUD_FLAGS
{
    PNRP_CLOUD_NO_FLAGS            = 0,
    PNRP_CLOUD_NAME_LOCAL          = 1,
    PNRP_CLOUD_RESOLVE_ONLY        = 2,
    PNRP_CLOUD_FULL_PARTICIPANT    = 4
} PNRP_CLOUD_FLAGS;
typedef enum _PNRP_REGISTERED_ID_STATE
{
    PNRP_REGISTERED_ID_STATE_OK      = 1,
    PNRP_REGISTERED_ID_STATE_PROBLEM = 2
} PNRP_REGISTERED_ID_STATE;
typedef enum _PNRP_RESOLVE_CRITERIA
{
    PNRP_RESOLVE_CRITERIA_DEFAULT           = 0,
    PNRP_RESOLVE_CRITERIA_REMOTE_PEER_NAME  = 1,
    PNRP_RESOLVE_CRITERIA_NEAREST_REMOTE_PEER_NAME = 2,
    PNRP_RESOLVE_CRITERIA_NON_CURRENT_PROCESS_PEER_NAME = 3,
    PNRP_RESOLVE_CRITERIA_NEAREST_NON_CURRENT_PROCESS_PEER_NAME = 4,
    PNRP_RESOLVE_CRITERIA_ANY_PEER_NAME     = 5,
    PNRP_RESOLVE_CRITERIA_NEAREST_PEER_NAME = 6
} PNRP_RESOLVE_CRITERIA;
typedef struct _PNRP_CLOUD_ID 
{
    INT         AddressFamily;
    PNRP_SCOPE  Scope;
    ULONG       ScopeId;
} PNRP_CLOUD_ID, *PPNRP_CLOUD_ID;
typedef enum _PNRP_EXTENDED_PAYLOAD_TYPE
{
    PNRP_EXTENDED_PAYLOAD_TYPE_NONE = 0,
    PNRP_EXTENDED_PAYLOAD_TYPE_BINARY,
    PNRP_EXTENDED_PAYLOAD_TYPE_STRING,
	
} PNRP_EXTENDED_PAYLOAD_TYPE, *PPNRP_EXTENDED_PAYLOAD_TYPE;
#define PNRP_MAX_EXTENDED_PAYLOAD_BYTES      (0x1000)
