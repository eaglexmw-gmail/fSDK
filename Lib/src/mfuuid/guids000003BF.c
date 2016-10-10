// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_MFNETRTPSTREAM_LEAKYBUCKETPARAMETERS, 0xe4936a27, 0x4181, 0x4d5a, 0x82, 0x4a, 0x07, 0xb6, 0x10, 0x99, 0x49, 0xa9);

