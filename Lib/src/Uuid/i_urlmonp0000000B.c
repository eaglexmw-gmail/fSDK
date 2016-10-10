// Created file "Lib\src\Uuid\i_urlmonp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBindStatusCallbackHolderSink, 0xbb81f1d9, 0x5fa7, 0x4941, 0xa5, 0x7c, 0x1f, 0x5c, 0x24, 0xef, 0xf5, 0xad);

