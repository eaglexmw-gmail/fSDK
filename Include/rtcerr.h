/*+@@file@@----------------------------------------------------------------*//*!
 \file		rtcerr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 20:45:37 2016
 \date		Modified on Fri Sep 16 20:45:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef RTCERR_H__
#define RTCERR_H__
#if __POCC__ >= 500
#pragma once
#endif
#define FACILITY_SIP_STATUS_CODE         0xEF
#define FACILITY_RTC_INTERFACE           0xEE
#define FACILITY_PINT_STATUS_CODE        0xF0
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_RTC_ERROR        0x2
#define RTC_E_SIP_CODECS_DO_NOT_MATCH    ((HRESULT)0x80EE0000L)
#define RTC_E_SIP_STREAM_PRESENT         ((HRESULT)0x80EE0001L)
#define RTC_E_SIP_STREAM_NOT_PRESENT     ((HRESULT)0x80EE0002L)
#define RTC_E_SIP_NO_STREAM              ((HRESULT)0x80EE0003L)
#define RTC_E_SIP_PARSE_FAILED           ((HRESULT)0x80EE0004L)
#define RTC_E_SIP_HEADER_NOT_PRESENT     ((HRESULT)0x80EE0005L)
#define RTC_E_SDP_NOT_PRESENT            ((HRESULT)0x80EE0006L)
#define RTC_E_SDP_PARSE_FAILED           ((HRESULT)0x80EE0007L)
#define RTC_E_SDP_UPDATE_FAILED          ((HRESULT)0x80EE0008L)
#define RTC_E_SDP_MULTICAST              ((HRESULT)0x80EE0009L)
#define RTC_E_SDP_CONNECTION_ADDR        ((HRESULT)0x80EE000AL)
#define RTC_E_SDP_NO_MEDIA               ((HRESULT)0x80EE000BL)
#define RTC_E_SIP_TIMEOUT                ((HRESULT)0x80EE000CL)
#define RTC_E_SDP_FAILED_TO_BUILD        ((HRESULT)0x80EE000DL)
#define RTC_E_SIP_INVITE_TRANSACTION_PENDING ((HRESULT)0x80EE000EL)
#define RTC_E_SIP_AUTH_HEADER_SENT       ((HRESULT)0x80EE000FL)
#define RTC_E_SIP_AUTH_TYPE_NOT_SUPPORTED ((HRESULT)0x80EE0010L)
#define RTC_E_SIP_AUTH_FAILED            ((HRESULT)0x80EE0011L)
#define RTC_E_INVALID_SIP_URL            ((HRESULT)0x80EE0012L)
#define RTC_E_DESTINATION_ADDRESS_LOCAL  ((HRESULT)0x80EE0013L)
#define RTC_E_INVALID_ADDRESS_LOCAL      ((HRESULT)0x80EE0014L)
#define RTC_E_DESTINATION_ADDRESS_MULTICAST ((HRESULT)0x80EE0015L)
#define RTC_E_INVALID_PROXY_ADDRESS      ((HRESULT)0x80EE0016L)
#define RTC_E_SIP_TRANSPORT_NOT_SUPPORTED ((HRESULT)0x80EE0017L)
#define RTC_E_SIP_NEED_MORE_DATA         ((HRESULT)0x80EE0018L)
#define RTC_E_SIP_CALL_DISCONNECTED      ((HRESULT)0x80EE0019L)
#define RTC_E_SIP_REQUEST_DESTINATION_ADDR_NOT_PRESENT ((HRESULT)0x80EE001AL)
#define RTC_E_SIP_UDP_SIZE_EXCEEDED      ((HRESULT)0x80EE001BL)
#define RTC_E_SIP_SSL_TUNNEL_FAILED      ((HRESULT)0x80EE001CL)
#define RTC_E_SIP_SSL_NEGOTIATION_TIMEOUT ((HRESULT)0x80EE001DL)
#define RTC_E_SIP_STACK_SHUTDOWN         ((HRESULT)0x80EE001EL)
#define RTC_E_MEDIA_CONTROLLER_STATE     ((HRESULT)0x80EE001FL)
#define RTC_E_MEDIA_NEED_TERMINAL        ((HRESULT)0x80EE0020L)
#define RTC_E_MEDIA_AUDIO_DEVICE_NOT_AVAILABLE ((HRESULT)0x80EE0021L)
#define RTC_E_MEDIA_VIDEO_DEVICE_NOT_AVAILABLE ((HRESULT)0x80EE0022L)
#define RTC_E_START_STREAM               ((HRESULT)0x80EE0023L)
#define RTC_E_MEDIA_AEC                  ((HRESULT)0x80EE0024L)
#define RTC_E_CLIENT_NOT_INITIALIZED     ((HRESULT)0x80EE0025L)
#define RTC_E_CLIENT_ALREADY_INITIALIZED ((HRESULT)0x80EE0026L)
#define RTC_E_CLIENT_ALREADY_SHUT_DOWN   ((HRESULT)0x80EE0027L)
#define RTC_E_PRESENCE_NOT_ENABLED       ((HRESULT)0x80EE0028L)
#define RTC_E_INVALID_SESSION_TYPE       ((HRESULT)0x80EE0029L)
#define RTC_E_INVALID_SESSION_STATE      ((HRESULT)0x80EE002AL)
#define RTC_E_NO_PROFILE                 ((HRESULT)0x80EE002BL)
#define RTC_E_LOCAL_PHONE_NEEDED         ((HRESULT)0x80EE002CL)
#define RTC_E_NO_DEVICE                  ((HRESULT)0x80EE002DL)
#define RTC_E_INVALID_PROFILE            ((HRESULT)0x80EE002EL)
#define RTC_E_PROFILE_NO_PROVISION       ((HRESULT)0x80EE002FL)
#define RTC_E_PROFILE_NO_KEY             ((HRESULT)0x80EE0030L)
#define RTC_E_PROFILE_NO_NAME            ((HRESULT)0x80EE0031L)
#define RTC_E_PROFILE_NO_USER            ((HRESULT)0x80EE0032L)
#define RTC_E_PROFILE_NO_USER_URI        ((HRESULT)0x80EE0033L)
#define RTC_E_PROFILE_NO_SERVER          ((HRESULT)0x80EE0034L)
#define RTC_E_PROFILE_NO_SERVER_ADDRESS  ((HRESULT)0x80EE0035L)
#define RTC_E_PROFILE_NO_SERVER_PROTOCOL ((HRESULT)0x80EE0036L)
#define RTC_E_PROFILE_INVALID_SERVER_PROTOCOL ((HRESULT)0x80EE0037L)
#define RTC_E_PROFILE_INVALID_SERVER_AUTHMETHOD ((HRESULT)0x80EE0038L)
#define RTC_E_PROFILE_INVALID_SERVER_ROLE ((HRESULT)0x80EE0039L)
#define RTC_E_PROFILE_MULTIPLE_REGISTRARS ((HRESULT)0x80EE003AL)
#define RTC_E_PROFILE_INVALID_SESSION    ((HRESULT)0x80EE003BL)
#define RTC_E_PROFILE_INVALID_SESSION_PARTY ((HRESULT)0x80EE003CL)
#define RTC_E_PROFILE_INVALID_SESSION_TYPE ((HRESULT)0x80EE003DL)
#define RTC_E_OPERATION_WITH_TOO_MANY_PARTICIPANTS ((HRESULT)0x80EE003EL)
#define RTC_E_BASIC_AUTH_SET_TLS         ((HRESULT)0x80EE003FL)
#define RTC_E_SIP_HIGH_SECURITY_SET_TLS  ((HRESULT)0x80EE0040L)
#define RTC_S_ROAMING_NOT_SUPPORTED      ((HRESULT)0x00EE0041L)
#define RTC_E_PROFILE_SERVER_UNAUTHORIZED ((HRESULT)0x80EE0042L)
#define RTC_E_DUPLICATE_REALM            ((HRESULT)0x80EE0043L)
#define RTC_E_POLICY_NOT_ALLOW           ((HRESULT)0x80EE0044L)
#define RTC_E_PORT_MAPPING_UNAVAILABLE   ((HRESULT)0x80EE0045L)
#define RTC_E_PORT_MAPPING_FAILED        ((HRESULT)0x80EE0046L)
#define RTC_E_SECURITY_LEVEL_NOT_COMPATIBLE ((HRESULT)0x80EE0047L)
#define RTC_E_SECURITY_LEVEL_NOT_DEFINED ((HRESULT)0x80EE0048L)
#define RTC_E_SECURITY_LEVEL_NOT_SUPPORTED_BY_PARTICIPANT ((HRESULT)0x80EE0049L)
#define RTC_E_DUPLICATE_BUDDY            ((HRESULT)0x80EE004AL)
#define RTC_E_DUPLICATE_WATCHER          ((HRESULT)0x80EE004BL)
#define RTC_E_MALFORMED_XML              ((HRESULT)0x80EE004CL)
#define RTC_E_ROAMING_OPERATION_INTERRUPTED ((HRESULT)0x80EE004DL)
#define RTC_E_ROAMING_FAILED             ((HRESULT)0x80EE004EL)
#define RTC_E_INVALID_BUDDY_LIST         ((HRESULT)0x80EE004FL)
#define RTC_E_INVALID_ACL_LIST           ((HRESULT)0x80EE0050L)
#define RTC_E_NO_GROUP                   ((HRESULT)0x80EE0051L)
#define RTC_E_DUPLICATE_GROUP            ((HRESULT)0x80EE0052L)
#define RTC_E_TOO_MANY_GROUPS            ((HRESULT)0x80EE0053L)
#define RTC_E_NO_BUDDY                   ((HRESULT)0x80EE0054L)
#define RTC_E_NO_WATCHER                 ((HRESULT)0x80EE0055L)
#define RTC_E_NO_REALM                   ((HRESULT)0x80EE0056L)
#define RTC_E_NO_TRANSPORT               ((HRESULT)0x80EE0057L)
#define RTC_E_NOT_EXIST                  ((HRESULT)0x80EE0058L)
#define RTC_E_INVALID_PREFERENCE_LIST    ((HRESULT)0x80EE0059L)
#define RTC_E_MAX_PENDING_OPERATIONS     ((HRESULT)0x80EE005AL)
#define RTC_E_TOO_MANY_RETRIES           ((HRESULT)0x80EE005BL)
#define RTC_E_INVALID_PORTRANGE          ((HRESULT)0x80EE005CL)
#define RTC_E_SIP_CALL_CONNECTION_NOT_ESTABLISHED ((HRESULT)0x80EE005DL)
#define RTC_E_SIP_ADDITIONAL_PARTY_IN_TWO_PARTY_SESSION ((HRESULT)0x80EE005EL)
#define RTC_E_SIP_PARTY_ALREADY_IN_SESSION ((HRESULT)0x80EE005FL)
#define RTC_E_SIP_OTHER_PARTY_JOIN_IN_PROGRESS ((HRESULT)0x80EE0060L)
#define RTC_E_INVALID_OBJECT_STATE       ((HRESULT)0x80EE0061L)
#define RTC_E_PRESENCE_ENABLED           ((HRESULT)0x80EE0062L)
#define RTC_E_ROAMING_ENABLED            ((HRESULT)0x80EE0063L)
#define RTC_E_SIP_TLS_INCOMPATIBLE_ENCRYPTION ((HRESULT)0x80EE0064L)
#define RTC_E_SIP_INVALID_CERTIFICATE    ((HRESULT)0x80EE0065L)
#define RTC_E_SIP_DNS_FAIL               ((HRESULT)0x80EE0066L)
#define RTC_E_SIP_TCP_FAIL               ((HRESULT)0x80EE0067L)
#define RTC_E_TOO_SMALL_EXPIRES_VALUE    ((HRESULT)0x80EE0068L)
#define RTC_E_SIP_TLS_FAIL               ((HRESULT)0x80EE0069L)
#define RTC_E_NOT_PRESENCE_PROFILE       ((HRESULT)0x80EE006AL)
#define RTC_E_SIP_INVITEE_PARTY_TIMEOUT  ((HRESULT)0x80EE006BL)
#define RTC_E_SIP_AUTH_TIME_SKEW         ((HRESULT)0x80EE006CL)
#define RTC_E_INVALID_REGISTRATION_STATE ((HRESULT)0x80EE006DL)
#define RTC_E_MEDIA_DISABLED             ((HRESULT)0x80EE006EL)
#define RTC_E_MEDIA_ENABLED              ((HRESULT)0x80EE006FL)
#define RTC_E_REFER_NOT_ACCEPTED         ((HRESULT)0x80EE0070L)
#define RTC_E_REFER_NOT_ALLOWED          ((HRESULT)0x80EE0071L)
#define RTC_E_REFER_NOT_EXIST            ((HRESULT)0x80EE0072L)
#define RTC_E_SIP_HOLD_OPERATION_PENDING ((HRESULT)0x80EE0073L)
#define RTC_E_SIP_UNHOLD_OPERATION_PENDING ((HRESULT)0x80EE0074L)
#define RTC_E_MEDIA_SESSION_NOT_EXIST    ((HRESULT)0x80EE0075L)
#define RTC_E_MEDIA_SESSION_IN_HOLD      ((HRESULT)0x80EE0076L)
#define RTC_E_ANOTHER_MEDIA_SESSION_ACTIVE ((HRESULT)0x80EE0077L)
#define RTC_E_MAX_REDIRECTS              ((HRESULT)0x80EE0078L)
#define RTC_E_REDIRECT_PROCESSING_FAILED ((HRESULT)0x80EE0079L)
#define RTC_E_LISTENING_SOCKET_NOT_EXIST ((HRESULT)0x80EE007AL)
#define RTC_E_INVALID_LISTEN_SOCKET      ((HRESULT)0x80EE007BL)
#define RTC_E_PORT_MANAGER_ALREADY_SET   ((HRESULT)0x80EE007CL)
#define RTC_E_SECURITY_LEVEL_ALREADY_SET ((HRESULT)0x80EE007DL)
#define RTC_E_UDP_NOT_SUPPORTED          ((HRESULT)0x80EE007EL)
#define RTC_E_SIP_REFER_OPERATION_PENDING ((HRESULT)0x80EE007FL)
#define RTC_E_PLATFORM_NOT_SUPPORTED     ((HRESULT)0x80EE0080L)
#define RTC_E_SIP_PEER_PARTICIPANT_IN_MULTIPARTY_SESSION ((HRESULT)0x80EE0081L)
#define RTC_E_NOT_ALLOWED                ((HRESULT)0x80EE0082L)
#define RTC_E_REGISTRATION_DEACTIVATED   ((HRESULT)0x80EE0083L)
#define RTC_E_REGISTRATION_REJECTED      ((HRESULT)0x80EE0084L)
#define RTC_E_REGISTRATION_UNREGISTERED  ((HRESULT)0x80EE0085L)
#define RTC_E_STATUS_INFO_TRYING         ((HRESULT)0x00EF0064L)
#define RTC_E_STATUS_INFO_RINGING        ((HRESULT)0x00EF00B4L)
#define RTC_E_STATUS_INFO_CALL_FORWARDING ((HRESULT)0x00EF00B5L)
#define RTC_E_STATUS_INFO_QUEUED         ((HRESULT)0x00EF00B6L)
#define RTC_E_STATUS_SESSION_PROGRESS    ((HRESULT)0x00EF00B7L)
#define RTC_E_STATUS_SUCCESS             ((HRESULT)0x00EF00C8L)
#define RTC_E_STATUS_REDIRECT_MULTIPLE_CHOICES ((HRESULT)0x80EF012CL)
#define RTC_E_STATUS_REDIRECT_MOVED_PERMANENTLY ((HRESULT)0x80EF012DL)
#define RTC_E_STATUS_REDIRECT_MOVED_TEMPORARILY ((HRESULT)0x80EF012EL)
#define RTC_E_STATUS_REDIRECT_SEE_OTHER  ((HRESULT)0x80EF012FL)
#define RTC_E_STATUS_REDIRECT_USE_PROXY  ((HRESULT)0x80EF0131L)
#define RTC_E_STATUS_REDIRECT_ALTERNATIVE_SERVICE ((HRESULT)0x80EF017CL)
#define RTC_E_STATUS_CLIENT_BAD_REQUEST  ((HRESULT)0x80EF0190L)
#define RTC_E_STATUS_CLIENT_UNAUTHORIZED ((HRESULT)0x80EF0191L)
#define RTC_E_STATUS_CLIENT_PAYMENT_REQUIRED ((HRESULT)0x80EF0192L)
#define RTC_E_STATUS_CLIENT_FORBIDDEN    ((HRESULT)0x80EF0193L)
#define RTC_E_STATUS_CLIENT_NOT_FOUND    ((HRESULT)0x80EF0194L)
#define RTC_E_STATUS_CLIENT_METHOD_NOT_ALLOWED ((HRESULT)0x80EF0195L)
#define RTC_E_STATUS_CLIENT_NOT_ACCEPTABLE ((HRESULT)0x80EF0196L)
#define RTC_E_STATUS_CLIENT_PROXY_AUTHENTICATION_REQUIRED ((HRESULT)0x80EF0197L)
#define RTC_E_STATUS_CLIENT_REQUEST_TIMEOUT ((HRESULT)0x80EF0198L)
#define RTC_E_STATUS_CLIENT_CONFLICT     ((HRESULT)0x80EF0199L)
#define RTC_E_STATUS_CLIENT_GONE         ((HRESULT)0x80EF019AL)
#define RTC_E_STATUS_CLIENT_LENGTH_REQUIRED ((HRESULT)0x80EF019BL)
#define RTC_E_STATUS_CLIENT_REQUEST_ENTITY_TOO_LARGE ((HRESULT)0x80EF019DL)
#define RTC_E_STATUS_CLIENT_REQUEST_URI_TOO_LARGE ((HRESULT)0x80EF019EL)
#define RTC_E_STATUS_CLIENT_UNSUPPORTED_MEDIA_TYPE ((HRESULT)0x80EF019FL)
#define RTC_E_STATUS_CLIENT_BAD_EXTENSION ((HRESULT)0x80EF01A4L)
#define RTC_E_STATUS_CLIENT_TEMPORARILY_NOT_AVAILABLE ((HRESULT)0x80EF01E0L)
#define RTC_E_STATUS_CLIENT_TRANSACTION_DOES_NOT_EXIST ((HRESULT)0x80EF01E1L)
#define RTC_E_STATUS_CLIENT_LOOP_DETECTED ((HRESULT)0x80EF01E2L)
#define RTC_E_STATUS_CLIENT_TOO_MANY_HOPS ((HRESULT)0x80EF01E3L)
#define RTC_E_STATUS_CLIENT_ADDRESS_INCOMPLETE ((HRESULT)0x80EF01E4L)
#define RTC_E_STATUS_CLIENT_AMBIGUOUS    ((HRESULT)0x80EF01E5L)
#define RTC_E_STATUS_CLIENT_BUSY_HERE    ((HRESULT)0x80EF01E6L)
#define RTC_E_STATUS_REQUEST_TERMINATED  ((HRESULT)0x80EF01E7L)
#define RTC_E_STATUS_NOT_ACCEPTABLE_HERE ((HRESULT)0x80EF01E8L)
#define RTC_E_STATUS_SERVER_INTERNAL_ERROR ((HRESULT)0x80EF01F4L)
#define RTC_E_STATUS_SERVER_NOT_IMPLEMENTED ((HRESULT)0x80EF01F5L)
#define RTC_E_STATUS_SERVER_BAD_GATEWAY  ((HRESULT)0x80EF01F6L)
#define RTC_E_STATUS_SERVER_SERVICE_UNAVAILABLE ((HRESULT)0x80EF01F7L)
#define RTC_E_STATUS_SERVER_SERVER_TIMEOUT ((HRESULT)0x80EF01F8L)
#define RTC_E_STATUS_SERVER_VERSION_NOT_SUPPORTED ((HRESULT)0x80EF01F9L)
#define RTC_E_STATUS_GLOBAL_BUSY_EVERYWHERE ((HRESULT)0x80EF0258L)
#define RTC_E_STATUS_GLOBAL_DECLINE      ((HRESULT)0x80EF025BL)
#define RTC_E_STATUS_GLOBAL_DOES_NOT_EXIST_ANYWHERE ((HRESULT)0x80EF025CL)
#define RTC_E_STATUS_GLOBAL_NOT_ACCEPTABLE ((HRESULT)0x80EF025EL)
#define RTC_E_PINT_STATUS_REJECTED_BUSY  ((HRESULT)0x80F00005L)
#define RTC_E_PINT_STATUS_REJECTED_NO_ANSWER ((HRESULT)0x80F00006L)
#define RTC_E_PINT_STATUS_REJECTED_ALL_BUSY ((HRESULT)0x80F00007L)
#define RTC_E_PINT_STATUS_REJECTED_PL_FAILED ((HRESULT)0x80F00008L)
#define RTC_E_PINT_STATUS_REJECTED_SW_FAILED ((HRESULT)0x80F00009L)
#define RTC_E_PINT_STATUS_REJECTED_CANCELLED ((HRESULT)0x80F0000AL)
#define RTC_E_PINT_STATUS_REJECTED_BADNUMBER ((HRESULT)0x80F0000BL)
#endif
