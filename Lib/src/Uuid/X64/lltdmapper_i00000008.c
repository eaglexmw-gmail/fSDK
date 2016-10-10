// Created file "Lib\src\Uuid\X64\lltdmapper_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILLTDMap, 0xbc190dff, 0x8708, 0x4488, 0xbf, 0x62, 0xb9, 0x4b, 0xef, 0x99, 0x4f, 0x44);

