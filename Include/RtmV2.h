/*+@@file@@----------------------------------------------------------------*//*!
 \file		RtmV2.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 23:26:41 2016
 \date		Modified on Sat Sep  3 23:26:41 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __ROUTING_RTMv2_H__
#define __ROUTING_RTMv2_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <in6addr.h>
#define RTM_MAX_ADDRESS_SIZE         16
#define RTM_MAX_VIEWS                 32
#define RTM_VIEW_ID_UCAST              0
#define RTM_VIEW_ID_MCAST              1
#define RTM_VIEW_MASK_SIZE          0x20
#define RTM_VIEW_MASK_NONE    0x00000000
#define RTM_VIEW_MASK_ANY     0x00000000
#define RTM_VIEW_MASK_UCAST   0x00000001
#define RTM_VIEW_MASK_MCAST   0x00000002
#define RTM_VIEW_MASK_ALL     0xFFFFFFFF
typedef INT   RTM_VIEW_ID, *PRTM_VIEW_ID;
typedef DWORD RTM_VIEW_SET, *PRTM_VIEW_SET;
typedef struct _RTM_REGN_PROFILE
{
    UINT            MaxNextHopsInRoute;
    UINT            MaxHandlesInEnum;
    RTM_VIEW_SET    ViewsSupported;
    UINT            NumberOfViews;
}
RTM_REGN_PROFILE, *PRTM_REGN_PROFILE;
typedef HANDLE      RTM_ENTITY_HANDLE,
                   *PRTM_ENTITY_HANDLE,
                    RTM_DEST_HANDLE,
                   *PRTM_DEST_HANDLE,
                    RTM_ROUTE_HANDLE,
                   *PRTM_ROUTE_HANDLE,
                    RTM_NEXTHOP_HANDLE,
                   *PRTM_NEXTHOP_HANDLE,
                    RTM_ENUM_HANDLE,
                   *PRTM_ENUM_HANDLE,
                    RTM_ROUTE_LIST_HANDLE,
                   *PRTM_ROUTE_LIST_HANDLE,
                    RTM_NOTIFY_HANDLE,
                   *PRTM_NOTIFY_HANDLE;
typedef struct _RTM_NET_ADDRESS
{
    USHORT AddressFamily;
    USHORT NumBits;
    UCHAR  AddrBits[RTM_MAX_ADDRESS_SIZE];
} RTM_NET_ADDRESS, *PRTM_NET_ADDRESS;
#define RTM_IPV4_MAKE_NET_ADDRESS(NetAddress, Addr, Len)	RTM_IPV4_SET_ADDR_AND_LEN(NetAddress, Addr, Len)
#define RTM_CHECK_NTH_BIT(Value, N, Len)					if ((Value) & (1 << (N)))                                  \
													        {                                                          \
													            (Len) += (N); (Value) <<= (N);                         \
													        }
#define RTM_IPV4_LEN_FROM_MASK(Len, Mask)					{                                                          \
													            ULONG _Temp_ = ntohl(Mask);                            \
													                                                                   \
													            (Len) = 0;                                             \
													                                                                   \
													            RTM_CHECK_NTH_BIT(_Temp_, 16, (Len));                  \
													            RTM_CHECK_NTH_BIT(_Temp_,  8, (Len));                  \
													            RTM_CHECK_NTH_BIT(_Temp_,  4, (Len));                  \
													                                                                   \
													            while (_Temp_)                                         \
													            {                                                      \
													                (Len) +=  1; _Temp_ <<=  1;                        \
													            }                                                      \
													        }
#define RTM_IPV4_MASK_FROM_LEN(Len)							((Len) ? htonl(~0 << (32 - (Len))): 0);
#define RTM_IPV4_SET_ADDR_AND_LEN(NetAddress, Addr, Len)	(NetAddress)->AddressFamily = AF_INET;                     \
													        (NetAddress)->NumBits  = (USHORT) (Len);                   \
													        (* (ULONG *) ((NetAddress)->AddrBits)) = (Addr);
#define RTM_IPV4_GET_ADDR_AND_LEN(Addr, Len, NetAddress)	(Len) = (NetAddress)->NumBits;                             \
													        (Addr) = (* (ULONG *) ((NetAddress)->AddrBits));
#define RTM_IPV4_SET_ADDR_AND_MASK(NetAddress, Addr, Mask)	(NetAddress)->AddressFamily = AF_INET;                     \
													        (* (ULONG *) ((NetAddress)->AddrBits)) = (Addr);           \
													        RTM_IPV4_LEN_FROM_MASK((NetAddress)->NumBits, Mask)
#define RTM_IPV4_GET_ADDR_AND_MASK(Addr, Mask, NetAddress)	(Addr) = (* (ULONG *) ((NetAddress)->AddrBits));           \
													        (Mask) = RTM_IPV4_MASK_FROM_LEN((NetAddress)->NumBits);
DWORD RtmConvertNetAddressToIpv6AddressAndLength(PRTM_NET_ADDRESS pNetAddress, PIN6_ADDR pAddress, PDWORD pLength, DWORD dwAddressSize);
DWORD RtmConvertIpv6AddressAndLengthToNetAddress(PRTM_NET_ADDRESS pNetAddress, IN6_ADDR Address, DWORD dwLength, DWORD dwAddressSize);
#define IPV6_ADDRESS_LEN_IN_BYTES     16
#define RTM_IPV6_MAKE_NET_ADDRESS(NetAddress, Addr, Len)	RTM_IPV6_SET_ADDR_AND_LEN(NetAddress, Addr, Len)
#define RTM_IPV6_SET_ADDR_AND_LEN(NetAddress, Addr, Len)	(NetAddress)->AddressFamily = AF_INET6;                    \
        													(RtmConvertIpv6AddressAndLengthToNetAddress(NetAddress, Addr, Len, IPV6_ADDRESS_LEN_IN_BYTES))
#define RTM_IPV6_GET_ADDR_AND_LEN(Addr, Len, NetAddress)	(RtmConvertNetAddressToIpv6AddressAndLength(NetAddress, Addr, Len, IPV6_ADDRESS_LEN_IN_BYTES))
typedef struct _RTM_PREF_INFO
{
    ULONG               Metric;
    ULONG               Preference;
}
RTM_PREF_INFO, *PRTM_PREF_INFO;
typedef struct _RTM_NEXTHOP_LIST
{
    USHORT              NumNextHops;
    RTM_NEXTHOP_HANDLE  NextHops[1];
}
RTM_NEXTHOP_LIST, *PRTM_NEXTHOP_LIST;
typedef struct _RTM_DEST_INFO
{
    RTM_DEST_HANDLE     DestHandle;
    RTM_NET_ADDRESS     DestAddress;
    FILETIME            LastChanged;
    RTM_VIEW_SET        BelongsToViews;
    UINT                NumberOfViews;
    struct
    {
        RTM_VIEW_ID         ViewId;
        UINT                NumRoutes;
        RTM_ROUTE_HANDLE    Route;
        RTM_ENTITY_HANDLE   Owner;
        DWORD               DestFlags;
        RTM_ROUTE_HANDLE    HoldRoute;
    }                   ViewInfo[1];
}
RTM_DEST_INFO, *PRTM_DEST_INFO;
#define RTM_BASIC_DEST_INFO_SIZE		FIELD_OFFSET(RTM_DEST_INFO, ViewInfo)
#define RTM_DEST_VIEW_INFO_SIZE			(sizeof(RTM_DEST_INFO) - RTM_BASIC_DEST_INFO_SIZE)
#define RTM_SIZE_OF_DEST_INFO(NumViews)	(RTM_BASIC_DEST_INFO_SIZE + (NumViews) * RTM_DEST_VIEW_INFO_SIZE)
#define RTM_DEST_FLAG_NATURAL_NET   0x01
#define RTM_DEST_FLAG_FWD_ENGIN_ADD 0x02
#define RTM_DEST_FLAG_DONT_FORWARD  0x04
typedef struct _RTM_ROUTE_INFO
{
    RTM_DEST_HANDLE     DestHandle;
    RTM_ENTITY_HANDLE   RouteOwner;
    RTM_NEXTHOP_HANDLE  Neighbour;
    UCHAR               State;
    UCHAR               Flags1;
    USHORT              Flags;
    RTM_PREF_INFO       PrefInfo;
    RTM_VIEW_SET        BelongsToViews;
    PVOID               EntitySpecificInfo;
    RTM_NEXTHOP_LIST    NextHopsList;
} RTM_ROUTE_INFO, *PRTM_ROUTE_INFO;
#define RTM_BASIC_ROUTE_INFO_SIZE			FIELD_OFFSET(RTM_ROUTE_INFO, NextHopsList.NumNextHops)
#define RTM_SIZE_OF_ROUTE_INFO(NumHops)		(RTM_BASIC_ROUTE_INFO_SIZE + (NumHops) * sizeof(RTM_NEXTHOP_HANDLE))
#define RTM_ROUTE_STATE_CREATED        0
#define RTM_ROUTE_STATE_DELETING       1
#define RTM_ROUTE_STATE_DELETED        2
#define RTM_ROUTE_FLAGS_MARTIAN        0x0001
#define RTM_ROUTE_FLAGS_BLACKHOLE      0x0002
#define RTM_ROUTE_FLAGS_DISCARD        0x0004
#define RTM_ROUTE_FLAGS_INACTIVE       0x0008
#define RTM_ROUTE_FLAGS_LOCAL          0x0010
#define RTM_ROUTE_FLAGS_REMOTE         0x0020
#define RTM_ROUTE_FLAGS_MYSELF         0x0040
#define RTM_ROUTE_FLAGS_LOOPBACK       0x0080
#define RTM_ROUTE_FLAGS_MCAST          0x0100
#define RTM_ROUTE_FLAGS_LOCAL_MCAST    0x0200
#define RTM_ROUTE_FLAGS_LIMITED_BC     0x0400
#define RTM_ROUTE_FLAGS_ZEROS_NETBC    0x1000
#define RTM_ROUTE_FLAGS_ZEROS_SUBNETBC 0x2000
#define RTM_ROUTE_FLAGS_ONES_NETBC     0x4000
#define RTM_ROUTE_FLAGS_ONES_SUBNETBC  0x8000
#define RTM_ROUTE_FLAGS_FORWARDING		(RTM_ROUTE_FLAGS_MARTIAN        | \
								         RTM_ROUTE_FLAGS_BLACKHOLE      | \
								         RTM_ROUTE_FLAGS_DISCARD        | \
								         RTM_ROUTE_FLAGS_INACTIVE)
#define RTM_ROUTE_FLAGS_ANY_UNICAST		(RTM_ROUTE_FLAGS_LOCAL          | \
								         RTM_ROUTE_FLAGS_REMOTE         | \
								         RTM_ROUTE_FLAGS_MYSELF)
#define RTM_ROUTE_FLAGS_ANY_MCAST		(RTM_ROUTE_FLAGS_MCAST          | \
								         RTM_ROUTE_FLAGS_LOCAL_MCAST)
#define RTM_ROUTE_FLAGS_SUBNET_BCAST	(RTM_ROUTE_FLAGS_ONES_SUBNET_BC | \
								         RTM_ROUTE_FLAGS_ZEROS_SUBNETBC)
#define RTM_ROUTE_FLAGS_NET_BCAST		(RTM_ROUTE_FLAGS_ONES_NETBC     | \
								         RTM_ROUTE_FLAGS_ZEROS_NETBC)
#define RTM_ROUTE_FLAGS_ANY_BCAST		(RTM_ROUTE_FLAGS_LIMITED_BC     | \
								         RTM_ROUTE_FLAGS_ONES_NETBC     | \
								         RTM_ROUTE_FLAGS_ONES_SUBNET_BC | \
								         RTM_ROUTE_FLAGS_ZEROS_NETBC    | \
								         RTM_ROUTE_FLAGS_ZEROS_SUBNETBC)
typedef struct _RTM_NEXTHOP_INFO
{
    RTM_NET_ADDRESS     NextHopAddress;
    RTM_ENTITY_HANDLE   NextHopOwner;
    ULONG               InterfaceIndex;
    USHORT              State;
    USHORT              Flags;
    PVOID               EntitySpecificInfo;
    RTM_DEST_HANDLE     RemoteNextHop;
}
RTM_NEXTHOP_INFO, *PRTM_NEXTHOP_INFO;
#define RTM_NEXTHOP_STATE_CREATED      0
#define RTM_NEXTHOP_STATE_DELETED      1
#define RTM_NEXTHOP_FLAGS_REMOTE  0x0001
#define RTM_NEXTHOP_FLAGS_DOWN    0x0002
typedef struct _RTM_ENTITY_ID
{
    union
    {
        struct
        {
            ULONG    EntityProtocolId;
            ULONG    EntityInstanceId;
        };
        ULONGLONG    EntityId;
    };
}
RTM_ENTITY_ID, *PRTM_ENTITY_ID;
typedef struct _RTM_ENTITY_INFO
{
    USHORT         RtmInstanceId;
    USHORT         AddressFamily;
    RTM_ENTITY_ID  EntityId;
}
RTM_ENTITY_INFO, *PRTM_ENTITY_INFO;
typedef enum _RTM_EVENT_TYPE
{
    RTM_ENTITY_REGISTERED,
    RTM_ENTITY_DEREGISTERED,
    RTM_ROUTE_EXPIRED,
    RTM_CHANGE_NOTIFICATION
}
RTM_EVENT_TYPE, *PRTM_EVENT_TYPE;
typedef DWORD(WINAPI *_EVENT_CALLBACK) (RTM_ENTITY_HANDLE RtmRegHandle, RTM_EVENT_TYPE EventType, PVOID Context1, PVOID Context2);
typedef _EVENT_CALLBACK RTM_EVENT_CALLBACK, *PRTM_EVENT_CALLBACK;
#define METHOD_TYPE_ALL_METHODS      0xFFFFFFFF
#define METHOD_RIP2_NEIGHBOUR_ADDR   0x00000001
#define METHOD_RIP2_OUTBOUND_INTF    0x00000002
#define METHOD_RIP2_ROUTE_TAG        0x00000004
#define METHOD_RIP2_ROUTE_TIMESTAMP  0x00000008
#define METHOD_BGP4_AS_PATH          0x00000001
#define METHOD_BGP4_PEER_ID          0x00000002
#define METHOD_BGP4_PA_ORIG      	 0x00000004
#define METHOD_BGP4_NEXTHOP_ATTR     0x00000008
typedef DWORD RTM_ENTITY_METHOD_TYPE, *PRTM_ENTITY_METHOD_TYPE;
typedef struct _RTM_ENTITY_METHOD_INPUT
{
	RTM_ENTITY_METHOD_TYPE MethodType;
	UINT InputSize;
	UCHAR InputData[1];
}
RTM_ENTITY_METHOD_INPUT, *PRTM_ENTITY_METHOD_INPUT;
typedef struct _RTM_ENTITY_METHOD_OUTPUT
{
	RTM_ENTITY_METHOD_TYPE MethodType;
	DWORD MethodStatus;
	UINT OutputSize;
	UCHAR OutputData[1];
}
RTM_ENTITY_METHOD_OUTPUT, *PRTM_ENTITY_METHOD_OUTPUT;
typedef VOID(WINAPI *_ENTITY_METHOD) (RTM_ENTITY_HANDLE CallerHandle, RTM_ENTITY_HANDLE CalleeHandle, RTM_ENTITY_METHOD_INPUT *Input, RTM_ENTITY_METHOD_OUTPUT *Output);
typedef _ENTITY_METHOD RTM_ENTITY_EXPORT_METHOD, *PRTM_ENTITY_EXPORT_METHOD;
typedef struct _RTM_ENTITY_EXPORT_METHODS
{
	UINT NumMethods;
	RTM_ENTITY_EXPORT_METHOD Methods[1];
}
RTM_ENTITY_EXPORT_METHODS, *PRTM_ENTITY_EXPORT_METHODS;
#define RTM_RESUME_METHODS             0
#define RTM_BLOCK_METHODS              1
typedef DWORD RTM_ROUTE_CHANGE_FLAGS, *PRTM_ROUTE_CHANGE_FLAGS;
#define RTM_ROUTE_CHANGE_FIRST      0x01
#define RTM_ROUTE_CHANGE_NEW        0x02
#define RTM_ROUTE_CHANGE_BEST 0x00010000
typedef DWORD RTM_NEXTHOP_CHANGE_FLAGS, *PRTM_NEXTHOP_CHANGE_FLAGS;
#define RTM_NEXTHOP_CHANGE_NEW      0x01
typedef DWORD RTM_MATCH_FLAGS, *PRTM_MATCH_FLAGS;
#define RTM_MATCH_NONE        0x00000000
#define RTM_MATCH_OWNER       0x00000001
#define RTM_MATCH_NEIGHBOUR   0x00000002
#define RTM_MATCH_PREF        0x00000004
#define RTM_MATCH_NEXTHOP     0x00000008
#define RTM_MATCH_INTERFACE   0x00000010
#define RTM_MATCH_FULL        0x0000FFFF
#define RTM_BEST_PROTOCOL    (ULONG)   0
#define RTM_THIS_PROTOCOL    (ULONG)  ~0
typedef DWORD RTM_ENUM_FLAGS, *PRTM_ENUM_FLAGS;
#define RTM_ENUM_START        0x00000000
#define RTM_ENUM_NEXT         0x00000001
#define RTM_ENUM_RANGE        0x00000002
#define RTM_ENUM_ALL_DESTS    0x00000000
#define RTM_ENUM_OWN_DESTS    0x01000000
#define RTM_ENUM_ALL_ROUTES   0x00000000
#define RTM_ENUM_OWN_ROUTES   0x00010000
typedef DWORD RTM_NOTIFY_FLAGS, *PRTM_NOTIFY_FLAGS;
#define RTM_NUM_CHANGE_TYPES            3
#define RTM_CHANGE_TYPE_ALL        0x0001
#define RTM_CHANGE_TYPE_BEST       0x0002
#define RTM_CHANGE_TYPE_FORWARDING 0x0004
#define RTM_NOTIFY_ONLY_MARKED_DESTS 0x00010000
DWORD WINAPI RtmRegisterEntity(PRTM_ENTITY_INFO RtmEntityInfo, PRTM_ENTITY_EXPORT_METHODS ExportMethods, RTM_EVENT_CALLBACK EventCallback, BOOL ReserveOpaquePointer, PRTM_REGN_PROFILE RtmRegProfile, PRTM_ENTITY_HANDLE RtmRegHandle);
DWORD WINAPI RtmDeregisterEntity(RTM_ENTITY_HANDLE RtmRegHandle);
DWORD WINAPI RtmGetRegisteredEntities(RTM_ENTITY_HANDLE RtmRegHandle, PUINT NumEntities, PRTM_ENTITY_HANDLE EntityHandles, PRTM_ENTITY_INFO EntityInfos);
DWORD WINAPI RtmReleaseEntities(RTM_ENTITY_HANDLE RtmRegHandle, UINT NumEntities, PRTM_ENTITY_HANDLE EntityHandles);
DWORD WINAPI RtmLockDestination(RTM_ENTITY_HANDLE RtmRegHandle, RTM_DEST_HANDLE DestHandle, BOOL Exclusive, BOOL LockDest);
DWORD WINAPI RtmGetOpaqueInformationPointer(RTM_ENTITY_HANDLE RtmRegHandle, RTM_DEST_HANDLE DestHandle, PVOID *OpaqueInfoPointer);
DWORD WINAPI RtmGetEntityMethods(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ENTITY_HANDLE EntityHandle, PUINT NumMethods, PRTM_ENTITY_EXPORT_METHOD ExptMethods);
DWORD WINAPI RtmInvokeMethod(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ENTITY_HANDLE EntityHandle, PRTM_ENTITY_METHOD_INPUT Input, PUINT OutputSize, PRTM_ENTITY_METHOD_OUTPUT Output);
DWORD WINAPI RtmBlockMethods(RTM_ENTITY_HANDLE RtmRegHandle, HANDLE TargetHandle, UCHAR TargetType, DWORD BlockingFlag);
DWORD WINAPI RtmGetEntityInfo(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ENTITY_HANDLE EntityHandle, PRTM_ENTITY_INFO EntityInfo);
DWORD WINAPI RtmGetDestInfo(RTM_ENTITY_HANDLE RtmRegHandle, RTM_DEST_HANDLE DestHandle, ULONG ProtocolId, RTM_VIEW_SET TargetViews, PRTM_DEST_INFO DestInfo);
DWORD WINAPI RtmGetRouteInfo(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ROUTE_HANDLE RouteHandle, PRTM_ROUTE_INFO RouteInfo, PRTM_NET_ADDRESS DestAddress);
DWORD WINAPI RtmGetNextHopInfo(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NEXTHOP_HANDLE NextHopHandle, PRTM_NEXTHOP_INFO NextHopInfo);
DWORD WINAPI RtmReleaseEntityInfo(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_ENTITY_INFO EntityInfo);
DWORD WINAPI RtmReleaseDestInfo(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_DEST_INFO DestInfo);
DWORD WINAPI RtmReleaseRouteInfo(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_ROUTE_INFO RouteInfo);
DWORD WINAPI RtmReleaseNextHopInfo(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_NEXTHOP_INFO NextHopInfo);
DWORD WINAPI RtmAddRouteToDest(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_ROUTE_HANDLE RouteHandle, PRTM_NET_ADDRESS DestAddress, PRTM_ROUTE_INFO RouteInfo, ULONG TimeToLive, RTM_ROUTE_LIST_HANDLE RouteListHandle, RTM_NOTIFY_FLAGS NotifyType, RTM_NOTIFY_HANDLE NotifyHandle, PRTM_ROUTE_CHANGE_FLAGS ChangeFlags);
DWORD WINAPI RtmDeleteRouteToDest(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ROUTE_HANDLE RouteHandle, PRTM_ROUTE_CHANGE_FLAGS ChangeFlags);
DWORD WINAPI RtmHoldDestination(RTM_ENTITY_HANDLE RtmRegHandle, RTM_DEST_HANDLE DestHandle, RTM_VIEW_SET TargetViews, ULONG HoldTime);
DWORD WINAPI RtmGetRoutePointer(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ROUTE_HANDLE RouteHandle, PRTM_ROUTE_INFO *RoutePointer);
DWORD WINAPI RtmLockRoute(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ROUTE_HANDLE RouteHandle, BOOL Exclusive, BOOL LockRoute, PRTM_ROUTE_INFO *RoutePointer);
DWORD WINAPI RtmUpdateAndUnlockRoute(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ROUTE_HANDLE RouteHandle, ULONG TimeToLive, RTM_ROUTE_LIST_HANDLE RouteListHandle, RTM_NOTIFY_FLAGS NotifyType, RTM_NOTIFY_HANDLE NotifyHandle, PRTM_ROUTE_CHANGE_FLAGS ChangeFlags);
DWORD WINAPI RtmGetExactMatchDestination(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_NET_ADDRESS DestAddress, ULONG ProtocolId, RTM_VIEW_SET TargetViews, PRTM_DEST_INFO DestInfo);
DWORD WINAPI RtmGetMostSpecificDestination(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_NET_ADDRESS DestAddress, ULONG ProtocolId, RTM_VIEW_SET TargetViews, PRTM_DEST_INFO DestInfo);
DWORD WINAPI RtmGetLessSpecificDestination(RTM_ENTITY_HANDLE RtmRegHandle, RTM_DEST_HANDLE DestHandle, ULONG ProtocolId, RTM_VIEW_SET TargetViews, PRTM_DEST_INFO DestInfo);
DWORD WINAPI RtmGetExactMatchRoute(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_NET_ADDRESS DestAddress, RTM_MATCH_FLAGS MatchingFlags, PRTM_ROUTE_INFO RouteInfo, ULONG InterfaceIndex, RTM_VIEW_SET TargetViews, PRTM_ROUTE_HANDLE RouteHandle);
DWORD WINAPI RtmIsBestRoute(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ROUTE_HANDLE RouteHandle, PRTM_VIEW_SET BestInViews);
DWORD WINAPI RtmAddNextHop(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_NEXTHOP_INFO NextHopInfo, PRTM_NEXTHOP_HANDLE NextHopHandle, PRTM_NEXTHOP_CHANGE_FLAGS ChangeFlags);
DWORD WINAPI RtmFindNextHop(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_NEXTHOP_INFO NextHopInfo, PRTM_NEXTHOP_HANDLE NextHopHandle, PRTM_NEXTHOP_INFO *NextHopPointer);
DWORD WINAPI RtmDeleteNextHop(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NEXTHOP_HANDLE NextHopHandle, PRTM_NEXTHOP_INFO NextHopInfo);
DWORD WINAPI RtmGetNextHopPointer(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NEXTHOP_HANDLE NextHopHandle, PRTM_NEXTHOP_INFO *NextHopPointer);
DWORD WINAPI RtmLockNextHop(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NEXTHOP_HANDLE NextHopHandle, BOOL Exclusive, BOOL LockNextHop, PRTM_NEXTHOP_INFO *NextHopPointer);
DWORD WINAPI RtmCreateDestEnum(RTM_ENTITY_HANDLE RtmRegHandle, RTM_VIEW_SET TargetViews, RTM_ENUM_FLAGS EnumFlags, PRTM_NET_ADDRESS NetAddress, ULONG ProtocolId, PRTM_ENUM_HANDLE RtmEnumHandle);
DWORD WINAPI RtmGetEnumDests(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ENUM_HANDLE EnumHandle, PUINT NumDests, PRTM_DEST_INFO DestInfos);
DWORD WINAPI RtmReleaseDests(RTM_ENTITY_HANDLE RtmRegHandle, UINT NumDests, PRTM_DEST_INFO DestInfos);
DWORD WINAPI RtmCreateRouteEnum(RTM_ENTITY_HANDLE RtmRegHandle, RTM_DEST_HANDLE DestHandle, RTM_VIEW_SET TargetViews, RTM_ENUM_FLAGS EnumFlags, PRTM_NET_ADDRESS StartDest, RTM_MATCH_FLAGS MatchingFlags, PRTM_ROUTE_INFO CriteriaRoute, ULONG CriteriaInterface, PRTM_ENUM_HANDLE RtmEnumHandle);
DWORD WINAPI RtmGetEnumRoutes(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ENUM_HANDLE EnumHandle, PUINT NumRoutes, PRTM_ROUTE_HANDLE RouteHandles);
DWORD WINAPI RtmReleaseRoutes(RTM_ENTITY_HANDLE RtmRegHandle, UINT NumRoutes, PRTM_ROUTE_HANDLE RouteHandles);
DWORD WINAPI RtmCreateNextHopEnum(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ENUM_FLAGS EnumFlags, PRTM_NET_ADDRESS NetAddress, PRTM_ENUM_HANDLE RtmEnumHandle);
DWORD WINAPI RtmGetEnumNextHops(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ENUM_HANDLE EnumHandle, PUINT NumNextHops, PRTM_NEXTHOP_HANDLE NextHopHandles);
DWORD WINAPI RtmReleaseNextHops(RTM_ENTITY_HANDLE RtmRegHandle, UINT NumNextHops, PRTM_NEXTHOP_HANDLE NextHopHandles);
DWORD WINAPI RtmDeleteEnumHandle(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ENUM_HANDLE EnumHandle);
DWORD WINAPI RtmRegisterForChangeNotification(RTM_ENTITY_HANDLE RtmRegHandle, RTM_VIEW_SET TargetViews, RTM_NOTIFY_FLAGS NotifyFlags, PVOID NotifyContext, PRTM_NOTIFY_HANDLE NotifyHandle);
DWORD WINAPI RtmGetChangedDests(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NOTIFY_HANDLE NotifyHandle, PUINT NumDests, PRTM_DEST_INFO ChangedDests);
DWORD WINAPI RtmReleaseChangedDests(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NOTIFY_HANDLE NotifyHandle, UINT NumDests, PRTM_DEST_INFO ChangedDests);
DWORD WINAPI RtmIgnoreChangedDests(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NOTIFY_HANDLE NotifyHandle, UINT NumDests, PRTM_DEST_HANDLE ChangedDests);
DWORD WINAPI RtmGetChangeStatus(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NOTIFY_HANDLE NotifyHandle, RTM_DEST_HANDLE DestHandle, PBOOL ChangeStatus);
DWORD WINAPI RtmMarkDestForChangeNotification(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NOTIFY_HANDLE NotifyHandle, RTM_DEST_HANDLE DestHandle, BOOL MarkDest);
DWORD WINAPI RtmIsMarkedForChangeNotification(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NOTIFY_HANDLE NotifyHandle, RTM_DEST_HANDLE DestHandle, PBOOL DestMarked);
DWORD WINAPI RtmDeregisterFromChangeNotification(RTM_ENTITY_HANDLE RtmRegHandle, RTM_NOTIFY_HANDLE NotifyHandle);
DWORD WINAPI RtmCreateRouteList(RTM_ENTITY_HANDLE RtmRegHandle, PRTM_ROUTE_LIST_HANDLE RouteListHandle);
DWORD WINAPI RtmInsertInRouteList(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ROUTE_LIST_HANDLE RouteListHandle, UINT NumRoutes, PRTM_ROUTE_HANDLE RouteHandles);
DWORD WINAPI RtmCreateRouteListEnum(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ROUTE_LIST_HANDLE RouteListHandle, PRTM_ENUM_HANDLE RtmEnumHandle);
DWORD WINAPI RtmGetListEnumRoutes(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ENUM_HANDLE EnumHandle, PUINT NumRoutes, PRTM_ROUTE_HANDLE RouteHandles);
DWORD WINAPI RtmDeleteRouteList(RTM_ENTITY_HANDLE RtmRegHandle, RTM_ROUTE_LIST_HANDLE RouteListHandle);
DWORD WINAPI RtmReferenceHandles(RTM_ENTITY_HANDLE RtmRegHandle, UINT NumHandles, HANDLE *RtmHandles);
#endif
