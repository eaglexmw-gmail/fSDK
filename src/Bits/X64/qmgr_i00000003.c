// Created file "Lib\src\Bits\X64\qmgr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBackgroundCopyJob1, 0x59f5553c, 0x2031, 0x4629, 0xbb, 0x18, 0x26, 0x45, 0xa6, 0x97, 0x09, 0x47);

DEFINE_GUID(IID_IEnumBackgroundCopyJobs1, 0x8baeba9d, 0x8f1c, 0x42c4, 0xb8, 0x2c, 0x09, 0xae, 0x79, 0x98, 0x0d, 0x25);

DEFINE_GUID(IID_IBackgroundCopyGroup, 0x1ded80a7, 0x53ea, 0x424f, 0x8a, 0x04, 0x17, 0xfe, 0xa9, 0xad, 0xc4, 0xf5);

DEFINE_GUID(IID_IEnumBackgroundCopyGroups, 0xd993e603, 0x4aa4, 0x47c5, 0x86, 0x65, 0xc2, 0x0d, 0x39, 0xc2, 0xba, 0x4f);

DEFINE_GUID(IID_IBackgroundCopyCallback1, 0x084f6593, 0x3800, 0x4e08, 0x9b, 0x59, 0x99, 0xfa, 0x59, 0xad, 0xdf, 0x82);

DEFINE_GUID(IID_IBackgroundCopyQMgr, 0x16f41c69, 0x09f5, 0x41d2, 0x8c, 0xd8, 0x3c, 0x08, 0xc4, 0x7b, 0xc8, 0xa8);

DEFINE_GUID(LIBID_BackgroundCopyQMgr, 0xf5b26dcb, 0xb37e, 0x4d7c, 0xae, 0x7a, 0x1c, 0xb3, 0xfb, 0xeb, 0x18, 0x3e);

DEFINE_GUID(CLSID_BackgroundCopyQMgr, 0x69ad4aee, 0x51be, 0x439b, 0xa9, 0x2c, 0x86, 0xae, 0x49, 0x0e, 0x8b, 0x30);

