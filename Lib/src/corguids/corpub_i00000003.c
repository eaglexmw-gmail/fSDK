// Created file "Lib\src\corguids\corpub_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_CorpubProcessLib, 0xe97ca460, 0x657d, 0x11d3, 0x8d, 0x5b, 0x00, 0x10, 0x4b, 0x35, 0xe7, 0xef);

DEFINE_GUID(CLSID_CorpubPublish, 0x047a9a40, 0x657e, 0x11d3, 0x8d, 0x5b, 0x00, 0x10, 0x4b, 0x35, 0xe7, 0xef);

DEFINE_GUID(IID_ICorPublish, 0x9613a0e7, 0x5a68, 0x11d3, 0x8f, 0x84, 0x00, 0xa0, 0xc9, 0xb4, 0xd5, 0x0c);

DEFINE_GUID(IID_ICorPublishEnum, 0xc0b22967, 0x5a69, 0x11d3, 0x8f, 0x84, 0x00, 0xa0, 0xc9, 0xb4, 0xd5, 0x0c);

DEFINE_GUID(IID_ICorPublishProcess, 0x18d87af1, 0x5a6a, 0x11d3, 0x8f, 0x84, 0x00, 0xa0, 0xc9, 0xb4, 0xd5, 0x0c);

DEFINE_GUID(IID_ICorPublishAppDomain, 0xd6315c8f, 0x5a6a, 0x11d3, 0x8f, 0x84, 0x00, 0xa0, 0xc9, 0xb4, 0xd5, 0x0c);

DEFINE_GUID(IID_ICorPublishProcessEnum, 0xa37fbd41, 0x5a69, 0x11d3, 0x8f, 0x84, 0x00, 0xa0, 0xc9, 0xb4, 0xd5, 0x0c);

DEFINE_GUID(IID_ICorPublishAppDomainEnum, 0x9f0c98f5, 0x5a6a, 0x11d3, 0x8f, 0x84, 0x00, 0xa0, 0xc9, 0xb4, 0xd5, 0x0c);

