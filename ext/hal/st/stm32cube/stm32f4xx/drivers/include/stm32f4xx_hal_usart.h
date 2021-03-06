DECL|BaudRate|member|uint32_t BaudRate; /*!< This member configures the Usart communication baud rate.
DECL|CLKLastBit|member|uint32_t CLKLastBit; /*!< Specifies whether the clock pulse corresponding to the last transmitted
DECL|CLKPhase|member|uint32_t CLKPhase; /*!< Specifies the clock transition on which the bit capture is made.
DECL|CLKPolarity|member|uint32_t CLKPolarity; /*!< Specifies the steady state of the serial clock.
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /* USART Error code */
DECL|HAL_USART_ERROR_DMA|macro|HAL_USART_ERROR_DMA
DECL|HAL_USART_ERROR_FE|macro|HAL_USART_ERROR_FE
DECL|HAL_USART_ERROR_NE|macro|HAL_USART_ERROR_NE
DECL|HAL_USART_ERROR_NONE|macro|HAL_USART_ERROR_NONE
DECL|HAL_USART_ERROR_ORE|macro|HAL_USART_ERROR_ORE
DECL|HAL_USART_ERROR_PE|macro|HAL_USART_ERROR_PE
DECL|HAL_USART_STATE_BUSY_RX|enumerator|HAL_USART_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing */
DECL|HAL_USART_STATE_BUSY_TX_RX|enumerator|HAL_USART_STATE_BUSY_TX_RX = 0x32U, /*!< Data Transmission Reception process is ongoing */
DECL|HAL_USART_STATE_BUSY_TX|enumerator|HAL_USART_STATE_BUSY_TX = 0x12U, /*!< Data Transmission process is ongoing */
DECL|HAL_USART_STATE_BUSY|enumerator|HAL_USART_STATE_BUSY = 0x02U, /*!< an internal process is ongoing */
DECL|HAL_USART_STATE_ERROR|enumerator|HAL_USART_STATE_ERROR = 0x04U /*!< Error */
DECL|HAL_USART_STATE_READY|enumerator|HAL_USART_STATE_READY = 0x01U, /*!< Peripheral Initialized and ready for use */
DECL|HAL_USART_STATE_RESET|enumerator|HAL_USART_STATE_RESET = 0x00U, /*!< Peripheral is not yet Initialized */
DECL|HAL_USART_STATE_TIMEOUT|enumerator|HAL_USART_STATE_TIMEOUT = 0x03U, /*!< Timeout state */
DECL|HAL_USART_StateTypeDef|typedef|}HAL_USART_StateTypeDef;
DECL|IS_USART_BAUDRATE|macro|IS_USART_BAUDRATE
DECL|IS_USART_CLOCK|macro|IS_USART_CLOCK
DECL|IS_USART_LASTBIT|macro|IS_USART_LASTBIT
DECL|IS_USART_MODE|macro|IS_USART_MODE
DECL|IS_USART_NACK_STATE|macro|IS_USART_NACK_STATE
DECL|IS_USART_PARITY|macro|IS_USART_PARITY
DECL|IS_USART_PHASE|macro|IS_USART_PHASE
DECL|IS_USART_POLARITY|macro|IS_USART_POLARITY
DECL|IS_USART_STOPBITS|macro|IS_USART_STOPBITS
DECL|IS_USART_WORD_LENGTH|macro|IS_USART_WORD_LENGTH
DECL|Init|member|USART_InitTypeDef Init; /* Usart communication parameters */
DECL|Instance|member|USART_TypeDef *Instance; /* USART registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /* Locking object */
DECL|Mode|member|uint32_t Mode; /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
DECL|Parity|member|uint32_t Parity; /*!< Specifies the parity mode.
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /* Usart Rx Transfer Counter */
DECL|RxXferSize|member|uint16_t RxXferSize; /* Usart Rx Transfer size */
DECL|State|member|__IO HAL_USART_StateTypeDef State; /* Usart communication state */
DECL|StopBits|member|uint32_t StopBits; /*!< Specifies the number of stop bits transmitted.
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /* Usart Tx Transfer Counter */
DECL|TxXferSize|member|uint16_t TxXferSize; /* Usart Tx Transfer size */
DECL|USART_BRR|macro|USART_BRR
DECL|USART_CLOCK_DISABLE|macro|USART_CLOCK_DISABLE
DECL|USART_CLOCK_ENABLE|macro|USART_CLOCK_ENABLE
DECL|USART_CR1_REG_INDEX|macro|USART_CR1_REG_INDEX
DECL|USART_CR2_REG_INDEX|macro|USART_CR2_REG_INDEX
DECL|USART_CR3_REG_INDEX|macro|USART_CR3_REG_INDEX
DECL|USART_DIVFRAQ|macro|USART_DIVFRAQ
DECL|USART_DIVMANT|macro|USART_DIVMANT
DECL|USART_DIV|macro|USART_DIV
DECL|USART_FLAG_FE|macro|USART_FLAG_FE
DECL|USART_FLAG_IDLE|macro|USART_FLAG_IDLE
DECL|USART_FLAG_NE|macro|USART_FLAG_NE
DECL|USART_FLAG_ORE|macro|USART_FLAG_ORE
DECL|USART_FLAG_PE|macro|USART_FLAG_PE
DECL|USART_FLAG_RXNE|macro|USART_FLAG_RXNE
DECL|USART_FLAG_TC|macro|USART_FLAG_TC
DECL|USART_FLAG_TXE|macro|USART_FLAG_TXE
DECL|USART_HandleTypeDef|typedef|}USART_HandleTypeDef;
DECL|USART_IT_CTS|macro|USART_IT_CTS
DECL|USART_IT_ERR|macro|USART_IT_ERR
DECL|USART_IT_IDLE|macro|USART_IT_IDLE
DECL|USART_IT_LBD|macro|USART_IT_LBD
DECL|USART_IT_MASK|macro|USART_IT_MASK
DECL|USART_IT_PE|macro|USART_IT_PE
DECL|USART_IT_RXNE|macro|USART_IT_RXNE
DECL|USART_IT_TC|macro|USART_IT_TC
DECL|USART_IT_TXE|macro|USART_IT_TXE
DECL|USART_InitTypeDef|typedef|}USART_InitTypeDef;
DECL|USART_LASTBIT_DISABLE|macro|USART_LASTBIT_DISABLE
DECL|USART_LASTBIT_ENABLE|macro|USART_LASTBIT_ENABLE
DECL|USART_MODE_RX|macro|USART_MODE_RX
DECL|USART_MODE_TX_RX|macro|USART_MODE_TX_RX
DECL|USART_MODE_TX|macro|USART_MODE_TX
DECL|USART_NACK_DISABLE|macro|USART_NACK_DISABLE
DECL|USART_NACK_ENABLE|macro|USART_NACK_ENABLE
DECL|USART_PARITY_EVEN|macro|USART_PARITY_EVEN
DECL|USART_PARITY_NONE|macro|USART_PARITY_NONE
DECL|USART_PARITY_ODD|macro|USART_PARITY_ODD
DECL|USART_PHASE_1EDGE|macro|USART_PHASE_1EDGE
DECL|USART_PHASE_2EDGE|macro|USART_PHASE_2EDGE
DECL|USART_POLARITY_HIGH|macro|USART_POLARITY_HIGH
DECL|USART_POLARITY_LOW|macro|USART_POLARITY_LOW
DECL|USART_STOPBITS_0_5|macro|USART_STOPBITS_0_5
DECL|USART_STOPBITS_1_5|macro|USART_STOPBITS_1_5
DECL|USART_STOPBITS_1|macro|USART_STOPBITS_1
DECL|USART_STOPBITS_2|macro|USART_STOPBITS_2
DECL|USART_WORDLENGTH_8B|macro|USART_WORDLENGTH_8B
DECL|USART_WORDLENGTH_9B|macro|USART_WORDLENGTH_9B
DECL|WordLength|member|uint32_t WordLength; /*!< Specifies the number of data bits transmitted or received in a frame.
DECL|__HAL_USART_CLEAR_FEFLAG|macro|__HAL_USART_CLEAR_FEFLAG
DECL|__HAL_USART_CLEAR_FLAG|macro|__HAL_USART_CLEAR_FLAG
DECL|__HAL_USART_CLEAR_IDLEFLAG|macro|__HAL_USART_CLEAR_IDLEFLAG
DECL|__HAL_USART_CLEAR_NEFLAG|macro|__HAL_USART_CLEAR_NEFLAG
DECL|__HAL_USART_CLEAR_OREFLAG|macro|__HAL_USART_CLEAR_OREFLAG
DECL|__HAL_USART_CLEAR_PEFLAG|macro|__HAL_USART_CLEAR_PEFLAG
DECL|__HAL_USART_DISABLE_IT|macro|__HAL_USART_DISABLE_IT
DECL|__HAL_USART_DISABLE|macro|__HAL_USART_DISABLE
DECL|__HAL_USART_ENABLE_IT|macro|__HAL_USART_ENABLE_IT
DECL|__HAL_USART_ENABLE|macro|__HAL_USART_ENABLE
DECL|__HAL_USART_GET_FLAG|macro|__HAL_USART_GET_FLAG
DECL|__HAL_USART_GET_IT_SOURCE|macro|__HAL_USART_GET_IT_SOURCE
DECL|__HAL_USART_ONE_BIT_SAMPLE_DISABLE|macro|__HAL_USART_ONE_BIT_SAMPLE_DISABLE
DECL|__HAL_USART_ONE_BIT_SAMPLE_ENABLE|macro|__HAL_USART_ONE_BIT_SAMPLE_ENABLE
DECL|__HAL_USART_RESET_HANDLE_STATE|macro|__HAL_USART_RESET_HANDLE_STATE
DECL|__STM32F4xx_HAL_USART_H|macro|__STM32F4xx_HAL_USART_H
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /* Usart Rx DMA Handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /* Usart Tx DMA Handle parameters */
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /* Pointer to Usart Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /* Pointer to Usart Tx transfer Buffer */
