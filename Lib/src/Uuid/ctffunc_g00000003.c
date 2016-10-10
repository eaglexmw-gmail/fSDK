// Created file "Lib\src\Uuid\ctffunc_g"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_SapiLayr, 0xdcbd6fa8, 0x032f, 0x11d3, 0xb5, 0xb1, 0x00, 0xc0, 0x4f, 0xc3, 0x24, 0xa1);

DEFINE_GUID(GUID_TFCAT_TIP_MASTERLM, 0xfe7c68f6, 0xded1, 0x4787, 0x9a, 0xb5, 0xaf, 0x15, 0xe8, 0xb9, 0x1a, 0x0f);

DEFINE_GUID(GUID_MASTERLM_FUNCTIONPROVIDER, 0xff341c48, 0xdb92, 0x46e5, 0x88, 0x30, 0x18, 0xb8, 0x01, 0x5b, 0xaf, 0x49);

DEFINE_GUID(GUID_LMLATTICE_VER1_0, 0x23b2be84, 0x9ebe, 0x4820, 0xb2, 0x9f, 0x70, 0xfc, 0xa9, 0x7e, 0x7d, 0x57);

DEFINE_GUID(GUID_PROP_LMLATTICE, 0x8189b801, 0xd62f, 0x400a, 0x8c, 0x12, 0xe2, 0x93, 0x40, 0x96, 0x7b, 0xa8);

