// Created file "Lib\src\Uuid\napclsids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NapCertRelyingParty, 0xe5fae3b3, 0x1ac8, 0x4bd3, 0x87, 0xe6, 0x48, 0xef, 0xf5, 0x09, 0xdd, 0xaa);

