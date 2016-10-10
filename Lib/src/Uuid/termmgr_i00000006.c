// Created file "Lib\src\Uuid\termmgr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITTerminalManager2, 0xbb33dec6, 0xb2c7, 0x46e6, 0x9e, 0xd1, 0x49, 0x8b, 0x91, 0xfa, 0x85, 0xac);

