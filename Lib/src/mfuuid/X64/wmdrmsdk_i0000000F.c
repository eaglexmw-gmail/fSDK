// Created file "Lib\src\mfuuid\X64\wmdrmsdk_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWMDRMNetTransmitter, 0xf040c12b, 0x4415, 0x4f20, 0x93, 0xf0, 0x45, 0x3e, 0xb5, 0x19, 0xa7, 0x56);

