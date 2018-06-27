DECL|AbortCpltCallback|member|void (* AbortCpltCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI Abort callback */
DECL|BaudRatePrescaler|member|uint32_t BaudRatePrescaler; /*!< Specifies the Baud Rate prescaler value which will be
DECL|CLKPhase|member|uint32_t CLKPhase; /*!< Specifies the clock active edge for the bit capture.
DECL|CLKPolarity|member|uint32_t CLKPolarity; /*!< Specifies the serial clock steady state.
DECL|CRCCalculation|member|uint32_t CRCCalculation; /*!< Specifies if the CRC calculation is enabled or not.
DECL|CRCLength|member|uint32_t CRCLength; /*!< Specifies the CRC Length used for the CRC calculation.
DECL|CRCPolynomial|member|uint32_t CRCPolynomial; /*!< Specifies the polynomial used for the CRC calculation.
DECL|CRCSize|member|uint32_t CRCSize; /*!< SPI CRC size used for the transfer */
DECL|DataSize|member|uint32_t DataSize; /*!< Specifies the SPI data size.
DECL|Direction|member|uint32_t Direction; /*!< Specifies the SPI bidirectional mode state.
DECL|ErrorCallback|member|void (* ErrorCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI Error callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< SPI Error code */
DECL|FirstBit|member|uint32_t FirstBit; /*!< Specifies whether data transfers start from MSB or LSB bit.
DECL|HAL_SPI_ABORT_CB_ID|enumerator|HAL_SPI_ABORT_CB_ID = 0x07U, /*!< SPI Abort callback ID */
DECL|HAL_SPI_CallbackIDTypeDef|typedef|} HAL_SPI_CallbackIDTypeDef;
DECL|HAL_SPI_ERROR_ABORT|macro|HAL_SPI_ERROR_ABORT
DECL|HAL_SPI_ERROR_CB_ID|enumerator|HAL_SPI_ERROR_CB_ID = 0x06U, /*!< SPI Error callback ID */
DECL|HAL_SPI_ERROR_CRC|macro|HAL_SPI_ERROR_CRC
DECL|HAL_SPI_ERROR_DMA|macro|HAL_SPI_ERROR_DMA
DECL|HAL_SPI_ERROR_FLAG|macro|HAL_SPI_ERROR_FLAG
DECL|HAL_SPI_ERROR_FRE|macro|HAL_SPI_ERROR_FRE
DECL|HAL_SPI_ERROR_INVALID_CALLBACK|macro|HAL_SPI_ERROR_INVALID_CALLBACK
DECL|HAL_SPI_ERROR_MODF|macro|HAL_SPI_ERROR_MODF
DECL|HAL_SPI_ERROR_NONE|macro|HAL_SPI_ERROR_NONE
DECL|HAL_SPI_ERROR_OVR|macro|HAL_SPI_ERROR_OVR
DECL|HAL_SPI_MSPDEINIT_CB_ID|enumerator|HAL_SPI_MSPDEINIT_CB_ID = 0x09U /*!< SPI Msp DeInit callback ID */
DECL|HAL_SPI_MSPINIT_CB_ID|enumerator|HAL_SPI_MSPINIT_CB_ID = 0x08U, /*!< SPI Msp Init callback ID */
DECL|HAL_SPI_RX_COMPLETE_CB_ID|enumerator|HAL_SPI_RX_COMPLETE_CB_ID = 0x01U, /*!< SPI Rx Completed callback ID */
DECL|HAL_SPI_RX_HALF_COMPLETE_CB_ID|enumerator|HAL_SPI_RX_HALF_COMPLETE_CB_ID = 0x04U, /*!< SPI Rx Half Completed callback ID */
DECL|HAL_SPI_STATE_ABORT|enumerator|HAL_SPI_STATE_ABORT = 0x07U /*!< SPI abort is ongoing */
DECL|HAL_SPI_STATE_BUSY_RX|enumerator|HAL_SPI_STATE_BUSY_RX = 0x04U, /*!< Data Reception process is ongoing */
DECL|HAL_SPI_STATE_BUSY_TX_RX|enumerator|HAL_SPI_STATE_BUSY_TX_RX = 0x05U, /*!< Data Transmission and Reception process is ongoing */
DECL|HAL_SPI_STATE_BUSY_TX|enumerator|HAL_SPI_STATE_BUSY_TX = 0x03U, /*!< Data Transmission process is ongoing */
DECL|HAL_SPI_STATE_BUSY|enumerator|HAL_SPI_STATE_BUSY = 0x02U, /*!< an internal process is ongoing */
DECL|HAL_SPI_STATE_ERROR|enumerator|HAL_SPI_STATE_ERROR = 0x06U, /*!< SPI error state */
DECL|HAL_SPI_STATE_READY|enumerator|HAL_SPI_STATE_READY = 0x01U, /*!< Peripheral Initialized and ready for use */
DECL|HAL_SPI_STATE_RESET|enumerator|HAL_SPI_STATE_RESET = 0x00U, /*!< Peripheral not Initialized */
DECL|HAL_SPI_StateTypeDef|typedef|} HAL_SPI_StateTypeDef;
DECL|HAL_SPI_TX_COMPLETE_CB_ID|enumerator|HAL_SPI_TX_COMPLETE_CB_ID = 0x00U, /*!< SPI Tx Completed callback ID */
DECL|HAL_SPI_TX_HALF_COMPLETE_CB_ID|enumerator|HAL_SPI_TX_HALF_COMPLETE_CB_ID = 0x03U, /*!< SPI Tx Half Completed callback ID */
DECL|HAL_SPI_TX_RX_COMPLETE_CB_ID|enumerator|HAL_SPI_TX_RX_COMPLETE_CB_ID = 0x02U, /*!< SPI TxRx Completed callback ID */
DECL|HAL_SPI_TX_RX_HALF_COMPLETE_CB_ID|enumerator|HAL_SPI_TX_RX_HALF_COMPLETE_CB_ID = 0x05U, /*!< SPI TxRx Half Completed callback ID */
DECL|IS_SPI_BAUDRATE_PRESCALER|macro|IS_SPI_BAUDRATE_PRESCALER
DECL|IS_SPI_CPHA|macro|IS_SPI_CPHA
DECL|IS_SPI_CPOL|macro|IS_SPI_CPOL
DECL|IS_SPI_CRC_CALCULATION|macro|IS_SPI_CRC_CALCULATION
DECL|IS_SPI_CRC_LENGTH|macro|IS_SPI_CRC_LENGTH
DECL|IS_SPI_CRC_POLYNOMIAL|macro|IS_SPI_CRC_POLYNOMIAL
DECL|IS_SPI_DATASIZE|macro|IS_SPI_DATASIZE
DECL|IS_SPI_DIRECTION_2LINES_OR_1LINE|macro|IS_SPI_DIRECTION_2LINES_OR_1LINE
DECL|IS_SPI_DIRECTION_2LINES|macro|IS_SPI_DIRECTION_2LINES
DECL|IS_SPI_DIRECTION|macro|IS_SPI_DIRECTION
DECL|IS_SPI_DMA_HANDLE|macro|IS_SPI_DMA_HANDLE
DECL|IS_SPI_FIRST_BIT|macro|IS_SPI_FIRST_BIT
DECL|IS_SPI_MODE|macro|IS_SPI_MODE
DECL|IS_SPI_NSSP|macro|IS_SPI_NSSP
DECL|IS_SPI_NSS|macro|IS_SPI_NSS
DECL|IS_SPI_TIMODE|macro|IS_SPI_TIMODE
DECL|Init|member|SPI_InitTypeDef Init; /*!< SPI communication parameters */
DECL|Instance|member|SPI_TypeDef *Instance; /*!< SPI registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|Mode|member|uint32_t Mode; /*!< Specifies the SPI operating mode.
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI Msp Init callback */
DECL|NSSPMode|member|uint32_t NSSPMode; /*!< Specifies whether the NSSP signal is enabled or not .
DECL|NSS|member|uint32_t NSS; /*!< Specifies whether the NSS signal is managed by
DECL|RxCpltCallback|member|void (* RxCpltCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI Rx Completed callback */
DECL|RxHalfCpltCallback|member|void (* RxHalfCpltCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI Rx Half Completed callback */
DECL|RxISR|member|void (*RxISR)(struct __SPI_HandleTypeDef *hspi); /*!< function pointer on Rx ISR */
DECL|RxXferCount|member|__IO uint16_t RxXferCount; /*!< SPI Rx Transfer Counter */
DECL|RxXferSize|member|uint16_t RxXferSize; /*!< SPI Rx Transfer size */
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
DECL|SPI_CRC_LENGTH_16BIT|macro|SPI_CRC_LENGTH_16BIT
DECL|SPI_CRC_LENGTH_8BIT|macro|SPI_CRC_LENGTH_8BIT
DECL|SPI_CRC_LENGTH_DATASIZE|macro|SPI_CRC_LENGTH_DATASIZE
DECL|SPI_DATASIZE_10BIT|macro|SPI_DATASIZE_10BIT
DECL|SPI_DATASIZE_11BIT|macro|SPI_DATASIZE_11BIT
DECL|SPI_DATASIZE_12BIT|macro|SPI_DATASIZE_12BIT
DECL|SPI_DATASIZE_13BIT|macro|SPI_DATASIZE_13BIT
DECL|SPI_DATASIZE_14BIT|macro|SPI_DATASIZE_14BIT
DECL|SPI_DATASIZE_15BIT|macro|SPI_DATASIZE_15BIT
DECL|SPI_DATASIZE_16BIT|macro|SPI_DATASIZE_16BIT
DECL|SPI_DATASIZE_4BIT|macro|SPI_DATASIZE_4BIT
DECL|SPI_DATASIZE_5BIT|macro|SPI_DATASIZE_5BIT
DECL|SPI_DATASIZE_6BIT|macro|SPI_DATASIZE_6BIT
DECL|SPI_DATASIZE_7BIT|macro|SPI_DATASIZE_7BIT
DECL|SPI_DATASIZE_8BIT|macro|SPI_DATASIZE_8BIT
DECL|SPI_DATASIZE_9BIT|macro|SPI_DATASIZE_9BIT
DECL|SPI_DIRECTION_1LINE|macro|SPI_DIRECTION_1LINE
DECL|SPI_DIRECTION_2LINES_RXONLY|macro|SPI_DIRECTION_2LINES_RXONLY
DECL|SPI_DIRECTION_2LINES|macro|SPI_DIRECTION_2LINES
DECL|SPI_FIRSTBIT_LSB|macro|SPI_FIRSTBIT_LSB
DECL|SPI_FIRSTBIT_MSB|macro|SPI_FIRSTBIT_MSB
DECL|SPI_FLAG_BSY|macro|SPI_FLAG_BSY
DECL|SPI_FLAG_CRCERR|macro|SPI_FLAG_CRCERR
DECL|SPI_FLAG_FRE|macro|SPI_FLAG_FRE
DECL|SPI_FLAG_FRLVL|macro|SPI_FLAG_FRLVL
DECL|SPI_FLAG_FTLVL|macro|SPI_FLAG_FTLVL
DECL|SPI_FLAG_MODF|macro|SPI_FLAG_MODF
DECL|SPI_FLAG_OVR|macro|SPI_FLAG_OVR
DECL|SPI_FLAG_RXNE|macro|SPI_FLAG_RXNE
DECL|SPI_FLAG_TXE|macro|SPI_FLAG_TXE
DECL|SPI_FRLVL_EMPTY|macro|SPI_FRLVL_EMPTY
DECL|SPI_FRLVL_FULL|macro|SPI_FRLVL_FULL
DECL|SPI_FRLVL_HALF_FULL|macro|SPI_FRLVL_HALF_FULL
DECL|SPI_FRLVL_QUARTER_FULL|macro|SPI_FRLVL_QUARTER_FULL
DECL|SPI_FTLVL_EMPTY|macro|SPI_FTLVL_EMPTY
DECL|SPI_FTLVL_FULL|macro|SPI_FTLVL_FULL
DECL|SPI_FTLVL_HALF_FULL|macro|SPI_FTLVL_HALF_FULL
DECL|SPI_FTLVL_QUARTER_FULL|macro|SPI_FTLVL_QUARTER_FULL
DECL|SPI_HandleTypeDef|typedef|} SPI_HandleTypeDef;
DECL|SPI_IT_ERR|macro|SPI_IT_ERR
DECL|SPI_IT_RXNE|macro|SPI_IT_RXNE
DECL|SPI_IT_TXE|macro|SPI_IT_TXE
DECL|SPI_InitTypeDef|typedef|} SPI_InitTypeDef;
DECL|SPI_MODE_MASTER|macro|SPI_MODE_MASTER
DECL|SPI_MODE_SLAVE|macro|SPI_MODE_SLAVE
DECL|SPI_NSS_HARD_INPUT|macro|SPI_NSS_HARD_INPUT
DECL|SPI_NSS_HARD_OUTPUT|macro|SPI_NSS_HARD_OUTPUT
DECL|SPI_NSS_PULSE_DISABLE|macro|SPI_NSS_PULSE_DISABLE
DECL|SPI_NSS_PULSE_ENABLE|macro|SPI_NSS_PULSE_ENABLE
DECL|SPI_NSS_SOFT|macro|SPI_NSS_SOFT
DECL|SPI_PHASE_1EDGE|macro|SPI_PHASE_1EDGE
DECL|SPI_PHASE_2EDGE|macro|SPI_PHASE_2EDGE
DECL|SPI_POLARITY_HIGH|macro|SPI_POLARITY_HIGH
DECL|SPI_POLARITY_LOW|macro|SPI_POLARITY_LOW
DECL|SPI_RESET_CRC|macro|SPI_RESET_CRC
DECL|SPI_RXFIFO_THRESHOLD_HF|macro|SPI_RXFIFO_THRESHOLD_HF
DECL|SPI_RXFIFO_THRESHOLD_QF|macro|SPI_RXFIFO_THRESHOLD_QF
DECL|SPI_RXFIFO_THRESHOLD|macro|SPI_RXFIFO_THRESHOLD
DECL|SPI_TIMODE_DISABLE|macro|SPI_TIMODE_DISABLE
DECL|SPI_TIMODE_ENABLE|macro|SPI_TIMODE_ENABLE
DECL|State|member|__IO HAL_SPI_StateTypeDef State; /*!< SPI communication state */
DECL|TIMode|member|uint32_t TIMode; /*!< Specifies if the TI mode is enabled or not.
DECL|TxCpltCallback|member|void (* TxCpltCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI Tx Completed callback */
DECL|TxHalfCpltCallback|member|void (* TxHalfCpltCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI Tx Half Completed callback */
DECL|TxISR|member|void (*TxISR)(struct __SPI_HandleTypeDef *hspi); /*!< function pointer on Tx ISR */
DECL|TxRxCpltCallback|member|void (* TxRxCpltCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI TxRx Completed callback */
DECL|TxRxHalfCpltCallback|member|void (* TxRxHalfCpltCallback)(struct __SPI_HandleTypeDef *hspi); /*!< SPI TxRx Half Completed callback */
DECL|TxXferCount|member|__IO uint16_t TxXferCount; /*!< SPI Tx Transfer Counter */
DECL|TxXferSize|member|uint16_t TxXferSize; /*!< SPI Tx Transfer size */
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
DECL|__HAL_SPI_RESET_HANDLE_STATE|macro|__HAL_SPI_RESET_HANDLE_STATE
DECL|__SPI_HandleTypeDef|struct|typedef struct __SPI_HandleTypeDef
DECL|__STM32L4xx_HAL_SPI_H|macro|__STM32L4xx_HAL_SPI_H
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< SPI Rx DMA Handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< SPI Tx DMA Handle parameters */
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /*!< Pointer to SPI Rx transfer Buffer */
DECL|pSPI_CallbackTypeDef|typedef|typedef void (*pSPI_CallbackTypeDef)(SPI_HandleTypeDef *hspi); /*!< pointer to an SPI callback function */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /*!< Pointer to SPI Tx transfer Buffer */
