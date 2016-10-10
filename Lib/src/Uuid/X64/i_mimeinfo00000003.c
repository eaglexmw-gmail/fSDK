// Created file "Lib\src\Uuid\X64\i_mimeinfo"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMimeInfo, 0xf77459a0, 0xbf9a, 0x11cf, 0xba, 0x4e, 0x00, 0xc0, 0x4f, 0xd7, 0x08, 0x16);

