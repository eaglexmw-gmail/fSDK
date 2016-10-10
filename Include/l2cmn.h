/*+@@file@@----------------------------------------------------------------*//*!
 \file		l2cmn.h
 \par Description 
            Definitions and data strcutures for common layer 2
 \par  Status: 
            
 \par Project: 
			PellesC Headers extension
 \date		Created  on Sat Mar 14 22:18:24 2015
 \date		Modified on Sat Mar 14 22:18:24 2015
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef _L2CMN_H
#define _L2CMN_H
#if __POCC__ >= 500
#pragma once
#endif
#define L2_PROFILE_MAX_NAME_LENGTH     256
#define L2_NOTIFICATION_SOURCE_NONE                   0
#define L2_NOTIFICATION_SOURCE_DOT3_AUTO_CONFIG       0X00000001
#define L2_NOTIFICATION_SOURCE_SECURITY  		    0X00000002
#define L2_NOTIFICATION_SOURCE_ONEX                   0X00000004	
#define L2_NOTIFICATION_SOURCE_WLAN_ACM          0X00000008
#define L2_NOTIFICATION_SOURCE_WLAN_MSM          0X00000010
#define L2_NOTIFICATION_SOURCE_WLAN_SECURITY     0X00000020
#define L2_NOTIFICATION_SOURCE_WLAN_IHV          0X00000040
#define L2_NOTIFICATION_SOURCE_WLAN_HNWK         0X00000080
#define L2_NOTIFICATION_SOURCE_ALL          				0X0000FFFF
#define L2_NOTIFICATION_CODE_PUBLIC_BEGIN         0X00000000
#define L2_NOTIFICATION_CODE_GROUP_SIZE           0x00001000
#define L2_NOTIFICATION_CODE_V2_BEGIN             (L2_NOTIFICATION_CODE_PUBLIC_BEGIN+L2_NOTIFICATION_CODE_GROUP_SIZE)
#define L2_REASON_CODE_GROUP_SIZE             0x10000
#define L2_REASON_CODE_GEN_BASE               0x10000
#define L2_REASON_CODE_DOT11_AC_BASE          (L2_REASON_CODE_GEN_BASE+L2_REASON_CODE_GROUP_SIZE)
#define L2_REASON_CODE_DOT11_MSM_BASE         (L2_REASON_CODE_DOT11_AC_BASE+L2_REASON_CODE_GROUP_SIZE)
#define L2_REASON_CODE_DOT11_SECURITY_BASE    (L2_REASON_CODE_DOT11_MSM_BASE+L2_REASON_CODE_GROUP_SIZE)
#define L2_REASON_CODE_ONEX_BASE              (L2_REASON_CODE_DOT11_SECURITY_BASE+L2_REASON_CODE_GROUP_SIZE)
#define L2_REASON_CODE_DOT3_AC_BASE           (L2_REASON_CODE_ONEX_BASE+L2_REASON_CODE_GROUP_SIZE)
#define L2_REASON_CODE_DOT3_MSM_BASE          (L2_REASON_CODE_DOT3_AC_BASE+L2_REASON_CODE_GROUP_SIZE)
#define L2_REASON_CODE_PROFILE_BASE           (L2_REASON_CODE_DOT3_MSM_BASE+L2_REASON_CODE_GROUP_SIZE)
#define L2_REASON_CODE_IHV_BASE               (L2_REASON_CODE_PROFILE_BASE+L2_REASON_CODE_GROUP_SIZE)
#define L2_REASON_CODE_WIMAX_BASE             (L2_REASON_CODE_IHV_BASE+L2_REASON_CODE_GROUP_SIZE)
#define L2_REASON_CODE_SUCCESS			      0
#define L2_REASON_CODE_UNKNOWN                  (L2_REASON_CODE_GEN_BASE+1)
#define L2_REASON_CODE_PROFILE_MISSING          0x00000001
typedef struct _L2_NOTIFICATION_DATA {
    DWORD NotificationSource;
    DWORD NotificationCode;
    GUID InterfaceGuid;
    DWORD dwDataSize;
    PVOID pData;
} L2_NOTIFICATION_DATA, *PL2_NOTIFICATION_DATA;
#endif  // _L2CMN_H