DECL|FSL_LTC_DRIVER_VERSION|macro|FSL_LTC_DRIVER_VERSION
DECL|LTC_AES_BLOCK_SIZE|macro|LTC_AES_BLOCK_SIZE
DECL|LTC_AES_DecryptCtr|macro|LTC_AES_DecryptCtr
DECL|LTC_AES_EncryptCtr|macro|LTC_AES_EncryptCtr
DECL|LTC_AES_IV_SIZE|macro|LTC_AES_IV_SIZE
DECL|LTC_DES_IV_SIZE|macro|LTC_DES_IV_SIZE
DECL|LTC_DES_KEY_SIZE|macro|LTC_DES_KEY_SIZE
DECL|LTC_HASH_CTX_SIZE|macro|LTC_HASH_CTX_SIZE
DECL|LTC_HASH_CTX_SIZE|macro|LTC_HASH_CTX_SIZE
DECL|X|member|uint8_t *X; /*!< X coordinate (affine) */
DECL|Y|member|uint8_t *Y; /*!< Y coordinate (affine) */
DECL|_FSL_LTC_H_|macro|_FSL_LTC_H_
DECL|_ltc_aes_key_t|enum|typedef enum _ltc_aes_key_t
DECL|_ltc_hash_algo_t|enum|typedef enum _ltc_hash_algo_t
DECL|_ltc_pkha_ecc_point_t|struct|typedef struct _ltc_pkha_ecc_point_t
DECL|_ltc_pkha_f2m_t|enum|typedef enum _ltc_pkha_f2m_t
DECL|_ltc_pkha_montgomery_form_t|enum|typedef enum _ltc_pkha_montgomery_form_t
DECL|_ltc_pkha_timing_t|enum|typedef enum _ltc_pkha_timing_t
DECL|kLTC_Cmac|enumerator|kLTC_Cmac, /*!< CMAC (AES engine) */
DECL|kLTC_DecryptKey|enumerator|kLTC_DecryptKey = 1U, /*!< Input key is a decrypt key */
DECL|kLTC_EncryptKey|enumerator|kLTC_EncryptKey = 0U, /*!< Input key is an encrypt key */
DECL|kLTC_PKHA_F2mArith|enumerator|kLTC_PKHA_F2mArith = 1U /*!< Use binary polynomial arithmetic */
DECL|kLTC_PKHA_IntegerArith|enumerator|kLTC_PKHA_IntegerArith = 0U, /*!< Use integer arithmetic */
DECL|kLTC_PKHA_MontgomeryFormat|enumerator|kLTC_PKHA_MontgomeryFormat = 1U /*!< PKHA number is in montgomery format */
DECL|kLTC_PKHA_NoTimingEqualized|enumerator|kLTC_PKHA_NoTimingEqualized = 0U, /*!< Normal version of a PKHA operation */
DECL|kLTC_PKHA_NormalValue|enumerator|kLTC_PKHA_NormalValue = 0U, /*!< PKHA number is normal integer */
DECL|kLTC_PKHA_TimingEqualized|enumerator|kLTC_PKHA_TimingEqualized = 1U /*!< Timing-equalized version of a PKHA operation */
DECL|kLTC_Sha1|enumerator|kLTC_Sha1, /*!< SHA_1 (MDHA engine) */
DECL|kLTC_Sha224|enumerator|kLTC_Sha224, /*!< SHA_224 (MDHA engine) */
DECL|kLTC_Sha256|enumerator|kLTC_Sha256, /*!< SHA_256 (MDHA engine) */
DECL|kLTC_XcbcMac|enumerator|kLTC_XcbcMac = 0, /*!< XCBC-MAC (AES engine) */
DECL|ltc_aes_key_t|typedef|} ltc_aes_key_t;
DECL|ltc_hash_algo_t|typedef|} ltc_hash_algo_t;
DECL|ltc_hash_ctx_t|typedef|typedef uint32_t ltc_hash_ctx_t[LTC_HASH_CTX_SIZE];
DECL|ltc_pkha_ecc_point_t|typedef|} ltc_pkha_ecc_point_t;
DECL|ltc_pkha_f2m_t|typedef|} ltc_pkha_f2m_t;
DECL|ltc_pkha_montgomery_form_t|typedef|} ltc_pkha_montgomery_form_t;
DECL|ltc_pkha_timing_t|typedef|} ltc_pkha_timing_t;
