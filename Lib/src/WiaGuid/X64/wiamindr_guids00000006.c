// Created file "Lib\src\WiaGuid\X64\wiamindr_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaDrvItem, 0x1f02b5c5, 0xb00c, 0x11d2, 0xa0, 0x94, 0x00, 0xc0, 0x4f, 0x72, 0xdc, 0x3c);

