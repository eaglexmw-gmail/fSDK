// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MF_PRES_TARGET_SDP_RTSP_V10, 0x8a88a27c, 0x5633, 0x48f7, 0xa9, 0xe3, 0x4e, 0x40, 0x41, 0xee, 0xf3, 0x93);

