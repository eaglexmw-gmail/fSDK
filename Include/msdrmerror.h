/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdrmerror.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:35:20 2016
 \date		Modified on Sun Aug 14 19:35:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MSDRMERROR_H_
#define __MSDRMERROR_H_
#if __POCC__ >= 500
#pragma once
#endif
#define GetLastHR()                 HRESULT_FROM_WIN32(::GetLastError())
#define MSDRM_MAKE_ERROR(z,e)       MAKE_HRESULT(1,FACILITY_ITF,((z)|(e)))
#define MSDRM_MAKE_WARNING(z,w)     MAKE_HRESULT(0,FACILITY_ITF,((z)|(w)))
#ifndef E_DRM_INSUFFICIENT_BUFFER
#define E_DRM_INSUFFICIENT_BUFFER __HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER)
#endif
#define MSDRM_CLIENT_ZONE  0xCF00
#define MSDRM_POLICY_ZONE  0x9300
#define E_DRM_INVALID_LICENSE                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x00)
#define E_DRM_INFO_NOT_IN_LICENSE                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x01)
#define E_DRM_INVALID_LICENSE_SIGNATURE            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x02)
#define E_DRM_ENCRYPTION_NOT_PERMITTED             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x04)
#define E_DRM_RIGHT_NOT_GRANTED                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x05)
#define E_DRM_INVALID_VERSION                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x06)
#define E_DRM_INVALID_ENCODING_TYPE                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x07)
#define E_DRM_INVALID_NUMERICAL_VALUE              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x08)
#define E_DRM_INVALID_ALGORITHM_TYPE               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x09)
#define E_DRM_ENV_NOT_LOADED                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0A)
#define E_DRM_ENV_CANNOT_LOAD                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0B)
#define E_DRM_TOO_MANY_LOADED_ENVIRONMENTS         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0C)
#define E_DRM_INCOMPATIBLE_OBJECTS                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0E)
#define E_DRM_LIB_FAIL                             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0F)
#define E_DRM_ENABLING_PRINCIPAL_FAILURE          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x10)
#define E_DRM_INFO_NOT_PRESENT                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x11)
#define E_DRM_BAD_GET_INFO_QUERY                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x12)
#define E_DRM_KEY_TYPE_UNSUPPORTED                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x13)
#define E_DRM_CRYPTO_OPERATION_UNSUPPORTED        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x14)
#define E_DRM_CLOCK_ROLL_BACK_DETECTED            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x15)
#define E_DRM_QUERY_REPORTS_NO_RESULTS            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x16)
#define E_DRM_UNEXPECTED_EXCEPTION                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x17)
#define E_DRM_BIND_VALIDITY_TIME_VIOLATED         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x18)
#define E_DRM_BROKEN_CERT_CHAIN                   MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x19)
#define E_DRM_BIND_POLICY_VIOLATION               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1B)
#define E_DRM_MANIFEST_POLICY_VIOLATION           MSDRM_MAKE_ERROR(MSDRM_POLICY_ZONE,0x000C)
#define E_DRM_BIND_REVOKED_LICENSE                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1C)
#define E_DRM_BIND_REVOKED_ISSUER                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1D)
#define E_DRM_BIND_REVOKED_PRINCIPAL              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1E)
#define E_DRM_BIND_REVOKED_RESOURCE               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1F)
#define E_DRM_BIND_REVOKED_MODULE                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x20)
#define E_DRM_BIND_CONTENT_NOT_IN_EUL             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x21)
#define E_DRM_BIND_ACCESS_PRINCIPAL_NOT_ENABLING  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x22)
#define E_DRM_BIND_ACCESS_UNSATISFIED             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x23)
#define E_DRM_BIND_INDICATED_PRINCIPAL_MISSING    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x24)
#define E_DRM_BIND_MACHINE_NOT_FOUND_IN_GROUP_IDENTITY MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x25)
#define E_DRM_LIB_UNSUPPORTED_PLUGIN              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x26)
#define E_DRM_BIND_REVOCATION_LIST_STALE          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x27)
#define E_DRM_BIND_NO_APPLICABLE_REVOCATION_LIST  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x28)
#define E_DRM_INVALID_HANDLE                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x2C)
#define E_DRM_BIND_INTERVALTIME_VIOLATED          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x2F)
#define E_DRM_BIND_NO_SATISFIED_RIGHTS_GROUP      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x30)
#define E_DRM_BIND_SPECIFIED_WORK_MISSING         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x31)
#define E_DRM_NO_MORE_DATA                        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x33)
#define E_DRM_LICENSEACQUISITIONFAILED            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x34)
#define E_DRM_ID_MISMATCH                         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x35)
#define E_DRM_TOO_MANY_CERTS                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x36)
#define E_DRM_NO_DPURL_FOUND                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x37)
#define E_DRM_ALREADY_IN_PROGRESS                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x38)
#define E_DRM_GROUPID_NOT_SET                     MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x39)
#define E_DRM_RECORD_NOT_FOUND                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3A)
#define E_DRM_NO_CONNECT                          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3B)
#define E_DRM_NO_LICENSE                          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3C)
#define E_DRM_NEEDS_MACHINE_ACTIVATION            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3D)
#define E_DRM_NEEDS_GROUPIDENTITY_ACTIVATION      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3E)
#define E_DRM_ACTIVATIONFAILED                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x40)
#define E_DRM_ABORTED                             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x41)
#define E_DRM_OUT_OF_QUOTA                        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x42)
#define E_DRM_AUTHENTICATION_FAILED               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x43)
#define E_DRM_SERVER_ERROR                        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x44)
#define E_DRM_INSTALLATION_FAILED                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x45)
#define E_DRM_HID_CORRUPTED                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x46)
#define E_DRM_INVALID_SERVER_RESPONSE             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x47)
#define E_DRM_SERVICE_NOT_FOUND                   MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x48)
#define E_DRM_USE_DEFAULT                         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x49)
#define E_DRM_SERVER_NOT_FOUND                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4A)
#define E_DRM_INVALID_EMAIL                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4B)
#define E_DRM_VALIDITYTIME_VIOLATION              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4C)
#define E_DRM_OUTDATED_MODULE                     MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4D)
#define E_DRM_SERVICE_MOVED                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5B)
#define E_DRM_SERVICE_GONE                        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5C)
#define E_DRM_AD_ENTRY_NOT_FOUND                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5D)
#define E_DRM_NOT_A_CHAIN                         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5E)
#define E_DRM_REQUEST_DENIED                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5F)
#define E_DRM_NOT_SET                             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4E)
#define E_DRM_METADATA_NOT_SET                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4F)
#define E_DRM_REVOCATIONINFO_NOT_SET              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x50)
#define E_DRM_INVALID_TIMEINFO                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x51)
#define E_DRM_RIGHT_NOT_SET                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x52)
#define E_DRM_BIND_NTLM_FAIL                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x53)
#define E_DRM_INVALID_ISSUANCELICENSE_TEMPLATE    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x54)
#define E_DRM_INVALID_KEY_LENGTH                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x55)
#define E_DRM_EXPIRED_OFFICIAL_ISSUANCELICENSE_TEMPLATE     MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x57)
#define E_DRM_INVALID_CLIENT_LICENSOR_CERTIFICATE           MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x58)
#define E_DRM_HID_INVALID                         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x59)
#define E_DRM_EMAIL_NOT_VERIFIED                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5A)
#define E_DRM_DEBUGGER_DETECTED                   MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x60)
#define S_DRM_REQUEST_PREPARED                    MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x00)
#define S_DRM_ALREADY_ACTIVATED                   MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x01)
#define S_DRM_CONNECTING                          MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x02)
#define S_DRM_CONNECTED                           MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x03)
#define S_DRM_COMPLETED                           MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x04)
#define S_DRM_INPROGRESS                          MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x05)
#define E_DRM_INVALID_LOCKBOX_TYPE                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x70)
#define E_DRM_INVALID_LOCKBOX_PATH                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x71)
#define E_DRM_INVALID_REGISTRY_PATH               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x72)
#define E_DRM_NO_AES_PROVIDER                     MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x73)
#define E_DRM_GLOBAL_OPTION_ALREADY_SET           MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x74)
#define E_DRM_OWNER_LICENSE_NOT_FOUND             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x75)
#define E_DRM_INVALID_WINDOW                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x76)
#define E_DRM_WINDOW_REGISTRATION_FAILED          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x77)
#define E_DRM_SAFEMODE_OS_DETECTED                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x78)
#define E_DRM_PLATFORM_POLICY_VIOLATION           MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x79)
#define E_DRM_TEMPLATE_ACQUISITION_FAILED         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x80)
#define E_DRM_ISSUANCELICENSE_LENGTH_LIMIT_EXCEEDED         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x81)
#endif
