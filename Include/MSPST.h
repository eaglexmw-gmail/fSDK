/*+@@file@@----------------------------------------------------------------*//*!
 \file		MSPST.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:39:28 2016
 \date		Modified on Sun Aug 14 22:39:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSPST_H_
#define _MSPST_H_
#if __POCC__ >= 500
#pragma once
#endif
#define PST_EXTERN_PROPID_BASE          (0x6700)
#define PR_PST_PATH                     PROP_TAG(PT_STRING8, PST_EXTERN_PROPID_BASE + 0)
#define PR_PST_REMEMBER_PW              PROP_TAG(PT_BOOLEAN, PST_EXTERN_PROPID_BASE + 1)
#define PR_PST_ENCRYPTION               PROP_TAG(PT_LONG, PST_EXTERN_PROPID_BASE + 2)
#define PR_PST_PW_SZ_OLD                PROP_TAG(PT_STRING8, PST_EXTERN_PROPID_BASE + 3)
#define PR_PST_PW_SZ_NEW                PROP_TAG(PT_STRING8, PST_EXTERN_PROPID_BASE + 4)
#define PSTF_NO_ENCRYPTION              ((DWORD)0x80000000)
#define PSTF_COMPRESSABLE_ENCRYPTION    ((DWORD)0x40000000)
#define PSTF_BEST_ENCRYPTION            ((DWORD)0x20000000)
#define MSPST_UID_PROVIDER  {0x4e, 0x49, 0x54, 0x41, 0xf9, 0xbf, 0xb8, 0x01, 0x00, 0xaa, 0x00, 0x37, 0xd9, 0x6e, 0x00, 0x00}
#endif
