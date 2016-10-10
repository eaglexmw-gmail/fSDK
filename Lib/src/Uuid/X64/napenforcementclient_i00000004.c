// Created file "Lib\src\Uuid\X64\napenforcementclient_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapEnforcementClientCallback, 0xf5a0b90a, 0x83a1, 0x4f76, 0xba, 0x3f, 0x02, 0x54, 0x18, 0x68, 0x28, 0x14);

