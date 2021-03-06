// Created file "Lib\src\MMC\X64\ndmgriid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_ScopeTree, 0x7f1899da, 0x62a6, 0x11d0, 0xa2, 0xc6, 0x00, 0xc0, 0x4f, 0xd9, 0x09, 0xdd);

