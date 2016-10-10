// Created file "Lib\src\Uuid\netcfgn_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetCfgPnpReconfigCallback, 0x8d84bd35, 0xe227, 0x11d2, 0xb7, 0x00, 0x00, 0xa0, 0xc9, 0x8a, 0x6a, 0x85);

