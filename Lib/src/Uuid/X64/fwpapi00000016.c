// Created file "Lib\src\Uuid\X64\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_LAYER_OUTBOUND_TRANSPORT_V6_DISCARD, 0xf433df69, 0xccbd, 0x482e, 0xb9, 0xb2, 0x57, 0x16, 0x56, 0x58, 0xc3, 0xb3);

