// Created file "Lib\src\Uuid\X64\i_dxtransp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DXTLabel, 0x54702535, 0x2606, 0x11d1, 0x99, 0x9c, 0x00, 0x00, 0xf8, 0x75, 0x6a, 0x10);
