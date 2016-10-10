/*+@@file@@----------------------------------------------------------------*//*!
 \file		WinInet.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 16:22:17 2016
 \date		Modified on Sun Sep  4 16:22:17 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if !defined(_WININET_)
#define _WININET_
#if __POCC__ >= 500
#pragma once
#endif
#if defined(_WIN64)
#include <pshpack8.h>
#else
#include <pshpack4.h>
#endif
#if !defined(_WINX32_)
#define INTERNETAPI        extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define INTERNETAPI_(type) extern DECLSPEC_IMPORT type STDAPICALLTYPE
#define URLCACHEAPI        extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define URLCACHEAPI_(type) extern DECLSPEC_IMPORT type STDAPICALLTYPE
#else
#define INTERNETAPI        extern HRESULT STDAPICALLTYPE
#define INTERNETAPI_(type) extern type STDAPICALLTYPE
#define URLCACHEAPI        extern HRESULT STDAPICALLTYPE
#define URLCACHEAPI_(type) extern type STDAPICALLTYPE
#endif
#define BOOLAPI INTERNETAPI_(BOOL)
typedef LPVOID HINTERNET;
typedef HINTERNET * LPHINTERNET;
typedef WORD INTERNET_PORT;
typedef INTERNET_PORT * LPINTERNET_PORT;
#define INTERNET_INVALID_PORT_NUMBER    0
#define INTERNET_DEFAULT_FTP_PORT       21
#define INTERNET_DEFAULT_GOPHER_PORT    70
#define INTERNET_DEFAULT_HTTP_PORT      80
#define INTERNET_DEFAULT_HTTPS_PORT     443
#define INTERNET_DEFAULT_SOCKS_PORT     1080
#define INTERNET_MAX_HOST_NAME_LENGTH   256
#define INTERNET_MAX_USER_NAME_LENGTH   128
#define INTERNET_MAX_PASSWORD_LENGTH    128
#define INTERNET_MAX_PORT_NUMBER_LENGTH 5
#define INTERNET_MAX_PORT_NUMBER_VALUE  65535
#define INTERNET_MAX_PATH_LENGTH        2048
#define INTERNET_MAX_SCHEME_LENGTH      32
#define INTERNET_MAX_URL_LENGTH         (INTERNET_MAX_SCHEME_LENGTH + sizeof("://") + INTERNET_MAX_PATH_LENGTH)
#define INTERNET_KEEP_ALIVE_UNKNOWN     ((DWORD)-1)
#define INTERNET_KEEP_ALIVE_ENABLED     1
#define INTERNET_KEEP_ALIVE_DISABLED    0
#define INTERNET_REQFLAG_FROM_CACHE     0x00000001
#define INTERNET_REQFLAG_ASYNC          0x00000002
#define INTERNET_REQFLAG_VIA_PROXY      0x00000004
#define INTERNET_REQFLAG_NO_HEADERS     0x00000008
#define INTERNET_REQFLAG_PASSIVE        0x00000010
#define INTERNET_REQFLAG_CACHE_WRITE_DISABLED 0x00000040
#define INTERNET_REQFLAG_NET_TIMEOUT    0x00000080
#define INTERNET_FLAG_IDN_DIRECT        0x00000001
#define INTERNET_FLAG_IDN_PROXY         0x00000002
#define INTERNET_FLAG_RELOAD            0x80000000
#define INTERNET_FLAG_RAW_DATA          0x40000000
#define INTERNET_FLAG_EXISTING_CONNECT  0x20000000
#define INTERNET_FLAG_ASYNC             0x10000000
#define INTERNET_FLAG_PASSIVE           0x08000000
#define INTERNET_FLAG_NO_CACHE_WRITE    0x04000000
#define INTERNET_FLAG_DONT_CACHE        INTERNET_FLAG_NO_CACHE_WRITE
#define INTERNET_FLAG_MAKE_PERSISTENT   0x02000000
#define INTERNET_FLAG_FROM_CACHE        0x01000000
#define INTERNET_FLAG_OFFLINE           INTERNET_FLAG_FROM_CACHE
#define INTERNET_FLAG_SECURE            0x00800000
#define INTERNET_FLAG_KEEP_CONNECTION   0x00400000
#define INTERNET_FLAG_NO_AUTO_REDIRECT  0x00200000
#define INTERNET_FLAG_READ_PREFETCH     0x00100000
#define INTERNET_FLAG_NO_COOKIES        0x00080000
#define INTERNET_FLAG_NO_AUTH           0x00040000
#define INTERNET_FLAG_RESTRICTED_ZONE   0x00020000
#define INTERNET_FLAG_CACHE_IF_NET_FAIL 0x00010000
#define INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTP   0x00008000
#define INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTPS  0x00004000
#define INTERNET_FLAG_IGNORE_CERT_DATE_INVALID  0x00002000
#define INTERNET_FLAG_IGNORE_CERT_CN_INVALID    0x00001000
#define INTERNET_FLAG_RESYNCHRONIZE     0x00000800
#define INTERNET_FLAG_HYPERLINK         0x00000400
#define INTERNET_FLAG_NO_UI             0x00000200
#define INTERNET_FLAG_PRAGMA_NOCACHE    0x00000100
#define INTERNET_FLAG_CACHE_ASYNC       0x00000080
#define INTERNET_FLAG_FORMS_SUBMIT      0x00000040
#define INTERNET_FLAG_FWD_BACK          0x00000020
#define INTERNET_FLAG_NEED_FILE         0x00000010
#define INTERNET_FLAG_MUST_CACHE_REQUEST INTERNET_FLAG_NEED_FILE
#define INTERNET_FLAG_TRANSFER_ASCII    FTP_TRANSFER_TYPE_ASCII
#define INTERNET_FLAG_TRANSFER_BINARY   FTP_TRANSFER_TYPE_BINARY
#define SECURITY_INTERNET_MASK  (INTERNET_FLAG_IGNORE_CERT_CN_INVALID    |  \
                                 INTERNET_FLAG_IGNORE_CERT_DATE_INVALID  |  \
                                 INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTPS  |  \
                                 INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTP   )
#define SECURITY_IGNORE_ERROR_MASK  (INTERNET_FLAG_IGNORE_CERT_CN_INVALID   |  \
                                     INTERNET_FLAG_IGNORE_CERT_DATE_INVALID |  \
                                     SECURITY_FLAG_IGNORE_UNKNOWN_CA        |  \
                                     SECURITY_FLAG_IGNORE_REVOCATION    )
#define INTERNET_FLAGS_MASK     (INTERNET_FLAG_RELOAD               \
                                | INTERNET_FLAG_RAW_DATA            \
                                | INTERNET_FLAG_EXISTING_CONNECT    \
                                | INTERNET_FLAG_ASYNC               \
                                | INTERNET_FLAG_PASSIVE             \
                                | INTERNET_FLAG_NO_CACHE_WRITE      \
                                | INTERNET_FLAG_MAKE_PERSISTENT     \
                                | INTERNET_FLAG_FROM_CACHE          \
                                | INTERNET_FLAG_SECURE              \
                                | INTERNET_FLAG_KEEP_CONNECTION     \
                                | INTERNET_FLAG_NO_AUTO_REDIRECT    \
                                | INTERNET_FLAG_READ_PREFETCH       \
                                | INTERNET_FLAG_NO_COOKIES          \
                                | INTERNET_FLAG_NO_AUTH             \
                                | INTERNET_FLAG_CACHE_IF_NET_FAIL   \
                                | SECURITY_INTERNET_MASK            \
                                | INTERNET_FLAG_RESYNCHRONIZE       \
                                | INTERNET_FLAG_HYPERLINK           \
                                | INTERNET_FLAG_NO_UI               \
                                | INTERNET_FLAG_PRAGMA_NOCACHE      \
                                | INTERNET_FLAG_CACHE_ASYNC         \
                                | INTERNET_FLAG_FORMS_SUBMIT        \
                                | INTERNET_FLAG_NEED_FILE           \
                                | INTERNET_FLAG_RESTRICTED_ZONE     \
                                | INTERNET_FLAG_TRANSFER_BINARY     \
                                | INTERNET_FLAG_TRANSFER_ASCII      \
                                | INTERNET_FLAG_FWD_BACK            \
                                | INTERNET_FLAG_BGUPDATE            \
                                )
#define INTERNET_ERROR_MASK_INSERT_CDROM                    0x1
#define INTERNET_ERROR_MASK_COMBINED_SEC_CERT               0x2
#define INTERNET_ERROR_MASK_NEED_MSN_SSPI_PKG               0X4
#define INTERNET_ERROR_MASK_LOGIN_FAILURE_DISPLAY_ENTITY_BODY 0x8
#define INTERNET_OPTIONS_MASK   (~INTERNET_FLAGS_MASK)
#define WININET_API_FLAG_ASYNC          0x00000001
#define WININET_API_FLAG_SYNC           0x00000004
#define WININET_API_FLAG_USE_CONTEXT    0x00000008
#define INTERNET_NO_CALLBACK            0
typedef enum
{
    INTERNET_SCHEME_PARTIAL = -2,
    INTERNET_SCHEME_UNKNOWN = -1,
    INTERNET_SCHEME_DEFAULT = 0,
    INTERNET_SCHEME_FTP,
    INTERNET_SCHEME_GOPHER,
    INTERNET_SCHEME_HTTP,
    INTERNET_SCHEME_HTTPS,
    INTERNET_SCHEME_FILE,
    INTERNET_SCHEME_NEWS,
    INTERNET_SCHEME_MAILTO,
    INTERNET_SCHEME_SOCKS,
    INTERNET_SCHEME_JAVASCRIPT,
    INTERNET_SCHEME_VBSCRIPT,
    INTERNET_SCHEME_RES,
    INTERNET_SCHEME_FIRST = INTERNET_SCHEME_FTP,
    INTERNET_SCHEME_LAST = INTERNET_SCHEME_RES
} INTERNET_SCHEME, * LPINTERNET_SCHEME;
typedef struct
{
    DWORD_PTR dwResult;
    DWORD dwError;
} INTERNET_ASYNC_RESULT, * LPINTERNET_ASYNC_RESULT;
typedef struct
{
    DWORD_PTR Socket;
    DWORD     SourcePort;
    DWORD     DestPort;
    DWORD     Flags;
} INTERNET_DIAGNOSTIC_SOCKET_INFO, * LPINTERNET_DIAGNOSTIC_SOCKET_INFO;
#define IDSI_FLAG_KEEP_ALIVE    0x00000001
#define IDSI_FLAG_SECURE        0x00000002
#define IDSI_FLAG_PROXY         0x00000004
#define IDSI_FLAG_TUNNEL        0x00000008
typedef struct
{
    DWORD dwAccessType;
    LPCTSTR lpszProxy;
    LPCTSTR lpszProxyBypass;
} INTERNET_PROXY_INFO, * LPINTERNET_PROXY_INFO;
typedef struct
{
    DWORD   dwOption;
    union
	{
        DWORD    dwValue;
        LPSTR    pszValue;
        FILETIME ftValue;
    } Value;
} INTERNET_PER_CONN_OPTIONA, * LPINTERNET_PER_CONN_OPTIONA;
typedef struct
{
    DWORD   dwOption;
    union
	{
        DWORD    dwValue;
        LPWSTR   pszValue;
        FILETIME ftValue;
    } Value;
} INTERNET_PER_CONN_OPTIONW, * LPINTERNET_PER_CONN_OPTIONW;
#ifdef UNICODE
typedef INTERNET_PER_CONN_OPTIONW INTERNET_PER_CONN_OPTION;
typedef LPINTERNET_PER_CONN_OPTIONW LPINTERNET_PER_CONN_OPTION;
#else
typedef INTERNET_PER_CONN_OPTIONA INTERNET_PER_CONN_OPTION;
typedef LPINTERNET_PER_CONN_OPTIONA LPINTERNET_PER_CONN_OPTION;
#endif
typedef struct
{
    DWORD   dwSize;
    LPSTR   pszConnection;
    DWORD   dwOptionCount;
    DWORD   dwOptionError;
    LPINTERNET_PER_CONN_OPTIONA  pOptions;
} INTERNET_PER_CONN_OPTION_LISTA, * LPINTERNET_PER_CONN_OPTION_LISTA;
typedef struct
{
    DWORD   dwSize;
    LPWSTR  pszConnection;
    DWORD   dwOptionCount;
    DWORD   dwOptionError;
    LPINTERNET_PER_CONN_OPTIONW  pOptions;
} INTERNET_PER_CONN_OPTION_LISTW, * LPINTERNET_PER_CONN_OPTION_LISTW;
#ifdef UNICODE
typedef INTERNET_PER_CONN_OPTION_LISTW INTERNET_PER_CONN_OPTION_LIST;
typedef LPINTERNET_PER_CONN_OPTION_LISTW LPINTERNET_PER_CONN_OPTION_LIST;
#else
typedef INTERNET_PER_CONN_OPTION_LISTA INTERNET_PER_CONN_OPTION_LIST;
typedef LPINTERNET_PER_CONN_OPTION_LISTA LPINTERNET_PER_CONN_OPTION_LIST;
#endif
#define INTERNET_PER_CONN_FLAGS                         1
#define INTERNET_PER_CONN_PROXY_SERVER                  2
#define INTERNET_PER_CONN_PROXY_BYPASS                  3
#define INTERNET_PER_CONN_AUTOCONFIG_URL                4
#define INTERNET_PER_CONN_AUTODISCOVERY_FLAGS           5
#define INTERNET_PER_CONN_AUTOCONFIG_SECONDARY_URL      6
#define INTERNET_PER_CONN_AUTOCONFIG_RELOAD_DELAY_MINS  7
#define INTERNET_PER_CONN_AUTOCONFIG_LAST_DETECT_TIME   8
#define INTERNET_PER_CONN_AUTOCONFIG_LAST_DETECT_URL    9
#define INTERNET_PER_CONN_FLAGS_UI                      10
#define PROXY_TYPE_DIRECT                               0x00000001
#define PROXY_TYPE_PROXY                                0x00000002
#define PROXY_TYPE_AUTO_PROXY_URL                       0x00000004
#define PROXY_TYPE_AUTO_DETECT                          0x00000008
#define AUTO_PROXY_FLAG_USER_SET                        0x00000001
#define AUTO_PROXY_FLAG_ALWAYS_DETECT                   0x00000002
#define AUTO_PROXY_FLAG_DETECTION_RUN                   0x00000004
#define AUTO_PROXY_FLAG_MIGRATED                        0x00000008
#define AUTO_PROXY_FLAG_DONT_CACHE_PROXY_RESULT         0x00000010
#define AUTO_PROXY_FLAG_CACHE_INIT_RUN                  0x00000020
#define AUTO_PROXY_FLAG_DETECTION_SUSPECT               0x00000040
typedef struct
{
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
} INTERNET_VERSION_INFO, * LPINTERNET_VERSION_INFO;
typedef struct
{
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
} HTTP_VERSION_INFO, * LPHTTP_VERSION_INFO;
typedef struct
{
    DWORD dwConnectedState;
    DWORD dwFlags;
} INTERNET_CONNECTED_INFO, * LPINTERNET_CONNECTED_INFO;
#define ISO_FORCE_DISCONNECTED  0x00000001
typedef struct
{
    DWORD   dwStructSize;
    LPSTR   lpszScheme;
    DWORD   dwSchemeLength;
    INTERNET_SCHEME nScheme;
    LPSTR   lpszHostName;
    DWORD   dwHostNameLength;
    INTERNET_PORT nPort;
    LPSTR   lpszUserName;
    DWORD   dwUserNameLength;
    LPSTR   lpszPassword;
    DWORD   dwPasswordLength;
    LPSTR   lpszUrlPath;
    DWORD   dwUrlPathLength;
    LPSTR   lpszExtraInfo;
    DWORD   dwExtraInfoLength;
} URL_COMPONENTSA, * LPURL_COMPONENTSA;
typedef struct
{
    DWORD   dwStructSize;
    LPWSTR  lpszScheme;
    DWORD   dwSchemeLength;
    INTERNET_SCHEME nScheme;
    LPWSTR  lpszHostName;
    DWORD   dwHostNameLength;
    INTERNET_PORT nPort;
    LPWSTR  lpszUserName;
    DWORD   dwUserNameLength;
    LPWSTR  lpszPassword;
    DWORD   dwPasswordLength;
    LPWSTR  lpszUrlPath;
    DWORD   dwUrlPathLength;
    LPWSTR  lpszExtraInfo;
    DWORD   dwExtraInfoLength;
} URL_COMPONENTSW, * LPURL_COMPONENTSW;
#ifdef UNICODE
typedef URL_COMPONENTSW URL_COMPONENTS;
typedef LPURL_COMPONENTSW LPURL_COMPONENTS;
#else
typedef URL_COMPONENTSA URL_COMPONENTS;
typedef LPURL_COMPONENTSA LPURL_COMPONENTS;
#endif
typedef struct
{
    FILETIME ftExpiry;
    FILETIME ftStart;
    LPTSTR lpszSubjectInfo;
    LPTSTR lpszIssuerInfo;
    LPTSTR lpszProtocolName;
    LPTSTR lpszSignatureAlgName;
    LPTSTR lpszEncryptionAlgName;
    DWORD dwKeySize;
} INTERNET_CERTIFICATE_INFO, * LPINTERNET_CERTIFICATE_INFO;
typedef struct _INTERNET_BUFFERSA
{
    DWORD dwStructSize;
    struct _INTERNET_BUFFERSA * Next;
    LPCSTR   lpcszHeader;
    DWORD dwHeadersLength;
    DWORD dwHeadersTotal;
    LPVOID lpvBuffer;
    DWORD dwBufferLength;
    DWORD dwBufferTotal;
    DWORD dwOffsetLow;
    DWORD dwOffsetHigh;
} INTERNET_BUFFERSA, * LPINTERNET_BUFFERSA;
typedef struct _INTERNET_BUFFERSW
{
    DWORD dwStructSize;
    struct _INTERNET_BUFFERSW * Next;
    LPCWSTR  lpcszHeader;
    DWORD dwHeadersLength;
    DWORD dwHeadersTotal;
    LPVOID lpvBuffer;
    DWORD dwBufferLength;
    DWORD dwBufferTotal;
    DWORD dwOffsetLow;
    DWORD dwOffsetHigh;
} INTERNET_BUFFERSW, * LPINTERNET_BUFFERSW;
#ifdef UNICODE
typedef INTERNET_BUFFERSW INTERNET_BUFFERS;
typedef LPINTERNET_BUFFERSW LPINTERNET_BUFFERS;
#else
typedef INTERNET_BUFFERSA INTERNET_BUFFERS;
typedef LPINTERNET_BUFFERSA LPINTERNET_BUFFERS;
#endif
BOOLAPI InternetTimeFromSystemTimeA(CONST SYSTEMTIME *pst, DWORD dwRFC, LPSTR lpszTime, DWORD cbTime);
BOOLAPI InternetTimeFromSystemTimeW(CONST SYSTEMTIME *pst, DWORD dwRFC, LPWSTR lpszTime, DWORD cbTime);
#ifdef UNICODE
#define InternetTimeFromSystemTime  InternetTimeFromSystemTimeW
#else
#ifdef _WINX32_
#define InternetTimeFromSystemTime  InternetTimeFromSystemTimeA
#else
BOOLAPI InternetTimeFromSystemTime(CONST SYSTEMTIME *pst, DWORD dwRFC, LPSTR lpszTime, DWORD cbTime);
#endif
#endif
#define INTERNET_RFC1123_FORMAT     0
#define INTERNET_RFC1123_BUFSIZE   30
BOOLAPI InternetTimeToSystemTimeA(LPCSTR lpszTime, SYSTEMTIME *pst, DWORD dwReserved);
BOOLAPI InternetTimeToSystemTimeW(LPCWSTR lpszTime, SYSTEMTIME *pst, DWORD dwReserved);
#ifdef UNICODE
#define InternetTimeToSystemTime  InternetTimeToSystemTimeW
#else
#ifdef _WINX32_
#define InternetTimeToSystemTime  InternetTimeToSystemTimeA
#else
BOOLAPI InternetTimeToSystemTime(LPCSTR lpszTime, SYSTEMTIME *pst, DWORD dwReserved);
#endif
#endif
BOOLAPI InternetCrackUrlA(LPCSTR lpszUrl, DWORD dwUrlLength, DWORD dwFlags, LPURL_COMPONENTSA lpUrlComponents);
BOOLAPI InternetCrackUrlW(LPCWSTR lpszUrl, DWORD dwUrlLength, DWORD dwFlags, LPURL_COMPONENTSW lpUrlComponents);
#ifdef UNICODE
#define InternetCrackUrl  InternetCrackUrlW
#else
#define InternetCrackUrl  InternetCrackUrlA
#endif
BOOLAPI InternetCreateUrlA(LPURL_COMPONENTSA lpUrlComponents, DWORD dwFlags, LPSTR lpszUrl, LPDWORD lpdwUrlLength);
BOOLAPI InternetCreateUrlW(LPURL_COMPONENTSW lpUrlComponents, DWORD dwFlags, LPWSTR lpszUrl, LPDWORD lpdwUrlLength);
#ifdef UNICODE
#define InternetCreateUrl  InternetCreateUrlW
#else
#define InternetCreateUrl  InternetCreateUrlA
#endif
BOOLAPI InternetCanonicalizeUrlA(LPCSTR lpszUrl, LPSTR lpszBuffer, LPDWORD lpdwBufferLength, DWORD dwFlags);
BOOLAPI InternetCanonicalizeUrlW(LPCWSTR lpszUrl, LPWSTR lpszBuffer, LPDWORD lpdwBufferLength, DWORD dwFlags);
#ifdef UNICODE
#define InternetCanonicalizeUrl  InternetCanonicalizeUrlW
#else
#define InternetCanonicalizeUrl  InternetCanonicalizeUrlA
#endif
BOOLAPI InternetCombineUrlA(LPCSTR lpszBaseUrl, LPCSTR lpszRelativeUrl, LPSTR lpszBuffer, LPDWORD lpdwBufferLength, DWORD dwFlags);
BOOLAPI InternetCombineUrlW(LPCWSTR lpszBaseUrl, LPCWSTR lpszRelativeUrl, LPWSTR lpszBuffer, LPDWORD lpdwBufferLength, DWORD dwFlags);
#ifdef UNICODE
#define InternetCombineUrl  InternetCombineUrlW
#else
#define InternetCombineUrl  InternetCombineUrlA
#endif
#define ICU_ESCAPE      0x80000000
#define ICU_USERNAME    0x40000000
#define ICU_NO_ENCODE   0x20000000
#define ICU_DECODE      0x10000000
#define ICU_NO_META     0x08000000
#define ICU_ENCODE_SPACES_ONLY 0x04000000
#define ICU_BROWSER_MODE 0x02000000
#define ICU_ENCODE_PERCENT      0x00001000
INTERNETAPI_(HINTERNET)InternetOpenA(LPCSTR lpszAgent, DWORD dwAccessType, LPCSTR lpszProxy, LPCSTR lpszProxyBypass, DWORD dwFlags);
INTERNETAPI_(HINTERNET)InternetOpenW(LPCWSTR lpszAgent, DWORD dwAccessType, LPCWSTR lpszProxy, LPCWSTR lpszProxyBypass, DWORD dwFlags);
#ifdef UNICODE
#define InternetOpen  InternetOpenW
#else
#define InternetOpen  InternetOpenA
#endif
#define INTERNET_OPEN_TYPE_PRECONFIG                    0
#define INTERNET_OPEN_TYPE_DIRECT                       1
#define INTERNET_OPEN_TYPE_PROXY                        3
#define INTERNET_OPEN_TYPE_PRECONFIG_WITH_NO_AUTOPROXY  4
#define PRE_CONFIG_INTERNET_ACCESS  INTERNET_OPEN_TYPE_PRECONFIG
#define LOCAL_INTERNET_ACCESS       INTERNET_OPEN_TYPE_DIRECT
#define CERN_PROXY_INTERNET_ACCESS  INTERNET_OPEN_TYPE_PROXY
BOOLAPI InternetCloseHandle(HINTERNET hInternet);
INTERNETAPI_(HINTERNET)InternetConnectA(HINTERNET hInternet, LPCSTR lpszServerName, INTERNET_PORT nServerPort, LPCSTR lpszUserName, LPCSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(HINTERNET)InternetConnectW(HINTERNET hInternet, LPCWSTR lpszServerName, INTERNET_PORT nServerPort, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define InternetConnect  InternetConnectW
#else
#define InternetConnect  InternetConnectA
#endif
#define INTERNET_SERVICE_FTP    1
#define INTERNET_SERVICE_GOPHER 2
#define INTERNET_SERVICE_HTTP   3
INTERNETAPI_(HINTERNET)InternetOpenUrlA(HINTERNET hInternet, LPCSTR lpszUrl, LPCSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(HINTERNET)InternetOpenUrlW(HINTERNET hInternet, LPCWSTR lpszUrl, LPCWSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define InternetOpenUrl  InternetOpenUrlW
#else
#define InternetOpenUrl  InternetOpenUrlA
#endif
BOOLAPI InternetReadFile(HINTERNET hFile, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead);
INTERNETAPI_(BOOL)InternetReadFileExA(HINTERNET hFile, LPINTERNET_BUFFERSA lpBuffersOut, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(BOOL)InternetReadFileExW(HINTERNET hFile, LPINTERNET_BUFFERSW lpBuffersOut, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define InternetReadFileEx  InternetReadFileExW
#else
#define InternetReadFileEx  InternetReadFileExA
#endif
#define IRF_ASYNC       WININET_API_FLAG_ASYNC
#define IRF_SYNC        WININET_API_FLAG_SYNC
#define IRF_USE_CONTEXT WININET_API_FLAG_USE_CONTEXT
#define IRF_NO_WAIT     0x00000008
INTERNETAPI_(DWORD)InternetSetFilePointer(HINTERNET hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod, DWORD_PTR dwContext);
BOOLAPI InternetWriteFile(HINTERNET hFile, LPCVOID lpBuffer, DWORD dwNumberOfBytesToWrite, LPDWORD lpdwNumberOfBytesWritten);
BOOLAPI InternetQueryDataAvailable(HINTERNET hFile, LPDWORD lpdwNumberOfBytesAvailable, DWORD dwFlags, DWORD_PTR dwContext);
BOOLAPI InternetFindNextFileA(HINTERNET hFind, LPVOID lpvFindData);
BOOLAPI InternetFindNextFileW(HINTERNET hFind, LPVOID lpvFindData);
#ifdef UNICODE
#define InternetFindNextFile  InternetFindNextFileW
#else
#define InternetFindNextFile  InternetFindNextFileA
#endif
BOOLAPI InternetQueryOptionA(HINTERNET hInternet, DWORD dwOption, LPVOID lpBuffer, LPDWORD lpdwBufferLength);
BOOLAPI InternetQueryOptionW(HINTERNET hInternet, DWORD dwOption, LPVOID lpBuffer, LPDWORD lpdwBufferLength);
#ifdef UNICODE
#define InternetQueryOption  InternetQueryOptionW
#else
#define InternetQueryOption  InternetQueryOptionA
#endif
BOOLAPI InternetSetOptionA(HINTERNET hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength);
BOOLAPI InternetSetOptionW(HINTERNET hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength);
#ifdef UNICODE
#define InternetSetOption  InternetSetOptionW
#else
#define InternetSetOption  InternetSetOptionA
#endif
BOOLAPI InternetSetOptionExA(HINTERNET hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength, DWORD dwFlags);
BOOLAPI InternetSetOptionExW(HINTERNET hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength, DWORD dwFlags);
#ifdef UNICODE
#define InternetSetOptionEx  InternetSetOptionExW
#else
#define InternetSetOptionEx  InternetSetOptionExA
#endif
BOOLAPI InternetLockRequestFile(HINTERNET hInternet, HANDLE *lphLockRequestInfo);
BOOLAPI InternetUnlockRequestFile(HANDLE hLockRequestInfo);
#define ISO_GLOBAL      0x00000001
#define ISO_REGISTRY    0x00000002
#define ISO_VALID_FLAGS (ISO_GLOBAL | ISO_REGISTRY)
#define INTERNET_OPTION_CALLBACK                1
#define INTERNET_OPTION_CONNECT_TIMEOUT         2
#define INTERNET_OPTION_CONNECT_RETRIES         3
#define INTERNET_OPTION_CONNECT_BACKOFF         4
#define INTERNET_OPTION_SEND_TIMEOUT            5
#define INTERNET_OPTION_CONTROL_SEND_TIMEOUT    INTERNET_OPTION_SEND_TIMEOUT
#define INTERNET_OPTION_RECEIVE_TIMEOUT         6
#define INTERNET_OPTION_CONTROL_RECEIVE_TIMEOUT INTERNET_OPTION_RECEIVE_TIMEOUT
#define INTERNET_OPTION_DATA_SEND_TIMEOUT       7
#define INTERNET_OPTION_DATA_RECEIVE_TIMEOUT    8
#define INTERNET_OPTION_HANDLE_TYPE             9
#define INTERNET_OPTION_LISTEN_TIMEOUT          11
#define INTERNET_OPTION_READ_BUFFER_SIZE        12
#define INTERNET_OPTION_WRITE_BUFFER_SIZE       13
#define INTERNET_OPTION_ASYNC_ID                15
#define INTERNET_OPTION_ASYNC_PRIORITY          16
#define INTERNET_OPTION_PARENT_HANDLE           21
#define INTERNET_OPTION_KEEP_CONNECTION         22
#define INTERNET_OPTION_REQUEST_FLAGS           23
#define INTERNET_OPTION_EXTENDED_ERROR          24
#define INTERNET_OPTION_OFFLINE_MODE            26
#define INTERNET_OPTION_CACHE_STREAM_HANDLE     27
#define INTERNET_OPTION_USERNAME                28
#define INTERNET_OPTION_PASSWORD                29
#define INTERNET_OPTION_ASYNC                   30
#define INTERNET_OPTION_SECURITY_FLAGS          31
#define INTERNET_OPTION_SECURITY_CERTIFICATE_STRUCT 32
#define INTERNET_OPTION_DATAFILE_NAME           33
#define INTERNET_OPTION_URL                     34
#define INTERNET_OPTION_SECURITY_CERTIFICATE    35
#define INTERNET_OPTION_SECURITY_KEY_BITNESS    36
#define INTERNET_OPTION_REFRESH                 37
#define INTERNET_OPTION_PROXY                   38
#define INTERNET_OPTION_SETTINGS_CHANGED        39
#define INTERNET_OPTION_VERSION                 40
#define INTERNET_OPTION_USER_AGENT              41
#define INTERNET_OPTION_END_BROWSER_SESSION     42
#define INTERNET_OPTION_PROXY_USERNAME          43
#define INTERNET_OPTION_PROXY_PASSWORD          44
#define INTERNET_OPTION_CONTEXT_VALUE           45
#define INTERNET_OPTION_CONNECT_LIMIT           46
#define INTERNET_OPTION_SECURITY_SELECT_CLIENT_CERT 47
#define INTERNET_OPTION_POLICY                  48
#define INTERNET_OPTION_DISCONNECTED_TIMEOUT    49
#define INTERNET_OPTION_CONNECTED_STATE         50
#define INTERNET_OPTION_IDLE_STATE              51
#define INTERNET_OPTION_OFFLINE_SEMANTICS       52
#define INTERNET_OPTION_SECONDARY_CACHE_KEY     53
#define INTERNET_OPTION_CALLBACK_FILTER         54
#define INTERNET_OPTION_CONNECT_TIME            55
#define INTERNET_OPTION_SEND_THROUGHPUT         56
#define INTERNET_OPTION_RECEIVE_THROUGHPUT      57
#define INTERNET_OPTION_REQUEST_PRIORITY        58
#define INTERNET_OPTION_HTTP_VERSION            59
#define INTERNET_OPTION_RESET_URLCACHE_SESSION  60
#define INTERNET_OPTION_ERROR_MASK              62
#define INTERNET_OPTION_FROM_CACHE_TIMEOUT      63
#define INTERNET_OPTION_BYPASS_EDITED_ENTRY     64
#define INTERNET_OPTION_HTTP_DECODING           65
#define INTERNET_OPTION_DIAGNOSTIC_SOCKET_INFO  67
#define INTERNET_OPTION_CODEPAGE                68
#define INTERNET_OPTION_CACHE_TIMESTAMPS        69
#define INTERNET_OPTION_DISABLE_AUTODIAL        70
#define INTERNET_OPTION_MAX_CONNS_PER_SERVER     73
#define INTERNET_OPTION_MAX_CONNS_PER_1_0_SERVER 74
#define INTERNET_OPTION_PER_CONNECTION_OPTION   75
#define INTERNET_OPTION_DIGEST_AUTH_UNLOAD             76
#define INTERNET_OPTION_IGNORE_OFFLINE           77
#define INTERNET_OPTION_IDENTITY                 78
#define INTERNET_OPTION_REMOVE_IDENTITY          79
#define INTERNET_OPTION_ALTER_IDENTITY           80
#define INTERNET_OPTION_SUPPRESS_BEHAVIOR        81
#define INTERNET_OPTION_AUTODIAL_MODE            82
#define INTERNET_OPTION_AUTODIAL_CONNECTION      83
#define INTERNET_OPTION_CLIENT_CERT_CONTEXT      84
#define INTERNET_OPTION_AUTH_FLAGS               85
#define INTERNET_OPTION_COOKIES_3RD_PARTY        86
#define INTERNET_OPTION_DISABLE_PASSPORT_AUTH    87
#define INTERNET_OPTION_SEND_UTF8_SERVERNAME_TO_PROXY         88
#define INTERNET_OPTION_EXEMPT_CONNECTION_LIMIT  89
#define INTERNET_OPTION_ENABLE_PASSPORT_AUTH     90
#define INTERNET_OPTION_HIBERNATE_INACTIVE_WORKER_THREADS       91
#define INTERNET_OPTION_ACTIVATE_WORKER_THREADS                 92
#define INTERNET_OPTION_RESTORE_WORKER_THREAD_DEFAULTS          93
#define INTERNET_OPTION_SOCKET_SEND_BUFFER_LENGTH               94
#define INTERNET_OPTION_PROXY_SETTINGS_CHANGED                  95
#define INTERNET_OPTION_DATAFILE_EXT                            96
#define INTERNET_OPTION_CODEPAGE_PATH                100
#define INTERNET_OPTION_CODEPAGE_EXTRA               101
#define INTERNET_OPTION_IDN                          102
#define INTERNET_OPTION_MAX_CONNS_PER_PROXY          103
#define INTERNET_OPTION_SUPPRESS_SERVER_AUTH         104
#define INTERNET_OPTION_SERVER_CERT_CHAIN_CONTEXT    105
#define INTERNET_FIRST_OPTION                   INTERNET_OPTION_CALLBACK
#define INTERNET_LAST_OPTION                    INTERNET_OPTION_SERVER_CERT_CHAIN_CONTEXT
#define INTERNET_PRIORITY_FOREGROUND            1000
#define INTERNET_HANDLE_TYPE_INTERNET           1
#define INTERNET_HANDLE_TYPE_CONNECT_FTP        2
#define INTERNET_HANDLE_TYPE_CONNECT_GOPHER     3
#define INTERNET_HANDLE_TYPE_CONNECT_HTTP       4
#define INTERNET_HANDLE_TYPE_FTP_FIND           5
#define INTERNET_HANDLE_TYPE_FTP_FIND_HTML      6
#define INTERNET_HANDLE_TYPE_FTP_FILE           7
#define INTERNET_HANDLE_TYPE_FTP_FILE_HTML      8
#define INTERNET_HANDLE_TYPE_GOPHER_FIND        9
#define INTERNET_HANDLE_TYPE_GOPHER_FIND_HTML   10
#define INTERNET_HANDLE_TYPE_GOPHER_FILE        11
#define INTERNET_HANDLE_TYPE_GOPHER_FILE_HTML   12
#define INTERNET_HANDLE_TYPE_HTTP_REQUEST       13
#define INTERNET_HANDLE_TYPE_FILE_REQUEST       14
#define AUTH_FLAG_DISABLE_NEGOTIATE             0x00000001
#define AUTH_FLAG_ENABLE_NEGOTIATE              0x00000002
#define AUTH_FLAG_DISABLE_BASIC_CLEARCHANNEL    0x00000004
#define SECURITY_FLAG_SECURE                    0x00000001
#define SECURITY_FLAG_STRENGTH_WEAK             0x10000000
#define SECURITY_FLAG_STRENGTH_MEDIUM           0x40000000
#define SECURITY_FLAG_STRENGTH_STRONG           0x20000000
#define SECURITY_FLAG_UNKNOWNBIT                0x80000000
#define SECURITY_FLAG_FORTEZZA                  0x08000000
#define SECURITY_FLAG_NORMALBITNESS             SECURITY_FLAG_STRENGTH_WEAK
#define SECURITY_FLAG_SSL                       0x00000002
#define SECURITY_FLAG_SSL3                      0x00000004
#define SECURITY_FLAG_PCT                       0x00000008
#define SECURITY_FLAG_PCT4                      0x00000010
#define SECURITY_FLAG_IETFSSL4                  0x00000020
#define SECURITY_FLAG_40BIT                     SECURITY_FLAG_STRENGTH_WEAK
#define SECURITY_FLAG_128BIT                    SECURITY_FLAG_STRENGTH_STRONG
#define SECURITY_FLAG_56BIT                     SECURITY_FLAG_STRENGTH_MEDIUM
#define SECURITY_FLAG_IGNORE_REVOCATION         0x00000080
#define SECURITY_FLAG_IGNORE_UNKNOWN_CA         0x00000100
#define SECURITY_FLAG_IGNORE_WRONG_USAGE        0x00000200
#define SECURITY_FLAG_IGNORE_CERT_CN_INVALID    INTERNET_FLAG_IGNORE_CERT_CN_INVALID
#define SECURITY_FLAG_IGNORE_CERT_DATE_INVALID  INTERNET_FLAG_IGNORE_CERT_DATE_INVALID
#define SECURITY_FLAG_IGNORE_REDIRECT_TO_HTTPS  INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTPS
#define SECURITY_FLAG_IGNORE_REDIRECT_TO_HTTP   INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTP
#define SECURITY_SET_MASK       (SECURITY_FLAG_IGNORE_REVOCATION |\
                                 SECURITY_FLAG_IGNORE_UNKNOWN_CA |\
                                 SECURITY_FLAG_IGNORE_CERT_CN_INVALID |\
                                 SECURITY_FLAG_IGNORE_CERT_DATE_INVALID |\
                                 SECURITY_FLAG_IGNORE_WRONG_USAGE)
#define AUTODIAL_MODE_NEVER                     1
#define AUTODIAL_MODE_ALWAYS                    2
#define AUTODIAL_MODE_NO_NETWORK_PRESENT        4
BOOLAPI InternetGetLastResponseInfoA(LPDWORD lpdwError, LPSTR lpszBuffer, LPDWORD lpdwBufferLength);
BOOLAPI InternetGetLastResponseInfoW(LPDWORD lpdwError, LPWSTR lpszBuffer, LPDWORD lpdwBufferLength);
#ifdef UNICODE
#define InternetGetLastResponseInfo  InternetGetLastResponseInfoW
#else
#define InternetGetLastResponseInfo  InternetGetLastResponseInfoA
#endif
typedef VOID(CALLBACK *INTERNET_STATUS_CALLBACK) (HINTERNET hInternet, DWORD_PTR dwContext, DWORD dwInternetStatus, LPVOID lpvStatusInformation, DWORD dwStatusInformationLength);
typedef INTERNET_STATUS_CALLBACK *LPINTERNET_STATUS_CALLBACK;
INTERNETAPI_(INTERNET_STATUS_CALLBACK)InternetSetStatusCallbackA(HINTERNET hInternet, INTERNET_STATUS_CALLBACK lpfnInternetCallback);
INTERNETAPI_(INTERNET_STATUS_CALLBACK)InternetSetStatusCallbackW(HINTERNET hInternet, INTERNET_STATUS_CALLBACK lpfnInternetCallback);
#ifdef UNICODE
#define InternetSetStatusCallback  InternetSetStatusCallbackW
#else
#ifdef _WINX32_
#define InternetSetStatusCallback  InternetSetStatusCallbackA
#else
INTERNETAPI_(INTERNET_STATUS_CALLBACK)InternetSetStatusCallback(HINTERNET hInternet, INTERNET_STATUS_CALLBACK lpfnInternetCallback);
#endif
#endif
#define INTERNET_STATUS_RESOLVING_NAME          10
#define INTERNET_STATUS_NAME_RESOLVED           11
#define INTERNET_STATUS_CONNECTING_TO_SERVER    20
#define INTERNET_STATUS_CONNECTED_TO_SERVER     21
#define INTERNET_STATUS_SENDING_REQUEST         30
#define INTERNET_STATUS_REQUEST_SENT            31
#define INTERNET_STATUS_RECEIVING_RESPONSE      40
#define INTERNET_STATUS_RESPONSE_RECEIVED       41
#define INTERNET_STATUS_CTL_RESPONSE_RECEIVED   42
#define INTERNET_STATUS_PREFETCH                43
#define INTERNET_STATUS_CLOSING_CONNECTION      50
#define INTERNET_STATUS_CONNECTION_CLOSED       51
#define INTERNET_STATUS_HANDLE_CREATED          60
#define INTERNET_STATUS_HANDLE_CLOSING          70
#define INTERNET_STATUS_DETECTING_PROXY         80
#define INTERNET_STATUS_REQUEST_COMPLETE        100
#define INTERNET_STATUS_REDIRECT                110
#define INTERNET_STATUS_INTERMEDIATE_RESPONSE   120
#define INTERNET_STATUS_USER_INPUT_REQUIRED     140
#define INTERNET_STATUS_STATE_CHANGE            200
#define INTERNET_STATUS_COOKIE_SENT             320
#define INTERNET_STATUS_COOKIE_RECEIVED         321
#define INTERNET_STATUS_PRIVACY_IMPACTED        324
#define INTERNET_STATUS_P3P_HEADER              325
#define INTERNET_STATUS_P3P_POLICYREF           326
#define INTERNET_STATUS_COOKIE_HISTORY          327
#define INTERNET_STATE_CONNECTED                0x00000001
#define INTERNET_STATE_DISCONNECTED             0x00000002
#define INTERNET_STATE_DISCONNECTED_BY_USER     0x00000010
#define INTERNET_STATE_IDLE                     0x00000100
#define INTERNET_STATE_BUSY                     0x00000200
typedef enum
{
	COOKIE_STATE_UNKNOWN = 0x0,
	COOKIE_STATE_ACCEPT = 0x1,
	COOKIE_STATE_PROMPT = 0x2,
	COOKIE_STATE_LEASH = 0x3,
	COOKIE_STATE_DOWNGRADE = 0x4,
	COOKIE_STATE_REJECT = 0x5,
	COOKIE_STATE_MAX = COOKIE_STATE_REJECT,
} InternetCookieState;
typedef struct
{
	int cSession;
	int cPersistent;
	int cAccepted;
	int cLeashed;
	int cDowngraded;
	int cBlocked;
	const char *pszLocation;
} IncomingCookieState;
typedef struct
{
	int cSent;
	int cSuppressed;
	const char *pszLocation;
} OutgoingCookieState;
typedef struct
{
	BOOL fAccepted;
	BOOL fLeashed;
	BOOL fDowngraded;
	BOOL fRejected;
} InternetCookieHistory;
typedef struct
{
	DWORD dwCookieState;
	BOOL fAllowSession;
} CookieDecision;
#define INTERNET_INVALID_STATUS_CALLBACK        ((INTERNET_STATUS_CALLBACK)(-1L))
#define FTP_TRANSFER_TYPE_UNKNOWN   0x00000000
#define FTP_TRANSFER_TYPE_ASCII     0x00000001
#define FTP_TRANSFER_TYPE_BINARY    0x00000002
#define FTP_TRANSFER_TYPE_MASK      (FTP_TRANSFER_TYPE_ASCII | FTP_TRANSFER_TYPE_BINARY)
INTERNETAPI_(HINTERNET)FtpFindFirstFileA(HINTERNET hConnect, LPCSTR lpszSearchFile, LPWIN32_FIND_DATAA lpFindFileData, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(HINTERNET)FtpFindFirstFileW(HINTERNET hConnect, LPCWSTR lpszSearchFile, LPWIN32_FIND_DATAW lpFindFileData, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define FtpFindFirstFile  FtpFindFirstFileW
#else
#define FtpFindFirstFile  FtpFindFirstFileA
#endif
BOOLAPI FtpGetFileA(HINTERNET hConnect, LPCSTR lpszRemoteFile, LPCSTR lpszNewFile, BOOL fFailIfExists, DWORD dwFlagsAndAttributes, DWORD dwFlags, DWORD_PTR dwContext);
BOOLAPI FtpGetFileW(HINTERNET hConnect, LPCWSTR lpszRemoteFile, LPCWSTR lpszNewFile, BOOL fFailIfExists, DWORD dwFlagsAndAttributes, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define FtpGetFile  FtpGetFileW
#else
#define FtpGetFile  FtpGetFileA
#endif
BOOLAPI FtpPutFileA(HINTERNET hConnect, LPCSTR lpszLocalFile, LPCSTR lpszNewRemoteFile, DWORD dwFlags, DWORD_PTR dwContext);
BOOLAPI FtpPutFileW(HINTERNET hConnect, LPCWSTR lpszLocalFile, LPCWSTR lpszNewRemoteFile, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define FtpPutFile  FtpPutFileW
#else
#define FtpPutFile  FtpPutFileA
#endif
BOOLAPI FtpGetFileEx(HINTERNET hFtpSession, LPCSTR lpszRemoteFile, LPCWSTR lpszNewFile, BOOL fFailIfExists, DWORD dwFlagsAndAttributes, DWORD dwFlags, DWORD_PTR dwContext);
BOOLAPI FtpPutFileEx(HINTERNET hFtpSession, LPCWSTR lpszLocalFile, LPCSTR lpszNewRemoteFile, DWORD dwFlags, DWORD_PTR dwContext);
BOOLAPI FtpDeleteFileA(HINTERNET hConnect, LPCSTR lpszFileName);
BOOLAPI FtpDeleteFileW(HINTERNET hConnect, LPCWSTR lpszFileName);
#ifdef UNICODE
#define FtpDeleteFile  FtpDeleteFileW
#else
#define FtpDeleteFile  FtpDeleteFileA
#endif
BOOLAPI FtpRenameFileA(HINTERNET hConnect, LPCSTR lpszExisting, LPCSTR lpszNew);
BOOLAPI FtpRenameFileW(HINTERNET hConnect, LPCWSTR lpszExisting, LPCWSTR lpszNew);
#ifdef UNICODE
#define FtpRenameFile  FtpRenameFileW
#else
#define FtpRenameFile  FtpRenameFileA
#endif
INTERNETAPI_(HINTERNET)FtpOpenFileA(HINTERNET hConnect, LPCSTR lpszFileName, DWORD dwAccess, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(HINTERNET)FtpOpenFileW(HINTERNET hConnect, LPCWSTR lpszFileName, DWORD dwAccess, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define FtpOpenFile  FtpOpenFileW
#else
#define FtpOpenFile  FtpOpenFileA
#endif
BOOLAPI FtpCreateDirectoryA(HINTERNET hConnect, LPCSTR lpszDirectory);
BOOLAPI FtpCreateDirectoryW(HINTERNET hConnect, LPCWSTR lpszDirectory);
#ifdef UNICODE
#define FtpCreateDirectory  FtpCreateDirectoryW
#else
#define FtpCreateDirectory  FtpCreateDirectoryA
#endif
BOOLAPI FtpRemoveDirectoryA(HINTERNET hConnect, LPCSTR lpszDirectory);
BOOLAPI FtpRemoveDirectoryW(HINTERNET hConnect, LPCWSTR lpszDirectory);
#ifdef UNICODE
#define FtpRemoveDirectory  FtpRemoveDirectoryW
#else
#define FtpRemoveDirectory  FtpRemoveDirectoryA
#endif
BOOLAPI FtpSetCurrentDirectoryA(HINTERNET hConnect, LPCSTR lpszDirectory);
BOOLAPI FtpSetCurrentDirectoryW(HINTERNET hConnect, LPCWSTR lpszDirectory);
#ifdef UNICODE
#define FtpSetCurrentDirectory  FtpSetCurrentDirectoryW
#else
#define FtpSetCurrentDirectory  FtpSetCurrentDirectoryA
#endif
BOOLAPI FtpGetCurrentDirectoryA(HINTERNET hConnect, LPSTR lpszCurrentDirectory, LPDWORD lpdwCurrentDirectory);
BOOLAPI FtpGetCurrentDirectoryW(HINTERNET hConnect, LPWSTR lpszCurrentDirectory, LPDWORD lpdwCurrentDirectory);
#ifdef UNICODE
#define FtpGetCurrentDirectory  FtpGetCurrentDirectoryW
#else
#define FtpGetCurrentDirectory  FtpGetCurrentDirectoryA
#endif
BOOLAPI FtpCommandA(HINTERNET hConnect, BOOL fExpectResponse, DWORD dwFlags, LPCSTR lpszCommand, DWORD_PTR dwContext, HINTERNET *phFtpCommand);
BOOLAPI FtpCommandW(HINTERNET hConnect, BOOL fExpectResponse, DWORD dwFlags, LPCWSTR lpszCommand, DWORD_PTR dwContext, HINTERNET *phFtpCommand);
#ifdef UNICODE
#define FtpCommand  FtpCommandW
#else
#define FtpCommand  FtpCommandA
#endif
INTERNETAPI_(DWORD)FtpGetFileSize(HINTERNET hFile, LPDWORD lpdwFileSizeHigh);
#define MAX_GOPHER_DISPLAY_TEXT     128
#define MAX_GOPHER_SELECTOR_TEXT    256
#define MAX_GOPHER_HOST_NAME        INTERNET_MAX_HOST_NAME_LENGTH
#define MAX_GOPHER_LOCATOR_LENGTH   (1                                  \
                                    + MAX_GOPHER_DISPLAY_TEXT           \
                                    + 1                                 \
                                    + MAX_GOPHER_SELECTOR_TEXT          \
                                    + 1                                 \
                                    + MAX_GOPHER_HOST_NAME              \
                                    + 1                                 \
                                    + INTERNET_MAX_PORT_NUMBER_LENGTH   \
                                    + 1                                 \
                                    + 1                                 \
                                    + 2                                 \
                                    )
typedef struct
{
	CHAR DisplayString[MAX_GOPHER_DISPLAY_TEXT + 1];
	DWORD GopherType;
	DWORD SizeLow;
	DWORD SizeHigh;
	FILETIME LastModificationTime;
	CHAR Locator[MAX_GOPHER_LOCATOR_LENGTH + 1];
} GOPHER_FIND_DATAA, *LPGOPHER_FIND_DATAA;
typedef struct
{
	WCHAR DisplayString[MAX_GOPHER_DISPLAY_TEXT + 1];
	DWORD GopherType;
	DWORD SizeLow;
	DWORD SizeHigh;
	FILETIME LastModificationTime;
	WCHAR Locator[MAX_GOPHER_LOCATOR_LENGTH + 1];
} GOPHER_FIND_DATAW, *LPGOPHER_FIND_DATAW;
#ifdef UNICODE
typedef GOPHER_FIND_DATAW GOPHER_FIND_DATA;
typedef LPGOPHER_FIND_DATAW LPGOPHER_FIND_DATA;
#else
typedef GOPHER_FIND_DATAA GOPHER_FIND_DATA;
typedef LPGOPHER_FIND_DATAA LPGOPHER_FIND_DATA;
#endif
#define GOPHER_TYPE_TEXT_FILE       0x00000001
#define GOPHER_TYPE_DIRECTORY       0x00000002
#define GOPHER_TYPE_CSO             0x00000004
#define GOPHER_TYPE_ERROR           0x00000008
#define GOPHER_TYPE_MAC_BINHEX      0x00000010
#define GOPHER_TYPE_DOS_ARCHIVE     0x00000020
#define GOPHER_TYPE_UNIX_UUENCODED  0x00000040
#define GOPHER_TYPE_INDEX_SERVER    0x00000080
#define GOPHER_TYPE_TELNET          0x00000100
#define GOPHER_TYPE_BINARY          0x00000200
#define GOPHER_TYPE_REDUNDANT       0x00000400
#define GOPHER_TYPE_TN3270          0x00000800
#define GOPHER_TYPE_GIF             0x00001000
#define GOPHER_TYPE_IMAGE           0x00002000
#define GOPHER_TYPE_BITMAP          0x00004000
#define GOPHER_TYPE_MOVIE           0x00008000
#define GOPHER_TYPE_SOUND           0x00010000
#define GOPHER_TYPE_HTML            0x00020000
#define GOPHER_TYPE_PDF             0x00040000
#define GOPHER_TYPE_CALENDAR        0x00080000
#define GOPHER_TYPE_INLINE          0x00100000
#define GOPHER_TYPE_UNKNOWN         0x20000000
#define GOPHER_TYPE_ASK             0x40000000
#define GOPHER_TYPE_GOPHER_PLUS     0x80000000
#define IS_GOPHER_FILE(type)            (BOOL)(((type) & GOPHER_TYPE_FILE_MASK) ? TRUE : FALSE)
#define IS_GOPHER_DIRECTORY(type)       (BOOL)(((type) & GOPHER_TYPE_DIRECTORY) ? TRUE : FALSE)
#define IS_GOPHER_PHONE_SERVER(type)    (BOOL)(((type) & GOPHER_TYPE_CSO) ? TRUE : FALSE)
#define IS_GOPHER_ERROR(type)           (BOOL)(((type) & GOPHER_TYPE_ERROR) ? TRUE : FALSE)
#define IS_GOPHER_INDEX_SERVER(type)    (BOOL)(((type) & GOPHER_TYPE_INDEX_SERVER) ? TRUE : FALSE)
#define IS_GOPHER_TELNET_SESSION(type)  (BOOL)(((type) & GOPHER_TYPE_TELNET) ? TRUE : FALSE)
#define IS_GOPHER_BACKUP_SERVER(type)   (BOOL)(((type) & GOPHER_TYPE_REDUNDANT) ? TRUE : FALSE)
#define IS_GOPHER_TN3270_SESSION(type)  (BOOL)(((type) & GOPHER_TYPE_TN3270) ? TRUE : FALSE)
#define IS_GOPHER_ASK(type)             (BOOL)(((type) & GOPHER_TYPE_ASK) ? TRUE : FALSE)
#define IS_GOPHER_PLUS(type)            (BOOL)(((type) & GOPHER_TYPE_GOPHER_PLUS) ? TRUE : FALSE)
#define IS_GOPHER_TYPE_KNOWN(type)      (BOOL)(((type) & GOPHER_TYPE_UNKNOWN) ? FALSE : TRUE)
#define GOPHER_TYPE_FILE_MASK       (GOPHER_TYPE_TEXT_FILE          \
                                    | GOPHER_TYPE_MAC_BINHEX        \
                                    | GOPHER_TYPE_DOS_ARCHIVE       \
                                    | GOPHER_TYPE_UNIX_UUENCODED    \
                                    | GOPHER_TYPE_BINARY            \
                                    | GOPHER_TYPE_GIF               \
                                    | GOPHER_TYPE_IMAGE             \
                                    | GOPHER_TYPE_BITMAP            \
                                    | GOPHER_TYPE_MOVIE             \
                                    | GOPHER_TYPE_SOUND             \
                                    | GOPHER_TYPE_HTML              \
                                    | GOPHER_TYPE_PDF               \
                                    | GOPHER_TYPE_CALENDAR          \
                                    | GOPHER_TYPE_INLINE            \
                                    )
typedef struct
{
	LPCTSTR Comment;
	LPCTSTR EmailAddress;
} GOPHER_ADMIN_ATTRIBUTE_TYPE, *LPGOPHER_ADMIN_ATTRIBUTE_TYPE;
typedef struct
{
	FILETIME DateAndTime;
} GOPHER_MOD_DATE_ATTRIBUTE_TYPE, *LPGOPHER_MOD_DATE_ATTRIBUTE_TYPE;
typedef struct
{
	DWORD Ttl;
} GOPHER_TTL_ATTRIBUTE_TYPE, *LPGOPHER_TTL_ATTRIBUTE_TYPE;
typedef struct
{
	INT Score;
} GOPHER_SCORE_ATTRIBUTE_TYPE, *LPGOPHER_SCORE_ATTRIBUTE_TYPE;
typedef struct
{
	INT LowerBound;
	INT UpperBound;
} GOPHER_SCORE_RANGE_ATTRIBUTE_TYPE, *LPGOPHER_SCORE_RANGE_ATTRIBUTE_TYPE;
typedef struct
{
	LPCTSTR Site;
} GOPHER_SITE_ATTRIBUTE_TYPE, *LPGOPHER_SITE_ATTRIBUTE_TYPE;
typedef struct
{
	LPCTSTR Organization;
} GOPHER_ORGANIZATION_ATTRIBUTE_TYPE, *LPGOPHER_ORGANIZATION_ATTRIBUTE_TYPE;
typedef struct
{
	LPCTSTR Location;
} GOPHER_LOCATION_ATTRIBUTE_TYPE, *LPGOPHER_LOCATION_ATTRIBUTE_TYPE;
typedef struct
{
	INT DegreesNorth;
	INT MinutesNorth;
	INT SecondsNorth;
	INT DegreesEast;
	INT MinutesEast;
	INT SecondsEast;
} GOPHER_GEOGRAPHICAL_LOCATION_ATTRIBUTE_TYPE, *LPGOPHER_GEOGRAPHICAL_LOCATION_ATTRIBUTE_TYPE;
typedef struct
{
	INT Zone;
} GOPHER_TIMEZONE_ATTRIBUTE_TYPE, *LPGOPHER_TIMEZONE_ATTRIBUTE_TYPE;
typedef struct
{
	LPCTSTR Provider;
} GOPHER_PROVIDER_ATTRIBUTE_TYPE, *LPGOPHER_PROVIDER_ATTRIBUTE_TYPE;
typedef struct
{
	LPCTSTR Version;
} GOPHER_VERSION_ATTRIBUTE_TYPE, *LPGOPHER_VERSION_ATTRIBUTE_TYPE;
typedef struct
{
	LPCTSTR ShortAbstract;
	LPCTSTR AbstractFile;
} GOPHER_ABSTRACT_ATTRIBUTE_TYPE, *LPGOPHER_ABSTRACT_ATTRIBUTE_TYPE;
typedef struct
{
	LPCTSTR ContentType;
	LPCTSTR Language;
	DWORD Size;
} GOPHER_VIEW_ATTRIBUTE_TYPE, *LPGOPHER_VIEW_ATTRIBUTE_TYPE;
typedef struct
{
	BOOL TreeWalk;
} GOPHER_VERONICA_ATTRIBUTE_TYPE, *LPGOPHER_VERONICA_ATTRIBUTE_TYPE;
typedef struct
{
	LPCTSTR QuestionType;
	LPCTSTR QuestionText;
} GOPHER_ASK_ATTRIBUTE_TYPE, *LPGOPHER_ASK_ATTRIBUTE_TYPE;
typedef struct
{
	LPCTSTR Text;
} GOPHER_UNKNOWN_ATTRIBUTE_TYPE, *LPGOPHER_UNKNOWN_ATTRIBUTE_TYPE;
typedef struct
{
	DWORD CategoryId;
	DWORD AttributeId;
	union
	{
		GOPHER_ADMIN_ATTRIBUTE_TYPE Admin;
		GOPHER_MOD_DATE_ATTRIBUTE_TYPE ModDate;
		GOPHER_TTL_ATTRIBUTE_TYPE Ttl;
		GOPHER_SCORE_ATTRIBUTE_TYPE Score;
		GOPHER_SCORE_RANGE_ATTRIBUTE_TYPE ScoreRange;
		GOPHER_SITE_ATTRIBUTE_TYPE Site;
		GOPHER_ORGANIZATION_ATTRIBUTE_TYPE Organization;
		GOPHER_LOCATION_ATTRIBUTE_TYPE Location;
		GOPHER_GEOGRAPHICAL_LOCATION_ATTRIBUTE_TYPE GeographicalLocation;
		GOPHER_TIMEZONE_ATTRIBUTE_TYPE TimeZone;
		GOPHER_PROVIDER_ATTRIBUTE_TYPE Provider;
		GOPHER_VERSION_ATTRIBUTE_TYPE Version;
		GOPHER_ABSTRACT_ATTRIBUTE_TYPE Abstract;
		GOPHER_VIEW_ATTRIBUTE_TYPE View;
		GOPHER_VERONICA_ATTRIBUTE_TYPE Veronica;
		GOPHER_ASK_ATTRIBUTE_TYPE Ask;
		GOPHER_UNKNOWN_ATTRIBUTE_TYPE Unknown;
	} AttributeType;
} GOPHER_ATTRIBUTE_TYPE, *LPGOPHER_ATTRIBUTE_TYPE;
#define MAX_GOPHER_CATEGORY_NAME    128
#define MAX_GOPHER_ATTRIBUTE_NAME   128
#define MIN_GOPHER_ATTRIBUTE_LENGTH 256
#define GOPHER_INFO_CATEGORY        TEXT("+INFO")
#define GOPHER_ADMIN_CATEGORY       TEXT("+ADMIN")
#define GOPHER_VIEWS_CATEGORY       TEXT("+VIEWS")
#define GOPHER_ABSTRACT_CATEGORY    TEXT("+ABSTRACT")
#define GOPHER_VERONICA_CATEGORY    TEXT("+VERONICA")
#define GOPHER_ADMIN_ATTRIBUTE      TEXT("Admin")
#define GOPHER_MOD_DATE_ATTRIBUTE   TEXT("Mod-Date")
#define GOPHER_TTL_ATTRIBUTE        TEXT("TTL")
#define GOPHER_SCORE_ATTRIBUTE      TEXT("Score")
#define GOPHER_RANGE_ATTRIBUTE      TEXT("Score-range")
#define GOPHER_SITE_ATTRIBUTE       TEXT("Site")
#define GOPHER_ORG_ATTRIBUTE        TEXT("Org")
#define GOPHER_LOCATION_ATTRIBUTE   TEXT("Loc")
#define GOPHER_GEOG_ATTRIBUTE       TEXT("Geog")
#define GOPHER_TIMEZONE_ATTRIBUTE   TEXT("TZ")
#define GOPHER_PROVIDER_ATTRIBUTE   TEXT("Provider")
#define GOPHER_VERSION_ATTRIBUTE    TEXT("Version")
#define GOPHER_ABSTRACT_ATTRIBUTE   TEXT("Abstract")
#define GOPHER_VIEW_ATTRIBUTE       TEXT("View")
#define GOPHER_TREEWALK_ATTRIBUTE   TEXT("treewalk")
#define GOPHER_ATTRIBUTE_ID_BASE        0xabcccc00
#define GOPHER_CATEGORY_ID_ALL          (GOPHER_ATTRIBUTE_ID_BASE + 1)
#define GOPHER_CATEGORY_ID_INFO         (GOPHER_ATTRIBUTE_ID_BASE + 2)
#define GOPHER_CATEGORY_ID_ADMIN        (GOPHER_ATTRIBUTE_ID_BASE + 3)
#define GOPHER_CATEGORY_ID_VIEWS        (GOPHER_ATTRIBUTE_ID_BASE + 4)
#define GOPHER_CATEGORY_ID_ABSTRACT     (GOPHER_ATTRIBUTE_ID_BASE + 5)
#define GOPHER_CATEGORY_ID_VERONICA     (GOPHER_ATTRIBUTE_ID_BASE + 6)
#define GOPHER_CATEGORY_ID_ASK          (GOPHER_ATTRIBUTE_ID_BASE + 7)
#define GOPHER_CATEGORY_ID_UNKNOWN      (GOPHER_ATTRIBUTE_ID_BASE + 8)
#define GOPHER_ATTRIBUTE_ID_ALL         (GOPHER_ATTRIBUTE_ID_BASE + 9)
#define GOPHER_ATTRIBUTE_ID_ADMIN       (GOPHER_ATTRIBUTE_ID_BASE + 10)
#define GOPHER_ATTRIBUTE_ID_MOD_DATE    (GOPHER_ATTRIBUTE_ID_BASE + 11)
#define GOPHER_ATTRIBUTE_ID_TTL         (GOPHER_ATTRIBUTE_ID_BASE + 12)
#define GOPHER_ATTRIBUTE_ID_SCORE       (GOPHER_ATTRIBUTE_ID_BASE + 13)
#define GOPHER_ATTRIBUTE_ID_RANGE       (GOPHER_ATTRIBUTE_ID_BASE + 14)
#define GOPHER_ATTRIBUTE_ID_SITE        (GOPHER_ATTRIBUTE_ID_BASE + 15)
#define GOPHER_ATTRIBUTE_ID_ORG         (GOPHER_ATTRIBUTE_ID_BASE + 16)
#define GOPHER_ATTRIBUTE_ID_LOCATION    (GOPHER_ATTRIBUTE_ID_BASE + 17)
#define GOPHER_ATTRIBUTE_ID_GEOG        (GOPHER_ATTRIBUTE_ID_BASE + 18)
#define GOPHER_ATTRIBUTE_ID_TIMEZONE    (GOPHER_ATTRIBUTE_ID_BASE + 19)
#define GOPHER_ATTRIBUTE_ID_PROVIDER    (GOPHER_ATTRIBUTE_ID_BASE + 20)
#define GOPHER_ATTRIBUTE_ID_VERSION     (GOPHER_ATTRIBUTE_ID_BASE + 21)
#define GOPHER_ATTRIBUTE_ID_ABSTRACT    (GOPHER_ATTRIBUTE_ID_BASE + 22)
#define GOPHER_ATTRIBUTE_ID_VIEW        (GOPHER_ATTRIBUTE_ID_BASE + 23)
#define GOPHER_ATTRIBUTE_ID_TREEWALK    (GOPHER_ATTRIBUTE_ID_BASE + 24)
#define GOPHER_ATTRIBUTE_ID_UNKNOWN     (GOPHER_ATTRIBUTE_ID_BASE + 25)
BOOLAPI GopherCreateLocatorA(LPCSTR lpszHost, INTERNET_PORT nServerPort, LPCSTR lpszDisplayString, LPCSTR lpszSelectorString, DWORD dwGopherType, LPSTR lpszLocator, LPDWORD lpdwBufferLength);
BOOLAPI GopherCreateLocatorW(LPCWSTR lpszHost, INTERNET_PORT nServerPort, LPCWSTR lpszDisplayString, LPCWSTR lpszSelectorString, DWORD dwGopherType, LPWSTR lpszLocator, LPDWORD lpdwBufferLength);
#ifdef UNICODE
#define GopherCreateLocator  GopherCreateLocatorW
#else
#define GopherCreateLocator  GopherCreateLocatorA
#endif
BOOLAPI GopherGetLocatorTypeA(LPCSTR lpszLocator, LPDWORD lpdwGopherType);
BOOLAPI GopherGetLocatorTypeW(LPCWSTR lpszLocator, LPDWORD lpdwGopherType);
#ifdef UNICODE
#define GopherGetLocatorType  GopherGetLocatorTypeW
#else
#define GopherGetLocatorType  GopherGetLocatorTypeA
#endif
INTERNETAPI_(HINTERNET)GopherFindFirstFileA(HINTERNET hConnect, LPCSTR lpszLocator, LPCSTR lpszSearchString, LPGOPHER_FIND_DATAA lpFindData, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(HINTERNET)GopherFindFirstFileW(HINTERNET hConnect, LPCWSTR lpszLocator, LPCWSTR lpszSearchString, LPGOPHER_FIND_DATAW lpFindData, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define GopherFindFirstFile  GopherFindFirstFileW
#else
#define GopherFindFirstFile  GopherFindFirstFileA
#endif
INTERNETAPI_(HINTERNET)GopherOpenFileA(HINTERNET hConnect, LPCSTR lpszLocator, LPCSTR lpszView, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(HINTERNET)GopherOpenFileW(HINTERNET hConnect, LPCWSTR lpszLocator, LPCWSTR lpszView, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define GopherOpenFile  GopherOpenFileW
#else
#define GopherOpenFile  GopherOpenFileA
#endif
typedef BOOL(CALLBACK *GOPHER_ATTRIBUTE_ENUMERATOR) (LPGOPHER_ATTRIBUTE_TYPE lpAttributeInfo, DWORD dwError);
BOOLAPI GopherGetAttributeA(HINTERNET hConnect, LPCSTR lpszLocator, LPCSTR lpszAttributeName, LPBYTE lpBuffer, DWORD dwBufferLength, LPDWORD lpdwCharactersReturned, GOPHER_ATTRIBUTE_ENUMERATOR lpfnEnumerator, DWORD_PTR dwContext);
BOOLAPI GopherGetAttributeW(HINTERNET hConnect, LPCWSTR lpszLocator, LPCWSTR lpszAttributeName, LPBYTE lpBuffer, DWORD dwBufferLength, LPDWORD lpdwCharactersReturned, GOPHER_ATTRIBUTE_ENUMERATOR lpfnEnumerator, DWORD_PTR dwContext);
#ifdef UNICODE
#define GopherGetAttribute  GopherGetAttributeW
#else
#define GopherGetAttribute  GopherGetAttributeA
#endif
#define HTTP_MAJOR_VERSION      1
#define HTTP_MINOR_VERSION      0
#define HTTP_VERSIONA           "HTTP/1.0"
#define HTTP_VERSIONW           L"HTTP/1.0"
#ifdef UNICODE
#define HTTP_VERSION            HTTP_VERSIONW
#else
#define HTTP_VERSION            HTTP_VERSIONA
#endif
#define HTTP_QUERY_MIME_VERSION                 0
#define HTTP_QUERY_CONTENT_TYPE                 1
#define HTTP_QUERY_CONTENT_TRANSFER_ENCODING    2
#define HTTP_QUERY_CONTENT_ID                   3
#define HTTP_QUERY_CONTENT_DESCRIPTION          4
#define HTTP_QUERY_CONTENT_LENGTH               5
#define HTTP_QUERY_CONTENT_LANGUAGE             6
#define HTTP_QUERY_ALLOW                        7
#define HTTP_QUERY_PUBLIC                       8
#define HTTP_QUERY_DATE                         9
#define HTTP_QUERY_EXPIRES                      10
#define HTTP_QUERY_LAST_MODIFIED                11
#define HTTP_QUERY_MESSAGE_ID                   12
#define HTTP_QUERY_URI                          13
#define HTTP_QUERY_DERIVED_FROM                 14
#define HTTP_QUERY_COST                         15
#define HTTP_QUERY_LINK                         16
#define HTTP_QUERY_PRAGMA                       17
#define HTTP_QUERY_VERSION                      18
#define HTTP_QUERY_STATUS_CODE                  19
#define HTTP_QUERY_STATUS_TEXT                  20
#define HTTP_QUERY_RAW_HEADERS                  21
#define HTTP_QUERY_RAW_HEADERS_CRLF             22
#define HTTP_QUERY_CONNECTION                   23
#define HTTP_QUERY_ACCEPT                       24
#define HTTP_QUERY_ACCEPT_CHARSET               25
#define HTTP_QUERY_ACCEPT_ENCODING              26
#define HTTP_QUERY_ACCEPT_LANGUAGE              27
#define HTTP_QUERY_AUTHORIZATION                28
#define HTTP_QUERY_CONTENT_ENCODING             29
#define HTTP_QUERY_FORWARDED                    30
#define HTTP_QUERY_FROM                         31
#define HTTP_QUERY_IF_MODIFIED_SINCE            32
#define HTTP_QUERY_LOCATION                     33
#define HTTP_QUERY_ORIG_URI                     34
#define HTTP_QUERY_REFERER                      35
#define HTTP_QUERY_RETRY_AFTER                  36
#define HTTP_QUERY_SERVER                       37
#define HTTP_QUERY_TITLE                        38
#define HTTP_QUERY_USER_AGENT                   39
#define HTTP_QUERY_WWW_AUTHENTICATE             40
#define HTTP_QUERY_PROXY_AUTHENTICATE           41
#define HTTP_QUERY_ACCEPT_RANGES                42
#define HTTP_QUERY_SET_COOKIE                   43
#define HTTP_QUERY_COOKIE                       44
#define HTTP_QUERY_REQUEST_METHOD               45
#define HTTP_QUERY_REFRESH                      46
#define HTTP_QUERY_CONTENT_DISPOSITION          47
#define HTTP_QUERY_AGE                          48
#define HTTP_QUERY_CACHE_CONTROL                49
#define HTTP_QUERY_CONTENT_BASE                 50
#define HTTP_QUERY_CONTENT_LOCATION             51
#define HTTP_QUERY_CONTENT_MD5                  52
#define HTTP_QUERY_CONTENT_RANGE                53
#define HTTP_QUERY_ETAG                         54
#define HTTP_QUERY_HOST                         55
#define HTTP_QUERY_IF_MATCH                     56
#define HTTP_QUERY_IF_NONE_MATCH                57
#define HTTP_QUERY_IF_RANGE                     58
#define HTTP_QUERY_IF_UNMODIFIED_SINCE          59
#define HTTP_QUERY_MAX_FORWARDS                 60
#define HTTP_QUERY_PROXY_AUTHORIZATION          61
#define HTTP_QUERY_RANGE                        62
#define HTTP_QUERY_TRANSFER_ENCODING            63
#define HTTP_QUERY_UPGRADE                      64
#define HTTP_QUERY_VARY                         65
#define HTTP_QUERY_VIA                          66
#define HTTP_QUERY_WARNING                      67
#define HTTP_QUERY_EXPECT                       68
#define HTTP_QUERY_PROXY_CONNECTION             69
#define HTTP_QUERY_UNLESS_MODIFIED_SINCE        70
#define HTTP_QUERY_ECHO_REQUEST                 71
#define HTTP_QUERY_ECHO_REPLY                   72
#define HTTP_QUERY_ECHO_HEADERS                 73
#define HTTP_QUERY_ECHO_HEADERS_CRLF            74
#define HTTP_QUERY_PROXY_SUPPORT                75
#define HTTP_QUERY_AUTHENTICATION_INFO          76
#define HTTP_QUERY_PASSPORT_URLS                77
#define HTTP_QUERY_PASSPORT_CONFIG              78
#define HTTP_QUERY_MAX                          78
#define HTTP_QUERY_CUSTOM                       65535
#define HTTP_QUERY_FLAG_REQUEST_HEADERS         0x80000000
#define HTTP_QUERY_FLAG_SYSTEMTIME              0x40000000
#define HTTP_QUERY_FLAG_NUMBER                  0x20000000
#define HTTP_QUERY_FLAG_COALESCE                0x10000000
#define HTTP_QUERY_FLAG_NUMBER64                0x08000000
#define HTTP_QUERY_MODIFIER_FLAGS_MASK          (HTTP_QUERY_FLAG_REQUEST_HEADERS    \
                                                | HTTP_QUERY_FLAG_SYSTEMTIME        \
                                                | HTTP_QUERY_FLAG_NUMBER            \
                                                | HTTP_QUERY_FLAG_COALESCE          \
                                                | HTTP_QUERY_FLAG_NUMBER64          \
                                                )
#define HTTP_QUERY_HEADER_MASK                  (~HTTP_QUERY_MODIFIER_FLAGS_MASK)
#define HTTP_STATUS_CONTINUE            100
#define HTTP_STATUS_SWITCH_PROTOCOLS    101
#define HTTP_STATUS_OK                  200
#define HTTP_STATUS_CREATED             201
#define HTTP_STATUS_ACCEPTED            202
#define HTTP_STATUS_PARTIAL             203
#define HTTP_STATUS_NO_CONTENT          204
#define HTTP_STATUS_RESET_CONTENT       205
#define HTTP_STATUS_PARTIAL_CONTENT     206
#define HTTP_STATUS_AMBIGUOUS           300
#define HTTP_STATUS_MOVED               301
#define HTTP_STATUS_REDIRECT            302
#define HTTP_STATUS_REDIRECT_METHOD     303
#define HTTP_STATUS_NOT_MODIFIED        304
#define HTTP_STATUS_USE_PROXY           305
#define HTTP_STATUS_REDIRECT_KEEP_VERB  307
#define HTTP_STATUS_BAD_REQUEST         400
#define HTTP_STATUS_DENIED              401
#define HTTP_STATUS_PAYMENT_REQ         402
#define HTTP_STATUS_FORBIDDEN           403
#define HTTP_STATUS_NOT_FOUND           404
#define HTTP_STATUS_BAD_METHOD          405
#define HTTP_STATUS_NONE_ACCEPTABLE     406
#define HTTP_STATUS_PROXY_AUTH_REQ      407
#define HTTP_STATUS_REQUEST_TIMEOUT     408
#define HTTP_STATUS_CONFLICT            409
#define HTTP_STATUS_GONE                410
#define HTTP_STATUS_LENGTH_REQUIRED     411
#define HTTP_STATUS_PRECOND_FAILED      412
#define HTTP_STATUS_REQUEST_TOO_LARGE   413
#define HTTP_STATUS_URI_TOO_LONG        414
#define HTTP_STATUS_UNSUPPORTED_MEDIA   415
#define HTTP_STATUS_RETRY_WITH          449
#define HTTP_STATUS_SERVER_ERROR        500
#define HTTP_STATUS_NOT_SUPPORTED       501
#define HTTP_STATUS_BAD_GATEWAY         502
#define HTTP_STATUS_SERVICE_UNAVAIL     503
#define HTTP_STATUS_GATEWAY_TIMEOUT     504
#define HTTP_STATUS_VERSION_NOT_SUP     505
#define HTTP_STATUS_FIRST               HTTP_STATUS_CONTINUE
#define HTTP_STATUS_LAST                HTTP_STATUS_VERSION_NOT_SUP
INTERNETAPI_(HINTERNET)HttpOpenRequestA(HINTERNET hConnect, LPCSTR lpszVerb, LPCSTR lpszObjectName, LPCSTR lpszVersion, LPCSTR lpszReferrer, LPCSTR FAR * lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(HINTERNET)HttpOpenRequestW(HINTERNET hConnect, LPCWSTR lpszVerb, LPCWSTR lpszObjectName, LPCWSTR lpszVersion, LPCWSTR lpszReferrer, LPCWSTR FAR * lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define HttpOpenRequest  HttpOpenRequestW
#else
#define HttpOpenRequest  HttpOpenRequestA
#endif
BOOLAPI HttpAddRequestHeadersA(HINTERNET hRequest, LPCSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwModifiers);
BOOLAPI HttpAddRequestHeadersW(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwModifiers);
#ifdef UNICODE
#define HttpAddRequestHeaders  HttpAddRequestHeadersW
#else
#define HttpAddRequestHeaders  HttpAddRequestHeadersA
#endif
#define HTTP_ADDREQ_INDEX_MASK      0x0000FFFF
#define HTTP_ADDREQ_FLAGS_MASK      0xFFFF0000
#define HTTP_ADDREQ_FLAG_ADD_IF_NEW 0x10000000
#define HTTP_ADDREQ_FLAG_ADD        0x20000000
#define HTTP_ADDREQ_FLAG_COALESCE_WITH_COMMA       0x40000000
#define HTTP_ADDREQ_FLAG_COALESCE_WITH_SEMICOLON   0x01000000
#define HTTP_ADDREQ_FLAG_COALESCE                  HTTP_ADDREQ_FLAG_COALESCE_WITH_COMMA
#define HTTP_ADDREQ_FLAG_REPLACE    0x80000000
BOOLAPI HttpSendRequestA(HINTERNET hRequest, LPCSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength);
BOOLAPI HttpSendRequestW(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength);
#ifdef UNICODE
#define HttpSendRequest  HttpSendRequestW
#else
#define HttpSendRequest  HttpSendRequestA
#endif
INTERNETAPI_(BOOL)HttpSendRequestExA(HINTERNET hRequest, LPINTERNET_BUFFERSA lpBuffersIn, LPINTERNET_BUFFERSA lpBuffersOut, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(BOOL)HttpSendRequestExW(HINTERNET hRequest, LPINTERNET_BUFFERSW lpBuffersIn, LPINTERNET_BUFFERSW lpBuffersOut, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define HttpSendRequestEx  HttpSendRequestExW
#else
#define HttpSendRequestEx  HttpSendRequestExA
#endif
#define HSR_ASYNC       WININET_API_FLAG_ASYNC
#define HSR_SYNC        WININET_API_FLAG_SYNC
#define HSR_USE_CONTEXT WININET_API_FLAG_USE_CONTEXT
#define HSR_INITIATE    0x00000008
#define HSR_DOWNLOAD    0x00000010
#define HSR_CHUNKED     0x00000020
INTERNETAPI_(BOOL)HttpEndRequestA(HINTERNET hRequest, LPINTERNET_BUFFERSA lpBuffersOut, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(BOOL)HttpEndRequestW(HINTERNET hRequest, LPINTERNET_BUFFERSW lpBuffersOut, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define HttpEndRequest  HttpEndRequestW
#else
#define HttpEndRequest  HttpEndRequestA
#endif
BOOLAPI HttpQueryInfoA(HINTERNET hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex);
BOOLAPI HttpQueryInfoW(HINTERNET hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex);
#ifdef UNICODE
#define HttpQueryInfo  HttpQueryInfoW
#else
#define HttpQueryInfo  HttpQueryInfoA
#endif
#define INTERNET_COOKIE_IS_SECURE       0x01
#define INTERNET_COOKIE_IS_SESSION      0x02
#define INTERNET_COOKIE_THIRD_PARTY     0x10
#define INTERNET_COOKIE_PROMPT_REQUIRED 0x20
#define INTERNET_COOKIE_EVALUATE_P3P    0x40
#define INTERNET_COOKIE_APPLY_P3P       0x80
#define INTERNET_COOKIE_P3P_ENABLED     0x100
#define INTERNET_COOKIE_IS_RESTRICTED   0x200
#define INTERNET_COOKIE_IE6             0x400
#define INTERNET_COOKIE_IS_LEGACY       0x800
#define INTERNET_COOKIE_NON_SCRIPT      0x00001000
#define INTERNET_COOKIE_HTTPONLY        0x00002000
BOOLAPI InternetSetCookieA(LPCSTR lpszUrl, LPCSTR lpszCookieName, LPCSTR lpszCookieData);
BOOLAPI InternetSetCookieW(LPCWSTR lpszUrl, LPCWSTR lpszCookieName, LPCWSTR lpszCookieData);
#ifdef UNICODE
#define InternetSetCookie  InternetSetCookieW
#else
#define InternetSetCookie  InternetSetCookieA
#endif
BOOLAPI InternetGetCookieA(LPCSTR lpszUrl, LPCSTR lpszCookieName, LPSTR lpszCookieData, LPDWORD lpdwSize);
BOOLAPI InternetGetCookieW(LPCWSTR lpszUrl, LPCWSTR lpszCookieName, LPWSTR lpszCookieData, LPDWORD lpdwSize);
#ifdef UNICODE
#define InternetGetCookie  InternetGetCookieW
#else
#define InternetGetCookie  InternetGetCookieA
#endif
INTERNETAPI_(DWORD)InternetSetCookieExA(LPCSTR lpszUrl, LPCSTR lpszCookieName, LPCSTR lpszCookieData, DWORD dwFlags, DWORD_PTR dwReserved);
INTERNETAPI_(DWORD)InternetSetCookieExW(LPCWSTR lpszUrl, LPCWSTR lpszCookieName, LPCWSTR lpszCookieData, DWORD dwFlags, DWORD_PTR dwReserved);
#ifdef UNICODE
#define InternetSetCookieEx  InternetSetCookieExW
#else
#define InternetSetCookieEx  InternetSetCookieExA
#endif
BOOLAPI InternetGetCookieExA(LPCSTR lpszUrl, LPCSTR lpszCookieName, LPSTR lpszCookieData, LPDWORD lpdwSize, DWORD dwFlags, LPVOID lpReserved);
BOOLAPI InternetGetCookieExW(LPCWSTR lpszUrl, LPCWSTR lpszCookieName, LPWSTR lpszCookieData, LPDWORD lpdwSize, DWORD dwFlags, LPVOID lpReserved);
#ifdef UNICODE
#define InternetGetCookieEx  InternetGetCookieExW
#else
#define InternetGetCookieEx  InternetGetCookieExA
#endif
INTERNETAPI_(DWORD)InternetAttemptConnect(DWORD dwReserved);
BOOLAPI InternetCheckConnectionA(LPCSTR lpszUrl, DWORD dwFlags, DWORD dwReserved);
BOOLAPI InternetCheckConnectionW(LPCWSTR lpszUrl, DWORD dwFlags, DWORD dwReserved);
#ifdef UNICODE
#define InternetCheckConnection  InternetCheckConnectionW
#else
#define InternetCheckConnection  InternetCheckConnectionA
#endif
#define FLAG_ICC_FORCE_CONNECTION       0x00000001
#define FLAGS_ERROR_UI_FILTER_FOR_ERRORS        0x01
#define FLAGS_ERROR_UI_FLAGS_CHANGE_OPTIONS     0x02
#define FLAGS_ERROR_UI_FLAGS_GENERATE_DATA      0x04
#define FLAGS_ERROR_UI_FLAGS_NO_UI              0x08
#define FLAGS_ERROR_UI_SERIALIZE_DIALOGS        0x10
DWORD InternetAuthNotifyCallback(DWORD_PTR dwContext, DWORD dwReturn, LPVOID lpReserved);
typedef DWORD(CALLBACK *PFN_AUTH_NOTIFY) (DWORD_PTR, DWORD, LPVOID);
typedef struct
{
	DWORD cbStruct;
	DWORD dwOptions;
	PFN_AUTH_NOTIFY pfnNotify;
	DWORD_PTR dwContext;
} INTERNET_AUTH_NOTIFY_DATA;
INTERNETAPI_(BOOL)ResumeSuspendedDownload(HINTERNET hRequest, DWORD dwResultCode);
INTERNETAPI_(DWORD)InternetErrorDlg(HWND hWnd, HINTERNET hRequest, DWORD dwError, DWORD dwFlags, LPVOID * lppvData);
INTERNETAPI_(DWORD)InternetConfirmZoneCrossingA(HWND hWnd, LPSTR szUrlPrev, LPSTR szUrlNew, BOOL bPost);
INTERNETAPI_(DWORD)InternetConfirmZoneCrossingW(HWND hWnd, LPWSTR szUrlPrev, LPWSTR szUrlNew, BOOL bPost);
#ifdef UNICODE
#define InternetConfirmZoneCrossing  InternetConfirmZoneCrossingW
#else
#ifdef _WINX32_
#define InternetConfirmZoneCrossing  InternetConfirmZoneCrossingA
#else
INTERNETAPI_(DWORD)InternetConfirmZoneCrossing(HWND hWnd, LPSTR szUrlPrev, LPSTR szUrlNew, BOOL bPost);
#endif
#endif
#define INTERNET_ERROR_BASE                     12000
#define ERROR_INTERNET_OUT_OF_HANDLES           (INTERNET_ERROR_BASE + 1)
#define ERROR_INTERNET_TIMEOUT                  (INTERNET_ERROR_BASE + 2)
#define ERROR_INTERNET_EXTENDED_ERROR           (INTERNET_ERROR_BASE + 3)
#define ERROR_INTERNET_INTERNAL_ERROR           (INTERNET_ERROR_BASE + 4)
#define ERROR_INTERNET_INVALID_URL              (INTERNET_ERROR_BASE + 5)
#define ERROR_INTERNET_UNRECOGNIZED_SCHEME      (INTERNET_ERROR_BASE + 6)
#define ERROR_INTERNET_NAME_NOT_RESOLVED        (INTERNET_ERROR_BASE + 7)
#define ERROR_INTERNET_PROTOCOL_NOT_FOUND       (INTERNET_ERROR_BASE + 8)
#define ERROR_INTERNET_INVALID_OPTION           (INTERNET_ERROR_BASE + 9)
#define ERROR_INTERNET_BAD_OPTION_LENGTH        (INTERNET_ERROR_BASE + 10)
#define ERROR_INTERNET_OPTION_NOT_SETTABLE      (INTERNET_ERROR_BASE + 11)
#define ERROR_INTERNET_SHUTDOWN                 (INTERNET_ERROR_BASE + 12)
#define ERROR_INTERNET_INCORRECT_USER_NAME      (INTERNET_ERROR_BASE + 13)
#define ERROR_INTERNET_INCORRECT_PASSWORD       (INTERNET_ERROR_BASE + 14)
#define ERROR_INTERNET_LOGIN_FAILURE            (INTERNET_ERROR_BASE + 15)
#define ERROR_INTERNET_INVALID_OPERATION        (INTERNET_ERROR_BASE + 16)
#define ERROR_INTERNET_OPERATION_CANCELLED      (INTERNET_ERROR_BASE + 17)
#define ERROR_INTERNET_INCORRECT_HANDLE_TYPE    (INTERNET_ERROR_BASE + 18)
#define ERROR_INTERNET_INCORRECT_HANDLE_STATE   (INTERNET_ERROR_BASE + 19)
#define ERROR_INTERNET_NOT_PROXY_REQUEST        (INTERNET_ERROR_BASE + 20)
#define ERROR_INTERNET_REGISTRY_VALUE_NOT_FOUND (INTERNET_ERROR_BASE + 21)
#define ERROR_INTERNET_BAD_REGISTRY_PARAMETER   (INTERNET_ERROR_BASE + 22)
#define ERROR_INTERNET_NO_DIRECT_ACCESS         (INTERNET_ERROR_BASE + 23)
#define ERROR_INTERNET_NO_CONTEXT               (INTERNET_ERROR_BASE + 24)
#define ERROR_INTERNET_NO_CALLBACK              (INTERNET_ERROR_BASE + 25)
#define ERROR_INTERNET_REQUEST_PENDING          (INTERNET_ERROR_BASE + 26)
#define ERROR_INTERNET_INCORRECT_FORMAT         (INTERNET_ERROR_BASE + 27)
#define ERROR_INTERNET_ITEM_NOT_FOUND           (INTERNET_ERROR_BASE + 28)
#define ERROR_INTERNET_CANNOT_CONNECT           (INTERNET_ERROR_BASE + 29)
#define ERROR_INTERNET_CONNECTION_ABORTED       (INTERNET_ERROR_BASE + 30)
#define ERROR_INTERNET_CONNECTION_RESET         (INTERNET_ERROR_BASE + 31)
#define ERROR_INTERNET_FORCE_RETRY              (INTERNET_ERROR_BASE + 32)
#define ERROR_INTERNET_INVALID_PROXY_REQUEST    (INTERNET_ERROR_BASE + 33)
#define ERROR_INTERNET_NEED_UI                  (INTERNET_ERROR_BASE + 34)
#define ERROR_INTERNET_HANDLE_EXISTS            (INTERNET_ERROR_BASE + 36)
#define ERROR_INTERNET_SEC_CERT_DATE_INVALID    (INTERNET_ERROR_BASE + 37)
#define ERROR_INTERNET_SEC_CERT_CN_INVALID      (INTERNET_ERROR_BASE + 38)
#define ERROR_INTERNET_HTTP_TO_HTTPS_ON_REDIR   (INTERNET_ERROR_BASE + 39)
#define ERROR_INTERNET_HTTPS_TO_HTTP_ON_REDIR   (INTERNET_ERROR_BASE + 40)
#define ERROR_INTERNET_MIXED_SECURITY           (INTERNET_ERROR_BASE + 41)
#define ERROR_INTERNET_CHG_POST_IS_NON_SECURE   (INTERNET_ERROR_BASE + 42)
#define ERROR_INTERNET_POST_IS_NON_SECURE       (INTERNET_ERROR_BASE + 43)
#define ERROR_INTERNET_CLIENT_AUTH_CERT_NEEDED  (INTERNET_ERROR_BASE + 44)
#define ERROR_INTERNET_INVALID_CA               (INTERNET_ERROR_BASE + 45)
#define ERROR_INTERNET_CLIENT_AUTH_NOT_SETUP    (INTERNET_ERROR_BASE + 46)
#define ERROR_INTERNET_ASYNC_THREAD_FAILED      (INTERNET_ERROR_BASE + 47)
#define ERROR_INTERNET_REDIRECT_SCHEME_CHANGE   (INTERNET_ERROR_BASE + 48)
#define ERROR_INTERNET_DIALOG_PENDING           (INTERNET_ERROR_BASE + 49)
#define ERROR_INTERNET_RETRY_DIALOG             (INTERNET_ERROR_BASE + 50)
#define ERROR_INTERNET_HTTPS_HTTP_SUBMIT_REDIR  (INTERNET_ERROR_BASE + 52)
#define ERROR_INTERNET_INSERT_CDROM             (INTERNET_ERROR_BASE + 53)
#define ERROR_INTERNET_FORTEZZA_LOGIN_NEEDED    (INTERNET_ERROR_BASE + 54)
#define ERROR_INTERNET_SEC_CERT_ERRORS          (INTERNET_ERROR_BASE + 55)
#define ERROR_INTERNET_SEC_CERT_NO_REV          (INTERNET_ERROR_BASE + 56)
#define ERROR_INTERNET_SEC_CERT_REV_FAILED      (INTERNET_ERROR_BASE + 57)
#define ERROR_FTP_TRANSFER_IN_PROGRESS          (INTERNET_ERROR_BASE + 110)
#define ERROR_FTP_DROPPED                       (INTERNET_ERROR_BASE + 111)
#define ERROR_FTP_NO_PASSIVE_MODE               (INTERNET_ERROR_BASE + 112)
#define ERROR_GOPHER_PROTOCOL_ERROR             (INTERNET_ERROR_BASE + 130)
#define ERROR_GOPHER_NOT_FILE                   (INTERNET_ERROR_BASE + 131)
#define ERROR_GOPHER_DATA_ERROR                 (INTERNET_ERROR_BASE + 132)
#define ERROR_GOPHER_END_OF_DATA                (INTERNET_ERROR_BASE + 133)
#define ERROR_GOPHER_INVALID_LOCATOR            (INTERNET_ERROR_BASE + 134)
#define ERROR_GOPHER_INCORRECT_LOCATOR_TYPE     (INTERNET_ERROR_BASE + 135)
#define ERROR_GOPHER_NOT_GOPHER_PLUS            (INTERNET_ERROR_BASE + 136)
#define ERROR_GOPHER_ATTRIBUTE_NOT_FOUND        (INTERNET_ERROR_BASE + 137)
#define ERROR_GOPHER_UNKNOWN_LOCATOR            (INTERNET_ERROR_BASE + 138)
#define ERROR_HTTP_HEADER_NOT_FOUND             (INTERNET_ERROR_BASE + 150)
#define ERROR_HTTP_DOWNLEVEL_SERVER             (INTERNET_ERROR_BASE + 151)
#define ERROR_HTTP_INVALID_SERVER_RESPONSE      (INTERNET_ERROR_BASE + 152)
#define ERROR_HTTP_INVALID_HEADER               (INTERNET_ERROR_BASE + 153)
#define ERROR_HTTP_INVALID_QUERY_REQUEST        (INTERNET_ERROR_BASE + 154)
#define ERROR_HTTP_HEADER_ALREADY_EXISTS        (INTERNET_ERROR_BASE + 155)
#define ERROR_HTTP_REDIRECT_FAILED              (INTERNET_ERROR_BASE + 156)
#define ERROR_HTTP_NOT_REDIRECTED               (INTERNET_ERROR_BASE + 160)
#define ERROR_HTTP_COOKIE_NEEDS_CONFIRMATION    (INTERNET_ERROR_BASE + 161)
#define ERROR_HTTP_COOKIE_DECLINED              (INTERNET_ERROR_BASE + 162)
#define ERROR_HTTP_REDIRECT_NEEDS_CONFIRMATION  (INTERNET_ERROR_BASE + 168)
#define ERROR_INTERNET_SECURITY_CHANNEL_ERROR   (INTERNET_ERROR_BASE + 157)
#define ERROR_INTERNET_UNABLE_TO_CACHE_FILE     (INTERNET_ERROR_BASE + 158)
#define ERROR_INTERNET_TCPIP_NOT_INSTALLED      (INTERNET_ERROR_BASE + 159)
#define ERROR_INTERNET_DISCONNECTED             (INTERNET_ERROR_BASE + 163)
#define ERROR_INTERNET_SERVER_UNREACHABLE       (INTERNET_ERROR_BASE + 164)
#define ERROR_INTERNET_PROXY_SERVER_UNREACHABLE (INTERNET_ERROR_BASE + 165)
#define ERROR_INTERNET_BAD_AUTO_PROXY_SCRIPT    (INTERNET_ERROR_BASE + 166)
#define ERROR_INTERNET_UNABLE_TO_DOWNLOAD_SCRIPT (INTERNET_ERROR_BASE + 167)
#define ERROR_INTERNET_SEC_INVALID_CERT         (INTERNET_ERROR_BASE + 169)
#define ERROR_INTERNET_SEC_CERT_REVOKED         (INTERNET_ERROR_BASE + 170)
#define ERROR_INTERNET_FAILED_DUETOSECURITYCHECK  (INTERNET_ERROR_BASE + 171)
#define ERROR_INTERNET_NOT_INITIALIZED          (INTERNET_ERROR_BASE + 172)
#define ERROR_INTERNET_NEED_MSN_SSPI_PKG          (INTERNET_ERROR_BASE + 173)
#define ERROR_INTERNET_LOGIN_FAILURE_DISPLAY_ENTITY_BODY   (INTERNET_ERROR_BASE + 174)
#define ERROR_INTERNET_DECODING_FAILED          (INTERNET_ERROR_BASE + 175)
#define INTERNET_ERROR_LAST                     ERROR_INTERNET_DECODING_FAILED
#define NORMAL_CACHE_ENTRY              0x00000001
#define STICKY_CACHE_ENTRY              0x00000004
#define EDITED_CACHE_ENTRY              0x00000008
#define TRACK_OFFLINE_CACHE_ENTRY       0x00000010
#define TRACK_ONLINE_CACHE_ENTRY        0x00000020
#define SPARSE_CACHE_ENTRY              0x00010000
#define COOKIE_CACHE_ENTRY              0x00100000
#define URLHISTORY_CACHE_ENTRY          0x00200000
#define URLCACHE_FIND_DEFAULT_FILTER    NORMAL_CACHE_ENTRY             \
                                    |   COOKIE_CACHE_ENTRY             \
                                    |   URLHISTORY_CACHE_ENTRY         \
                                    |   TRACK_OFFLINE_CACHE_ENTRY      \
                                    |   TRACK_ONLINE_CACHE_ENTRY       \
                                    |   STICKY_CACHE_ENTRY
typedef struct _INTERNET_CACHE_ENTRY_INFOA
{
	DWORD dwStructSize;
	LPSTR lpszSourceUrlName;
	LPSTR lpszLocalFileName;
	DWORD CacheEntryType;
	DWORD dwUseCount;
	DWORD dwHitRate;
	DWORD dwSizeLow;
	DWORD dwSizeHigh;
	FILETIME LastModifiedTime;
	FILETIME ExpireTime;
	FILETIME LastAccessTime;
	FILETIME LastSyncTime;
	LPSTR lpHeaderInfo;
	DWORD dwHeaderInfoSize;
	LPSTR lpszFileExtension;
	union
	{
		DWORD dwReserved;
		DWORD dwExemptDelta;
	};
} INTERNET_CACHE_ENTRY_INFOA, *LPINTERNET_CACHE_ENTRY_INFOA;
typedef struct _INTERNET_CACHE_ENTRY_INFOW
{
	DWORD dwStructSize;
	LPWSTR lpszSourceUrlName;
	LPWSTR lpszLocalFileName;
	DWORD CacheEntryType;
	DWORD dwUseCount;
	DWORD dwHitRate;
	DWORD dwSizeLow;
	DWORD dwSizeHigh;
	FILETIME LastModifiedTime;
	FILETIME ExpireTime;
	FILETIME LastAccessTime;
	FILETIME LastSyncTime;
	LPWSTR lpHeaderInfo;
	DWORD dwHeaderInfoSize;
	LPWSTR lpszFileExtension;
	union
	{
		DWORD dwReserved;
		DWORD dwExemptDelta;
	};
} INTERNET_CACHE_ENTRY_INFOW, *LPINTERNET_CACHE_ENTRY_INFOW;
#ifdef UNICODE
typedef INTERNET_CACHE_ENTRY_INFOW INTERNET_CACHE_ENTRY_INFO;
typedef LPINTERNET_CACHE_ENTRY_INFOW LPINTERNET_CACHE_ENTRY_INFO;
#else
typedef INTERNET_CACHE_ENTRY_INFOA INTERNET_CACHE_ENTRY_INFO;
typedef LPINTERNET_CACHE_ENTRY_INFOA LPINTERNET_CACHE_ENTRY_INFO;
#endif
typedef struct _INTERNET_CACHE_TIMESTAMPS
{
	FILETIME ftExpires;
	FILETIME ftLastModified;
} INTERNET_CACHE_TIMESTAMPS, *LPINTERNET_CACHE_TIMESTAMPS;
typedef LONGLONG GROUPID;
#define CACHEGROUP_ATTRIBUTE_GET_ALL        0xffffffff
#define CACHEGROUP_ATTRIBUTE_BASIC          0x00000001
#define CACHEGROUP_ATTRIBUTE_FLAG           0x00000002
#define CACHEGROUP_ATTRIBUTE_TYPE           0x00000004
#define CACHEGROUP_ATTRIBUTE_QUOTA          0x00000008
#define CACHEGROUP_ATTRIBUTE_GROUPNAME      0x00000010
#define CACHEGROUP_ATTRIBUTE_STORAGE        0x00000020
#define CACHEGROUP_FLAG_NONPURGEABLE        0x00000001
#define CACHEGROUP_FLAG_GIDONLY             0x00000004
#define CACHEGROUP_FLAG_FLUSHURL_ONDELETE   0x00000002
#define CACHEGROUP_SEARCH_ALL               0x00000000
#define CACHEGROUP_SEARCH_BYURL             0x00000001
#define CACHEGROUP_TYPE_INVALID             0x00000001
#define CACHEGROUP_READWRITE_MASK                   \
            CACHEGROUP_ATTRIBUTE_TYPE               \
        |   CACHEGROUP_ATTRIBUTE_QUOTA              \
        |   CACHEGROUP_ATTRIBUTE_GROUPNAME          \
        |   CACHEGROUP_ATTRIBUTE_STORAGE
#define  GROUPNAME_MAX_LENGTH       120
#define  GROUP_OWNER_STORAGE_SIZE   4
typedef struct _INTERNET_CACHE_GROUP_INFOA
{
	DWORD dwGroupSize;
	DWORD dwGroupFlags;
	DWORD dwGroupType;
	DWORD dwDiskUsage;
	DWORD dwDiskQuota;
	DWORD dwOwnerStorage[GROUP_OWNER_STORAGE_SIZE];
	CHAR szGroupName[GROUPNAME_MAX_LENGTH];
} INTERNET_CACHE_GROUP_INFOA, *LPINTERNET_CACHE_GROUP_INFOA;
typedef struct _INTERNET_CACHE_GROUP_INFOW
{
	DWORD dwGroupSize;
	DWORD dwGroupFlags;
	DWORD dwGroupType;
	DWORD dwDiskUsage;
	DWORD dwDiskQuota;
	DWORD dwOwnerStorage[GROUP_OWNER_STORAGE_SIZE];
	WCHAR szGroupName[GROUPNAME_MAX_LENGTH];
} INTERNET_CACHE_GROUP_INFOW, *LPINTERNET_CACHE_GROUP_INFOW;
#ifdef UNICODE
typedef INTERNET_CACHE_GROUP_INFOW INTERNET_CACHE_GROUP_INFO;
typedef LPINTERNET_CACHE_GROUP_INFOW LPINTERNET_CACHE_GROUP_INFO;
#else
typedef INTERNET_CACHE_GROUP_INFOA INTERNET_CACHE_GROUP_INFO;
typedef LPINTERNET_CACHE_GROUP_INFOA LPINTERNET_CACHE_GROUP_INFO;
#endif
BOOLAPI CreateUrlCacheEntryA(LPCSTR lpszUrlName, DWORD dwExpectedFileSize, LPCSTR lpszFileExtension, LPSTR lpszFileName, DWORD dwReserved);
BOOLAPI CreateUrlCacheEntryW(LPCWSTR lpszUrlName, DWORD dwExpectedFileSize, LPCWSTR lpszFileExtension, LPWSTR lpszFileName, DWORD dwReserved);
#ifdef UNICODE
#define CreateUrlCacheEntry  CreateUrlCacheEntryW
#else
#define CreateUrlCacheEntry  CreateUrlCacheEntryA
#endif
#ifndef USE_FIXED_COMMIT_URL_CACHE_ENTRY
BOOLAPI CommitUrlCacheEntryA(LPCSTR lpszUrlName, LPCSTR lpszLocalFileName, FILETIME ExpireTime, FILETIME LastModifiedTime, DWORD CacheEntryType, LPBYTE lpHeaderInfo, DWORD dwHeaderSize, LPCSTR lpszFileExtension, LPCSTR lpszOriginalUrl);
BOOLAPI CommitUrlCacheEntryW(LPCWSTR lpszUrlName, LPCWSTR lpszLocalFileName, FILETIME ExpireTime, FILETIME LastModifiedTime, DWORD CacheEntryType, LPWSTR lpszHeaderInfo, DWORD dwHeaders, LPCWSTR lpszFileExtension, LPCWSTR lpszOriginalUrl);
#ifdef UNICODE
#define CommitUrlCacheEntry CommitUrlCacheEntryW
#else
#define CommitUrlCacheEntry CommitUrlCacheEntryA
#endif
#else
CommitUrlCacheEntryA(LPCSTR lpszUrlName, LPCSTR lpszLocalFileName, FILETIME ExpireTime, FILETIME LastModifiedTime, DWORD CacheEntryType, LPCSTR lpHeaderInfo, DWORD dwHeaderSize, LPCSTR lpszFileExtension, LPCSTR lpszOriginalUrl);
CommitUrlCacheEntryW(LPCWSTR lpszUrlName, LPCWSTR lpszLocalFileName, FILETIME ExpireTime, FILETIME LastModifiedTime, DWORD CacheEntryType, LPCWSTR lpHeaderInfo, DWORD dwHeaderSize, LPCWSTR lpszFileExtension, LPCWSTR lpszOriginalUrl);
#ifdef UNICODE
#define CommitUrlCacheEntry  CommitUrlCacheEntryW
#else
#define CommitUrlCacheEntry  CommitUrlCacheEntryA
#endif
#endif
BOOLAPI RetrieveUrlCacheEntryFileA(LPCSTR lpszUrlName, LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo, LPDWORD lpcbCacheEntryInfo, DWORD dwReserved);
BOOLAPI RetrieveUrlCacheEntryFileW(LPCWSTR lpszUrlName, LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo, LPDWORD lpcbCacheEntryInfo, DWORD dwReserved);
#ifdef UNICODE
#define RetrieveUrlCacheEntryFile  RetrieveUrlCacheEntryFileW
#else
#define RetrieveUrlCacheEntryFile  RetrieveUrlCacheEntryFileA
#endif
BOOLAPI UnlockUrlCacheEntryFileA(LPCSTR lpszUrlName, DWORD dwReserved);
BOOLAPI UnlockUrlCacheEntryFileW(LPCWSTR lpszUrlName, DWORD dwReserved);
#ifdef UNICODE
#define UnlockUrlCacheEntryFile  UnlockUrlCacheEntryFileW
#else
#ifdef _WINX32_
#define UnlockUrlCacheEntryFile  UnlockUrlCacheEntryFileA
#else
BOOLAPI UnlockUrlCacheEntryFile(LPCSTR lpszUrlName, DWORD dwReserved);
#endif
#endif
INTERNETAPI_(HANDLE)RetrieveUrlCacheEntryStreamA(LPCSTR lpszUrlName, LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo, LPDWORD lpcbCacheEntryInfo, BOOL fRandomRead, DWORD dwReserved);
INTERNETAPI_(HANDLE)RetrieveUrlCacheEntryStreamW(LPCWSTR lpszUrlName, LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo, LPDWORD lpcbCacheEntryInfo, BOOL fRandomRead, DWORD dwReserved);
#ifdef UNICODE
#define RetrieveUrlCacheEntryStream  RetrieveUrlCacheEntryStreamW
#else
#define RetrieveUrlCacheEntryStream  RetrieveUrlCacheEntryStreamA
#endif
BOOLAPI ReadUrlCacheEntryStream(HANDLE hUrlCacheStream, DWORD dwLocation, LPVOID lpBuffer, LPDWORD lpdwLen, DWORD Reserved);
BOOLAPI ReadUrlCacheEntryStreamEx(HANDLE hUrlCacheStream, DWORDLONG qwLocation, LPVOID lpBuffer, LPDWORD lpdwLen);
BOOLAPI UnlockUrlCacheEntryStream(HANDLE hUrlCacheStream, DWORD Reserved);
URLCACHEAPI_(BOOL)GetUrlCacheEntryInfoA(LPCSTR lpszUrlName, LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo, LPDWORD lpcbCacheEntryInfo);
URLCACHEAPI_(BOOL)GetUrlCacheEntryInfoW(LPCWSTR lpszUrlName, LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo, LPDWORD lpcbCacheEntryInfo);
#ifdef UNICODE
#define GetUrlCacheEntryInfo  GetUrlCacheEntryInfoW
#else
#define GetUrlCacheEntryInfo  GetUrlCacheEntryInfoA
#endif
URLCACHEAPI_(HANDLE)FindFirstUrlCacheGroup(DWORD dwFlags, DWORD dwFilter, LPVOID lpSearchCondition, DWORD dwSearchCondition, GROUPID * lpGroupId, LPVOID lpReserved);
URLCACHEAPI_(BOOL)FindNextUrlCacheGroup(HANDLE hFind, GROUPID * lpGroupId, LPVOID lpReserved);
URLCACHEAPI_(BOOL)GetUrlCacheGroupAttributeA(GROUPID gid, DWORD dwFlags, DWORD dwAttributes, LPINTERNET_CACHE_GROUP_INFOA lpGroupInfo, LPDWORD lpdwGroupInfo, LPVOID lpReserved);
URLCACHEAPI_(BOOL)GetUrlCacheGroupAttributeW(GROUPID gid, DWORD dwFlags, DWORD dwAttributes, LPINTERNET_CACHE_GROUP_INFOW lpGroupInfo, LPDWORD lpdwGroupInfo, LPVOID lpReserved);
#ifdef UNICODE
#define GetUrlCacheGroupAttribute  GetUrlCacheGroupAttributeW
#else
#define GetUrlCacheGroupAttribute  GetUrlCacheGroupAttributeA
#endif
URLCACHEAPI_(BOOL)SetUrlCacheGroupAttributeA(GROUPID gid, DWORD dwFlags, DWORD dwAttributes, LPINTERNET_CACHE_GROUP_INFOA lpGroupInfo, LPVOID lpReserved);
URLCACHEAPI_(BOOL)SetUrlCacheGroupAttributeW(GROUPID gid, DWORD dwFlags, DWORD dwAttributes, LPINTERNET_CACHE_GROUP_INFOW lpGroupInfo, LPVOID lpReserved);
#ifdef UNICODE
#define SetUrlCacheGroupAttribute  SetUrlCacheGroupAttributeW
#else
#define SetUrlCacheGroupAttribute  SetUrlCacheGroupAttributeA
#endif
BOOLAPI GetUrlCacheEntryInfoExA(LPCSTR lpszUrl, LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo, LPDWORD lpcbCacheEntryInfo, LPSTR lpszRedirectUrl, LPDWORD lpcbRedirectUrl, LPVOID lpReserved, DWORD dwFlags);
BOOLAPI GetUrlCacheEntryInfoExW(LPCWSTR lpszUrl, LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo, LPDWORD lpcbCacheEntryInfo, LPWSTR lpszRedirectUrl, LPDWORD lpcbRedirectUrl, LPVOID lpReserved, DWORD dwFlags);
#ifdef UNICODE
#define GetUrlCacheEntryInfoEx  GetUrlCacheEntryInfoExW
#else
#define GetUrlCacheEntryInfoEx  GetUrlCacheEntryInfoExA
#endif
#define CACHE_ENTRY_ATTRIBUTE_FC    0x00000004
#define CACHE_ENTRY_HITRATE_FC      0x00000010
#define CACHE_ENTRY_MODTIME_FC      0x00000040
#define CACHE_ENTRY_EXPTIME_FC      0x00000080
#define CACHE_ENTRY_ACCTIME_FC      0x00000100
#define CACHE_ENTRY_SYNCTIME_FC     0x00000200
#define CACHE_ENTRY_HEADERINFO_FC   0x00000400
#define CACHE_ENTRY_EXEMPT_DELTA_FC 0x00000800
BOOLAPI SetUrlCacheEntryInfoA(LPCSTR lpszUrlName, LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo, DWORD dwFieldControl);
BOOLAPI SetUrlCacheEntryInfoW(LPCWSTR lpszUrlName, LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo, DWORD dwFieldControl);
#ifdef UNICODE
#define SetUrlCacheEntryInfo  SetUrlCacheEntryInfoW
#else
#define SetUrlCacheEntryInfo  SetUrlCacheEntryInfoA
#endif
INTERNETAPI_(GROUPID)CreateUrlCacheGroup(DWORD dwFlags, LPVOID lpReserved);
BOOLAPI DeleteUrlCacheGroup(GROUPID GroupId, DWORD dwFlags, LPVOID lpReserved);
#define INTERNET_CACHE_GROUP_ADD      0
#define INTERNET_CACHE_GROUP_REMOVE   1
BOOLAPI SetUrlCacheEntryGroupA(LPCSTR lpszUrlName, DWORD dwFlags, GROUPID GroupId, LPBYTE pbGroupAttributes, DWORD cbGroupAttributes, LPVOID lpReserved);
BOOLAPI SetUrlCacheEntryGroupW(LPCWSTR lpszUrlName, DWORD dwFlags, GROUPID GroupId, LPBYTE pbGroupAttributes, DWORD cbGroupAttributes, LPVOID lpReserved);
#ifdef UNICODE
#define SetUrlCacheEntryGroup  SetUrlCacheEntryGroupW
#else
#ifdef _WINX32_
#define SetUrlCacheEntryGroup  SetUrlCacheEntryGroupA
#else
BOOLAPI SetUrlCacheEntryGroup(LPCSTR lpszUrlName, DWORD dwFlags, GROUPID GroupId, LPBYTE pbGroupAttributes, DWORD cbGroupAttributes, LPVOID lpReserved);
#endif
#endif
INTERNETAPI_(HANDLE)FindFirstUrlCacheEntryExA(LPCSTR lpszUrlSearchPattern, DWORD dwFlags, DWORD dwFilter, GROUPID GroupId, LPINTERNET_CACHE_ENTRY_INFOA lpFirstCacheEntryInfo, LPDWORD lpcbEntryInfo, LPVOID lpGroupAttributes, LPDWORD lpcbGroupAttributes, LPVOID lpReserved);
INTERNETAPI_(HANDLE)FindFirstUrlCacheEntryExW(LPCWSTR lpszUrlSearchPattern, DWORD dwFlags, DWORD dwFilter, GROUPID GroupId, LPINTERNET_CACHE_ENTRY_INFOW lpFirstCacheEntryInfo, LPDWORD lpcbEntryInfo, LPVOID lpGroupAttributes, LPDWORD lpcbGroupAttributes, LPVOID lpReserved);
#ifdef UNICODE
#define FindFirstUrlCacheEntryEx  FindFirstUrlCacheEntryExW
#else
#define FindFirstUrlCacheEntryEx  FindFirstUrlCacheEntryExA
#endif
BOOLAPI FindNextUrlCacheEntryExA(HANDLE hEnumHandle, LPINTERNET_CACHE_ENTRY_INFOA lpNextCacheEntryInfo, LPDWORD lpcbEntryInfo, LPVOID lpGroupAttributes, LPDWORD lpcbGroupAttributes, LPVOID lpReserved);
BOOLAPI FindNextUrlCacheEntryExW(HANDLE hEnumHandle, LPINTERNET_CACHE_ENTRY_INFOW lpNextCacheEntryInfo, LPDWORD lpcbEntryInfo, LPVOID lpGroupAttributes, LPDWORD lpcbGroupAttributes, LPVOID lpReserved);
#ifdef UNICODE
#define FindNextUrlCacheEntryEx  FindNextUrlCacheEntryExW
#else
#define FindNextUrlCacheEntryEx  FindNextUrlCacheEntryExA
#endif
INTERNETAPI_(HANDLE)FindFirstUrlCacheEntryA(LPCSTR lpszUrlSearchPattern, LPINTERNET_CACHE_ENTRY_INFOA lpFirstCacheEntryInfo, LPDWORD lpcbCacheEntryInfo);
INTERNETAPI_(HANDLE)FindFirstUrlCacheEntryW(LPCWSTR lpszUrlSearchPattern, LPINTERNET_CACHE_ENTRY_INFOW lpFirstCacheEntryInfo, LPDWORD lpcbCacheEntryInfo);
#ifdef UNICODE
#define FindFirstUrlCacheEntry  FindFirstUrlCacheEntryW
#else
#define FindFirstUrlCacheEntry  FindFirstUrlCacheEntryA
#endif
BOOLAPI FindNextUrlCacheEntryA(HANDLE hEnumHandle, LPINTERNET_CACHE_ENTRY_INFOA lpNextCacheEntryInfo, LPDWORD lpcbCacheEntryInfo);
BOOLAPI FindNextUrlCacheEntryW(HANDLE hEnumHandle, LPINTERNET_CACHE_ENTRY_INFOW lpNextCacheEntryInfo, LPDWORD lpcbCacheEntryInfo);
#ifdef UNICODE
#define FindNextUrlCacheEntry  FindNextUrlCacheEntryW
#else
#define FindNextUrlCacheEntry  FindNextUrlCacheEntryA
#endif
BOOLAPI FindCloseUrlCache(HANDLE hEnumHandle);
BOOLAPI DeleteUrlCacheEntryA(LPCSTR lpszUrlName);
BOOLAPI DeleteUrlCacheEntryW(LPCWSTR lpszUrlName);
#ifdef UNICODE
#define DeleteUrlCacheEntry  DeleteUrlCacheEntryW
#else
#ifdef _WINX32_
#define DeleteUrlCacheEntry  DeleteUrlCacheEntryA
#else
BOOLAPI DeleteUrlCacheEntry(LPCSTR lpszUrlName);
#endif
#endif
INTERNETAPI_(DWORD)InternetDialA(HWND hwndParent, LPSTR lpszConnectoid, DWORD dwFlags, DWORD_PTR * lpdwConnection, DWORD dwReserved);
INTERNETAPI_(DWORD)InternetDialW(HWND hwndParent, LPWSTR lpszConnectoid, DWORD dwFlags, DWORD_PTR * lpdwConnection, DWORD dwReserved);
#ifdef UNICODE
#define InternetDial  InternetDialW
#else
#ifdef _WINX32_
#define InternetDial  InternetDialA
#else
INTERNETAPI_(DWORD)InternetDial(HWND hwndParent, LPSTR lpszConnectoid, DWORD dwFlags, LPDWORD lpdwConnection, DWORD dwReserved);
#endif
#endif
#define INTERNET_DIAL_FORCE_PROMPT     0x2000
#define INTERNET_DIAL_SHOW_OFFLINE     0x4000
#define INTERNET_DIAL_UNATTENDED       0x8000
INTERNETAPI_(DWORD)InternetHangUp(DWORD_PTR dwConnection, DWORD dwReserved);
#define INTERENT_GOONLINE_REFRESH 0x00000001
#define INTERENT_GOONLINE_MASK 0x00000001
INTERNETAPI_(BOOL)InternetGoOnlineA(LPCSTR lpszURL, HWND hwndParent, DWORD dwFlags);
INTERNETAPI_(BOOL)InternetGoOnlineW(LPCWSTR lpszURL, HWND hwndParent, DWORD dwFlags);
#ifdef UNICODE
#define InternetGoOnline  InternetGoOnlineW
#else
#ifdef _WINX32_
#define InternetGoOnline  InternetGoOnlineA
#else
INTERNETAPI_(BOOL)InternetGoOnline(LPSTR lpszURL, HWND hwndParent, DWORD dwFlags);
#endif
#endif
INTERNETAPI_(BOOL)InternetAutodial(DWORD dwFlags, HWND hwndParent);
#define INTERNET_AUTODIAL_FORCE_ONLINE          1
#define INTERNET_AUTODIAL_FORCE_UNATTENDED      2
#define INTERNET_AUTODIAL_FAILIFSECURITYCHECK   4
#define INTERNET_AUTODIAL_OVERRIDE_NET_PRESENT  8
#define INTERNET_AUTODIAL_FLAGS_MASK (INTERNET_AUTODIAL_FORCE_ONLINE | INTERNET_AUTODIAL_FORCE_UNATTENDED | INTERNET_AUTODIAL_FAILIFSECURITYCHECK | INTERNET_AUTODIAL_OVERRIDE_NET_PRESENT)
INTERNETAPI_(BOOL)InternetAutodialHangup(DWORD dwReserved);
INTERNETAPI_(BOOL)InternetGetConnectedState(LPDWORD lpdwFlags, DWORD dwReserved);
INTERNETAPI_(BOOL)InternetGetConnectedStateExA(LPDWORD lpdwFlags, LPSTR lpszConnectionName, DWORD dwBufLen, DWORD dwReserved);
INTERNETAPI_(BOOL)InternetGetConnectedStateExW(LPDWORD lpdwFlags, LPWSTR lpszConnectionName, DWORD dwBufLen, DWORD dwReserved);
#define  PROXY_AUTO_DETECT_TYPE_DHCP    1
#define  PROXY_AUTO_DETECT_TYPE_DNS_A   2
struct AutoProxyHelperFunctions;
typedef struct AutoProxyHelperVtbl
{
	BOOL  (__stdcall *IsResolvable) (LPSTR lpszHost);
	DWORD (__stdcall *GetIPAddress) (LPSTR lpszIPAddress, LPDWORD lpdwIPAddressSize);
	DWORD (__stdcall *ResolveHostName) (LPSTR lpszHostName, LPSTR lpszIPAddress, LPDWORD lpdwIPAddressSize);
	BOOL  (__stdcall *IsInNet) (LPSTR lpszIPAddress, LPSTR lpszDest, LPSTR lpszMask);
	BOOL  (__stdcall *IsResolvableEx) (LPSTR lpszHost);
	DWORD (__stdcall *GetIPAddressEx) (LPSTR lpszIPAddress, LPDWORD lpdwIPAddressSize);
	DWORD (__stdcall *ResolveHostNameEx) (LPSTR lpszHostName, LPSTR lpszIPAddress, LPDWORD lpdwIPAddressSize);
	BOOL  (__stdcall *IsInNetEx) (LPSTR lpszIPAddress, LPSTR lpszIPPrefix);
	DWORD (__stdcall *SortIpList) (LPSTR lpszIPAddressList, LPSTR lpszIPSortedList, LPDWORD lpdwIPSortedListSize);
} AutoProxyHelperVtbl;
typedef struct
{
	DWORD dwStructSize;
	LPSTR lpszScriptBuffer;
	DWORD dwScriptBufferSize;
} AUTO_PROXY_SCRIPT_BUFFER, *LPAUTO_PROXY_SCRIPT_BUFFER;
typedef struct AutoProxyHelperFunctions
{
	const struct AutoProxyHelperVtbl *lpVtbl;
} AutoProxyHelperFunctions;
typedef BOOL(CALLBACK *pfnInternetInitializeAutoProxyDll) (DWORD dwVersion, LPSTR lpszDownloadedTempFile, LPSTR lpszMime, AutoProxyHelperFunctions *lpAutoProxyCallbacks, LPAUTO_PROXY_SCRIPT_BUFFER lpAutoProxyScriptBuffer);
typedef BOOL(CALLBACK *pfnInternetDeInitializeAutoProxyDll) (LPSTR lpszMime, DWORD dwReserved);
typedef BOOL(CALLBACK *pfnInternetGetProxyInfo) (LPCSTR lpszUrl, DWORD dwUrlLength, LPSTR lpszUrlHostName, DWORD dwUrlHostNameLength, LPSTR *lplpszProxyHostName, LPDWORD lpdwProxyHostNameLength);
typedef enum
{
	WPAD_CACHE_DELETE_CURRENT = 0x0,
	WPAD_CACHE_DELETE_ALL = 0x1
} WPAD_CACHE_DELETE;
INTERNETAPI_(BOOL)DeleteWpadCacheForNetworks(WPAD_CACHE_DELETE);
INTERNETAPI_(BOOL)InternetInitializeAutoProxyDll(DWORD dwReserved);
INTERNETAPI_(BOOL)DetectAutoProxyUrl(LPSTR lpszAutoProxyUrl, DWORD dwAutoProxyUrlLength, DWORD dwDetectFlags);
INTERNETAPI_(BOOL)CreateMD5SSOHash(PWSTR pszChallengeInfo, PWSTR pwszRealm, PWSTR pwszTarget, PBYTE pbHexHash);
#ifdef UNICODE
#define InternetGetConnectedStateEx  InternetGetConnectedStateExW
#else
#ifdef _WINX32_
#define InternetGetConnectedStateEx  InternetGetConnectedStateExA
#else
INTERNETAPI_(BOOL)InternetGetConnectedStateEx(LPDWORD lpdwFlags, LPSTR lpszConnectionName, DWORD dwNameLen, DWORD dwReserved);
#endif
#endif
#define INTERNET_CONNECTION_MODEM           0x01
#define INTERNET_CONNECTION_LAN             0x02
#define INTERNET_CONNECTION_PROXY           0x04
#define INTERNET_CONNECTION_MODEM_BUSY      0x08
#define INTERNET_RAS_INSTALLED              0x10
#define INTERNET_CONNECTION_OFFLINE         0x20
#define INTERNET_CONNECTION_CONFIGURED      0x40
typedef DWORD(CALLBACK *PFN_DIAL_HANDLER) (HWND, LPCSTR, DWORD, LPDWORD);
#define INTERNET_CUSTOMDIAL_CONNECT         0
#define INTERNET_CUSTOMDIAL_UNATTENDED      1
#define INTERNET_CUSTOMDIAL_DISCONNECT      2
#define INTERNET_CUSTOMDIAL_SHOWOFFLINE     4
#define INTERNET_CUSTOMDIAL_SAFE_FOR_UNATTENDED 1
#define INTERNET_CUSTOMDIAL_WILL_SUPPLY_STATE   2
#define INTERNET_CUSTOMDIAL_CAN_HANGUP          4
INTERNETAPI_(BOOL)InternetSetDialStateA(LPCSTR lpszConnectoid, DWORD dwState, DWORD dwReserved);
INTERNETAPI_(BOOL)InternetSetDialStateW(LPCWSTR lpszConnectoid, DWORD dwState, DWORD dwReserved);
#ifdef UNICODE
#define InternetSetDialState  InternetSetDialStateW
#else
#ifdef _WINX32_
#define InternetSetDialState  InternetSetDialStateA
#else
INTERNETAPI_(BOOL)InternetSetDialState(LPCSTR lpszConnectoid, DWORD dwState, DWORD dwReserved);
#endif
#endif
#define INTERNET_DIALSTATE_DISCONNECTED     1
INTERNETAPI_(BOOL)InternetSetPerSiteCookieDecisionA(LPCSTR pchHostName, DWORD dwDecision);
INTERNETAPI_(BOOL)InternetSetPerSiteCookieDecisionW(LPCWSTR pchHostName, DWORD dwDecision);
#ifdef UNICODE
#define InternetSetPerSiteCookieDecision  InternetSetPerSiteCookieDecisionW
#else
#define InternetSetPerSiteCookieDecision  InternetSetPerSiteCookieDecisionA
#endif
INTERNETAPI_(BOOL)InternetGetPerSiteCookieDecisionA(LPCSTR pchHostName, unsigned long *pResult);
INTERNETAPI_(BOOL)InternetGetPerSiteCookieDecisionW(LPCWSTR pchHostName, unsigned long *pResult);
#ifdef UNICODE
#define InternetGetPerSiteCookieDecision  InternetGetPerSiteCookieDecisionW
#else
#define InternetGetPerSiteCookieDecision  InternetGetPerSiteCookieDecisionA
#endif
INTERNETAPI_(BOOL)InternetClearAllPerSiteCookieDecisions();
INTERNETAPI_(BOOL)InternetEnumPerSiteCookieDecisionA(LPSTR pszSiteName, unsigned long *pcSiteNameSize, unsigned long *pdwDecision, unsigned long dwIndex);
INTERNETAPI_(BOOL)InternetEnumPerSiteCookieDecisionW(LPWSTR pszSiteName, unsigned long *pcSiteNameSize, unsigned long *pdwDecision, unsigned long dwIndex);
#ifdef UNICODE
#define InternetEnumPerSiteCookieDecision  InternetEnumPerSiteCookieDecisionW
#else
#define InternetEnumPerSiteCookieDecision  InternetEnumPerSiteCookieDecisionA
#endif
#define INTERNET_IDENTITY_FLAG_PRIVATE_CACHE        0x01
#define INTERNET_IDENTITY_FLAG_SHARED_CACHE         0x02
#define INTERNET_IDENTITY_FLAG_CLEAR_DATA           0x04
#define INTERNET_IDENTITY_FLAG_CLEAR_COOKIES        0x08
#define INTERNET_IDENTITY_FLAG_CLEAR_HISTORY        0x10
#define INTERNET_IDENTITY_FLAG_CLEAR_CONTENT        0x20
#define INTERNET_SUPPRESS_RESET_ALL                 0x00
#define INTERNET_SUPPRESS_COOKIE_POLICY             0x01
#define INTERNET_SUPPRESS_COOKIE_POLICY_RESET       0x02
#define PRIVACY_TEMPLATE_NO_COOKIES     0
#define PRIVACY_TEMPLATE_HIGH           1
#define PRIVACY_TEMPLATE_MEDIUM_HIGH    2
#define PRIVACY_TEMPLATE_MEDIUM         3
#define PRIVACY_TEMPLATE_MEDIUM_LOW     4
#define PRIVACY_TEMPLATE_LOW            5
#define PRIVACY_TEMPLATE_CUSTOM         100
#define PRIVACY_TEMPLATE_ADVANCED       101
#define PRIVACY_TEMPLATE_MAX            PRIVACY_TEMPLATE_LOW
#define PRIVACY_TYPE_FIRST_PARTY        0
#define PRIVACY_TYPE_THIRD_PARTY        1
INTERNETAPI_(DWORD)PrivacySetZonePreferenceW(DWORD dwZone, DWORD dwType, DWORD dwTemplate, LPCWSTR pszPreference);
INTERNETAPI_(DWORD)PrivacyGetZonePreferenceW(DWORD dwZone, DWORD dwType, LPDWORD pdwTemplate, LPWSTR pszBuffer, LPDWORD pdwBufferLength);
#include <poppack.h>
#endif
