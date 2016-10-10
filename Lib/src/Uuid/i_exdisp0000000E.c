// Created file "Lib\src\Uuid\i_exdisp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DIID_DShellWindowsEvents, 0xfe4106e0, 0x399a, 0x11d0, 0xa4, 0x8c, 0x00, 0xa0, 0xc9, 0x0a, 0x8f, 0x39);

