/*+@@file@@----------------------------------------------------------------*//*!
 \file		slerror.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:49:07 2016
 \date		Modified on Fri Sep 16 23:49:07 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __SLERROR_H__
#define __SLERROR_H__
#if defined(SPP_CODE_PROJECT_MARKER) || defined(SPP_CODE_PROJECT_MARKER_SECURE)
#if !defined(SPP_PUBLISHING_INCLUDED_FROM_TRAMPOLINE) && !defined(SPP_PUBLISHING_USE_FORCE_OFFICIAL)
#error this header file cannot be included directly from SPP projects; use sppinc_* prefix instead.
#endif
#endif
#if __POCC__ >= 500
#pragma once
#endif
#define SL_SERVER_ZONE     0xB000
#define SL_MSCH_ZONE       0xC000
#define SL_INTERNAL_ZONE   0xE000
#define SL_CLIENTAPI_ZONE  0xF000
#define IS_SL_SERVER_ERROR(hr)     ((hr & 0xF000) == SL_SERVER_ZONE)
#define IS_SL_MSCH_ERROR(hr)       ((hr & 0xF000) == SL_MSCH_ZONE)
#define IS_SL_INTERNAL_ERROR(hr)   ((hr & 0xF000) == SL_INTERNAL_ZONE)
#define IS_SL_SERVICE_ERROR(hr)    ((hr & 0xF000) == SL_SERVICE_ZONE)
#define IS_SL_CLIENTAPI_ERROR(hr)  ((hr & 0xF000) == SL_CLIENTAPI_ZONE)
#define IS_SL_VGA_STRICT_ERROR(hr)  (((hr & 0xF000) == SL_MSCH_ZONE) && ((hr & 0xFFF) >= 0x401) && ((hr & 0xFFF) <= 0x496))
#define IS_SL_VGA_LITE_ERROR(hr)  (((hr & 0xF000) == SL_MSCH_ZONE) && ((hr & 0xFFF) >= 0x497) && ((hr & 0xFFF) <= 0x600))
#define FACILITY_SL_ITF                  0x4
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3
#define SL_E_SRV_INVALID_PUBLISH_LICENSE ((HRESULT)0xC004B001L)
#define SL_E_SRV_INVALID_PRODUCT_KEY_LICENSE ((HRESULT)0xC004B002L)
#define SL_E_SRV_INVALID_RIGHTS_ACCOUNT_LICENSE ((HRESULT)0xC004B003L)
#define SL_E_SRV_INVALID_LICENSE_STRUCTURE ((HRESULT)0xC004B004L)
#define SL_E_SRV_AUTHORIZATION_FAILED    ((HRESULT)0xC004B005L)
#define SL_E_SRV_INVALID_BINDING         ((HRESULT)0xC004B006L)
#define SL_E_SRV_SERVER_PONG             ((HRESULT)0xC004B007L)
#define SL_E_SRV_INVALID_PAYLOAD         ((HRESULT)0xC004B008L)
#define SL_E_SRV_INVALID_SECURITY_PROCESSOR_LICENSE ((HRESULT)0xC004B009L)
#define SL_E_SRV_CLIENT_CLOCK_OUT_OF_SYNC ((HRESULT)0xC004B011L)
#define SL_E_SRV_GENERAL_ERROR           ((HRESULT)0xC004B100L)
#define SL_E_CHPA_PRODUCT_KEY_OUT_OF_RANGE ((HRESULT)0xC004C001L)
#define SL_E_CHPA_INVALID_BINDING        ((HRESULT)0xC004C002L)
#define SL_E_CHPA_PRODUCT_KEY_BLOCKED    ((HRESULT)0xC004C003L)
#define SL_E_CHPA_INVALID_PRODUCT_KEY    ((HRESULT)0xC004C004L)
#define SL_E_CHPA_BINDING_NOT_FOUND      ((HRESULT)0xC004C005L)
#define SL_E_CHPA_BINDING_MAPPING_NOT_FOUND ((HRESULT)0xC004C006L)
#define SL_E_CHPA_UNSUPPORTED_PRODUCT_KEY ((HRESULT)0xC004C007L)
#define SL_E_CHPA_MAXIMUM_UNLOCK_EXCEEDED ((HRESULT)0xC004C008L)
#define SL_E_CHPA_ACTCONFIG_ID_NOT_FOUND ((HRESULT)0xC004C009L)
#define SL_E_CHPA_INVALID_PRODUCT_DATA_ID ((HRESULT)0xC004C00AL)
#define SL_E_CHPA_INVALID_PRODUCT_DATA   ((HRESULT)0xC004C00BL)
#define SL_E_CHPA_SYSTEM_ERROR           ((HRESULT)0xC004C00CL)
#define SL_E_CHPA_INVALID_ACTCONFIG_ID   ((HRESULT)0xC004C00DL)
#define SL_E_CHPA_INVALID_PRODUCT_KEY_LENGTH ((HRESULT)0xC004C00EL)
#define SL_E_CHPA_INVALID_PRODUCT_KEY_FORMAT ((HRESULT)0xC004C00FL)
#define SL_E_CHPA_INVALID_PRODUCT_KEY_CHAR ((HRESULT)0xC004C010L)
#define SL_E_CHPA_INVALID_BINDING_URI    ((HRESULT)0xC004C011L)
#define SL_E_CHPA_NETWORK_ERROR          ((HRESULT)0xC004C012L)
#define SL_E_CHPA_DATABASE_ERROR         ((HRESULT)0xC004C013L)
#define SL_E_CHPA_INVALID_ARGUMENT       ((HRESULT)0xC004C014L)
#define SL_E_CHPA_DMAK_LIMIT_EXCEEDED    ((HRESULT)0xC004C020L)
#define SL_E_CHPA_DMAK_EXTENSION_LIMIT_EXCEEDED ((HRESULT)0xC004C021L)
#define SL_E_CHPA_REISSUANCE_LIMIT_NOT_FOUND ((HRESULT)0xC004C022L)
#define SL_E_CHPA_OVERRIDE_REQUEST_NOT_FOUND ((HRESULT)0xC004C023L)
#define SL_E_CHPA_OEM_SLP_COA0           ((HRESULT)0xC004C016L)
#define SL_E_CHPA_PRODUCT_KEY_BLOCKED_IPLOCATION ((HRESULT)0xC004C017L)
#define SL_E_CHPA_RESPONSE_NOT_AVAILABLE ((HRESULT)0xC004C015L)
#define SL_E_CHPA_GENERAL_ERROR          ((HRESULT)0xC004C050L)
#define SL_E_CHPA_TIMEBASED_ACTIVATION_BEFORE_START_DATE ((HRESULT)0xC004C030L)
#define SL_E_CHPA_TIMEBASED_ACTIVATION_AFTER_END_DATE ((HRESULT)0xC004C031L)
#define SL_E_CHPA_TIMEBASED_ACTIVATION_NOT_AVAILABLE ((HRESULT)0xC004C032L)
#define SL_E_CHPA_TIMEBASED_PRODUCT_KEY_NOT_CONFIGURED ((HRESULT)0xC004C033L)
#define SL_E_CHPA_NO_RULES_TO_ACTIVATE   ((HRESULT)0xC004C04FL)
#define SL_E_CHPA_BUSINESS_RULE_INPUT_NOT_FOUND ((HRESULT)0xC004C700L)
#define SL_E_CHPA_NULL_VALUE_FOR_PROPERTY_NAME_OR_ID ((HRESULT)0xC004C750L)
#define SL_E_CHPA_UNKNOWN_PROPERTY_NAME  ((HRESULT)0xC004C751L)
#define SL_E_CHPA_UNKNOWN_PROPERTY_ID    ((HRESULT)0xC004C752L)
#define SL_E_CHPA_FAILED_TO_UPDATE_PRODUCTKEY_BINDING ((HRESULT)0xC004C755L)
#define SL_E_CHPA_FAILED_TO_INSERT_PRODUCTKEY_BINDING ((HRESULT)0xC004C756L)
#define SL_E_CHPA_FAILED_TO_DELETE_PRODUCTKEY_BINDING ((HRESULT)0xC004C757L)
#define SL_E_CHPA_FAILED_TO_PROCESS_PRODUCT_KEY_BINDINGS_XML ((HRESULT)0xC004C758L)
#define SL_E_CHPA_FAILED_TO_INSERT_PRODUCT_KEY_PROPERTY ((HRESULT)0xC004C75AL)
#define SL_E_CHPA_FAILED_TO_UPDATE_PRODUCT_KEY_PROPERTY ((HRESULT)0xC004C75BL)
#define SL_E_CHPA_FAILED_TO_DELETE_PRODUCT_KEY_PROPERTY ((HRESULT)0xC004C75CL)
#define SL_E_CHPA_UNKNOWN_PRODUCT_KEY_TYPE ((HRESULT)0xC004C764L)
#define SL_E_CHPA_PRODUCT_KEY_BEING_USED ((HRESULT)0xC004C770L)
#define SL_E_CHPA_FAILED_TO_INSERT_PRODUCT_KEY_RECORD ((HRESULT)0xC004C780L)
#define SL_E_CHPA_FAILED_TO_UPDATE_PRODUCT_KEY_RECORD ((HRESULT)0xC004C781L)
#define SL_E_VGA_NON_GENUINE_STATUS_FIRST ((HRESULT)0xC004C401L)
#define SL_E_VGA_NON_GENUINE_STATUS_LAST ((HRESULT)0xC004C600L)
#define SL_E_CHREF_INVALID_PRODUCT_KEY   ((HRESULT)0xC004C801L)
#define SL_E_CHREF_EXCLUDED_PRODUCT_KEY  ((HRESULT)0xC004C802L)
#define SL_E_CHREF_PRODUCT_KEY_REVOKED   ((HRESULT)0xC004C803L)
#define SL_E_CHREF_INVALID_PRODUCT_KEY_ALGORITHM ((HRESULT)0xC004C804L)
#define SL_E_CHREF_INVALID_PRODUCT_KEY_UNIQUEID ((HRESULT)0xC004C805L)
#define SL_E_CHREF_INVALID_PRODUCT_DATA  ((HRESULT)0xC004C810L)
#define SL_E_CHREF_CANNOT_CREATE_BINDING_ASSOC ((HRESULT)0xC004C811L)
#define SL_E_CHREF_BINDING_OUT_OF_TOLERANCE ((HRESULT)0xC004C812L)
#define SL_E_CHREF_PRODUCT_KEY_POLICY_MISSING ((HRESULT)0xC004C813L)
#define SL_E_CHREF_PRODUCT_KEY_POLICY_OVERLAPPED ((HRESULT)0xC004C814L)
#define SL_E_CHREF_PRODUCT_KEY_BINDING_MISMATCH ((HRESULT)0xC004C815L)
#define SL_E_CHREF_OEM_SLP_COA0          ((HRESULT)0xC004C816L)
#define SL_E_INVALID_CONTEXT             ((HRESULT)0xC004E001L)
#define SL_E_TOKEN_STORE_INVALID_STATE   ((HRESULT)0xC004E002L)
#define SL_E_EVALUATION_FAILED           ((HRESULT)0xC004E003L)
#define SL_E_NOT_EVALUATED               ((HRESULT)0xC004E004L)
#define SL_E_NOT_ACTIVATED               ((HRESULT)0xC004E005L)
#define SL_E_INVALID_GUID                ((HRESULT)0xC004E006L)
#define SL_E_TOKSTO_TOKEN_NOT_FOUND      ((HRESULT)0xC004E007L)
#define SL_E_TOKSTO_NO_PROPERTIES        ((HRESULT)0xC004E008L)
#define SL_E_TOKSTO_NOT_INITIALIZED      ((HRESULT)0xC004E009L)
#define SL_E_TOKSTO_ALREADY_INITIALIZED  ((HRESULT)0xC004E00AL)
#define SL_E_TOKSTO_NO_ID_SET            ((HRESULT)0xC004E00BL)
#define SL_E_TOKSTO_CANT_CREATE_FILE     ((HRESULT)0xC004E00CL)
#define SL_E_TOKSTO_CANT_WRITE_TO_FILE   ((HRESULT)0xC004E00DL)
#define SL_E_TOKSTO_CANT_READ_FILE       ((HRESULT)0xC004E00EL)
#define SL_E_TOKSTO_CANT_PARSE_PROPERTIES ((HRESULT)0xC004E00FL)
#define SL_E_TOKSTO_PROPERTY_NOT_FOUND   ((HRESULT)0xC004E010L)
#define SL_E_TOKSTO_INVALID_FILE         ((HRESULT)0xC004E011L)
#define SL_E_TOKSTO_CANT_CREATE_MUTEX    ((HRESULT)0xC004E012L)
#define SL_E_TOKSTO_CANT_ACQUIRE_MUTEX   ((HRESULT)0xC004E013L)
#define SL_E_TOKSTO_NO_TOKEN_DATA        ((HRESULT)0xC004E014L)
#define SL_E_EUL_CONSUMPTION_FAILED      ((HRESULT)0xC004E015L)
#define SL_E_PKEY_INVALID_CONFIG         ((HRESULT)0xC004E016L)
#define SL_E_PKEY_INVALID_UNIQUEID       ((HRESULT)0xC004E017L)
#define SL_E_PKEY_INVALID_ALGORITHM      ((HRESULT)0xC004E018L)
#define SL_E_PKEY_INTERNAL_ERROR         ((HRESULT)0xC004E019L)
#define SL_E_LICENSE_INVALID_ADDON_INFO  ((HRESULT)0xC004E01AL)
#define SL_E_HWID_ERROR                  ((HRESULT)0xC004E01BL)
#define SL_E_PKEY_INVALID_KEYCHANGE1     ((HRESULT)0xC004E01CL)
#define SL_E_PKEY_INVALID_KEYCHANGE2     ((HRESULT)0xC004E01DL)
#define SL_E_PKEY_INVALID_KEYCHANGE3     ((HRESULT)0xC004E01EL)
#define SL_E_PKEY_INVALID_KEYCHANGE4     ((HRESULT)0xC004E01FL)
#define SL_E_POLICY_OTHERINFO_MISMATCH   ((HRESULT)0xC004E020L)
#define SL_E_PRODUCT_UNIQUENESS_GROUP_ID_INVALID ((HRESULT)0xC004E021L)
#define SL_E_SECURE_STORE_ID_MISMATCH    ((HRESULT)0xC004E022L)
#define SL_E_SFS_INVALID_FS_VERSION      ((HRESULT)0x8004E101L)
#define SL_E_SFS_INVALID_FD_TABLE        ((HRESULT)0x8004E102L)
#define SL_E_SFS_INVALID_SYNC            ((HRESULT)0x8004E103L)
#define SL_E_SFS_BAD_TOKEN_NAME          ((HRESULT)0x8004E104L)
#define SL_E_SFS_BAD_TOKEN_EXT           ((HRESULT)0x8004E105L)
#define SL_E_SFS_DUPLICATE_TOKEN_NAME    ((HRESULT)0x8004E106L)
#define SL_E_SFS_TOKEN_SIZE_MISMATCH     ((HRESULT)0x8004E107L)
#define SL_E_SFS_INVALID_TOKEN_DATA_HASH ((HRESULT)0x8004E108L)
#define SL_E_SFS_FILE_READ_ERROR         ((HRESULT)0x8004E109L)
#define SL_E_SFS_FILE_WRITE_ERROR        ((HRESULT)0x8004E10AL)
#define SL_E_SFS_INVALID_FILE_POSITION   ((HRESULT)0x8004E10BL)
#define SL_E_SFS_NO_ACTIVE_TRANSACTION   ((HRESULT)0x8004E10CL)
#define SL_E_SFS_INVALID_FS_HEADER       ((HRESULT)0x8004E10DL)
#define SL_E_SFS_INVALID_TOKEN_DESCRIPTOR ((HRESULT)0x8004E10EL)
#define SL_E_INTERNAL_ERROR              ((HRESULT)0xC004F001L)
#define SL_E_RIGHT_NOT_CONSUMED          ((HRESULT)0xC004F002L)
#define SL_E_USE_LICENSE_NOT_INSTALLED   ((HRESULT)0xC004F003L)
#define SL_E_MISMATCHED_PKEY_RANGE       ((HRESULT)0xC004F004L)
#define SL_E_MISMATCHED_PID              ((HRESULT)0xC004F005L)
#define SL_E_EXTERNAL_SIGNATURE_NOT_FOUND ((HRESULT)0xC004F006L)
#define SL_E_RAC_NOT_AVAILABLE           ((HRESULT)0xC004F007L)
#define SL_E_SPC_NOT_AVAILABLE           ((HRESULT)0xC004F008L)
#define SL_E_GRACE_TIME_EXPIRED          ((HRESULT)0xC004F009L)
#define SL_E_MISMATCHED_APPID            ((HRESULT)0xC004F00AL)
#define SL_E_NO_PID_CONFIG_DATA          ((HRESULT)0xC004F00BL)
#define SL_I_OOB_GRACE_PERIOD            ((HRESULT)0x4004F00CL)
#define SL_I_OOT_GRACE_PERIOD            ((HRESULT)0x4004F00DL)
#define SL_E_MISMATCHED_SECURITY_PROCESSOR ((HRESULT)0xC004F00EL)
#define SL_E_OUT_OF_TOLERANCE            ((HRESULT)0xC004F00FL)
#define SL_E_INVALID_PKEY                ((HRESULT)0xC004F010L)
#define SL_E_LICENSE_FILE_NOT_INSTALLED  ((HRESULT)0xC004F011L)
#define SL_E_VALUE_NOT_FOUND             ((HRESULT)0xC004F012L)
#define SL_E_RIGHT_NOT_GRANTED           ((HRESULT)0xC004F013L)
#define SL_E_PKEY_NOT_INSTALLED          ((HRESULT)0xC004F014L)
#define SL_E_PRODUCT_SKU_NOT_INSTALLED   ((HRESULT)0xC004F015L)
#define SL_E_NOT_SUPPORTED               ((HRESULT)0xC004F016L)
#define SL_E_PUBLISHING_LICENSE_NOT_INSTALLED ((HRESULT)0xC004F017L)
#define SL_E_LICENSE_SERVER_URL_NOT_FOUND ((HRESULT)0xC004F018L)
#define SL_E_INVALID_EVENT_ID            ((HRESULT)0xC004F019L)
#define SL_E_EVENT_NOT_REGISTERED        ((HRESULT)0xC004F01AL)
#define SL_E_EVENT_ALREADY_REGISTERED    ((HRESULT)0xC004F01BL)
#define SL_E_DECRYPTION_LICENSES_NOT_AVAILABLE ((HRESULT)0xC004F01CL)
#define SL_E_LICENSE_SIGNATURE_VERIFICATION_FAILED ((HRESULT)0xC004F01DL)
#define SL_E_DATATYPE_MISMATCHED         ((HRESULT)0xC004F01EL)
#define SL_E_INVALID_LICENSE             ((HRESULT)0xC004F01FL)
#define SL_E_INVALID_PACKAGE             ((HRESULT)0xC004F020L)
#define SL_E_VALIDITY_TIME_EXPIRED       ((HRESULT)0xC004F021L)
#define SL_E_LICENSE_AUTHORIZATION_FAILED ((HRESULT)0xC004F022L)
#define SL_E_LICENSE_DECRYPTION_FAILED   ((HRESULT)0xC004F023L)
#define SL_E_WINDOWS_INVALID_LICENSE_STATE ((HRESULT)0xC004F024L)
#define SL_E_LUA_ACCESSDENIED            ((HRESULT)0xC004F025L)
#define SL_E_PROXY_KEY_NOT_FOUND         ((HRESULT)0xC004F026L)
#define SL_E_TAMPER_DETECTED             ((HRESULT)0xC004F027L)
#define SL_E_POLICY_CACHE_INVALID        ((HRESULT)0xC004F028L)
#define SL_E_INVALID_RUNNING_MODE        ((HRESULT)0xC004F029L)
#define SL_E_SLP_NOT_SIGNED              ((HRESULT)0xC004F02AL)
#define SL_E_CIDIID_INVALID_DATA         ((HRESULT)0xC004F02CL)
#define SL_E_CIDIID_INVALID_VERSION      ((HRESULT)0xC004F02DL)
#define SL_E_CIDIID_VERSION_NOT_SUPPORTED ((HRESULT)0xC004F02EL)
#define SL_E_CIDIID_INVALID_DATA_LENGTH  ((HRESULT)0xC004F02FL)
#define SL_E_CIDIID_NOT_DEPOSITED        ((HRESULT)0xC004F030L)
#define SL_E_CIDIID_MISMATCHED           ((HRESULT)0xC004F031L)
#define SL_E_INVALID_BINDING_BLOB        ((HRESULT)0xC004F032L)
#define SL_E_PRODUCT_KEY_INSTALLATION_NOT_ALLOWED ((HRESULT)0xC004F033L)
#define SL_E_EUL_NOT_AVAILABLE           ((HRESULT)0xC004F034L)
#define SL_E_VL_NOT_WINDOWS_SLP          ((HRESULT)0xC004F035L)
#define SL_E_VL_NOT_ENOUGH_COUNT         ((HRESULT)0xC004F038L)
#define SL_E_VL_BINDING_SERVICE_NOT_ENABLED ((HRESULT)0xC004F039L)
#define SL_E_VL_INFO_PRODUCT_USER_RIGHT  ((HRESULT)0x4004F040L)
#define SL_E_VL_KEY_MANAGEMENT_SERVICE_NOT_ACTIVATED ((HRESULT)0xC004F041L)
#define SL_E_VL_KEY_MANAGEMENT_SERVICE_ID_MISMATCH ((HRESULT)0xC004F042L)
#define SL_E_PROXY_POLICY_NOT_UPDATED    ((HRESULT)0xC004F047L)
#define SL_E_CIDIID_INVALID_CHECK_DIGITS ((HRESULT)0xC004F04DL)
#define SL_E_LICENSE_MANAGEMENT_DATA_NOT_FOUND ((HRESULT)0xC004F04FL)
#define SL_E_INVALID_PRODUCT_KEY         ((HRESULT)0xC004F050L)
#define SL_E_BLOCKED_PRODUCT_KEY         ((HRESULT)0xC004F051L)
#define SL_E_DUPLICATE_POLICY            ((HRESULT)0xC004F052L)
#define SL_E_MISSING_OVERRIDE_ONLY_ATTRIBUTE ((HRESULT)0xC004F053L)
#define SL_E_LICENSE_MANAGEMENT_DATA_DUPLICATED ((HRESULT)0xC004F054L)
#define SL_E_BASE_SKU_NOT_AVAILABLE      ((HRESULT)0xC004F055L)
#define SL_E_VL_MACHINE_NOT_BOUND        ((HRESULT)0xC004F056L)
#define SL_E_SLP_MISSING_ACPI_SLIC       ((HRESULT)0xC004F057L)
#define SL_E_SLP_MISSING_SLP_MARKER      ((HRESULT)0xC004F058L)
#define SL_E_SLP_BAD_FORMAT              ((HRESULT)0xC004F059L)
#define SL_E_INVALID_PACKAGE_VERSION     ((HRESULT)0xC004F060L)
#define SL_E_PKEY_INVALID_UPGRADE        ((HRESULT)0xC004F061L)
#define SL_E_ISSUANCE_LICENSE_NOT_INSTALLED ((HRESULT)0xC004F062L)
#define SL_E_SLP_OEM_CERT_MISSING        ((HRESULT)0xC004F063L)
#define SL_E_NONGENUINE_GRACE_TIME_EXPIRED ((HRESULT)0xC004F064L)
#define SL_I_NONGENUINE_GRACE_PERIOD     ((HRESULT)0x4004F065L)
#define SL_E_DEPENDENT_PROPERTY_NOT_SET  ((HRESULT)0xC004F066L)
#define SL_E_NONGENUINE_GRACE_TIME_EXPIRED_2 ((HRESULT)0xC004F067L)
#define SL_I_NONGENUINE_GRACE_PERIOD_2   ((HRESULT)0x4004F068L)
#define SL_E_MISMATCHED_PRODUCT_SKU      ((HRESULT)0xC004F069L)
#define SL_E_OPERATION_NOT_ALLOWED       ((HRESULT)0xC004F06AL)
#define SL_E_VL_KEY_MANAGEMENT_SERVICE_VM_NOT_SUPPORTED ((HRESULT)0xC004F06BL)
#define SL_E_VL_INVALID_TIMESTAMP        ((HRESULT)0xC004F06CL)
#define SL_E_PLUGIN_INVALID_MANIFEST     ((HRESULT)0xC004F071L)
#define SL_E_APPLICATION_POLICIES_MISSING ((HRESULT)0xC004F072L)
#define SL_E_APPLICATION_POLICIES_NOT_LOADED ((HRESULT)0xC004F073L)
#define SL_E_VL_BINDING_SERVICE_UNAVAILABLE ((HRESULT)0xC004F074L)
#define SL_E_SERVICE_STOPPING            ((HRESULT)0xC004F075L)
#define SL_E_PLUGIN_NOT_REGISTERED       ((HRESULT)0xC004F076L)
#define SL_E_AUTHN_WRONG_VERSION         ((HRESULT)0xC004F077L)
#define SL_E_AUTHN_MISMATCHED_KEY        ((HRESULT)0xC004F078L)
#define SL_E_AUTHN_CHALLENGE_NOT_SET     ((HRESULT)0xC004F079L)
#define SL_E_AUTHN_CANT_VERIFY           ((HRESULT)0xC004F07AL)
#define SL_E_SERVICE_RUNNING             ((HRESULT)0xC004F07BL)
#define SL_E_SLP_INVALID_MARKER_VERSION  ((HRESULT)0xC004F07CL)
#define SL_E_NOT_GENUINE                 ((HRESULT)0xC004F200L)
#define SL_E_TKA_CHALLENGE_EXPIRED       ((HRESULT)0xC004F301L)
#define SL_E_TKA_SILENT_ACTIVATION_FAILURE ((HRESULT)0xC004F302L)
#define SL_E_TKA_INVALID_CERT_CHAIN      ((HRESULT)0xC004F303L)
#define SL_E_TKA_GRANT_NOT_FOUND         ((HRESULT)0xC004F304L)
#define SL_E_TKA_CERT_NOT_FOUND          ((HRESULT)0xC004F305L)
#define SL_E_TKA_INVALID_SKU_ID          ((HRESULT)0xC004F306L)
#define SL_E_TKA_INVALID_BLOB            ((HRESULT)0xC004F307L)
#define SL_E_TKA_TAMPERED_CERT_CHAIN     ((HRESULT)0xC004F308L)
#define SL_E_TKA_CHALLENGE_MISMATCH      ((HRESULT)0xC004F309L)
#define SL_E_TKA_INVALID_CERTIFICATE     ((HRESULT)0xC004F30AL)
#define SL_E_TKA_INVALID_SMARTCARD       ((HRESULT)0xC004F30BL)
#define SL_E_TKA_FAILED_GRANT_PARSING    ((HRESULT)0xC004F30CL)
#define SL_E_TKA_INVALID_THUMBPRINT      ((HRESULT)0xC004F30DL)
#define SL_E_TKA_THUMBPRINT_CERT_NOT_FOUND ((HRESULT)0xC004F30EL)
#define SL_E_TKA_CRITERIA_MISMATCH       ((HRESULT)0xC004F30FL)
#define SL_E_TKA_TPID_MISMATCH           ((HRESULT)0xC004F310L)
#define SL_E_TKA_SOFT_CERT_DISALLOWED    ((HRESULT)0xC004F311L)
#define SL_E_TKA_SOFT_CERT_INVALID       ((HRESULT)0xC004F312L)
#define SL_E_TKA_CERT_CNG_NOT_AVAILABLE  ((HRESULT)0xC004F313L)
#define E_RM_UNKNOWN_ERROR               ((HRESULT)0xC004FC03L)
#define SL_I_TIMEBASED_VALIDITY_PERIOD   ((HRESULT)0x4004FC04L)
#define SL_I_PERPETUAL_OOB_GRACE_PERIOD  ((HRESULT)0x4004FC05L)
#define SL_I_TIMEBASED_EXTENDED_GRACE_PERIOD ((HRESULT)0x4004FC06L)
#define SL_E_VALIDITY_PERIOD_EXPIRED     ((HRESULT)0xC004FC07L)
#define SL_E_TAMPER_RECOVERY_REQUIRES_ACTIVATION ((HRESULT)0xC004FE00L)
#define SL_REMAPPING_SP_PUB_GENERAL_NOT_INITIALIZED ((HRESULT)0xC004D101L)
#define SL_REMAPPING_SP_STATUS_SYSTEM_TIME_SKEWED ((HRESULT)0x8004D102L)
#define SL_REMAPPING_SP_STATUS_GENERIC_FAILURE ((HRESULT)0xC004D103L)
#define SL_REMAPPING_SP_STATUS_INVALIDARG ((HRESULT)0xC004D104L)
#define SL_REMAPPING_SP_STATUS_ALREADY_EXISTS ((HRESULT)0xC004D105L)
#define SL_REMAPPING_SP_STATUS_INSUFFICIENT_BUFFER ((HRESULT)0xC004D107L)
#define SL_REMAPPING_SP_STATUS_INVALIDDATA ((HRESULT)0xC004D108L)
#define SL_REMAPPING_SP_STATUS_INVALID_SPAPI_CALL ((HRESULT)0xC004D109L)
#define SL_REMAPPING_SP_STATUS_INVALID_SPAPI_VERSION ((HRESULT)0xC004D10AL)
#define SL_REMAPPING_SP_STATUS_DEBUGGER_DETECTED ((HRESULT)0x8004D10BL)
#define SL_REMAPPING_SP_PUB_TS_TAMPERED  ((HRESULT)0xC004D301L)
#define SL_REMAPPING_SP_PUB_TS_REARMED   ((HRESULT)0xC004D302L)
#define SL_REMAPPING_SP_PUB_TS_RECREATED ((HRESULT)0xC004D303L)
#define SL_REMAPPING_SP_PUB_TS_ENTRY_KEY_NOT_FOUND ((HRESULT)0xC004D304L)
#define SL_REMAPPING_SP_PUB_TS_ENTRY_KEY_ALREADY_EXISTS ((HRESULT)0xC004D305L)
#define SL_REMAPPING_SP_PUB_TS_ENTRY_KEY_SIZE_TOO_BIG ((HRESULT)0xC004D306L)
#define SL_REMAPPING_SP_PUB_TS_MAX_REARM_REACHED ((HRESULT)0xC004D307L)
#define SL_REMAPPING_SP_PUB_TS_DATA_SIZE_TOO_BIG ((HRESULT)0xC004D308L)
#define SL_REMAPPING_SP_PUB_TS_INVALID_HW_BINDING ((HRESULT)0xC004D309L)
#define SL_REMAPPING_SP_PUB_TIMER_ALREADY_EXISTS ((HRESULT)0xC004D30AL)
#define SL_REMAPPING_SP_PUB_TIMER_NOT_FOUND ((HRESULT)0xC004D30BL)
#define SL_REMAPPING_SP_PUB_TIMER_EXPIRED ((HRESULT)0xC004D30CL)
#define SL_REMAPPING_SP_PUB_TIMER_NAME_SIZE_TOO_BIG ((HRESULT)0xC004D30DL)
#define SL_REMAPPING_SP_PUB_TS_FULL      ((HRESULT)0xC004D30EL)
#define SL_REMAPPING_SP_PUB_TAMPER_MODULE_AUTHENTICATION ((HRESULT)0xC004D401L)
#define SL_REMAPPING_SP_PUB_TAMPER_SECURITY_PROCESSOR_PATCHED ((HRESULT)0xC004D402L)
#define SL_REMAPPING_SP_PUB_KM_CACHE_TAMPER ((HRESULT)0xC004D501L)
#endif
