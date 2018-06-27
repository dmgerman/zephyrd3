DECL|CRYP_AES_DISABLE|macro|CRYP_AES_DISABLE
DECL|CRYP_AES_ENABLE|macro|CRYP_AES_ENABLE
DECL|CRYP_ALGOMODE_DECRYPT|macro|CRYP_ALGOMODE_DECRYPT
DECL|CRYP_ALGOMODE_ENCRYPT|macro|CRYP_ALGOMODE_ENCRYPT
DECL|CRYP_ALGOMODE_KEYDERIVATION_DECRYPT|macro|CRYP_ALGOMODE_KEYDERIVATION_DECRYPT
DECL|CRYP_ALGOMODE_KEYDERIVATION|macro|CRYP_ALGOMODE_KEYDERIVATION
DECL|CRYP_ALGOMODE_TAG_GENERATION|macro|CRYP_ALGOMODE_TAG_GENERATION
DECL|CRYP_CCF_CLEAR|macro|CRYP_CCF_CLEAR
DECL|CRYP_CHAINMODE_AES_CBC|macro|CRYP_CHAINMODE_AES_CBC
DECL|CRYP_CHAINMODE_AES_CCM|macro|CRYP_CHAINMODE_AES_CCM
DECL|CRYP_CHAINMODE_AES_CMAC|macro|CRYP_CHAINMODE_AES_CMAC
DECL|CRYP_CHAINMODE_AES_CTR|macro|CRYP_CHAINMODE_AES_CTR
DECL|CRYP_CHAINMODE_AES_ECB|macro|CRYP_CHAINMODE_AES_ECB
DECL|CRYP_CHAINMODE_AES_GCM_GMAC|macro|CRYP_CHAINMODE_AES_GCM_GMAC
DECL|CRYP_DATATYPE_16B|macro|CRYP_DATATYPE_16B
DECL|CRYP_DATATYPE_1B|macro|CRYP_DATATYPE_1B
DECL|CRYP_DATATYPE_32B|macro|CRYP_DATATYPE_32B
DECL|CRYP_DATATYPE_8B|macro|CRYP_DATATYPE_8B
DECL|CRYP_DMAIN_DISABLE|macro|CRYP_DMAIN_DISABLE
DECL|CRYP_DMAIN_ENABLE|macro|CRYP_DMAIN_ENABLE
DECL|CRYP_DMAOUT_DISABLE|macro|CRYP_DMAOUT_DISABLE
DECL|CRYP_DMAOUT_ENABLE|macro|CRYP_DMAOUT_ENABLE
DECL|CRYP_ERR_CLEAR|macro|CRYP_ERR_CLEAR
DECL|CRYP_FINAL_PHASE|macro|CRYP_FINAL_PHASE
DECL|CRYP_FLAG_BUSY|macro|CRYP_FLAG_BUSY
DECL|CRYP_FLAG_CCF|macro|CRYP_FLAG_CCF
DECL|CRYP_FLAG_RDERR|macro|CRYP_FLAG_RDERR
DECL|CRYP_FLAG_WRERR|macro|CRYP_FLAG_WRERR
DECL|CRYP_GCMCMAC_FINAL_PHASE|macro|CRYP_GCMCMAC_FINAL_PHASE
DECL|CRYP_GCMCMAC_HEADER_PHASE|macro|CRYP_GCMCMAC_HEADER_PHASE
DECL|CRYP_GCM_INIT_PHASE|macro|CRYP_GCM_INIT_PHASE
DECL|CRYP_GCM_PAYLOAD_PHASE|macro|CRYP_GCM_PAYLOAD_PHASE
DECL|CRYP_HEADER_PHASE|macro|CRYP_HEADER_PHASE
DECL|CRYP_HandleTypeDef|typedef|}CRYP_HandleTypeDef;
DECL|CRYP_INIT_PHASE|macro|CRYP_INIT_PHASE
DECL|CRYP_IT_CCFIE|macro|CRYP_IT_CCFIE
DECL|CRYP_IT_CCF|macro|CRYP_IT_CCF
DECL|CRYP_IT_ERRIE|macro|CRYP_IT_ERRIE
DECL|CRYP_IT_RDERR|macro|CRYP_IT_RDERR
DECL|CRYP_IT_WRERR|macro|CRYP_IT_WRERR
DECL|CRYP_InitTypeDef|typedef|}CRYP_InitTypeDef;
DECL|CRYP_KEYSIZE_128B|macro|CRYP_KEYSIZE_128B
DECL|CRYP_KEYSIZE_256B|macro|CRYP_KEYSIZE_256B
DECL|CRYP_KEY_WRITE_DISABLE|macro|CRYP_KEY_WRITE_DISABLE
DECL|CRYP_KEY_WRITE_ENABLE|macro|CRYP_KEY_WRITE_ENABLE
DECL|CRYP_PAYLOAD_PHASE|macro|CRYP_PAYLOAD_PHASE
DECL|ChainingMode|member|uint32_t ChainingMode; /*!< AES chaining mode.
DECL|CompCpltCallback|member|void (* CompCpltCallback)( struct __CRYP_HandleTypeDef * hcryp); /*!< CRYP computation completion callback */
DECL|CrypInCount|member|uint32_t CrypInCount; /*!< Input data size in bytes or, after suspension, the remaining
DECL|CrypOutCount|member|uint32_t CrypOutCount; /*!< Output data size in bytes */
DECL|DataType|member|uint32_t DataType; /*!< 32-bit data, 16-bit data, 8-bit data or 1-bit string.
DECL|ErrorCallback|member|void (* ErrorCallback)( struct __CRYP_HandleTypeDef * hcryp); /*!< CRYP error callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< CRYP peripheral error code */
DECL|GCMCMACPhase|member|uint32_t GCMCMACPhase; /*!< Indicates the processing phase of the Galois Counter Mode (GCM),
DECL|HAL_CRYP_BUSY_ERROR|macro|HAL_CRYP_BUSY_ERROR
DECL|HAL_CRYP_COMPCPLT_CB_ID|enumerator|HAL_CRYP_COMPCPLT_CB_ID = 0x03U, /*!< CRYP computation completion callback ID */
DECL|HAL_CRYP_CallbackIDTypeDef|typedef|}HAL_CRYP_CallbackIDTypeDef;
DECL|HAL_CRYP_DMA_ERROR|macro|HAL_CRYP_DMA_ERROR
DECL|HAL_CRYP_ERROR_CB_ID|enumerator|HAL_CRYP_ERROR_CB_ID = 0x04U, /*!< CRYP error callback ID */
DECL|HAL_CRYP_ERROR_INVALID_CALLBACK|macro|HAL_CRYP_ERROR_INVALID_CALLBACK
DECL|HAL_CRYP_ERROR_NONE|macro|HAL_CRYP_ERROR_NONE
DECL|HAL_CRYP_INPUTCPLT_CB_ID|enumerator|HAL_CRYP_INPUTCPLT_CB_ID = 0x01U, /*!< CRYP input DMA transfer completion callback ID */
DECL|HAL_CRYP_MSPDEINIT_CB_ID|enumerator|HAL_CRYP_MSPDEINIT_CB_ID = 0x06U, /*!< CRYP MspDeInit callback ID */
DECL|HAL_CRYP_MSPINIT_CB_ID|enumerator|HAL_CRYP_MSPINIT_CB_ID = 0x05U, /*!< CRYP MspInit callback ID */
DECL|HAL_CRYP_OUTPUTCPLT_CB_ID|enumerator|HAL_CRYP_OUTPUTCPLT_CB_ID = 0x02U, /*!< CRYP output DMA transfer completion callback ID */
DECL|HAL_CRYP_PHASE_FINAL_OVER|enumerator|HAL_CRYP_PHASE_FINAL_OVER = 0x07, /*!< GCM/GMAC(/CMAC)(/CCM) final phase has been carried out */
DECL|HAL_CRYP_PHASE_HEADER_OVER|enumerator|HAL_CRYP_PHASE_HEADER_OVER = 0x05, /*!< GCM/GMAC(/CMAC)(/CCM) header phase has been carried out */
DECL|HAL_CRYP_PHASE_HEADER_SUSPENDED|enumerator|HAL_CRYP_PHASE_HEADER_SUSPENDED = 0x08, /*!< GCM/GMAC(/CMAC)(/CCM) header phase has been suspended */
DECL|HAL_CRYP_PHASE_INIT_OVER|enumerator|HAL_CRYP_PHASE_INIT_OVER = 0x04, /*!< GCM/GMAC(/CMAC)(/CCM) init phase has been carried out */
DECL|HAL_CRYP_PHASE_NOT_USED|enumerator|HAL_CRYP_PHASE_NOT_USED = 0x0a /*!< Phase is irrelevant to the current chaining mode */
DECL|HAL_CRYP_PHASE_PAYLOAD_OVER|enumerator|HAL_CRYP_PHASE_PAYLOAD_OVER = 0x06, /*!< GCM(/CCM) payload phase has been carried out */
DECL|HAL_CRYP_PHASE_PAYLOAD_SUSPENDED|enumerator|HAL_CRYP_PHASE_PAYLOAD_SUSPENDED = 0x09, /*!< GCM(/CCM) payload phase has been suspended */
DECL|HAL_CRYP_PHASE_PROCESS|enumerator|HAL_CRYP_PHASE_PROCESS = 0x02, /*!< CRYP peripheral is in processing phase */
DECL|HAL_CRYP_PHASE_READY|enumerator|HAL_CRYP_PHASE_READY = 0x01, /*!< CRYP peripheral is ready for initialization. */
DECL|HAL_CRYP_PHASE_START|enumerator|HAL_CRYP_PHASE_START = 0x03, /*!< CRYP peripheral has been initialized but
DECL|HAL_CRYP_READ_ERROR|macro|HAL_CRYP_READ_ERROR
DECL|HAL_CRYP_STATETypeDef|typedef|}HAL_CRYP_STATETypeDef;
DECL|HAL_CRYP_STATE_BUSY|enumerator|HAL_CRYP_STATE_BUSY = 0x02, /*!< CRYP internal processing is ongoing */
DECL|HAL_CRYP_STATE_ERROR|enumerator|HAL_CRYP_STATE_ERROR = 0x04, /*!< CRYP error state */
DECL|HAL_CRYP_STATE_READY|enumerator|HAL_CRYP_STATE_READY = 0x01, /*!< CRYP initialized and ready for use */
DECL|HAL_CRYP_STATE_RESET|enumerator|HAL_CRYP_STATE_RESET = 0x00, /*!< CRYP not yet initialized or disabled */
DECL|HAL_CRYP_STATE_SUSPENDED|enumerator|HAL_CRYP_STATE_SUSPENDED = 0x05 /*!< CRYP suspended */
DECL|HAL_CRYP_STATE_TIMEOUT|enumerator|HAL_CRYP_STATE_TIMEOUT = 0x03, /*!< CRYP timeout state */
DECL|HAL_CRYP_SUSPEND_NONE|enumerator|HAL_CRYP_SUSPEND_NONE = 0x00, /*!< CRYP peripheral suspension not requested */
DECL|HAL_CRYP_SUSPEND|enumerator|HAL_CRYP_SUSPEND = 0x01 /*!< CRYP peripheral suspension requested */
DECL|HAL_CRYP_WRITE_ERROR|macro|HAL_CRYP_WRITE_ERROR
DECL|HAL_PhaseTypeDef|typedef|}HAL_PhaseTypeDef;
DECL|HAL_SuspendTypeDef|typedef|}HAL_SuspendTypeDef;
DECL|HeaderSize|member|uint64_t HeaderSize; /*!< Header size in bytes */
DECL|Header|member|uint8_t* Header; /*!< Header used in GCM/GMAC, CMAC (when applicable) and CCM (when applicable) modes */
DECL|IS_CRYP_AES|macro|IS_CRYP_AES
DECL|IS_CRYP_ALGOMODE|macro|IS_CRYP_ALGOMODE
DECL|IS_CRYP_CHAINMODE|macro|IS_CRYP_CHAINMODE
DECL|IS_CRYP_CHAINMODE|macro|IS_CRYP_CHAINMODE
DECL|IS_CRYP_DATATYPE|macro|IS_CRYP_DATATYPE
DECL|IS_CRYP_DMAIN|macro|IS_CRYP_DMAIN
DECL|IS_CRYP_DMAOUT|macro|IS_CRYP_DMAOUT
DECL|IS_CRYP_GCMCMAC_PHASE|macro|IS_CRYP_GCMCMAC_PHASE
DECL|IS_CRYP_KEYSIZE|macro|IS_CRYP_KEYSIZE
DECL|IS_CRYP_WRITE|macro|IS_CRYP_WRITE
DECL|InCpltCallback|member|void (* InCpltCallback)( struct __CRYP_HandleTypeDef * hcryp); /*!< CRYP input DMA transfer completion callback */
DECL|Init|member|CRYP_InitTypeDef Init; /*!< CRYP initialization parameters */
DECL|Instance|member|AES_TypeDef *Instance; /*!< Register base address */
DECL|KeySize|member|uint32_t KeySize; /*!< 128 or 256-bit key length.
DECL|KeyWriteFlag|member|uint32_t KeyWriteFlag; /*!< Allows to bypass or not key write-up before decryption.
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< CRYP locking object */
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)( struct __CRYP_HandleTypeDef * hcryp); /*!< CRYP Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback)( struct __CRYP_HandleTypeDef * hcryp); /*!< CRYP Msp Init callback */
DECL|OperatingMode|member|uint32_t OperatingMode; /*!< AES operating mode.
DECL|OutCpltCallback|member|void (* OutCpltCallback)( struct __CRYP_HandleTypeDef * hcryp); /*!< CRYP output DMA transfer completion callback */
DECL|Phase|member|HAL_PhaseTypeDef Phase; /*!< CRYP peripheral processing phase for GCM, GMAC, CMAC (when applicable)
DECL|State|member|__IO HAL_CRYP_STATETypeDef State; /*!< CRYP peripheral state */
DECL|SuspendRequest|member|HAL_SuspendTypeDef SuspendRequest; /*!< CRYP peripheral suspension request flag */
DECL|__CRYP_HandleTypeDef|struct|typedef struct __CRYP_HandleTypeDef
DECL|__HAL_CRYP_CLEAR_FLAG|macro|__HAL_CRYP_CLEAR_FLAG
DECL|__HAL_CRYP_CLEAR_IT|macro|__HAL_CRYP_CLEAR_IT
DECL|__HAL_CRYP_DISABLE_IT|macro|__HAL_CRYP_DISABLE_IT
DECL|__HAL_CRYP_DISABLE|macro|__HAL_CRYP_DISABLE
DECL|__HAL_CRYP_ENABLE_IT|macro|__HAL_CRYP_ENABLE_IT
DECL|__HAL_CRYP_ENABLE|macro|__HAL_CRYP_ENABLE
DECL|__HAL_CRYP_GET_FLAG|macro|__HAL_CRYP_GET_FLAG
DECL|__HAL_CRYP_GET_IT_SOURCE|macro|__HAL_CRYP_GET_IT_SOURCE
DECL|__HAL_CRYP_GET_IT|macro|__HAL_CRYP_GET_IT
DECL|__HAL_CRYP_RESET_HANDLE_STATE|macro|__HAL_CRYP_RESET_HANDLE_STATE
DECL|__HAL_CRYP_RESET_HANDLE_STATE|macro|__HAL_CRYP_RESET_HANDLE_STATE
DECL|__HAL_CRYP_SET_CHAININGMODE|macro|__HAL_CRYP_SET_CHAININGMODE
DECL|__HAL_CRYP_SET_OPERATINGMODE|macro|__HAL_CRYP_SET_OPERATINGMODE
DECL|__STM32L4xx_HAL_CRYP_H|macro|__STM32L4xx_HAL_CRYP_H
DECL|hdmain|member|DMA_HandleTypeDef *hdmain; /*!< CRYP peripheral Input DMA handle parameters */
DECL|hdmaout|member|DMA_HandleTypeDef *hdmaout; /*!< CRYP peripheral Output DMA handle parameters */
DECL|pCRYP_CallbackTypeDef|typedef|typedef void (*pCRYP_CallbackTypeDef)(CRYP_HandleTypeDef * hcryp); /*!< pointer to a CRYP common callback functions */
DECL|pCrypInBuffPtr|member|uint8_t *pCrypInBuffPtr; /*!< Pointer to CRYP processing (encryption, decryption,...) input buffer */
DECL|pCrypOutBuffPtr|member|uint8_t *pCrypOutBuffPtr; /*!< Pointer to CRYP processing (encryption, decryption,...) output buffer */
DECL|pInitVect|member|uint8_t* pInitVect; /*!< Initialization Vector used for CTR, CBC, GCM/GMAC, CMAC (when applicable)
DECL|pKey|member|uint8_t* pKey; /*!< Encryption/Decryption Key */
