DECL|BaudRate|member|uint32_t BaudRate; /*!< This member configures the SmartCard communication baud rate.
DECL|CLKLastBit|member|uint32_t CLKLastBit; /*!< Specifies whether the clock pulse corresponding to the last transmitted
DECL|CLKPhase|member|uint32_t CLKPhase; /*!< Specifies the clock transition on which the bit capture is made.
DECL|CLKPolarity|member|uint32_t CLKPolarity; /*!< Specifies the steady state of the serial clock.
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< SmartCard Error code */
DECL|GuardTime|member|uint32_t GuardTime; /*!< Specifies the SmartCard Guard Time value in terms of number of baud clocks */
DECL|HAL_SMARTCARD_ERROR_DMA|macro|HAL_SMARTCARD_ERROR_DMA
DECL|HAL_SMARTCARD_ERROR_FE|macro|HAL_SMARTCARD_ERROR_FE
DECL|HAL_SMARTCARD_ERROR_NE|macro|HAL_SMARTCARD_ERROR_NE
DECL|HAL_SMARTCARD_ERROR_NONE|macro|HAL_SMARTCARD_ERROR_NONE
DECL|HAL_SMARTCARD_ERROR_ORE|macro|HAL_SMARTCARD_ERROR_ORE
DECL|HAL_SMARTCARD_ERROR_PE|macro|HAL_SMARTCARD_ERROR_PE
DECL|HAL_SMARTCARD_STATE_BUSY_RX|enumerator|HAL_SMARTCARD_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing
DECL|HAL_SMARTCARD_STATE_BUSY_TX_RX|enumerator|HAL_SMARTCARD_STATE_BUSY_TX_RX = 0x23U, /*!< Data Transmission and Reception process is ongoing
DECL|HAL_SMARTCARD_STATE_BUSY_TX|enumerator|HAL_SMARTCARD_STATE_BUSY_TX = 0x21U, /*!< Data Transmission process is ongoing
DECL|HAL_SMARTCARD_STATE_BUSY|enumerator|HAL_SMARTCARD_STATE_BUSY = 0x24U, /*!< an internal process is ongoing
DECL|HAL_SMARTCARD_STATE_ERROR|enumerator|HAL_SMARTCARD_STATE_ERROR = 0xE0U /*!< Error
DECL|HAL_SMARTCARD_STATE_READY|enumerator|HAL_SMARTCARD_STATE_READY = 0x20U, /*!< Peripheral Initialized and ready for use
DECL|HAL_SMARTCARD_STATE_RESET|enumerator|HAL_SMARTCARD_STATE_RESET = 0x00U, /*!< Peripheral is not yet Initialized
DECL|HAL_SMARTCARD_STATE_TIMEOUT|enumerator|HAL_SMARTCARD_STATE_TIMEOUT = 0xA0U, /*!< Timeout state
DECL|HAL_SMARTCARD_StateTypeDef|typedef|} HAL_SMARTCARD_StateTypeDef;
DECL|IS_SMARTCARD_BAUDRATE|macro|IS_SMARTCARD_BAUDRATE
DECL|IS_SMARTCARD_LASTBIT|macro|IS_SMARTCARD_LASTBIT
DECL|IS_SMARTCARD_MODE|macro|IS_SMARTCARD_MODE
DECL|IS_SMARTCARD_NACK_STATE|macro|IS_SMARTCARD_NACK_STATE
DECL|IS_SMARTCARD_PARITY|macro|IS_SMARTCARD_PARITY
DECL|IS_SMARTCARD_PHASE|macro|IS_SMARTCARD_PHASE
DECL|IS_SMARTCARD_POLARITY|macro|IS_SMARTCARD_POLARITY
DECL|IS_SMARTCARD_STOPBITS|macro|IS_SMARTCARD_STOPBITS
DECL|IS_SMARTCARD_WORD_LENGTH|macro|IS_SMARTCARD_WORD_LENGTH
DECL|Init|member|SMARTCARD_InitTypeDef Init; /*!< SmartCard communication parameters */
DECL|Instance|member|USART_TypeDef *Instance; /*!< USART registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|Mode|member|uint32_t Mode; /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
DECL|NACKState|member|uint32_t NACKState; /*!< Specifies the SmartCard NACK Transmission state
DECL|Parity|member|uint32_t Parity; /*!< Specifies the parity mode.
DECL|Prescaler|member|uint32_t Prescaler; /*!< Specifies the SmartCard Prescaler value used for dividing the system clock
DECL|RxState|member|__IO HAL_SMARTCARD_StateTypeDef RxState; /*!< SmartCard state information related to Rx operations.
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /*!< SmartCard Rx Transfer Counter */
DECL|RxXferSize|member|uint16_t RxXferSize; /*!< SmartCard Rx Transfer size */
DECL|SMARTCARD_BRR|macro|SMARTCARD_BRR
DECL|SMARTCARD_CR1_REG_INDEX|macro|SMARTCARD_CR1_REG_INDEX
DECL|SMARTCARD_CR3_REG_INDEX|macro|SMARTCARD_CR3_REG_INDEX
DECL|SMARTCARD_DIVFRAQ|macro|SMARTCARD_DIVFRAQ
DECL|SMARTCARD_DIVMANT|macro|SMARTCARD_DIVMANT
DECL|SMARTCARD_DIV|macro|SMARTCARD_DIV
DECL|SMARTCARD_DMAREQ_RX|macro|SMARTCARD_DMAREQ_RX
DECL|SMARTCARD_DMAREQ_TX|macro|SMARTCARD_DMAREQ_TX
DECL|SMARTCARD_FLAG_FE|macro|SMARTCARD_FLAG_FE
DECL|SMARTCARD_FLAG_IDLE|macro|SMARTCARD_FLAG_IDLE
DECL|SMARTCARD_FLAG_NE|macro|SMARTCARD_FLAG_NE
DECL|SMARTCARD_FLAG_ORE|macro|SMARTCARD_FLAG_ORE
DECL|SMARTCARD_FLAG_PE|macro|SMARTCARD_FLAG_PE
DECL|SMARTCARD_FLAG_RXNE|macro|SMARTCARD_FLAG_RXNE
DECL|SMARTCARD_FLAG_TC|macro|SMARTCARD_FLAG_TC
DECL|SMARTCARD_FLAG_TXE|macro|SMARTCARD_FLAG_TXE
DECL|SMARTCARD_HandleTypeDef|typedef|} SMARTCARD_HandleTypeDef;
DECL|SMARTCARD_IT_ERR|macro|SMARTCARD_IT_ERR
DECL|SMARTCARD_IT_IDLE|macro|SMARTCARD_IT_IDLE
DECL|SMARTCARD_IT_MASK|macro|SMARTCARD_IT_MASK
DECL|SMARTCARD_IT_PE|macro|SMARTCARD_IT_PE
DECL|SMARTCARD_IT_RXNE|macro|SMARTCARD_IT_RXNE
DECL|SMARTCARD_IT_TC|macro|SMARTCARD_IT_TC
DECL|SMARTCARD_IT_TXE|macro|SMARTCARD_IT_TXE
DECL|SMARTCARD_InitTypeDef|typedef|} SMARTCARD_InitTypeDef;
DECL|SMARTCARD_LASTBIT_DISABLE|macro|SMARTCARD_LASTBIT_DISABLE
DECL|SMARTCARD_LASTBIT_ENABLE|macro|SMARTCARD_LASTBIT_ENABLE
DECL|SMARTCARD_MODE_RX|macro|SMARTCARD_MODE_RX
DECL|SMARTCARD_MODE_TX_RX|macro|SMARTCARD_MODE_TX_RX
DECL|SMARTCARD_MODE_TX|macro|SMARTCARD_MODE_TX
DECL|SMARTCARD_NACK_DISABLE|macro|SMARTCARD_NACK_DISABLE
DECL|SMARTCARD_NACK_ENABLE|macro|SMARTCARD_NACK_ENABLE
DECL|SMARTCARD_PARITY_EVEN|macro|SMARTCARD_PARITY_EVEN
DECL|SMARTCARD_PARITY_ODD|macro|SMARTCARD_PARITY_ODD
DECL|SMARTCARD_PHASE_1EDGE|macro|SMARTCARD_PHASE_1EDGE
DECL|SMARTCARD_PHASE_2EDGE|macro|SMARTCARD_PHASE_2EDGE
DECL|SMARTCARD_POLARITY_HIGH|macro|SMARTCARD_POLARITY_HIGH
DECL|SMARTCARD_POLARITY_LOW|macro|SMARTCARD_POLARITY_LOW
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV10|macro|SMARTCARD_PRESCALER_SYSCLK_DIV10
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV12|macro|SMARTCARD_PRESCALER_SYSCLK_DIV12
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV14|macro|SMARTCARD_PRESCALER_SYSCLK_DIV14
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV16|macro|SMARTCARD_PRESCALER_SYSCLK_DIV16
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV18|macro|SMARTCARD_PRESCALER_SYSCLK_DIV18
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV20|macro|SMARTCARD_PRESCALER_SYSCLK_DIV20
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV22|macro|SMARTCARD_PRESCALER_SYSCLK_DIV22
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV24|macro|SMARTCARD_PRESCALER_SYSCLK_DIV24
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV26|macro|SMARTCARD_PRESCALER_SYSCLK_DIV26
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV28|macro|SMARTCARD_PRESCALER_SYSCLK_DIV28
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV2|macro|SMARTCARD_PRESCALER_SYSCLK_DIV2
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV30|macro|SMARTCARD_PRESCALER_SYSCLK_DIV30
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV32|macro|SMARTCARD_PRESCALER_SYSCLK_DIV32
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV34|macro|SMARTCARD_PRESCALER_SYSCLK_DIV34
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV36|macro|SMARTCARD_PRESCALER_SYSCLK_DIV36
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV38|macro|SMARTCARD_PRESCALER_SYSCLK_DIV38
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV40|macro|SMARTCARD_PRESCALER_SYSCLK_DIV40
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV42|macro|SMARTCARD_PRESCALER_SYSCLK_DIV42
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV44|macro|SMARTCARD_PRESCALER_SYSCLK_DIV44
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV46|macro|SMARTCARD_PRESCALER_SYSCLK_DIV46
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV48|macro|SMARTCARD_PRESCALER_SYSCLK_DIV48
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV4|macro|SMARTCARD_PRESCALER_SYSCLK_DIV4
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV50|macro|SMARTCARD_PRESCALER_SYSCLK_DIV50
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV52|macro|SMARTCARD_PRESCALER_SYSCLK_DIV52
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV54|macro|SMARTCARD_PRESCALER_SYSCLK_DIV54
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV56|macro|SMARTCARD_PRESCALER_SYSCLK_DIV56
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV58|macro|SMARTCARD_PRESCALER_SYSCLK_DIV58
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV60|macro|SMARTCARD_PRESCALER_SYSCLK_DIV60
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV62|macro|SMARTCARD_PRESCALER_SYSCLK_DIV62
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV6|macro|SMARTCARD_PRESCALER_SYSCLK_DIV6
DECL|SMARTCARD_PRESCALER_SYSCLK_DIV8|macro|SMARTCARD_PRESCALER_SYSCLK_DIV8
DECL|SMARTCARD_STOPBITS_0_5|macro|SMARTCARD_STOPBITS_0_5
DECL|SMARTCARD_STOPBITS_1_5|macro|SMARTCARD_STOPBITS_1_5
DECL|SMARTCARD_WORDLENGTH_9B|macro|SMARTCARD_WORDLENGTH_9B
DECL|StopBits|member|uint32_t StopBits; /*!< Specifies the number of stop bits transmitted.
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /*!< SmartCard Tx Transfer Counter */
DECL|TxXferSize|member|uint16_t TxXferSize; /*!< SmartCard Tx Transfer size */
DECL|WordLength|member|uint32_t WordLength; /*!< Specifies the number of data bits transmitted or received in a frame.
DECL|__HAL_SMARTCARD_CLEAR_FEFLAG|macro|__HAL_SMARTCARD_CLEAR_FEFLAG
DECL|__HAL_SMARTCARD_CLEAR_FLAG|macro|__HAL_SMARTCARD_CLEAR_FLAG
DECL|__HAL_SMARTCARD_CLEAR_IDLEFLAG|macro|__HAL_SMARTCARD_CLEAR_IDLEFLAG
DECL|__HAL_SMARTCARD_CLEAR_NEFLAG|macro|__HAL_SMARTCARD_CLEAR_NEFLAG
DECL|__HAL_SMARTCARD_CLEAR_OREFLAG|macro|__HAL_SMARTCARD_CLEAR_OREFLAG
DECL|__HAL_SMARTCARD_CLEAR_PEFLAG|macro|__HAL_SMARTCARD_CLEAR_PEFLAG
DECL|__HAL_SMARTCARD_DISABLE_IT|macro|__HAL_SMARTCARD_DISABLE_IT
DECL|__HAL_SMARTCARD_DISABLE|macro|__HAL_SMARTCARD_DISABLE
DECL|__HAL_SMARTCARD_DMA_REQUEST_DISABLE|macro|__HAL_SMARTCARD_DMA_REQUEST_DISABLE
DECL|__HAL_SMARTCARD_DMA_REQUEST_ENABLE|macro|__HAL_SMARTCARD_DMA_REQUEST_ENABLE
DECL|__HAL_SMARTCARD_ENABLE_IT|macro|__HAL_SMARTCARD_ENABLE_IT
DECL|__HAL_SMARTCARD_ENABLE|macro|__HAL_SMARTCARD_ENABLE
DECL|__HAL_SMARTCARD_FLUSH_DRREGISTER|macro|__HAL_SMARTCARD_FLUSH_DRREGISTER
DECL|__HAL_SMARTCARD_GET_FLAG|macro|__HAL_SMARTCARD_GET_FLAG
DECL|__HAL_SMARTCARD_GET_IT_SOURCE|macro|__HAL_SMARTCARD_GET_IT_SOURCE
DECL|__HAL_SMARTCARD_RESET_HANDLE_STATE|macro|__HAL_SMARTCARD_RESET_HANDLE_STATE
DECL|__STM32F1xx_HAL_SMARTCARD_H|macro|__STM32F1xx_HAL_SMARTCARD_H
DECL|gState|member|__IO HAL_SMARTCARD_StateTypeDef gState; /*!< SmartCard state information related to global Handle management
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< SmartCard Rx DMA Handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< SmartCard Tx DMA Handle parameters */
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /*!< Pointer to SmartCard Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /*!< Pointer to SmartCard Tx transfer Buffer */
