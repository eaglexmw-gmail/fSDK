// Created file "Lib\src\MsXml2\X64\msxml_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_XMLDSOControl, 0x550dda30, 0x0541, 0x11d2, 0x9c, 0xa9, 0x00, 0x60, 0xb0, 0xec, 0x3d, 0x39);

