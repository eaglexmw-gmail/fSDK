// Created file "Lib\src\Uuid\X64\mailmsg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMailMsgNotify, 0x0f7c3c30, 0xa8ad, 0x11d1, 0xaa, 0x91, 0x00, 0xaa, 0x00, 0x6b, 0xc8, 0x0b);

DEFINE_GUID(IID_IMailMsgPropertyStream, 0xa44819c0, 0xa7cf, 0x11d1, 0xaa, 0x91, 0x00, 0xaa, 0x00, 0x6b, 0xc8, 0x0b);

DEFINE_GUID(IID_IMailMsgRecipientsBase, 0xd1a97920, 0xa891, 0x11d1, 0xaa, 0x91, 0x00, 0xaa, 0x00, 0x6b, 0xc8, 0x0b);

DEFINE_GUID(IID_IMailMsgRecipientsAdd, 0x4c28a700, 0xa892, 0x11d1, 0xaa, 0x91, 0x00, 0xaa, 0x00, 0x6b, 0xc8, 0x0b);

DEFINE_GUID(IID_IMailMsgRecipients, 0x19507fe0, 0xa892, 0x11d1, 0xaa, 0x91, 0x00, 0xaa, 0x00, 0x6b, 0xc8, 0x0b);

DEFINE_GUID(IID_IMailMsgProperties, 0xab95fb40, 0xa34f, 0x11d1, 0xaa, 0x8a, 0x00, 0xaa, 0x00, 0x6b, 0xc8, 0x0b);

DEFINE_GUID(IID_IMailMsgCommit, 0x02b80edb, 0x6d5a, 0x4d05, 0x95, 0x0a, 0x23, 0x78, 0x11, 0xf8, 0xd4, 0x12);

DEFINE_GUID(IID_IMailMsgValidate, 0x6717b03c, 0x072c, 0x11d3, 0x94, 0xff, 0x00, 0xc0, 0x4f, 0xa3, 0x79, 0xf1);

DEFINE_GUID(IID_IMailMsgValidateContext, 0x60a482b1, 0xb311, 0x4eca, 0xa3, 0xa3, 0x90, 0x7f, 0x9d, 0xaf, 0xd1, 0x6f);

DEFINE_GUID(IID_IMailMsgPropertyManagement, 0xa2f196c0, 0xa351, 0x11d1, 0xaa, 0x8a, 0x00, 0xaa, 0x00, 0x6b, 0xc8, 0x0b);

DEFINE_GUID(IID_IMailMsgEnumMessages, 0xe760a840, 0xc8f1, 0x11d1, 0x9f, 0xf2, 0x00, 0xc0, 0x4f, 0xa3, 0x73, 0x48);

DEFINE_GUID(IID_IMailMsgStoreDriver, 0x246aae60, 0xacc4, 0x11d1, 0xaa, 0x91, 0x00, 0xaa, 0x00, 0x6b, 0xc8, 0x0b);

DEFINE_GUID(IID_IMailMsgQueueMgmt, 0xb2564d0a, 0xd5a1, 0x11d1, 0x9f, 0xf7, 0x00, 0xc0, 0x4f, 0xa3, 0x73, 0x48);

DEFINE_GUID(IID_ISMTPStoreDriver, 0xee51588c, 0xd64a, 0x11d1, 0x9f, 0xf7, 0x00, 0xc0, 0x4f, 0xa3, 0x73, 0x48);

DEFINE_GUID(IID_IMailMsgStoreDriverValidateContext, 0xc6742794, 0xad31, 0x4711, 0xbe, 0x73, 0x98, 0x69, 0x14, 0x2a, 0x8a, 0x23);

DEFINE_GUID(IID_IMailMsgBind, 0x38cb448a, 0xca62, 0x11d1, 0x9f, 0xf3, 0x00, 0xc0, 0x4f, 0xa3, 0x73, 0x48);

DEFINE_GUID(IID_IMailMsgPropertyBag, 0xd6d0509c, 0xec51, 0x11d1, 0xaa, 0x65, 0x00, 0xc0, 0x4f, 0xa3, 0x5b, 0x82);

DEFINE_GUID(IID_IMailMsgLoggingPropertyBag, 0x4cb17416, 0xec53, 0x11d1, 0xaa, 0x65, 0x00, 0xc0, 0x4f, 0xa3, 0x5b, 0x82);

DEFINE_GUID(IID_IMailMsgCleanupCallback, 0x951c04a1, 0x29f0, 0x4b8e, 0x9e, 0xd5, 0x83, 0x6c, 0x73, 0x76, 0x60, 0x51);

DEFINE_GUID(IID_IMailMsgRegisterCleanupCallback, 0x00561c2f, 0x5e90, 0x49e5, 0x9e, 0x73, 0x7b, 0xf9, 0x12, 0x92, 0x98, 0xa0);

DEFINE_GUID(IID_ISMTPServer, 0x22625594, 0xd822, 0x11d1, 0x9f, 0xf7, 0x00, 0xc0, 0x4f, 0xa3, 0x73, 0x48);

DEFINE_GUID(IID_ISMTPServerEx, 0x52ae6373, 0x90f6, 0x470c, 0x9d, 0x38, 0x52, 0x6e, 0x90, 0x60, 0xb0, 0x7d);

DEFINE_GUID(IID_ISMTPServerAsync, 0x08af2a87, 0x8c10, 0x4196, 0x9a, 0xe6, 0xd5, 0x17, 0xa8, 0x6b, 0x97, 0x95);

DEFINE_GUID(IID_ISMTPServerGetAuxDomainInfoFlags, 0x735e9929, 0x1885, 0x4736, 0x8d, 0x07, 0x49, 0x2f, 0x96, 0x2e, 0xce, 0xb9);

DEFINE_GUID(IID_ISMTPServerInternal, 0x57ee6c15, 0x1870, 0x11d2, 0xa6, 0x89, 0x00, 0xc0, 0x4f, 0xa3, 0x49, 0x0a);

DEFINE_GUID(LIBID_MailMsgLib, 0xdaf24820, 0xa8b9, 0x11d1, 0xaa, 0x91, 0x00, 0xaa, 0x00, 0x6b, 0xc8, 0x0b);

