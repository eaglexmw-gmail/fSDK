// Created file "Lib\src\CertIdl\X64\certdb_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumCERTDBCOLUMN, 0x90a27030, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(IID_ICertDBComputedColumn, 0x5ed15981, 0x4055, 0x43a5, 0xb8, 0x53, 0x58, 0xc2, 0xcd, 0x3e, 0xc1, 0x01);

DEFINE_GUID(IID_IEnumCERTDBRESULTROW, 0x915feb70, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(IID_IEnumCERTDBNAME, 0x91dbb1a0, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(IID_ICertDBRow, 0x924b3e50, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(IID_ICertDBBackup, 0x92a56660, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(IID_ICertDBRestore, 0x93042400, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(IID_ICertDB, 0x93582f50, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(LIBID_CERTDBLib, 0x93adc1d0, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(CLSID_CCertDBRestore, 0x94142360, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(CLSID_CCertDBJet, 0x946e4b70, 0x8bd5, 0x11d3, 0xb3, 0x2e, 0x00, 0xc0, 0x4f, 0x79, 0xdc, 0x72);

DEFINE_GUID(CLSID_CCertDBMem, 0x3549ffa2, 0x37c6, 0x4b6a, 0x9d, 0x67, 0x6b, 0xbb, 0x88, 0x10, 0x3c, 0x08);

