DECL|CRYP_CR_ALGOMODE_AES_CBC_DECRYPT|macro|CRYP_CR_ALGOMODE_AES_CBC_DECRYPT
DECL|CRYP_CR_ALGOMODE_AES_CBC_ENCRYPT|macro|CRYP_CR_ALGOMODE_AES_CBC_ENCRYPT
DECL|CRYP_CR_ALGOMODE_AES_CTR_DECRYPT|macro|CRYP_CR_ALGOMODE_AES_CTR_DECRYPT
DECL|CRYP_CR_ALGOMODE_AES_CTR_ENCRYPT|macro|CRYP_CR_ALGOMODE_AES_CTR_ENCRYPT
DECL|CRYP_CR_ALGOMODE_AES_ECB_DECRYPT|macro|CRYP_CR_ALGOMODE_AES_ECB_DECRYPT
DECL|CRYP_CR_ALGOMODE_AES_ECB_ENCRYPT|macro|CRYP_CR_ALGOMODE_AES_ECB_ENCRYPT
DECL|CRYP_CR_ALGOMODE_DES_CBC_DECRYPT|macro|CRYP_CR_ALGOMODE_DES_CBC_DECRYPT
DECL|CRYP_CR_ALGOMODE_DES_CBC_ENCRYPT|macro|CRYP_CR_ALGOMODE_DES_CBC_ENCRYPT
DECL|CRYP_CR_ALGOMODE_DES_ECB_DECRYPT|macro|CRYP_CR_ALGOMODE_DES_ECB_DECRYPT
DECL|CRYP_CR_ALGOMODE_DES_ECB_ENCRYPT|macro|CRYP_CR_ALGOMODE_DES_ECB_ENCRYPT
DECL|CRYP_CR_ALGOMODE_DIRECTION|macro|CRYP_CR_ALGOMODE_DIRECTION
DECL|CRYP_CR_ALGOMODE_TDES_CBC_DECRYPT|macro|CRYP_CR_ALGOMODE_TDES_CBC_DECRYPT
DECL|CRYP_CR_ALGOMODE_TDES_CBC_ENCRYPT|macro|CRYP_CR_ALGOMODE_TDES_CBC_ENCRYPT
DECL|CRYP_CR_ALGOMODE_TDES_ECB_DECRYPT|macro|CRYP_CR_ALGOMODE_TDES_ECB_DECRYPT
DECL|CRYP_CR_ALGOMODE_TDES_ECB_ENCRYPT|macro|CRYP_CR_ALGOMODE_TDES_ECB_ENCRYPT
DECL|CRYP_DATATYPE_16B|macro|CRYP_DATATYPE_16B
DECL|CRYP_DATATYPE_1B|macro|CRYP_DATATYPE_1B
DECL|CRYP_DATATYPE_32B|macro|CRYP_DATATYPE_32B
DECL|CRYP_DATATYPE_8B|macro|CRYP_DATATYPE_8B
DECL|CRYP_FLAG_BUSY|macro|CRYP_FLAG_BUSY
DECL|CRYP_FLAG_IFEM|macro|CRYP_FLAG_IFEM
DECL|CRYP_FLAG_IFNF|macro|CRYP_FLAG_IFNF
DECL|CRYP_FLAG_INRIS|macro|CRYP_FLAG_INRIS
DECL|CRYP_FLAG_MASK|macro|CRYP_FLAG_MASK
DECL|CRYP_FLAG_OFFU|macro|CRYP_FLAG_OFFU
DECL|CRYP_FLAG_OFNE|macro|CRYP_FLAG_OFNE
DECL|CRYP_FLAG_OUTRIS|macro|CRYP_FLAG_OUTRIS
DECL|CRYP_HandleTypeDef|typedef|}CRYP_HandleTypeDef;
DECL|CRYP_IT_INI|macro|CRYP_IT_INI
DECL|CRYP_IT_OUTI|macro|CRYP_IT_OUTI
DECL|CRYP_InitTypeDef|typedef|}CRYP_InitTypeDef;
DECL|CRYP_KEYSIZE_128B|macro|CRYP_KEYSIZE_128B
DECL|CRYP_KEYSIZE_192B|macro|CRYP_KEYSIZE_192B
DECL|CRYP_KEYSIZE_256B|macro|CRYP_KEYSIZE_256B
DECL|CrypInCount|member|__IO uint16_t CrypInCount; /*!< Counter of inputed data */
DECL|CrypOutCount|member|__IO uint16_t CrypOutCount; /*!< Counter of output data */
DECL|DataType|member|uint32_t DataType; /*!< 32-bit data, 16-bit data, 8-bit data or 1-bit string.
DECL|HAL_CRYP_PHASE_FINAL|enumerator|HAL_CRYP_PHASE_FINAL = 0x03U /*!< CRYP peripheral is in final phase
DECL|HAL_CRYP_PHASE_PROCESS|enumerator|HAL_CRYP_PHASE_PROCESS = 0x02U, /*!< CRYP peripheral is in processing phase */
DECL|HAL_CRYP_PHASE_READY|enumerator|HAL_CRYP_PHASE_READY = 0x01U, /*!< CRYP peripheral is ready for initialization. */
DECL|HAL_CRYP_STATETypeDef|typedef|}HAL_CRYP_STATETypeDef;
DECL|HAL_CRYP_STATE_BUSY|enumerator|HAL_CRYP_STATE_BUSY = 0x02U, /*!< CRYP internal processing is ongoing */
DECL|HAL_CRYP_STATE_ERROR|enumerator|HAL_CRYP_STATE_ERROR = 0x04U /*!< CRYP error state */
DECL|HAL_CRYP_STATE_READY|enumerator|HAL_CRYP_STATE_READY = 0x01U, /*!< CRYP initialized and ready for use */
DECL|HAL_CRYP_STATE_RESET|enumerator|HAL_CRYP_STATE_RESET = 0x00U, /*!< CRYP not yet initialized or disabled */
DECL|HAL_CRYP_STATE_TIMEOUT|enumerator|HAL_CRYP_STATE_TIMEOUT = 0x03U, /*!< CRYP timeout state */
DECL|HAL_PhaseTypeDef|typedef|}HAL_PhaseTypeDef;
DECL|HeaderSize|member|uint32_t HeaderSize; /*!< The size of header buffer in bytes */
DECL|Header|member|uint8_t* Header; /*!< The header used in GCM and CCM modes */
DECL|IS_CRYP_DATATYPE|macro|IS_CRYP_DATATYPE
DECL|IS_CRYP_KEYSIZE|macro|IS_CRYP_KEYSIZE
DECL|IVSize|member|uint8_t IVSize; /*!< The size of initialization vector.
DECL|Init|member|CRYP_InitTypeDef Init; /*!< CRYP required parameters */
DECL|Instance|member|CRYP_TypeDef *Instance; /*!< CRYP registers base address */
DECL|KeySize|member|uint32_t KeySize; /*!< Used only in AES mode only : 128, 192 or 256 bit key length.
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< CRYP locking object */
DECL|Phase|member|HAL_PhaseTypeDef Phase; /*!< CRYP peripheral phase */
DECL|State|member|__IO HAL_CRYP_STATETypeDef State; /*!< CRYP peripheral state */
DECL|Status|member|HAL_StatusTypeDef Status; /*!< CRYP peripheral status */
DECL|TagSize|member|uint8_t TagSize; /*!< The size of returned authentication TAG.
DECL|__HAL_CRYP_DISABLE_IT|macro|__HAL_CRYP_DISABLE_IT
DECL|__HAL_CRYP_DISABLE|macro|__HAL_CRYP_DISABLE
DECL|__HAL_CRYP_ENABLE_IT|macro|__HAL_CRYP_ENABLE_IT
DECL|__HAL_CRYP_ENABLE|macro|__HAL_CRYP_ENABLE
DECL|__HAL_CRYP_FIFO_FLUSH|macro|__HAL_CRYP_FIFO_FLUSH
DECL|__HAL_CRYP_GET_FLAG|macro|__HAL_CRYP_GET_FLAG
DECL|__HAL_CRYP_GET_IT|macro|__HAL_CRYP_GET_IT
DECL|__HAL_CRYP_RESET_HANDLE_STATE|macro|__HAL_CRYP_RESET_HANDLE_STATE
DECL|__HAL_CRYP_SET_MODE|macro|__HAL_CRYP_SET_MODE
DECL|__STM32F2xx_HAL_CRYP_H|macro|__STM32F2xx_HAL_CRYP_H
DECL|hdmain|member|DMA_HandleTypeDef *hdmain; /*!< CRYP In DMA handle parameters */
DECL|hdmaout|member|DMA_HandleTypeDef *hdmaout; /*!< CRYP Out DMA handle parameters */
DECL|pCrypInBuffPtr|member|uint8_t *pCrypInBuffPtr; /*!< Pointer to CRYP processing (encryption, decryption,...) buffer */
DECL|pCrypOutBuffPtr|member|uint8_t *pCrypOutBuffPtr; /*!< Pointer to CRYP processing (encryption, decryption,...) buffer */
DECL|pInitVect|member|uint8_t* pInitVect; /*!< The initialization vector used also as initialization
DECL|pKey|member|uint8_t* pKey; /*!< The key used for encryption/decryption */
DECL|pScratch|member|uint8_t* pScratch; /*!< Scratch buffer used to append the header. It's size must be equal to header size + 21 bytes.
