// Created file "Lib\src\Uuid\i_dxtrans"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DXSurfaceModifier, 0x3e669f1d, 0x9c23, 0x11d1, 0x90, 0x53, 0x00, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);

