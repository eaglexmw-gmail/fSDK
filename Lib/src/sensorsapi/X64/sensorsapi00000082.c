// Created file "Lib\src\sensorsapi\X64\sensorsapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISensorManager, 0xbd77db67, 0x45a8, 0x42dc, 0x8d, 0x00, 0x6d, 0xcf, 0x15, 0xf8, 0x37, 0x7a);

DEFINE_GUID(IID_ISensorCollection, 0x23571e11, 0xe545, 0x4dd8, 0xa3, 0x37, 0xb8, 0x9b, 0xf4, 0x4b, 0x10, 0xdf);

DEFINE_GUID(IID_ISensor, 0x5fa08f80, 0x2657, 0x458e, 0xaf, 0x75, 0x46, 0xf7, 0x3f, 0xa6, 0xac, 0x5c);

DEFINE_GUID(IID_ISensorDataReport, 0x0ab9df9b, 0xc4b5, 0x4796, 0x88, 0x98, 0x04, 0x70, 0x70, 0x6a, 0x2e, 0x1d);

DEFINE_GUID(IID_ISensorManagerEvents, 0x9b3b0b86, 0x266a, 0x4aad, 0xb2, 0x1f, 0xfd, 0xe5, 0x50, 0x10, 0x01, 0xb7);

DEFINE_GUID(IID_ISensorEvents, 0x5d8dcc91, 0x4641, 0x47e7, 0xb7, 0xc3, 0xb7, 0x4f, 0x48, 0xa6, 0xc3, 0x91);

DEFINE_GUID(IID_ILogicalSensorManager, 0x7490b4d4, 0x1be9, 0x469a, 0x97, 0x43, 0x37, 0xa2, 0x7c, 0x1d, 0x80, 0xaf);

DEFINE_GUID(LIBID_SensorsApiLib, 0x15092592, 0x5270, 0x4c6c, 0xaa, 0xa0, 0x11, 0x76, 0x4f, 0x18, 0x9a, 0x8f);

DEFINE_GUID(CLSID_SensorManager, 0x77a1c827, 0xfcd2, 0x4689, 0x89, 0x15, 0x9d, 0x61, 0x3c, 0xc5, 0xfa, 0x3e);

DEFINE_GUID(CLSID_SensorCollection, 0x79c43adb, 0xa429, 0x469f, 0xaa, 0x39, 0x2f, 0x2b, 0x74, 0xb7, 0x59, 0x37);

DEFINE_GUID(CLSID_Sensor, 0xe97ced00, 0x523a, 0x4133, 0xbf, 0x6f, 0xd3, 0xa2, 0xda, 0xe7, 0xf6, 0xba);

DEFINE_GUID(CLSID_SensorDataReport, 0x4ea9d6ef, 0x694b, 0x4218, 0x88, 0x16, 0xcc, 0xda, 0x8d, 0xa7, 0x4b, 0xba);

DEFINE_GUID(CLSID_LogicalSensorManager, 0x50a7b286, 0x7d23, 0x41e6, 0x94, 0x40, 0x4d, 0xae, 0xe0, 0x0d, 0xc5, 0xf0);

