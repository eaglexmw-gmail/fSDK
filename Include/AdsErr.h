/*+@@file@@----------------------------------------------------------------*//*!
 \file		AdsErr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 12:58:05 2016
 \date		Modified on Fri Jul  1 12:58:05 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#ifdef RC_INVOKED
#define _HRESULT_TYPEDEF_(_sc) _sc
#else
#define _HRESULT_TYPEDEF_(_sc) ((HRESULT)_sc)
#endif
#define FACILITY_WINDOWS                 8
#define FACILITY_STORAGE                 3
#define FACILITY_RPC                     1
#define FACILITY_SSPI                    9
#define FACILITY_WIN32                   7
#define FACILITY_CONTROL                 10
#define FACILITY_NULL                    0
#define FACILITY_ITF                     4
#define FACILITY_DISPATCH                2
#define E_ADS_BAD_PATHNAME               _HRESULT_TYPEDEF_(0x80005000L)
#define E_ADS_INVALID_DOMAIN_OBJECT      _HRESULT_TYPEDEF_(0x80005001L)
#define E_ADS_INVALID_USER_OBJECT        _HRESULT_TYPEDEF_(0x80005002L)
#define E_ADS_INVALID_COMPUTER_OBJECT    _HRESULT_TYPEDEF_(0x80005003L)
#define E_ADS_UNKNOWN_OBJECT             _HRESULT_TYPEDEF_(0x80005004L)
#define E_ADS_PROPERTY_NOT_SET           _HRESULT_TYPEDEF_(0x80005005L)
#define E_ADS_PROPERTY_NOT_SUPPORTED     _HRESULT_TYPEDEF_(0x80005006L)
#define E_ADS_PROPERTY_INVALID           _HRESULT_TYPEDEF_(0x80005007L)
#define E_ADS_BAD_PARAMETER              _HRESULT_TYPEDEF_(0x80005008L)
#define E_ADS_OBJECT_UNBOUND             _HRESULT_TYPEDEF_(0x80005009L)
#define E_ADS_PROPERTY_NOT_MODIFIED      _HRESULT_TYPEDEF_(0x8000500AL)
#define E_ADS_PROPERTY_MODIFIED          _HRESULT_TYPEDEF_(0x8000500BL)
#define E_ADS_CANT_CONVERT_DATATYPE      _HRESULT_TYPEDEF_(0x8000500CL)
#define E_ADS_PROPERTY_NOT_FOUND         _HRESULT_TYPEDEF_(0x8000500DL)
#define E_ADS_OBJECT_EXISTS              _HRESULT_TYPEDEF_(0x8000500EL)
#define E_ADS_SCHEMA_VIOLATION           _HRESULT_TYPEDEF_(0x8000500FL)
#define E_ADS_COLUMN_NOT_SET             _HRESULT_TYPEDEF_(0x80005010L)
#define S_ADS_ERRORSOCCURRED             _HRESULT_TYPEDEF_(0x00005011L)
#define S_ADS_NOMORE_ROWS                _HRESULT_TYPEDEF_(0x00005012L)
#define S_ADS_NOMORE_COLUMNS             _HRESULT_TYPEDEF_(0x00005013L)
#define E_ADS_INVALID_FILTER             _HRESULT_TYPEDEF_(0x80005014L)
