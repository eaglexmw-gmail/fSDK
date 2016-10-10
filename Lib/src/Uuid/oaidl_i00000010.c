// Created file "Lib\src\Uuid\oaidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICreateErrorInfo, 0x22f03340, 0x547d, 0x101b, 0x8e, 0x65, 0x08, 0x00, 0x2b, 0x2b, 0xd1, 0x19);

