DECL|LTC_AES_CryptCtr|function|status_t LTC_AES_CryptCtr(LTC_Type *base, const uint8_t *input, uint8_t *output, uint32_t size, uint8_t counter[LTC_AES_BLOCK_SIZE],
DECL|LTC_AES_DecryptCbc|function|status_t LTC_AES_DecryptCbc(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_AES_IV_SIZE],
DECL|LTC_AES_DecryptEcb|function|status_t LTC_AES_DecryptEcb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t *key,
DECL|LTC_AES_DecryptTagCcm|function|status_t LTC_AES_DecryptTagCcm(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t *iv,
DECL|LTC_AES_DecryptTagGcm|function|status_t LTC_AES_DecryptTagGcm(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t *iv,
DECL|LTC_AES_EncryptCbc|function|status_t LTC_AES_EncryptCbc(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_AES_IV_SIZE],
DECL|LTC_AES_EncryptEcb|function|status_t LTC_AES_EncryptEcb( LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t *key, uint32_t keySize)
DECL|LTC_AES_EncryptTagCcm|function|status_t LTC_AES_EncryptTagCcm(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t *iv,
DECL|LTC_AES_EncryptTagGcm|function|status_t LTC_AES_EncryptTagGcm(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t *iv,
DECL|LTC_AES_GCM_TYPE_AAD|macro|LTC_AES_GCM_TYPE_AAD
DECL|LTC_AES_GCM_TYPE_IV|macro|LTC_AES_GCM_TYPE_IV
DECL|LTC_AES_GenerateDecryptKey|function|status_t LTC_AES_GenerateDecryptKey(LTC_Type *base, const uint8_t *encryptKey, uint8_t *decryptKey, uint32_t keySize)
DECL|LTC_CCM_TAG_IDX|macro|LTC_CCM_TAG_IDX
DECL|LTC_DES2_DecryptCbc|function|status_t LTC_DES2_DecryptCbc(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES2_DecryptCfb|function|status_t LTC_DES2_DecryptCfb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES2_DecryptEcb|function|status_t LTC_DES2_DecryptEcb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t key1[LTC_DES_KEY_SIZE],
DECL|LTC_DES2_DecryptOfb|function|status_t LTC_DES2_DecryptOfb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES2_EncryptCbc|function|status_t LTC_DES2_EncryptCbc(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES2_EncryptCfb|function|status_t LTC_DES2_EncryptCfb(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES2_EncryptEcb|function|status_t LTC_DES2_EncryptEcb(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t key1[LTC_DES_KEY_SIZE],
DECL|LTC_DES2_EncryptOfb|function|status_t LTC_DES2_EncryptOfb(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES3_DecryptCbc|function|status_t LTC_DES3_DecryptCbc(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES3_DecryptCfb|function|status_t LTC_DES3_DecryptCfb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES3_DecryptEcb|function|status_t LTC_DES3_DecryptEcb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t key1[LTC_DES_KEY_SIZE],
DECL|LTC_DES3_DecryptOfb|function|status_t LTC_DES3_DecryptOfb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES3_EncryptCbc|function|status_t LTC_DES3_EncryptCbc(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES3_EncryptCfb|function|status_t LTC_DES3_EncryptCfb(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES3_EncryptEcb|function|status_t LTC_DES3_EncryptEcb(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t key1[LTC_DES_KEY_SIZE],
DECL|LTC_DES3_EncryptOfb|function|status_t LTC_DES3_EncryptOfb(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES_DecryptCbc|function|status_t LTC_DES_DecryptCbc(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES_DecryptCfb|function|status_t LTC_DES_DecryptCfb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES_DecryptEcb|function|status_t LTC_DES_DecryptEcb( LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t key[LTC_DES_KEY_SIZE])
DECL|LTC_DES_DecryptOfb|function|status_t LTC_DES_DecryptOfb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES_EncryptCbc|function|status_t LTC_DES_EncryptCbc(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES_EncryptCfb|function|status_t LTC_DES_EncryptCfb(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_DES_EncryptEcb|function|status_t LTC_DES_EncryptEcb( LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t key[LTC_DES_KEY_SIZE])
DECL|LTC_DES_EncryptOfb|function|status_t LTC_DES_EncryptOfb(LTC_Type *base, const uint8_t *plaintext, uint8_t *ciphertext, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|LTC_Deinit|function|void LTC_Deinit(LTC_Type *base)
DECL|LTC_FIFO_SZ_MAX_DOWN_ALGN|macro|LTC_FIFO_SZ_MAX_DOWN_ALGN
DECL|LTC_GCM_TAG_IDX|macro|LTC_GCM_TAG_IDX
DECL|LTC_HASH_BLOCK_SIZE|macro|LTC_HASH_BLOCK_SIZE
DECL|LTC_HASH_BLOCK_SIZE|macro|LTC_HASH_BLOCK_SIZE
DECL|LTC_HASH_Finish|function|status_t LTC_HASH_Finish(ltc_hash_ctx_t *ctx, uint8_t *output, uint32_t *outputSize)
DECL|LTC_HASH_Init|function|status_t LTC_HASH_Init(LTC_Type *base, ltc_hash_ctx_t *ctx, ltc_hash_algo_t algo, const uint8_t *key, uint32_t keySize)
DECL|LTC_HASH_Update|function|status_t LTC_HASH_Update(ltc_hash_ctx_t *ctx, const uint8_t *input, uint32_t inputSize)
DECL|LTC_HASH|function|status_t LTC_HASH(LTC_Type *base, ltc_hash_algo_t algo, const uint8_t *input, uint32_t inputSize, const uint8_t *key,
DECL|LTC_Init|function|void LTC_Init(LTC_Type *base)
DECL|LTC_MDPK_ALG_PKHA|macro|LTC_MDPK_ALG_PKHA
DECL|LTC_MD_ALG_AES|macro|LTC_MD_ALG_AES
DECL|LTC_MD_ALG_DES|macro|LTC_MD_ALG_DES
DECL|LTC_MD_ALG_SHA1|macro|LTC_MD_ALG_SHA1
DECL|LTC_MD_ALG_SHA224|macro|LTC_MD_ALG_SHA224
DECL|LTC_MD_ALG_SHA256|macro|LTC_MD_ALG_SHA256
DECL|LTC_MD_ALG_TRIPLE_DES|macro|LTC_MD_ALG_TRIPLE_DES
DECL|LTC_MD_AS_FINALIZE|macro|LTC_MD_AS_FINALIZE
DECL|LTC_MD_AS_INITIALIZE|macro|LTC_MD_AS_INITIALIZE
DECL|LTC_MD_AS_INIT_FINAL|macro|LTC_MD_AS_INIT_FINAL
DECL|LTC_MD_AS_UPDATE|macro|LTC_MD_AS_UPDATE
DECL|LTC_MD_ENC_DECRYPT|macro|LTC_MD_ENC_DECRYPT
DECL|LTC_MD_ENC_ENCRYPT|macro|LTC_MD_ENC_ENCRYPT
DECL|LTC_PKHA_CompareBigNum|function|int LTC_PKHA_CompareBigNum(const uint8_t *a, size_t sizeA, const uint8_t *b, size_t sizeB)
DECL|LTC_PKHA_ECC_PointAdd|function|status_t LTC_PKHA_ECC_PointAdd(LTC_Type *base, const ltc_pkha_ecc_point_t *A, const ltc_pkha_ecc_point_t *B, const uint8_t *N, const uint8_t *R2modN,
DECL|LTC_PKHA_ECC_PointDouble|function|status_t LTC_PKHA_ECC_PointDouble(LTC_Type *base, const ltc_pkha_ecc_point_t *B, const uint8_t *N, const uint8_t *aCurveParam, const uint8_t *bCurveParam,
DECL|LTC_PKHA_ECC_PointMul|function|status_t LTC_PKHA_ECC_PointMul(LTC_Type *base, const ltc_pkha_ecc_point_t *A, const uint8_t *E, uint8_t sizeE, const uint8_t *N,
DECL|LTC_PKHA_GCD|function|status_t LTC_PKHA_GCD(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *N, uint16_t sizeN,
DECL|LTC_PKHA_ModAdd|function|status_t LTC_PKHA_ModAdd(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *B, uint16_t sizeB,
DECL|LTC_PKHA_ModExp|function|status_t LTC_PKHA_ModExp(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *N, uint16_t sizeN,
DECL|LTC_PKHA_ModInv|function|status_t LTC_PKHA_ModInv(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *N, uint16_t sizeN,
DECL|LTC_PKHA_ModMul|function|status_t LTC_PKHA_ModMul(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *B, uint16_t sizeB,
DECL|LTC_PKHA_ModR2|function|status_t LTC_PKHA_ModR2( LTC_Type *base, const uint8_t *N, uint16_t sizeN, uint8_t *result, uint16_t *resultSize, ltc_pkha_f2m_t arithType)
DECL|LTC_PKHA_ModRed|function|status_t LTC_PKHA_ModRed(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *N, uint16_t sizeN,
DECL|LTC_PKHA_ModSub1|function|status_t LTC_PKHA_ModSub1(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *B, uint16_t sizeB,
DECL|LTC_PKHA_ModSub2|function|status_t LTC_PKHA_ModSub2(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *B, uint16_t sizeB,
DECL|LTC_PKHA_MontgomeryToNormal|function|status_t LTC_PKHA_MontgomeryToNormal(LTC_Type *base, const uint8_t *N, uint16_t sizeN, uint8_t *A, uint16_t *sizeA,
DECL|LTC_PKHA_NormalToMontgomery|function|status_t LTC_PKHA_NormalToMontgomery(LTC_Type *base, const uint8_t *N, uint16_t sizeN, uint8_t *A, uint16_t *sizeA,
DECL|LTC_PKHA_PrimalityTest|function|status_t LTC_PKHA_PrimalityTest(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *B, uint16_t sizeB,
DECL|LTC_SHA_BLOCK_SIZE|macro|LTC_SHA_BLOCK_SIZE
DECL|LTC_SetDpaMaskSeed|function|void LTC_SetDpaMaskSeed(LTC_Type *base, uint32_t mask)
DECL|_ltc_algorithm|enum|typedef enum _ltc_algorithm
DECL|_ltc_clear_written|enum|typedef enum _ltc_clear_written
DECL|_ltc_ctrl_swap|enum|enum _ltc_ctrl_swap
DECL|_ltc_hash_algo_state|enum|typedef enum _ltc_hash_algo_state
DECL|_ltc_hash_block|union|typedef union _ltc_hash_block
DECL|_ltc_hash_ctx_indexes|enum|typedef enum _ltc_hash_ctx_indexes
DECL|_ltc_hash_ctx_internal|struct|typedef struct _ltc_hash_ctx_internal
DECL|_ltc_md_dk_bit_shift|enum|enum _ltc_md_dk_bit_shift
DECL|_ltc_mode_algorithm_state|enum|typedef enum _ltc_mode_algorithm_state
DECL|_ltc_mode_encrypt|enum|typedef enum _ltc_mode_encrypt
DECL|_ltc_mode_symmetric_alg|enum|typedef enum _ltc_mode_symmetric_alg
DECL|_ltc_pkha_func_t|enum|typedef enum _ltc_pkha_func_t
DECL|_ltc_pkha_mode_params_t|struct|typedef struct _ltc_pkha_mode_params_t
DECL|_ltc_pkha_quad_area_t|enum|typedef enum _ltc_pkha_quad_area_t
DECL|_ltc_pkha_r2_t|enum|typedef enum _ltc_pkha_r2_t
DECL|_ltc_pkha_reg_area|enum|typedef enum _ltc_pkha_reg_area
DECL|_ltc_sha_digest_len|enum|enum _ltc_sha_digest_len
DECL|_ltc_status_flag|enum|enum _ltc_status_flag
DECL|_ltc_xcm_block_t|union|typedef union _ltc_xcm_block_t
DECL|aadsize_next|function|static void aadsize_next(LTC_Type *base, uint32_t aadSize, bool aad_only)
DECL|algo|member|ltc_hash_algo_t algo; /*!< selected algorithm from the set of supported algorithms in ltc_drv_hash_algo */
DECL|arithType|member|ltc_pkha_f2m_t arithType;
DECL|base|member|LTC_Type *base; /*!< LTC peripheral base address */
DECL|blksz|member|uint32_t blksz; /*!< number of valid bytes in memory buffer */
DECL|blk|member|ltc_hash_block_t blk; /*!< memory buffer. only full 64/16-byte blocks are written to LTC during hash updates */
DECL|b|member|uint8_t b[16]; /*!< 16 octets block for CCM B0 and CTR0 and for GCM */
DECL|b|member|uint8_t b[LTC_HASH_BLOCK_SIZE]; /*!< byte array */
DECL|dstQuad|member|ltc_pkha_quad_area_t dstQuad;
DECL|dstReg|member|ltc_pkha_reg_area_t dstReg;
DECL|equalTime|member|ltc_pkha_timing_t equalTime;
DECL|func|member|ltc_pkha_func_t func;
DECL|ivsize_next|function|static void ivsize_next(LTC_Type *base, uint32_t ivSize, bool iv_only)
DECL|kLTC_Algorithm3DES|enumerator|kLTC_Algorithm3DES = LTC_MD_ALG_TRIPLE_DES << LTC_MD_ALG_SHIFT,
DECL|kLTC_AlgorithmAES|enumerator|kLTC_AlgorithmAES = LTC_MD_ALG_AES << LTC_MD_ALG_SHIFT,
DECL|kLTC_AlgorithmDES|enumerator|kLTC_AlgorithmDES = LTC_MD_ALG_DES << LTC_MD_ALG_SHIFT,
DECL|kLTC_AlgorithmPKHA|enumerator|kLTC_AlgorithmPKHA = LTC_MDPK_ALG_PKHA << LTC_MD_ALG_SHIFT,
DECL|kLTC_AlgorithmSHA1|enumerator|kLTC_AlgorithmSHA1 = LTC_MD_ALG_SHA1 << LTC_MD_ALG_SHIFT,
DECL|kLTC_AlgorithmSHA224|enumerator|kLTC_AlgorithmSHA224 = LTC_MD_ALG_SHA224 << LTC_MD_ALG_SHIFT,
DECL|kLTC_AlgorithmSHA256|enumerator|kLTC_AlgorithmSHA256 = LTC_MD_ALG_SHA256 << LTC_MD_ALG_SHIFT,
DECL|kLTC_ClearAllSize|enumerator|kLTC_ClearAllSize = (int)kLTC_ClearPkhaSizeA | kLTC_ClearPkhaSizeB | kLTC_ClearPkhaSizeN | kLTC_ClearPkhaSizeE,
DECL|kLTC_ClearAll|enumerator|kLTC_ClearAll = (int)(LTC_CW_CM_MASK | LTC_CW_CDS_MASK | LTC_CW_CICV_MASK | LTC_CW_CCR_MASK | LTC_CW_CKR_MASK |
DECL|kLTC_ClearContext|enumerator|kLTC_ClearContext = 1U << LTC_CW_CCR_SHIFT,
DECL|kLTC_ClearDataSize|enumerator|kLTC_ClearDataSize = 1U << LTC_CW_CDS_SHIFT,
DECL|kLTC_ClearIcvSize|enumerator|kLTC_ClearIcvSize = 1U << LTC_CW_CICV_SHIFT,
DECL|kLTC_ClearInputFifo|enumerator|kLTC_ClearInputFifo = (int)(1U << LTC_CW_CIF_SHIFT),
DECL|kLTC_ClearKey|enumerator|kLTC_ClearKey = 1U << LTC_CW_CKR_SHIFT,
DECL|kLTC_ClearMode|enumerator|kLTC_ClearMode = 1U << LTC_CW_CM_SHIFT,
DECL|kLTC_ClearOutputFifo|enumerator|kLTC_ClearOutputFifo = 1U << LTC_CW_COF_SHIFT,
DECL|kLTC_ClearPkhaSizeA|enumerator|kLTC_ClearPkhaSizeA = 1U << LTC_CW_CPKA_SHIFT,
DECL|kLTC_ClearPkhaSizeB|enumerator|kLTC_ClearPkhaSizeB = 1U << LTC_CW_CPKB_SHIFT,
DECL|kLTC_ClearPkhaSizeE|enumerator|kLTC_ClearPkhaSizeE = 1U << LTC_CW_CPKE_SHIFT,
DECL|kLTC_ClearPkhaSizeN|enumerator|kLTC_ClearPkhaSizeN = 1U << LTC_CW_CPKN_SHIFT,
DECL|kLTC_CtrlSwapAll|enumerator|kLTC_CtrlSwapAll =
DECL|kLTC_HashCtxKeySize|enumerator|kLTC_HashCtxKeySize = 20, /*!< context word array index where key size is stored */
DECL|kLTC_HashCtxKeyStartIdx|enumerator|kLTC_HashCtxKeyStartIdx = 12, /*!< context word array index where key is stored */
DECL|kLTC_HashCtxNumWords|enumerator|kLTC_HashCtxNumWords = 21, /*!< number of context array 32-bit words */
DECL|kLTC_HashInit|enumerator|kLTC_HashInit = 1u, /*!< Key in the HASH context is the input key. */
DECL|kLTC_HashUpdate|enumerator|kLTC_HashUpdate, /*!< HASH context has algorithm specific context: MAC, K2 and K3 (XCBC-MAC), MAC and L (CMAC),
DECL|kLTC_ModeCBC|enumerator|kLTC_ModeCBC = 0x10U << LTC_MD_AAI_SHIFT,
DECL|kLTC_ModeCCM|enumerator|kLTC_ModeCCM = 0x80U << LTC_MD_AAI_SHIFT,
DECL|kLTC_ModeCFB|enumerator|kLTC_ModeCFB = 0x30U << LTC_MD_AAI_SHIFT,
DECL|kLTC_ModeCMAC|enumerator|kLTC_ModeCMAC = 0x60U << LTC_MD_AAI_SHIFT,
DECL|kLTC_ModeCTR|enumerator|kLTC_ModeCTR = 0x00U << LTC_MD_AAI_SHIFT,
DECL|kLTC_ModeDecrypt|enumerator|kLTC_ModeDecrypt = LTC_MD_ENC_DECRYPT << LTC_MD_ENC_SHIFT,
DECL|kLTC_ModeECB|enumerator|kLTC_ModeECB = 0x20U << LTC_MD_AAI_SHIFT,
DECL|kLTC_ModeEncrypt|enumerator|kLTC_ModeEncrypt = LTC_MD_ENC_ENCRYPT << LTC_MD_ENC_SHIFT,
DECL|kLTC_ModeFinalize|enumerator|kLTC_ModeFinalize = LTC_MD_AS_FINALIZE << LTC_MD_AS_SHIFT,
DECL|kLTC_ModeGCM|enumerator|kLTC_ModeGCM = 0x90U << LTC_MD_AAI_SHIFT,
DECL|kLTC_ModeInitFinal|enumerator|kLTC_ModeInitFinal = LTC_MD_AS_INIT_FINAL << LTC_MD_AS_SHIFT
DECL|kLTC_ModeInit|enumerator|kLTC_ModeInit = LTC_MD_AS_INITIALIZE << LTC_MD_AS_SHIFT,
DECL|kLTC_ModeOFB|enumerator|kLTC_ModeOFB = 0x40U << LTC_MD_AAI_SHIFT,
DECL|kLTC_ModeRegBitShiftDK|enumerator|kLTC_ModeRegBitShiftDK = 12U,
DECL|kLTC_ModeUpdate|enumerator|kLTC_ModeUpdate = LTC_MD_AS_UPDATE << LTC_MD_AS_SHIFT,
DECL|kLTC_ModeXCBCMAC|enumerator|kLTC_ModeXCBCMAC = 0x70U << LTC_MD_AAI_SHIFT,
DECL|kLTC_OutLenSha1|enumerator|kLTC_OutLenSha1 = 20u,
DECL|kLTC_OutLenSha224|enumerator|kLTC_OutLenSha224 = 28u,
DECL|kLTC_OutLenSha256|enumerator|kLTC_OutLenSha256 = 32u,
DECL|kLTC_PKHA_ArithEccAdd|enumerator|kLTC_PKHA_ArithEccAdd = 9U, /*!< (P1 + P2) */
DECL|kLTC_PKHA_ArithEccDouble|enumerator|kLTC_PKHA_ArithEccDouble = 10U, /*!< (P2 + P2) */
DECL|kLTC_PKHA_ArithEccMul|enumerator|kLTC_PKHA_ArithEccMul = 11U, /*!< (E x P1) */
DECL|kLTC_PKHA_ArithGcd|enumerator|kLTC_PKHA_ArithGcd = 14U, /*!< GCD (A, N) */
DECL|kLTC_PKHA_ArithModAdd|enumerator|kLTC_PKHA_ArithModAdd = 2U, /*!< (A + B) mod N */
DECL|kLTC_PKHA_ArithModExp|enumerator|kLTC_PKHA_ArithModExp = 6U, /*!< (A^E) mod N */
DECL|kLTC_PKHA_ArithModInv|enumerator|kLTC_PKHA_ArithModInv = 8U, /*!< (A^-1) mod N */
DECL|kLTC_PKHA_ArithModMul|enumerator|kLTC_PKHA_ArithModMul = 5U, /*!< (A x B) mod N */
DECL|kLTC_PKHA_ArithModR2|enumerator|kLTC_PKHA_ArithModR2 = 12U, /*!< (R^2 mod N) */
DECL|kLTC_PKHA_ArithModRed|enumerator|kLTC_PKHA_ArithModRed = 7U, /*!< (A) mod N */
DECL|kLTC_PKHA_ArithModSub1|enumerator|kLTC_PKHA_ArithModSub1 = 3U, /*!< (A - B) mod N */
DECL|kLTC_PKHA_ArithModSub2|enumerator|kLTC_PKHA_ArithModSub2 = 4U, /*!< (B - A) mod N */
DECL|kLTC_PKHA_ArithPrimalityTest|enumerator|kLTC_PKHA_ArithPrimalityTest = 15U, /*!< Miller-Rabin */
DECL|kLTC_PKHA_CalcR2|enumerator|kLTC_PKHA_CalcR2 = 0U, /*!< Calculate (R^2 mod N) */
DECL|kLTC_PKHA_ClearMem|enumerator|kLTC_PKHA_ClearMem = 1U,
DECL|kLTC_PKHA_CopyMemSizeN|enumerator|kLTC_PKHA_CopyMemSizeN = 16U,
DECL|kLTC_PKHA_CopyMemSizeSrc|enumerator|kLTC_PKHA_CopyMemSizeSrc = 17U,
DECL|kLTC_PKHA_InputR2|enumerator|kLTC_PKHA_InputR2 = 1U /*!< (R^2 mod N) supplied as input */
DECL|kLTC_PKHA_Quad0|enumerator|kLTC_PKHA_Quad0 = 0U,
DECL|kLTC_PKHA_Quad1|enumerator|kLTC_PKHA_Quad1 = 1U,
DECL|kLTC_PKHA_Quad2|enumerator|kLTC_PKHA_Quad2 = 2U,
DECL|kLTC_PKHA_Quad3|enumerator|kLTC_PKHA_Quad3 = 3U,
DECL|kLTC_PKHA_RegAll|enumerator|kLTC_PKHA_RegAll = kLTC_PKHA_RegA | kLTC_PKHA_RegB | kLTC_PKHA_RegE | kLTC_PKHA_RegN,
DECL|kLTC_PKHA_RegA|enumerator|kLTC_PKHA_RegA = 8U,
DECL|kLTC_PKHA_RegB|enumerator|kLTC_PKHA_RegB = 4U,
DECL|kLTC_PKHA_RegE|enumerator|kLTC_PKHA_RegE = 2U,
DECL|kLTC_PKHA_RegN|enumerator|kLTC_PKHA_RegN = 1U,
DECL|kLTC_RunLenSha1|enumerator|kLTC_RunLenSha1 = 28u,
DECL|kLTC_RunLenSha224|enumerator|kLTC_RunLenSha224 = 40u,
DECL|kLTC_RunLenSha256|enumerator|kLTC_RunLenSha256 = 40u,
DECL|kLTC_StatusAesBusy|enumerator|kLTC_StatusAesBusy = 1U << LTC_STA_AB_SHIFT,
DECL|kLTC_StatusAll|enumerator|kLTC_StatusAll = LTC_STA_AB_MASK |
DECL|kLTC_StatusDesBusy|enumerator|kLTC_StatusDesBusy = 1U << LTC_STA_DB_SHIFT,
DECL|kLTC_StatusDoneIsr|enumerator|kLTC_StatusDoneIsr = 1U << LTC_STA_DI_SHIFT,
DECL|kLTC_StatusErrorIsr|enumerator|kLTC_StatusErrorIsr = 1U << LTC_STA_EI_SHIFT,
DECL|kLTC_StatusMdhaBusy|enumerator|kLTC_StatusMdhaBusy = 1U << LTC_STA_MB_SHIFT,
DECL|kLTC_StatusPkhaBusy|enumerator|kLTC_StatusPkhaBusy = 1U << LTC_STA_PB_SHIFT,
DECL|kLTC_StatusPublicKeyOpOne|enumerator|kLTC_StatusPublicKeyOpOne = 1U << LTC_STA_PKO_SHIFT,
DECL|kLTC_StatusPublicKeyOpZero|enumerator|kLTC_StatusPublicKeyOpZero = 1U << LTC_STA_PKZ_SHIFT,
DECL|kLTC_StatusPublicKeyPrime|enumerator|kLTC_StatusPublicKeyPrime = 1U << LTC_STA_PKP_SHIFT,
DECL|ltc_3des_check_input_args|function|status_t ltc_3des_check_input_args(ltc_mode_symmetric_alg_t modeAs, uint32_t size, const uint8_t *key1, const uint8_t *key2)
DECL|ltc_3des_process|function|static status_t ltc_3des_process(LTC_Type *base, const uint8_t *input, uint8_t *output, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|ltc_aes_ccm_check_input_args|function|static status_t ltc_aes_ccm_check_input_args(LTC_Type *base, const uint8_t *src, const uint8_t *iv, const uint8_t *key, uint8_t *dst,
DECL|ltc_aes_ccm_context_init|function|static void ltc_aes_ccm_context_init( LTC_Type *base, uint32_t inputSize, const uint8_t *iv, uint32_t ivSize, uint32_t aadSize, uint32_t tagSize)
DECL|ltc_aes_ccm_process_aad|function|static status_t ltc_aes_ccm_process_aad( LTC_Type *base, uint32_t inputSize, const uint8_t *aad, uint32_t aadSize, ltc_mode_t *modeReg)
DECL|ltc_aes_ccm_process|function|static status_t ltc_aes_ccm_process(LTC_Type *base, ltc_mode_encrypt_t encryptMode, const uint8_t *src, uint32_t inputSize, const uint8_t *iv,
DECL|ltc_aes_decrypt_ecb|function|static status_t ltc_aes_decrypt_ecb(LTC_Type *base, const uint8_t *ciphertext, uint8_t *plaintext, uint32_t size, const uint8_t *key,
DECL|ltc_aes_gcm_check_input_args|function|static status_t ltc_aes_gcm_check_input_args(LTC_Type *base, const uint8_t *src, const uint8_t *iv, const uint8_t *aad, const uint8_t *key,
DECL|ltc_aes_gcm_process_iv_aad|function|static status_t ltc_aes_gcm_process_iv_aad( LTC_Type *base, const uint8_t *iv, uint32_t ivSize, ltc_mode_t modeReg, bool iv_only, int type, ltc_mode_t modeLast)
DECL|ltc_aes_gcm_process|function|static status_t ltc_aes_gcm_process(LTC_Type *base, ltc_mode_encrypt_t encryptMode, const uint8_t *src, uint32_t inputSize, const uint8_t *iv,
DECL|ltc_aes_process_tag|function|static status_t ltc_aes_process_tag(LTC_Type *base, uint8_t *tag, uint32_t tagSize, ltc_mode_t modeReg, uint32_t ctx)
DECL|ltc_aes_received_mac_compare|function|static status_t ltc_aes_received_mac_compare(LTC_Type *base, const uint8_t *tag, uint32_t tagSize, ltc_mode_t modeReg)
DECL|ltc_algorithm_t|typedef|} ltc_algorithm_t;
DECL|ltc_check_key_size|function|bool ltc_check_key_size(const uint32_t keySize)
DECL|ltc_clear_all|function|void ltc_clear_all(LTC_Type *base, bool addPKHA)
DECL|ltc_clear_written_t|typedef|} ltc_clear_written_t;
DECL|ltc_des_process|function|static status_t ltc_des_process(LTC_Type *base, const uint8_t *input, uint8_t *output, uint32_t size, const uint8_t iv[LTC_DES_IV_SIZE],
DECL|ltc_get_context|function|status_t ltc_get_context(LTC_Type *base, uint8_t *dest, uint8_t dataSize, uint8_t startIndex)
DECL|ltc_get_key|function|static status_t ltc_get_key(LTC_Type *base, uint8_t *key, uint8_t keySize)
DECL|ltc_get_word_from_unaligned|function|static inline uint32_t ltc_get_word_from_unaligned(const uint8_t *srcAddr)
DECL|ltc_hash_alg_is_cmac|function|static inline bool ltc_hash_alg_is_cmac(ltc_hash_algo_t algo)
DECL|ltc_hash_alg_is_sha|function|static inline bool ltc_hash_alg_is_sha(ltc_hash_algo_t algo)
DECL|ltc_hash_algo2mode|function|static uint32_t ltc_hash_algo2mode(ltc_hash_algo_t algo, ltc_mode_algorithm_state_t asMode, uint32_t *algOutSize)
DECL|ltc_hash_algo_state_t|typedef|} ltc_hash_algo_state_t;
DECL|ltc_hash_block_to_ififo|function|static void ltc_hash_block_to_ififo(LTC_Type *base, const ltc_hash_block_t *blk, uint32_t numBytes, uint32_t blockSize)
DECL|ltc_hash_block_t|typedef|} ltc_hash_block_t;
DECL|ltc_hash_check_context|function|static status_t ltc_hash_check_context(ltc_hash_ctx_internal_t *ctxInternal, const uint8_t *data)
DECL|ltc_hash_check_input_alg|function|static status_t ltc_hash_check_input_alg(ltc_hash_algo_t algo)
DECL|ltc_hash_check_input_args|function|static status_t ltc_hash_check_input_args( LTC_Type *base, ltc_hash_ctx_t *ctx, ltc_hash_algo_t algo, const uint8_t *key, uint32_t keySize)
DECL|ltc_hash_ctx_indexes|typedef|} ltc_hash_ctx_indexes;
DECL|ltc_hash_ctx_internal_t|typedef|} ltc_hash_ctx_internal_t;
DECL|ltc_hash_engine_init|function|static void ltc_hash_engine_init(ltc_hash_ctx_internal_t *ctx)
DECL|ltc_hash_get_block_size|function|static uint32_t ltc_hash_get_block_size(ltc_hash_algo_t algo)
DECL|ltc_hash_merge_and_flush_buf|function|static status_t ltc_hash_merge_and_flush_buf(ltc_hash_ctx_internal_t *ctx, const uint8_t *input, uint32_t inputSize, ltc_mode_t modeReg, uint32_t blockSize,
DECL|ltc_hash_move_rest_to_context|function|static status_t ltc_hash_move_rest_to_context( ltc_hash_ctx_internal_t *ctx, const uint8_t *data, uint32_t dataSize, ltc_mode_t modeReg, uint32_t blockSize)
DECL|ltc_hash_move_to_ififo|function|static void ltc_hash_move_to_ififo(ltc_hash_ctx_internal_t *ctx, const uint8_t *data, uint32_t dataSize, uint32_t blockSize)
DECL|ltc_hash_prepare_context_switch|function|static void ltc_hash_prepare_context_switch(LTC_Type *base)
DECL|ltc_hash_process_input_data|function|static status_t ltc_hash_process_input_data(ltc_hash_ctx_internal_t *ctx, const uint8_t *input, uint32_t inputSize, ltc_mode_t modeReg)
DECL|ltc_hash_restore_context|function|static void ltc_hash_restore_context(ltc_hash_ctx_internal_t *ctx)
DECL|ltc_hash_save_context|function|static void ltc_hash_save_context(ltc_hash_ctx_internal_t *ctx)
DECL|ltc_memcpy|function|void ltc_memcpy(void *dst, const void *src, size_t size)
DECL|ltc_mode_algorithm_state_t|typedef|} ltc_mode_algorithm_state_t;
DECL|ltc_mode_encrypt_t|typedef|} ltc_mode_encrypt_t;
DECL|ltc_mode_symmetric_alg_t|typedef|} ltc_mode_symmetric_alg_t;
DECL|ltc_mode_t|typedef|typedef uint32_t ltc_mode_t;
DECL|ltc_move_block_to_ififo|function|static void ltc_move_block_to_ififo(LTC_Type *base, const ltc_xcm_block_t *blk, uint32_t num_bytes)
DECL|ltc_move_to_ififo|function|static void ltc_move_to_ififo(LTC_Type *base, const uint8_t *data, uint32_t dataSize)
DECL|ltc_pkha_clear_regabne|function|static status_t ltc_pkha_clear_regabne(LTC_Type *base, bool A, bool B, bool N, bool E)
DECL|ltc_pkha_default_parms|function|static void ltc_pkha_default_parms(ltc_pkha_mode_params_t *params)
DECL|ltc_pkha_func_t|typedef|} ltc_pkha_func_t;
DECL|ltc_pkha_init_data|function|static void ltc_pkha_init_data(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *B, uint16_t sizeB,
DECL|ltc_pkha_init_mode|function|static status_t ltc_pkha_init_mode(LTC_Type *base, const ltc_pkha_mode_params_t *params)
DECL|ltc_pkha_modR2|function|static status_t ltc_pkha_modR2( LTC_Type *base, const uint8_t *N, uint16_t sizeN, uint8_t *result, uint16_t *resultSize, ltc_pkha_f2m_t arithType)
DECL|ltc_pkha_mode_params_t|typedef|} ltc_pkha_mode_params_t;
DECL|ltc_pkha_mode_set_dst_reg_copy|function|static void ltc_pkha_mode_set_dst_reg_copy(ltc_mode_t *outMode, ltc_pkha_reg_area_t reg)
DECL|ltc_pkha_mode_set_dst_seg_copy|function|static void ltc_pkha_mode_set_dst_seg_copy(ltc_mode_t *outMode, const ltc_pkha_quad_area_t quad)
DECL|ltc_pkha_mode_set_src_reg_copy|function|static void ltc_pkha_mode_set_src_reg_copy(ltc_mode_t *outMode, ltc_pkha_reg_area_t reg)
DECL|ltc_pkha_mode_set_src_seg_copy|function|static void ltc_pkha_mode_set_src_seg_copy(ltc_mode_t *outMode, const ltc_pkha_quad_area_t quad)
DECL|ltc_pkha_modmul|function|static status_t ltc_pkha_modmul(LTC_Type *base, const uint8_t *A, uint16_t sizeA, const uint8_t *B, uint16_t sizeB,
DECL|ltc_pkha_quad_area_t|typedef|} ltc_pkha_quad_area_t;
DECL|ltc_pkha_r2_t|typedef|} ltc_pkha_r2_t;
DECL|ltc_pkha_read_reg|function|static void ltc_pkha_read_reg(LTC_Type *base, ltc_pkha_reg_area_t reg, uint8_t quad, uint8_t *data, uint16_t dataSize)
DECL|ltc_pkha_read_word|function|static uint32_t ltc_pkha_read_word(LTC_Type *base, ltc_pkha_reg_area_t reg, uint8_t index)
DECL|ltc_pkha_reg_area_t|typedef|} ltc_pkha_reg_area_t;
DECL|ltc_pkha_write_reg|function|static status_t ltc_pkha_write_reg( LTC_Type *base, ltc_pkha_reg_area_t reg, uint8_t quad, const uint8_t *data, uint16_t dataSize)
DECL|ltc_pkha_write_word|function|static void ltc_pkha_write_word(LTC_Type *base, ltc_pkha_reg_area_t reg, uint8_t index, uint32_t data)
DECL|ltc_process_message_in_sessions|function|static status_t ltc_process_message_in_sessions(LTC_Type *base, const uint8_t *inData, uint32_t inSize, uint8_t *outData)
DECL|ltc_set_context|function|status_t ltc_set_context(LTC_Type *base, const uint8_t *data, uint8_t dataSize, uint8_t startIndex)
DECL|ltc_set_key|function|static status_t ltc_set_key(LTC_Type *base, const uint8_t *key, uint8_t keySize)
DECL|ltc_set_unaligned_from_word|function|static inline void ltc_set_unaligned_from_word(uint32_t srcWord, uint8_t *dstAddr)
DECL|ltc_symmetric_alg_state|function|static status_t ltc_symmetric_alg_state(LTC_Type *base, const uint8_t *key, uint8_t keySize, ltc_algorithm_t alg, ltc_mode_symmetric_alg_t mode,
DECL|ltc_symmetric_final|function|static status_t ltc_symmetric_final(LTC_Type *base, const uint8_t *key, uint8_t keySize, ltc_algorithm_t alg, ltc_mode_symmetric_alg_t mode,
DECL|ltc_symmetric_init_final|function|static status_t ltc_symmetric_init_final(LTC_Type *base, const uint8_t *key, uint8_t keySize, ltc_algorithm_t alg, ltc_mode_symmetric_alg_t mode,
DECL|ltc_symmetric_init|function|static status_t ltc_symmetric_init(LTC_Type *base, const uint8_t *key, uint8_t keySize, ltc_algorithm_t alg, ltc_mode_symmetric_alg_t mode,
DECL|ltc_symmetric_process_data_multiple|function|static status_t ltc_symmetric_process_data_multiple(LTC_Type *base, const uint8_t *inData, uint32_t inSize, uint8_t *outData, ltc_mode_t modeReg,
DECL|ltc_symmetric_process_data|function|status_t ltc_symmetric_process_data(LTC_Type *base, const uint8_t *inData, uint32_t inSize, uint8_t *outData)
DECL|ltc_symmetric_process|function|void ltc_symmetric_process(LTC_Type *base, uint32_t inSize, const uint8_t **inData, uint8_t **outData)
DECL|ltc_symmetric_update|function|status_t ltc_symmetric_update(LTC_Type *base, const uint8_t *key, uint8_t keySize, ltc_algorithm_t alg, ltc_mode_symmetric_alg_t mode,
DECL|ltc_wait|function|status_t ltc_wait(LTC_Type *base)
DECL|ltc_xcm_block_t|typedef|} ltc_xcm_block_t;
DECL|montFormIn|member|ltc_pkha_montgomery_form_t montFormIn;
DECL|montFormOut|member|ltc_pkha_montgomery_form_t montFormOut;
DECL|r2modn|member|ltc_pkha_r2_t r2modn;
DECL|srcQuad|member|ltc_pkha_quad_area_t srcQuad;
DECL|srcReg|member|ltc_pkha_reg_area_t srcReg;
DECL|state|member|ltc_hash_algo_state_t state; /*!< finite machine state of the hash software process */
DECL|swap_bytes|function|static uint32_t swap_bytes(uint32_t in)
DECL|word|member|uint32_t word[kLTC_HashCtxNumWords]; /*!< LTC module context that needs to be saved/restored between LTC jobs */
DECL|w|member|uint32_t w[4]; /*!< LTC context register is 16 bytes written as four 32-bit words */
DECL|w|member|uint32_t w[LTC_HASH_BLOCK_SIZE / 4]; /*!< array of 32-bit words */
