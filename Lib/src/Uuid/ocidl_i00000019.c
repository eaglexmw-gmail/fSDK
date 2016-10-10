// Created file "Lib\src\Uuid\ocidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFontEventsDisp, 0x4ef6100a, 0xaf88, 0x11d0, 0x98, 0x46, 0x00, 0xc0, 0x4f, 0xc2, 0x99, 0x93);

