// Created file "Lib\src\Uuid\msctf_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITfThreadMgr, 0xaa80e801, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfThreadMgrEx, 0x3e90ade3, 0x7594, 0x4cb0, 0xbb, 0x58, 0x69, 0x62, 0x8f, 0x5f, 0x45, 0x8c);

DEFINE_GUID(IID_ITfThreadMgrEventSink, 0xaa80e80e, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfConfigureSystemKeystrokeFeed, 0x0d2c969a, 0xbc9c, 0x437c, 0x84, 0xee, 0x95, 0x1c, 0x49, 0xb1, 0xa7, 0x64);

DEFINE_GUID(IID_IEnumTfDocumentMgrs, 0xaa80e808, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfDocumentMgr, 0xaa80e7f4, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_IEnumTfContexts, 0x8f1a7ea6, 0x1654, 0x4502, 0xa8, 0x6e, 0xb2, 0x90, 0x23, 0x44, 0xd5, 0x07);

DEFINE_GUID(IID_ITfCompositionView, 0xd7540241, 0xf9a1, 0x4364, 0xbe, 0xfc, 0xdb, 0xcd, 0x2c, 0x43, 0x95, 0xb7);

DEFINE_GUID(IID_IEnumITfCompositionView, 0x5efd22ba, 0x7838, 0x46cb, 0x88, 0xe2, 0xca, 0xdb, 0x14, 0x12, 0x4f, 0x8f);

DEFINE_GUID(IID_ITfComposition, 0x20168d64, 0x5a8f, 0x4a5a, 0xb7, 0xbd, 0xcf, 0xa2, 0x9f, 0x4d, 0x0f, 0xd9);

DEFINE_GUID(IID_ITfCompositionSink, 0xa781718c, 0x579a, 0x4b15, 0xa2, 0x80, 0x32, 0xb8, 0x57, 0x7a, 0xcc, 0x5e);

DEFINE_GUID(IID_ITfContextComposition, 0xd40c8aae, 0xac92, 0x4fc7, 0x9a, 0x11, 0x0e, 0xe0, 0xe2, 0x3a, 0xa3, 0x9b);

DEFINE_GUID(IID_ITfContextOwnerCompositionServices, 0x86462810, 0x593b, 0x4916, 0x97, 0x64, 0x19, 0xc0, 0x8e, 0x9c, 0xe1, 0x10);

DEFINE_GUID(IID_ITfContextOwnerCompositionSink, 0x5f20aa40, 0xb57a, 0x4f34, 0x96, 0xab, 0x35, 0x76, 0xf3, 0x77, 0xcc, 0x79);

DEFINE_GUID(IID_ITfContextView, 0x2433bf8e, 0x0f9b, 0x435c, 0xba, 0x2c, 0x18, 0x06, 0x11, 0x97, 0x8c, 0x30);

DEFINE_GUID(IID_IEnumTfContextViews, 0xf0c0f8dd, 0xcf38, 0x44e1, 0xbb, 0x0f, 0x68, 0xcf, 0x0d, 0x55, 0x1c, 0x78);

DEFINE_GUID(IID_ITfContext, 0xaa80e7fd, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfQueryEmbedded, 0x0fab9bdb, 0xd250, 0x4169, 0x84, 0xe5, 0x6b, 0xe1, 0x18, 0xfd, 0xd7, 0xa8);

DEFINE_GUID(IID_ITfInsertAtSelection, 0x55ce16ba, 0x3014, 0x41c1, 0x9c, 0xeb, 0xfa, 0xde, 0x14, 0x46, 0xac, 0x6c);

DEFINE_GUID(IID_ITfCleanupContextSink, 0x01689689, 0x7acb, 0x4e9b, 0xab, 0x7c, 0x7e, 0xa4, 0x6b, 0x12, 0xb5, 0x22);

DEFINE_GUID(IID_ITfCleanupContextDurationSink, 0x45c35144, 0x154e, 0x4797, 0xbe, 0xd8, 0xd3, 0x3a, 0xe7, 0xbf, 0x87, 0x94);

DEFINE_GUID(IID_ITfReadOnlyProperty, 0x17d49a3d, 0xf8b8, 0x4b2f, 0xb2, 0x54, 0x52, 0x31, 0x9d, 0xd6, 0x4c, 0x53);

DEFINE_GUID(IID_IEnumTfPropertyValue, 0x8ed8981b, 0x7c10, 0x4d7d, 0x9f, 0xb3, 0xab, 0x72, 0xe9, 0xc7, 0x5f, 0x72);

DEFINE_GUID(IID_ITfMouseTracker, 0x09d146cd, 0xa544, 0x4132, 0x92, 0x5b, 0x7a, 0xfa, 0x8e, 0xf3, 0x22, 0xd0);

DEFINE_GUID(IID_ITfMouseTrackerACP, 0x3bdd78e2, 0xc16e, 0x47fd, 0xb8, 0x83, 0xce, 0x6f, 0xac, 0xc1, 0xa2, 0x08);

DEFINE_GUID(IID_ITfMouseSink, 0xa1adaaa2, 0x3a24, 0x449d, 0xac, 0x96, 0x51, 0x83, 0xe7, 0xf5, 0xc2, 0x17);

DEFINE_GUID(IID_ITfEditRecord, 0x42d4d099, 0x7c1a, 0x4a89, 0xb8, 0x36, 0x6c, 0x6f, 0x22, 0x16, 0x0d, 0xf0);

DEFINE_GUID(IID_ITfTextEditSink, 0x8127d409, 0xccd3, 0x4683, 0x96, 0x7a, 0xb4, 0x3d, 0x5b, 0x48, 0x2b, 0xf7);

DEFINE_GUID(IID_ITfTextLayoutSink, 0x2af2d06a, 0xdd5b, 0x4927, 0xa0, 0xb4, 0x54, 0xf1, 0x9c, 0x91, 0xfa, 0xde);

DEFINE_GUID(IID_ITfStatusSink, 0x6b7d8d73, 0xb267, 0x4f69, 0xb3, 0x2e, 0x1c, 0xa3, 0x21, 0xce, 0x4f, 0x45);

DEFINE_GUID(IID_ITfEditTransactionSink, 0x708fbf70, 0xb520, 0x416b, 0xb0, 0x6c, 0x2c, 0x41, 0xab, 0x44, 0xf8, 0xba);

DEFINE_GUID(IID_ITfContextOwner, 0xaa80e80c, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfContextOwnerServices, 0xb23eb630, 0x3e1c, 0x11d3, 0xa7, 0x45, 0x00, 0x50, 0x04, 0x0a, 0xb4, 0x07);

DEFINE_GUID(IID_ITfContextKeyEventSink, 0x0552ba5d, 0xc835, 0x4934, 0xbf, 0x50, 0x84, 0x6a, 0xaa, 0x67, 0x43, 0x2f);

DEFINE_GUID(IID_ITfEditSession, 0xaa80e803, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfRange, 0xaa80e7ff, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfRangeACP, 0x057a6296, 0x029b, 0x4154, 0xb7, 0x9a, 0x0d, 0x46, 0x1d, 0x4e, 0xa9, 0x4c);

DEFINE_GUID(IID_ITextStoreACPServices, 0xaa80e901, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfRangeBackup, 0x463a506d, 0x6992, 0x49d2, 0x9b, 0x88, 0x93, 0xd5, 0x5e, 0x70, 0xbb, 0x16);

DEFINE_GUID(IID_ITfPropertyStore, 0x6834b120, 0x88cb, 0x11d2, 0xbf, 0x45, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(IID_IEnumTfRanges, 0xf99d3f40, 0x8e32, 0x11d2, 0xbf, 0x46, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(IID_ITfCreatePropertyStore, 0x2463fbf0, 0xb0af, 0x11d2, 0xaf, 0xc5, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(IID_ITfPersistentPropertyLoaderACP, 0x4ef89150, 0x0807, 0x11d3, 0x8d, 0xf0, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(IID_ITfProperty, 0xe2449660, 0x9542, 0x11d2, 0xbf, 0x46, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(IID_IEnumTfProperties, 0x19188cb0, 0xaca9, 0x11d2, 0xaf, 0xc5, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(IID_ITfCompartment, 0xbb08f7a9, 0x607a, 0x4384, 0x86, 0x23, 0x05, 0x68, 0x92, 0xb6, 0x43, 0x71);

DEFINE_GUID(IID_ITfCompartmentEventSink, 0x743abd5f, 0xf26d, 0x48df, 0x8c, 0xc5, 0x23, 0x84, 0x92, 0x41, 0x9b, 0x64);

DEFINE_GUID(IID_ITfCompartmentMgr, 0x7dcf57ac, 0x18ad, 0x438b, 0x82, 0x4d, 0x97, 0x9b, 0xff, 0xb7, 0x4b, 0x7c);

DEFINE_GUID(IID_ITfFunction, 0xdb593490, 0x098f, 0x11d3, 0x8d, 0xf0, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(IID_ITfFunctionProvider, 0x101d6610, 0x0990, 0x11d3, 0x8d, 0xf0, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(IID_IEnumTfFunctionProviders, 0xe4b24db0, 0x0990, 0x11d3, 0x8d, 0xf0, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5);

DEFINE_GUID(IID_ITfInputProcessorProfiles, 0x1f02b6c5, 0x7842, 0x4ee6, 0x8a, 0x0b, 0x9a, 0x24, 0x18, 0x3a, 0x95, 0xca);

DEFINE_GUID(IID_ITfInputProcessorProfilesEx, 0x892f230f, 0xfe00, 0x4a41, 0xa9, 0x8e, 0xfc, 0xd6, 0xde, 0x0d, 0x35, 0xef);

DEFINE_GUID(IID_ITfInputProcessorProfileSubstituteLayout, 0x4fd67194, 0x1002, 0x4513, 0xbf, 0xf2, 0xc0, 0xdd, 0xf6, 0x25, 0x85, 0x52);

DEFINE_GUID(IID_ITfActiveLanguageProfileNotifySink, 0xb246cb75, 0xa93e, 0x4652, 0xbf, 0x8c, 0xb3, 0xfe, 0x0c, 0xfd, 0x7e, 0x57);

DEFINE_GUID(IID_IEnumTfLanguageProfiles, 0x3d61bf11, 0xac5f, 0x42c8, 0xa4, 0xcb, 0x93, 0x1b, 0xcc, 0x28, 0xc7, 0x44);

DEFINE_GUID(IID_ITfLanguageProfileNotifySink, 0x43c9fe15, 0xf494, 0x4c17, 0x9d, 0xe2, 0xb8, 0xa4, 0xac, 0x35, 0x0a, 0xa8);

DEFINE_GUID(IID_ITfInputProcessorProfileMgr, 0x71c6e74c, 0x0f28, 0x11d8, 0xa8, 0x2a, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(IID_IEnumTfInputProcessorProfiles, 0x71c6e74d, 0x0f28, 0x11d8, 0xa8, 0x2a, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(IID_ITfInputProcessorProfileActivationSink, 0x71c6e74e, 0x0f28, 0x11d8, 0xa8, 0x2a, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(IID_ITfKeystrokeMgr, 0xaa80e7f0, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfKeyEventSink, 0xaa80e7f5, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfKeyTraceEventSink, 0x1cd4c13b, 0x1c36, 0x4191, 0xa7, 0x0a, 0x7f, 0x3e, 0x61, 0x1f, 0x36, 0x7d);

DEFINE_GUID(IID_ITfPreservedKeyNotifySink, 0x6f77c993, 0xd2b1, 0x446e, 0x85, 0x3e, 0x59, 0x12, 0xef, 0xc8, 0xa2, 0x86);

DEFINE_GUID(IID_ITfMessagePump, 0x8f1b8ad8, 0x0b6b, 0x4874, 0x90, 0xc5, 0xbd, 0x76, 0x01, 0x1e, 0x8f, 0x7c);

DEFINE_GUID(IID_ITfThreadFocusSink, 0xc0f1db0c, 0x3a20, 0x405c, 0xa3, 0x03, 0x96, 0xb6, 0x01, 0x0a, 0x88, 0x5f);

DEFINE_GUID(IID_ITfTextInputProcessor, 0xaa80e7f7, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

DEFINE_GUID(IID_ITfTextInputProcessorEx, 0x6e4e2102, 0xf9cd, 0x433d, 0xb4, 0x96, 0x30, 0x3c, 0xe0, 0x3a, 0x65, 0x07);

DEFINE_GUID(IID_ITfClientId, 0xd60a7b49, 0x1b9f, 0x4be2, 0xb7, 0x02, 0x47, 0xe9, 0xdc, 0x05, 0xde, 0xc3);

DEFINE_GUID(IID_ITfDisplayAttributeInfo, 0x70528852, 0x2f26, 0x4aea, 0x8c, 0x96, 0x21, 0x51, 0x50, 0x57, 0x89, 0x32);

DEFINE_GUID(IID_IEnumTfDisplayAttributeInfo, 0x7cef04d7, 0xcb75, 0x4e80, 0xa7, 0xab, 0x5f, 0x5b, 0xc7, 0xd3, 0x32, 0xde);

DEFINE_GUID(IID_ITfDisplayAttributeProvider, 0xfee47777, 0x163c, 0x4769, 0x99, 0x6a, 0x6e, 0x9c, 0x50, 0xad, 0x8f, 0x54);

DEFINE_GUID(IID_ITfDisplayAttributeMgr, 0x8ded7393, 0x5db1, 0x475c, 0x9e, 0x71, 0xa3, 0x91, 0x11, 0xb0, 0xff, 0x67);

DEFINE_GUID(IID_ITfDisplayAttributeNotifySink, 0xad56f402, 0xe162, 0x4f25, 0x90, 0x8f, 0x7d, 0x57, 0x7c, 0xf9, 0xbd, 0xa9);

DEFINE_GUID(IID_ITfCategoryMgr, 0xc3acefb5, 0xf69d, 0x4905, 0x93, 0x8f, 0xfc, 0xad, 0xcf, 0x4b, 0xe8, 0x30);

DEFINE_GUID(IID_ITfSource, 0x4ea48a35, 0x60ae, 0x446f, 0x8f, 0xd6, 0xe6, 0xa8, 0xd8, 0x24, 0x59, 0xf7);

DEFINE_GUID(IID_ITfSourceSingle, 0x73131f9c, 0x56a9, 0x49dd, 0xb0, 0xee, 0xd0, 0x46, 0x63, 0x3f, 0x75, 0x28);

DEFINE_GUID(IID_ITfUIElementMgr, 0xea1ea135, 0x19df, 0x11d7, 0xa6, 0xd2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(IID_IEnumTfUIElements, 0x887aa91e, 0xacba, 0x4931, 0x84, 0xda, 0x3c, 0x52, 0x08, 0xcf, 0x54, 0x3f);

DEFINE_GUID(IID_ITfUIElementSink, 0xea1ea136, 0x19df, 0x11d7, 0xa6, 0xd2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(IID_ITfUIElement, 0xea1ea137, 0x19df, 0x11d7, 0xa6, 0xd2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(IID_ITfCandidateListUIElement, 0xea1ea138, 0x19df, 0x11d7, 0xa6, 0xd2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(IID_ITfCandidateListUIElementBehavior, 0x85fad185, 0x58ce, 0x497a, 0x94, 0x60, 0x35, 0x53, 0x66, 0xb6, 0x4b, 0x9a);

DEFINE_GUID(IID_ITfReadingInformationUIElement, 0xea1ea139, 0x19df, 0x11d7, 0xa6, 0xd2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c);

DEFINE_GUID(IID_ITfTransitoryExtensionUIElement, 0x858f956a, 0x972f, 0x42a2, 0xa2, 0xf2, 0x03, 0x21, 0xe1, 0xab, 0xe2, 0x09);

DEFINE_GUID(IID_ITfTransitoryExtensionSink, 0xa615096f, 0x1c57, 0x4813, 0x8a, 0x15, 0x55, 0xee, 0x6e, 0x5a, 0x83, 0x9c);

DEFINE_GUID(IID_ITfToolTipUIElement, 0x52b18b5c, 0x555d, 0x46b2, 0xb0, 0x0a, 0xfa, 0x68, 0x01, 0x44, 0xfb, 0xdb);

DEFINE_GUID(IID_ITfReverseConversionList, 0x151d69f0, 0x86f4, 0x4674, 0xb7, 0x21, 0x56, 0x91, 0x1e, 0x79, 0x7f, 0x47);

DEFINE_GUID(IID_ITfReverseConversion, 0xa415e162, 0x157d, 0x417d, 0x8a, 0x8c, 0x0a, 0xb2, 0x6c, 0x7d, 0x27, 0x81);

DEFINE_GUID(IID_ITfReverseConversionMgr, 0xb643c236, 0xc493, 0x41b6, 0xab, 0xb3, 0x69, 0x24, 0x12, 0x77, 0x5c, 0xc4);

