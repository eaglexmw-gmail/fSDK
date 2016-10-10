// Created file "Lib\src\Uuid\X64\httprequest_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWinHttpRequest, 0x016fe2ec, 0xb2c8, 0x45f8, 0xb2, 0x3b, 0x39, 0xe5, 0x3a, 0x75, 0x39, 0x6b);

