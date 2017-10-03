DECL|CryptoCC32XX_AES_CBC|enumerator|CryptoCC32XX_AES_CBC, /*!< AES Cipher Block Chaining */
DECL|CryptoCC32XX_AES_CCM|enumerator|CryptoCC32XX_AES_CCM, /*!< AES Counter with CBC-MAC Mode */
DECL|CryptoCC32XX_AES_CFB|enumerator|CryptoCC32XX_AES_CFB, /*!< AES Cipher FeedBack */
DECL|CryptoCC32XX_AES_CTR|enumerator|CryptoCC32XX_AES_CTR, /*!< AES Counter */
DECL|CryptoCC32XX_AES_ECB|enumerator|CryptoCC32XX_AES_ECB = (CryptoCC32XX_AES << 8) | 1, /*!< AES Electronic CodeBook */
DECL|CryptoCC32XX_AES_GCM|enumerator|CryptoCC32XX_AES_GCM, /*!< AES Galois/Counter Mode */
DECL|CryptoCC32XX_AES_ICM|enumerator|CryptoCC32XX_AES_ICM, /*!< AES Integer Counter Mode */
DECL|CryptoCC32XX_AES_KEY_SIZE_128BIT|enumerator|CryptoCC32XX_AES_KEY_SIZE_128BIT,
DECL|CryptoCC32XX_AES_KEY_SIZE_192BIT|enumerator|CryptoCC32XX_AES_KEY_SIZE_192BIT,
DECL|CryptoCC32XX_AES_KEY_SIZE_256BIT|enumerator|CryptoCC32XX_AES_KEY_SIZE_256BIT
DECL|CryptoCC32XX_AES|enumerator|CryptoCC32XX_AES = 0x01, /*!< Advanced Encryption Standard */
DECL|CryptoCC32XX_AesAadInputParams|typedef|}CryptoCC32XX_AesAadInputParams;
DECL|CryptoCC32XX_AesAadParams|typedef|}CryptoCC32XX_AesAadParams;
DECL|CryptoCC32XX_AesKeySize|typedef|}CryptoCC32XX_AesKeySize;
DECL|CryptoCC32XX_AesParams|typedef|}CryptoCC32XX_AesParams;
DECL|CryptoCC32XX_CMD_RESERVED|macro|CryptoCC32XX_CMD_RESERVED
DECL|CryptoCC32XX_Config|struct|typedef struct CryptoCC32XX_Config {
DECL|CryptoCC32XX_Config|typedef|} CryptoCC32XX_Config;
DECL|CryptoCC32XX_DES_CBC|enumerator|CryptoCC32XX_DES_CBC, /*!< DES Cipher Block Chaining */
DECL|CryptoCC32XX_DES_CFB|enumerator|CryptoCC32XX_DES_CFB, /*!< DES Cipher FeedBack */
DECL|CryptoCC32XX_DES_ECB|enumerator|CryptoCC32XX_DES_ECB = (CryptoCC32XX_DES << 8) | 1, /*!< DES Electronic CodeBook */
DECL|CryptoCC32XX_DES_KEY_SIZE_SINGLE|enumerator|CryptoCC32XX_DES_KEY_SIZE_SINGLE,
DECL|CryptoCC32XX_DES_KEY_SIZE_TRIPLE|enumerator|CryptoCC32XX_DES_KEY_SIZE_TRIPLE
DECL|CryptoCC32XX_DES|enumerator|CryptoCC32XX_DES = 0x02, /*!< Data Encryption Standard */
DECL|CryptoCC32XX_DesKeySize|typedef|}CryptoCC32XX_DesKeySize;
DECL|CryptoCC32XX_DesParams|typedef|}CryptoCC32XX_DesParams;
DECL|CryptoCC32XX_EncryptMethod|typedef|}CryptoCC32XX_EncryptMethod;
DECL|CryptoCC32XX_EncryptParams|typedef|}CryptoCC32XX_EncryptParams;
DECL|CryptoCC32XX_HMAC_MD5|enumerator|CryptoCC32XX_HMAC_MD5 = (CryptoCC32XX_HMAC << 8) | 1, /*!< MD5 used keyed-hash message authentication code */
DECL|CryptoCC32XX_HMAC_SHA1|enumerator|CryptoCC32XX_HMAC_SHA1, /*!< SHA1 used keyed-hash message authentication code */
DECL|CryptoCC32XX_HMAC_SHA224|enumerator|CryptoCC32XX_HMAC_SHA224, /*!< SHA224 used keyed-hash message authentication code */
DECL|CryptoCC32XX_HMAC_SHA256|enumerator|CryptoCC32XX_HMAC_SHA256 /*!< SHA256 used keyed-hash message authentication code */
DECL|CryptoCC32XX_HMAC|enumerator|CryptoCC32XX_HMAC = 0x04, /*!< Cryptographic hash function */
DECL|CryptoCC32XX_Handle|typedef|typedef struct CryptoCC32XX_Config *CryptoCC32XX_Handle;
DECL|CryptoCC32XX_HmacMethod|typedef|}CryptoCC32XX_HmacMethod;
DECL|CryptoCC32XX_HmacParams|typedef|}CryptoCC32XX_HmacParams;
DECL|CryptoCC32XX_MAX_BLOCK_SIZE|macro|CryptoCC32XX_MAX_BLOCK_SIZE
DECL|CryptoCC32XX_MAX_DIGEST_SIZE|macro|CryptoCC32XX_MAX_DIGEST_SIZE
DECL|CryptoCC32XX_MAX_TYPES|macro|CryptoCC32XX_MAX_TYPES
DECL|CryptoCC32XX_MD5_BLOCK_SIZE|macro|CryptoCC32XX_MD5_BLOCK_SIZE
DECL|CryptoCC32XX_MD5_DIGEST_SIZE|macro|CryptoCC32XX_MD5_DIGEST_SIZE
DECL|CryptoCC32XX_Object|struct|typedef struct CryptoCC32XX_Object {
DECL|CryptoCC32XX_Object|typedef|} CryptoCC32XX_Object;
DECL|CryptoCC32XX_SHA1_BLOCK_SIZE|macro|CryptoCC32XX_SHA1_BLOCK_SIZE
DECL|CryptoCC32XX_SHA1_DIGEST_SIZE|macro|CryptoCC32XX_SHA1_DIGEST_SIZE
DECL|CryptoCC32XX_SHA256_BLOCK_SIZE|macro|CryptoCC32XX_SHA256_BLOCK_SIZE
DECL|CryptoCC32XX_SHA256_DIGEST_SIZE|macro|CryptoCC32XX_SHA256_DIGEST_SIZE
DECL|CryptoCC32XX_STATUS_ERROR_NOT_SUPPORTED|macro|CryptoCC32XX_STATUS_ERROR_NOT_SUPPORTED
DECL|CryptoCC32XX_STATUS_ERROR_VERIFY|macro|CryptoCC32XX_STATUS_ERROR_VERIFY
DECL|CryptoCC32XX_STATUS_ERROR|macro|CryptoCC32XX_STATUS_ERROR
DECL|CryptoCC32XX_STATUS_RESERVED|macro|CryptoCC32XX_STATUS_RESERVED
DECL|CryptoCC32XX_STATUS_SUCCESS|macro|CryptoCC32XX_STATUS_SUCCESS
DECL|CryptoCC32XX_STATUS_UNDEFINEDCMD|macro|CryptoCC32XX_STATUS_UNDEFINEDCMD
DECL|CryptoCC32XX_Type|typedef|}CryptoCC32XX_Type;
DECL|aadParams|member|CryptoCC32XX_AesAadParams aadParams;
DECL|aes|member|CryptoCC32XX_AesParams aes;
DECL|blockSize|member|uint32_t blockSize;
DECL|buffLen|member|uint32_t buffLen;
DECL|buff|member|uint8_t buff[CryptoCC32XX_MAX_BLOCK_SIZE];
DECL|des|member|CryptoCC32XX_DesParams des;
DECL|digestCount|member|uint32_t digestCount;
DECL|first|member|uint8_t first;
DECL|hwiHandle|member|HwiP_Handle hwiHandle[CryptoCC32XX_MAX_TYPES];
DECL|innerDigest|member|uint8_t innerDigest[CryptoCC32XX_MAX_DIGEST_SIZE];
DECL|input|member|CryptoCC32XX_AesAadInputParams input; /*!<an input - additional authentication data */
DECL|isOpen|member|bool isOpen;
DECL|key2Size|member|CryptoCC32XX_AesKeySize key2Size; /*!< AES second Key size type (CryptoCC32XX_AES_CCM) */
DECL|keySize|member|CryptoCC32XX_AesKeySize keySize; /*!< AES Key size type */
DECL|keySize|member|CryptoCC32XX_DesKeySize keySize; /*!< DES Key size type */
DECL|len|member|size_t len; /*!< length of the additional authentication data in bytes */
DECL|moreData|member|uint8_t moreData;
DECL|object|member|void *object;
DECL|pContext|member|void *pContext;
DECL|pIV|member|void *pIV; /*!< Pointer to AES Initialization Vector */
DECL|pIV|member|void *pIV; /*!< Pointer to DES Initialization Vector */
DECL|pKey2|member|uint8_t *pKey2; /*!< pointer to AES second key (CryptoCC32XX_AES_CCM) */
DECL|pKey|member|const uint8_t *pKey; /*!< pointer to AES key */
DECL|pKey|member|const uint8_t *pKey; /*!< pointer to DES key */
DECL|pKey|member|uint8_t *pKey;
DECL|sem|member|SemaphoreP_Handle sem[CryptoCC32XX_MAX_TYPES];
DECL|tag|member|uint8_t tag[16]; /*!<an output - pointer to a 4-word array where the hash tag is written */
DECL|ti_drivers_crypto_CryptoCC32XX__include|macro|ti_drivers_crypto_CryptoCC32XX__include
