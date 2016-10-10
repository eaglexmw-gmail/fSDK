/*+@@file@@----------------------------------------------------------------*//*!
 \file		TCError.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:15:22 2016
 \date		Modified on Sat Sep 17 12:15:22 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _TCERROR_H_
#define _TCERROR_H_
#if __POCC__ >= 500
#pragma once
#endif
#define TCBASE 7500
#define ERROR_INCOMPATIBLE_TCI_VERSION			(TCBASE+1)
#define ERROR_INVALID_SERVICE_TYPE			(TCBASE+2)
#define ERROR_INVALID_TOKEN_RATE			(TCBASE+3)
#define ERROR_INVALID_PEAK_RATE				(TCBASE+4)
#define ERROR_INVALID_SD_MODE				(TCBASE+5)
#define ERROR_INVALID_QOS_PRIORITY			(TCBASE+6)
#define ERROR_INVALID_TRAFFIC_CLASS			(TCBASE+7)
#define ERROR_INVALID_ADDRESS_TYPE			(TCBASE+8)
#define ERROR_DUPLICATE_FILTER				(TCBASE+9)
#define ERROR_FILTER_CONFLICT				(TCBASE+10)
#define ERROR_ADDRESS_TYPE_NOT_SUPPORTED	(TCBASE+11)
#define ERROR_TC_SUPPORTED_OBJECTS_EXIST	(TCBASE+12)
#define ERROR_INCOMPATABLE_QOS				(TCBASE+13)
#define ERROR_TC_NOT_SUPPORTED				(TCBASE+14)
#define ERROR_TC_OBJECT_LENGTH_INVALID      (TCBASE+15)
#define ERROR_INVALID_FLOW_MODE             (TCBASE+16)
#define ERROR_INVALID_DIFFSERV_FLOW         (TCBASE+17)
#define ERROR_DS_MAPPING_EXISTS             (TCBASE+18)
#define ERROR_INVALID_SHAPE_RATE            (TCBASE+19)
#define ERROR_INVALID_DS_CLASS              (TCBASE+20)
#define ERROR_TOO_MANY_CLIENTS              (TCBASE+21)
#endif
