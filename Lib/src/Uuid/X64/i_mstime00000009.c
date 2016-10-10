// Created file "Lib\src\Uuid\X64\i_mstime"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITIMETransitionElement, 0xf383d66f, 0x5e68, 0x4fc2, 0xb6, 0x41, 0x03, 0x67, 0x2b, 0x54, 0x3a, 0x49);

