// Created file "Lib\src\WbemUuid\X64\wbemdisp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_WbemScripting, 0x565783c6, 0xcb41, 0x11d1, 0x8b, 0x02, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemServices, 0x76a6415c, 0xcb41, 0x11d1, 0x8b, 0x02, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemLocator, 0x76a6415b, 0xcb41, 0x11d1, 0x8b, 0x02, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemObject, 0x76a6415a, 0xcb41, 0x11d1, 0x8b, 0x02, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemObjectSet, 0x76a6415f, 0xcb41, 0x11d1, 0x8b, 0x02, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemNamedValue, 0x76a64164, 0xcb41, 0x11d1, 0x8b, 0x02, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemNamedValueSet, 0xcf2376ea, 0xce8c, 0x11d1, 0x8b, 0x05, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemQualifier, 0x79b05932, 0xd3b7, 0x11d1, 0x8b, 0x06, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemQualifierSet, 0x9b16ed16, 0xd3df, 0x11d1, 0x8b, 0x08, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemProperty, 0x1a388f98, 0xd4ba, 0x11d1, 0x8b, 0x09, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemPropertySet, 0xdea0a7b2, 0xd4ba, 0x11d1, 0x8b, 0x09, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemMethod, 0x422e8e90, 0xd955, 0x11d1, 0x8b, 0x09, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemMethodSet, 0xc93ba292, 0xd955, 0x11d1, 0x8b, 0x09, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemEventSource, 0x27d54d92, 0x0ebe, 0x11d2, 0x8b, 0x22, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemObjectPath, 0x5791bc27, 0xce9c, 0x11d1, 0x97, 0xbf, 0x00, 0x00, 0xf8, 0x1e, 0x84, 0x9c);

DEFINE_GUID(IID_ISWbemLastError, 0xd962db84, 0xd4bb, 0x11d1, 0x8b, 0x09, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(DIID_ISWbemSinkEvents, 0x75718ca0, 0xf029, 0x11d1, 0xa1, 0xac, 0x00, 0xc0, 0x4f, 0xb6, 0xc2, 0x23);

DEFINE_GUID(IID_ISWbemSink, 0x75718c9f, 0xf029, 0x11d1, 0xa1, 0xac, 0x00, 0xc0, 0x4f, 0xb6, 0xc2, 0x23);

DEFINE_GUID(IID_ISWbemSecurity, 0xb54d66e6, 0x2287, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemPrivilege, 0x26ee67bd, 0x5804, 0x11d2, 0x8b, 0x4a, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemPrivilegeSet, 0x26ee67bf, 0x5804, 0x11d2, 0x8b, 0x4a, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(IID_ISWbemServicesEx, 0xd2f68443, 0x85dc, 0x427e, 0x91, 0xd8, 0x36, 0x65, 0x54, 0xcc, 0x75, 0x4c);

DEFINE_GUID(IID_ISWbemObjectEx, 0x269ad56a, 0x8a67, 0x4129, 0xbc, 0x8c, 0x05, 0x06, 0xdc, 0xfe, 0x98, 0x80);

DEFINE_GUID(IID_ISWbemDateTime, 0x5e97458a, 0xcf77, 0x11d3, 0xb3, 0x8f, 0x00, 0x10, 0x5a, 0x1f, 0x47, 0x3a);

DEFINE_GUID(IID_ISWbemRefresher, 0x14d8250e, 0xd9c2, 0x11d3, 0xb3, 0x8f, 0x00, 0x10, 0x5a, 0x1f, 0x47, 0x3a);

DEFINE_GUID(IID_ISWbemRefreshableItem, 0x5ad4bf92, 0xdaab, 0x11d3, 0xb3, 0x8f, 0x00, 0x10, 0x5a, 0x1f, 0x47, 0x3a);

DEFINE_GUID(CLSID_SWbemLocator, 0x76a64158, 0xcb41, 0x11d1, 0x8b, 0x02, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemNamedValueSet, 0x9aed384e, 0xce8b, 0x11d1, 0x8b, 0x05, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemObjectPath, 0x5791bc26, 0xce9c, 0x11d1, 0x97, 0xbf, 0x00, 0x00, 0xf8, 0x1e, 0x84, 0x9c);

DEFINE_GUID(CLSID_SWbemLastError, 0xc2feeeac, 0xcfcd, 0x11d1, 0x8b, 0x05, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemSink, 0x75718c9a, 0xf029, 0x11d1, 0xa1, 0xac, 0x00, 0xc0, 0x4f, 0xb6, 0xc2, 0x23);

DEFINE_GUID(CLSID_SWbemDateTime, 0x47dfbe54, 0xcf76, 0x11d3, 0xb3, 0x8f, 0x00, 0x10, 0x5a, 0x1f, 0x47, 0x3a);

DEFINE_GUID(CLSID_SWbemRefresher, 0xd269bf5c, 0xd9c1, 0x11d3, 0xb3, 0x8f, 0x00, 0x10, 0x5a, 0x1f, 0x47, 0x3a);

DEFINE_GUID(CLSID_SWbemServices, 0x04b83d63, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemServicesEx, 0x62e522dc, 0x8cf3, 0x40a8, 0x8b, 0x2e, 0x37, 0xd5, 0x95, 0x65, 0x1e, 0x40);

DEFINE_GUID(CLSID_SWbemObject, 0x04b83d62, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemObjectEx, 0xd6bdafb2, 0x9435, 0x491f, 0xbb, 0x87, 0x6a, 0xa0, 0xf0, 0xbc, 0x31, 0xa2);

DEFINE_GUID(CLSID_SWbemObjectSet, 0x04b83d61, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemNamedValue, 0x04b83d60, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemQualifier, 0x04b83d5f, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemQualifierSet, 0x04b83d5e, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemProperty, 0x04b83d5d, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemPropertySet, 0x04b83d5c, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemMethod, 0x04b83d5b, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemMethodSet, 0x04b83d5a, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemEventSource, 0x04b83d58, 0x21ae, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemSecurity, 0xb54d66e9, 0x2287, 0x11d2, 0x8b, 0x33, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemPrivilege, 0x26ee67bc, 0x5804, 0x11d2, 0x8b, 0x4a, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemPrivilegeSet, 0x26ee67be, 0x5804, 0x11d2, 0x8b, 0x4a, 0x00, 0x60, 0x08, 0x06, 0xd9, 0xb6);

DEFINE_GUID(CLSID_SWbemRefreshableItem, 0x8c6854bc, 0xde4b, 0x11d3, 0xb3, 0x90, 0x00, 0x10, 0x5a, 0x1f, 0x47, 0x3a);

