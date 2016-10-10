/*+@@file@@----------------------------------------------------------------*//*!
 \file		WabNot.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:01:17 2016
 \date		Modified on Mon Sep 19 00:01:17 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if !defined(MAPISPI_H) && !defined(WABSPI_H)
#define WABSPI_H
#if __POCC__ >= 500
#pragma once
#endif
#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif
typedef struct
{
	ULONG		cb;
	BYTE		ab[MAPI_DIM];
} NOTIFKEY, FAR * LPNOTIFKEY;
#define CbNewNOTIFKEY(_cb)			(offsetof(NOTIFKEY,ab) + (_cb))
#define CbNOTIFKEY(_lpkey)			(offsetof(NOTIFKEY,ab) + (_lpkey)->cb)
#define SizedNOTIFKEY(_cb, _name)	struct _NOTIFKEY_ ## _name \
									{ \
										ULONG		cb; \
										BYTE		ab[_cb]; \
									} _name
#define NOTIFY_SYNC				((ULONG) 0x40000000)
#define NOTIFY_CANCELED			((ULONG) 0x80000000)
#define CALLBACK_DISCONTINUE	((ULONG) 0x80000000)
#define NOTIFY_NEWMAIL			((ULONG) 0x00000001)
#define NOTIFY_READYTOSEND		((ULONG) 0x00000002)
#define NOTIFY_SENTDEFERRED		((ULONG) 0x00000004)
#define NOTIFY_CRITSEC			((ULONG) 0x00001000)
#define NOTIFY_NONCRIT			((ULONG) 0x00002000)
#define NOTIFY_CONFIG_CHANGE	((ULONG) 0x00004000)
#define NOTIFY_CRITICAL_ERROR	((ULONG) 0x10000000)
#define NOTIFY_NEWMAIL_RECEIVED	((ULONG) 0x20000000)
#define	STATUSROW_UPDATE		((ULONG) 0x10000000)
#define STGSTRM_RESET			((ULONG) 0x00000000)
#define STGSTRM_CURRENT			((ULONG) 0x10000000)
#define STGSTRM_MODIFY			((ULONG) 0x00000002)
#define STGSTRM_CREATE			((ULONG) 0x00001000)
#define MAPI_NON_READ			((ULONG) 0x00000001)
#endif