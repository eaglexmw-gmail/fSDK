// Created file "Lib\src\Uuid\napenforcementclient_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapEnforcementClientConnection, 0xfb3a3505, 0xddb1, 0x468a, 0xb3, 0x07, 0xf3, 0x28, 0xa5, 0x74, 0x19, 0xd8);

