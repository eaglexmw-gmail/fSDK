// Created file "Lib\src\Uuid\X64\i_msfeeds"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXFeedEnclosure, 0xbfbfb953, 0x644f, 0x4792, 0xb6, 0x9c, 0xdf, 0xac, 0xa4, 0xcb, 0xf8, 0x9a);

