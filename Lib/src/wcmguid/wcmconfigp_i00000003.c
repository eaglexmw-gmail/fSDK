// Created file "Lib\src\wcmguid\wcmconfigp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INamespaceIdentityPriv, 0x90a45acc, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_ISettingsEnginePriv, 0x90a45ac0, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_ITargetInfoPriv, 0x90a45acd, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_IItemCollectionPriv, 0x90a45abf, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_ISettingsItemPriv, 0x90a45ac1, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_ISettingsNamespacePriv, 0x90a45ac3, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_ISettingsAttributePriv, 0x90a45aca, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_IMetadataPriv, 0x90a45ac4, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_IMetadataItemPriv, 0x90a45ac2, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_IComplexTypePriv, 0x90a45ac5, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_ISimpleTypePriv, 0x90a45ac6, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_IElementPriv, 0x90a45ac8, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_IMemberElementPriv, 0x90a45ac9, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(IID_ISecurityDefinitionPriv, 0x90a45acb, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(LIBID_WcmPriv, 0x90a45abd, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

DEFINE_GUID(CLSID_SettingsEnginePriv, 0x90a45abe, 0x2c77, 0x11d9, 0xbd, 0xf0, 0x00, 0x08, 0x74, 0xcd, 0x1b, 0xae);

