// Created file "Lib\src\Uuid\X64\termmgr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_TerminalManager, 0x7170f2e0, 0x9be3, 0x11d0, 0xa0, 0x09, 0x00, 0xaa, 0x00, 0xb6, 0x05, 0xa4);

