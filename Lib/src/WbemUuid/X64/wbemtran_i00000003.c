// Created file "Lib\src\WbemUuid\X64\wbemtran_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_WbemTransports_v1, 0x027947f3, 0xd731, 0x11ce, 0xa3, 0x57, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01);

DEFINE_GUID(IID_IWbemTransport, 0x553fe584, 0x2156, 0x11d0, 0xb6, 0xae, 0x00, 0xaa, 0x00, 0x32, 0x40, 0xc7);

DEFINE_GUID(IID_IWbemLevel1Login, 0xf309ad18, 0xd86a, 0x11d0, 0xa0, 0x75, 0x00, 0xc0, 0x4f, 0xb6, 0x88, 0x20);

DEFINE_GUID(IID_IWbemConnectorLogin, 0xd8ec9cb1, 0xb135, 0x4f10, 0x8b, 0x1b, 0xc7, 0x18, 0x8b, 0xb0, 0xd1, 0x86);

DEFINE_GUID(IID_IWbemAddressResolution, 0xf7ce2e12, 0x8c90, 0x11d1, 0x9e, 0x7b, 0x00, 0xc0, 0x4f, 0xc3, 0x24, 0xa8);

DEFINE_GUID(CLSID_WbemLevel1Login, 0x8bc3f05e, 0xd86b, 0x11d0, 0xa0, 0x75, 0x00, 0xc0, 0x4f, 0xb6, 0x88, 0x20);

DEFINE_GUID(CLSID_WbemLocalAddrRes, 0xa1044801, 0x8f7e, 0x11d1, 0x9e, 0x7c, 0x00, 0xc0, 0x4f, 0xc3, 0x24, 0xa8);

DEFINE_GUID(CLSID_WbemUninitializedClassObject, 0x7a0227f6, 0x7108, 0x11d1, 0xad, 0x90, 0x00, 0xc0, 0x4f, 0xd8, 0xfd, 0xff);

DEFINE_GUID(IID_IWbemClientTransport, 0xf7ce2e11, 0x8c90, 0x11d1, 0x9e, 0x7b, 0x00, 0xc0, 0x4f, 0xc3, 0x24, 0xa8);

DEFINE_GUID(IID_IWbemClientConnectionTransport, 0xa889c72a, 0xfcc1, 0x4a9e, 0xaf, 0x61, 0xed, 0x07, 0x13, 0x33, 0xfb, 0x5b);

DEFINE_GUID(CLSID_WbemDCOMTransport, 0xf7ce2e13, 0x8c90, 0x11d1, 0x9e, 0x7b, 0x00, 0xc0, 0x4f, 0xc3, 0x24, 0xa8);

DEFINE_GUID(IID_IWbemConstructClassObject, 0x9ef76194, 0x70d5, 0x11d1, 0xad, 0x90, 0x00, 0xc0, 0x4f, 0xd8, 0xfd, 0xff);

