/*+@@file@@----------------------------------------------------------------*//*!
 \file		Pbt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 19:47:52 2016
 \date		Modified on Sat Sep  3 19:47:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_PBT
#define _INC_PBT
#if __POCC__ >= 500
#pragma once
#endif
#define WM_POWERBROADCAST               0x0218
#ifndef _WIN32_WCE
#define PBT_APMQUERYSUSPEND             0x0000
#define PBT_APMQUERYSTANDBY             0x0001
#define PBT_APMQUERYSUSPENDFAILED       0x0002
#define PBT_APMQUERYSTANDBYFAILED       0x0003
#define PBT_APMSUSPEND                  0x0004
#define PBT_APMSTANDBY                  0x0005
#define PBT_APMRESUMECRITICAL           0x0006
#define PBT_APMRESUMESUSPEND            0x0007
#define PBT_APMRESUMESTANDBY            0x0008
#define PBTF_APMRESUMEFROMFAILURE       0x00000001
#define PBT_APMBATTERYLOW               0x0009
#define PBT_APMPOWERSTATUSCHANGE        0x000A
#define PBT_APMOEMEVENT                 0x000B
#define PBT_APMRESUMEAUTOMATIC          0x0012
#endif
#endif
