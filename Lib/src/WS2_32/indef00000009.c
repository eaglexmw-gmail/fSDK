// Created file "Lib\src\WS2_32\indef"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(in4addr_broadcast, 0xffffffff, 0x00e0, 0x0100, 0xe0, 0x00, 0x00, 0x02, 0xe0, 0x00, 0x00, 0x16);

