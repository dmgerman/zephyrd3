DECL|DataType|member|uint32_t DataType; /*!< 32-bit data, 16-bit data, 8-bit data or 1-bit data.
DECL|DgstCpltCallback|member|void (* DgstCpltCallback)( struct __HASH_HandleTypeDef * hhash); /*!< HASH digest computation completion callback */
DECL|DigestCalculationDisable|member|FlagStatus DigestCalculationDisable; /*!< Digest calculation phase skip (MDMAT bit control) for multi-buffers DMA-based HMAC computation */
DECL|ErrorCallback|member|void (* ErrorCallback)( struct __HASH_HandleTypeDef * hhash); /*!< HASH error callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< HASH Error code */
DECL|HAL_HASHEx_IRQHandler|macro|HAL_HASHEx_IRQHandler
DECL|HAL_HASH_CallbackIDTypeDef|typedef|}HAL_HASH_CallbackIDTypeDef;
DECL|HAL_HASH_DGSTCPLT_CB_ID|enumerator|HAL_HASH_DGSTCPLT_CB_ID = 0x03U, /*!< HASH digest computation completion callback ID */
DECL|HAL_HASH_ERROR_CB_ID|enumerator|HAL_HASH_ERROR_CB_ID = 0x04U, /*!< HASH error callback ID */
DECL|HAL_HASH_ERROR_DMA|macro|HAL_HASH_ERROR_DMA
DECL|HAL_HASH_ERROR_INVALID_CALLBACK|macro|HAL_HASH_ERROR_INVALID_CALLBACK
DECL|HAL_HASH_ERROR_IT|macro|HAL_HASH_ERROR_IT
DECL|HAL_HASH_ERROR_NONE|macro|HAL_HASH_ERROR_NONE
DECL|HAL_HASH_INPUTCPLT_CB_ID|enumerator|HAL_HASH_INPUTCPLT_CB_ID = 0x02U, /*!< HASH input completion callback ID */
DECL|HAL_HASH_MSPDEINIT_CB_ID|enumerator|HAL_HASH_MSPDEINIT_CB_ID = 0x01U, /*!< HASH MspDeInit callback ID */
DECL|HAL_HASH_MSPINIT_CB_ID|enumerator|HAL_HASH_MSPINIT_CB_ID = 0x00U, /*!< HASH MspInit callback ID */
DECL|HAL_HASH_PHASE_HMAC_STEP_1|enumerator|HAL_HASH_PHASE_HMAC_STEP_1 = 0x03, /*!< HASH peripheral is in HMAC step 1 processing phase
DECL|HAL_HASH_PHASE_HMAC_STEP_2|enumerator|HAL_HASH_PHASE_HMAC_STEP_2 = 0x04, /*!< HASH peripheral is in HMAC step 2 processing phase
DECL|HAL_HASH_PHASE_HMAC_STEP_3|enumerator|HAL_HASH_PHASE_HMAC_STEP_3 = 0x05 /*!< HASH peripheral is in HMAC step 3 processing phase
DECL|HAL_HASH_PHASE_PROCESS|enumerator|HAL_HASH_PHASE_PROCESS = 0x02, /*!< HASH peripheral is in HASH processing phase */
DECL|HAL_HASH_PHASE_READY|enumerator|HAL_HASH_PHASE_READY = 0x01, /*!< HASH peripheral is ready to start */
DECL|HAL_HASH_PhaseTypeDef|typedef|}HAL_HASH_PhaseTypeDef;
DECL|HAL_HASH_STATE_BUSY|enumerator|HAL_HASH_STATE_BUSY = 0x02, /*!< Processing (hashing) is ongoing */
DECL|HAL_HASH_STATE_ERROR|enumerator|HAL_HASH_STATE_ERROR = 0x07, /*!< Error state */
DECL|HAL_HASH_STATE_READY|enumerator|HAL_HASH_STATE_READY = 0x01, /*!< Peripheral Initialized and ready for use */
DECL|HAL_HASH_STATE_RESET|enumerator|HAL_HASH_STATE_RESET = 0x00, /*!< Peripheral is not initialized */
DECL|HAL_HASH_STATE_SUSPENDED|enumerator|HAL_HASH_STATE_SUSPENDED = 0x08 /*!< Suspended state */
DECL|HAL_HASH_STATE_TIMEOUT|enumerator|HAL_HASH_STATE_TIMEOUT = 0x06, /*!< Timeout state */
DECL|HAL_HASH_SUSPEND_NONE|enumerator|HAL_HASH_SUSPEND_NONE = 0x00, /*!< HASH peripheral suspension not requested */
DECL|HAL_HASH_SUSPEND|enumerator|HAL_HASH_SUSPEND = 0x01 /*!< HASH peripheral suspension is requested */
DECL|HAL_HASH_StateTypeDef|typedef|}HAL_HASH_StateTypeDef;
DECL|HAL_HASH_SuspendTypeDef|typedef|}HAL_HASH_SuspendTypeDef;
DECL|HASH_ALGOMODE_HASH|macro|HASH_ALGOMODE_HASH
DECL|HASH_ALGOMODE_HMAC|macro|HASH_ALGOMODE_HMAC
DECL|HASH_ALGOSELECTION_MD5|macro|HASH_ALGOSELECTION_MD5
DECL|HASH_ALGOSELECTION_SHA1|macro|HASH_ALGOSELECTION_SHA1
DECL|HASH_ALGOSELECTION_SHA224|macro|HASH_ALGOSELECTION_SHA224
DECL|HASH_ALGOSELECTION_SHA256|macro|HASH_ALGOSELECTION_SHA256
DECL|HASH_DATATYPE_16B|macro|HASH_DATATYPE_16B
DECL|HASH_DATATYPE_1B|macro|HASH_DATATYPE_1B
DECL|HASH_DATATYPE_32B|macro|HASH_DATATYPE_32B
DECL|HASH_DATATYPE_8B|macro|HASH_DATATYPE_8B
DECL|HASH_DIGEST_LENGTH|macro|HASH_DIGEST_LENGTH
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
DECL|HASH_InitTypeDef|typedef|} HASH_InitTypeDef;
DECL|HASH_NBW_PUSHED|macro|HASH_NBW_PUSHED
DECL|HashBuffSize|member|uint32_t HashBuffSize; /*!< Size of buffer to be processed */
DECL|HashITCounter|member|__IO uint32_t HashITCounter; /*!< Counter of issued interrupts */
DECL|HashInCount|member|__IO uint32_t HashInCount; /*!< Counter of inputted data */
DECL|HashKeyCount|member|__IO uint32_t HashKeyCount; /*!< Counter for Key inputted data (HMAC only) */
DECL|IS_HASH_DATATYPE|macro|IS_HASH_DATATYPE
DECL|IS_HASH_DMA_MULTIBUFFER_SIZE|macro|IS_HASH_DMA_MULTIBUFFER_SIZE
DECL|IS_HASH_POLLING_MULTIBUFFER_SIZE|macro|IS_HASH_POLLING_MULTIBUFFER_SIZE
DECL|IS_HASH_PROCESSING|macro|IS_HASH_PROCESSING
DECL|IS_HMAC_DMA_MULTIBUFFER_SIZE|macro|IS_HMAC_DMA_MULTIBUFFER_SIZE
DECL|IS_HMAC_PROCESSING|macro|IS_HMAC_PROCESSING
DECL|InCpltCallback|member|void (* InCpltCallback)( struct __HASH_HandleTypeDef * hhash); /*!< HASH input completion callback */
DECL|Init|member|HASH_InitTypeDef Init; /*!< HASH required parameters */
DECL|KeySize|member|uint32_t KeySize; /*!< The key size is used only in HMAC operation. */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)( struct __HASH_HandleTypeDef * hhash); /*!< HASH Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback)( struct __HASH_HandleTypeDef * hhash); /*!< HASH Msp Init callback */
DECL|NbWordsAlreadyPushed|member|__IO uint32_t NbWordsAlreadyPushed; /*!< Numbers of words already pushed in FIFO before inputting new block */
DECL|Phase|member|HAL_HASH_PhaseTypeDef Phase; /*!< HASH peripheral phase */
DECL|State|member|__IO HAL_HASH_StateTypeDef State; /*!< HASH peripheral state */
DECL|Status|member|HAL_StatusTypeDef Status; /*!< HASH peripheral status */
DECL|SuspendRequest|member|HAL_HASH_SuspendTypeDef SuspendRequest; /*!< HASH peripheral suspension request flag */
DECL|__HAL_HASH_CLEAR_FLAG|macro|__HAL_HASH_CLEAR_FLAG
DECL|__HAL_HASH_DISABLE_IT|macro|__HAL_HASH_DISABLE_IT
DECL|__HAL_HASH_ENABLE_IT|macro|__HAL_HASH_ENABLE_IT
DECL|__HAL_HASH_GET_FLAG|macro|__HAL_HASH_GET_FLAG
DECL|__HAL_HASH_INIT|macro|__HAL_HASH_INIT
DECL|__HAL_HASH_RESET_HANDLE_STATE|macro|__HAL_HASH_RESET_HANDLE_STATE
DECL|__HAL_HASH_RESET_HANDLE_STATE|macro|__HAL_HASH_RESET_HANDLE_STATE
DECL|__HAL_HASH_RESET_HANDLE_STATUS|macro|__HAL_HASH_RESET_HANDLE_STATUS
DECL|__HAL_HASH_RESET_MDMAT|macro|__HAL_HASH_RESET_MDMAT
DECL|__HAL_HASH_SET_MDMAT|macro|__HAL_HASH_SET_MDMAT
DECL|__HAL_HASH_SET_NBVALIDBITS|macro|__HAL_HASH_SET_NBVALIDBITS
DECL|__HAL_HASH_START_DIGEST|macro|__HAL_HASH_START_DIGEST
DECL|__HASH_HandleTypeDef|struct|typedef struct __HASH_HandleTypeDef
DECL|__STM32L4xx_HAL_HASH_H|macro|__STM32L4xx_HAL_HASH_H
DECL|hdmain|member|DMA_HandleTypeDef *hdmain; /*!< HASH In DMA Handle parameters */
DECL|pHASH_CallbackTypeDef|typedef|typedef void (*pHASH_CallbackTypeDef)(HASH_HandleTypeDef * hhash); /*!< pointer to a HASH common callback functions */
DECL|pHashInBuffPtr|member|uint8_t *pHashInBuffPtr; /*!< Pointer to input buffer */
DECL|pHashKeyBuffPtr|member|uint8_t *pHashKeyBuffPtr; /*!< Pointer to key buffer (HMAC only) */
DECL|pHashMsgBuffPtr|member|uint8_t *pHashMsgBuffPtr; /*!< Pointer to message buffer (HMAC only) */
DECL|pHashOutBuffPtr|member|uint8_t *pHashOutBuffPtr; /*!< Pointer to output buffer (digest) */
DECL|pKey|member|uint8_t* pKey; /*!< The key is used only in HMAC operation. */
