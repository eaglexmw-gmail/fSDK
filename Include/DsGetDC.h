/*+@@file@@----------------------------------------------------------------*//*!
 \file		DsGetDC.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 16:58:43 2016
 \date		Modified on Wed Jul  6 16:58:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DSGETDC_
#define _DSGETDC_
#if __POCC__ >= 500
#pragma once
#endif
#if !defined(_DSGETDCAPI_)
#define DSGETDCAPI DECLSPEC_IMPORT
#else
#define DSGETDCAPI
#endif
#define DS_FORCE_REDISCOVERY            0x00000001
#define DS_DIRECTORY_SERVICE_REQUIRED   0x00000010
#define DS_DIRECTORY_SERVICE_PREFERRED  0x00000020
#define DS_GC_SERVER_REQUIRED           0x00000040
#define DS_PDC_REQUIRED                 0x00000080
#define DS_BACKGROUND_ONLY              0x00000100
#define DS_IP_REQUIRED                  0x00000200
#define DS_KDC_REQUIRED                 0x00000400
#define DS_TIMESERV_REQUIRED            0x00000800
#define DS_WRITABLE_REQUIRED            0x00001000
#define DS_GOOD_TIMESERV_PREFERRED      0x00002000
#define DS_AVOID_SELF                   0x00004000
#define DS_ONLY_LDAP_NEEDED             0x00008000
#define DS_IS_FLAT_NAME                 0x00010000
#define DS_IS_DNS_NAME                  0x00020000
#define DS_TRY_NEXTCLOSEST_SITE         0x00040000
#define DS_DIRECTORY_SERVICE_6_REQUIRED 0x00080000
#define DS_WEB_SERVICE_REQUIRED         0x00100000
#define DS_RETURN_DNS_NAME              0x40000000
#define DS_RETURN_FLAT_NAME             0x80000000
#define DSGETDC_VALID_FLAGS ( \
            DS_FORCE_REDISCOVERY | \
            DS_DIRECTORY_SERVICE_REQUIRED | \
            DS_DIRECTORY_SERVICE_PREFERRED | \
            DS_GC_SERVER_REQUIRED | \
            DS_PDC_REQUIRED | \
            DS_BACKGROUND_ONLY | \
            DS_IP_REQUIRED | \
            DS_KDC_REQUIRED | \
            DS_TIMESERV_REQUIRED | \
            DS_WRITABLE_REQUIRED | \
            DS_GOOD_TIMESERV_PREFERRED | \
            DS_AVOID_SELF | \
            DS_ONLY_LDAP_NEEDED | \
            DS_IS_FLAT_NAME | \
            DS_IS_DNS_NAME | \
            DS_TRY_NEXTCLOSEST_SITE | \
            DS_DIRECTORY_SERVICE_6_REQUIRED | \
            DS_WEB_SERVICE_REQUIRED | \
            DS_RETURN_FLAT_NAME  | \
            DS_RETURN_DNS_NAME )
typedef struct _DOMAIN_CONTROLLER_INFOA
{
    LPSTR DomainControllerName;
    LPSTR DomainControllerAddress;
    ULONG DomainControllerAddressType;
    GUID DomainGuid;
    LPSTR DomainName;
    LPSTR DnsForestName;
    ULONG Flags;
    LPSTR DcSiteName;
    LPSTR ClientSiteName;
} DOMAIN_CONTROLLER_INFOA, *PDOMAIN_CONTROLLER_INFOA;
typedef struct _DOMAIN_CONTROLLER_INFOW
{
    LPWSTR DomainControllerName;
    LPWSTR DomainControllerAddress;
    ULONG DomainControllerAddressType;
    GUID DomainGuid;
    LPWSTR DomainName;
    LPWSTR DnsForestName;
    ULONG Flags;
    LPWSTR DcSiteName;
    LPWSTR ClientSiteName;
} DOMAIN_CONTROLLER_INFOW, *PDOMAIN_CONTROLLER_INFOW;
#ifdef UNICODE
#define DOMAIN_CONTROLLER_INFO DOMAIN_CONTROLLER_INFOW
#define PDOMAIN_CONTROLLER_INFO PDOMAIN_CONTROLLER_INFOW
#else
#define DOMAIN_CONTROLLER_INFO DOMAIN_CONTROLLER_INFOA
#define PDOMAIN_CONTROLLER_INFO PDOMAIN_CONTROLLER_INFOA
#endif
#define DS_INET_ADDRESS    1
#define DS_NETBIOS_ADDRESS 2
#define DS_PDC_FLAG            0x00000001
#define DS_GC_FLAG             0x00000004
#define DS_LDAP_FLAG           0x00000008
#define DS_DS_FLAG             0x00000010
#define DS_KDC_FLAG            0x00000020
#define DS_TIMESERV_FLAG       0x00000040
#define DS_CLOSEST_FLAG        0x00000080
#define DS_WRITABLE_FLAG       0x00000100
#define DS_GOOD_TIMESERV_FLAG  0x00000200
#define DS_NDNC_FLAG           0x00000400
#define DS_SELECT_SECRET_DOMAIN_6_FLAG  0x00000800
#define DS_FULL_SECRET_DOMAIN_6_FLAG    0x00001000
#define DS_WS_FLAG             0x00002000
#define DS_PING_FLAGS          0x000FFFFF
#define DS_DNS_CONTROLLER_FLAG 0x20000000
#define DS_DNS_DOMAIN_FLAG     0x40000000
#define DS_DNS_FOREST_FLAG     0x80000000
DSGETDCAPI DWORD WINAPI DsGetDcNameA(LPCSTR ComputerName, LPCSTR DomainName, GUID *DomainGuid, LPCSTR SiteName, ULONG Flags, PDOMAIN_CONTROLLER_INFOA *DomainControllerInfo);
DSGETDCAPI DWORD WINAPI DsGetDcNameW(LPCWSTR ComputerName, LPCWSTR DomainName, GUID *DomainGuid, LPCWSTR SiteName, ULONG Flags, PDOMAIN_CONTROLLER_INFOW *DomainControllerInfo);
#ifdef UNICODE
#define DsGetDcName DsGetDcNameW
#else
#define DsGetDcName DsGetDcNameA
#endif
DSGETDCAPI DWORD WINAPI DsGetSiteNameA(LPCSTR ComputerName, LPSTR *SiteName);
DSGETDCAPI DWORD WINAPI DsGetSiteNameW(LPCWSTR ComputerName, LPWSTR *SiteName);
#ifdef UNICODE
#define DsGetSiteName DsGetSiteNameW
#else
#define DsGetSiteName DsGetSiteNameA
#endif
DSGETDCAPI DWORD WINAPI DsValidateSubnetNameW(LPCWSTR SubnetName);
DSGETDCAPI DWORD WINAPI DsValidateSubnetNameA(LPCSTR SubnetName);
#ifdef UNICODE
#define DsValidateSubnetName DsValidateSubnetNameW
#else
#define DsValidateSubnetName DsValidateSubnetNameA
#endif
#ifdef _WINSOCK2API_
DSGETDCAPI DWORD WINAPI DsAddressToSiteNamesW(LPCWSTR ComputerName, DWORD EntryCount, PSOCKET_ADDRESS SocketAddresses, LPWSTR **SiteNames);
DSGETDCAPI DWORD WINAPI DsAddressToSiteNamesA(LPCSTR ComputerName, DWORD EntryCount, PSOCKET_ADDRESS SocketAddresses, LPSTR **SiteNames);
#ifdef UNICODE
#define DsAddressToSiteNames DsAddressToSiteNamesW
#else
#define DsAddressToSiteNames DsAddressToSiteNamesA
#endif
DSGETDCAPI DWORD WINAPI DsAddressToSiteNamesExW(LPCWSTR ComputerName, DWORD EntryCount, PSOCKET_ADDRESS SocketAddresses, LPWSTR **SiteNames, LPWSTR **SubnetNames);
DSGETDCAPI DWORD WINAPI DsAddressToSiteNamesExA(LPCSTR ComputerName, DWORD EntryCount, PSOCKET_ADDRESS SocketAddresses, LPSTR **SiteNames, LPSTR **SubnetNames);
#ifdef UNICODE
#define DsAddressToSiteNamesEx DsAddressToSiteNamesExW
#else
#define DsAddressToSiteNamesEx DsAddressToSiteNamesExA
#endif
#endif
typedef struct _DS_DOMAIN_TRUSTSW
{
	LPWSTR NetbiosDomainName;
	LPWSTR DnsDomainName;
	ULONG Flags;
#define DS_DOMAIN_IN_FOREST           0x0001
#define DS_DOMAIN_DIRECT_OUTBOUND     0x0002
#define DS_DOMAIN_TREE_ROOT           0x0004
#define DS_DOMAIN_PRIMARY             0x0008
#define DS_DOMAIN_NATIVE_MODE         0x0010
#define DS_DOMAIN_DIRECT_INBOUND      0x0020
#define DS_DOMAIN_VALID_FLAGS (         \
            DS_DOMAIN_IN_FOREST       | \
            DS_DOMAIN_DIRECT_OUTBOUND | \
            DS_DOMAIN_TREE_ROOT       | \
            DS_DOMAIN_PRIMARY         | \
            DS_DOMAIN_NATIVE_MODE     | \
            DS_DOMAIN_DIRECT_INBOUND )
	ULONG ParentIndex;
	ULONG TrustType;
	ULONG TrustAttributes;
	PSID DomainSid;
	GUID DomainGuid;
} DS_DOMAIN_TRUSTSW, *PDS_DOMAIN_TRUSTSW;
typedef struct _DS_DOMAIN_TRUSTSA
{
	LPSTR NetbiosDomainName;
	LPSTR DnsDomainName;
	ULONG Flags;
	ULONG ParentIndex;
	ULONG TrustType;
	ULONG TrustAttributes;
	PSID DomainSid;
	GUID DomainGuid;
} DS_DOMAIN_TRUSTSA, *PDS_DOMAIN_TRUSTSA;
#ifdef UNICODE
#define DS_DOMAIN_TRUSTS DS_DOMAIN_TRUSTSW
#define PDS_DOMAIN_TRUSTS PDS_DOMAIN_TRUSTSW
#else
#define DS_DOMAIN_TRUSTS DS_DOMAIN_TRUSTSA
#define PDS_DOMAIN_TRUSTS PDS_DOMAIN_TRUSTSA
#endif
DSGETDCAPI DWORD WINAPI DsEnumerateDomainTrustsW(LPWSTR ServerName, ULONG Flags, PDS_DOMAIN_TRUSTSW *Domains, PULONG DomainCount);
DSGETDCAPI DWORD WINAPI DsEnumerateDomainTrustsA(LPSTR ServerName, ULONG Flags, PDS_DOMAIN_TRUSTSA *Domains, PULONG DomainCount);
#ifdef UNICODE
#define DsEnumerateDomainTrusts DsEnumerateDomainTrustsW
#else
#define DsEnumerateDomainTrusts DsEnumerateDomainTrustsA
#endif
#if defined(_NTLSA_) || defined(_NTSECAPI_)
DSGETDCAPI DWORD WINAPI DsGetForestTrustInformationW(LPCWSTR ServerName, LPCWSTR TrustedDomainName, DWORD Flags, PLSA_FOREST_TRUST_INFORMATION *ForestTrustInfo);
#define DS_GFTI_UPDATE_TDO      0x1
#define DS_GFTI_VALID_FLAGS     0x1
DSGETDCAPI DWORD WINAPI DsMergeForestTrustInformationW(LPCWSTR DomainName, PLSA_FOREST_TRUST_INFORMATION NewForestTrustInfo, PLSA_FOREST_TRUST_INFORMATION OldForestTrustInfo, PLSA_FOREST_TRUST_INFORMATION *MergedForestTrustInfo);
#endif
DSGETDCAPI DWORD WINAPI DsGetDcSiteCoverageW(LPCWSTR ServerName, PULONG EntryCount, LPWSTR **SiteNames);
DSGETDCAPI DWORD WINAPI DsGetDcSiteCoverageA(LPCSTR ServerName, PULONG EntryCount, LPSTR **SiteNames);
#ifdef UNICODE
#define DsGetDcSiteCoverage DsGetDcSiteCoverageW
#else
#define DsGetDcSiteCoverage DsGetDcSiteCoverageA
#endif
DSGETDCAPI DWORD WINAPI DsDeregisterDnsHostRecordsW(LPWSTR ServerName, LPWSTR DnsDomainName, GUID *DomainGuid, GUID *DsaGuid, LPWSTR DnsHostName);
DSGETDCAPI DWORD WINAPI DsDeregisterDnsHostRecordsA(LPSTR ServerName, LPSTR DnsDomainName, GUID *DomainGuid, GUID *DsaGuid, LPSTR DnsHostName);
#ifdef UNICODE
#define DsDeregisterDnsHostRecords DsDeregisterDnsHostRecordsW
#else
#define DsDeregisterDnsHostRecords DsDeregisterDnsHostRecordsA
#endif
#ifdef _WINSOCK2API_
#define DS_ONLY_DO_SITE_NAME         0x01
#define DS_NOTIFY_AFTER_SITE_RECORDS 0x02
#define DS_OPEN_VALID_OPTION_FLAGS ( DS_ONLY_DO_SITE_NAME | DS_NOTIFY_AFTER_SITE_RECORDS )
#define DS_OPEN_VALID_FLAGS (       \
            DS_FORCE_REDISCOVERY  | \
            DS_ONLY_LDAP_NEEDED   | \
            DS_KDC_REQUIRED       | \
            DS_PDC_REQUIRED       | \
            DS_GC_SERVER_REQUIRED | \
            DS_WRITABLE_REQUIRED )
DSGETDCAPI DWORD WINAPI DsGetDcOpenW(LPCWSTR DnsName, ULONG OptionFlags, LPCWSTR SiteName, GUID *DomainGuid, LPCWSTR DnsForestName, ULONG DcFlags, PHANDLE RetGetDcContext);
DSGETDCAPI DWORD WINAPI DsGetDcOpenA(LPCSTR DnsName, ULONG OptionFlags, LPCSTR SiteName, GUID *DomainGuid, LPCSTR DnsForestName, ULONG DcFlags, PHANDLE RetGetDcContext);
#ifdef UNICODE
#define DsGetDcOpen DsGetDcOpenW
#else
#define DsGetDcOpen DsGetDcOpenA
#endif
DSGETDCAPI DWORD WINAPI DsGetDcNextW(HANDLE GetDcContextHandle, PULONG SockAddressCount, LPSOCKET_ADDRESS *SockAddresses, LPWSTR *DnsHostName);
DSGETDCAPI DWORD WINAPI DsGetDcNextA(HANDLE GetDcContextHandle, PULONG SockAddressCount, LPSOCKET_ADDRESS *SockAddresses, LPSTR *DnsHostName);
#ifdef UNICODE
#define DsGetDcNext DsGetDcNextW
#else
#define DsGetDcNext DsGetDcNextA
#endif
DSGETDCAPI VOID WINAPI DsGetDcCloseW(HANDLE GetDcContextHandle);
#ifdef UNICODE
#define DsGetDcClose DsGetDcCloseW
#else
#define DsGetDcClose DsGetDcCloseW
#endif
#endif
#endif
