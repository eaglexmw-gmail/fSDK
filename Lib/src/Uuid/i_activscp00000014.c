// Created file "Lib\src\Uuid\i_activscp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBindEventHandler, 0x63cdbcb0, 0xc1b1, 0x11d0, 0x93, 0x36, 0x00, 0xa0, 0xc9, 0x0d, 0xca, 0xa9);

