// Created file "Lib\src\WiaGuid\X64\wiavideo_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaVideo, 0xd52920aa, 0xdb88, 0x41f0, 0x94, 0x6c, 0xe0, 0x0d, 0xc0, 0xa1, 0x9c, 0xfa);

