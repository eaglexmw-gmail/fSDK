/*+@@file@@----------------------------------------------------------------*//*!
 \file		synchronizationerrors.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 02:03:58 2016
 \date		Modified on Sat Sep 17 02:03:58 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef SYNCHRONIZATIONERRORS_H__
#define SYNCHRONIZATIONERRORS_H__
#if __POCC__ >= 500
#pragma once
#endif
#define SYNC_E_ID_FORMAT_MISMATCH        0x80041000L
#define SYNC_E_INVALID_OPERATION         0x80041001L
#define SYNC_E_REPLICA_NOT_FOUND         0x80041002L
#define SYNC_E_CHANGE_COUNT_MISMATCH     0x80041003L
#define SYNC_E_CHANGE_UNIT_COUNT_MISMATCH 0x80041004L
#define SYNC_E_KNOWLEDGE_DECREASED       0x80041005L
#define SYNC_E_CHANGE_NOT_IN_KNOWLEDGE   0x80041006L
#define SYNC_E_ITEM_MUST_EXIST           0x80041007L
#define SYNC_E_HAS_NO_DATA               0x80041008L
#define SYNC_E_CHANGE_NEEDS_KNOWLEDGE    0x80041009L
#define SYNC_E_RANGE_OUT_OF_ORDER        0x8004100AL
#define SYNC_E_NOT_EXPECTED_CHANGE       0x8004100BL
#define SYNC_E_DESERIALIZATION           0x8004100CL
#define SYNC_E_SINGLE_RANGE_ONLY         0x8004100DL
#define SYNC_E_ITEM_HAS_CHANGE_UNITS     0x8004100EL
#define SYNC_E_ITEM_HAS_NO_CHANGE_UNITS  0x8004100FL
#define SYNC_E_ITEM_HAS_NO_VERSION_DATA  0x80041010L
#define SYNC_E_OBJECT_NEEDS_STATE        0x80041011L
#define SYNC_E_FEEDSYNC_INVALID_FEED     0x80041012L
#define SYNC_E_FEEDSYNC_ITEM_NOT_IN_METADATA 0x80041013L
#define SYNC_E_FEEDSYNC_CALLBACK_EXPECTED 0x80041014L
#define SYNC_E_INVALID_VERSION           0x80041015L
#define SYNC_E_DUPLICATE_ITEM            0x80041016L
#define SYNC_E_INVALID_ORDER_FOR_VECTOR_ELEMENTS 0x80041017L
#define SYNC_E_INVALID_SYNC_TIME         0x80041018L
#define SYNC_E_INCOMPLETE_REPLICA_KEY_MAP 0x80041019L
#define SYNC_E_INVALID_REPLICA_KEY       0x8004101AL
#define SYNC_E_NEGATIVE_RANGE_EXCEPTION  0x8004101BL
#define SYNC_E_BATCH_NEEDS_KNOWLEDGE     0x8004101CL
#define SYNC_E_INTERNAL_ERROR            0x8004101DL
#define SYNC_E_CHANGE_BATCH_IS_READ_ONLY 0x8004101EL
#define SYNC_E_DATA_MODIFIED_CONCURRENTLY 0x8004101FL
#define SYNC_E_ON_CREATE_MUST_FAIL_ENTIRE_ITEM 0x80041020L
#define SYNC_E_FILTER_NOT_SUPPORTED      0x80041021L
#endif