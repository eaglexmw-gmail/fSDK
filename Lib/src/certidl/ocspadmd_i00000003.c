// Created file "Lib\src\certidl\ocspadmd_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOCSPAdminD, 0x784b693d, 0x95f3, 0x420b, 0x81, 0x26, 0x36, 0x5c, 0x09, 0x86, 0x59, 0xf2);

