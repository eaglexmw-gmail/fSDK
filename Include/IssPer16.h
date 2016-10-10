/*+@@file@@----------------------------------------------------------------*//*!
 \file		IssPer16.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 21:08:50 2016
 \date		Modified on Sun Jul 17 21:08:50 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ISSPERR_H_
#define _ISSPERR_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifdef FACILITY_SECURITY
#undef FACILITY_SECURITY
#endif
#ifdef STATUS_SEVERITY_SUCCESS
#undef STATUS_SEVERITY_SUCCESS
#endif
#define FACILITY_SECURITY                0x9
#define FACILITY_NULL                    0
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_COERROR          0x2
#define SEC_E_INSUFFICIENT_MEMORY        ((SECURITY_STATUS)0x1300)
#define SEC_E_INVALID_HANDLE             ((SECURITY_STATUS)0x1301)
#define SEC_E_UNSUPPORTED_FUNCTION       ((SECURITY_STATUS)0x1302)
#define SEC_E_TARGET_UNKNOWN             ((SECURITY_STATUS)0x1303)
#define SEC_E_INTERNAL_ERROR             ((SECURITY_STATUS)0x1304)
#define SEC_E_SECPKG_NOT_FOUND           ((SECURITY_STATUS)0x1305)
#define SEC_E_NOT_OWNER                  ((SECURITY_STATUS)0x1306)
#define SEC_E_CANNOT_INSTALL             ((SECURITY_STATUS)0x1307)
#define SEC_E_INVALID_TOKEN              ((SECURITY_STATUS)0x1308)
#define SEC_E_CANNOT_PACK                ((SECURITY_STATUS)0x1309)
#define SEC_E_QOP_NOT_SUPPORTED          ((SECURITY_STATUS)0x130A)
#define SEC_E_NO_IMPERSONATION           ((SECURITY_STATUS)0x130B)
#define SEC_E_LOGON_DENIED               ((SECURITY_STATUS)0x130C)
#define SEC_E_UNKNOWN_CREDENTIALS        ((SECURITY_STATUS)0x130D)
#define SEC_E_NO_CREDENTIALS             ((SECURITY_STATUS)0x130E)
#define SEC_E_MESSAGE_ALTERED            ((SECURITY_STATUS)0x130F)
#define SEC_E_OUT_OF_SEQUENCE            ((SECURITY_STATUS)0x1310)
#define SEC_E_NO_AUTHENTICATING_AUTHORITY ((SECURITY_STATUS)0x1311)
#define SEC_E_CONTEXT_EXPIRED            ((SECURITY_STATUS)0x1312)
#define SEC_E_INCOMPLETE_MESSAGE         ((SECURITY_STATUS)0x1313)
#define SEC_I_CONTINUE_NEEDED            ((SECURITY_STATUS)0x1012)
#define SEC_I_COMPLETE_NEEDED            ((SECURITY_STATUS)0x1013)
#define SEC_I_COMPLETE_AND_CONTINUE      ((SECURITY_STATUS)0x1014)
#define SEC_I_LOCAL_LOGON                ((SECURITY_STATUS)0x1015)
#define SEC_E_OK                         ((SECURITY_STATUS)0x0000)
#define SEC_E_NOT_SUPPORTED              SEC_E_UNSUPPORTED_FUNCTION
#define SEC_E_NO_SPM                     SEC_E_INTERNAL_ERROR
#define SEC_E_BAD_PKGID                  SEC_E_SECPKG_NOT_FOUND
#endif
