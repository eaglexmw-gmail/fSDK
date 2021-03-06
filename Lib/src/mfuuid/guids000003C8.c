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

DEFINE_GUID(PKEY_MFNETFEEDBACK_TOTALPACKETSLOST, 0x6d2821cd, 0x08c8, 0x4644, 0xa3, 0x13, 0xcc, 0x45, 0xcf, 0x78, 0xd3, 0x5f);

