// Created file "Lib\src\Uuid\vcguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DBBMK_BEGINNING, 0x00040302, 0x0000, 0x00f1, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1d, 0x00);

