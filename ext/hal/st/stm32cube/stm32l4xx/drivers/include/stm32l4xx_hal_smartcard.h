DECL|AbortCpltCallback|member|void (* AbortCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Abort Complete Callback */
DECL|AbortReceiveCpltCallback|member|void (* AbortReceiveCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Abort Receive Complete Callback */
DECL|AbortTransmitCpltCallback|member|void (* AbortTransmitCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Abort Transmit Complete Callback */
DECL|AdvFeatureInit|member|uint32_t AdvFeatureInit; /*!< Specifies which advanced SMARTCARD features is initialized. Several
DECL|AdvancedInit|member|SMARTCARD_AdvFeatureInitTypeDef AdvancedInit; /*!< SmartCard advanced features initialization parameters */
DECL|AutoRetryCount|member|uint8_t AutoRetryCount; /*!< Specifies the SmartCard auto-retry count (number of retries in
DECL|BaudRate|member|uint32_t BaudRate; /*!< Configures the SmartCard communication baud rate.
DECL|BlockLength|member|uint8_t BlockLength; /*!< Specifies the SmartCard Block Length in T=1 Reception mode.
DECL|CLKLastBit|member|uint16_t CLKLastBit; /*!< Specifies whether the clock pulse corresponding to the last transmitted
DECL|CLKPhase|member|uint16_t CLKPhase; /*!< Specifies the clock transition on which the bit capture is made.
DECL|CLKPolarity|member|uint16_t CLKPolarity; /*!< Specifies the steady state of the serial clock.
DECL|ClockPrescaler|member|uint32_t ClockPrescaler; /*!< Specifies the prescaler value used to divide the USART clock source.
DECL|DMADisableonRxError|member|uint32_t DMADisableonRxError; /*!< Specifies whether the DMA is disabled in case of reception error.
DECL|DataInvert|member|uint32_t DataInvert; /*!< Specifies whether data are inverted (positive/direct logic
DECL|ErrorCallback|member|void (* ErrorCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Error Callback */
DECL|ErrorCode|member|uint32_t ErrorCode; /*!< SmartCard Error code */
DECL|FifoMode|member|uint32_t FifoMode; /*!< Specifies if the FIFO mode will be used.
DECL|GuardTime|member|uint8_t GuardTime; /*!< Specifies the SmartCard Guard Time applied after stop bits. */
DECL|HAL_SMARTCARD_ABORT_COMPLETE_CB_ID|enumerator|HAL_SMARTCARD_ABORT_COMPLETE_CB_ID = 0x03U, /*!< SMARTCARD Abort Complete Callback ID */
DECL|HAL_SMARTCARD_ABORT_RECEIVE_COMPLETE_CB_ID|enumerator|HAL_SMARTCARD_ABORT_RECEIVE_COMPLETE_CB_ID = 0x05U, /*!< SMARTCARD Abort Receive Complete Callback ID */
DECL|HAL_SMARTCARD_ABORT_TRANSMIT_COMPLETE_CB_ID|enumerator|HAL_SMARTCARD_ABORT_TRANSMIT_COMPLETE_CB_ID = 0x04U, /*!< SMARTCARD Abort Transmit Complete Callback ID */
DECL|HAL_SMARTCARD_CallbackIDTypeDef|typedef|} HAL_SMARTCARD_CallbackIDTypeDef;
DECL|HAL_SMARTCARD_ERROR_CB_ID|enumerator|HAL_SMARTCARD_ERROR_CB_ID = 0x02U, /*!< SMARTCARD Error Callback ID */
DECL|HAL_SMARTCARD_ERROR_DMA|macro|HAL_SMARTCARD_ERROR_DMA
DECL|HAL_SMARTCARD_ERROR_FE|macro|HAL_SMARTCARD_ERROR_FE
DECL|HAL_SMARTCARD_ERROR_INVALID_CALLBACK|macro|HAL_SMARTCARD_ERROR_INVALID_CALLBACK
DECL|HAL_SMARTCARD_ERROR_NE|macro|HAL_SMARTCARD_ERROR_NE
DECL|HAL_SMARTCARD_ERROR_NONE|macro|HAL_SMARTCARD_ERROR_NONE
DECL|HAL_SMARTCARD_ERROR_ORE|macro|HAL_SMARTCARD_ERROR_ORE
DECL|HAL_SMARTCARD_ERROR_PE|macro|HAL_SMARTCARD_ERROR_PE
DECL|HAL_SMARTCARD_ERROR_RTO|macro|HAL_SMARTCARD_ERROR_RTO
DECL|HAL_SMARTCARD_MSPDEINIT_CB_ID|enumerator|HAL_SMARTCARD_MSPDEINIT_CB_ID = 0x09U /*!< SMARTCARD MspDeInit callback ID */
DECL|HAL_SMARTCARD_MSPINIT_CB_ID|enumerator|HAL_SMARTCARD_MSPINIT_CB_ID = 0x08U, /*!< SMARTCARD MspInit callback ID */
DECL|HAL_SMARTCARD_RX_COMPLETE_CB_ID|enumerator|HAL_SMARTCARD_RX_COMPLETE_CB_ID = 0x01U, /*!< SMARTCARD Rx Complete Callback ID */
DECL|HAL_SMARTCARD_RX_FIFO_FULL_CB_ID|enumerator|HAL_SMARTCARD_RX_FIFO_FULL_CB_ID = 0x06U, /*!< SMARTCARD Rx Fifo Full Callback ID */
DECL|HAL_SMARTCARD_STATE_BUSY_RX|enumerator|HAL_SMARTCARD_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing
DECL|HAL_SMARTCARD_STATE_BUSY_TX_RX|enumerator|HAL_SMARTCARD_STATE_BUSY_TX_RX = 0x23U, /*!< Data Transmission and Reception process is ongoing
DECL|HAL_SMARTCARD_STATE_BUSY_TX|enumerator|HAL_SMARTCARD_STATE_BUSY_TX = 0x21U, /*!< Data Transmission process is ongoing
DECL|HAL_SMARTCARD_STATE_BUSY|enumerator|HAL_SMARTCARD_STATE_BUSY = 0x24U, /*!< an internal process is ongoing
DECL|HAL_SMARTCARD_STATE_ERROR|enumerator|HAL_SMARTCARD_STATE_ERROR = 0xE0U /*!< Error
DECL|HAL_SMARTCARD_STATE_READY|enumerator|HAL_SMARTCARD_STATE_READY = 0x20U, /*!< Peripheral Initialized and ready for use
DECL|HAL_SMARTCARD_STATE_RESET|enumerator|HAL_SMARTCARD_STATE_RESET = 0x00U, /*!< Peripheral is not initialized
DECL|HAL_SMARTCARD_STATE_TIMEOUT|enumerator|HAL_SMARTCARD_STATE_TIMEOUT = 0xA0U, /*!< Timeout state
DECL|HAL_SMARTCARD_StateTypeDef|typedef|} HAL_SMARTCARD_StateTypeDef;
DECL|HAL_SMARTCARD_TX_COMPLETE_CB_ID|enumerator|HAL_SMARTCARD_TX_COMPLETE_CB_ID = 0x00U, /*!< SMARTCARD Tx Complete Callback ID */
DECL|HAL_SMARTCARD_TX_FIFO_EMPTY_CB_ID|enumerator|HAL_SMARTCARD_TX_FIFO_EMPTY_CB_ID = 0x07U, /*!< SMARTCARD Tx Fifo Empty Callback ID */
DECL|IS_SMARTCARD_ADVFEATURE_DATAINV|macro|IS_SMARTCARD_ADVFEATURE_DATAINV
DECL|IS_SMARTCARD_ADVFEATURE_DMAONRXERROR|macro|IS_SMARTCARD_ADVFEATURE_DMAONRXERROR
DECL|IS_SMARTCARD_ADVFEATURE_INIT|macro|IS_SMARTCARD_ADVFEATURE_INIT
DECL|IS_SMARTCARD_ADVFEATURE_MSBFIRST|macro|IS_SMARTCARD_ADVFEATURE_MSBFIRST
DECL|IS_SMARTCARD_ADVFEATURE_RXINV|macro|IS_SMARTCARD_ADVFEATURE_RXINV
DECL|IS_SMARTCARD_ADVFEATURE_SWAP|macro|IS_SMARTCARD_ADVFEATURE_SWAP
DECL|IS_SMARTCARD_ADVFEATURE_TXINV|macro|IS_SMARTCARD_ADVFEATURE_TXINV
DECL|IS_SMARTCARD_AUTORETRY_COUNT|macro|IS_SMARTCARD_AUTORETRY_COUNT
DECL|IS_SMARTCARD_BAUDRATE|macro|IS_SMARTCARD_BAUDRATE
DECL|IS_SMARTCARD_BLOCKLENGTH|macro|IS_SMARTCARD_BLOCKLENGTH
DECL|IS_SMARTCARD_CLOCKPRESCALER|macro|IS_SMARTCARD_CLOCKPRESCALER
DECL|IS_SMARTCARD_LASTBIT|macro|IS_SMARTCARD_LASTBIT
DECL|IS_SMARTCARD_MODE|macro|IS_SMARTCARD_MODE
DECL|IS_SMARTCARD_NACK|macro|IS_SMARTCARD_NACK
DECL|IS_SMARTCARD_ONE_BIT_SAMPLE|macro|IS_SMARTCARD_ONE_BIT_SAMPLE
DECL|IS_SMARTCARD_OVERRUN|macro|IS_SMARTCARD_OVERRUN
DECL|IS_SMARTCARD_PARITY|macro|IS_SMARTCARD_PARITY
DECL|IS_SMARTCARD_PHASE|macro|IS_SMARTCARD_PHASE
DECL|IS_SMARTCARD_POLARITY|macro|IS_SMARTCARD_POLARITY
DECL|IS_SMARTCARD_REQUEST_PARAMETER|macro|IS_SMARTCARD_REQUEST_PARAMETER
DECL|IS_SMARTCARD_STOPBITS|macro|IS_SMARTCARD_STOPBITS
DECL|IS_SMARTCARD_TIMEOUT_VALUE|macro|IS_SMARTCARD_TIMEOUT_VALUE
DECL|IS_SMARTCARD_TIMEOUT|macro|IS_SMARTCARD_TIMEOUT
DECL|IS_SMARTCARD_WORD_LENGTH|macro|IS_SMARTCARD_WORD_LENGTH
DECL|Init|member|SMARTCARD_InitTypeDef Init; /*!< SmartCard communication parameters */
DECL|Instance|member|USART_TypeDef *Instance; /*!< USART registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|MSBFirst|member|uint32_t MSBFirst; /*!< Specifies whether MSB is sent first on UART line.
DECL|Mode|member|uint16_t Mode; /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Msp Init callback */
DECL|NACKEnable|member|uint16_t NACKEnable; /*!< Specifies whether the SmartCard NACK transmission is enabled
DECL|NbRxDataToProcess|member|uint16_t NbRxDataToProcess; /*!< Number of data to process during RX ISR execution */
DECL|NbTxDataToProcess|member|uint16_t NbTxDataToProcess; /*!< Number of data to process during TX ISR execution */
DECL|OneBitSampling|member|uint16_t OneBitSampling; /*!< Specifies whether a single sample or three samples' majority vote is selected.
DECL|OverrunDisable|member|uint32_t OverrunDisable; /*!< Specifies whether the reception overrun detection is disabled.
DECL|Parity|member|uint16_t Parity; /*!< Specifies the parity mode.
DECL|Prescaler|member|uint8_t Prescaler; /*!< Specifies the SmartCard Prescaler.
DECL|RxCpltCallback|member|void (* RxCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Rx Complete Callback */
DECL|RxFifoFullCallback|member|void (* RxFifoFullCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Rx Fifo Full Callback */
DECL|RxISR|member|void (*RxISR)(struct __SMARTCARD_HandleTypeDef *huart); /*!< Function pointer on Rx IRQ handler */
DECL|RxPinLevelInvert|member|uint32_t RxPinLevelInvert; /*!< Specifies whether the RX pin active level is inverted.
DECL|RxState|member|__IO HAL_SMARTCARD_StateTypeDef RxState; /*!< SmartCard state information related to Rx operations.
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /*!< SmartCard Rx Transfer Counter */
DECL|RxXferSize|member|uint16_t RxXferSize; /*!< SmartCard Rx Transfer size */
DECL|SMARTCARD_ADVFEATURE_DATAINV_DISABLE|macro|SMARTCARD_ADVFEATURE_DATAINV_DISABLE
DECL|SMARTCARD_ADVFEATURE_DATAINV_ENABLE|macro|SMARTCARD_ADVFEATURE_DATAINV_ENABLE
DECL|SMARTCARD_ADVFEATURE_DMA_DISABLEONRXERROR|macro|SMARTCARD_ADVFEATURE_DMA_DISABLEONRXERROR
DECL|SMARTCARD_ADVFEATURE_DMA_ENABLEONRXERROR|macro|SMARTCARD_ADVFEATURE_DMA_ENABLEONRXERROR
DECL|SMARTCARD_ADVFEATURE_MSBFIRST_DISABLE|macro|SMARTCARD_ADVFEATURE_MSBFIRST_DISABLE
DECL|SMARTCARD_ADVFEATURE_MSBFIRST_ENABLE|macro|SMARTCARD_ADVFEATURE_MSBFIRST_ENABLE
DECL|SMARTCARD_ADVFEATURE_OVERRUN_DISABLE|macro|SMARTCARD_ADVFEATURE_OVERRUN_DISABLE
DECL|SMARTCARD_ADVFEATURE_OVERRUN_ENABLE|macro|SMARTCARD_ADVFEATURE_OVERRUN_ENABLE
DECL|SMARTCARD_ADVFEATURE_RXINV_DISABLE|macro|SMARTCARD_ADVFEATURE_RXINV_DISABLE
DECL|SMARTCARD_ADVFEATURE_RXINV_ENABLE|macro|SMARTCARD_ADVFEATURE_RXINV_ENABLE
DECL|SMARTCARD_ADVFEATURE_SWAP_DISABLE|macro|SMARTCARD_ADVFEATURE_SWAP_DISABLE
DECL|SMARTCARD_ADVFEATURE_SWAP_ENABLE|macro|SMARTCARD_ADVFEATURE_SWAP_ENABLE
DECL|SMARTCARD_ADVFEATURE_TXINV_DISABLE|macro|SMARTCARD_ADVFEATURE_TXINV_DISABLE
DECL|SMARTCARD_ADVFEATURE_TXINV_ENABLE|macro|SMARTCARD_ADVFEATURE_TXINV_ENABLE
DECL|SMARTCARD_AdvFeatureInitTypeDef|typedef|} SMARTCARD_AdvFeatureInitTypeDef;
DECL|SMARTCARD_CLOCKSOURCE_HSI|enumerator|SMARTCARD_CLOCKSOURCE_HSI = 0x02, /*!< HSI clock source */
DECL|SMARTCARD_CLOCKSOURCE_LSE|enumerator|SMARTCARD_CLOCKSOURCE_LSE = 0x08, /*!< LSE clock source */
DECL|SMARTCARD_CLOCKSOURCE_PCLK1|enumerator|SMARTCARD_CLOCKSOURCE_PCLK1 = 0x00, /*!< PCLK1 clock source */
DECL|SMARTCARD_CLOCKSOURCE_PCLK2|enumerator|SMARTCARD_CLOCKSOURCE_PCLK2 = 0x01, /*!< PCLK2 clock source */
DECL|SMARTCARD_CLOCKSOURCE_SYSCLK|enumerator|SMARTCARD_CLOCKSOURCE_SYSCLK = 0x04, /*!< SYSCLK clock source */
DECL|SMARTCARD_CLOCKSOURCE_UNDEFINED|enumerator|SMARTCARD_CLOCKSOURCE_UNDEFINED = 0x10 /*!< undefined clock source */
DECL|SMARTCARD_ClockSourceTypeDef|typedef|} SMARTCARD_ClockSourceTypeDef;
DECL|SMARTCARD_GETCLOCKSOURCE|macro|SMARTCARD_GETCLOCKSOURCE
DECL|SMARTCARD_GETCLOCKSOURCE|macro|SMARTCARD_GETCLOCKSOURCE
DECL|SMARTCARD_HandleTypeDef|typedef|} SMARTCARD_HandleTypeDef;
DECL|SMARTCARD_IT_MASK|macro|SMARTCARD_IT_MASK
DECL|SMARTCARD_InitTypeDef|typedef|} SMARTCARD_InitTypeDef;
DECL|SMARTCARD_LASTBIT_DISABLE|macro|SMARTCARD_LASTBIT_DISABLE
DECL|SMARTCARD_LASTBIT_ENABLE|macro|SMARTCARD_LASTBIT_ENABLE
DECL|SMARTCARD_MODE_RX|macro|SMARTCARD_MODE_RX
DECL|SMARTCARD_MODE_TX_RX|macro|SMARTCARD_MODE_TX_RX
DECL|SMARTCARD_MODE_TX|macro|SMARTCARD_MODE_TX
DECL|SMARTCARD_NACK_DISABLE|macro|SMARTCARD_NACK_DISABLE
DECL|SMARTCARD_NACK_ENABLE|macro|SMARTCARD_NACK_ENABLE
DECL|SMARTCARD_ONE_BIT_SAMPLE_DISABLE|macro|SMARTCARD_ONE_BIT_SAMPLE_DISABLE
DECL|SMARTCARD_ONE_BIT_SAMPLE_ENABLE|macro|SMARTCARD_ONE_BIT_SAMPLE_ENABLE
DECL|SMARTCARD_PARITY_EVEN|macro|SMARTCARD_PARITY_EVEN
DECL|SMARTCARD_PARITY_ODD|macro|SMARTCARD_PARITY_ODD
DECL|SMARTCARD_PHASE_1EDGE|macro|SMARTCARD_PHASE_1EDGE
DECL|SMARTCARD_PHASE_2EDGE|macro|SMARTCARD_PHASE_2EDGE
DECL|SMARTCARD_POLARITY_HIGH|macro|SMARTCARD_POLARITY_HIGH
DECL|SMARTCARD_POLARITY_LOW|macro|SMARTCARD_POLARITY_LOW
DECL|SMARTCARD_PRESCALER_DIV10|macro|SMARTCARD_PRESCALER_DIV10
DECL|SMARTCARD_PRESCALER_DIV128|macro|SMARTCARD_PRESCALER_DIV128
DECL|SMARTCARD_PRESCALER_DIV12|macro|SMARTCARD_PRESCALER_DIV12
DECL|SMARTCARD_PRESCALER_DIV16|macro|SMARTCARD_PRESCALER_DIV16
DECL|SMARTCARD_PRESCALER_DIV1|macro|SMARTCARD_PRESCALER_DIV1
DECL|SMARTCARD_PRESCALER_DIV256|macro|SMARTCARD_PRESCALER_DIV256
DECL|SMARTCARD_PRESCALER_DIV2|macro|SMARTCARD_PRESCALER_DIV2
DECL|SMARTCARD_PRESCALER_DIV32|macro|SMARTCARD_PRESCALER_DIV32
DECL|SMARTCARD_PRESCALER_DIV4|macro|SMARTCARD_PRESCALER_DIV4
DECL|SMARTCARD_PRESCALER_DIV64|macro|SMARTCARD_PRESCALER_DIV64
DECL|SMARTCARD_PRESCALER_DIV6|macro|SMARTCARD_PRESCALER_DIV6
DECL|SMARTCARD_PRESCALER_DIV8|macro|SMARTCARD_PRESCALER_DIV8
DECL|SMARTCARD_RXDATA_FLUSH_REQUEST|macro|SMARTCARD_RXDATA_FLUSH_REQUEST
DECL|SMARTCARD_STOPBITS_0_5|macro|SMARTCARD_STOPBITS_0_5
DECL|SMARTCARD_STOPBITS_1_5|macro|SMARTCARD_STOPBITS_1_5
DECL|SMARTCARD_TIMEOUT_DISABLE|macro|SMARTCARD_TIMEOUT_DISABLE
DECL|SMARTCARD_TIMEOUT_ENABLE|macro|SMARTCARD_TIMEOUT_ENABLE
DECL|SMARTCARD_TXDATA_FLUSH_REQUEST|macro|SMARTCARD_TXDATA_FLUSH_REQUEST
DECL|SMARTCARD_WORDLENGTH_9B|macro|SMARTCARD_WORDLENGTH_9B
DECL|StopBits|member|uint32_t StopBits; /*!< Specifies the number of stop bits.
DECL|Swap|member|uint32_t Swap; /*!< Specifies whether TX and RX pins are swapped.
DECL|TimeOutEnable|member|uint32_t TimeOutEnable; /*!< Specifies whether the receiver timeout is enabled.
DECL|TimeOutValue|member|uint32_t TimeOutValue; /*!< Specifies the receiver time out value in number of baud blocks:
DECL|TxCompletionIndication|member|uint16_t TxCompletionIndication; /*!< Specifies which transmission completion indication is used: before (when
DECL|TxCpltCallback|member|void (* TxCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Tx Complete Callback */
DECL|TxFifoEmptyCallback|member|void (* TxFifoEmptyCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Tx Fifo Empty Callback */
DECL|TxISR|member|void (*TxISR)(struct __SMARTCARD_HandleTypeDef *huart); /*!< Function pointer on Tx IRQ handler */
DECL|TxPinLevelInvert|member|uint32_t TxPinLevelInvert; /*!< Specifies whether the TX pin active level is inverted.
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /*!< SmartCard Tx Transfer Counter */
DECL|TxXferSize|member|uint16_t TxXferSize; /*!< SmartCard Tx Transfer size */
DECL|WordLength|member|uint32_t WordLength; /*!< Specifies the number of data bits transmitted or received in a frame.
DECL|__HAL_SMARTCARD_CLEAR_FEFLAG|macro|__HAL_SMARTCARD_CLEAR_FEFLAG
DECL|__HAL_SMARTCARD_CLEAR_FLAG|macro|__HAL_SMARTCARD_CLEAR_FLAG
DECL|__HAL_SMARTCARD_CLEAR_IDLEFLAG|macro|__HAL_SMARTCARD_CLEAR_IDLEFLAG
DECL|__HAL_SMARTCARD_CLEAR_IT|macro|__HAL_SMARTCARD_CLEAR_IT
DECL|__HAL_SMARTCARD_CLEAR_NEFLAG|macro|__HAL_SMARTCARD_CLEAR_NEFLAG
DECL|__HAL_SMARTCARD_CLEAR_OREFLAG|macro|__HAL_SMARTCARD_CLEAR_OREFLAG
DECL|__HAL_SMARTCARD_CLEAR_PEFLAG|macro|__HAL_SMARTCARD_CLEAR_PEFLAG
DECL|__HAL_SMARTCARD_DISABLE_IT|macro|__HAL_SMARTCARD_DISABLE_IT
DECL|__HAL_SMARTCARD_DISABLE|macro|__HAL_SMARTCARD_DISABLE
DECL|__HAL_SMARTCARD_ENABLE_IT|macro|__HAL_SMARTCARD_ENABLE_IT
DECL|__HAL_SMARTCARD_ENABLE|macro|__HAL_SMARTCARD_ENABLE
DECL|__HAL_SMARTCARD_FLUSH_DRREGISTER|macro|__HAL_SMARTCARD_FLUSH_DRREGISTER
DECL|__HAL_SMARTCARD_GET_FLAG|macro|__HAL_SMARTCARD_GET_FLAG
DECL|__HAL_SMARTCARD_GET_IT_SOURCE|macro|__HAL_SMARTCARD_GET_IT_SOURCE
DECL|__HAL_SMARTCARD_GET_IT|macro|__HAL_SMARTCARD_GET_IT
DECL|__HAL_SMARTCARD_ONE_BIT_SAMPLE_DISABLE|macro|__HAL_SMARTCARD_ONE_BIT_SAMPLE_DISABLE
DECL|__HAL_SMARTCARD_ONE_BIT_SAMPLE_ENABLE|macro|__HAL_SMARTCARD_ONE_BIT_SAMPLE_ENABLE
DECL|__HAL_SMARTCARD_RESET_HANDLE_STATE|macro|__HAL_SMARTCARD_RESET_HANDLE_STATE
DECL|__HAL_SMARTCARD_RESET_HANDLE_STATE|macro|__HAL_SMARTCARD_RESET_HANDLE_STATE
DECL|__HAL_SMARTCARD_SEND_REQ|macro|__HAL_SMARTCARD_SEND_REQ
DECL|__SMARTCARD_HandleTypeDef|struct|typedef struct __SMARTCARD_HandleTypeDef
DECL|__STM32L4xx_HAL_SMARTCARD_H|macro|__STM32L4xx_HAL_SMARTCARD_H
DECL|gState|member|__IO HAL_SMARTCARD_StateTypeDef gState; /*!< SmartCard state information related to global Handle management
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< SmartCard Rx DMA Handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< SmartCard Tx DMA Handle parameters */
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /*!< Pointer to SmartCard Rx transfer Buffer */
DECL|pSMARTCARD_CallbackTypeDef|typedef|typedef void (*pSMARTCARD_CallbackTypeDef)(SMARTCARD_HandleTypeDef *hsmartcard); /*!< pointer to an SMARTCARD callback function */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /*!< Pointer to SmartCard Tx transfer Buffer */
