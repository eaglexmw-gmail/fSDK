// Created file "Lib\src\Bits\X64\bits3_0_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBitsPeerCacheRecord, 0x659cdeaf, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

DEFINE_GUID(IID_IEnumBitsPeerCacheRecords, 0x659cdea4, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

DEFINE_GUID(IID_IBitsPeer, 0x659cdea2, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

DEFINE_GUID(IID_IEnumBitsPeers, 0x659cdea5, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

DEFINE_GUID(IID_IBitsPeerCacheAdministration, 0x659cdead, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

DEFINE_GUID(IID_IBackgroundCopyJob4, 0x659cdeae, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

DEFINE_GUID(IID_IBackgroundCopyFile3, 0x659cdeaa, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

DEFINE_GUID(IID_IBackgroundCopyCallback2, 0x659cdeac, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

DEFINE_GUID(LIBID_BackgroundCopyManager3_0, 0x659cdea6, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

DEFINE_GUID(CLSID_BackgroundCopyManager3_0, 0x659cdea7, 0x489e, 0x11d9, 0xa9, 0xcd, 0x00, 0x0d, 0x56, 0x96, 0x52, 0x51);

