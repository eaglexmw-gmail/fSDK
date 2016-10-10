/*+@@file@@----------------------------------------------------------------*//*!
 \file		ShFolder.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 00:14:04 2016
 \date		Modified on Sun Sep  4 00:14:04 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _SHFOLDER_H_
#define _SHFOLDER_H_
#if __POCC__ >= 500
#pragma once
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#error shfolder.h/shfolder.lib provide platform independence with versions prior to Windows 2000. Use shlobj.h/shell32.lib if targetting Windows 2000 or higher.
#endif
#include <SpecStrings.h>
#ifndef SHFOLDERAPI
#if defined(_SHFOLDER_)
#define SHFOLDERAPI           STDAPI
#else
#define SHFOLDERAPI           extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#endif
#endif
#ifndef CSIDL_PERSONAL
#define CSIDL_PERSONAL                  0x0005
#endif
#ifndef CSIDL_MYMUSIC
#define CSIDL_MYMUSIC                   0x000d
#endif
#ifndef CSIDL_APPDATA
#define CSIDL_APPDATA                   0x001a
#endif
#ifndef CSIDL_LOCAL_APPDATA
#define CSIDL_LOCAL_APPDATA             0x001c
#define CSIDL_INTERNET_CACHE            0x0020
#define CSIDL_COOKIES                   0x0021
#define CSIDL_HISTORY                   0x0022
#define CSIDL_COMMON_APPDATA            0x0023
#define CSIDL_WINDOWS                   0x0024
#define CSIDL_SYSTEM                    0x0025
#define CSIDL_PROGRAM_FILES             0x0026
#define CSIDL_MYPICTURES                0x0027
#define CSIDL_PROGRAM_FILES_COMMON      0x002b
#define CSIDL_COMMON_DOCUMENTS          0x002e
#define CSIDL_RESOURCES                 0x0038
#define CSIDL_RESOURCES_LOCALIZED       0x0039
#define CSIDL_FLAG_CREATE               0x8000
#define CSIDL_COMMON_ADMINTOOLS         0x002f
#define CSIDL_ADMINTOOLS                0x0030
#endif
SHFOLDERAPI SHGetFolderPathA(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, LPSTR pszPath);
SHFOLDERAPI SHGetFolderPathW(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, LPWSTR pszPath);
typedef HRESULT (__stdcall * PFNSHGETFOLDERPATHA)(HWND, int, HANDLE, DWORD, LPSTR);
typedef HRESULT (__stdcall * PFNSHGETFOLDERPATHW)(HWND, int, HANDLE, DWORD, LPWSTR);
#ifdef UNICODE
#define SHGetFolderPath     SHGetFolderPathW
#define PFNSHGETFOLDERPATH  PFNSHGETFOLDERPATHW
#else
#define SHGetFolderPath     SHGetFolderPathA
#define PFNSHGETFOLDERPATH  PFNSHGETFOLDERPATHA
#endif
#endif
