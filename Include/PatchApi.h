/*+@@file@@----------------------------------------------------------------*//*!
 \file		PatchApi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 19:21:36 2016
 \date		Modified on Sat Sep  3 19:21:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _PATCHAPI_H_
#define _PATCHAPI_H_
#if __POCC__ >= 500
#pragma once
#endif
#define PATCH_OPTION_USE_BEST           0x00000000
#define PATCH_OPTION_USE_LZX_BEST       0x00000003
#define PATCH_OPTION_USE_LZX_A          0x00000001
#define PATCH_OPTION_USE_LZX_B          0x00000002
#define PATCH_OPTION_USE_LZX_LARGE      0x00000004
#define PATCH_OPTION_NO_BINDFIX         0x00010000
#define PATCH_OPTION_NO_LOCKFIX         0x00020000
#define PATCH_OPTION_NO_REBASE          0x00040000
#define PATCH_OPTION_FAIL_IF_SAME_FILE  0x00080000
#define PATCH_OPTION_FAIL_IF_BIGGER     0x00100000
#define PATCH_OPTION_NO_CHECKSUM        0x00200000
#define PATCH_OPTION_NO_RESTIMEFIX      0x00400000
#define PATCH_OPTION_NO_TIMESTAMP       0x00800000
#define PATCH_OPTION_SIGNATURE_MD5      0x01000000
#define PATCH_OPTION_INTERLEAVE_FILES   0x40000000
#define PATCH_OPTION_RESERVED1          0x80000000
#define PATCH_OPTION_VALID_FLAGS        0xC0FF0007
#define PATCH_SYMBOL_NO_IMAGEHLP        0x00000001
#define PATCH_SYMBOL_NO_FAILURES        0x00000002
#define PATCH_SYMBOL_UNDECORATED_TOO    0x00000004
#define PATCH_SYMBOL_RESERVED1          0x80000000
#define PATCH_TRANSFORM_PE_RESOURCE_2   0x00000100
#define PATCH_TRANSFORM_PE_IRELOC_2     0x00000200
#define APPLY_OPTION_FAIL_IF_EXACT      0x00000001
#define APPLY_OPTION_FAIL_IF_CLOSE      0x00000002
#define APPLY_OPTION_TEST_ONLY          0x00000004
#define APPLY_OPTION_VALID_FLAGS        0x00000007
#define ERROR_PATCH_ENCODE_FAILURE          0xC00E3101
#define ERROR_PATCH_INVALID_OPTIONS         0xC00E3102
#define ERROR_PATCH_SAME_FILE               0xC00E3103
#define ERROR_PATCH_RETAIN_RANGES_DIFFER    0xC00E3104
#define ERROR_PATCH_BIGGER_THAN_COMPRESSED  0xC00E3105
#define ERROR_PATCH_IMAGEHLP_FAILURE        0xC00E3106
#define ERROR_PATCH_DECODE_FAILURE          0xC00E4101
#define ERROR_PATCH_CORRUPT                 0xC00E4102
#define ERROR_PATCH_NEWER_FORMAT            0xC00E4103
#define ERROR_PATCH_WRONG_FILE              0xC00E4104
#define ERROR_PATCH_NOT_NECESSARY           0xC00E4105
#define ERROR_PATCH_NOT_AVAILABLE           0xC00E4106
typedef BOOL(CALLBACK PATCH_PROGRESS_CALLBACK) (PVOID CallbackContext, ULONG CurrentPosition, ULONG MaximumPosition);
typedef PATCH_PROGRESS_CALLBACK *PPATCH_PROGRESS_CALLBACK;
typedef BOOL(CALLBACK PATCH_SYMLOAD_CALLBACK) (ULONG WhichFile, LPCSTR SymbolFileName, ULONG SymType, ULONG SymbolFileCheckSum, ULONG SymbolFileTimeDate, ULONG ImageFileCheckSum, ULONG ImageFileTimeDate, PVOID CallbackContext);
typedef PATCH_SYMLOAD_CALLBACK *PPATCH_SYMLOAD_CALLBACK;
typedef struct _PATCH_IGNORE_RANGE
{
    ULONG OffsetInOldFile;
    ULONG LengthInBytes;
} PATCH_IGNORE_RANGE, *PPATCH_IGNORE_RANGE;
typedef struct _PATCH_RETAIN_RANGE
{
	ULONG OffsetInOldFile;
	ULONG LengthInBytes;
	ULONG OffsetInNewFile;
} PATCH_RETAIN_RANGE, *PPATCH_RETAIN_RANGE;
typedef struct _PATCH_OLD_FILE_INFO_A
{
	ULONG SizeOfThisStruct;
	LPCSTR OldFileName;
	ULONG IgnoreRangeCount;
	PPATCH_IGNORE_RANGE IgnoreRangeArray;
	ULONG RetainRangeCount;
	PPATCH_RETAIN_RANGE RetainRangeArray;
} PATCH_OLD_FILE_INFO_A, *PPATCH_OLD_FILE_INFO_A;
typedef struct _PATCH_OLD_FILE_INFO_W
{
	ULONG SizeOfThisStruct;
	LPCWSTR OldFileName;
	ULONG IgnoreRangeCount;
	PPATCH_IGNORE_RANGE IgnoreRangeArray;
	ULONG RetainRangeCount;
	PPATCH_RETAIN_RANGE RetainRangeArray;
} PATCH_OLD_FILE_INFO_W, *PPATCH_OLD_FILE_INFO_W;
typedef struct _PATCH_OLD_FILE_INFO_H
{
	ULONG SizeOfThisStruct;
	HANDLE OldFileHandle;
	ULONG IgnoreRangeCount;
	PPATCH_IGNORE_RANGE IgnoreRangeArray;
	ULONG RetainRangeCount;
	PPATCH_RETAIN_RANGE RetainRangeArray;
} PATCH_OLD_FILE_INFO_H, *PPATCH_OLD_FILE_INFO_H;
typedef struct _PATCH_OLD_FILE_INFO
{
	ULONG SizeOfThisStruct;
	union
	{
		LPCSTR OldFileNameA;
		LPCWSTR OldFileNameW;
		HANDLE OldFileHandle;
	};
	ULONG IgnoreRangeCount;
	PPATCH_IGNORE_RANGE IgnoreRangeArray;
	ULONG RetainRangeCount;
	PPATCH_RETAIN_RANGE RetainRangeArray;
} PATCH_OLD_FILE_INFO, *PPATCH_OLD_FILE_INFO;
typedef struct _PATCH_INTERLEAVE_MAP
{
	ULONG CountRanges;
	struct
	{
		ULONG OldOffset;
		ULONG OldLength;
		ULONG NewLength;
	} Range[1];
} PATCH_INTERLEAVE_MAP, *PPATCH_INTERLEAVE_MAP;
typedef struct _PATCH_OPTION_DATA
{
	ULONG SizeOfThisStruct;
	ULONG SymbolOptionFlags;
	LPCSTR NewFileSymbolPath;
	LPCSTR *OldFileSymbolPathArray;
	ULONG ExtendedOptionFlags;
	PPATCH_SYMLOAD_CALLBACK SymLoadCallback;
	PVOID SymLoadContext;
	PPATCH_INTERLEAVE_MAP *InterleaveMapArray;
	ULONG MaxLzxWindowSize;
} PATCH_OPTION_DATA, *PPATCH_OPTION_DATA;
#ifdef IMPORTING_MSPATCH_DLL
#define PATCHAPI WINAPI __declspec( dllimport )
#else
#define PATCHAPI WINAPI
#endif
BOOL PATCHAPI CreatePatchFileA(LPCSTR OldFileName, LPCSTR NewFileName, LPCSTR PatchFileName, ULONG OptionFlags, PPATCH_OPTION_DATA OptionData);
BOOL PATCHAPI CreatePatchFileW(LPCWSTR OldFileName, LPCWSTR NewFileName, LPCWSTR PatchFileName, ULONG OptionFlags, PPATCH_OPTION_DATA OptionData);
BOOL PATCHAPI CreatePatchFileByHandles(HANDLE OldFileHandle, HANDLE NewFileHandle, HANDLE PatchFileHandle, ULONG OptionFlags, PPATCH_OPTION_DATA OptionData);
BOOL PATCHAPI CreatePatchFileExA(ULONG OldFileCount, PPATCH_OLD_FILE_INFO_A OldFileInfoArray, LPCSTR NewFileName, LPCSTR PatchFileName, ULONG OptionFlags, PPATCH_OPTION_DATA OptionData, PPATCH_PROGRESS_CALLBACK ProgressCallback, PVOID CallbackContext);
BOOL PATCHAPI CreatePatchFileExW(ULONG OldFileCount, PPATCH_OLD_FILE_INFO_W OldFileInfoArray, LPCWSTR NewFileName, LPCWSTR PatchFileName, ULONG OptionFlags, PPATCH_OPTION_DATA OptionData, PPATCH_PROGRESS_CALLBACK ProgressCallback, PVOID CallbackContext);
BOOL PATCHAPI CreatePatchFileByHandlesEx(ULONG OldFileCount, PPATCH_OLD_FILE_INFO_H OldFileInfoArray, HANDLE NewFileHandle, HANDLE PatchFileHandle, ULONG OptionFlags, PPATCH_OPTION_DATA OptionData, PPATCH_PROGRESS_CALLBACK ProgressCallback, PVOID CallbackContext);
BOOL PATCHAPI ExtractPatchHeaderToFileA(LPCSTR PatchFileName, LPCSTR PatchHeaderFileName);
BOOL PATCHAPI ExtractPatchHeaderToFileW(LPCWSTR PatchFileName, LPCWSTR PatchHeaderFileName);
BOOL PATCHAPI ExtractPatchHeaderToFileByHandles(HANDLE PatchFileHandle, HANDLE PatchHeaderFileHandle);
BOOL PATCHAPI TestApplyPatchToFileA(LPCSTR PatchFileName, LPCSTR OldFileName, ULONG ApplyOptionFlags);
BOOL PATCHAPI TestApplyPatchToFileW(LPCWSTR PatchFileName, LPCWSTR OldFileName, ULONG ApplyOptionFlags);
BOOL PATCHAPI TestApplyPatchToFileByHandles(HANDLE PatchFileHandle, HANDLE OldFileHandle, ULONG ApplyOptionFlags);
BOOL PATCHAPI TestApplyPatchToFileByBuffers(PBYTE PatchFileBuffer, ULONG PatchFileSize, PBYTE OldFileBuffer, ULONG OldFileSize, ULONG *NewFileSize, ULONG ApplyOptionFlags);
BOOL PATCHAPI ApplyPatchToFileA(LPCSTR PatchFileName, LPCSTR OldFileName, LPCSTR NewFileName, ULONG ApplyOptionFlags);
BOOL PATCHAPI ApplyPatchToFileW(LPCWSTR PatchFileName, LPCWSTR OldFileName, LPCWSTR NewFileName, ULONG ApplyOptionFlags);
BOOL PATCHAPI ApplyPatchToFileByHandles(HANDLE PatchFileHandle, HANDLE OldFileHandle, HANDLE NewFileHandle, ULONG ApplyOptionFlags);
BOOL PATCHAPI ApplyPatchToFileExA(LPCSTR PatchFileName, LPCSTR OldFileName, LPCSTR NewFileName, ULONG ApplyOptionFlags, PPATCH_PROGRESS_CALLBACK ProgressCallback, PVOID CallbackContext);
BOOL PATCHAPI ApplyPatchToFileExW(LPCWSTR PatchFileName, LPCWSTR OldFileName, LPCWSTR NewFileName, ULONG ApplyOptionFlags, PPATCH_PROGRESS_CALLBACK ProgressCallback, PVOID CallbackContext);
BOOL PATCHAPI ApplyPatchToFileByHandlesEx(HANDLE PatchFileHandle, HANDLE OldFileHandle, HANDLE NewFileHandle, ULONG ApplyOptionFlags, PPATCH_PROGRESS_CALLBACK ProgressCallback, PVOID CallbackContext);
BOOL PATCHAPI ApplyPatchToFileByBuffers(PBYTE PatchFileMapped, ULONG PatchFileSize, PBYTE OldFileMapped, ULONG OldFileSize, PBYTE *NewFileBuffer, ULONG NewFileBufferSize, ULONG *NewFileActualSize, FILETIME *NewFileTime, ULONG ApplyOptionFlags, PPATCH_PROGRESS_CALLBACK ProgressCallback, PVOID CallbackContext);
BOOL PATCHAPI GetFilePatchSignatureA(LPCSTR FileName, ULONG OptionFlags, PVOID OptionData, ULONG IgnoreRangeCount, PPATCH_IGNORE_RANGE IgnoreRangeArray, ULONG RetainRangeCount, PPATCH_RETAIN_RANGE RetainRangeArray, ULONG SignatureBufferSize, LPSTR SignatureBuffer);
BOOL PATCHAPI GetFilePatchSignatureW(LPCWSTR FileName, ULONG OptionFlags, PVOID OptionData, ULONG IgnoreRangeCount, PPATCH_IGNORE_RANGE IgnoreRangeArray, ULONG RetainRangeCount, PPATCH_RETAIN_RANGE RetainRangeArray, ULONG SignatureBufferSize, LPWSTR SignatureBuffer);
BOOL PATCHAPI GetFilePatchSignatureByHandle(HANDLE FileHandle, ULONG OptionFlags, PVOID OptionData, ULONG IgnoreRangeCount, PPATCH_IGNORE_RANGE IgnoreRangeArray, ULONG RetainRangeCount, PPATCH_RETAIN_RANGE RetainRangeArray, ULONG SignatureBufferSize, LPSTR SignatureBuffer);
BOOL PATCHAPI GetFilePatchSignatureByBuffer(PBYTE FileBufferWritable, ULONG FileSize, ULONG OptionFlags, PVOID OptionData, ULONG IgnoreRangeCount, PPATCH_IGNORE_RANGE IgnoreRangeArray, ULONG RetainRangeCount, PPATCH_RETAIN_RANGE RetainRangeArray, ULONG SignatureBufferSize, LPSTR SignatureBuffer);
INT WINAPI NormalizeFileForPatchSignature(PVOID FileBuffer, ULONG FileSize, ULONG OptionFlags, PATCH_OPTION_DATA *OptionData, ULONG NewFileCoffBase, ULONG NewFileCoffTime, ULONG IgnoreRangeCount, PPATCH_IGNORE_RANGE IgnoreRangeArray, ULONG RetainRangeCount, PPATCH_RETAIN_RANGE RetainRangeArray);
#ifdef UNICODE
    #define CreatePatchFile          CreatePatchFileW
    #define CreatePatchFileEx        CreatePatchFileExW
    #define TestApplyPatchToFile     TestApplyPatchToFileW
    #define ApplyPatchToFile         ApplyPatchToFileW
    #define ApplyPatchToFileEx       ApplyPatchToFileExW
    #define ExtractPatchHeaderToFile ExtractPatchHeaderToFileW
    #define GetFilePatchSignature    GetFilePatchSignatureW
#else
    #define CreatePatchFile          CreatePatchFileA
    #define CreatePatchFileEx        CreatePatchFileExA
    #define TestApplyPatchToFile     TestApplyPatchToFileA
    #define ApplyPatchToFile         ApplyPatchToFileA
    #define ApplyPatchToFileEx       ApplyPatchToFileExA
    #define ExtractPatchHeaderToFile ExtractPatchHeaderToFileA
    #define GetFilePatchSignature    GetFilePatchSignatureA
#endif
#endif
