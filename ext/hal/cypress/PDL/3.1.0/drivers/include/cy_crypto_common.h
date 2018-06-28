DECL|CY_CRYPTO_AES_128_KEY_SIZE|macro|CY_CRYPTO_AES_128_KEY_SIZE
DECL|CY_CRYPTO_AES_192_KEY_SIZE|macro|CY_CRYPTO_AES_192_KEY_SIZE
DECL|CY_CRYPTO_AES_256_KEY_SIZE|macro|CY_CRYPTO_AES_256_KEY_SIZE
DECL|CY_CRYPTO_AES_BLOCK_SIZE_U32|macro|CY_CRYPTO_AES_BLOCK_SIZE_U32
DECL|CY_CRYPTO_AES_BLOCK_SIZE|macro|CY_CRYPTO_AES_BLOCK_SIZE
DECL|CY_CRYPTO_BASE_LIBRARY|enumerator|CY_CRYPTO_BASE_LIBRARY = 0x01u,
DECL|CY_CRYPTO_COMMON_H|macro|CY_CRYPTO_COMMON_H
DECL|CY_CRYPTO_COMM_FAIL|enumerator|CY_CRYPTO_COMM_FAIL = CY_CRYPTO_ID | CY_PDL_STATUS_ERROR | 0x04u,
DECL|CY_CRYPTO_CORE_ENABLE|macro|CY_CRYPTO_CORE_ENABLE
DECL|CY_CRYPTO_DECRYPT|enumerator|CY_CRYPTO_DECRYPT = 0x01u
DECL|CY_CRYPTO_DES_KEY_SIZE|macro|CY_CRYPTO_DES_KEY_SIZE
DECL|CY_CRYPTO_DES_WEAK_KEY|enumerator|CY_CRYPTO_DES_WEAK_KEY = CY_CRYPTO_ID | CY_PDL_STATUS_WARNING | 0x03u,
DECL|CY_CRYPTO_DRV_VERSION_MAJOR|macro|CY_CRYPTO_DRV_VERSION_MAJOR
DECL|CY_CRYPTO_DRV_VERSION_MINOR|macro|CY_CRYPTO_DRV_VERSION_MINOR
DECL|CY_CRYPTO_ENCRYPT|enumerator|CY_CRYPTO_ENCRYPT = 0x00u,
DECL|CY_CRYPTO_EXTRA_LIBRARY|enumerator|CY_CRYPTO_EXTRA_LIBRARY = 0x02u,
DECL|CY_CRYPTO_FULL_LIBRARY|enumerator|CY_CRYPTO_FULL_LIBRARY = 0x03u,
DECL|CY_CRYPTO_HW_ERROR|enumerator|CY_CRYPTO_HW_ERROR = CY_CRYPTO_ID | CY_PDL_STATUS_ERROR | 0x01u,
DECL|CY_CRYPTO_HW_NOT_ENABLED|enumerator|CY_CRYPTO_HW_NOT_ENABLED = CY_CRYPTO_ID | CY_PDL_STATUS_ERROR | 0x09u,
DECL|CY_CRYPTO_ID|macro|CY_CRYPTO_ID
DECL|CY_CRYPTO_INSTR_3DES|enumerator|CY_CRYPTO_INSTR_3DES = 0x16u,
DECL|CY_CRYPTO_INSTR_AES_CBC|enumerator|CY_CRYPTO_INSTR_AES_CBC = 0x09u,
DECL|CY_CRYPTO_INSTR_AES_CFB|enumerator|CY_CRYPTO_INSTR_AES_CFB = 0x0Au,
DECL|CY_CRYPTO_INSTR_AES_CTR|enumerator|CY_CRYPTO_INSTR_AES_CTR = 0x0Bu,
DECL|CY_CRYPTO_INSTR_AES_ECB|enumerator|CY_CRYPTO_INSTR_AES_ECB = 0x08u,
DECL|CY_CRYPTO_INSTR_AES_INIT|enumerator|CY_CRYPTO_INSTR_AES_INIT = 0x07u,
DECL|CY_CRYPTO_INSTR_CMAC|enumerator|CY_CRYPTO_INSTR_CMAC = 0x0Cu,
DECL|CY_CRYPTO_INSTR_CRC_INIT|enumerator|CY_CRYPTO_INSTR_CRC_INIT = 0x13u,
DECL|CY_CRYPTO_INSTR_CRC|enumerator|CY_CRYPTO_INSTR_CRC = 0x14u,
DECL|CY_CRYPTO_INSTR_DES|enumerator|CY_CRYPTO_INSTR_DES = 0x15u,
DECL|CY_CRYPTO_INSTR_DISABLE|enumerator|CY_CRYPTO_INSTR_DISABLE = 0x02u,
DECL|CY_CRYPTO_INSTR_ENABLE|enumerator|CY_CRYPTO_INSTR_ENABLE = 0x01u,
DECL|CY_CRYPTO_INSTR_HMAC|enumerator|CY_CRYPTO_INSTR_HMAC = 0x0Eu,
DECL|CY_CRYPTO_INSTR_MEM_CMP|enumerator|CY_CRYPTO_INSTR_MEM_CMP = 0x11u,
DECL|CY_CRYPTO_INSTR_MEM_CPY|enumerator|CY_CRYPTO_INSTR_MEM_CPY = 0x0Fu,
DECL|CY_CRYPTO_INSTR_MEM_SET|enumerator|CY_CRYPTO_INSTR_MEM_SET = 0x10u,
DECL|CY_CRYPTO_INSTR_MEM_XOR|enumerator|CY_CRYPTO_INSTR_MEM_XOR = 0x12u,
DECL|CY_CRYPTO_INSTR_PRNG_INIT|enumerator|CY_CRYPTO_INSTR_PRNG_INIT = 0x03u,
DECL|CY_CRYPTO_INSTR_PRNG|enumerator|CY_CRYPTO_INSTR_PRNG = 0x04u,
DECL|CY_CRYPTO_INSTR_RSA_COEF|enumerator|CY_CRYPTO_INSTR_RSA_COEF = 0x18u,
DECL|CY_CRYPTO_INSTR_RSA_PROC|enumerator|CY_CRYPTO_INSTR_RSA_PROC = 0x17u,
DECL|CY_CRYPTO_INSTR_RSA_VER|enumerator|CY_CRYPTO_INSTR_RSA_VER = 0x19u,
DECL|CY_CRYPTO_INSTR_SHA|enumerator|CY_CRYPTO_INSTR_SHA = 0x0Du,
DECL|CY_CRYPTO_INSTR_SRV_INFO|enumerator|CY_CRYPTO_INSTR_SRV_INFO = 0x55u
DECL|CY_CRYPTO_INSTR_TRNG_INIT|enumerator|CY_CRYPTO_INSTR_TRNG_INIT = 0x05u,
DECL|CY_CRYPTO_INSTR_TRNG|enumerator|CY_CRYPTO_INSTR_TRNG = 0x06u,
DECL|CY_CRYPTO_INSTR_UNKNOWN|enumerator|CY_CRYPTO_INSTR_UNKNOWN = 0x00u,
DECL|CY_CRYPTO_IPC_INTR_NOTIFY_NUM|macro|CY_CRYPTO_IPC_INTR_NOTIFY_NUM
DECL|CY_CRYPTO_IPC_INTR_RELEASE_NUM|macro|CY_CRYPTO_IPC_INTR_RELEASE_NUM
DECL|CY_CRYPTO_KEY_AES_128|enumerator|CY_CRYPTO_KEY_AES_128 = 0x00u, /**< The AES key size is 128 bits */
DECL|CY_CRYPTO_KEY_AES_192|enumerator|CY_CRYPTO_KEY_AES_192 = 0x01u, /**< The AES key size is 192 bits */
DECL|CY_CRYPTO_KEY_AES_256|enumerator|CY_CRYPTO_KEY_AES_256 = 0x02u /**< The AES key size is 256 bits */
DECL|CY_CRYPTO_MODE_SHA1|enumerator|CY_CRYPTO_MODE_SHA1 = 0x00u, /**< Sets the SHA1 mode */
DECL|CY_CRYPTO_MODE_SHA224|enumerator|CY_CRYPTO_MODE_SHA224 = 0x11u, /**< Sets the SHA224 mode */
DECL|CY_CRYPTO_MODE_SHA256|enumerator|CY_CRYPTO_MODE_SHA256 = 0x01u, /**< Sets the SHA256 mode */
DECL|CY_CRYPTO_MODE_SHA384|enumerator|CY_CRYPTO_MODE_SHA384 = 0x12u, /**< Sets the SHA384 mode */
DECL|CY_CRYPTO_MODE_SHA512_224|enumerator|CY_CRYPTO_MODE_SHA512_224 = 0x32u /**< Sets the SHA512/224 mode */
DECL|CY_CRYPTO_MODE_SHA512_256|enumerator|CY_CRYPTO_MODE_SHA512_256 = 0x22u, /**< Sets the SHA512/256 mode */
DECL|CY_CRYPTO_MODE_SHA512|enumerator|CY_CRYPTO_MODE_SHA512 = 0x02u, /**< Sets the SHA512 mode */
DECL|CY_CRYPTO_NOT_INITIALIZED|enumerator|CY_CRYPTO_NOT_INITIALIZED = CY_CRYPTO_ID | CY_PDL_STATUS_ERROR | 0x08u,
DECL|CY_CRYPTO_NOT_SUPPORTED|enumerator|CY_CRYPTO_NOT_SUPPORTED = CY_CRYPTO_ID | CY_PDL_STATUS_ERROR | 0x0Au
DECL|CY_CRYPTO_NO_LIBRARY|enumerator|CY_CRYPTO_NO_LIBRARY = 0x00u,
DECL|CY_CRYPTO_RSA1024_MESSAGE_SIZE|macro|CY_CRYPTO_RSA1024_MESSAGE_SIZE
DECL|CY_CRYPTO_RSA1536_MESSAGE_SIZE|macro|CY_CRYPTO_RSA1536_MESSAGE_SIZE
DECL|CY_CRYPTO_RSA2048_MESSAGE_SIZE|macro|CY_CRYPTO_RSA2048_MESSAGE_SIZE
DECL|CY_CRYPTO_RSA_VERIFY_FAIL|enumerator|CY_CRYPTO_RSA_VERIFY_FAIL = 0x01u /**< PKCS1-v1.5 verify FAILED */
DECL|CY_CRYPTO_RSA_VERIFY_SUCCESS|enumerator|CY_CRYPTO_RSA_VERIFY_SUCCESS = 0x00u, /**< PKCS1-v1.5 verify SUCCESS */
DECL|CY_CRYPTO_SERVER_BUSY|enumerator|CY_CRYPTO_SERVER_BUSY = CY_CRYPTO_ID | CY_PDL_STATUS_INFO | 0x07u,
DECL|CY_CRYPTO_SERVER_NOT_STARTED|enumerator|CY_CRYPTO_SERVER_NOT_STARTED = CY_CRYPTO_ID | CY_PDL_STATUS_ERROR | 0x06u,
DECL|CY_CRYPTO_SHA1_DIGEST_SIZE|macro|CY_CRYPTO_SHA1_DIGEST_SIZE
DECL|CY_CRYPTO_SHA224_DIGEST_SIZE|macro|CY_CRYPTO_SHA224_DIGEST_SIZE
DECL|CY_CRYPTO_SHA256_DIGEST_SIZE|macro|CY_CRYPTO_SHA256_DIGEST_SIZE
DECL|CY_CRYPTO_SHA384_DIGEST_SIZE|macro|CY_CRYPTO_SHA384_DIGEST_SIZE
DECL|CY_CRYPTO_SHA512_224_DIGEST_SIZE|macro|CY_CRYPTO_SHA512_224_DIGEST_SIZE
DECL|CY_CRYPTO_SHA512_256_DIGEST_SIZE|macro|CY_CRYPTO_SHA512_256_DIGEST_SIZE
DECL|CY_CRYPTO_SHA512_DIGEST_SIZE|macro|CY_CRYPTO_SHA512_DIGEST_SIZE
DECL|CY_CRYPTO_SIZE_NOT_X16|enumerator|CY_CRYPTO_SIZE_NOT_X16 = CY_CRYPTO_ID | CY_PDL_STATUS_ERROR | 0x02u,
DECL|CY_CRYPTO_SUCCESS|enumerator|CY_CRYPTO_SUCCESS = 0x00u,
DECL|CY_CRYPTO_SYNC_BLOCKING|macro|CY_CRYPTO_SYNC_BLOCKING
DECL|CY_CRYPTO_SYNC_NON_BLOCKING|macro|CY_CRYPTO_SYNC_NON_BLOCKING
DECL|CY_CRYPTO_TDES_KEY_SIZE|macro|CY_CRYPTO_TDES_KEY_SIZE
DECL|FIROPol|member|uint32_t FIROPol;
DECL|GAROPol|member|uint32_t GAROPol;
DECL|acquireNotifierChannel|member|uint32_t acquireNotifierChannel;
DECL|acquireNotifierChannel|member|uint32_t acquireNotifierChannel;
DECL|acquireNotifierChannel|member|uint32_t acquireNotifierChannel;
DECL|acquireNotifierConfig|member|cy_stc_sysint_t acquireNotifierConfig;
DECL|acquireNotifierConfig|member|cy_stc_sysint_t acquireNotifierConfig;
DECL|aesState|member|cy_stc_crypto_aes_state_t aesState;
DECL|barretCoefPtr|member|uint8_t *barretCoefPtr;
DECL|blockIdx|member|uint32_t blockIdx;
DECL|crc|member|uint32_t *crc; /**< Pointer to CRC destination variable */
DECL|cryptoErrorIntrConfig|member|cy_stc_sysint_t cryptoErrorIntrConfig;
DECL|cryptoErrorIntrConfig|member|cy_stc_sysint_t cryptoErrorIntrConfig;
DECL|cy_crypto_callback_ptr_t|typedef|typedef void (*cy_crypto_callback_ptr_t)(void);
DECL|cy_en_crypto_aes_key_length_t|typedef|} cy_en_crypto_aes_key_length_t;
DECL|cy_en_crypto_comm_instr_t|typedef|} cy_en_crypto_comm_instr_t;
DECL|cy_en_crypto_dir_mode_t|typedef|} cy_en_crypto_dir_mode_t;
DECL|cy_en_crypto_lib_info_t|typedef|} cy_en_crypto_lib_info_t;
DECL|cy_en_crypto_rsa_ver_result_t|typedef|} cy_en_crypto_rsa_ver_result_t;
DECL|cy_en_crypto_sha_mode_t|typedef|} cy_en_crypto_sha_mode_t;
DECL|cy_en_crypto_status_t|typedef|} cy_en_crypto_status_t;
DECL|cy_stc_crypto_aes_state_t|typedef|} cy_stc_crypto_aes_state_t;
DECL|cy_stc_crypto_config_t|typedef|} cy_stc_crypto_config_t;
DECL|cy_stc_crypto_context_aes_t|typedef|} cy_stc_crypto_context_aes_t;
DECL|cy_stc_crypto_context_crc_t|typedef|} cy_stc_crypto_context_crc_t;
DECL|cy_stc_crypto_context_des_t|typedef|} cy_stc_crypto_context_des_t;
DECL|cy_stc_crypto_context_prng_t|typedef|} cy_stc_crypto_context_prng_t;
DECL|cy_stc_crypto_context_rsa_t|typedef|} cy_stc_crypto_context_rsa_t;
DECL|cy_stc_crypto_context_rsa_ver_t|typedef|} cy_stc_crypto_context_rsa_ver_t;
DECL|cy_stc_crypto_context_sha_t|typedef|} cy_stc_crypto_context_sha_t;
DECL|cy_stc_crypto_context_str_t|typedef|} cy_stc_crypto_context_str_t;
DECL|cy_stc_crypto_context_trng_t|typedef|} cy_stc_crypto_context_trng_t;
DECL|cy_stc_crypto_context_t|typedef|} cy_stc_crypto_context_t;
DECL|cy_stc_crypto_hw_error_t|typedef|} cy_stc_crypto_hw_error_t;
DECL|cy_stc_crypto_rsa_pub_key_t|typedef|} cy_stc_crypto_rsa_pub_key_t;
DECL|cy_stc_crypto_server_context_t|typedef|} cy_stc_crypto_server_context_t;
DECL|dataReverse|member|uint32_t dataReverse; /**< Input data reverse flag */
DECL|dataSize|member|uint32_t dataSize; /**< Operation data size */
DECL|dataSize|member|uint32_t dataSize; /**< Operation data size */
DECL|dataXor|member|uint32_t dataXor; /**< Input data XOR flag */
DECL|data|member|uint32_t data; /**< Operation data value (for memory setting) */
DECL|decryptedSignatureLength|member|uint32_t decryptedSignatureLength;
DECL|decryptedSignature|member|uint32_t const *decryptedSignature;
DECL|digestType|member|cy_en_crypto_sha_mode_t digestType;
DECL|dirMode|member|cy_en_crypto_dir_mode_t dirMode;
DECL|dirMode|member|cy_en_crypto_dir_mode_t dirMode;
DECL|dst|member|uint32_t *dst;
DECL|dst|member|uint32_t *dst;
DECL|dst|member|uint32_t *dst;
DECL|dst|member|void *dst; /**< Pointer to string destination */
DECL|errorHandlerPtr|member|cy_israddress errorHandlerPtr;
DECL|errorStatus0|member|uint32_t errorStatus0;
DECL|errorStatus1|member|uint32_t errorStatus1;
DECL|getDataHandlerPtr|member|cy_israddress getDataHandlerPtr;
DECL|hash|member|uint32_t const *hash;
DECL|hwErrorStatus|member|cy_stc_crypto_hw_error_t hwErrorStatus;
DECL|instr|member|cy_en_crypto_comm_instr_t instr;
DECL|invKey|member|uint32_t *invKey;
DECL|inverseModuloPtr|member|uint8_t *inverseModuloPtr;
DECL|ipcChannel|member|uint32_t ipcChannel;
DECL|ipcChannel|member|uint32_t ipcChannel;
DECL|ipcChannel|member|uint32_t ipcChannel;
DECL|isHwErrorOccured|member|bool isHwErrorOccured;
DECL|ivPtr|member|uint32_t *ivPtr;
DECL|keyLength|member|cy_en_crypto_aes_key_length_t keyLength;
DECL|keyLength|member|uint32_t keyLength;
DECL|key|member|cy_stc_crypto_rsa_pub_key_t const *key;
DECL|key|member|uint32_t *key;
DECL|key|member|uint32_t *key;
DECL|key|member|uint32_t *key;
DECL|lfsr29InitState|member|uint32_t lfsr29InitState; /**< lfsr29 initialization data */
DECL|lfsr31InitState|member|uint32_t lfsr31InitState; /**< lfsr31 initialization data */
DECL|lfsr32InitState|member|uint32_t lfsr32InitState; /**< lfsr32 initialization data */
DECL|lfsrInitState|member|uint32_t lfsrInitState; /**< CRC calculation initial value */
DECL|max|member|uint32_t max;
DECL|max|member|uint32_t max; /**< Maximum of the generated value */
DECL|messageSize|member|uint32_t messageSize;
DECL|messageSize|member|uint32_t messageSize;
DECL|message|member|uint32_t *message;
DECL|message|member|uint32_t const *message;
DECL|mode|member|cy_en_crypto_sha_mode_t mode;
DECL|moduloLength|member|uint32_t moduloLength;
DECL|moduloPtr|member|uint8_t *moduloPtr;
DECL|polynomial|member|uint32_t polynomial; /**< Polynomial for CRC calculate */
DECL|prngNum|member|uint32_t *prngNum; /**< Pointer to generated value */
DECL|pubExpLength|member|uint32_t pubExpLength;
DECL|pubExpPtr|member|uint8_t *pubExpPtr;
DECL|rBarPtr|member|uint8_t *rBarPtr;
DECL|releaseNotifierChannel|member|uint32_t releaseNotifierChannel;
DECL|releaseNotifierChannel|member|uint32_t releaseNotifierChannel;
DECL|releaseNotifierConfig|member|cy_stc_sysint_t releaseNotifierConfig;
DECL|releaseNotifierConfig|member|cy_stc_sysint_t releaseNotifierConfig;
DECL|remReverse|member|uint32_t remReverse; /**< Output data reverse flag */
DECL|remXor|member|uint32_t remXor; /**< Output data XOR flag */
DECL|resp|member|cy_en_crypto_status_t resp;
DECL|result|member|uint32_t *result;
DECL|src0|member|void const *src0; /**< Pointer to 1-st string source */
DECL|src1|member|void const *src1; /**< Pointer to 2-nd string source */
DECL|srcData|member|void* srcData; /**< Pointer to data source block */
DECL|srcOffset|member|uint32_t *srcOffset;
DECL|srcSize|member|uint32_t srcSize;
DECL|src|member|uint32_t *src;
DECL|src|member|uint32_t *src;
DECL|streamBlock|member|uint32_t *streamBlock;
DECL|trngNum|member|uint32_t *trngNum;
DECL|userCompleteCallback|member|cy_crypto_callback_ptr_t userCompleteCallback;
DECL|userCompleteCallback|member|cy_crypto_callback_ptr_t userCompleteCallback;
DECL|userErrorHandler|member|cy_israddress userErrorHandler;
DECL|userGetDataHandler|member|cy_israddress userGetDataHandler;
DECL|verResult|member|cy_en_crypto_rsa_ver_result_t *verResult;
DECL|xdata|member|void *xdata;
