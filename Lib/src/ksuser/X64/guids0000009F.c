// Created file "Lib\src\ksuser\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSDATAFORMAT_SUBTYPE_ANALOG, 0x6dba3190, 0x67bd, 0x11cf, 0xa0, 0xf7, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4);

