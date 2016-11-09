DECL|BaudRate|member|uint32_t BaudRate; /*!< This member configures the IRDA communication baud rate.
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /* IRDA Error code */
DECL|HAL_IRDA_ERROR_DMA|macro|HAL_IRDA_ERROR_DMA
DECL|HAL_IRDA_ERROR_FE|macro|HAL_IRDA_ERROR_FE
DECL|HAL_IRDA_ERROR_NE|macro|HAL_IRDA_ERROR_NE
DECL|HAL_IRDA_ERROR_NONE|macro|HAL_IRDA_ERROR_NONE
DECL|HAL_IRDA_ERROR_ORE|macro|HAL_IRDA_ERROR_ORE
DECL|HAL_IRDA_ERROR_PE|macro|HAL_IRDA_ERROR_PE
DECL|HAL_IRDA_STATE_BUSY_RX|enumerator|HAL_IRDA_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing
DECL|HAL_IRDA_STATE_BUSY_TX_RX|enumerator|HAL_IRDA_STATE_BUSY_TX_RX = 0x23U, /*!< Data Transmission and Reception process is ongoing
DECL|HAL_IRDA_STATE_BUSY_TX|enumerator|HAL_IRDA_STATE_BUSY_TX = 0x21U, /*!< Data Transmission process is ongoing
DECL|HAL_IRDA_STATE_BUSY|enumerator|HAL_IRDA_STATE_BUSY = 0x24U, /*!< An internal process is ongoing
DECL|HAL_IRDA_STATE_ERROR|enumerator|HAL_IRDA_STATE_ERROR = 0xE0U /*!< Error
DECL|HAL_IRDA_STATE_READY|enumerator|HAL_IRDA_STATE_READY = 0x20U, /*!< Peripheral Initialized and ready for use
DECL|HAL_IRDA_STATE_RESET|enumerator|HAL_IRDA_STATE_RESET = 0x00U, /*!< Peripheral is not yet Initialized
DECL|HAL_IRDA_STATE_TIMEOUT|enumerator|HAL_IRDA_STATE_TIMEOUT = 0xA0U, /*!< Timeout state
DECL|HAL_IRDA_StateTypeDef|typedef|}HAL_IRDA_StateTypeDef;
DECL|IRDA_BRR|macro|IRDA_BRR
DECL|IRDA_CR1_REG_INDEX|macro|IRDA_CR1_REG_INDEX
DECL|IRDA_CR2_REG_INDEX|macro|IRDA_CR2_REG_INDEX
DECL|IRDA_CR3_REG_INDEX|macro|IRDA_CR3_REG_INDEX
DECL|IRDA_DIVFRAQ|macro|IRDA_DIVFRAQ
DECL|IRDA_DIVMANT|macro|IRDA_DIVMANT
DECL|IRDA_DIV|macro|IRDA_DIV
DECL|IRDA_FLAG_FE|macro|IRDA_FLAG_FE
DECL|IRDA_FLAG_IDLE|macro|IRDA_FLAG_IDLE
DECL|IRDA_FLAG_NE|macro|IRDA_FLAG_NE
DECL|IRDA_FLAG_ORE|macro|IRDA_FLAG_ORE
DECL|IRDA_FLAG_PE|macro|IRDA_FLAG_PE
DECL|IRDA_FLAG_RXNE|macro|IRDA_FLAG_RXNE
DECL|IRDA_FLAG_TC|macro|IRDA_FLAG_TC
DECL|IRDA_FLAG_TXE|macro|IRDA_FLAG_TXE
DECL|IRDA_HandleTypeDef|typedef|}IRDA_HandleTypeDef;
DECL|IRDA_IT_CTS|macro|IRDA_IT_CTS
DECL|IRDA_IT_ERR|macro|IRDA_IT_ERR
DECL|IRDA_IT_IDLE|macro|IRDA_IT_IDLE
DECL|IRDA_IT_LBD|macro|IRDA_IT_LBD
DECL|IRDA_IT_MASK|macro|IRDA_IT_MASK
DECL|IRDA_IT_PE|macro|IRDA_IT_PE
DECL|IRDA_IT_RXNE|macro|IRDA_IT_RXNE
DECL|IRDA_IT_TC|macro|IRDA_IT_TC
DECL|IRDA_IT_TXE|macro|IRDA_IT_TXE
DECL|IRDA_InitTypeDef|typedef|}IRDA_InitTypeDef;
DECL|IRDA_MODE_RX|macro|IRDA_MODE_RX
DECL|IRDA_MODE_TX_RX|macro|IRDA_MODE_TX_RX
DECL|IRDA_MODE_TX|macro|IRDA_MODE_TX
DECL|IRDA_PARITY_EVEN|macro|IRDA_PARITY_EVEN
DECL|IRDA_PARITY_NONE|macro|IRDA_PARITY_NONE
DECL|IRDA_PARITY_ODD|macro|IRDA_PARITY_ODD
DECL|IRDA_POWERMODE_LOWPOWER|macro|IRDA_POWERMODE_LOWPOWER
DECL|IRDA_POWERMODE_NORMAL|macro|IRDA_POWERMODE_NORMAL
DECL|IRDA_WORDLENGTH_8B|macro|IRDA_WORDLENGTH_8B
DECL|IRDA_WORDLENGTH_9B|macro|IRDA_WORDLENGTH_9B
DECL|IS_IRDA_BAUDRATE|macro|IS_IRDA_BAUDRATE
DECL|IS_IRDA_MODE|macro|IS_IRDA_MODE
DECL|IS_IRDA_PARITY|macro|IS_IRDA_PARITY
DECL|IS_IRDA_POWERMODE|macro|IS_IRDA_POWERMODE
DECL|IS_IRDA_WORD_LENGTH|macro|IS_IRDA_WORD_LENGTH
DECL|Init|member|IRDA_InitTypeDef Init; /* IRDA communication parameters */
DECL|Instance|member|USART_TypeDef *Instance; /* USART registers base address */
DECL|IrDAMode|member|uint32_t IrDAMode; /*!< Specifies the IrDA mode
DECL|Lock|member|HAL_LockTypeDef Lock; /* Locking object */
DECL|Mode|member|uint32_t Mode; /*!< Specifies wether the Receive or Transmit mode is enabled or disabled.
DECL|Parity|member|uint32_t Parity; /*!< Specifies the parity mode.
DECL|Prescaler|member|uint8_t Prescaler; /*!< Specifies the Prescaler */
DECL|RxState|member|__IO HAL_IRDA_StateTypeDef RxState; /* IRDA state information related to Rx operations.
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /* IRDA Rx Transfer Counter */
DECL|RxXferSize|member|uint16_t RxXferSize; /* IRDA Rx Transfer size */
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /* IRDA Tx Transfer Counter */
DECL|TxXferSize|member|uint16_t TxXferSize; /* IRDA Tx Transfer size */
DECL|WordLength|member|uint32_t WordLength; /*!< Specifies the number of data bits transmitted or received in a frame.
DECL|__HAL_IRDA_CLEAR_FEFLAG|macro|__HAL_IRDA_CLEAR_FEFLAG
DECL|__HAL_IRDA_CLEAR_FLAG|macro|__HAL_IRDA_CLEAR_FLAG
DECL|__HAL_IRDA_CLEAR_IDLEFLAG|macro|__HAL_IRDA_CLEAR_IDLEFLAG
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
DECL|__HAL_IRDA_ONE_BIT_SAMPLE_DISABLE|macro|__HAL_IRDA_ONE_BIT_SAMPLE_DISABLE
DECL|__HAL_IRDA_ONE_BIT_SAMPLE_ENABLE|macro|__HAL_IRDA_ONE_BIT_SAMPLE_ENABLE
DECL|__HAL_IRDA_RESET_HANDLE_STATE|macro|__HAL_IRDA_RESET_HANDLE_STATE
DECL|__STM32F2xx_HAL_IRDA_H|macro|__STM32F2xx_HAL_IRDA_H
DECL|gState|member|__IO HAL_IRDA_StateTypeDef gState; /* IRDA state information related to global Handle management
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /* IRDA Rx DMA Handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /* IRDA Tx DMA Handle parameters */
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /* Pointer to IRDA Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /* Pointer to IRDA Tx transfer Buffer */
