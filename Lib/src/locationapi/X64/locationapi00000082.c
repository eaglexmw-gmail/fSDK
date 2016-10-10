// Created file "Lib\src\locationapi\X64\locationapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILocationReport, 0xc8b7f7ee, 0x75d0, 0x4db9, 0xb6, 0x2d, 0x7a, 0x0f, 0x36, 0x9c, 0xa4, 0x56);

DEFINE_GUID(IID_ILatLongReport, 0x7fed806d, 0x0ef8, 0x4f07, 0x80, 0xac, 0x36, 0xa0, 0xbe, 0xae, 0x31, 0x34);

DEFINE_GUID(IID_ICivicAddressReport, 0xc0b19f70, 0x4adf, 0x445d, 0x87, 0xf2, 0xca, 0xd8, 0xfd, 0x71, 0x17, 0x92);

DEFINE_GUID(IID_ILocation, 0xab2ece69, 0x56d9, 0x4f28, 0xb5, 0x25, 0xde, 0x1b, 0x0e, 0xe4, 0x42, 0x37);

DEFINE_GUID(IID_IDefaultLocation, 0xa65af77e, 0x969a, 0x4a2e, 0x8a, 0xca, 0x33, 0xbb, 0x7c, 0xbb, 0x12, 0x35);

DEFINE_GUID(IID_ILocationEvents, 0xcae02bbf, 0x798b, 0x4508, 0xa2, 0x07, 0x35, 0xa7, 0x90, 0x6d, 0xc7, 0x3d);

DEFINE_GUID(IID_IDispLatLongReport, 0x8ae32723, 0x389b, 0x4a11, 0x99, 0x57, 0x5b, 0xdd, 0x48, 0xfc, 0x96, 0x17);

DEFINE_GUID(IID_IDispCivicAddressReport, 0x16ff1a34, 0x9e30, 0x42c3, 0xb4, 0x4d, 0xe2, 0x25, 0x13, 0xb5, 0x76, 0x7a);

DEFINE_GUID(IID_ILocationReportFactory, 0x2daec322, 0x90b2, 0x47e4, 0xbb, 0x08, 0x0d, 0xa8, 0x41, 0x93, 0x5a, 0x6b);

DEFINE_GUID(IID_ILatLongReportFactory, 0x3f0804cb, 0xb114, 0x447d, 0x83, 0xdd, 0x39, 0x01, 0x74, 0xeb, 0xb0, 0x82);

DEFINE_GUID(IID_ICivicAddressReportFactory, 0xbf773b93, 0xc64f, 0x4bee, 0xbe, 0xb2, 0x67, 0xc0, 0xb8, 0xdf, 0x66, 0xe0);

DEFINE_GUID(LIBID_LocationApiLib, 0x4486df98, 0x22a5, 0x4f6b, 0xbd, 0x5c, 0x8c, 0xad, 0xce, 0xc0, 0xa6, 0xde);

DEFINE_GUID(CLSID_Location, 0xe5b8e079, 0xee6d, 0x4e33, 0xa4, 0x38, 0xc8, 0x7f, 0x2e, 0x95, 0x92, 0x54);

DEFINE_GUID(CLSID_DefaultLocation, 0x8b7fbfe0, 0x5cd7, 0x494a, 0xaf, 0x8c, 0x28, 0x3a, 0x65, 0x70, 0x75, 0x06);

DEFINE_GUID(CLSID_LatLongReport, 0xed81c073, 0x1f84, 0x4ca8, 0xa1, 0x61, 0x18, 0x3c, 0x77, 0x6b, 0xc6, 0x51);

DEFINE_GUID(CLSID_CivicAddressReport, 0xd39e7bdd, 0x7d05, 0x46b8, 0x87, 0x21, 0x80, 0xcf, 0x03, 0x5f, 0x57, 0xd7);

DEFINE_GUID(DIID__ILatLongReportFactoryEvents, 0x16ee6cb7, 0xab3c, 0x424b, 0x84, 0x9f, 0x26, 0x9b, 0xe5, 0x51, 0xfc, 0xbc);

DEFINE_GUID(DIID__ICivicAddressReportFactoryEvents, 0xc96039ff, 0x72ec, 0x4617, 0x89, 0xbd, 0x84, 0xd8, 0x8b, 0xed, 0xc7, 0x22);

DEFINE_GUID(CLSID_LatLongReportFactory, 0x9dcc3cc8, 0x8609, 0x4863, 0xba, 0xd4, 0x03, 0x60, 0x1f, 0x4c, 0x65, 0xe8);

DEFINE_GUID(CLSID_CivicAddressReportFactory, 0x2a11f42c, 0x3e81, 0x4ad4, 0x9c, 0xbe, 0x45, 0x57, 0x9d, 0x89, 0x67, 0x1a);

DEFINE_GUID(CLSID_DispLatLongReport, 0x7a7c3277, 0x8f84, 0x4636, 0x95, 0xb2, 0xeb, 0xb5, 0x50, 0x7f, 0xf7, 0x7e);

DEFINE_GUID(CLSID_DispCivicAddressReport, 0x4c596aec, 0x8544, 0x4082, 0xba, 0x9f, 0xeb, 0x0a, 0x7d, 0x8e, 0x65, 0xc6);
