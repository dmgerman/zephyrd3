DECL|BaudRatePrescaler|member|uint32_t BaudRatePrescaler; /*!< Specifies the Baud Rate prescaler value which will be
DECL|CLKPhase|member|uint32_t CLKPhase; /*!< Specifies the clock active edge for the bit capture.
DECL|CLKPolarity|member|uint32_t CLKPolarity; /*!< Specifies the serial clock steady state.
DECL|CRCCalculation|member|uint32_t CRCCalculation; /*!< Specifies if the CRC calculation is enabled or not.
DECL|CRCPolynomial|member|uint32_t CRCPolynomial; /*!< Specifies the polynomial used for the CRC calculation.
DECL|DataSize|member|uint32_t DataSize; /*!< Specifies the SPI data size.
DECL|Direction|member|uint32_t Direction; /*!< Specifies the SPI bidirectional mode state.
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /* SPI Error code */
DECL|FirstBit|member|uint32_t FirstBit; /*!< Specifies whether data transfers start from MSB or LSB bit.
DECL|HAL_SPI_ERROR_CRC|macro|HAL_SPI_ERROR_CRC
DECL|HAL_SPI_ERROR_DMA|macro|HAL_SPI_ERROR_DMA
DECL|HAL_SPI_ERROR_FLAG|macro|HAL_SPI_ERROR_FLAG
DECL|HAL_SPI_ERROR_FRE|macro|HAL_SPI_ERROR_FRE
DECL|HAL_SPI_ERROR_MODF|macro|HAL_SPI_ERROR_MODF
DECL|HAL_SPI_ERROR_NONE|macro|HAL_SPI_ERROR_NONE
DECL|HAL_SPI_ERROR_OVR|macro|HAL_SPI_ERROR_OVR
DECL|HAL_SPI_STATE_BUSY_RX|enumerator|HAL_SPI_STATE_BUSY_RX = 0x04U, /*!< Data Reception process is ongoing */
DECL|HAL_SPI_STATE_BUSY_TX_RX|enumerator|HAL_SPI_STATE_BUSY_TX_RX = 0x05U, /*!< Data Transmission and Reception process is ongoing */
DECL|HAL_SPI_STATE_BUSY_TX|enumerator|HAL_SPI_STATE_BUSY_TX = 0x03U, /*!< Data Transmission process is ongoing */
DECL|HAL_SPI_STATE_BUSY|enumerator|HAL_SPI_STATE_BUSY = 0x02U, /*!< an internal process is ongoing */
DECL|HAL_SPI_STATE_ERROR|enumerator|HAL_SPI_STATE_ERROR = 0x06U /*!< SPI error state */
DECL|HAL_SPI_STATE_READY|enumerator|HAL_SPI_STATE_READY = 0x01U, /*!< Peripheral Initialized and ready for use */
DECL|HAL_SPI_STATE_RESET|enumerator|HAL_SPI_STATE_RESET = 0x00U, /*!< Peripheral not Initialized */
DECL|HAL_SPI_StateTypeDef|typedef|}HAL_SPI_StateTypeDef;
DECL|IS_SPI_BAUDRATE_PRESCALER|macro|IS_SPI_BAUDRATE_PRESCALER
DECL|IS_SPI_CPHA|macro|IS_SPI_CPHA
DECL|IS_SPI_CPOL|macro|IS_SPI_CPOL
DECL|IS_SPI_CRC_CALCULATION|macro|IS_SPI_CRC_CALCULATION
DECL|IS_SPI_CRC_POLYNOMIAL|macro|IS_SPI_CRC_POLYNOMIAL
DECL|IS_SPI_DATASIZE|macro|IS_SPI_DATASIZE
DECL|IS_SPI_DIRECTION_2LINES_OR_1LINE|macro|IS_SPI_DIRECTION_2LINES_OR_1LINE
DECL|IS_SPI_DIRECTION_2LINES|macro|IS_SPI_DIRECTION_2LINES
DECL|IS_SPI_DIRECTION|macro|IS_SPI_DIRECTION
DECL|IS_SPI_FIRST_BIT|macro|IS_SPI_FIRST_BIT
DECL|IS_SPI_MODE|macro|IS_SPI_MODE
DECL|IS_SPI_NSS|macro|IS_SPI_NSS
DECL|IS_SPI_TIMODE|macro|IS_SPI_TIMODE
DECL|Init|member|SPI_InitTypeDef Init; /* SPI communication parameters */
DECL|Instance|member|SPI_TypeDef *Instance; /* SPI registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /* SPI locking object */
DECL|Mode|member|uint32_t Mode; /*!< Specifies the SPI operating mode.
DECL|NSS|member|uint32_t NSS; /*!< Specifies whether the NSS signal is managed by
DECL|RxISR|member|void (*RxISR)(struct __SPI_HandleTypeDef * hspi); /* function pointer on Rx ISR */
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /* SPI Rx Transfer Counter */
DECL|RxXferSize|member|uint16_t RxXferSize; /* SPI Rx transfer size */
DECL|SPI_1LINE_RX|macro|SPI_1LINE_RX
DECL|SPI_1LINE_TX|macro|SPI_1LINE_TX
DECL|SPI_BAUDRATEPRESCALER_128|macro|SPI_BAUDRATEPRESCALER_128
DECL|SPI_BAUDRATEPRESCALER_16|macro|SPI_BAUDRATEPRESCALER_16
DECL|SPI_BAUDRATEPRESCALER_256|macro|SPI_BAUDRATEPRESCALER_256
DECL|SPI_BAUDRATEPRESCALER_2|macro|SPI_BAUDRATEPRESCALER_2
DECL|SPI_BAUDRATEPRESCALER_32|macro|SPI_BAUDRATEPRESCALER_32
DECL|SPI_BAUDRATEPRESCALER_4|macro|SPI_BAUDRATEPRESCALER_4
DECL|SPI_BAUDRATEPRESCALER_64|macro|SPI_BAUDRATEPRESCALER_64
DECL|SPI_BAUDRATEPRESCALER_8|macro|SPI_BAUDRATEPRESCALER_8
DECL|SPI_CRCCALCULATION_DISABLE|macro|SPI_CRCCALCULATION_DISABLE
DECL|SPI_CRCCALCULATION_ENABLE|macro|SPI_CRCCALCULATION_ENABLE
DECL|SPI_DATASIZE_16BIT|macro|SPI_DATASIZE_16BIT
DECL|SPI_DATASIZE_8BIT|macro|SPI_DATASIZE_8BIT
DECL|SPI_DIRECTION_1LINE|macro|SPI_DIRECTION_1LINE
DECL|SPI_DIRECTION_2LINES_RXONLY|macro|SPI_DIRECTION_2LINES_RXONLY
DECL|SPI_DIRECTION_2LINES|macro|SPI_DIRECTION_2LINES
DECL|SPI_FIRSTBIT_LSB|macro|SPI_FIRSTBIT_LSB
DECL|SPI_FIRSTBIT_MSB|macro|SPI_FIRSTBIT_MSB
DECL|SPI_FLAG_BSY|macro|SPI_FLAG_BSY
DECL|SPI_FLAG_CRCERR|macro|SPI_FLAG_CRCERR
DECL|SPI_FLAG_FRE|macro|SPI_FLAG_FRE
DECL|SPI_FLAG_MODF|macro|SPI_FLAG_MODF
DECL|SPI_FLAG_OVR|macro|SPI_FLAG_OVR
DECL|SPI_FLAG_RXNE|macro|SPI_FLAG_RXNE
DECL|SPI_FLAG_TXE|macro|SPI_FLAG_TXE
DECL|SPI_HandleTypeDef|typedef|}SPI_HandleTypeDef;
DECL|SPI_IT_ERR|macro|SPI_IT_ERR
DECL|SPI_IT_RXNE|macro|SPI_IT_RXNE
DECL|SPI_IT_TXE|macro|SPI_IT_TXE
DECL|SPI_InitTypeDef|typedef|}SPI_InitTypeDef;
DECL|SPI_MODE_MASTER|macro|SPI_MODE_MASTER
DECL|SPI_MODE_SLAVE|macro|SPI_MODE_SLAVE
DECL|SPI_NSS_HARD_INPUT|macro|SPI_NSS_HARD_INPUT
DECL|SPI_NSS_HARD_OUTPUT|macro|SPI_NSS_HARD_OUTPUT
DECL|SPI_NSS_SOFT|macro|SPI_NSS_SOFT
DECL|SPI_PHASE_1EDGE|macro|SPI_PHASE_1EDGE
DECL|SPI_PHASE_2EDGE|macro|SPI_PHASE_2EDGE
DECL|SPI_POLARITY_HIGH|macro|SPI_POLARITY_HIGH
DECL|SPI_POLARITY_LOW|macro|SPI_POLARITY_LOW
DECL|SPI_RESET_CRC|macro|SPI_RESET_CRC
DECL|SPI_TIMODE_DISABLE|macro|SPI_TIMODE_DISABLE
DECL|SPI_TIMODE_ENABLE|macro|SPI_TIMODE_ENABLE
DECL|State|member|__IO HAL_SPI_StateTypeDef State; /* SPI communication state */
DECL|TIMode|member|uint32_t TIMode; /*!< Specifies if the TI mode is enabled or not.
DECL|TxISR|member|void (*TxISR)(struct __SPI_HandleTypeDef * hspi); /* function pointer on Tx ISR */
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /* SPI Tx Transfer Counter */
DECL|TxXferSize|member|uint16_t TxXferSize; /* SPI Tx transfer size */
DECL|__HAL_SPI_CLEAR_CRCERRFLAG|macro|__HAL_SPI_CLEAR_CRCERRFLAG
DECL|__HAL_SPI_CLEAR_FREFLAG|macro|__HAL_SPI_CLEAR_FREFLAG
DECL|__HAL_SPI_CLEAR_MODFFLAG|macro|__HAL_SPI_CLEAR_MODFFLAG
DECL|__HAL_SPI_CLEAR_OVRFLAG|macro|__HAL_SPI_CLEAR_OVRFLAG
DECL|__HAL_SPI_DISABLE_IT|macro|__HAL_SPI_DISABLE_IT
DECL|__HAL_SPI_DISABLE|macro|__HAL_SPI_DISABLE
DECL|__HAL_SPI_ENABLE_IT|macro|__HAL_SPI_ENABLE_IT
DECL|__HAL_SPI_ENABLE|macro|__HAL_SPI_ENABLE
DECL|__HAL_SPI_GET_FLAG|macro|__HAL_SPI_GET_FLAG
DECL|__HAL_SPI_GET_IT_SOURCE|macro|__HAL_SPI_GET_IT_SOURCE
DECL|__HAL_SPI_RESET_HANDLE_STATE|macro|__HAL_SPI_RESET_HANDLE_STATE
DECL|__SPI_HandleTypeDef|struct|typedef struct __SPI_HandleTypeDef
DECL|__STM32F2xx_HAL_SPI_H|macro|__STM32F2xx_HAL_SPI_H
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /* SPI Rx DMA handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /* SPI Tx DMA handle parameters */
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /* Pointer to SPI Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /* Pointer to SPI Tx transfer Buffer */
