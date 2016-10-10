/*+@@file@@----------------------------------------------------------------*//*!
 \file		cryptxml.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 15:58:12 2016
 \date		Modified on Mon Jul  4 15:58:12 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _cryptxml_h
#define _cryptxml_h
#if __POCC__ >= 500
#pragma once
#endif
#include <wincrypt.h>
#include <bcrypt.h>
#include <ncrypt.h>
#ifndef WINAPI
#define WINAPI __stdcall
#endif
typedef struct _CRYPT_XML_BLOB CRYPT_XML_BLOB, *PCRYPT_XML_BLOB;
typedef struct _CRYPT_XML_DATA_BLOB CRYPT_XML_DATA_BLOB, *PCRYPT_XML_DATA_BLOB;
typedef struct _CRYPT_XML_STATUS CRYPT_XML_STATUS, *PCRYPT_XML_STATUS;
typedef struct _CRYPT_XML_TRANSFORM_INFO CRYPT_XML_TRANSFORM_INFO, *PCRYPT_XML_TRANSFORM_INFO;
typedef struct _CRYPT_XML_TRANSFORM_CHAIN_CONFIG CRYPT_XML_TRANSFORM_CHAIN_CONFIG, *PCRYPT_XML_TRANSFORM_CHAIN_CONFIG;
typedef struct _CRYPT_XML_KEY_INFO CRYPT_XML_KEY_INFO, *PCRYPT_XML_KEY_INFO;
typedef struct _CRYPT_XML_ALGORITHM CRYPT_XML_ALGORITHM, *PCRYPT_XML_ALGORITHM;
typedef struct _CRYPT_XML_REFERENCE CRYPT_XML_REFERENCE, *PCRYPT_XML_REFERENCE;
typedef struct _CRYPT_XML_REFERENCES CRYPT_XML_REFERENCES, *PCRYPT_XML_REFERENCES;
typedef struct _CRYPT_XML_SIGNED_INFO CRYPT_XML_SIGNED_INFO, *PCRYPT_XML_SIGNED_INFO;
typedef struct _CRYPT_XML_OBJECT CRYPT_XML_OBJECT, *PCRYPT_XML_OBJECT;
typedef struct _CRYPT_XML_SIGNATURE CRYPT_XML_SIGNATURE, *PCRYPT_XML_SIGNATURE;
typedef struct _CRYPT_XML_ALGORITHM_INFO CRYPT_XML_ALGORITHM_INFO, *PCRYPT_XML_ALGORITHM_INFO;
typedef struct _CRYPT_XML_CRYPTOGRAPHIC_INTERFACE CRYPT_XML_CRYPTOGRAPHIC_INTERFACE, *PCRYPT_XML_CRYPTO_PROVIDER;
typedef void *HCRYPTXML;
#define wszXMLNS_DIGSIG                          L"http://www.w3.org/2000/09/xmldsig#"
#define wszXMLNS_DIGSIG_SignatureProperties      L"http://www.w3.org/2000/09/xmldsig#SignatureProperties"
#define wszXMLNS_DIGSIG_Id                       L"Id"
#define wszURI_XMLNS_DIGSIG_BASE64               L"http://www.w3.org/2000/09/xmldsig#base64"
#define wszURI_XMLNS_DIGSIG_SHA1                 L"http://www.w3.org/2000/09/xmldsig#sha1"
#define wszURI_XMLNS_DIGSIG_SHA256               L"http://www.w3.org/2001/04/xmlenc#sha256"
#define wszURI_XMLNS_DIGSIG_SHA384               L"http://www.w3.org/2001/04/xmldsig-more#sha384"
#define wszURI_XMLNS_DIGSIG_SHA512               L"http://www.w3.org/2001/04/xmlenc#sha512"
#define wszURI_XMLNS_DIGSIG_RSA_SHA1             L"http://www.w3.org/2000/09/xmldsig#rsa-sha1"
#define wszURI_XMLNS_DIGSIG_DSA_SHA1             L"http://www.w3.org/2000/09/xmldsig#dsa-sha1"
#define wszURI_XMLNS_DIGSIG_RSA_SHA256           L"http://www.w3.org/2001/04/xmldsig-more#rsa-sha256"
#define wszURI_XMLNS_DIGSIG_RSA_SHA384           L"http://www.w3.org/2001/04/xmldsig-more#rsa-sha384"
#define wszURI_XMLNS_DIGSIG_RSA_SHA512           L"http://www.w3.org/2001/04/xmldsig-more#rsa-sha512"
#define wszURI_XMLNS_DIGSIG_ECDSA_SHA1           L"http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha1"
#define wszURI_XMLNS_DIGSIG_ECDSA_SHA256         L"http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha256"
#define wszURI_XMLNS_DIGSIG_ECDSA_SHA384         L"http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha384"
#define wszURI_XMLNS_DIGSIG_ECDSA_SHA512         L"http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha512"
#define wszURI_XMLNS_DIGSIG_HMAC_SHA1            L"http://www.w3.org/2000/09/xmldsig#hmac-sha1"
#define wszURI_XMLNS_DIGSIG_HMAC_SHA256          L"http://www.w3.org/2001/04/xmldsig-more#hmac-sha256"
#define wszURI_XMLNS_DIGSIG_HMAC_SHA384          L"http://www.w3.org/2001/04/xmldsig-more#hmac-sha384"
#define wszURI_XMLNS_DIGSIG_HMAC_SHA512          L"http://www.w3.org/2001/04/xmldsig-more#hmac-sha512"
#define wszURI_CANONICALIZATION_C14N             L"http://www.w3.org/TR/2001/REC-xml-c14n-20010315"
#define wszURI_CANONICALIZATION_C14NC            L"http://www.w3.org/TR/2001/REC-xml-c14n-20010315#WithComments"
#define wszURI_CANONICALIZATION_EXSLUSIVE_C14N   L"http://www.w3.org/2001/10/xml-exc-c14n#"
#define wszURI_CANONICALIZATION_EXSLUSIVE_C14NC  L"http://www.w3.org/2001/10/xml-exc-c14n#WithComments"
#define wszURI_TRANSFORM_XPATH                   L"http://www.w3.org/TR/1999/REC-xpath-19991116"
#define wszURI_XMLNS_TRANSFORM_BASE64            L"http://www.w3.org/2000/09/xmldsig#base64"
#define wszURI_XMLNS_TRANSFORM_ENVELOPED         L"http://www.w3.org/2000/09/xmldsig#enveloped-signature"
#define CRYPT_XML_BLOB_MAX              0x7FFFFFF8
#define CRYPT_XML_ID_MAX                256
#define CRYPT_XML_URI_MAX               8*1024
#define CRYPT_XML_SIGNATURES_MAX        16
#define CRYPT_XML_TRANSFORM_MAX         16
#define CRYPT_XML_SIGNATURE_VALUE_MAX   2048
#define CRYPT_XML_DIGEST_VALUE_MAX      128
#define CRYPT_XML_OBJECTS_MAX           256
#define CRYPT_XML_REFERENCES_MAX        0x7FF8
#define CRYPT_XML_E_BASE                _HRESULT_TYPEDEF_(0x80092100L)
#define CRYPT_XML_E_LARGE               _HRESULT_TYPEDEF_(0x80092101L)
#define CRYPT_XML_E_TOO_MANY_TRANSFORMS _HRESULT_TYPEDEF_(0x80092102L)
#define CRYPT_XML_E_ENCODING            _HRESULT_TYPEDEF_(0x80092103L)
#define CRYPT_XML_E_ALGORITHM           _HRESULT_TYPEDEF_(0x80092104L)
#define CRYPT_XML_E_TRANSFORM           _HRESULT_TYPEDEF_(0x80092105L)
#define CRYPT_XML_E_HANDLE              _HRESULT_TYPEDEF_(0x80092106L)
#define CRYPT_XML_E_OPERATION           _HRESULT_TYPEDEF_(0x80092107L)
#define CRYPT_XML_E_UNRESOLVED_REFERENCE _HRESULT_TYPEDEF_(0x80092108L)
#define CRYPT_XML_E_INVALID_DIGEST      _HRESULT_TYPEDEF_(0x80092109L)
#define CRYPT_XML_E_INVALID_SIGNATURE   _HRESULT_TYPEDEF_(0x8009210AL)
#define CRYPT_XML_E_HASH_FAILED         _HRESULT_TYPEDEF_(0x8009210BL)
#define CRYPT_XML_E_SIGN_FAILED         _HRESULT_TYPEDEF_(0x8009210CL)
#define CRYPT_XML_E_VERIFY_FAILED       _HRESULT_TYPEDEF_(0x8009210DL)
#define CRYPT_XML_E_TOO_MANY_SIGNATURES _HRESULT_TYPEDEF_(0x8009210EL)
#define CRYPT_XML_E_INVALID_KEYVALUE    _HRESULT_TYPEDEF_(0x8009210FL)
#define CRYPT_XML_E_UNEXPECTED_XML      _HRESULT_TYPEDEF_(0x80092110L)
#define CRYPT_XML_E_SIGNER              _HRESULT_TYPEDEF_(0x80092111L)
#define CRYPT_XML_E_NON_UNIQUE_ID       _HRESULT_TYPEDEF_(0x80092112L)
#define CRYPT_XML_E_LAST                _HRESULT_TYPEDEF_(0x80092112L)
#define CRYPT_XML_FLAG_NO_SERIALIZE                     0x80000000
#define CRYPT_XML_FLAG_ALWAYS_RETURN_ENCODED_OBJECT     0x40000000
#define CRYPT_XML_FLAG_ENFORCE_ID_NCNAME_FORMAT         0x20000000
#define CRYPT_XML_FLAG_DISABLE_EXTENSIONS               0x10000000
#define CRYPT_XML_FLAG_ENFORCE_ID_NAME_FORMAT           0x08000000
typedef enum
{
	CRYPT_XML_CHARSET_AUTO = 0,
	CRYPT_XML_CHARSET_UTF8 = 1,
	CRYPT_XML_CHARSET_UTF16LE = 2,
	CRYPT_XML_CHARSET_UTF16BE = 3,
} CRYPT_XML_CHARSET;
typedef struct _CRYPT_XML_BLOB
{
	CRYPT_XML_CHARSET dwCharset;
	ULONG cbData;
	BYTE *pbData;
} CRYPT_XML_BLOB, *PCRYPT_XML_BLOB;
typedef struct _CRYPT_XML_DATA_BLOB
{
	ULONG cbData;
	BYTE *pbData;
} CRYPT_XML_DATA_BLOB, *PCRYPT_XML_DATA_BLOB;
typedef enum {
	CRYPT_XML_PROPERTY_MAX_HEAP_SIZE = 1,
	CRYPT_XML_PROPERTY_SIGNATURE_LOCATION = 2,
	CRYPT_XML_PROPERTY_MAX_SIGNATURES = 3,
	CRYPT_XML_PROPERTY_DOC_DECLARATION = 4,
	CRYPT_XML_PROPERTY_XML_OUTPUT_CHARSET = 5,
} CRYPT_XML_PROPERTY_ID;
typedef struct _CRYPT_XML_PROPERTY
{
	CRYPT_XML_PROPERTY_ID dwPropId;
	const void *pvValue;
	ULONG cbValue;
} CRYPT_XML_PROPERTY, *PCRYPT_XML_PROPERTY;
typedef HRESULT(CALLBACK *PFN_CRYPT_XML_WRITE_CALLBACK) (void *pvCallbackState, const BYTE *pbData, ULONG cbData);
typedef HRESULT(CALLBACK *PFN_CRYPT_XML_DATA_PROVIDER_READ) (void *pvCallbackState, BYTE *pbData, ULONG cbData, ULONG *pcbRead);
typedef HRESULT(CALLBACK *PFN_CRYPT_XML_DATA_PROVIDER_CLOSE) (void *pvCallbackState);
typedef struct _CRYPT_XML_DATA_PROVIDER
{
	void *pvCallbackState;
	ULONG cbBufferSize;
	PFN_CRYPT_XML_DATA_PROVIDER_READ pfnRead;
	PFN_CRYPT_XML_DATA_PROVIDER_CLOSE pfnClose;
} CRYPT_XML_DATA_PROVIDER, *PCRYPT_XML_DATA_PROVIDER;
typedef HRESULT(CALLBACK *PFN_CRYPT_XML_CREATE_TRANSFORM) (const CRYPT_XML_ALGORITHM *pTransform, CRYPT_XML_DATA_PROVIDER *pProviderIn, CRYPT_XML_DATA_PROVIDER *pProviderOut);
typedef struct _CRYPT_XML_STATUS
{
	ULONG cbSize;
	DWORD dwErrorStatus;
	DWORD dwInfoStatus;
} CRYPT_XML_STATUS, *PCRYPT_XML_STATUS;
#define CRYPT_XML_STATUS_NO_ERROR                           0x00000000
#define CRYPT_XML_STATUS_ERROR_NOT_RESOLVED                     0x00000001
#define CRYPT_XML_STATUS_ERROR_DIGEST_INVALID                   0x00000002
#define CRYPT_XML_STATUS_ERROR_NOT_SUPPORTED_ALGORITHM          0x00000004
#define CRYPT_XML_STATUS_ERROR_NOT_SUPPORTED_TRANSFORM          0x00000008
#define CRYPT_XML_STATUS_ERROR_SIGNATURE_INVALID                0x00010000
#define CRYPT_XML_STATUS_ERROR_KEYINFO_NOT_PARSED               0x00020000
#define CRYPT_XML_STATUS_INTERNAL_REFERENCE                     0x00000001
#define CRYPT_XML_STATUS_KEY_AVAILABLE                          0x00000002
#define CRYPT_XML_STATUS_DIGESTING                              0x00000004
#define CRYPT_XML_STATUS_DIGEST_VALID                           0x00000008
#define CRYPT_XML_STATUS_SIGNATURE_VALID                        0x00010000
#define CRYPT_XML_STATUS_OPENED_TO_ENCODE                       0x80000000
typedef struct _CRYPT_XML_ALGORITHM
{
	ULONG cbSize;
	LPCWSTR wszAlgorithm;
	CRYPT_XML_BLOB Encoded;
} CRYPT_XML_ALGORITHM, *PCRYPT_XML_ALGORITHM;
typedef struct _CRYPT_XML_TRANSFORM_INFO
{
	ULONG cbSize;
	LPCWSTR wszAlgorithm;
	ULONG cbBufferSize;
	DWORD dwFlags;
	PFN_CRYPT_XML_CREATE_TRANSFORM pfnCreateTransform;
} CRYPT_XML_TRANSFORM_INFO, *PCRYPT_XML_TRANSFORM_INFO;
#define CRYPT_XML_TRANSFORM_ON_STREAM           0x00000001
#define CRYPT_XML_TRANSFORM_ON_NODESET          0x00000002
#define CRYPT_XML_TRANSFORM_URI_QUERY_STRING    0x00000004
typedef struct _CRYPT_XML_TRANSFORM_CHAIN_CONFIG
{
	ULONG cbSize;
	ULONG cTransformInfo;
	PCRYPT_XML_TRANSFORM_INFO *rgpTransformInfo;
} CRYPT_XML_TRANSFORM_CHAIN_CONFIG, *PCRYPT_XML_TRANSFORM_CHAIN_CONFIG;
typedef struct _CRYPT_XML_KEY_DSA_KEY_VALUE
{
	CRYPT_XML_DATA_BLOB P;
	CRYPT_XML_DATA_BLOB Q;
	CRYPT_XML_DATA_BLOB G;
	CRYPT_XML_DATA_BLOB Y;
	CRYPT_XML_DATA_BLOB J;
	CRYPT_XML_DATA_BLOB Seed;
	CRYPT_XML_DATA_BLOB Counter;
} CRYPT_XML_KEY_DSA_KEY_VALUE;
typedef struct _CRYPT_XML_KEY_ECDSA_KEY_VALUE
{
	LPCWSTR wszNamedCurve;
	CRYPT_XML_DATA_BLOB X;
	CRYPT_XML_DATA_BLOB Y;
	CRYPT_XML_BLOB ExplicitPara;
} CRYPT_XML_KEY_ECDSA_KEY_VALUE;
typedef struct _CRYPT_XML_KEY_RSA_KEY_VALUE
{
	CRYPT_XML_DATA_BLOB Modulus;
	CRYPT_XML_DATA_BLOB Exponent;
} CRYPT_XML_KEY_RSA_KEY_VALUE;
typedef struct _CRYPT_XML_KEY_VALUE
{
	DWORD dwType;
	union
	{
		CRYPT_XML_KEY_DSA_KEY_VALUE DSAKeyValue;
		CRYPT_XML_KEY_RSA_KEY_VALUE RSAKeyValue;
		CRYPT_XML_KEY_ECDSA_KEY_VALUE ECDSAKeyValue;
		CRYPT_XML_BLOB Custom;
	};
} CRYPT_XML_KEY_VALUE;
#define CRYPT_XML_KEY_VALUE_TYPE_DSA    0x00000001
#define CRYPT_XML_KEY_VALUE_TYPE_RSA    0x00000002
#define CRYPT_XML_KEY_VALUE_TYPE_ECDSA  0x00000003
#define CRYPT_XML_KEY_VALUE_TYPE_CUSTOM 0x00000004
typedef struct _CRYPT_XML_ISSUER_SERIAL
{
	LPCWSTR wszIssuer;
	LPCWSTR wszSerial;
} CRYPT_XML_ISSUER_SERIAL;
typedef struct _CRYPT_XML_X509DATA_ITEM
{
	DWORD dwType;
	union {
		CRYPT_XML_ISSUER_SERIAL IssuerSerial;
		CRYPT_XML_DATA_BLOB SKI;
		LPCWSTR wszSubjectName;
		CRYPT_XML_DATA_BLOB Certificate;
		CRYPT_XML_DATA_BLOB CRL;
		CRYPT_XML_BLOB Custom;
	};
} CRYPT_XML_X509DATA_ITEM;
#define CRYPT_XML_X509DATA_TYPE_ISSUER_SERIAL   0x00000001
#define CRYPT_XML_X509DATA_TYPE_SKI             0x00000002
#define CRYPT_XML_X509DATA_TYPE_SUBJECT_NAME    0x00000003
#define CRYPT_XML_X509DATA_TYPE_CERTIFICATE     0x00000004
#define CRYPT_XML_X509DATA_TYPE_CRL             0x00000005
#define CRYPT_XML_X509DATA_TYPE_CUSTOM          0x00000006
typedef struct _CRYPT_XML_X509DATA
{
	UINT cX509Data;
	CRYPT_XML_X509DATA_ITEM *rgX509Data;
} CRYPT_XML_X509DATA;
typedef struct _CRYPT_XML_KEY_INFO_ITEM
{
	DWORD dwType;
	union {
		LPCWSTR wszKeyName;
		CRYPT_XML_KEY_VALUE KeyValue;
		CRYPT_XML_BLOB RetrievalMethod;
		CRYPT_XML_X509DATA X509Data;
		CRYPT_XML_BLOB Custom;
	};
} CRYPT_XML_KEY_INFO_ITEM;
#define CRYPT_XML_KEYINFO_TYPE_KEYNAME      0x00000001
#define CRYPT_XML_KEYINFO_TYPE_KEYVALUE     0x00000002
#define CRYPT_XML_KEYINFO_TYPE_RETRIEVAL    0x00000003
#define CRYPT_XML_KEYINFO_TYPE_X509DATA     0x00000004
#define CRYPT_XML_KEYINFO_TYPE_CUSTOM       0x00000005
typedef struct _CRYPT_XML_KEY_INFO
{
	ULONG cbSize;
	LPCWSTR wszId;
	UINT cKeyInfo;
	CRYPT_XML_KEY_INFO_ITEM *rgKeyInfo;
	BCRYPT_KEY_HANDLE hVerifyKey;
} CRYPT_XML_KEY_INFO, *PCRYPT_XML_KEY_INFO;
typedef struct _CRYPT_XML_REFERENCE
{
	ULONG cbSize;
	HCRYPTXML hReference;
	LPCWSTR wszId;
	LPCWSTR wszUri;
	LPCWSTR wszType;
	CRYPT_XML_ALGORITHM DigestMethod;
	CRYPT_DATA_BLOB DigestValue;
	ULONG cTransform;
	CRYPT_XML_ALGORITHM *rgTransform;
} CRYPT_XML_REFERENCE, *PCRYPT_XML_REFERENCE;
typedef struct _CRYPT_XML_REFERENCES
{
	ULONG cReference;
	PCRYPT_XML_REFERENCE *rgpReference;
} CRYPT_XML_REFERENCES, *PCRYPT_XML_REFERENCES;
typedef struct _CRYPT_XML_SIGNED_INFO
{
	ULONG cbSize;
	LPCWSTR wszId;
	CRYPT_XML_ALGORITHM Canonicalization;
	CRYPT_XML_ALGORITHM SignatureMethod;
	ULONG cReference;
	PCRYPT_XML_REFERENCE *rgpReference;
	CRYPT_XML_BLOB Encoded;
} CRYPT_XML_SIGNED_INFO, *PCRYPT_XML_SIGNED_INFO;
typedef struct _CRYPT_XML_OBJECT
{
	ULONG cbSize;
	HCRYPTXML hObject;
	LPCWSTR wszId;
	LPCWSTR wszMimeType;
	LPCWSTR wszEncoding;
	CRYPT_XML_REFERENCES Manifest;
	CRYPT_XML_BLOB Encoded;
} CRYPT_XML_OBJECT, *PCRYPT_XML_OBJECT;
typedef struct _CRYPT_XML_SIGNATURE
{
	ULONG cbSize;
	HCRYPTXML hSignature;
	LPCWSTR wszId;
	CRYPT_XML_SIGNED_INFO SignedInfo;
	CRYPT_DATA_BLOB SignatureValue;
	CRYPT_XML_KEY_INFO *pKeyInfo;
	ULONG cObject;
	PCRYPT_XML_OBJECT *rgpObject;
} CRYPT_XML_SIGNATURE, *PCRYPT_XML_SIGNATURE;
typedef struct _CRYPT_XML_DOC_CTXT
{
	ULONG cbSize;
	HCRYPTXML hDocCtxt;
	CRYPT_XML_TRANSFORM_CHAIN_CONFIG *pTransformsConfig;
	ULONG cSignature;
	PCRYPT_XML_SIGNATURE *rgpSignature;
} CRYPT_XML_DOC_CTXT, *PCRYPT_XML_DOC_CTXT;
HRESULT WINAPI CryptXmlClose(HCRYPTXML hCryptXml);
HRESULT WINAPI CryptXmlGetTransforms(const CRYPT_XML_TRANSFORM_CHAIN_CONFIG **ppConfig);
HRESULT WINAPI CryptXmlOpenToEncode(const CRYPT_XML_TRANSFORM_CHAIN_CONFIG *pConfig, DWORD dwFlags, LPCWSTR wszId, const CRYPT_XML_PROPERTY *rgProperty, ULONG cProperty, const CRYPT_XML_BLOB *pEncoded, HCRYPTXML *phSignature);
HRESULT WINAPI CryptXmlOpenToDecode(const CRYPT_XML_TRANSFORM_CHAIN_CONFIG *pConfig, DWORD dwFlags, const CRYPT_XML_PROPERTY *rgProperty, ULONG cProperty, const CRYPT_XML_BLOB *pEncoded, HCRYPTXML *phCryptXml);
HRESULT WINAPI CryptXmlAddObject(HCRYPTXML hSignatureOrObject, DWORD dwFlags, const CRYPT_XML_PROPERTY *rgProperty, ULONG cProperty, const CRYPT_XML_BLOB *pEncoded, const CRYPT_XML_OBJECT **ppObject);
#define CRYPT_XML_FLAG_ADD_OBJECT_CREATE_COPY   0x00000001
HRESULT WINAPI CryptXmlCreateReference(HCRYPTXML hCryptXml, DWORD dwFlags, LPCWSTR wszId, LPCWSTR wszURI, LPCWSTR wszType, const CRYPT_XML_ALGORITHM *pDigestMethod, ULONG cTransform, const CRYPT_XML_ALGORITHM *rgTransform, HCRYPTXML *phReference);
#define CRYPT_XML_FLAG_CREATE_REFERENCE_AS_OBJECT      0x00000001
HRESULT WINAPI CryptXmlDigestReference(HCRYPTXML hReference, DWORD dwFlags, CRYPT_XML_DATA_PROVIDER *pDataProviderIn);
#define CRYPT_XML_DIGEST_REFERENCE_DATA_TRANSFORMED           0x00000001
HRESULT WINAPI CryptXmlSetHMACSecret(HCRYPTXML hSignature, const BYTE *pbSecret, ULONG cbSecret);
typedef struct _CRYPT_XML_KEYINFO_PARAM
{
	LPCWSTR wszId;
	LPCWSTR wszKeyName;
	CERT_BLOB SKI;
	LPCWSTR wszSubjectName;
	ULONG cCertificate;
	CERT_BLOB *rgCertificate;
	ULONG cCRL;
	CERT_BLOB *rgCRL;
} CRYPT_XML_KEYINFO_PARAM;
typedef enum
{
	CRYPT_XML_KEYINFO_SPEC_NONE = 0,
	CRYPT_XML_KEYINFO_SPEC_ENCODED = 1,
	CRYPT_XML_KEYINFO_SPEC_PARAM = 2,
} CRYPT_XML_KEYINFO_SPEC;
HRESULT WINAPI CryptXmlSign(HCRYPTXML hSignature, HCRYPTPROV_OR_NCRYPT_KEY_HANDLE hKey, DWORD dwKeySpec, DWORD dwFlags, CRYPT_XML_KEYINFO_SPEC dwKeyInfoSpec, const void *pvKeyInfoSpec, const CRYPT_XML_ALGORITHM *pSignatureMethod, const CRYPT_XML_ALGORITHM *pCanonicalization);
#define CRYPT_XML_SIGN_ADD_KEYVALUE         0x00000001
HRESULT WINAPI CryptXmlImportPublicKey(DWORD dwFlags, const CRYPT_XML_KEY_VALUE *pKeyValue, BCRYPT_KEY_HANDLE *phKey);
HRESULT WINAPI CryptXmlVerifySignature(HCRYPTXML hSignature, BCRYPT_KEY_HANDLE hKey, DWORD dwFlags);
HRESULT WINAPI CryptXmlGetDocContext(HCRYPTXML hCryptXml, const CRYPT_XML_DOC_CTXT **ppStruct);
HRESULT WINAPI CryptXmlGetSignature(HCRYPTXML hCryptXml, const CRYPT_XML_SIGNATURE **ppStruct);
HRESULT WINAPI CryptXmlGetReference(HCRYPTXML hCryptXml, const CRYPT_XML_REFERENCE **ppStruct);
HRESULT WINAPI CryptXmlGetStatus(HCRYPTXML hCryptXml, CRYPT_XML_STATUS *pStatus);
HRESULT WINAPI CryptXmlEncode(HCRYPTXML hCryptXml, CRYPT_XML_CHARSET dwCharset, const CRYPT_XML_PROPERTY *rgProperty, ULONG cProperty, void *pvCallbackState, PFN_CRYPT_XML_WRITE_CALLBACK pfnWrite);
typedef struct _CRYPT_XML_ALGORITHM_INFO
{
	DWORD cbSize;
	WCHAR *wszAlgorithmURI;
	WCHAR *wszName;
	DWORD dwGroupId;
	WCHAR *wszCNGAlgid;
	WCHAR *wszCNGExtraAlgid;
	DWORD dwSignFlags;
	DWORD dwVerifyFlags;
	void *pvPaddingInfo;
	void *pvExtraInfo;
} CRYPT_XML_ALGORITHM_INFO, *PCRYPT_XML_ALGORITHM_INFO;
#define CRYPT_XML_GROUP_ID_HASH         1
#define CRYPT_XML_GROUP_ID_SIGN         2
HRESULT WINAPI CryptXmlGetAlgorithmInfo(const CRYPT_XML_ALGORITHM *pXmlAlgorithm, DWORD dwFlags, CRYPT_XML_ALGORITHM_INFO **ppAlgInfo);
const CRYPT_XML_ALGORITHM_INFO *WINAPI CryptXmlFindAlgorithmInfo(DWORD dwFindByType, const void *pvFindBy, DWORD dwGroupId, DWORD dwFlags);
#define CRYPT_XML_ALGORITHM_INFO_FIND_BY_URI                1
#define CRYPT_XML_ALGORITHM_INFO_FIND_BY_NAME               2
#define CRYPT_XML_ALGORITHM_INFO_FIND_BY_CNG_ALGID          3
#define CRYPT_XML_ALGORITHM_INFO_FIND_BY_CNG_SIGN_ALGID     4
typedef BOOL(WINAPI *PFN_CRYPT_XML_ENUM_ALG_INFO) (const CRYPT_XML_ALGORITHM_INFO *pInfo, void *pvArg);
HRESULT WINAPI CryptXmlEnumAlgorithmInfo(DWORD dwGroupId, DWORD dwFlags, void *pvArg, PFN_CRYPT_XML_ENUM_ALG_INFO pfnEnumAlgInfo);
typedef HRESULT(WINAPI *CryptXmlDllGetInterface) (DWORD dwFlags, const CRYPT_XML_ALGORITHM_INFO *pMethod, CRYPT_XML_CRYPTOGRAPHIC_INTERFACE *pInterface);
typedef HRESULT(WINAPI *CryptXmlDllEncodeAlgorithm) (const CRYPT_XML_ALGORITHM_INFO *pAlgInfo, CRYPT_XML_CHARSET dwCharset, void *pvCallbackState, PFN_CRYPT_XML_WRITE_CALLBACK pfnWrite);
typedef void *CRYPT_XML_DIGEST;
typedef HRESULT(WINAPI *CryptXmlDllCreateDigest) (const CRYPT_XML_ALGORITHM *pDigestMethod, ULONG *pcbSize, CRYPT_XML_DIGEST *phDigest);
typedef HRESULT(WINAPI *CryptXmlDllDigestData) (CRYPT_XML_DIGEST hDigest, const BYTE *pbData, ULONG cbData);
typedef HRESULT(WINAPI *CryptXmlDllFinalizeDigest) (CRYPT_XML_DIGEST hDigest, BYTE *pbDigest, ULONG cbDigest);
typedef HRESULT(WINAPI *CryptXmlDllCloseDigest) (CRYPT_XML_DIGEST hDigest);
typedef HRESULT(WINAPI *CryptXmlDllSignData) (const CRYPT_XML_ALGORITHM *pSignatureMethod, HCRYPTPROV_OR_NCRYPT_KEY_HANDLE hCryptProvOrNCryptKey, DWORD dwKeySpec, const BYTE *pbInput, ULONG cbInput, BYTE *pbOutput, ULONG cbOutput, ULONG *pcbResult);
typedef HRESULT(WINAPI *CryptXmlDllVerifySignature) (const CRYPT_XML_ALGORITHM *pSignatureMethod, BCRYPT_KEY_HANDLE hKey, const BYTE *pbInput, ULONG cbInput, const BYTE *pbSignature, ULONG cbSignature);
typedef HRESULT(WINAPI *CryptXmlDllGetAlgorithmInfo) (const CRYPT_XML_ALGORITHM *pXmlAlgorithm, CRYPT_XML_ALGORITHM_INFO **ppAlgInfo);
typedef struct _CRYPT_XML_CRYPTOGRAPHIC_INTERFACE
{
	ULONG cbSize;
	CryptXmlDllEncodeAlgorithm fpCryptXmlEncodeAlgorithm;
	CryptXmlDllCreateDigest fpCryptXmlCreateDigest;
	CryptXmlDllDigestData fpCryptXmlDigestData;
	CryptXmlDllFinalizeDigest fpCryptXmlFinalizeDigest;
	CryptXmlDllCloseDigest fpCryptXmlCloseDigest;
	CryptXmlDllSignData fpCryptXmlSignData;
	CryptXmlDllVerifySignature fpCryptXmlVerifySignature;
	CryptXmlDllGetAlgorithmInfo fpCryptXmlGetAlgorithmInfo;
} CRYPT_XML_CRYPTOGRAPHIC_INTERFACE, *PCRYPT_XML_CRYPTOGRAPHIC_INTERFACE;
typedef HRESULT(WINAPI *CryptXmlDllEncodeKeyValue) (NCRYPT_KEY_HANDLE hKey, CRYPT_XML_CHARSET dwCharset, void *pvCallbackState, PFN_CRYPT_XML_WRITE_CALLBACK pfnWrite);
typedef HRESULT(WINAPI *CryptXmlDllCreateKey) (const CRYPT_XML_BLOB *pEncoded, BCRYPT_KEY_HANDLE *phKey);

#endif
