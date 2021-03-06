// Created file "Lib\src\Uuid\i_axis"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IeAxiServiceCallback, 0x1823e7ba, 0xec36, 0x447a, 0x9b, 0x2e, 0xb4, 0x91, 0x2e, 0x15, 0xaf, 0xe7);

