/*+@@file@@----------------------------------------------------------------*//*!
 \file		fsrmerr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 18:36:24 2016
 \date		Modified on Sun Jul 10 18:36:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __fsrmerr_h__
#define __fsrmerr_h__
#if __POCC__ >= 500
#pragma once
#endif
#define FSRM_S_PARTIAL_BATCH             ((HRESULT)0x00045304L)
#define FSRM_S_PARTIAL_CLASSIFICATION    ((HRESULT)0x00045305L)
#define FSRM_E_NOT_FOUND                 ((HRESULT)0x80045301L)
#define FSRM_E_INVALID_SCHEDULER_ARGUMENT ((HRESULT)0x80045302L)
#define FSRM_E_ALREADY_EXISTS            ((HRESULT)0x80045303L)
#define FSRM_E_PATH_NOT_FOUND            ((HRESULT)0x80045304L)
#define FSRM_E_INVALID_USER              ((HRESULT)0x80045305L)
#define FSRM_E_INVALID_PATH              ((HRESULT)0x80045306L)
#define FSRM_E_INVALID_LIMIT             ((HRESULT)0x80045307L)
#define FSRM_E_INVALID_NAME              ((HRESULT)0x80045308L)
#define FSRM_E_FAIL_BATCH                ((HRESULT)0x80045309L)
#define FSRM_E_INVALID_TEXT              ((HRESULT)0x8004530AL)
#define FSRM_E_INVALID_IMPORT_VERSION    ((HRESULT)0x8004530BL)
#define FSRM_E_OUT_OF_RANGE              ((HRESULT)0x8004530DL)
#define FSRM_E_REQD_PARAM_MISSING        ((HRESULT)0x8004530EL)
#define FSRM_E_INVALID_COMBINATION       ((HRESULT)0x8004530FL)
#define FSRM_E_DUPLICATE_NAME            ((HRESULT)0x80045310L)
#define FSRM_E_NOT_SUPPORTED             ((HRESULT)0x80045311L)
#define FSRM_E_DRIVER_NOT_READY          ((HRESULT)0x80045313L)
#define FSRM_E_INSUFFICIENT_DISK         ((HRESULT)0x80045314L)
#define FSRM_E_VOLUME_UNSUPPORTED        ((HRESULT)0x80045315L)
#define FSRM_E_UNEXPECTED                ((HRESULT)0x80045316L)
#define FSRM_E_INSECURE_PATH             ((HRESULT)0x80045317L)
#define FSRM_E_INVALID_SMTP_SERVER       ((HRESULT)0x80045318L)
#define FSRM_E_AUTO_QUOTA                ((HRESULT)0x0004531BL)
#define FSRM_E_EMAIL_NOT_SENT            ((HRESULT)0x8004531CL)
#define FSRM_E_INVALID_EMAIL_ADDRESS     ((HRESULT)0x8004531EL)
#define FSRM_E_FILE_SYSTEM_CORRUPT       ((HRESULT)0x8004531FL)
#define FSRM_E_LONG_CMDLINE              ((HRESULT)0x80045320L)
#define FSRM_E_INVALID_FILEGROUP_DEFINITION ((HRESULT)0x80045321L)
#define FSRM_E_INVALID_DATASCREEN_DEFINITION ((HRESULT)0x80045324L)
#define FSRM_E_INVALID_REPORT_FORMAT     ((HRESULT)0x80045328L)
#define FSRM_E_INVALID_REPORT_DESC       ((HRESULT)0x80045329L)
#define FSRM_E_INVALID_FILENAME          ((HRESULT)0x8004532AL)
#define FSRM_E_SHADOW_COPY               ((HRESULT)0x8004532CL)
#define FSRM_E_XML_CORRUPTED             ((HRESULT)0x8004532DL)
#define FSRM_E_CLUSTER_NOT_RUNNING       ((HRESULT)0x8004532EL)
#define FSRM_E_STORE_NOT_INSTALLED       ((HRESULT)0x8004532FL)
#define FSRM_E_NOT_CLUSTER_VOLUME        ((HRESULT)0x80045330L)
#define FSRM_E_DIFFERENT_CLUSTER_GROUP   ((HRESULT)0x80045331L)
#define FSRM_E_REPORT_TYPE_ALREADY_EXISTS ((HRESULT)0x80045332L)
#define FSRM_E_REPORT_JOB_ALREADY_RUNNING ((HRESULT)0x80045333L)
#define FSRM_E_REPORT_GENERATION_ERR     ((HRESULT)0x80045334L)
#define FSRM_E_REPORT_TASK_TRIGGER       ((HRESULT)0x80045335L)
#define FSRM_E_LOADING_DISABLED_MODULE   ((HRESULT)0x80045336L)
#define FSRM_E_CANNOT_AGGREGATE          ((HRESULT)0x80045337L)
#define FSRM_E_MESSAGE_LIMIT_EXCEEDED    ((HRESULT)0x80045338L)
#define FSRM_E_OBJECT_IN_USE             ((HRESULT)0x80045339L)
#define FSRM_E_CANNOT_RENAME_PROPERTY    ((HRESULT)0x8004533AL)
#define FSRM_E_CANNOT_CHANGE_PROPERTY_TYPE ((HRESULT)0x8004533BL)
#define FSRM_E_MAX_PROPERTY_DEFINITIONS  ((HRESULT)0x8004533CL)
#define FSRM_E_CLASSIFICATION_ALREADY_RUNNING ((HRESULT)0x8004533DL)
#define FSRM_E_CLASSIFICATION_NOT_RUNNING ((HRESULT)0x8004533EL)
#define FSRM_E_FILE_MANAGEMENT_JOB_ALREADY_RUNNING ((HRESULT)0x8004533FL)
#define FSRM_E_FILE_MANAGEMENT_JOB_EXPIRATION ((HRESULT)0x80045340L)
#define FSRM_E_FILE_MANAGEMENT_JOB_CUSTOM ((HRESULT)0x80045341L)
#define FSRM_E_FILE_MANAGEMENT_JOB_NOTIFICATION ((HRESULT)0x80045342L)
#define FSRM_E_FILE_OPEN_ERROR           ((HRESULT)0x80045343L)
#define FSRM_E_UNSECURE_LINK_TO_HOSTED_MODULE ((HRESULT)0x80045344L)
#define FSRM_E_CACHE_INVALID             ((HRESULT)0x80045345L)
#define FSRM_E_CACHE_MODULE_ALREADY_EXISTS ((HRESULT)0x80045346L)
#define FSRM_E_FILE_MANAGEMENT_EXPIRATION_DIR_IN_SCOPE ((HRESULT)0x80045347L)
#define FSRM_E_FILE_MANAGEMENT_JOB_ALREADY_EXISTS ((HRESULT)0x80045348L)
#define FSRM_E_PROPERTY_DELETED          ((HRESULT)0x80045349L)
#define FSRM_E_LAST_ACCESS_UPDATE_DISABLED ((HRESULT)0x80045350L)
#define FSRM_E_NO_PROPERTY_VALUE         ((HRESULT)0x80045351L)
#define FSRM_E_INPROC_MODULE_BLOCKED     ((HRESULT)0x80045352L)
#define FSRM_E_ENUM_PROPERTIES_FAILED    ((HRESULT)0x80045353L)
#define FSRM_E_SET_PROPERTY_FAILED       ((HRESULT)0x80045354L)
#define FSRM_E_CANNOT_STORE_PROPERTIES   ((HRESULT)0x80045355L)
#define FSRM_E_CANNOT_ALLOW_REPARSE_POINT_TAG ((HRESULT)0x80045356L)
#define FSRM_E_PARTIAL_CLASSIFICATION_PROPERTY_NOT_FOUND ((HRESULT)0x80045357L)
#define FSRM_E_TEXTREADER_NOT_INITIALIZED ((HRESULT)0x80045358L)
#define FSRM_E_TEXTREADER_IFILTER_NOT_FOUND ((HRESULT)0x80045359L)
#define FSRM_E_TEXTREADER_IFILTER_CLSID_MALFORMED ((HRESULT)0x80045360L)
#define FSRM_E_TEXTREADER_STREAM_ERROR   ((HRESULT)0x80045361L)
#define FSRM_E_TEXTREADER_FILENAME_TOO_LONG ((HRESULT)0x80045362L)
#define FSRM_E_INCOMPATIBLE_FORMAT       ((HRESULT)0x80045363L)
#define FSRM_E_FILE_ENCRYPTED            ((HRESULT)0x80045364L)
#endif
