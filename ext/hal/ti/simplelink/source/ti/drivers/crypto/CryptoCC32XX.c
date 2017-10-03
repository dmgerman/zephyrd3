DECL|CryptoCC32XX_CONTEXT_READY_MAX_COUNTER|macro|CryptoCC32XX_CONTEXT_READY_MAX_COUNTER
DECL|CryptoCC32XX_HmacParams_init|function|void CryptoCC32XX_HmacParams_init(CryptoCC32XX_HmacParams *params)
DECL|CryptoCC32XX_HwiPTable|variable|CryptoCC32XX_HwiPTable
DECL|CryptoCC32XX_HwiP|struct|typedef struct CryptoCC32XX_HwiP {
DECL|CryptoCC32XX_HwiP|typedef|} CryptoCC32XX_HwiP;
DECL|CryptoCC32XX_SHAMD5GetSignatureSize|macro|CryptoCC32XX_SHAMD5GetSignatureSize
DECL|CryptoCC32XX_SHAMD5Signature|typedef|typedef int8_t CryptoCC32XX_SHAMD5Signature[SHAMD5_SIGNATURE_MAX_LEN];
DECL|CryptoCC32XX_SHAMD5_SIGNATURE_LEN_MD5|macro|CryptoCC32XX_SHAMD5_SIGNATURE_LEN_MD5
DECL|CryptoCC32XX_SHAMD5_SIGNATURE_LEN_SHA1|macro|CryptoCC32XX_SHAMD5_SIGNATURE_LEN_SHA1
DECL|CryptoCC32XX_SHAMD5_SIGNATURE_LEN_SHA224|macro|CryptoCC32XX_SHAMD5_SIGNATURE_LEN_SHA224
DECL|CryptoCC32XX_SHAMD5_SIGNATURE_LEN_SHA256|macro|CryptoCC32XX_SHAMD5_SIGNATURE_LEN_SHA256
DECL|CryptoCC32XX_aesIntHandler|function|void CryptoCC32XX_aesIntHandler(void)
DECL|CryptoCC32XX_aesProcess|function|int32_t CryptoCC32XX_aesProcess(uint32_t cryptoMode , uint32_t cryptoDirection, uint8_t *pInBuff, uint16_t inLen, uint8_t *pOutBuff , CryptoCC32XX_EncryptParams *pParams)
DECL|CryptoCC32XX_close|function|void CryptoCC32XX_close(CryptoCC32XX_Handle handle)
DECL|CryptoCC32XX_decrypt|function|int32_t CryptoCC32XX_decrypt(CryptoCC32XX_Handle handle, CryptoCC32XX_EncryptMethod method , void *pInBuff, size_t inLen, void *pOutBuff , size_t *outLen , CryptoCC32XX_EncryptParams *pParams)
DECL|CryptoCC32XX_desIntHandler|function|void CryptoCC32XX_desIntHandler(void)
DECL|CryptoCC32XX_desProcess|function|int32_t CryptoCC32XX_desProcess(uint32_t cryptoMode , uint32_t cryptoDirection, uint8_t *pInBuff, uint16_t inLen, uint8_t *pOutBuff , CryptoCC32XX_EncryptParams *pParams)
DECL|CryptoCC32XX_encrypt|function|int32_t CryptoCC32XX_encrypt(CryptoCC32XX_Handle handle, CryptoCC32XX_EncryptMethod method , void *pInBuff, size_t inLen, void *pOutBuff , size_t *outLen , CryptoCC32XX_EncryptParams *pParams)
DECL|CryptoCC32XX_getAesKeySize|macro|CryptoCC32XX_getAesKeySize
DECL|CryptoCC32XX_getDesKeySize|macro|CryptoCC32XX_getDesKeySize
DECL|CryptoCC32XX_getMode|macro|CryptoCC32XX_getMode
DECL|CryptoCC32XX_init|function|void CryptoCC32XX_init(void)
DECL|CryptoCC32XX_open|function|CryptoCC32XX_Handle CryptoCC32XX_open(uint32_t index, uint32_t types)
DECL|CryptoCC32XX_register|function|HwiP_Handle CryptoCC32XX_register(CryptoCC32XX_Handle handle, CryptoCC32XX_HwiP *hwiP)
DECL|CryptoCC32XX_shamd5IntHandler|function|void CryptoCC32XX_shamd5IntHandler(void)
DECL|CryptoCC32XX_shamd5Process|function|int32_t CryptoCC32XX_shamd5Process(uint32_t cryptoMode , uint8_t *pBuff, uint32_t len, uint8_t *pSignature, CryptoCC32XX_HmacParams *pParams)
DECL|CryptoCC32XX_sign|function|int32_t CryptoCC32XX_sign(CryptoCC32XX_Handle handle, CryptoCC32XX_HmacMethod method , void *pBuff, size_t len, uint8_t *pSignature, CryptoCC32XX_HmacParams *pParams)
DECL|CryptoCC32XX_unregister|function|void CryptoCC32XX_unregister(HwiP_Handle handle)
DECL|CryptoCC32XX_verify|function|int32_t CryptoCC32XX_verify(CryptoCC32XX_Handle handle, CryptoCC32XX_HmacMethod method , void *pBuff, size_t len, uint8_t *pSignature, CryptoCC32XX_HmacParams *pParams)
DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|SHAMD5_SIGNATURE_MAX_LEN|macro|SHAMD5_SIGNATURE_MAX_LEN
DECL|g_bAESReadyFlag|variable|g_bAESReadyFlag
DECL|g_bDESReadyFlag|variable|g_bDESReadyFlag
DECL|g_bSHAMD5ReadyFlag|variable|g_bSHAMD5ReadyFlag
DECL|hwiIntFxn|member|HwiP_Fxn hwiIntFxn;
DECL|intNum|member|uint32_t intNum;
DECL|intPriority|member|uint32_t intPriority;
