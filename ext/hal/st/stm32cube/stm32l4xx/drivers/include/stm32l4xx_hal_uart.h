DECL|AbortCpltCallback|member|void (* AbortCpltCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Abort Complete Callback */
DECL|AbortReceiveCpltCallback|member|void (* AbortReceiveCpltCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Abort Receive Complete Callback */
DECL|AbortTransmitCpltCallback|member|void (* AbortTransmitCpltCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Abort Transmit Complete Callback */
DECL|AdvFeatureInit|member|uint32_t AdvFeatureInit; /*!< Specifies which advanced UART features is initialized. Several
DECL|AdvancedInit|member|UART_AdvFeatureInitTypeDef AdvancedInit; /*!< UART Advanced Features initialization parameters */
DECL|AutoBaudRateEnable|member|uint32_t AutoBaudRateEnable; /*!< Specifies whether auto Baud rate detection is enabled.
DECL|AutoBaudRateMode|member|uint32_t AutoBaudRateMode; /*!< If auto Baud rate detection is enabled, specifies how the rate
DECL|BaudRate|member|uint32_t BaudRate; /*!< This member configures the UART communication baud rate.
DECL|ClockPrescaler|member|uint32_t ClockPrescaler; /*!< Specifies the prescaler value used to divide the UART clock source.
DECL|DMADisableonRxError|member|uint32_t DMADisableonRxError; /*!< Specifies whether the DMA is disabled in case of reception error.
DECL|DataInvert|member|uint32_t DataInvert; /*!< Specifies whether data are inverted (positive/direct logic
DECL|ErrorCallback|member|void (* ErrorCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Error Callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< UART Error code */
DECL|FifoMode|member|uint32_t FifoMode; /*!< Specifies if the FIFO mode is being used.
DECL|HAL_UART_ABORT_COMPLETE_CB_ID|enumerator|HAL_UART_ABORT_COMPLETE_CB_ID = 0x05U, /*!< UART Abort Complete Callback ID */
DECL|HAL_UART_ABORT_RECEIVE_COMPLETE_CB_ID|enumerator|HAL_UART_ABORT_RECEIVE_COMPLETE_CB_ID = 0x07U, /*!< UART Abort Receive Complete Callback ID */
DECL|HAL_UART_ABORT_TRANSMIT_COMPLETE_CB_ID|enumerator|HAL_UART_ABORT_TRANSMIT_COMPLETE_CB_ID = 0x06U, /*!< UART Abort Transmit Complete Callback ID */
DECL|HAL_UART_CallbackIDTypeDef|typedef|} HAL_UART_CallbackIDTypeDef;
DECL|HAL_UART_ERROR_CB_ID|enumerator|HAL_UART_ERROR_CB_ID = 0x04U, /*!< UART Error Callback ID */
DECL|HAL_UART_ERROR_DMA|macro|HAL_UART_ERROR_DMA
DECL|HAL_UART_ERROR_FE|macro|HAL_UART_ERROR_FE
DECL|HAL_UART_ERROR_INVALID_CALLBACK|macro|HAL_UART_ERROR_INVALID_CALLBACK
DECL|HAL_UART_ERROR_NE|macro|HAL_UART_ERROR_NE
DECL|HAL_UART_ERROR_NONE|macro|HAL_UART_ERROR_NONE
DECL|HAL_UART_ERROR_ORE|macro|HAL_UART_ERROR_ORE
DECL|HAL_UART_ERROR_PE|macro|HAL_UART_ERROR_PE
DECL|HAL_UART_MSPDEINIT_CB_ID|enumerator|HAL_UART_MSPDEINIT_CB_ID = 0x0CU /*!< UART MspDeInit callback ID */
DECL|HAL_UART_MSPINIT_CB_ID|enumerator|HAL_UART_MSPINIT_CB_ID = 0x0BU, /*!< UART MspInit callback ID */
DECL|HAL_UART_RX_COMPLETE_CB_ID|enumerator|HAL_UART_RX_COMPLETE_CB_ID = 0x03U, /*!< UART Rx Complete Callback ID */
DECL|HAL_UART_RX_FIFO_FULL_CB_ID|enumerator|HAL_UART_RX_FIFO_FULL_CB_ID = 0x09U, /*!< UART Rx Fifo Full Callback ID */
DECL|HAL_UART_RX_HALFCOMPLETE_CB_ID|enumerator|HAL_UART_RX_HALFCOMPLETE_CB_ID = 0x02U, /*!< UART Rx Half Complete Callback ID */
DECL|HAL_UART_STATE_BUSY_RX|enumerator|HAL_UART_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing
DECL|HAL_UART_STATE_BUSY_TX_RX|enumerator|HAL_UART_STATE_BUSY_TX_RX = 0x23U, /*!< Data Transmission and Reception process is ongoing
DECL|HAL_UART_STATE_BUSY_TX|enumerator|HAL_UART_STATE_BUSY_TX = 0x21U, /*!< Data Transmission process is ongoing
DECL|HAL_UART_STATE_BUSY|enumerator|HAL_UART_STATE_BUSY = 0x24U, /*!< an internal process is ongoing
DECL|HAL_UART_STATE_ERROR|enumerator|HAL_UART_STATE_ERROR = 0xE0U /*!< Error
DECL|HAL_UART_STATE_READY|enumerator|HAL_UART_STATE_READY = 0x20U, /*!< Peripheral Initialized and ready for use
DECL|HAL_UART_STATE_RESET|enumerator|HAL_UART_STATE_RESET = 0x00U, /*!< Peripheral is not initialized
DECL|HAL_UART_STATE_TIMEOUT|enumerator|HAL_UART_STATE_TIMEOUT = 0xA0U, /*!< Timeout state
DECL|HAL_UART_StateTypeDef|typedef|} HAL_UART_StateTypeDef;
DECL|HAL_UART_TIMEOUT_VALUE|macro|HAL_UART_TIMEOUT_VALUE
DECL|HAL_UART_TX_COMPLETE_CB_ID|enumerator|HAL_UART_TX_COMPLETE_CB_ID = 0x01U, /*!< UART Tx Complete Callback ID */
DECL|HAL_UART_TX_FIFO_EMPTY_CB_ID|enumerator|HAL_UART_TX_FIFO_EMPTY_CB_ID = 0x0AU, /*!< UART Tx Fifo Empty Callback ID */
DECL|HAL_UART_TX_HALFCOMPLETE_CB_ID|enumerator|HAL_UART_TX_HALFCOMPLETE_CB_ID = 0x00U, /*!< UART Tx Half Complete Callback ID */
DECL|HAL_UART_WAKEUP_CB_ID|enumerator|HAL_UART_WAKEUP_CB_ID = 0x08U, /*!< UART Wakeup Callback ID */
DECL|HwFlowCtl|member|uint32_t HwFlowCtl; /*!< Specifies whether the hardware flow control mode is enabled
DECL|IS_LPUART_STOPBITS|macro|IS_LPUART_STOPBITS
DECL|IS_UART_ADVFEATURE_AUTOBAUDRATEMODE|macro|IS_UART_ADVFEATURE_AUTOBAUDRATEMODE
DECL|IS_UART_ADVFEATURE_AUTOBAUDRATE|macro|IS_UART_ADVFEATURE_AUTOBAUDRATE
DECL|IS_UART_ADVFEATURE_DATAINV|macro|IS_UART_ADVFEATURE_DATAINV
DECL|IS_UART_ADVFEATURE_DMAONRXERROR|macro|IS_UART_ADVFEATURE_DMAONRXERROR
DECL|IS_UART_ADVFEATURE_INIT|macro|IS_UART_ADVFEATURE_INIT
DECL|IS_UART_ADVFEATURE_MSBFIRST|macro|IS_UART_ADVFEATURE_MSBFIRST
DECL|IS_UART_ADVFEATURE_RXINV|macro|IS_UART_ADVFEATURE_RXINV
DECL|IS_UART_ADVFEATURE_STOPMODE|macro|IS_UART_ADVFEATURE_STOPMODE
DECL|IS_UART_ADVFEATURE_SWAP|macro|IS_UART_ADVFEATURE_SWAP
DECL|IS_UART_ADVFEATURE_TXINV|macro|IS_UART_ADVFEATURE_TXINV
DECL|IS_UART_ASSERTIONTIME|macro|IS_UART_ASSERTIONTIME
DECL|IS_UART_BAUDRATE|macro|IS_UART_BAUDRATE
DECL|IS_UART_BAUDRATE|macro|IS_UART_BAUDRATE
DECL|IS_UART_DEASSERTIONTIME|macro|IS_UART_DEASSERTIONTIME
DECL|IS_UART_DE_POLARITY|macro|IS_UART_DE_POLARITY
DECL|IS_UART_DMA_RX|macro|IS_UART_DMA_RX
DECL|IS_UART_DMA_TX|macro|IS_UART_DMA_TX
DECL|IS_UART_HALF_DUPLEX|macro|IS_UART_HALF_DUPLEX
DECL|IS_UART_HARDWARE_FLOW_CONTROL|macro|IS_UART_HARDWARE_FLOW_CONTROL
DECL|IS_UART_LIN_BREAK_DETECT_LENGTH|macro|IS_UART_LIN_BREAK_DETECT_LENGTH
DECL|IS_UART_LIN|macro|IS_UART_LIN
DECL|IS_UART_MODE|macro|IS_UART_MODE
DECL|IS_UART_MUTE_MODE|macro|IS_UART_MUTE_MODE
DECL|IS_UART_ONE_BIT_SAMPLE|macro|IS_UART_ONE_BIT_SAMPLE
DECL|IS_UART_OVERRUN|macro|IS_UART_OVERRUN
DECL|IS_UART_OVERSAMPLING|macro|IS_UART_OVERSAMPLING
DECL|IS_UART_PARITY|macro|IS_UART_PARITY
DECL|IS_UART_PRESCALER|macro|IS_UART_PRESCALER
DECL|IS_UART_RECEIVER_TIMEOUT|macro|IS_UART_RECEIVER_TIMEOUT
DECL|IS_UART_REQUEST_PARAMETER|macro|IS_UART_REQUEST_PARAMETER
DECL|IS_UART_STATE|macro|IS_UART_STATE
DECL|IS_UART_STOPBITS|macro|IS_UART_STOPBITS
DECL|IS_UART_WAKEUPMETHOD|macro|IS_UART_WAKEUPMETHOD
DECL|IS_UART_WAKEUP_SELECTION|macro|IS_UART_WAKEUP_SELECTION
DECL|Init|member|UART_InitTypeDef Init; /*!< UART communication parameters */
DECL|Instance|member|USART_TypeDef *Instance; /*!< UART registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|MSBFirst|member|uint32_t MSBFirst; /*!< Specifies whether MSB is sent first on UART line.
DECL|Mask|member|uint16_t Mask; /*!< UART Rx RDR register mask */
DECL|Mode|member|uint32_t Mode; /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Msp Init callback */
DECL|NbRxDataToProcess|member|uint16_t NbRxDataToProcess; /*!< Number of data to process during RX ISR execution */
DECL|NbTxDataToProcess|member|uint16_t NbTxDataToProcess; /*!< Number of data to process during TX ISR execution */
DECL|OneBitSampling|member|uint32_t OneBitSampling; /*!< Specifies whether a single sample or three samples' majority vote is selected.
DECL|OverSampling|member|uint32_t OverSampling; /*!< Specifies whether the Over sampling 8 is enabled or disabled, to achieve higher speed (up to f_PCLK/8).
DECL|OverrunDisable|member|uint32_t OverrunDisable; /*!< Specifies whether the reception overrun detection is disabled.
DECL|Parity|member|uint32_t Parity; /*!< Specifies the parity mode.
DECL|RxCpltCallback|member|void (* RxCpltCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Rx Complete Callback */
DECL|RxFifoFullCallback|member|void (* RxFifoFullCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Rx Fifo Full Callback */
DECL|RxHalfCpltCallback|member|void (* RxHalfCpltCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Rx Half Complete Callback */
DECL|RxISR|member|void (*RxISR)(struct __UART_HandleTypeDef *huart); /*!< Function pointer on Rx IRQ handler */
DECL|RxPinLevelInvert|member|uint32_t RxPinLevelInvert; /*!< Specifies whether the RX pin active level is inverted.
DECL|RxState|member|__IO HAL_UART_StateTypeDef RxState; /*!< UART state information related to Rx operations.
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /*!< UART Rx Transfer Counter */
DECL|RxXferSize|member|uint16_t RxXferSize; /*!< UART Rx Transfer size */
DECL|StopBits|member|uint32_t StopBits; /*!< Specifies the number of stop bits transmitted.
DECL|Swap|member|uint32_t Swap; /*!< Specifies whether TX and RX pins are swapped.
DECL|TxCpltCallback|member|void (* TxCpltCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Tx Complete Callback */
DECL|TxFifoEmptyCallback|member|void (* TxFifoEmptyCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Tx Fifo Empty Callback */
DECL|TxHalfCpltCallback|member|void (* TxHalfCpltCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Tx Half Complete Callback */
DECL|TxISR|member|void (*TxISR)(struct __UART_HandleTypeDef *huart); /*!< Function pointer on Tx IRQ handler */
DECL|TxPinLevelInvert|member|uint32_t TxPinLevelInvert; /*!< Specifies whether the TX pin active level is inverted.
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /*!< UART Tx Transfer Counter */
DECL|TxXferSize|member|uint16_t TxXferSize; /*!< UART Tx Transfer size */
DECL|UART_ADVFEATURE_AUTOBAUDRATE_DISABLE|macro|UART_ADVFEATURE_AUTOBAUDRATE_DISABLE
DECL|UART_ADVFEATURE_AUTOBAUDRATE_ENABLE|macro|UART_ADVFEATURE_AUTOBAUDRATE_ENABLE
DECL|UART_ADVFEATURE_AUTOBAUDRATE_INIT|macro|UART_ADVFEATURE_AUTOBAUDRATE_INIT
DECL|UART_ADVFEATURE_AUTOBAUDRATE_ON0X55FRAME|macro|UART_ADVFEATURE_AUTOBAUDRATE_ON0X55FRAME
DECL|UART_ADVFEATURE_AUTOBAUDRATE_ON0X7FFRAME|macro|UART_ADVFEATURE_AUTOBAUDRATE_ON0X7FFRAME
DECL|UART_ADVFEATURE_AUTOBAUDRATE_ONFALLINGEDGE|macro|UART_ADVFEATURE_AUTOBAUDRATE_ONFALLINGEDGE
DECL|UART_ADVFEATURE_AUTOBAUDRATE_ONSTARTBIT|macro|UART_ADVFEATURE_AUTOBAUDRATE_ONSTARTBIT
DECL|UART_ADVFEATURE_DATAINVERT_INIT|macro|UART_ADVFEATURE_DATAINVERT_INIT
DECL|UART_ADVFEATURE_DATAINV_DISABLE|macro|UART_ADVFEATURE_DATAINV_DISABLE
DECL|UART_ADVFEATURE_DATAINV_ENABLE|macro|UART_ADVFEATURE_DATAINV_ENABLE
DECL|UART_ADVFEATURE_DMADISABLEONERROR_INIT|macro|UART_ADVFEATURE_DMADISABLEONERROR_INIT
DECL|UART_ADVFEATURE_DMA_DISABLEONRXERROR|macro|UART_ADVFEATURE_DMA_DISABLEONRXERROR
DECL|UART_ADVFEATURE_DMA_ENABLEONRXERROR|macro|UART_ADVFEATURE_DMA_ENABLEONRXERROR
DECL|UART_ADVFEATURE_MSBFIRST_DISABLE|macro|UART_ADVFEATURE_MSBFIRST_DISABLE
DECL|UART_ADVFEATURE_MSBFIRST_ENABLE|macro|UART_ADVFEATURE_MSBFIRST_ENABLE
DECL|UART_ADVFEATURE_MSBFIRST_INIT|macro|UART_ADVFEATURE_MSBFIRST_INIT
DECL|UART_ADVFEATURE_MUTEMODE_DISABLE|macro|UART_ADVFEATURE_MUTEMODE_DISABLE
DECL|UART_ADVFEATURE_MUTEMODE_ENABLE|macro|UART_ADVFEATURE_MUTEMODE_ENABLE
DECL|UART_ADVFEATURE_NO_INIT|macro|UART_ADVFEATURE_NO_INIT
DECL|UART_ADVFEATURE_OVERRUN_DISABLE|macro|UART_ADVFEATURE_OVERRUN_DISABLE
DECL|UART_ADVFEATURE_OVERRUN_ENABLE|macro|UART_ADVFEATURE_OVERRUN_ENABLE
DECL|UART_ADVFEATURE_RXINVERT_INIT|macro|UART_ADVFEATURE_RXINVERT_INIT
DECL|UART_ADVFEATURE_RXINV_DISABLE|macro|UART_ADVFEATURE_RXINV_DISABLE
DECL|UART_ADVFEATURE_RXINV_ENABLE|macro|UART_ADVFEATURE_RXINV_ENABLE
DECL|UART_ADVFEATURE_RXOVERRUNDISABLE_INIT|macro|UART_ADVFEATURE_RXOVERRUNDISABLE_INIT
DECL|UART_ADVFEATURE_STOPMODE_DISABLE|macro|UART_ADVFEATURE_STOPMODE_DISABLE
DECL|UART_ADVFEATURE_STOPMODE_ENABLE|macro|UART_ADVFEATURE_STOPMODE_ENABLE
DECL|UART_ADVFEATURE_SWAP_DISABLE|macro|UART_ADVFEATURE_SWAP_DISABLE
DECL|UART_ADVFEATURE_SWAP_ENABLE|macro|UART_ADVFEATURE_SWAP_ENABLE
DECL|UART_ADVFEATURE_SWAP_INIT|macro|UART_ADVFEATURE_SWAP_INIT
DECL|UART_ADVFEATURE_TXINVERT_INIT|macro|UART_ADVFEATURE_TXINVERT_INIT
DECL|UART_ADVFEATURE_TXINV_DISABLE|macro|UART_ADVFEATURE_TXINV_DISABLE
DECL|UART_ADVFEATURE_TXINV_ENABLE|macro|UART_ADVFEATURE_TXINV_ENABLE
DECL|UART_AUTOBAUD_REQUEST|macro|UART_AUTOBAUD_REQUEST
DECL|UART_AdvFeatureInitTypeDef|typedef|} UART_AdvFeatureInitTypeDef;
DECL|UART_CLEAR_CMF|macro|UART_CLEAR_CMF
DECL|UART_CLEAR_CTSF|macro|UART_CLEAR_CTSF
DECL|UART_CLEAR_FEF|macro|UART_CLEAR_FEF
DECL|UART_CLEAR_IDLEF|macro|UART_CLEAR_IDLEF
DECL|UART_CLEAR_LBDF|macro|UART_CLEAR_LBDF
DECL|UART_CLEAR_NEF|macro|UART_CLEAR_NEF
DECL|UART_CLEAR_OREF|macro|UART_CLEAR_OREF
DECL|UART_CLEAR_PEF|macro|UART_CLEAR_PEF
DECL|UART_CLEAR_TCF|macro|UART_CLEAR_TCF
DECL|UART_CLEAR_TXFECF|macro|UART_CLEAR_TXFECF
DECL|UART_CLEAR_WUF|macro|UART_CLEAR_WUF
DECL|UART_CLOCKSOURCE_HSI|enumerator|UART_CLOCKSOURCE_HSI = 0x02U, /*!< HSI clock source */
DECL|UART_CLOCKSOURCE_LSE|enumerator|UART_CLOCKSOURCE_LSE = 0x08U, /*!< LSE clock source */
DECL|UART_CLOCKSOURCE_PCLK1|enumerator|UART_CLOCKSOURCE_PCLK1 = 0x00U, /*!< PCLK1 clock source */
DECL|UART_CLOCKSOURCE_PCLK2|enumerator|UART_CLOCKSOURCE_PCLK2 = 0x01U, /*!< PCLK2 clock source */
DECL|UART_CLOCKSOURCE_SYSCLK|enumerator|UART_CLOCKSOURCE_SYSCLK = 0x04U, /*!< SYSCLK clock source */
DECL|UART_CLOCKSOURCE_UNDEFINED|enumerator|UART_CLOCKSOURCE_UNDEFINED = 0x10U /*!< Undefined clock source */
DECL|UART_CR1_DEAT_ADDRESS_LSB_POS|macro|UART_CR1_DEAT_ADDRESS_LSB_POS
DECL|UART_CR1_DEDT_ADDRESS_LSB_POS|macro|UART_CR1_DEDT_ADDRESS_LSB_POS
DECL|UART_CR2_ADDRESS_LSB_POS|macro|UART_CR2_ADDRESS_LSB_POS
DECL|UART_ClockSourceTypeDef|typedef|} UART_ClockSourceTypeDef;
DECL|UART_DE_POLARITY_HIGH|macro|UART_DE_POLARITY_HIGH
DECL|UART_DE_POLARITY_LOW|macro|UART_DE_POLARITY_LOW
DECL|UART_DIV_LPUART|macro|UART_DIV_LPUART
DECL|UART_DIV_LPUART|macro|UART_DIV_LPUART
DECL|UART_DIV_SAMPLING16|macro|UART_DIV_SAMPLING16
DECL|UART_DIV_SAMPLING16|macro|UART_DIV_SAMPLING16
DECL|UART_DIV_SAMPLING8|macro|UART_DIV_SAMPLING8
DECL|UART_DIV_SAMPLING8|macro|UART_DIV_SAMPLING8
DECL|UART_DMA_RX_DISABLE|macro|UART_DMA_RX_DISABLE
DECL|UART_DMA_RX_ENABLE|macro|UART_DMA_RX_ENABLE
DECL|UART_DMA_TX_DISABLE|macro|UART_DMA_TX_DISABLE
DECL|UART_DMA_TX_ENABLE|macro|UART_DMA_TX_ENABLE
DECL|UART_FLAG_ABRE|macro|UART_FLAG_ABRE
DECL|UART_FLAG_ABRF|macro|UART_FLAG_ABRF
DECL|UART_FLAG_BUSY|macro|UART_FLAG_BUSY
DECL|UART_FLAG_CMF|macro|UART_FLAG_CMF
DECL|UART_FLAG_CTSIF|macro|UART_FLAG_CTSIF
DECL|UART_FLAG_CTS|macro|UART_FLAG_CTS
DECL|UART_FLAG_FE|macro|UART_FLAG_FE
DECL|UART_FLAG_IDLE|macro|UART_FLAG_IDLE
DECL|UART_FLAG_LBDF|macro|UART_FLAG_LBDF
DECL|UART_FLAG_NE|macro|UART_FLAG_NE
DECL|UART_FLAG_ORE|macro|UART_FLAG_ORE
DECL|UART_FLAG_PE|macro|UART_FLAG_PE
DECL|UART_FLAG_REACK|macro|UART_FLAG_REACK
DECL|UART_FLAG_RWU|macro|UART_FLAG_RWU
DECL|UART_FLAG_RXFF|macro|UART_FLAG_RXFF
DECL|UART_FLAG_RXFNE|macro|UART_FLAG_RXFNE
DECL|UART_FLAG_RXFT|macro|UART_FLAG_RXFT
DECL|UART_FLAG_RXNE|macro|UART_FLAG_RXNE
DECL|UART_FLAG_RXNE|macro|UART_FLAG_RXNE
DECL|UART_FLAG_SBKF|macro|UART_FLAG_SBKF
DECL|UART_FLAG_TC|macro|UART_FLAG_TC
DECL|UART_FLAG_TEACK|macro|UART_FLAG_TEACK
DECL|UART_FLAG_TXE|macro|UART_FLAG_TXE
DECL|UART_FLAG_TXE|macro|UART_FLAG_TXE
DECL|UART_FLAG_TXFE|macro|UART_FLAG_TXFE
DECL|UART_FLAG_TXFNF|macro|UART_FLAG_TXFNF
DECL|UART_FLAG_TXFT|macro|UART_FLAG_TXFT
DECL|UART_FLAG_WUF|macro|UART_FLAG_WUF
DECL|UART_GET_DIV_FACTOR|macro|UART_GET_DIV_FACTOR
DECL|UART_HALF_DUPLEX_DISABLE|macro|UART_HALF_DUPLEX_DISABLE
DECL|UART_HALF_DUPLEX_ENABLE|macro|UART_HALF_DUPLEX_ENABLE
DECL|UART_HWCONTROL_CTS|macro|UART_HWCONTROL_CTS
DECL|UART_HWCONTROL_NONE|macro|UART_HWCONTROL_NONE
DECL|UART_HWCONTROL_RTS_CTS|macro|UART_HWCONTROL_RTS_CTS
DECL|UART_HWCONTROL_RTS|macro|UART_HWCONTROL_RTS
DECL|UART_HandleTypeDef|typedef|} UART_HandleTypeDef;
DECL|UART_INSTANCE_LOWPOWER|macro|UART_INSTANCE_LOWPOWER
DECL|UART_IT_CM|macro|UART_IT_CM
DECL|UART_IT_CTS|macro|UART_IT_CTS
DECL|UART_IT_ERR|macro|UART_IT_ERR
DECL|UART_IT_FE|macro|UART_IT_FE
DECL|UART_IT_IDLE|macro|UART_IT_IDLE
DECL|UART_IT_LBD|macro|UART_IT_LBD
DECL|UART_IT_MASK|macro|UART_IT_MASK
DECL|UART_IT_NE|macro|UART_IT_NE
DECL|UART_IT_ORE|macro|UART_IT_ORE
DECL|UART_IT_PE|macro|UART_IT_PE
DECL|UART_IT_RXFF|macro|UART_IT_RXFF
DECL|UART_IT_RXFNE|macro|UART_IT_RXFNE
DECL|UART_IT_RXFT|macro|UART_IT_RXFT
DECL|UART_IT_RXNE|macro|UART_IT_RXNE
DECL|UART_IT_TC|macro|UART_IT_TC
DECL|UART_IT_TXE|macro|UART_IT_TXE
DECL|UART_IT_TXFE|macro|UART_IT_TXFE
DECL|UART_IT_TXFNF|macro|UART_IT_TXFNF
DECL|UART_IT_TXFT|macro|UART_IT_TXFT
DECL|UART_IT_WUF|macro|UART_IT_WUF
DECL|UART_InitTypeDef|typedef|} UART_InitTypeDef;
DECL|UART_LINBREAKDETECTLENGTH_10B|macro|UART_LINBREAKDETECTLENGTH_10B
DECL|UART_LINBREAKDETECTLENGTH_11B|macro|UART_LINBREAKDETECTLENGTH_11B
DECL|UART_LIN_DISABLE|macro|UART_LIN_DISABLE
DECL|UART_LIN_ENABLE|macro|UART_LIN_ENABLE
DECL|UART_MODE_RX|macro|UART_MODE_RX
DECL|UART_MODE_TX_RX|macro|UART_MODE_TX_RX
DECL|UART_MODE_TX|macro|UART_MODE_TX
DECL|UART_MUTE_MODE_REQUEST|macro|UART_MUTE_MODE_REQUEST
DECL|UART_ONE_BIT_SAMPLE_DISABLE|macro|UART_ONE_BIT_SAMPLE_DISABLE
DECL|UART_ONE_BIT_SAMPLE_ENABLE|macro|UART_ONE_BIT_SAMPLE_ENABLE
DECL|UART_OVERSAMPLING_16|macro|UART_OVERSAMPLING_16
DECL|UART_OVERSAMPLING_8|macro|UART_OVERSAMPLING_8
DECL|UART_PARITY_EVEN|macro|UART_PARITY_EVEN
DECL|UART_PARITY_NONE|macro|UART_PARITY_NONE
DECL|UART_PARITY_ODD|macro|UART_PARITY_ODD
DECL|UART_PRESCALER_DIV10|macro|UART_PRESCALER_DIV10
DECL|UART_PRESCALER_DIV128|macro|UART_PRESCALER_DIV128
DECL|UART_PRESCALER_DIV12|macro|UART_PRESCALER_DIV12
DECL|UART_PRESCALER_DIV16|macro|UART_PRESCALER_DIV16
DECL|UART_PRESCALER_DIV1|macro|UART_PRESCALER_DIV1
DECL|UART_PRESCALER_DIV256|macro|UART_PRESCALER_DIV256
DECL|UART_PRESCALER_DIV2|macro|UART_PRESCALER_DIV2
DECL|UART_PRESCALER_DIV32|macro|UART_PRESCALER_DIV32
DECL|UART_PRESCALER_DIV4|macro|UART_PRESCALER_DIV4
DECL|UART_PRESCALER_DIV64|macro|UART_PRESCALER_DIV64
DECL|UART_PRESCALER_DIV6|macro|UART_PRESCALER_DIV6
DECL|UART_PRESCALER_DIV8|macro|UART_PRESCALER_DIV8
DECL|UART_RECEIVER_TIMEOUT_DISABLE|macro|UART_RECEIVER_TIMEOUT_DISABLE
DECL|UART_RECEIVER_TIMEOUT_ENABLE|macro|UART_RECEIVER_TIMEOUT_ENABLE
DECL|UART_RXDATA_FLUSH_REQUEST|macro|UART_RXDATA_FLUSH_REQUEST
DECL|UART_SENDBREAK_REQUEST|macro|UART_SENDBREAK_REQUEST
DECL|UART_STATE_DISABLE|macro|UART_STATE_DISABLE
DECL|UART_STATE_ENABLE|macro|UART_STATE_ENABLE
DECL|UART_STOPBITS_0_5|macro|UART_STOPBITS_0_5
DECL|UART_STOPBITS_1_5|macro|UART_STOPBITS_1_5
DECL|UART_STOPBITS_1|macro|UART_STOPBITS_1
DECL|UART_STOPBITS_2|macro|UART_STOPBITS_2
DECL|UART_TXDATA_FLUSH_REQUEST|macro|UART_TXDATA_FLUSH_REQUEST
DECL|UART_WAKEUPMETHOD_ADDRESSMARK|macro|UART_WAKEUPMETHOD_ADDRESSMARK
DECL|UART_WAKEUPMETHOD_IDLELINE|macro|UART_WAKEUPMETHOD_IDLELINE
DECL|UART_WAKEUP_ON_ADDRESS|macro|UART_WAKEUP_ON_ADDRESS
DECL|UART_WAKEUP_ON_READDATA_NONEMPTY|macro|UART_WAKEUP_ON_READDATA_NONEMPTY
DECL|UART_WAKEUP_ON_STARTBIT|macro|UART_WAKEUP_ON_STARTBIT
DECL|WakeupCallback|member|void (* WakeupCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Wakeup Callback */
DECL|WordLength|member|uint32_t WordLength; /*!< Specifies the number of data bits transmitted or received in a frame.
DECL|__HAL_UART_CLEAR_FEFLAG|macro|__HAL_UART_CLEAR_FEFLAG
DECL|__HAL_UART_CLEAR_FLAG|macro|__HAL_UART_CLEAR_FLAG
DECL|__HAL_UART_CLEAR_IDLEFLAG|macro|__HAL_UART_CLEAR_IDLEFLAG
DECL|__HAL_UART_CLEAR_IT|macro|__HAL_UART_CLEAR_IT
DECL|__HAL_UART_CLEAR_NEFLAG|macro|__HAL_UART_CLEAR_NEFLAG
DECL|__HAL_UART_CLEAR_OREFLAG|macro|__HAL_UART_CLEAR_OREFLAG
DECL|__HAL_UART_CLEAR_PEFLAG|macro|__HAL_UART_CLEAR_PEFLAG
DECL|__HAL_UART_CLEAR_TXFECF|macro|__HAL_UART_CLEAR_TXFECF
DECL|__HAL_UART_DISABLE_IT|macro|__HAL_UART_DISABLE_IT
DECL|__HAL_UART_DISABLE|macro|__HAL_UART_DISABLE
DECL|__HAL_UART_ENABLE_IT|macro|__HAL_UART_ENABLE_IT
DECL|__HAL_UART_ENABLE|macro|__HAL_UART_ENABLE
DECL|__HAL_UART_FLUSH_DRREGISTER|macro|__HAL_UART_FLUSH_DRREGISTER
DECL|__HAL_UART_GET_FLAG|macro|__HAL_UART_GET_FLAG
DECL|__HAL_UART_GET_IT_SOURCE|macro|__HAL_UART_GET_IT_SOURCE
DECL|__HAL_UART_GET_IT|macro|__HAL_UART_GET_IT
DECL|__HAL_UART_HWCONTROL_CTS_DISABLE|macro|__HAL_UART_HWCONTROL_CTS_DISABLE
DECL|__HAL_UART_HWCONTROL_CTS_ENABLE|macro|__HAL_UART_HWCONTROL_CTS_ENABLE
DECL|__HAL_UART_HWCONTROL_RTS_DISABLE|macro|__HAL_UART_HWCONTROL_RTS_DISABLE
DECL|__HAL_UART_HWCONTROL_RTS_ENABLE|macro|__HAL_UART_HWCONTROL_RTS_ENABLE
DECL|__HAL_UART_ONE_BIT_SAMPLE_DISABLE|macro|__HAL_UART_ONE_BIT_SAMPLE_DISABLE
DECL|__HAL_UART_ONE_BIT_SAMPLE_ENABLE|macro|__HAL_UART_ONE_BIT_SAMPLE_ENABLE
DECL|__HAL_UART_RESET_HANDLE_STATE|macro|__HAL_UART_RESET_HANDLE_STATE
DECL|__HAL_UART_RESET_HANDLE_STATE|macro|__HAL_UART_RESET_HANDLE_STATE
DECL|__HAL_UART_SEND_REQ|macro|__HAL_UART_SEND_REQ
DECL|__STM32L4xx_HAL_UART_H|macro|__STM32L4xx_HAL_UART_H
DECL|__UART_HandleTypeDef|struct|typedef struct __UART_HandleTypeDef
DECL|gState|member|__IO HAL_UART_StateTypeDef gState; /*!< UART state information related to global Handle management
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< UART Rx DMA Handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< UART Tx DMA Handle parameters */
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /*!< Pointer to UART Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /*!< Pointer to UART Tx transfer Buffer */
DECL|pUART_CallbackTypeDef|typedef|typedef void (*pUART_CallbackTypeDef)(UART_HandleTypeDef *huart); /*!< pointer to an UART callback function */
