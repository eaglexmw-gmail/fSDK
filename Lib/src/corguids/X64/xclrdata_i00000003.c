// Created file "Lib\src\corguids\X64\xclrdata_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXCLRDataTarget3, 0x59d9b5e1, 0x4a6f, 0x4531, 0x84, 0xc3, 0x51, 0xd1, 0x2d, 0xa2, 0x2f, 0xd4);

DEFINE_GUID(IID_IXCLRLibrarySupport, 0xe5f3039d, 0x2c0c, 0x4230, 0xa6, 0x9e, 0x12, 0xaf, 0x1c, 0x3e, 0x56, 0x3c);

DEFINE_GUID(IID_IXCLRDisassemblySupport, 0x1f0f7134, 0xd3f3, 0x47de, 0x8e, 0x9b, 0xc2, 0xfd, 0x35, 0x8a, 0x29, 0x36);

DEFINE_GUID(IID_IXCLRDataDisplay, 0xa3c1704a, 0x4559, 0x4a67, 0x8d, 0x28, 0xe8, 0xf4, 0xfe, 0x3b, 0x3f, 0x62);

DEFINE_GUID(IID_IXCLRDataProcess, 0x5c552ab6, 0xfc09, 0x4cb3, 0x8e, 0x36, 0x22, 0xfa, 0x03, 0xc7, 0x98, 0xb7);

DEFINE_GUID(IID_IXCLRDataProcess2, 0x5c552ab6, 0xfc09, 0x4cb3, 0x8e, 0x36, 0x22, 0xfa, 0x03, 0xc7, 0x98, 0xb8);

DEFINE_GUID(IID_IXCLRDataAppDomain, 0x7ca04601, 0xc702, 0x4670, 0xa6, 0x3c, 0xfa, 0x44, 0xf7, 0xda, 0x7b, 0xd5);

DEFINE_GUID(IID_IXCLRDataAssembly, 0x2fa17588, 0x43c2, 0x46ab, 0x9b, 0x51, 0xc8, 0xf0, 0x1e, 0x39, 0xc9, 0xac);

DEFINE_GUID(IID_IXCLRDataModule, 0x88e32849, 0x0a0a, 0x4cb0, 0x90, 0x22, 0x7c, 0xd2, 0xe9, 0xe1, 0x39, 0xe2);

DEFINE_GUID(IID_IXCLRDataTypeDefinition, 0x4675666c, 0xc275, 0x45b8, 0x9f, 0x6c, 0xab, 0x16, 0x5d, 0x5c, 0x1e, 0x09);

DEFINE_GUID(IID_IXCLRDataTypeInstance, 0x4d078d91, 0x9cb3, 0x4b0d, 0x97, 0xac, 0x28, 0xc8, 0xa5, 0xa8, 0x25, 0x97);

DEFINE_GUID(IID_IXCLRDataMethodDefinition, 0xaaf60008, 0xfb2c, 0x420b, 0x8f, 0xb1, 0x42, 0xd2, 0x44, 0xa5, 0x4a, 0x97);

DEFINE_GUID(IID_IXCLRDataMethodInstance, 0xecd73800, 0x22ca, 0x4b0d, 0xab, 0x55, 0xe9, 0xba, 0x7e, 0x63, 0x18, 0xa5);

DEFINE_GUID(IID_IXCLRDataTask, 0xa5b0beea, 0xec62, 0x4618, 0x80, 0x12, 0xa2, 0x4f, 0xfc, 0x23, 0x93, 0x4c);

DEFINE_GUID(IID_IXCLRDataStackWalk, 0xe59d8d22, 0xada7, 0x49a2, 0x89, 0xb5, 0xa4, 0x15, 0xaf, 0xcf, 0xc9, 0x5f);

DEFINE_GUID(IID_IXCLRDataFrame, 0x271498c2, 0x4085, 0x4766, 0xbc, 0x3a, 0x7f, 0x8e, 0xd1, 0x88, 0xa1, 0x73);

DEFINE_GUID(IID_IXCLRDataExceptionState, 0x75da9e4c, 0xbd33, 0x43c8, 0x8f, 0x5c, 0x96, 0xe8, 0xa5, 0x24, 0x1f, 0x57);

DEFINE_GUID(IID_IXCLRDataValue, 0x96ec93c7, 0x1000, 0x4e93, 0x89, 0x91, 0x98, 0xd8, 0x76, 0x6e, 0x66, 0x66);

DEFINE_GUID(IID_IXCLRDataExceptionNotification, 0x2d95a079, 0x42a1, 0x4837, 0x81, 0x8f, 0x0b, 0x97, 0xd7, 0x04, 0x8e, 0x0e);

DEFINE_GUID(IID_IXCLRDataExceptionNotification2, 0x31201a94, 0x4337, 0x49b7, 0xae, 0xf7, 0x0c, 0x75, 0x50, 0x54, 0x09, 0x1f);

DEFINE_GUID(IID_IXCLRDataExceptionNotification3, 0x31201a94, 0x4337, 0x49b7, 0xae, 0xf7, 0x0c, 0x75, 0x50, 0x54, 0x09, 0x20);
