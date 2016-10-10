// Created file "Lib\src\Uuid\i_activaut"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IScriptScriptlet, 0x0aee2a96, 0xbcbb, 0x11d0, 0x8c, 0x72, 0x00, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);

