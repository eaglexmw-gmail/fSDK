// Created file "Lib\src\Uuid\hnetcfg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumHNetConnections, 0xe48cb68f, 0x7cf0, 0x496d, 0xb8, 0xf7, 0xd2, 0xef, 0x8b, 0x63, 0x9e, 0x1b);

