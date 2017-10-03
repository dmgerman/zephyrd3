DECL|CryptoKey_BLANK_KEYBLOB|enumerator|CryptoKey_BLANK_KEYBLOB = 1 << 6,
DECL|CryptoKey_BLANK_KEYSTORE|enumerator|CryptoKey_BLANK_KEYSTORE = 1 << 4,
DECL|CryptoKey_BLANK_PLAINTEXT|enumerator|CryptoKey_BLANK_PLAINTEXT = 1 << 2,
DECL|CryptoKey_Encoding_|enum|typedef enum CryptoKey_Encoding_ {
DECL|CryptoKey_Encoding|typedef|} CryptoKey_Encoding;
DECL|CryptoKey_KEYBLOB|enumerator|CryptoKey_KEYBLOB = 1 << 5,
DECL|CryptoKey_KEYSTORE|enumerator|CryptoKey_KEYSTORE = 1 << 3,
DECL|CryptoKey_KeyBlob_|struct|typedef struct CryptoKey_KeyBlob_ {
DECL|CryptoKey_KeyBlob|typedef|} CryptoKey_KeyBlob;
DECL|CryptoKey_KeyStore_|struct|typedef struct CryptoKey_KeyStore_ {
DECL|CryptoKey_KeyStore|typedef|} CryptoKey_KeyStore;
DECL|CryptoKey_PLAINTEXT|enumerator|CryptoKey_PLAINTEXT = 1 << 1,
DECL|CryptoKey_Plaintext_|struct|typedef struct CryptoKey_Plaintext_ {
DECL|CryptoKey_Plaintext|typedef|} CryptoKey_Plaintext;
DECL|CryptoKey_STATUS_ERROR|macro|CryptoKey_STATUS_ERROR
DECL|CryptoKey_STATUS_RESERVED|macro|CryptoKey_STATUS_RESERVED
DECL|CryptoKey_STATUS_SUCCESS|macro|CryptoKey_STATUS_SUCCESS
DECL|CryptoKey_STATUS_UNDEFINED_ENCODING|macro|CryptoKey_STATUS_UNDEFINED_ENCODING
DECL|CryptoKey_SecurityPolicy|typedef|typedef struct CryptoKey_SecurityPolicy_ CryptoKey_SecurityPolicy;
DECL|CryptoKey_|struct|typedef struct CryptoKey_ {
DECL|CryptoKey|typedef|} CryptoKey;
DECL|encoding|member|CryptoKey_Encoding encoding;
DECL|keyBlobLength|member|uint32_t keyBlobLength;
DECL|keyBlob|member|CryptoKey_KeyBlob keyBlob;
DECL|keyBlob|member|uint8_t *keyBlob;
DECL|keyIndex|member|uint32_t keyIndex;
DECL|keyLength|member|uint16_t keyLength;
DECL|keyLength|member|uint16_t keyLength;
DECL|keyMaterial|member|uint8_t *keyMaterial;
DECL|keyStore|member|CryptoKey_KeyStore keyStore;
DECL|keyStore|member|void* keyStore;
DECL|plaintext|member|CryptoKey_Plaintext plaintext;
DECL|ti_drivers_cryptoutils_cyptokey_CryptoKey__include|macro|ti_drivers_cryptoutils_cyptokey_CryptoKey__include
DECL|u|member|} u;
