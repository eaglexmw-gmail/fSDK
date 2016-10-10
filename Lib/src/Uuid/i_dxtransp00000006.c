// Created file "Lib\src\Uuid\i_dxtransp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDX2D, 0x9efd02a9, 0xa996, 0x11d1, 0x81, 0xc9, 0x00, 0x00, 0xf8, 0x75, 0x57, 0xdb);

