DECL|CEC_BIT_PERIOD_ERROR_MODE_FLEXIBLE|macro|CEC_BIT_PERIOD_ERROR_MODE_FLEXIBLE
DECL|CEC_BIT_PERIOD_ERROR_MODE_STANDARD|macro|CEC_BIT_PERIOD_ERROR_MODE_STANDARD
DECL|CEC_BIT_TIMING_ERROR_MODE_ERRORFREE|macro|CEC_BIT_TIMING_ERROR_MODE_ERRORFREE
DECL|CEC_BIT_TIMING_ERROR_MODE_STANDARD|macro|CEC_BIT_TIMING_ERROR_MODE_STANDARD
DECL|CEC_FLAG_RBTF|macro|CEC_FLAG_RBTF
DECL|CEC_FLAG_REOM|macro|CEC_FLAG_REOM
DECL|CEC_FLAG_RERR|macro|CEC_FLAG_RERR
DECL|CEC_FLAG_RSOM|macro|CEC_FLAG_RSOM
DECL|CEC_FLAG_TBTRF|macro|CEC_FLAG_TBTRF
DECL|CEC_FLAG_TEOM|macro|CEC_FLAG_TEOM
DECL|CEC_FLAG_TERR|macro|CEC_FLAG_TERR
DECL|CEC_FLAG_TSOM|macro|CEC_FLAG_TSOM
DECL|CEC_HandleTypeDef|typedef|}CEC_HandleTypeDef;
DECL|CEC_INITIATOR_LSB_POS|macro|CEC_INITIATOR_LSB_POS
DECL|CEC_IT_IE|macro|CEC_IT_IE
DECL|CEC_InitTypeDef|typedef|}CEC_InitTypeDef;
DECL|ErrorCode|member|uint32_t ErrorCode; /*!< For errors handling purposes, copy of ESR register in case error is reported */
DECL|HAL_CEC_ERROR_ACKE|enumerator|HAL_CEC_ERROR_ACKE = CEC_ESR_ACKE, /*!< Block Acknowledge Error */
DECL|HAL_CEC_ERROR_BPE|enumerator|HAL_CEC_ERROR_BPE = CEC_ESR_BPE, /*!< Bit Period Error */
DECL|HAL_CEC_ERROR_BTE|enumerator|HAL_CEC_ERROR_BTE = CEC_ESR_BTE, /*!< Bit Timing Error */
DECL|HAL_CEC_ERROR_LINE|enumerator|HAL_CEC_ERROR_LINE = CEC_ESR_LINE, /*!< Line Error */
DECL|HAL_CEC_ERROR_NONE|enumerator|HAL_CEC_ERROR_NONE = (uint32_t) 0x0, /*!< no error */
DECL|HAL_CEC_ERROR_RBTFE|enumerator|HAL_CEC_ERROR_RBTFE = CEC_ESR_RBTFE, /*!< Rx Block Transfer Finished Error */
DECL|HAL_CEC_ERROR_SBE|enumerator|HAL_CEC_ERROR_SBE = CEC_ESR_SBE, /*!< Start Bit Error */
DECL|HAL_CEC_ERROR_TBTFE|enumerator|HAL_CEC_ERROR_TBTFE = CEC_ESR_TBTFE, /*!< Tx Block Transfer Finished Error */
DECL|HAL_CEC_ErrorTypeDef|typedef|}HAL_CEC_ErrorTypeDef;
DECL|HAL_CEC_STATE_BUSY_RX|enumerator|HAL_CEC_STATE_BUSY_RX = 0x04, /*!< Data Reception process is ongoing */
DECL|HAL_CEC_STATE_BUSY_TX_RX|enumerator|HAL_CEC_STATE_BUSY_TX_RX = 0x05, /*!< Data Transmission and Reception process is ongoing */
DECL|HAL_CEC_STATE_BUSY_TX|enumerator|HAL_CEC_STATE_BUSY_TX = 0x03, /*!< Data Transmission process is ongoing */
DECL|HAL_CEC_STATE_BUSY|enumerator|HAL_CEC_STATE_BUSY = 0x02, /*!< An internal process is ongoing */
DECL|HAL_CEC_STATE_ERROR|enumerator|HAL_CEC_STATE_ERROR = 0x07 /*!< State Error */
DECL|HAL_CEC_STATE_READY|enumerator|HAL_CEC_STATE_READY = 0x01, /*!< Peripheral Initialized and ready for use */
DECL|HAL_CEC_STATE_RESET|enumerator|HAL_CEC_STATE_RESET = 0x00, /*!< Peripheral Reset state */
DECL|HAL_CEC_STATE_TIMEOUT|enumerator|HAL_CEC_STATE_TIMEOUT = 0x06, /*!< Timeout state */
DECL|HAL_CEC_StateTypeDef|typedef|}HAL_CEC_StateTypeDef;
DECL|IS_CEC_ADDRESS|macro|IS_CEC_ADDRESS
DECL|IS_CEC_BIT_PERIOD_ERROR_MODE|macro|IS_CEC_BIT_PERIOD_ERROR_MODE
DECL|IS_CEC_BIT_TIMING_ERROR_MODE|macro|IS_CEC_BIT_TIMING_ERROR_MODE
DECL|IS_CEC_MSGSIZE|macro|IS_CEC_MSGSIZE
DECL|IS_CEC_OAR_ADDRESS|macro|IS_CEC_OAR_ADDRESS
DECL|InitiatorAddress|member|uint8_t InitiatorAddress; /*!< Initiator address (source logical address, sent in each header)
DECL|Init|member|CEC_InitTypeDef Init; /*!< CEC communication parameters */
DECL|Instance|member|CEC_TypeDef *Instance; /*!< CEC registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|PeriodErrorFree|member|uint32_t PeriodErrorFree; /*!< Configures the CEC Bit Period Error Mode.
DECL|RxXferSize|member|uint16_t RxXferSize; /*!< CEC Rx Transfer size, 0: header received only */
DECL|State|member|HAL_CEC_StateTypeDef State; /*!< CEC communication state */
DECL|TimingErrorFree|member|uint32_t TimingErrorFree; /*!< Configures the CEC Bit Timing Error Mode.
DECL|TxXferCount|member|uint16_t TxXferCount; /*!< CEC Tx Transfer Counter */
DECL|__HAL_CEC_CLEAR_FLAG|macro|__HAL_CEC_CLEAR_FLAG
DECL|__HAL_CEC_CLEAR_OAR|macro|__HAL_CEC_CLEAR_OAR
DECL|__HAL_CEC_DISABLE_IT|macro|__HAL_CEC_DISABLE_IT
DECL|__HAL_CEC_DISABLE|macro|__HAL_CEC_DISABLE
DECL|__HAL_CEC_ENABLE_IT|macro|__HAL_CEC_ENABLE_IT
DECL|__HAL_CEC_ENABLE|macro|__HAL_CEC_ENABLE
DECL|__HAL_CEC_FIRST_BYTE_TX_SET|macro|__HAL_CEC_FIRST_BYTE_TX_SET
DECL|__HAL_CEC_GET_FLAG|macro|__HAL_CEC_GET_FLAG
DECL|__HAL_CEC_GET_IT_SOURCE|macro|__HAL_CEC_GET_IT_SOURCE
DECL|__HAL_CEC_GET_TRANSMISSION_END_FLAG|macro|__HAL_CEC_GET_TRANSMISSION_END_FLAG
DECL|__HAL_CEC_GET_TRANSMISSION_START_FLAG|macro|__HAL_CEC_GET_TRANSMISSION_START_FLAG
DECL|__HAL_CEC_LAST_BYTE_TX_SET|macro|__HAL_CEC_LAST_BYTE_TX_SET
DECL|__HAL_CEC_RESET_HANDLE_STATE|macro|__HAL_CEC_RESET_HANDLE_STATE
DECL|__HAL_CEC_SET_OAR|macro|__HAL_CEC_SET_OAR
DECL|__STM32F1xx_HAL_CEC_H|macro|__STM32F1xx_HAL_CEC_H
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /*!< Pointer to CEC Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /*!< Pointer to CEC Tx transfer Buffer */
