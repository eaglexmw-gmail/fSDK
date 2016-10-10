// Created file "Lib\src\Uuid\esguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumEnhancedStorageACT, 0x09b224bd, 0x1335, 0x4631, 0xa7, 0xff, 0xcf, 0xd3, 0xa9, 0x26, 0x46, 0xd7);

DEFINE_GUID(IID_IEnhancedStorageACT, 0x6e7781f4, 0xe0f2, 0x4239, 0xb9, 0x76, 0xa0, 0x1a, 0xba, 0xb5, 0x29, 0x30);

DEFINE_GUID(IID_IEnhancedStorageACT2, 0x4da57d2e, 0x8eb3, 0x41f6, 0xa0, 0x7e, 0x98, 0xb5, 0x2b, 0x88, 0x24, 0x2b);

DEFINE_GUID(IID_IEnhancedStorageSilo, 0x5aef78c6, 0x2242, 0x4703, 0xbf, 0x49, 0x44, 0xb2, 0x93, 0x57, 0xa3, 0x59);

DEFINE_GUID(IID_IEnhancedStorageSiloAction, 0xb6f7f311, 0x206f, 0x4ff8, 0x9c, 0x4b, 0x27, 0xef, 0xee, 0x77, 0xa8, 0x6f);

DEFINE_GUID(LIBID_EnhancedStorageAPILib, 0xff9d683b, 0xb90a, 0x49b4, 0x96, 0x49, 0xf9, 0x37, 0x56, 0xba, 0xd7, 0x1f);

DEFINE_GUID(CLSID_EnumEnhancedStorageACT, 0xfe841493, 0x835c, 0x4fa3, 0xb6, 0xcc, 0xb4, 0xb2, 0xd4, 0x71, 0x98, 0x48);

DEFINE_GUID(CLSID_EnhancedStorageACT, 0xaf076a15, 0x2ece, 0x4ad4, 0xbb, 0x21, 0x29, 0xf0, 0x40, 0xe1, 0x76, 0xd8);

DEFINE_GUID(CLSID_EnhancedStorageSilo, 0xcb25220c, 0x76c7, 0x4fee, 0x84, 0x2b, 0xf3, 0x38, 0x3c, 0xd0, 0x22, 0xbc);

DEFINE_GUID(CLSID_EnhancedStorageSiloAction, 0x886d29dd, 0xb506, 0x466b, 0x9f, 0xbf, 0xb4, 0x4f, 0xf3, 0x83, 0xfb, 0x3f);

