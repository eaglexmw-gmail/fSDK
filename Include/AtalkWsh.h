/*+@@file@@----------------------------------------------------------------*//*!
 \file		AtalkWsh.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:30:11 2016
 \date		Modified on Sat Jul  2 18:30:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef	_ATALKWSH_
#define	_ATALKWSH_
#if __POCC__ >= 500
#pragma once
#endif
#define DECIMAL_BASE    			10
#define	ATPROTO_BASE				(1000 * AF_APPLETALK)
#define	SOL_APPLETALK				(ATPROTO_BASE)
#define DDPPROTO_RTMP   			(ATPROTO_BASE + 1)
#define DDPPROTO_NBP    			(ATPROTO_BASE + 2)
#define DDPPROTO_ATP    			(ATPROTO_BASE + 3)
#define DDPPROTO_AEP    			(ATPROTO_BASE + 4)
#define DDPPROTO_RTMPRQ 			(ATPROTO_BASE + 5)
#define DDPPROTO_ZIP    			(ATPROTO_BASE + 6)
#define DDPPROTO_ADSP   			(ATPROTO_BASE + 7)
#define DDPPROTO_MAX    			(ATPROTO_BASE + 255)
#define ATPROTO_ADSP        		(DDPPROTO_MAX + 1)
#define ATPROTO_ATP         		(DDPPROTO_MAX + 2)
#define ATPROTO_ASP         		(DDPPROTO_MAX + 3)
#define ATPROTO_PAP         		(DDPPROTO_MAX + 4)
#define SO_REGISTER_NAME     		0xA000
#define SO_DEREGISTER_NAME   		0xA001
#define SO_REMOVE_NAME				SO_DEREGISTER_NAME
#define SO_LOOKUP_NAME       		0xA002
#define SO_CONFIRM_NAME       		0xA003
#define	SO_LOOKUP_MYZONE			0xA004
#define	SO_GETMYZONE				SO_LOOKUP_MYZONE
#define SO_LOOKUP_ZONES      		0xA005
#define SO_GETZONELIST				SO_LOOKUP_ZONES
#define	SO_LOOKUP_ZONES_ON_ADAPTER	0xA006
#define	SO_GETLOCALZONES			SO_LOOKUP_ZONES_ON_ADAPTER
#define	SO_LOOKUP_NETDEF_ON_ADAPTER	0xA007
#define	SO_GETNETINFO				SO_LOOKUP_NETDEF_ON_ADAPTER
#define SO_PAP_SET_SERVER_STATUS	0xA007
#define SO_PAP_GET_SERVER_STATUS	0xA008
#define	SO_PAP_PRIME_READ			0xA009
#define ATADDR_ANY             		0
#define ATADDR_BROADCAST       		0xFF
#define	WSAEMSGPARTIAL				(WSABASEERR+100)
#define	MAX_PAP_STATUS_SIZE			255
#define	MIN_PAP_READ_BUF_SIZE		4096
#define	PAP_UNUSED_STATUS_BYTES		4
typedef struct sockaddr_at
{
    USHORT    sat_family;
    USHORT    sat_net;
    UCHAR     sat_node;
    UCHAR     sat_socket;
} SOCKADDR_AT, *PSOCKADDR_AT;
typedef	union
{
	struct
	{
		USHORT		Network;
		UCHAR		Node;
		UCHAR       Socket;
	};
	ULONG			Address;
} WSH_ATALK_ADDRESS, *PWSH_ATALK_ADDRESS;
#define MAX_ENTITY  32
typedef struct
{
    CHAR    ObjectNameLen;
    CHAR    ObjectName[MAX_ENTITY];
    CHAR    TypeNameLen;
    CHAR    TypeName[MAX_ENTITY];
    CHAR    ZoneNameLen;
    CHAR    ZoneName[MAX_ENTITY];
} WSH_NBP_NAME, *PWSH_NBP_NAME;
typedef struct
{
	WSH_ATALK_ADDRESS		Address;
	USHORT					Enumerator;
	WSH_NBP_NAME			NbpName;
} WSH_NBP_TUPLE, *PWSH_NBP_TUPLE;
typedef WSH_NBP_NAME    WSH_REGISTER_NAME, *PWSH_REGISTER_NAME;
typedef WSH_NBP_NAME    WSH_DEREGISTER_NAME, *PWSH_DEREGISTER_NAME;
typedef WSH_NBP_NAME    WSH_REMOVE_NAME, *PWSH_REMOVE_NAME;
typedef struct _WSH_LOOKUP_ZONES
{
    ULONG   NoZones;
} WSH_LOOKUP_ZONES, *PWSH_LOOKUP_ZONES;
typedef struct _WSH_LOOKUP_NETDEF_ON_ADAPTER
{
	USHORT	NetworkRangeLowerEnd;
	USHORT	NetworkRangeUpperEnd;
} WSH_LOOKUP_NETDEF_ON_ADAPTER , *PWSH_LOOKUP_NETDEF_ON_ADAPTER;
typedef struct _WSH_LOOKUP_NAME
{
    WSH_NBP_TUPLE    LookupTuple;
    ULONG   NoTuples;
} WSH_LOOKUP_NAME, *PWSH_LOOKUP_NAME;
typedef struct _WSH_PAP_GET_SERVER_STATUS
{
	SOCKADDR_AT			ServerAddr;
	UCHAR				Reserved[PAP_UNUSED_STATUS_BYTES];
	UCHAR				ServerStatus[MAX_PAP_STATUS_SIZE+1];
} WSH_PAP_GET_SERVER_STATUS, *PWSH_PAP_GET_SERVER_STATUS;
#endif



