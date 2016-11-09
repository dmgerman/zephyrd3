DECL|DataType|member|uint32_t DataType; /*!< 32-bit data, 16-bit data, 8-bit data or 1-bit string.
DECL|HAL_HASH_PHASE_PROCESS|enumerator|HAL_HASH_PHASE_PROCESS = 0x02U, /*!< HASH peripheral is in processing phase */
DECL|HAL_HASH_PHASE_READY|enumerator|HAL_HASH_PHASE_READY = 0x01U, /*!< HASH peripheral is ready for initialization */
DECL|HAL_HASH_PhaseTypeDef|typedef|}HAL_HASH_PhaseTypeDef;
DECL|HAL_HASH_STATE_BUSY|enumerator|HAL_HASH_STATE_BUSY = 0x02U, /*!< HASH internal process is ongoing */
DECL|HAL_HASH_STATE_ERROR|enumerator|HAL_HASH_STATE_ERROR = 0x04U /*!< HASH error state */
DECL|HAL_HASH_STATE_READY|enumerator|HAL_HASH_STATE_READY = 0x01U, /*!< HASH initialized and ready for use */
DECL|HAL_HASH_STATE_RESET|enumerator|HAL_HASH_STATE_RESET = 0x00U, /*!< HASH not yet initialized or disabled */
DECL|HAL_HASH_STATE_TIMEOUT|enumerator|HAL_HASH_STATE_TIMEOUT = 0x03U, /*!< HASH timeout state */
DECL|HAL_HASH_StateTypeDef|typedef|}HAL_HASH_StateTypeDef;
DECL|HASH_ALGOMODE_HASH|macro|HASH_ALGOMODE_HASH
DECL|HASH_ALGOMODE_HMAC|macro|HASH_ALGOMODE_HMAC
DECL|HASH_ALGOSELECTION_MD5|macro|HASH_ALGOSELECTION_MD5
DECL|HASH_ALGOSELECTION_SHA1|macro|HASH_ALGOSELECTION_SHA1
DECL|HASH_DATATYPE_16B|macro|HASH_DATATYPE_16B
DECL|HASH_DATATYPE_1B|macro|HASH_DATATYPE_1B
DECL|HASH_DATATYPE_32B|macro|HASH_DATATYPE_32B
DECL|HASH_DATATYPE_8B|macro|HASH_DATATYPE_8B
DECL|HASH_FLAG_BUSY|macro|HASH_FLAG_BUSY
DECL|HASH_FLAG_DCIS|macro|HASH_FLAG_DCIS
DECL|HASH_FLAG_DINIS|macro|HASH_FLAG_DINIS
DECL|HASH_FLAG_DINNE|macro|HASH_FLAG_DINNE
DECL|HASH_FLAG_DMAS|macro|HASH_FLAG_DMAS
DECL|HASH_HMAC_KEYTYPE_LONGKEY|macro|HASH_HMAC_KEYTYPE_LONGKEY
DECL|HASH_HMAC_KEYTYPE_SHORTKEY|macro|HASH_HMAC_KEYTYPE_SHORTKEY
DECL|HASH_HandleTypeDef|typedef|} HASH_HandleTypeDef;
DECL|HASH_IT_DCI|macro|HASH_IT_DCI
DECL|HASH_IT_DINI|macro|HASH_IT_DINI
DECL|HASH_InitTypeDef|typedef|}HASH_InitTypeDef;
DECL|HashBuffSize|member|__IO uint32_t HashBuffSize; /*!< Size of buffer to be processed */
DECL|HashITCounter|member|__IO uint32_t HashITCounter; /*!< Counter of issued interrupts */
DECL|HashInCount|member|__IO uint32_t HashInCount; /*!< Counter of input data */
DECL|IS_HASH_ALGOMODE|macro|IS_HASH_ALGOMODE
DECL|IS_HASH_ALGOSELECTION|macro|IS_HASH_ALGOSELECTION
DECL|IS_HASH_DATATYPE|macro|IS_HASH_DATATYPE
DECL|IS_HASH_HMAC_KEYTYPE|macro|IS_HASH_HMAC_KEYTYPE
DECL|IS_HASH_SHA1_BUFFER_SIZE|macro|IS_HASH_SHA1_BUFFER_SIZE
DECL|Init|member|HASH_InitTypeDef Init; /*!< HASH required parameters */
DECL|KeySize|member|uint32_t KeySize; /*!< The key size is used only in HMAC operation */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< HASH locking object */
DECL|Phase|member|HAL_HASH_PhaseTypeDef Phase; /*!< HASH peripheral phase */
DECL|State|member|__IO HAL_HASH_StateTypeDef State; /*!< HASH peripheral state */
DECL|Status|member|HAL_StatusTypeDef Status; /*!< HASH peripheral status */
DECL|__HAL_HASH_GET_FLAG|macro|__HAL_HASH_GET_FLAG
DECL|__HAL_HASH_RESET_HANDLE_STATE|macro|__HAL_HASH_RESET_HANDLE_STATE
DECL|__HAL_HASH_SET_NBVALIDBITS|macro|__HAL_HASH_SET_NBVALIDBITS
DECL|__HAL_HASH_START_DIGEST|macro|__HAL_HASH_START_DIGEST
DECL|__STM32F2xx_HAL_HASH_H|macro|__STM32F2xx_HAL_HASH_H
DECL|hdmain|member|DMA_HandleTypeDef *hdmain; /*!< HASH In DMA handle parameters */
DECL|pHashInBuffPtr|member|uint8_t *pHashInBuffPtr; /*!< Pointer to input buffer */
DECL|pHashOutBuffPtr|member|uint8_t *pHashOutBuffPtr; /*!< Pointer to input buffer */
DECL|pKey|member|uint8_t* pKey; /*!< The key is used only in HMAC operation */
