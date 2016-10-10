/*+@@file@@----------------------------------------------------------------*//*!
 \file		ProvExce.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 16:29:59 2016
 \date		Modified on Sun Jul  3 16:29:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _PROVIDER_EXCEPT_H
#define _PROVIDER_EXCEPT_H
#if __POCC__ >= 500
#pragma once
#endif
#ifdef _M_CEE_PURE
#define PROVIDER_EXCEPT_API_INLINE __clrcall
#define PROVIDER_EXCEPT_SE_TRANSLATOR_FUNC_TYPE __se_translator_function_m
#else
#define PROVIDER_EXCEPT_API_INLINE __cdecl
#define PROVIDER_EXCEPT_SE_TRANSLATOR_FUNC_TYPE _se_translator_function
#endif
#if 0
//ONLY C++
#include <eh.h>
class CHeap_Exception
{
public
	enum HEAP_ERROR
	{
		E_ALLOCATION_ERROR = 0 ,
		E_FREE_ERROR
	};
private
	HEAP_ERROR m_Error;
public
	CHeap_Exception ( HEAP_ERROR e ) : m_Error ( e ) {}
	~CHeap_Exception () {}
	HEAP_ERROR GetError() { return m_Error ; }
} ;
class CStructured_Exception
{
private
    UINT m_nSE ;
	EXCEPTION_POINTERS *m_pExp ;
public
    CStructured_Exception () {}
    CStructured_Exception ( UINT n , EXCEPTION_POINTERS *pExp ) : m_nSE ( n ) , m_pExp ( pExp ) {}
    ~CStructured_Exception () {}
    UINT GetSENumber () { return m_nSE ; }
	EXCEPTION_POINTERS *GetExtendedInfo() { return m_pExp ; }
} ;
#ifndef _M_CEE_PURE
class CSetStructuredExceptionHandler
{
private
    PROVIDER_EXCEPT_SE_TRANSLATOR_FUNC_TYPE m_PrevFunc ;
public
    static void PROVIDER_EXCEPT_API_INLINE trans_func ( UINT u , EXCEPTION_POINTERS *pExp )
	{
		throw CStructured_Exception ( u , pExp ) ;
	}
	CSetStructuredExceptionHandler () : m_PrevFunc ( NULL )
	{
	}
	~CSetStructuredExceptionHandler ()
	{
	}
} ;
#endif
#endif
#endif
