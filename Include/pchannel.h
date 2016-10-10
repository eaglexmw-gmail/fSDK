/*+@@file@@----------------------------------------------------------------*//*!
 \file		pchannel.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 23:51:37 2016
 \date		Modified on Sat Jul  2 23:51:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _H_PCHANNEL
#define _H_PCHANNEL
#if __POCC__ >= 500
#pragma once
#endif
#define CHANNEL_CHUNK_LENGTH    1600
#define CHANNEL_PDU_LENGTH (CHANNEL_CHUNK_LENGTH + sizeof(CHANNEL_PDU_HEADER))
#define CHANNEL_FLAG_FIRST      0x01
#define CHANNEL_FLAG_LAST       0x02
#define CHANNEL_FLAG_ONLY       (CHANNEL_FLAG_FIRST | CHANNEL_FLAG_LAST)
#define CHANNEL_FLAG_MIDDLE     0
#define CHANNEL_FLAG_FAIL       0x100
#define CHANNEL_FLAG_SHOW_PROTOCOL 0x10
#define CHANNEL_FLAG_SUSPEND       0x20
#define CHANNEL_FLAG_RESUME        0x40
#define CHANNEL_OPTION_INITIALIZED  0x80000000
#define CHANNEL_OPTION_ENCRYPT_RDP  0x40000000
#define CHANNEL_OPTION_ENCRYPT_SC   0x20000000
#define CHANNEL_OPTION_ENCRYPT_CS   0x10000000
#define CHANNEL_OPTION_PRI_HIGH     0x08000000
#define CHANNEL_OPTION_PRI_MED      0x04000000
#define CHANNEL_OPTION_PRI_LOW      0x02000000
#define CHANNEL_OPTION_COMPRESS_RDP 0x00800000
#define CHANNEL_OPTION_COMPRESS     0x00400000
#define CHANNEL_OPTION_SHOW_PROTOCOL 0x00200000
#define CHANNEL_MAX_COUNT           30
#define CHANNEL_NAME_LEN             7
typedef struct tagCHANNEL_DEF
{
	char name[CHANNEL_NAME_LEN + 1];
	ULONG options;
}
CHANNEL_DEF,   FAR * PCHANNEL_DEF, FAR * FAR * PPCHANNEL_DEF;
typedef struct tagCHANNEL_PDU_HEADER
{
	UINT32 length;
	UINT32 flags;
}
CHANNEL_PDU_HEADER,   FAR * PCHANNEL_PDU_HEADER;
#endif
