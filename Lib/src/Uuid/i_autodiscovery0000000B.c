// Created file "Lib\src\Uuid\i_autodiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MailAutoDiscovery, 0x008fd5dd, 0x6dbb, 0x48e3, 0x99, 0x1b, 0x2d, 0x3e, 0xd6, 0x58, 0x51, 0x6a);

