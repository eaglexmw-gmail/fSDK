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

DEFINE_GUID(MF_MT_AUDIO_FOLDDOWN_MATRIX, 0x9d62927c, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11);

