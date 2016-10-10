/*+@@file@@----------------------------------------------------------------*//*!
 \file		LMDFS.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 23:39:45 2016
 \date		Modified on Sun Jul 17 23:39:45 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LMDFS_
#define _LMDFS_
#if __POCC__ >= 500
#pragma once
#endif
#define DFS_VOLUME_STATES              0xF
#define DFS_VOLUME_STATE_OK            1
#define DFS_VOLUME_STATE_INCONSISTENT  2
#define DFS_VOLUME_STATE_OFFLINE       3
#define DFS_VOLUME_STATE_ONLINE        4
#define DFS_VOLUME_STATE_RESYNCHRONIZE 0x10
#define DFS_VOLUME_STATE_STANDBY       0x20
#define DFS_VOLUME_STATE_FORCE_SYNC  0x40
#define DFS_VOLUME_FLAVORS           0x0300
#define DFS_VOLUME_FLAVOR_UNUSED1    0x0000
#define DFS_VOLUME_FLAVOR_STANDALONE 0x0100
#define DFS_VOLUME_FLAVOR_AD_BLOB    0x0200
#define DFS_STORAGE_FLAVOR_UNUSED2   0x0300
#define DFS_STORAGE_STATES            0xF
#define DFS_STORAGE_STATE_OFFLINE      1
#define DFS_STORAGE_STATE_ONLINE       2
#define DFS_STORAGE_STATE_ACTIVE       4
typedef enum _DFS_TARGET_PRIORITY_CLASS
{
    DfsInvalidPriorityClass = -1,
    DfsSiteCostNormalPriorityClass = 0,
    DfsGlobalHighPriorityClass,
    DfsSiteCostHighPriorityClass,
    DfsSiteCostLowPriorityClass,
    DfsGlobalLowPriorityClass
} DFS_TARGET_PRIORITY_CLASS;
typedef struct _DFS_TARGET_PRIORITY
{
    DFS_TARGET_PRIORITY_CLASS   TargetPriorityClass;
    USHORT                      TargetPriorityRank;
    USHORT                      Reserved;
} DFS_TARGET_PRIORITY, *PDFS_TARGET_PRIORITY;
typedef struct _DFS_INFO_1
{
    LPWSTR  EntryPath;
} DFS_INFO_1, *PDFS_INFO_1, *LPDFS_INFO_1;
#if defined(_WIN64)
typedef struct _DFS_INFO_1_32
{
    ULONG   EntryPath;
} DFS_INFO_1_32, *PDFS_INFO_1_32, *LPDFS_INFO_1_32;
#endif
typedef struct _DFS_INFO_2
{
    LPWSTR  EntryPath;
    LPWSTR  Comment;
    DWORD   State;
    DWORD   NumberOfStorages;
} DFS_INFO_2, *PDFS_INFO_2, *LPDFS_INFO_2;
#if defined(_WIN64)
typedef struct _DFS_INFO_2_32
{
    ULONG   EntryPath;
    ULONG   Comment;
    DWORD   State;
    DWORD   NumberOfStorages;
} DFS_INFO_2_32, *PDFS_INFO_2_32, *LPDFS_INFO_2_32;
#endif
typedef struct _DFS_STORAGE_INFO
{
    ULONG   State;
    LPWSTR  ServerName;
    LPWSTR  ShareName;
} DFS_STORAGE_INFO, *PDFS_STORAGE_INFO, *LPDFS_STORAGE_INFO;
#if defined(_WIN64)
typedef struct _DFS_STORAGE_INFO_0_32
{
    ULONG   State;
    ULONG   ServerName;
    ULONG   ShareName;
} DFS_STORAGE_INFO_0_32, *PDFS_STORAGE_INFO_0_32, *LPDFS_STORAGE_INFO_0_32;
#endif
typedef struct _DFS_STORAGE_INFO_1
{
    ULONG                   State;
    LPWSTR                  ServerName;
    LPWSTR                  ShareName;
    DFS_TARGET_PRIORITY     TargetPriority;
} DFS_STORAGE_INFO_1, *PDFS_STORAGE_INFO_1, *LPDFS_STORAGE_INFO_1;
typedef struct _DFS_INFO_3
{
    LPWSTR  EntryPath;
    LPWSTR  Comment;
    DWORD   State;
    DWORD   NumberOfStorages;
    LPDFS_STORAGE_INFO   Storage;
} DFS_INFO_3, *PDFS_INFO_3, *LPDFS_INFO_3;
#if defined(_WIN64)
typedef struct _DFS_INFO_3_32
{
    ULONG   EntryPath;
    ULONG   Comment;
    DWORD   State;
    DWORD   NumberOfStorages;
    ULONG   Storage;
} DFS_INFO_3_32, *PDFS_INFO_3_32, *LPDFS_INFO_3_32;
#endif
typedef struct _DFS_INFO_4
{
    LPWSTR  EntryPath;
    LPWSTR  Comment;
    DWORD   State;
    ULONG   Timeout;
    GUID    Guid;
    DWORD   NumberOfStorages;
    LPDFS_STORAGE_INFO   Storage;
} DFS_INFO_4, *PDFS_INFO_4, *LPDFS_INFO_4;
#if defined(_WIN64)
typedef struct _DFS_INFO_4_32
{
    ULONG   EntryPath;
    ULONG   Comment;
    DWORD   State;
    ULONG   Timeout;
    GUID    Guid;
    DWORD   NumberOfStorages;
    ULONG   Storage;
} DFS_INFO_4_32, *PDFS_INFO_4_32, *LPDFS_INFO_4_32;
#endif
typedef struct _DFS_INFO_5
{
    LPWSTR  EntryPath;
    LPWSTR  Comment;
    DWORD   State;
    ULONG   Timeout;
    GUID    Guid;
    ULONG   PropertyFlags;
    ULONG   MetadataSize;
    DWORD   NumberOfStorages;
} DFS_INFO_5, *PDFS_INFO_5, *LPDFS_INFO_5;
typedef struct _DFS_INFO_6
{
    LPWSTR  EntryPath;
    LPWSTR  Comment;
    DWORD   State;
    ULONG   Timeout;
    GUID    Guid;
    ULONG   PropertyFlags;
    ULONG   MetadataSize;
    DWORD   NumberOfStorages;
    LPDFS_STORAGE_INFO_1    Storage;
} DFS_INFO_6, *PDFS_INFO_6, *LPDFS_INFO_6;
typedef struct _DFS_INFO_7
{
    GUID        GenerationGuid;
} DFS_INFO_7, *PDFS_INFO_7, *LPDFS_INFO_7;
typedef struct _DFS_INFO_8
{
    LPWSTR  EntryPath;
    LPWSTR  Comment;
    DWORD   State;
    ULONG   Timeout;
    GUID    Guid;
    ULONG   PropertyFlags;
    ULONG   MetadataSize;
    ULONG   SdLengthReserved;
    PSECURITY_DESCRIPTOR    pSecurityDescriptor;
    DWORD   NumberOfStorages;
} DFS_INFO_8, *PDFS_INFO_8, *LPDFS_INFO_8;
typedef struct _DFS_INFO_9
{
    LPWSTR  EntryPath;
    LPWSTR  Comment;
    DWORD   State;
    ULONG   Timeout;
    GUID    Guid;
    ULONG   PropertyFlags;
    ULONG   MetadataSize;
    ULONG   SdLengthReserved;
    PSECURITY_DESCRIPTOR    pSecurityDescriptor;
    DWORD   NumberOfStorages;
    LPDFS_STORAGE_INFO_1    Storage;
} DFS_INFO_9, *PDFS_INFO_9, *LPDFS_INFO_9;
#define  DFS_VALID_PROPERTY_FLAGS    (DFS_PROPERTY_FLAG_INSITE_REFERRALS | \
                                        DFS_PROPERTY_FLAG_ROOT_SCALABILITY | \
                                        DFS_PROPERTY_FLAG_SITE_COSTING | \
                                        DFS_PROPERTY_FLAG_TARGET_FAILBACK | \
                                        DFS_PROPERTY_FLAG_CLUSTER_ENABLED | \
                                        DFS_PROPERTY_FLAG_ABDE)
#define DFS_PROPERTY_FLAG_INSITE_REFERRALS  0x00000001
#define DFS_PROPERTY_FLAG_ROOT_SCALABILITY  0x00000002
#define DFS_PROPERTY_FLAG_SITE_COSTING      0x00000004
#define DFS_PROPERTY_FLAG_TARGET_FAILBACK   0x00000008
#define DFS_PROPERTY_FLAG_CLUSTER_ENABLED   0x00000010
#define DFS_PROPERTY_FLAG_ABDE  0x00000020
typedef struct _DFS_INFO_50
{
    ULONG       NamespaceMajorVersion;
    ULONG       NamespaceMinorVersion;
    ULONGLONG   NamespaceCapabilities;
} DFS_INFO_50, *PDFS_INFO_50, *LPDFS_INFO_50;
typedef struct _DFS_INFO_100
{
    LPWSTR  Comment;
} DFS_INFO_100, *PDFS_INFO_100, *LPDFS_INFO_100;
typedef struct _DFS_INFO_101
{
    DWORD   State;
} DFS_INFO_101, *PDFS_INFO_101, *LPDFS_INFO_101;
typedef struct _DFS_INFO_102
{
    ULONG   Timeout;
} DFS_INFO_102, *PDFS_INFO_102, *LPDFS_INFO_102;
typedef struct _DFS_INFO_103
{
    ULONG       PropertyFlagMask;
    ULONG       PropertyFlags;
} DFS_INFO_103, *PDFS_INFO_103, *LPDFS_INFO_103;
typedef struct _DFS_INFO_104
{
    DFS_TARGET_PRIORITY     TargetPriority;
} DFS_INFO_104, *PDFS_INFO_104, *LPDFS_INFO_104;
typedef struct _DFS_INFO_105
{
    LPWSTR      Comment;
    DWORD       State;
    ULONG       Timeout;
    ULONG       PropertyFlagMask;
    ULONG       PropertyFlags;
} DFS_INFO_105, *PDFS_INFO_105, *LPDFS_INFO_105;
typedef struct _DFS_INFO_106
{
    DWORD               State;
    DFS_TARGET_PRIORITY TargetPriority;
} DFS_INFO_106, *PDFS_INFO_106, *LPDFS_INFO_106;
typedef struct _DFS_INFO_107
{
    LPWSTR      Comment;
    DWORD       State;
    ULONG       Timeout;
    ULONG       PropertyFlagMask;
    ULONG       PropertyFlags;
    ULONG   SdLengthReserved;
    PSECURITY_DESCRIPTOR    pSecurityDescriptor;
} DFS_INFO_107, *PDFS_INFO_107, *LPDFS_INFO_107;
typedef struct _DFS_INFO_150
{
    ULONG   SdLengthReserved;
    PSECURITY_DESCRIPTOR    pSecurityDescriptor;
} DFS_INFO_150, *PDFS_INFO_150, *LPDFS_INFO_150;
typedef struct _DFS_INFO_200
{
    LPWSTR  FtDfsName;
} DFS_INFO_200, *PDFS_INFO_200, *LPDFS_INFO_200;
typedef struct _DFS_INFO_300
{
    DWORD   Flags;
    LPWSTR  DfsName;
} DFS_INFO_300, *PDFS_INFO_300, *LPDFS_INFO_300;
NET_API_STATUS NET_API_FUNCTION NetDfsAdd(LPWSTR DfsEntryPath, LPWSTR ServerName, LPWSTR ShareName, LPWSTR Comment, DWORD Flags);
#define DFS_ADD_VOLUME          1
#define DFS_RESTORE_VOLUME      2
NET_API_STATUS NET_API_FUNCTION NetDfsAddStdRoot(LPWSTR ServerName, LPWSTR RootShare, LPWSTR Comment, DWORD Flags);
NET_API_STATUS NET_API_FUNCTION NetDfsRemoveStdRoot(LPWSTR ServerName, LPWSTR RootShare, DWORD Flags);
NET_API_STATUS NET_API_FUNCTION NetDfsAddFtRoot(LPWSTR ServerName, LPWSTR RootShare, LPWSTR FtDfsName, LPWSTR Comment, DWORD Flags);
NET_API_STATUS NET_API_FUNCTION NetDfsRemoveFtRoot(LPWSTR ServerName, LPWSTR RootShare, LPWSTR FtDfsName, DWORD Flags);
NET_API_STATUS NET_API_FUNCTION NetDfsRemoveFtRootForced(LPWSTR DomainName, LPWSTR ServerName, LPWSTR RootShare, LPWSTR FtDfsName, DWORD Flags);
NET_API_STATUS NET_API_FUNCTION NetDfsManagerInitialize(LPWSTR ServerName, DWORD Flags);
NET_API_STATUS NET_API_FUNCTION NetDfsAddStdRootForced(LPWSTR ServerName, LPWSTR RootShare, LPWSTR Comment, LPWSTR Store);
NET_API_STATUS NET_API_FUNCTION NetDfsGetDcAddress(LPWSTR ServerName, LPWSTR *DcIpAddress, PBOOLEAN IsRoot, PULONG Timeout);
#define NET_DFS_SETDC_FLAGS                 0x00000000
#define NET_DFS_SETDC_TIMEOUT               0x00000001
#define NET_DFS_SETDC_INITPKT               0x00000002
typedef struct
{
    ULONG SiteFlags;
    LPWSTR SiteName;
} DFS_SITENAME_INFO, *PDFS_SITENAME_INFO, *LPDFS_SITENAME_INFO;
#define DFS_SITE_PRIMARY    0x1
typedef struct
{
    ULONG cSites;
    DFS_SITENAME_INFO Site[1];
} DFS_SITELIST_INFO, *PDFS_SITELIST_INFO, *LPDFS_SITELIST_INFO;
NET_API_STATUS NET_API_FUNCTION NetDfsRemove(LPWSTR DfsEntryPath, LPWSTR ServerName, LPWSTR ShareName);
NET_API_STATUS NET_API_FUNCTION NetDfsEnum(LPWSTR DfsName, DWORD Level, DWORD PrefMaxLen, LPBYTE *Buffer, LPDWORD EntriesRead, LPDWORD ResumeHandle);
NET_API_STATUS NET_API_FUNCTION NetDfsGetInfo(LPWSTR DfsEntryPath, LPWSTR ServerName, LPWSTR ShareName, DWORD Level, LPBYTE *Buffer);
NET_API_STATUS NET_API_FUNCTION NetDfsSetInfo(LPWSTR DfsEntryPath, LPWSTR ServerName, LPWSTR ShareName, DWORD Level, LPBYTE Buffer);
NET_API_STATUS NET_API_FUNCTION NetDfsGetClientInfo(LPWSTR DfsEntryPath, LPWSTR ServerName, LPWSTR ShareName, DWORD Level, LPBYTE *Buffer);
NET_API_STATUS NET_API_FUNCTION NetDfsSetClientInfo(LPWSTR DfsEntryPath, LPWSTR ServerName, LPWSTR ShareName, DWORD Level, LPBYTE Buffer);
NET_API_STATUS NET_API_FUNCTION NetDfsMove(LPWSTR OldDfsEntryPath, LPWSTR NewDfsEntryPath, ULONG Flags);
#define  DFS_MOVE_FLAG_REPLACE_IF_EXISTS  0x00000001
NET_API_STATUS NET_API_FUNCTION NetDfsRename(LPWSTR Path, LPWSTR NewPath);
NET_API_STATUS NET_API_FUNCTION NetDfsAddRootTarget(LPWSTR pDfsPath, LPWSTR pTargetPath, ULONG MajorVersion, LPWSTR pComment, ULONG Flags);
#ifndef DFS_FORCE_REMOVE
#define DFS_FORCE_REMOVE    0x80000000
#endif
NET_API_STATUS NET_API_FUNCTION NetDfsRemoveRootTarget(LPWSTR pDfsPath, LPWSTR pTargetPath, ULONG Flags);
NET_API_STATUS NET_API_FUNCTION NetDfsGetSecurity(LPWSTR DfsEntryPath, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR *ppSecurityDescriptor, LPDWORD lpcbSecurityDescriptor);
NET_API_STATUS NET_API_FUNCTION NetDfsSetSecurity(LPWSTR DfsEntryPath, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor);
NET_API_STATUS NET_API_FUNCTION NetDfsGetStdContainerSecurity(LPWSTR MachineName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR *ppSecurityDescriptor, LPDWORD lpcbSecurityDescriptor);
NET_API_STATUS NET_API_FUNCTION NetDfsSetStdContainerSecurity(LPWSTR MachineName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor);
NET_API_STATUS NET_API_FUNCTION NetDfsGetFtContainerSecurity(LPWSTR DomainName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR *ppSecurityDescriptor, LPDWORD lpcbSecurityDescriptor);
NET_API_STATUS NET_API_FUNCTION NetDfsSetFtContainerSecurity(LPWSTR DomainName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor);
typedef enum
{
    DFS_NAMESPACE_VERSION_ORIGIN_COMBINED = 0,
    DFS_NAMESPACE_VERSION_ORIGIN_SERVER,
    DFS_NAMESPACE_VERSION_ORIGIN_DOMAIN
} DFS_NAMESPACE_VERSION_ORIGIN, *PDFS_NAMESPACE_VERSION_ORIGIN;
#define DFS_NAMESPACE_CAPABILITY_ABDE           ((ULONGLONG) 0x0000000000000001)
typedef struct _DFS_SUPPORTED_NAMESPACE_VERSION_INFO
{
    ULONG       DomainDfsMajorVersion;
    ULONG       DomainDfsMinorVersion;
    ULONGLONG   DomainDfsCapabilities;
    ULONG       StandaloneDfsMajorVersion;
    ULONG       StandaloneDfsMinorVersion;
    ULONGLONG   StandaloneDfsCapabilities;
} DFS_SUPPORTED_NAMESPACE_VERSION_INFO, *PDFS_SUPPORTED_NAMESPACE_VERSION_INFO;
NET_API_STATUS NET_API_FUNCTION NetDfsGetSupportedNamespaceVersion(DFS_NAMESPACE_VERSION_ORIGIN Origin, PWSTR pName, PDFS_SUPPORTED_NAMESPACE_VERSION_INFO *ppVersionInfo);
#endif
