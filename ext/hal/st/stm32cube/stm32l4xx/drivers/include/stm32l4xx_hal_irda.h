DECL|AbortCpltCallback|member|void (* AbortCpltCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Abort Complete Callback */
DECL|AbortReceiveCpltCallback|member|void (* AbortReceiveCpltCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Abort Receive Complete Callback */
DECL|AbortTransmitCpltCallback|member|void (* AbortTransmitCpltCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Abort Transmit Complete Callback */
DECL|BaudRate|member|uint32_t BaudRate; /*!< This member configures the IRDA communication baud rate.
DECL|ClockPrescaler|member|uint32_t ClockPrescaler; /*!< Specifies the prescaler value used to divide the IRDA clock source.
DECL|ErrorCallback|member|void (* ErrorCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Error Callback */
DECL|ErrorCode|member|uint32_t ErrorCode; /*!< IRDA Error code */
DECL|HAL_IRDA_ABORT_COMPLETE_CB_ID|enumerator|HAL_IRDA_ABORT_COMPLETE_CB_ID = 0x05U, /*!< IRDA Abort Complete Callback ID */
DECL|HAL_IRDA_ABORT_RECEIVE_COMPLETE_CB_ID|enumerator|HAL_IRDA_ABORT_RECEIVE_COMPLETE_CB_ID = 0x07U, /*!< IRDA Abort Receive Complete Callback ID */
DECL|HAL_IRDA_ABORT_TRANSMIT_COMPLETE_CB_ID|enumerator|HAL_IRDA_ABORT_TRANSMIT_COMPLETE_CB_ID = 0x06U, /*!< IRDA Abort Transmit Complete Callback ID */
DECL|HAL_IRDA_CallbackIDTypeDef|typedef|} HAL_IRDA_CallbackIDTypeDef;
DECL|HAL_IRDA_ERROR_BUSY|macro|HAL_IRDA_ERROR_BUSY
DECL|HAL_IRDA_ERROR_CB_ID|enumerator|HAL_IRDA_ERROR_CB_ID = 0x04U, /*!< IRDA Error Callback ID */
DECL|HAL_IRDA_ERROR_DMA|macro|HAL_IRDA_ERROR_DMA
DECL|HAL_IRDA_ERROR_FE|macro|HAL_IRDA_ERROR_FE
DECL|HAL_IRDA_ERROR_INVALID_CALLBACK|macro|HAL_IRDA_ERROR_INVALID_CALLBACK
DECL|HAL_IRDA_ERROR_NE|macro|HAL_IRDA_ERROR_NE
DECL|HAL_IRDA_ERROR_NONE|macro|HAL_IRDA_ERROR_NONE
DECL|HAL_IRDA_ERROR_ORE|macro|HAL_IRDA_ERROR_ORE
DECL|HAL_IRDA_ERROR_PE|macro|HAL_IRDA_ERROR_PE
DECL|HAL_IRDA_MSPDEINIT_CB_ID|enumerator|HAL_IRDA_MSPDEINIT_CB_ID = 0x09U /*!< IRDA MspDeInit callback ID */
DECL|HAL_IRDA_MSPINIT_CB_ID|enumerator|HAL_IRDA_MSPINIT_CB_ID = 0x08U, /*!< IRDA MspInit callback ID */
DECL|HAL_IRDA_RX_COMPLETE_CB_ID|enumerator|HAL_IRDA_RX_COMPLETE_CB_ID = 0x03U, /*!< IRDA Rx Complete Callback ID */
DECL|HAL_IRDA_RX_HALFCOMPLETE_CB_ID|enumerator|HAL_IRDA_RX_HALFCOMPLETE_CB_ID = 0x02U, /*!< IRDA Rx Half Complete Callback ID */
DECL|HAL_IRDA_STATE_BUSY_RX|enumerator|HAL_IRDA_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing
DECL|HAL_IRDA_STATE_BUSY_TX_RX|enumerator|HAL_IRDA_STATE_BUSY_TX_RX = 0x23U, /*!< Data Transmission and Reception process is ongoing
DECL|HAL_IRDA_STATE_BUSY_TX|enumerator|HAL_IRDA_STATE_BUSY_TX = 0x21U, /*!< Data Transmission process is ongoing
DECL|HAL_IRDA_STATE_BUSY|enumerator|HAL_IRDA_STATE_BUSY = 0x24U, /*!< an internal process is ongoing
DECL|HAL_IRDA_STATE_ERROR|enumerator|HAL_IRDA_STATE_ERROR = 0xE0U /*!< Error
DECL|HAL_IRDA_STATE_READY|enumerator|HAL_IRDA_STATE_READY = 0x20U, /*!< Peripheral Initialized and ready for use
DECL|HAL_IRDA_STATE_RESET|enumerator|HAL_IRDA_STATE_RESET = 0x00U, /*!< Peripheral is not initialized
DECL|HAL_IRDA_STATE_TIMEOUT|enumerator|HAL_IRDA_STATE_TIMEOUT = 0xA0U, /*!< Timeout state
DECL|HAL_IRDA_StateTypeDef|typedef|} HAL_IRDA_StateTypeDef;
DECL|HAL_IRDA_TX_COMPLETE_CB_ID|enumerator|HAL_IRDA_TX_COMPLETE_CB_ID = 0x01U, /*!< IRDA Tx Complete Callback ID */
DECL|HAL_IRDA_TX_HALFCOMPLETE_CB_ID|enumerator|HAL_IRDA_TX_HALFCOMPLETE_CB_ID = 0x00U, /*!< IRDA Tx Half Complete Callback ID */
DECL|IRDA_AUTOBAUD_REQUEST|macro|IRDA_AUTOBAUD_REQUEST
DECL|IRDA_BAUDRATE|enumerator|IRDA_BAUDRATE = 0x00U, /*!< IRDA Baud rate */
DECL|IRDA_CLEAR_FEF|macro|IRDA_CLEAR_FEF
DECL|IRDA_CLEAR_IDLEF|macro|IRDA_CLEAR_IDLEF
DECL|IRDA_CLEAR_NEF|macro|IRDA_CLEAR_NEF
DECL|IRDA_CLEAR_OREF|macro|IRDA_CLEAR_OREF
DECL|IRDA_CLEAR_PEF|macro|IRDA_CLEAR_PEF
DECL|IRDA_CLEAR_TCF|macro|IRDA_CLEAR_TCF
DECL|IRDA_CLOCKSOURCE_HSI|enumerator|IRDA_CLOCKSOURCE_HSI = 0x02U, /*!< HSI clock source */
DECL|IRDA_CLOCKSOURCE_LSE|enumerator|IRDA_CLOCKSOURCE_LSE = 0x08U, /*!< LSE clock source */
DECL|IRDA_CLOCKSOURCE_PCLK1|enumerator|IRDA_CLOCKSOURCE_PCLK1 = 0x00U, /*!< PCLK1 clock source */
DECL|IRDA_CLOCKSOURCE_PCLK2|enumerator|IRDA_CLOCKSOURCE_PCLK2 = 0x01U, /*!< PCLK2 clock source */
DECL|IRDA_CLOCKSOURCE_SYSCLK|enumerator|IRDA_CLOCKSOURCE_SYSCLK = 0x04U, /*!< SYSCLK clock source */
DECL|IRDA_CLOCKSOURCE_UNDEFINED|enumerator|IRDA_CLOCKSOURCE_UNDEFINED = 0x10U /*!< Undefined clock source */
DECL|IRDA_ClockSourceTypeDef|typedef|} IRDA_ClockSourceTypeDef;
DECL|IRDA_ControlTypeDef|typedef|} IRDA_ControlTypeDef;
DECL|IRDA_DMA_RX_DISABLE|macro|IRDA_DMA_RX_DISABLE
DECL|IRDA_DMA_RX_ENABLE|macro|IRDA_DMA_RX_ENABLE
DECL|IRDA_DMA_TX_DISABLE|macro|IRDA_DMA_TX_DISABLE
DECL|IRDA_DMA_TX_ENABLE|macro|IRDA_DMA_TX_ENABLE
DECL|IRDA_FLAG_ABRE|macro|IRDA_FLAG_ABRE
DECL|IRDA_FLAG_ABRF|macro|IRDA_FLAG_ABRF
DECL|IRDA_FLAG_BUSY|macro|IRDA_FLAG_BUSY
DECL|IRDA_FLAG_FE|macro|IRDA_FLAG_FE
DECL|IRDA_FLAG_NE|macro|IRDA_FLAG_NE
DECL|IRDA_FLAG_ORE|macro|IRDA_FLAG_ORE
DECL|IRDA_FLAG_PE|macro|IRDA_FLAG_PE
DECL|IRDA_FLAG_REACK|macro|IRDA_FLAG_REACK
DECL|IRDA_FLAG_RXNE|macro|IRDA_FLAG_RXNE
DECL|IRDA_FLAG_RXNE|macro|IRDA_FLAG_RXNE
DECL|IRDA_FLAG_TC|macro|IRDA_FLAG_TC
DECL|IRDA_FLAG_TEACK|macro|IRDA_FLAG_TEACK
DECL|IRDA_FLAG_TXE|macro|IRDA_FLAG_TXE
DECL|IRDA_FLAG_TXE|macro|IRDA_FLAG_TXE
DECL|IRDA_HandleTypeDef|typedef|} IRDA_HandleTypeDef;
DECL|IRDA_IT_ERR|macro|IRDA_IT_ERR
DECL|IRDA_IT_FE|macro|IRDA_IT_FE
DECL|IRDA_IT_IDLE|macro|IRDA_IT_IDLE
DECL|IRDA_IT_MASK|macro|IRDA_IT_MASK
DECL|IRDA_IT_NE|macro|IRDA_IT_NE
DECL|IRDA_IT_ORE|macro|IRDA_IT_ORE
DECL|IRDA_IT_PE|macro|IRDA_IT_PE
DECL|IRDA_IT_RXNE|macro|IRDA_IT_RXNE
DECL|IRDA_IT_TC|macro|IRDA_IT_TC
DECL|IRDA_IT_TXE|macro|IRDA_IT_TXE
DECL|IRDA_InitTypeDef|typedef|} IRDA_InitTypeDef;
DECL|IRDA_MASK_COMPUTATION|macro|IRDA_MASK_COMPUTATION
DECL|IRDA_MODE_DISABLE|macro|IRDA_MODE_DISABLE
DECL|IRDA_MODE_ENABLE|macro|IRDA_MODE_ENABLE
DECL|IRDA_MODE_RX|macro|IRDA_MODE_RX
DECL|IRDA_MODE_TX_RX|macro|IRDA_MODE_TX_RX
DECL|IRDA_MODE_TX|macro|IRDA_MODE_TX
DECL|IRDA_MODE|enumerator|IRDA_MODE = 0x03U, /*!< IRDA communication mode */
DECL|IRDA_ONE_BIT_SAMPLE_DISABLE|macro|IRDA_ONE_BIT_SAMPLE_DISABLE
DECL|IRDA_ONE_BIT_SAMPLE_ENABLE|macro|IRDA_ONE_BIT_SAMPLE_ENABLE
DECL|IRDA_PARITY_EVEN|macro|IRDA_PARITY_EVEN
DECL|IRDA_PARITY_NONE|macro|IRDA_PARITY_NONE
DECL|IRDA_PARITY_ODD|macro|IRDA_PARITY_ODD
DECL|IRDA_PARITY|enumerator|IRDA_PARITY = 0x01U, /*!< IRDA frame parity */
DECL|IRDA_POWERMODE_LOWPOWER|macro|IRDA_POWERMODE_LOWPOWER
DECL|IRDA_POWERMODE_NORMAL|macro|IRDA_POWERMODE_NORMAL
DECL|IRDA_POWERMODE|enumerator|IRDA_POWERMODE = 0x05U /*!< IRDA power mode */
DECL|IRDA_PRESCALER_DIV10|macro|IRDA_PRESCALER_DIV10
DECL|IRDA_PRESCALER_DIV128|macro|IRDA_PRESCALER_DIV128
DECL|IRDA_PRESCALER_DIV12|macro|IRDA_PRESCALER_DIV12
DECL|IRDA_PRESCALER_DIV16|macro|IRDA_PRESCALER_DIV16
DECL|IRDA_PRESCALER_DIV1|macro|IRDA_PRESCALER_DIV1
DECL|IRDA_PRESCALER_DIV256|macro|IRDA_PRESCALER_DIV256
DECL|IRDA_PRESCALER_DIV2|macro|IRDA_PRESCALER_DIV2
DECL|IRDA_PRESCALER_DIV32|macro|IRDA_PRESCALER_DIV32
DECL|IRDA_PRESCALER_DIV4|macro|IRDA_PRESCALER_DIV4
DECL|IRDA_PRESCALER_DIV64|macro|IRDA_PRESCALER_DIV64
DECL|IRDA_PRESCALER_DIV6|macro|IRDA_PRESCALER_DIV6
DECL|IRDA_PRESCALER_DIV8|macro|IRDA_PRESCALER_DIV8
DECL|IRDA_PRESCALER|enumerator|IRDA_PRESCALER = 0x04U, /*!< IRDA prescaling */
DECL|IRDA_RXDATA_FLUSH_REQUEST|macro|IRDA_RXDATA_FLUSH_REQUEST
DECL|IRDA_STATE_DISABLE|macro|IRDA_STATE_DISABLE
DECL|IRDA_STATE_ENABLE|macro|IRDA_STATE_ENABLE
DECL|IRDA_TXDATA_FLUSH_REQUEST|macro|IRDA_TXDATA_FLUSH_REQUEST
DECL|IRDA_WORDLENGTH_7B|macro|IRDA_WORDLENGTH_7B
DECL|IRDA_WORDLENGTH_8B|macro|IRDA_WORDLENGTH_8B
DECL|IRDA_WORDLENGTH_9B|macro|IRDA_WORDLENGTH_9B
DECL|IRDA_WORDLENGTH|enumerator|IRDA_WORDLENGTH = 0x02U, /*!< IRDA frame length */
DECL|IS_IRDA_BAUDRATE|macro|IS_IRDA_BAUDRATE
DECL|IS_IRDA_CLOCKPRESCALER|macro|IS_IRDA_CLOCKPRESCALER
DECL|IS_IRDA_DMA_RX|macro|IS_IRDA_DMA_RX
DECL|IS_IRDA_DMA_TX|macro|IS_IRDA_DMA_TX
DECL|IS_IRDA_MODE|macro|IS_IRDA_MODE
DECL|IS_IRDA_ONE_BIT_SAMPLE|macro|IS_IRDA_ONE_BIT_SAMPLE
DECL|IS_IRDA_PARITY|macro|IS_IRDA_PARITY
DECL|IS_IRDA_POWERMODE|macro|IS_IRDA_POWERMODE
DECL|IS_IRDA_PRESCALER|macro|IS_IRDA_PRESCALER
DECL|IS_IRDA_REQUEST_PARAMETER|macro|IS_IRDA_REQUEST_PARAMETER
DECL|IS_IRDA_STATE|macro|IS_IRDA_STATE
DECL|IS_IRDA_TX_RX_MODE|macro|IS_IRDA_TX_RX_MODE
DECL|IS_IRDA_WORD_LENGTH|macro|IS_IRDA_WORD_LENGTH
DECL|Init|member|IRDA_InitTypeDef Init; /*!< IRDA communication parameters */
DECL|Instance|member|USART_TypeDef *Instance; /*!< USART registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|Mask|member|uint16_t Mask; /*!< USART RX RDR register mask */
DECL|Mode|member|uint32_t Mode; /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Msp Init callback */
DECL|Parity|member|uint32_t Parity; /*!< Specifies the parity mode.
DECL|PowerMode|member|uint16_t PowerMode; /*!< Specifies the IRDA power mode.
DECL|Prescaler|member|uint8_t Prescaler; /*!< Specifies the Prescaler value for dividing the UART/USART source clock
DECL|RxCpltCallback|member|void (* RxCpltCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Rx Complete Callback */
DECL|RxHalfCpltCallback|member|void (* RxHalfCpltCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Rx Half Complete Callback */
DECL|RxState|member|__IO HAL_IRDA_StateTypeDef RxState; /*!< IRDA state information related to Rx operations.
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /*!< IRDA Rx Transfer Counter */
DECL|RxXferSize|member|uint16_t RxXferSize; /*!< IRDA Rx Transfer size */
DECL|TxCpltCallback|member|void (* TxCpltCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Tx Complete Callback */
DECL|TxHalfCpltCallback|member|void (* TxHalfCpltCallback)(struct __IRDA_HandleTypeDef *hirda); /*!< IRDA Tx Half Complete Callback */
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /*!< IRDA Tx Transfer Counter */
DECL|TxXferSize|member|uint16_t TxXferSize; /*!< IRDA Tx Transfer size */
DECL|WordLength|member|uint32_t WordLength; /*!< Specifies the number of data bits transmitted or received in a frame.
DECL|__HAL_IRDA_CLEAR_FEFLAG|macro|__HAL_IRDA_CLEAR_FEFLAG
DECL|__HAL_IRDA_CLEAR_FLAG|macro|__HAL_IRDA_CLEAR_FLAG
DECL|__HAL_IRDA_CLEAR_IDLEFLAG|macro|__HAL_IRDA_CLEAR_IDLEFLAG
DECL|__HAL_IRDA_CLEAR_IT|macro|__HAL_IRDA_CLEAR_IT
DECL|__HAL_IRDA_CLEAR_NEFLAG|macro|__HAL_IRDA_CLEAR_NEFLAG
DECL|__HAL_IRDA_CLEAR_OREFLAG|macro|__HAL_IRDA_CLEAR_OREFLAG
DECL|__HAL_IRDA_CLEAR_PEFLAG|macro|__HAL_IRDA_CLEAR_PEFLAG
DECL|__HAL_IRDA_DISABLE_IT|macro|__HAL_IRDA_DISABLE_IT
DECL|__HAL_IRDA_DISABLE|macro|__HAL_IRDA_DISABLE
DECL|__HAL_IRDA_ENABLE_IT|macro|__HAL_IRDA_ENABLE_IT
DECL|__HAL_IRDA_ENABLE|macro|__HAL_IRDA_ENABLE
DECL|__HAL_IRDA_FLUSH_DRREGISTER|macro|__HAL_IRDA_FLUSH_DRREGISTER
DECL|__HAL_IRDA_GET_FLAG|macro|__HAL_IRDA_GET_FLAG
DECL|__HAL_IRDA_GET_IT_SOURCE|macro|__HAL_IRDA_GET_IT_SOURCE
DECL|__HAL_IRDA_GET_IT|macro|__HAL_IRDA_GET_IT
DECL|__HAL_IRDA_ONE_BIT_SAMPLE_DISABLE|macro|__HAL_IRDA_ONE_BIT_SAMPLE_DISABLE
DECL|__HAL_IRDA_ONE_BIT_SAMPLE_ENABLE|macro|__HAL_IRDA_ONE_BIT_SAMPLE_ENABLE
DECL|__HAL_IRDA_RESET_HANDLE_STATE|macro|__HAL_IRDA_RESET_HANDLE_STATE
DECL|__HAL_IRDA_RESET_HANDLE_STATE|macro|__HAL_IRDA_RESET_HANDLE_STATE
DECL|__HAL_IRDA_SEND_REQ|macro|__HAL_IRDA_SEND_REQ
DECL|__IRDA_HandleTypeDef|struct|typedef struct __IRDA_HandleTypeDef
DECL|__STM32L4xx_HAL_IRDA_H|macro|__STM32L4xx_HAL_IRDA_H
DECL|gState|member|__IO HAL_IRDA_StateTypeDef gState; /*!< IRDA state information related to global Handle management
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< IRDA Rx DMA Handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< IRDA Tx DMA Handle parameters */
DECL|pIRDA_CallbackTypeDef|typedef|typedef void (*pIRDA_CallbackTypeDef)(IRDA_HandleTypeDef *hirda); /*!< pointer to an IRDA callback function */
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /*!< Pointer to IRDA Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /*!< Pointer to IRDA Tx transfer Buffer */
