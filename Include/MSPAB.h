/*+@@file@@----------------------------------------------------------------*//*!
 \file		MSPAB.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:20:13 2016
 \date		Modified on Sun Aug 14 22:20:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MSPAB_h__
#define __MSPAB_h__
#if __POCC__ >= 500
#pragma once
#endif
#define	PAB_PROVIDER_ID { 0xB5, 0x3b, 0xc2, 0xc0, 0x2c, 0x77, 0x10, 0x1a, 0xa1, 0xbc, 0x08, 0x00, 0x2b, 0x2a, 0x56, 0xc2 }
#define		PR_PAB_PATH						PROP_TAG( PT_TSTRING,	0x6600 )
#define		PR_PAB_PATH_W					PROP_TAG( PT_UNICODE,	0x6600 )
#define		PR_PAB_PATH_A					PROP_TAG( PT_STRING8,	0x6600 )
#define		PR_PAB_DET_DIR_VIEW_BY			PROP_TAG( PT_LONG,		0x6601 )
#define		PAB_DIR_VIEW_FIRST_THEN_LAST	0
#define		PAB_DIR_VIEW_LAST_THEN_FIRST	1
#endif
