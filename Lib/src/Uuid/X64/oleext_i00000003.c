// Created file "Lib\src\Uuid\X64\oleext_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPropertySetContainer, 0xb4ffae60, 0xa7ca, 0x11cd, 0xb5, 0x8b, 0x00, 0x00, 0x6b, 0x82, 0x91, 0x56);

