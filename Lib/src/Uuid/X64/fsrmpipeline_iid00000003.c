// Created file "Lib\src\Uuid\X64\fsrmpipeline_iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFsrmPropertyDefinition, 0xede0150f, 0xe9a3, 0x419c, 0x87, 0x7c, 0x01, 0xfe, 0x5d, 0x24, 0xc5, 0xd3);

DEFINE_GUID(IID_IFsrmProperty, 0x4a73fee4, 0x4102, 0x4fcc, 0x9f, 0xfb, 0x38, 0x61, 0x4f, 0x9e, 0xe7, 0x68);

DEFINE_GUID(IID_IFsrmRule, 0xcb0df960, 0x16f5, 0x4495, 0x90, 0x79, 0x3f, 0x93, 0x60, 0xd8, 0x31, 0xdf);

DEFINE_GUID(IID_IFsrmClassificationRule, 0xafc052c2, 0x5315, 0x45ab, 0x84, 0x1b, 0xc6, 0xdb, 0x0e, 0x12, 0x01, 0x48);

DEFINE_GUID(IID_IFsrmPipelineModuleDefinition, 0x515c1277, 0x2c81, 0x440e, 0x8f, 0xcf, 0x36, 0x79, 0x21, 0xed, 0x4f, 0x59);

DEFINE_GUID(IID_IFsrmClassifierModuleDefinition, 0xbb36ea26, 0x6318, 0x4b8c, 0x85, 0x92, 0xf7, 0x2d, 0xd6, 0x02, 0xe7, 0xa5);

DEFINE_GUID(IID_IFsrmStorageModuleDefinition, 0x15a81350, 0x497d, 0x4aba, 0x80, 0xe9, 0xd4, 0xdb, 0xcc, 0x55, 0x21, 0xfe);

DEFINE_GUID(IID_IFsrmClassificationManager, 0xd2dc89da, 0xee91, 0x48a0, 0x85, 0xd8, 0xcc, 0x72, 0xa5, 0x6f, 0x7d, 0x04);

DEFINE_GUID(IID_IFsrmPropertyBag, 0x774589d1, 0xd300, 0x4f7a, 0x9a, 0x24, 0xf7, 0xb7, 0x66, 0x80, 0x02, 0x50);

DEFINE_GUID(IID_IFsrmPipelineModuleImplementation, 0xb7907906, 0x2b02, 0x4cb5, 0x84, 0xa9, 0xfd, 0xf5, 0x46, 0x13, 0xd6, 0xcd);

DEFINE_GUID(IID_IFsrmClassifierModuleImplementation, 0x4c968fc6, 0x6edb, 0x4051, 0x9c, 0x18, 0x73, 0xb7, 0x29, 0x1a, 0xe1, 0x06);

DEFINE_GUID(IID_IFsrmStorageModuleImplementation, 0x0af4a0da, 0x895a, 0x4e50, 0x87, 0x12, 0xa9, 0x67, 0x24, 0xbc, 0xec, 0x64);

DEFINE_GUID(IID_IFsrmPipelineModuleConnector, 0xc16014f3, 0x9aa1, 0x46b3, 0xb0, 0xa7, 0xab, 0x14, 0x6e, 0xb2, 0x05, 0xf2);

