DECL|CRYP_CLEARFLAG_CCF|macro|CRYP_CLEARFLAG_CCF
DECL|CRYP_CLEARFLAG_RDERR|macro|CRYP_CLEARFLAG_RDERR
DECL|CRYP_CLEARFLAG_WRERR|macro|CRYP_CLEARFLAG_WRERR
DECL|CRYP_CR_ALGOMODE_AES_CBC_ENCRYPT|macro|CRYP_CR_ALGOMODE_AES_CBC_ENCRYPT
DECL|CRYP_CR_ALGOMODE_AES_CBC_KEYDERDECRYPT|macro|CRYP_CR_ALGOMODE_AES_CBC_KEYDERDECRYPT
DECL|CRYP_CR_ALGOMODE_AES_CTR_DECRYPT|macro|CRYP_CR_ALGOMODE_AES_CTR_DECRYPT
DECL|CRYP_CR_ALGOMODE_AES_CTR_ENCRYPT|macro|CRYP_CR_ALGOMODE_AES_CTR_ENCRYPT
DECL|CRYP_CR_ALGOMODE_AES_ECB_ENCRYPT|macro|CRYP_CR_ALGOMODE_AES_ECB_ENCRYPT
DECL|CRYP_CR_ALGOMODE_AES_ECB_KEYDERDECRYPT|macro|CRYP_CR_ALGOMODE_AES_ECB_KEYDERDECRYPT
DECL|CRYP_CR_ALGOMODE_DIRECTION|macro|CRYP_CR_ALGOMODE_DIRECTION
DECL|CRYP_DATATYPE_16B|macro|CRYP_DATATYPE_16B
DECL|CRYP_DATATYPE_1B|macro|CRYP_DATATYPE_1B
DECL|CRYP_DATATYPE_32B|macro|CRYP_DATATYPE_32B
DECL|CRYP_DATATYPE_8B|macro|CRYP_DATATYPE_8B
DECL|CRYP_FLAG_CCF|macro|CRYP_FLAG_CCF
DECL|CRYP_FLAG_RDERR|macro|CRYP_FLAG_RDERR
DECL|CRYP_FLAG_WRERR|macro|CRYP_FLAG_WRERR
DECL|CRYP_HandleTypeDef|typedef|}CRYP_HandleTypeDef;
DECL|CRYP_IT_CC|macro|CRYP_IT_CC
DECL|CRYP_IT_ERR|macro|CRYP_IT_ERR
DECL|CRYP_InitTypeDef|typedef|}CRYP_InitTypeDef;
DECL|CrypInCount|member|__IO uint16_t CrypInCount; /*!< Counter of inputed data */
DECL|CrypOutCount|member|__IO uint16_t CrypOutCount; /*!< Counter of outputed data */
DECL|DataType|member|uint32_t DataType; /*!< 32-bit data, 16-bit data, 8-bit data or 1-bit string.
DECL|HAL_CRYP_PHASE_PROCESS|enumerator|HAL_CRYP_PHASE_PROCESS = 0x02U, /*!< CRYP peripheral is in processing phase */
DECL|HAL_CRYP_PHASE_READY|enumerator|HAL_CRYP_PHASE_READY = 0x01U, /*!< CRYP peripheral is ready for initialization. */
DECL|HAL_CRYP_STATETypeDef|typedef|}HAL_CRYP_STATETypeDef;
DECL|HAL_CRYP_STATE_BUSY|enumerator|HAL_CRYP_STATE_BUSY = 0x02U, /*!< CRYP internal processing is ongoing */
DECL|HAL_CRYP_STATE_ERROR|enumerator|HAL_CRYP_STATE_ERROR = 0x04U /*!< CRYP error state */
DECL|HAL_CRYP_STATE_READY|enumerator|HAL_CRYP_STATE_READY = 0x01U, /*!< CRYP initialized and ready for use */
DECL|HAL_CRYP_STATE_RESET|enumerator|HAL_CRYP_STATE_RESET = 0x00U, /*!< CRYP not yet initialized or disabled */
DECL|HAL_CRYP_STATE_TIMEOUT|enumerator|HAL_CRYP_STATE_TIMEOUT = 0x03U, /*!< CRYP timeout state */
DECL|HAL_PhaseTypeDef|typedef|}HAL_PhaseTypeDef;
DECL|IS_CRYP_DATATYPE|macro|IS_CRYP_DATATYPE
DECL|Init|member|CRYP_InitTypeDef Init; /*!< CRYP required parameters */
DECL|Instance|member|AES_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< CRYP locking object */
DECL|Phase|member|HAL_PhaseTypeDef Phase; /*!< CRYP peripheral phase */
DECL|State|member|__IO HAL_CRYP_STATETypeDef State; /*!< CRYP peripheral state */
DECL|Status|member|HAL_StatusTypeDef Status; /*!< CRYP peripheral status */
DECL|__HAL_CRYP_CLEAR_FLAG|macro|__HAL_CRYP_CLEAR_FLAG
DECL|__HAL_CRYP_CLEAR_IT|macro|__HAL_CRYP_CLEAR_IT
DECL|__HAL_CRYP_DISABLE_IT|macro|__HAL_CRYP_DISABLE_IT
DECL|__HAL_CRYP_DISABLE|macro|__HAL_CRYP_DISABLE
DECL|__HAL_CRYP_ENABLE_IT|macro|__HAL_CRYP_ENABLE_IT
DECL|__HAL_CRYP_ENABLE|macro|__HAL_CRYP_ENABLE
DECL|__HAL_CRYP_GET_FLAG|macro|__HAL_CRYP_GET_FLAG
DECL|__HAL_CRYP_GET_IT_SOURCE|macro|__HAL_CRYP_GET_IT_SOURCE
DECL|__HAL_CRYP_RESET_HANDLE_STATE|macro|__HAL_CRYP_RESET_HANDLE_STATE
DECL|__HAL_CRYP_SET_MODE|macro|__HAL_CRYP_SET_MODE
DECL|__STM32L0xx_HAL_CRYP_H|macro|__STM32L0xx_HAL_CRYP_H
DECL|hdmain|member|DMA_HandleTypeDef *hdmain; /*!< CRYP In DMA handle parameters */
DECL|hdmaout|member|DMA_HandleTypeDef *hdmaout; /*!< CRYP Out DMA handle parameters */
DECL|pCrypInBuffPtr|member|uint8_t *pCrypInBuffPtr; /*!< Pointer to CRYP processing (encryption, decryption,...) buffer */
DECL|pCrypOutBuffPtr|member|uint8_t *pCrypOutBuffPtr; /*!< Pointer to CRYP processing (encryption, decryption,...) buffer */
DECL|pInitVect|member|uint8_t* pInitVect; /*!< The initialization vector used also as initialization
DECL|pKey|member|uint8_t* pKey; /*!< The key used for encryption/decryption */
