DECL|AdvFeatureInit|member|uint32_t AdvFeatureInit; /*!< Specifies which advanced UART features is initialized. Several
DECL|AdvancedInit|member|UART_AdvFeatureInitTypeDef AdvancedInit; /*!< UART Advanced Features initialization parameters */
DECL|AutoBaudRateEnable|member|uint32_t AutoBaudRateEnable; /*!< Specifies whether auto Baud rate detection is enabled.
DECL|AutoBaudRateMode|member|uint32_t AutoBaudRateMode; /*!< If auto Baud rate detection is enabled, specifies how the rate
DECL|BaudRate|member|uint32_t BaudRate; /*!< This member configures the UART communication baud rate.
DECL|DMADisableonRxError|member|uint32_t DMADisableonRxError; /*!< Specifies whether the DMA is disabled in case of reception error.
DECL|DataInvert|member|uint32_t DataInvert; /*!< Specifies whether data are inverted (positive/direct logic
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< UART Error code */
DECL|HAL_UART_ERROR_BUSY|macro|HAL_UART_ERROR_BUSY
DECL|HAL_UART_ERROR_DMA|macro|HAL_UART_ERROR_DMA
DECL|HAL_UART_ERROR_FE|macro|HAL_UART_ERROR_FE
DECL|HAL_UART_ERROR_NE|macro|HAL_UART_ERROR_NE
DECL|HAL_UART_ERROR_NONE|macro|HAL_UART_ERROR_NONE
DECL|HAL_UART_ERROR_ORE|macro|HAL_UART_ERROR_ORE
DECL|HAL_UART_ERROR_PE|macro|HAL_UART_ERROR_PE
DECL|HAL_UART_STATE_BUSY_RX|enumerator|HAL_UART_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing
DECL|HAL_UART_STATE_BUSY_TX_RX|enumerator|HAL_UART_STATE_BUSY_TX_RX = 0x23U, /*!< Data Transmission and Reception process is ongoing
DECL|HAL_UART_STATE_BUSY_TX|enumerator|HAL_UART_STATE_BUSY_TX = 0x21U, /*!< Data Transmission process is ongoing
DECL|HAL_UART_STATE_BUSY|enumerator|HAL_UART_STATE_BUSY = 0x24U, /*!< an internal process is ongoing
DECL|HAL_UART_STATE_ERROR|enumerator|HAL_UART_STATE_ERROR = 0xE0U /*!< Error
DECL|HAL_UART_STATE_READY|enumerator|HAL_UART_STATE_READY = 0x20U, /*!< Peripheral Initialized and ready for use
DECL|HAL_UART_STATE_RESET|enumerator|HAL_UART_STATE_RESET = 0x00U, /*!< Peripheral is not initialized
DECL|HAL_UART_STATE_TIMEOUT|enumerator|HAL_UART_STATE_TIMEOUT = 0xA0U, /*!< Timeout state
DECL|HAL_UART_StateTypeDef|typedef|}HAL_UART_StateTypeDef;
DECL|HAL_UART_TIMEOUT_VALUE|macro|HAL_UART_TIMEOUT_VALUE
DECL|HwFlowCtl|member|uint32_t HwFlowCtl; /*!< Specifies whether the hardware flow control mode is enabled
DECL|IS_UART_ADDRESSLENGTH_DETECT|macro|IS_UART_ADDRESSLENGTH_DETECT
DECL|IS_UART_ADVFEATURE_AUTOBAUDRATE|macro|IS_UART_ADVFEATURE_AUTOBAUDRATE
DECL|IS_UART_ADVFEATURE_DATAINV|macro|IS_UART_ADVFEATURE_DATAINV
DECL|IS_UART_ADVFEATURE_DMAONRXERROR|macro|IS_UART_ADVFEATURE_DMAONRXERROR
DECL|IS_UART_ADVFEATURE_INIT|macro|IS_UART_ADVFEATURE_INIT
DECL|IS_UART_ADVFEATURE_MSBFIRST|macro|IS_UART_ADVFEATURE_MSBFIRST
DECL|IS_UART_ADVFEATURE_RXINV|macro|IS_UART_ADVFEATURE_RXINV
DECL|IS_UART_ADVFEATURE_SWAP|macro|IS_UART_ADVFEATURE_SWAP
DECL|IS_UART_ADVFEATURE_TXINV|macro|IS_UART_ADVFEATURE_TXINV
DECL|IS_UART_ASSERTIONTIME|macro|IS_UART_ASSERTIONTIME
DECL|IS_UART_BAUDRATE|macro|IS_UART_BAUDRATE
DECL|IS_UART_DEASSERTIONTIME|macro|IS_UART_DEASSERTIONTIME
DECL|IS_UART_DE_POLARITY|macro|IS_UART_DE_POLARITY
DECL|IS_UART_DMA_RX|macro|IS_UART_DMA_RX
DECL|IS_UART_DMA_TX|macro|IS_UART_DMA_TX
DECL|IS_UART_HALF_DUPLEX|macro|IS_UART_HALF_DUPLEX
DECL|IS_UART_HARDWARE_FLOW_CONTROL|macro|IS_UART_HARDWARE_FLOW_CONTROL
DECL|IS_UART_MODE|macro|IS_UART_MODE
DECL|IS_UART_MUTE_MODE|macro|IS_UART_MUTE_MODE
DECL|IS_UART_ONE_BIT_SAMPLE|macro|IS_UART_ONE_BIT_SAMPLE
DECL|IS_UART_OVERRUN|macro|IS_UART_OVERRUN
DECL|IS_UART_OVERSAMPLING|macro|IS_UART_OVERSAMPLING
DECL|IS_UART_PARITY|macro|IS_UART_PARITY
DECL|IS_UART_RECEIVER_TIMEOUT|macro|IS_UART_RECEIVER_TIMEOUT
DECL|IS_UART_STATE|macro|IS_UART_STATE
DECL|IS_UART_STOPBITS|macro|IS_UART_STOPBITS
DECL|IS_UART_STOPBITS|macro|IS_UART_STOPBITS
DECL|IS_UART_WAKEUPMETHOD|macro|IS_UART_WAKEUPMETHOD
DECL|Init|member|UART_InitTypeDef Init; /*!< UART communication parameters */
DECL|Instance|member|USART_TypeDef *Instance; /*!< UART registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|MSBFirst|member|uint32_t MSBFirst; /*!< Specifies whether MSB is sent first on UART line.
DECL|Mask|member|uint16_t Mask; /*!< UART Rx RDR register mask */
DECL|Mode|member|uint32_t Mode; /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
DECL|OneBitSampling|member|uint32_t OneBitSampling; /*!< Specifies whether a single sample or three samples' majority vote is selected.
DECL|OverSampling|member|uint32_t OverSampling; /*!< Specifies whether the Over sampling 8 is enabled or disabled, to achieve higher speed (up to f_PCLK/8).
DECL|OverrunDisable|member|uint32_t OverrunDisable; /*!< Specifies whether the reception overrun detection is disabled.
DECL|Parity|member|uint32_t Parity; /*!< Specifies the parity mode.
DECL|RxPinLevelInvert|member|uint32_t RxPinLevelInvert; /*!< Specifies whether the RX pin active level is inverted.
DECL|RxState|member|__IO HAL_UART_StateTypeDef RxState; /*!< UART state information related to Rx operations.
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /*!< UART Rx Transfer Counter */
DECL|RxXferSize|member|uint16_t RxXferSize; /*!< UART Rx Transfer size */
DECL|StopBits|member|uint32_t StopBits; /*!< Specifies the number of stop bits transmitted.
DECL|Swap|member|uint32_t Swap; /*!< Specifies whether TX and RX pins are swapped.
DECL|TxPinLevelInvert|member|uint32_t TxPinLevelInvert; /*!< Specifies whether the TX pin active level is inverted.
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /*!< UART Tx Transfer Counter */
DECL|TxXferSize|member|uint16_t TxXferSize; /*!< UART Tx Transfer size */
DECL|UART_ADDRESS_DETECT_4B|macro|UART_ADDRESS_DETECT_4B
DECL|UART_ADDRESS_DETECT_7B|macro|UART_ADDRESS_DETECT_7B
DECL|UART_ADVFEATURE_AUTOBAUDRATE_DISABLE|macro|UART_ADVFEATURE_AUTOBAUDRATE_DISABLE
DECL|UART_ADVFEATURE_AUTOBAUDRATE_ENABLE|macro|UART_ADVFEATURE_AUTOBAUDRATE_ENABLE
DECL|UART_ADVFEATURE_AUTOBAUDRATE_INIT|macro|UART_ADVFEATURE_AUTOBAUDRATE_INIT
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
DECL|UART_ADVFEATURE_SWAP_DISABLE|macro|UART_ADVFEATURE_SWAP_DISABLE
DECL|UART_ADVFEATURE_SWAP_ENABLE|macro|UART_ADVFEATURE_SWAP_ENABLE
DECL|UART_ADVFEATURE_SWAP_INIT|macro|UART_ADVFEATURE_SWAP_INIT
DECL|UART_ADVFEATURE_TXINVERT_INIT|macro|UART_ADVFEATURE_TXINVERT_INIT
DECL|UART_ADVFEATURE_TXINV_DISABLE|macro|UART_ADVFEATURE_TXINV_DISABLE
DECL|UART_ADVFEATURE_TXINV_ENABLE|macro|UART_ADVFEATURE_TXINV_ENABLE
DECL|UART_AdvFeatureInitTypeDef|typedef|} UART_AdvFeatureInitTypeDef;
DECL|UART_CLOCKSOURCE_HSI|enumerator|UART_CLOCKSOURCE_HSI = 0x02U, /*!< HSI clock source */
DECL|UART_CLOCKSOURCE_LSE|enumerator|UART_CLOCKSOURCE_LSE = 0x08U, /*!< LSE clock source */
DECL|UART_CLOCKSOURCE_PCLK1|enumerator|UART_CLOCKSOURCE_PCLK1 = 0x00U, /*!< PCLK1 clock source */
DECL|UART_CLOCKSOURCE_SYSCLK|enumerator|UART_CLOCKSOURCE_SYSCLK = 0x04U, /*!< SYSCLK clock source */
DECL|UART_CLOCKSOURCE_UNDEFINED|enumerator|UART_CLOCKSOURCE_UNDEFINED = 0x10U /*!< Undefined clock source */
DECL|UART_CR1_DEAT_ADDRESS_LSB_POS|macro|UART_CR1_DEAT_ADDRESS_LSB_POS
DECL|UART_CR1_DEDT_ADDRESS_LSB_POS|macro|UART_CR1_DEDT_ADDRESS_LSB_POS
DECL|UART_CR2_ADDRESS_LSB_POS|macro|UART_CR2_ADDRESS_LSB_POS
DECL|UART_ClockSourceTypeDef|typedef|}UART_ClockSourceTypeDef;
DECL|UART_DE_POLARITY_HIGH|macro|UART_DE_POLARITY_HIGH
DECL|UART_DE_POLARITY_LOW|macro|UART_DE_POLARITY_LOW
DECL|UART_DIV_SAMPLING16|macro|UART_DIV_SAMPLING16
DECL|UART_DIV_SAMPLING8|macro|UART_DIV_SAMPLING8
DECL|UART_DMA_RX_DISABLE|macro|UART_DMA_RX_DISABLE
DECL|UART_DMA_RX_ENABLE|macro|UART_DMA_RX_ENABLE
DECL|UART_DMA_TX_DISABLE|macro|UART_DMA_TX_DISABLE
DECL|UART_DMA_TX_ENABLE|macro|UART_DMA_TX_ENABLE
DECL|UART_HALF_DUPLEX_DISABLE|macro|UART_HALF_DUPLEX_DISABLE
DECL|UART_HALF_DUPLEX_ENABLE|macro|UART_HALF_DUPLEX_ENABLE
DECL|UART_HWCONTROL_CTS|macro|UART_HWCONTROL_CTS
DECL|UART_HWCONTROL_NONE|macro|UART_HWCONTROL_NONE
DECL|UART_HWCONTROL_RTS_CTS|macro|UART_HWCONTROL_RTS_CTS
DECL|UART_HWCONTROL_RTS|macro|UART_HWCONTROL_RTS
DECL|UART_HandleTypeDef|typedef|}UART_HandleTypeDef;
DECL|UART_IT_ERR|macro|UART_IT_ERR
DECL|UART_IT_FE|macro|UART_IT_FE
DECL|UART_IT_MASK|macro|UART_IT_MASK
DECL|UART_IT_NE|macro|UART_IT_NE
DECL|UART_IT_ORE|macro|UART_IT_ORE
DECL|UART_InitTypeDef|typedef|}UART_InitTypeDef;
DECL|UART_MODE_RX|macro|UART_MODE_RX
DECL|UART_MODE_TX_RX|macro|UART_MODE_TX_RX
DECL|UART_MODE_TX|macro|UART_MODE_TX
DECL|UART_ONE_BIT_SAMPLE_DISABLE|macro|UART_ONE_BIT_SAMPLE_DISABLE
DECL|UART_ONE_BIT_SAMPLE_ENABLE|macro|UART_ONE_BIT_SAMPLE_ENABLE
DECL|UART_OVERSAMPLING_16|macro|UART_OVERSAMPLING_16
DECL|UART_OVERSAMPLING_8|macro|UART_OVERSAMPLING_8
DECL|UART_PARITY_EVEN|macro|UART_PARITY_EVEN
DECL|UART_PARITY_NONE|macro|UART_PARITY_NONE
DECL|UART_PARITY_ODD|macro|UART_PARITY_ODD
DECL|UART_RECEIVER_TIMEOUT_DISABLE|macro|UART_RECEIVER_TIMEOUT_DISABLE
DECL|UART_RECEIVER_TIMEOUT_ENABLE|macro|UART_RECEIVER_TIMEOUT_ENABLE
DECL|UART_STATE_DISABLE|macro|UART_STATE_DISABLE
DECL|UART_STATE_ENABLE|macro|UART_STATE_ENABLE
DECL|UART_STOPBITS_0_5|macro|UART_STOPBITS_0_5
DECL|UART_STOPBITS_1_5|macro|UART_STOPBITS_1_5
DECL|UART_STOPBITS_1|macro|UART_STOPBITS_1
DECL|UART_STOPBITS_1|macro|UART_STOPBITS_1
DECL|UART_STOPBITS_2|macro|UART_STOPBITS_2
DECL|UART_STOPBITS_2|macro|UART_STOPBITS_2
DECL|UART_WAKEUPMETHOD_ADDRESSMARK|macro|UART_WAKEUPMETHOD_ADDRESSMARK
DECL|UART_WAKEUPMETHOD_IDLELINE|macro|UART_WAKEUPMETHOD_IDLELINE
DECL|WordLength|member|uint32_t WordLength; /*!< Specifies the number of data bits transmitted or received in a frame.
DECL|__HAL_UART_CLEAR_FEFLAG|macro|__HAL_UART_CLEAR_FEFLAG
DECL|__HAL_UART_CLEAR_FLAG|macro|__HAL_UART_CLEAR_FLAG
DECL|__HAL_UART_CLEAR_IDLEFLAG|macro|__HAL_UART_CLEAR_IDLEFLAG
DECL|__HAL_UART_CLEAR_IT|macro|__HAL_UART_CLEAR_IT
DECL|__HAL_UART_CLEAR_NEFLAG|macro|__HAL_UART_CLEAR_NEFLAG
DECL|__HAL_UART_CLEAR_OREFLAG|macro|__HAL_UART_CLEAR_OREFLAG
DECL|__HAL_UART_CLEAR_PEFLAG|macro|__HAL_UART_CLEAR_PEFLAG
DECL|__HAL_UART_DISABLE_IT|macro|__HAL_UART_DISABLE_IT
DECL|__HAL_UART_DISABLE|macro|__HAL_UART_DISABLE
DECL|__HAL_UART_ENABLE_IT|macro|__HAL_UART_ENABLE_IT
DECL|__HAL_UART_ENABLE|macro|__HAL_UART_ENABLE
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
DECL|__HAL_UART_SEND_REQ|macro|__HAL_UART_SEND_REQ
DECL|__STM32F0xx_HAL_UART_H|macro|__STM32F0xx_HAL_UART_H
DECL|gState|member|__IO HAL_UART_StateTypeDef gState; /*!< UART state information related to global Handle management
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< UART Rx DMA Handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< UART Tx DMA Handle parameters */
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /*!< Pointer to UART Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /*!< Pointer to UART Tx transfer Buffer */
