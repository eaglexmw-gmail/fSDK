// Created file "Lib\src\vss_uuid\vsprov_iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVssSoftwareSnapshotProvider, 0x609e123e, 0x2c5a, 0x44d3, 0x8f, 0x01, 0x0b, 0x1d, 0x9a, 0x47, 0xd1, 0xff);

DEFINE_GUID(IID_IVssProviderCreateSnapshotSet, 0x5f894e5b, 0x1e39, 0x4778, 0x8e, 0x23, 0x9a, 0xba, 0xd9, 0xf0, 0xe0, 0x8c);

DEFINE_GUID(IID_IVssProviderNotifications, 0xe561901f, 0x03a5, 0x4afe, 0x86, 0xd0, 0x72, 0xba, 0xee, 0xce, 0x70, 0x04);

DEFINE_GUID(IID_IVssHardwareSnapshotProvider, 0x9593a157, 0x44e9, 0x4344, 0xbb, 0xeb, 0x44, 0xfb, 0xf9, 0xb0, 0x6b, 0x10);

DEFINE_GUID(IID_IVssHardwareSnapshotProviderEx, 0x7f5ba925, 0xcdb1, 0x4d11, 0xa7, 0x1f, 0x33, 0x9e, 0xb7, 0xe7, 0x09, 0xfd);

DEFINE_GUID(LIBID_VSSProvider, 0x73c8b4c1, 0x6e9d, 0x4fc2, 0xb3, 0x04, 0x03, 0x0e, 0xc7, 0x63, 0xfe, 0x81);

