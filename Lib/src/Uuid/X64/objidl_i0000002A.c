// Created file "Lib\src\Uuid\X64\objidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRpcChannelBuffer3, 0x25b15600, 0x0115, 0x11d0, 0xbf, 0x0d, 0x00, 0xaa, 0x00, 0xb8, 0xdf, 0xd2);

