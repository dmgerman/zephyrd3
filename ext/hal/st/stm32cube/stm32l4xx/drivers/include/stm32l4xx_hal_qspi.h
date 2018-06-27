DECL|AbortCpltCallback|member|void (* AbortCpltCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|AddressMode|member|uint32_t AddressMode; /* Specifies the Address Mode
DECL|AddressSize|member|uint32_t AddressSize; /* Specifies the Address Size
DECL|Address|member|uint32_t Address; /* Specifies the Address to be sent (Size from 1 to 4 bytes according AddressSize)
DECL|AlternateByteMode|member|uint32_t AlternateByteMode; /* Specifies the Alternate Bytes Mode
DECL|AlternateBytesSize|member|uint32_t AlternateBytesSize; /* Specifies the Alternate Bytes Size
DECL|AlternateBytes|member|uint32_t AlternateBytes; /* Specifies the Alternate Bytes to be sent (Size from 1 to 4 bytes according AlternateBytesSize)
DECL|AutomaticStop|member|uint32_t AutomaticStop; /* Specifies if automatic polling is stopped after a match.
DECL|ChipSelectHighTime|member|uint32_t ChipSelectHighTime; /* Specifies the Chip Select High Time. ChipSelectHighTime+1 defines the minimum number
DECL|ClockMode|member|uint32_t ClockMode; /* Specifies the Clock Mode. It indicates the level that clock takes between commands.
DECL|ClockPrescaler|member|uint32_t ClockPrescaler; /* Specifies the prescaler factor for generating clock based on the AHB clock.
DECL|CmdCpltCallback|member|void (* CmdCpltCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|DataMode|member|uint32_t DataMode; /* Specifies the Data Mode (used for dummy cycles and data phases)
DECL|DdrHoldHalfCycle|member|uint32_t DdrHoldHalfCycle; /* Specifies if the DDR hold is enabled. When enabled it delays the data
DECL|DdrMode|member|uint32_t DdrMode; /* Specifies the double data rate mode for address, alternate byte and data phase
DECL|DualFlash|member|uint32_t DualFlash; /* Specifies the Dual Flash Mode State
DECL|DummyCycles|member|uint32_t DummyCycles; /* Specifies the Number of Dummy Cycles.
DECL|ErrorCallback|member|void (* ErrorCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /* QSPI Error code */
DECL|FifoThresholdCallback|member|void (* FifoThresholdCallback)(struct __QSPI_HandleTypeDef *hqspi);
DECL|FifoThreshold|member|uint32_t FifoThreshold; /* Specifies the threshold number of bytes in the FIFO (used only in indirect mode)
DECL|FlashID|member|uint32_t FlashID; /* Specifies the Flash which will be used,
DECL|FlashSize|member|uint32_t FlashSize; /* Specifies the Flash Size. FlashSize+1 is effectively the number of address bits
DECL|HAL_QPSI_TIMEOUT_DEFAULT_VALUE|macro|HAL_QPSI_TIMEOUT_DEFAULT_VALUE
DECL|HAL_QSPI_ABORT_CB_ID|enumerator|HAL_QSPI_ABORT_CB_ID = 0x01U, /*!< QSPI Abort Callback ID */
DECL|HAL_QSPI_CMD_CPLT_CB_ID|enumerator|HAL_QSPI_CMD_CPLT_CB_ID = 0x03U, /*!< QSPI Command Complete Callback ID */
DECL|HAL_QSPI_CallbackIDTypeDef|typedef|}HAL_QSPI_CallbackIDTypeDef;
DECL|HAL_QSPI_ERROR_CB_ID|enumerator|HAL_QSPI_ERROR_CB_ID = 0x00U, /*!< QSPI Error Callback ID */
DECL|HAL_QSPI_ERROR_DMA|macro|HAL_QSPI_ERROR_DMA
DECL|HAL_QSPI_ERROR_INVALID_CALLBACK|macro|HAL_QSPI_ERROR_INVALID_CALLBACK
DECL|HAL_QSPI_ERROR_INVALID_PARAM|macro|HAL_QSPI_ERROR_INVALID_PARAM
DECL|HAL_QSPI_ERROR_NONE|macro|HAL_QSPI_ERROR_NONE
DECL|HAL_QSPI_ERROR_TIMEOUT|macro|HAL_QSPI_ERROR_TIMEOUT
DECL|HAL_QSPI_ERROR_TRANSFER|macro|HAL_QSPI_ERROR_TRANSFER
DECL|HAL_QSPI_FIFO_THRESHOLD_CB_ID|enumerator|HAL_QSPI_FIFO_THRESHOLD_CB_ID = 0x02U, /*!< QSPI FIFO Threshold Callback ID */
DECL|HAL_QSPI_MSP_DEINIT_CB_ID|enumerator|HAL_QSPI_MSP_DEINIT_CB_ID = 0x0B0 /*!< QSPI MspDeInit Callback ID */
DECL|HAL_QSPI_MSP_INIT_CB_ID|enumerator|HAL_QSPI_MSP_INIT_CB_ID = 0x0AU, /*!< QSPI MspInit Callback ID */
DECL|HAL_QSPI_RX_CPLT_CB_ID|enumerator|HAL_QSPI_RX_CPLT_CB_ID = 0x04U, /*!< QSPI Rx Complete Callback ID */
DECL|HAL_QSPI_RX_HALF_CPLT_CB_ID|enumerator|HAL_QSPI_RX_HALF_CPLT_CB_ID = 0x06U, /*!< QSPI Rx Half Complete Callback ID */
DECL|HAL_QSPI_STATE_ABORT|enumerator|HAL_QSPI_STATE_ABORT = 0x08U, /*!< Peripheral with abort request ongoing */
DECL|HAL_QSPI_STATE_BUSY_AUTO_POLLING|enumerator|HAL_QSPI_STATE_BUSY_AUTO_POLLING = 0x42U, /*!< Peripheral in auto polling mode ongoing */
DECL|HAL_QSPI_STATE_BUSY_INDIRECT_RX|enumerator|HAL_QSPI_STATE_BUSY_INDIRECT_RX = 0x22U, /*!< Peripheral in indirect mode with reception ongoing */
DECL|HAL_QSPI_STATE_BUSY_INDIRECT_TX|enumerator|HAL_QSPI_STATE_BUSY_INDIRECT_TX = 0x12U, /*!< Peripheral in indirect mode with transmission ongoing */
DECL|HAL_QSPI_STATE_BUSY_MEM_MAPPED|enumerator|HAL_QSPI_STATE_BUSY_MEM_MAPPED = 0x82U, /*!< Peripheral in memory mapped mode ongoing */
DECL|HAL_QSPI_STATE_BUSY|enumerator|HAL_QSPI_STATE_BUSY = 0x02U, /*!< Peripheral in indirect mode and busy */
DECL|HAL_QSPI_STATE_ERROR|enumerator|HAL_QSPI_STATE_ERROR = 0x04U /*!< Peripheral in error */
DECL|HAL_QSPI_STATE_READY|enumerator|HAL_QSPI_STATE_READY = 0x01U, /*!< Peripheral initialized and ready for use */
DECL|HAL_QSPI_STATE_RESET|enumerator|HAL_QSPI_STATE_RESET = 0x00U, /*!< Peripheral not initialized */
DECL|HAL_QSPI_STATUS_MATCH_CB_ID|enumerator|HAL_QSPI_STATUS_MATCH_CB_ID = 0x08U, /*!< QSPI Status Match Callback ID */
DECL|HAL_QSPI_StateTypeDef|typedef|}HAL_QSPI_StateTypeDef;
DECL|HAL_QSPI_TIMEOUT_CB_ID|enumerator|HAL_QSPI_TIMEOUT_CB_ID = 0x09U, /*!< QSPI Timeout Callback ID */
DECL|HAL_QSPI_TX_CPLT_CB_ID|enumerator|HAL_QSPI_TX_CPLT_CB_ID = 0x05U, /*!< QSPI Tx Complete Callback ID */
DECL|HAL_QSPI_TX_HALF_CPLT_CB_ID|enumerator|HAL_QSPI_TX_HALF_CPLT_CB_ID = 0x07U, /*!< QSPI Tx Half Complete Callback ID */
DECL|IS_QSPI_ADDRESS_MODE|macro|IS_QSPI_ADDRESS_MODE
DECL|IS_QSPI_ADDRESS_SIZE|macro|IS_QSPI_ADDRESS_SIZE
DECL|IS_QSPI_ALTERNATE_BYTES_MODE|macro|IS_QSPI_ALTERNATE_BYTES_MODE
DECL|IS_QSPI_ALTERNATE_BYTES_SIZE|macro|IS_QSPI_ALTERNATE_BYTES_SIZE
DECL|IS_QSPI_AUTOMATIC_STOP|macro|IS_QSPI_AUTOMATIC_STOP
DECL|IS_QSPI_CLOCK_MODE|macro|IS_QSPI_CLOCK_MODE
DECL|IS_QSPI_CLOCK_PRESCALER|macro|IS_QSPI_CLOCK_PRESCALER
DECL|IS_QSPI_CS_HIGH_TIME|macro|IS_QSPI_CS_HIGH_TIME
DECL|IS_QSPI_DATA_MODE|macro|IS_QSPI_DATA_MODE
DECL|IS_QSPI_DDR_HHC|macro|IS_QSPI_DDR_HHC
DECL|IS_QSPI_DDR_HHC|macro|IS_QSPI_DDR_HHC
DECL|IS_QSPI_DDR_MODE|macro|IS_QSPI_DDR_MODE
DECL|IS_QSPI_DUAL_FLASH_MODE|macro|IS_QSPI_DUAL_FLASH_MODE
DECL|IS_QSPI_DUMMY_CYCLES|macro|IS_QSPI_DUMMY_CYCLES
DECL|IS_QSPI_FIFO_THRESHOLD|macro|IS_QSPI_FIFO_THRESHOLD
DECL|IS_QSPI_FLASH_ID|macro|IS_QSPI_FLASH_ID
DECL|IS_QSPI_FLASH_SIZE|macro|IS_QSPI_FLASH_SIZE
DECL|IS_QSPI_INSTRUCTION_MODE|macro|IS_QSPI_INSTRUCTION_MODE
DECL|IS_QSPI_INSTRUCTION|macro|IS_QSPI_INSTRUCTION
DECL|IS_QSPI_INTERVAL|macro|IS_QSPI_INTERVAL
DECL|IS_QSPI_MATCH_MODE|macro|IS_QSPI_MATCH_MODE
DECL|IS_QSPI_SIOO_MODE|macro|IS_QSPI_SIOO_MODE
DECL|IS_QSPI_SSHIFT|macro|IS_QSPI_SSHIFT
DECL|IS_QSPI_STATUS_BYTES_SIZE|macro|IS_QSPI_STATUS_BYTES_SIZE
DECL|IS_QSPI_TIMEOUT_ACTIVATION|macro|IS_QSPI_TIMEOUT_ACTIVATION
DECL|IS_QSPI_TIMEOUT_PERIOD|macro|IS_QSPI_TIMEOUT_PERIOD
DECL|Init|member|QSPI_InitTypeDef Init; /* QSPI communication parameters */
DECL|Instance|member|QUADSPI_TypeDef *Instance; /* QSPI registers base address */
DECL|InstructionMode|member|uint32_t InstructionMode; /* Specifies the Instruction Mode
DECL|Instruction|member|uint32_t Instruction; /* Specifies the Instruction to be sent
DECL|Interval|member|uint32_t Interval; /* Specifies the number of clock cycles between two read during automatic polling phases.
DECL|Lock|member|__IO HAL_LockTypeDef Lock; /* Locking object */
DECL|Mask|member|uint32_t Mask; /* Specifies the mask to be applied to the status bytes received.
DECL|MatchMode|member|uint32_t MatchMode; /* Specifies the method used for determining a match.
DECL|Match|member|uint32_t Match; /* Specifies the value to be compared with the masked status register to get a match.
DECL|MspDeInitCallback|member|void (* MspDeInitCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|MspInitCallback|member|void (* MspInitCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|NbData|member|uint32_t NbData; /* Specifies the number of data to transfer. (This is the number of bytes)
DECL|QSPI_ADDRESS_16_BITS|macro|QSPI_ADDRESS_16_BITS
DECL|QSPI_ADDRESS_1_LINE|macro|QSPI_ADDRESS_1_LINE
DECL|QSPI_ADDRESS_24_BITS|macro|QSPI_ADDRESS_24_BITS
DECL|QSPI_ADDRESS_2_LINES|macro|QSPI_ADDRESS_2_LINES
DECL|QSPI_ADDRESS_32_BITS|macro|QSPI_ADDRESS_32_BITS
DECL|QSPI_ADDRESS_4_LINES|macro|QSPI_ADDRESS_4_LINES
DECL|QSPI_ADDRESS_8_BITS|macro|QSPI_ADDRESS_8_BITS
DECL|QSPI_ADDRESS_NONE|macro|QSPI_ADDRESS_NONE
DECL|QSPI_ALTERNATE_BYTES_16_BITS|macro|QSPI_ALTERNATE_BYTES_16_BITS
DECL|QSPI_ALTERNATE_BYTES_1_LINE|macro|QSPI_ALTERNATE_BYTES_1_LINE
DECL|QSPI_ALTERNATE_BYTES_24_BITS|macro|QSPI_ALTERNATE_BYTES_24_BITS
DECL|QSPI_ALTERNATE_BYTES_2_LINES|macro|QSPI_ALTERNATE_BYTES_2_LINES
DECL|QSPI_ALTERNATE_BYTES_32_BITS|macro|QSPI_ALTERNATE_BYTES_32_BITS
DECL|QSPI_ALTERNATE_BYTES_4_LINES|macro|QSPI_ALTERNATE_BYTES_4_LINES
DECL|QSPI_ALTERNATE_BYTES_8_BITS|macro|QSPI_ALTERNATE_BYTES_8_BITS
DECL|QSPI_ALTERNATE_BYTES_NONE|macro|QSPI_ALTERNATE_BYTES_NONE
DECL|QSPI_AUTOMATIC_STOP_DISABLE|macro|QSPI_AUTOMATIC_STOP_DISABLE
DECL|QSPI_AUTOMATIC_STOP_ENABLE|macro|QSPI_AUTOMATIC_STOP_ENABLE
DECL|QSPI_AutoPollingTypeDef|typedef|}QSPI_AutoPollingTypeDef;
DECL|QSPI_CLOCK_MODE_0|macro|QSPI_CLOCK_MODE_0
DECL|QSPI_CLOCK_MODE_3|macro|QSPI_CLOCK_MODE_3
DECL|QSPI_CS_HIGH_TIME_1_CYCLE|macro|QSPI_CS_HIGH_TIME_1_CYCLE
DECL|QSPI_CS_HIGH_TIME_2_CYCLE|macro|QSPI_CS_HIGH_TIME_2_CYCLE
DECL|QSPI_CS_HIGH_TIME_3_CYCLE|macro|QSPI_CS_HIGH_TIME_3_CYCLE
DECL|QSPI_CS_HIGH_TIME_4_CYCLE|macro|QSPI_CS_HIGH_TIME_4_CYCLE
DECL|QSPI_CS_HIGH_TIME_5_CYCLE|macro|QSPI_CS_HIGH_TIME_5_CYCLE
DECL|QSPI_CS_HIGH_TIME_6_CYCLE|macro|QSPI_CS_HIGH_TIME_6_CYCLE
DECL|QSPI_CS_HIGH_TIME_7_CYCLE|macro|QSPI_CS_HIGH_TIME_7_CYCLE
DECL|QSPI_CS_HIGH_TIME_8_CYCLE|macro|QSPI_CS_HIGH_TIME_8_CYCLE
DECL|QSPI_CommandTypeDef|typedef|}QSPI_CommandTypeDef;
DECL|QSPI_DATA_1_LINE|macro|QSPI_DATA_1_LINE
DECL|QSPI_DATA_2_LINES|macro|QSPI_DATA_2_LINES
DECL|QSPI_DATA_4_LINES|macro|QSPI_DATA_4_LINES
DECL|QSPI_DATA_NONE|macro|QSPI_DATA_NONE
DECL|QSPI_DDR_HHC_ANALOG_DELAY|macro|QSPI_DDR_HHC_ANALOG_DELAY
DECL|QSPI_DDR_HHC_HALF_CLK_DELAY|macro|QSPI_DDR_HHC_HALF_CLK_DELAY
DECL|QSPI_DDR_MODE_DISABLE|macro|QSPI_DDR_MODE_DISABLE
DECL|QSPI_DDR_MODE_ENABLE|macro|QSPI_DDR_MODE_ENABLE
DECL|QSPI_DUALFLASH_DISABLE|macro|QSPI_DUALFLASH_DISABLE
DECL|QSPI_DUALFLASH_ENABLE|macro|QSPI_DUALFLASH_ENABLE
DECL|QSPI_FLAG_BUSY|macro|QSPI_FLAG_BUSY
DECL|QSPI_FLAG_FT|macro|QSPI_FLAG_FT
DECL|QSPI_FLAG_SM|macro|QSPI_FLAG_SM
DECL|QSPI_FLAG_TC|macro|QSPI_FLAG_TC
DECL|QSPI_FLAG_TE|macro|QSPI_FLAG_TE
DECL|QSPI_FLAG_TO|macro|QSPI_FLAG_TO
DECL|QSPI_FLASH_ID_1|macro|QSPI_FLASH_ID_1
DECL|QSPI_FLASH_ID_2|macro|QSPI_FLASH_ID_2
DECL|QSPI_HandleTypeDef|typedef|}QSPI_HandleTypeDef;
DECL|QSPI_INSTRUCTION_1_LINE|macro|QSPI_INSTRUCTION_1_LINE
DECL|QSPI_INSTRUCTION_2_LINES|macro|QSPI_INSTRUCTION_2_LINES
DECL|QSPI_INSTRUCTION_4_LINES|macro|QSPI_INSTRUCTION_4_LINES
DECL|QSPI_INSTRUCTION_NONE|macro|QSPI_INSTRUCTION_NONE
DECL|QSPI_IT_FT|macro|QSPI_IT_FT
DECL|QSPI_IT_SM|macro|QSPI_IT_SM
DECL|QSPI_IT_TC|macro|QSPI_IT_TC
DECL|QSPI_IT_TE|macro|QSPI_IT_TE
DECL|QSPI_IT_TO|macro|QSPI_IT_TO
DECL|QSPI_InitTypeDef|typedef|}QSPI_InitTypeDef;
DECL|QSPI_MATCH_MODE_AND|macro|QSPI_MATCH_MODE_AND
DECL|QSPI_MATCH_MODE_OR|macro|QSPI_MATCH_MODE_OR
DECL|QSPI_MemoryMappedTypeDef|typedef|}QSPI_MemoryMappedTypeDef;
DECL|QSPI_SAMPLE_SHIFTING_HALFCYCLE|macro|QSPI_SAMPLE_SHIFTING_HALFCYCLE
DECL|QSPI_SAMPLE_SHIFTING_NONE|macro|QSPI_SAMPLE_SHIFTING_NONE
DECL|QSPI_SIOO_INST_EVERY_CMD|macro|QSPI_SIOO_INST_EVERY_CMD
DECL|QSPI_SIOO_INST_ONLY_FIRST_CMD|macro|QSPI_SIOO_INST_ONLY_FIRST_CMD
DECL|QSPI_TIMEOUT_COUNTER_DISABLE|macro|QSPI_TIMEOUT_COUNTER_DISABLE
DECL|QSPI_TIMEOUT_COUNTER_ENABLE|macro|QSPI_TIMEOUT_COUNTER_ENABLE
DECL|RxCpltCallback|member|void (* RxCpltCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|RxHalfCpltCallback|member|void (* RxHalfCpltCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|RxXferCount|member|__IO uint32_t RxXferCount; /* QSPI Rx Transfer Counter */
DECL|RxXferSize|member|__IO uint32_t RxXferSize; /* QSPI Rx Transfer size */
DECL|SIOOMode|member|uint32_t SIOOMode; /* Specifies the send instruction only once mode
DECL|STM32L4xx_HAL_QSPI_H|macro|STM32L4xx_HAL_QSPI_H
DECL|SampleShifting|member|uint32_t SampleShifting; /* Specifies the Sample Shift. The data is sampled 1/2 clock cycle delay later to
DECL|State|member|__IO HAL_QSPI_StateTypeDef State; /* QSPI communication state */
DECL|StatusBytesSize|member|uint32_t StatusBytesSize; /* Specifies the size of the status bytes received.
DECL|StatusMatchCallback|member|void (* StatusMatchCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|TimeOutActivation|member|uint32_t TimeOutActivation; /* Specifies if the timeout counter is enabled to release the chip select.
DECL|TimeOutCallback|member|void (* TimeOutCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|TimeOutPeriod|member|uint32_t TimeOutPeriod; /* Specifies the number of clock to wait when the FIFO is full before to release the chip select.
DECL|Timeout|member|uint32_t Timeout; /* Timeout for the QSPI memory access */
DECL|TxCpltCallback|member|void (* TxCpltCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|TxHalfCpltCallback|member|void (* TxHalfCpltCallback) (struct __QSPI_HandleTypeDef *hqspi);
DECL|TxXferCount|member|__IO uint32_t TxXferCount; /* QSPI Tx Transfer Counter */
DECL|TxXferSize|member|__IO uint32_t TxXferSize; /* QSPI Tx Transfer size */
DECL|__HAL_QSPI_CLEAR_FLAG|macro|__HAL_QSPI_CLEAR_FLAG
DECL|__HAL_QSPI_DISABLE_IT|macro|__HAL_QSPI_DISABLE_IT
DECL|__HAL_QSPI_DISABLE|macro|__HAL_QSPI_DISABLE
DECL|__HAL_QSPI_ENABLE_IT|macro|__HAL_QSPI_ENABLE_IT
DECL|__HAL_QSPI_ENABLE|macro|__HAL_QSPI_ENABLE
DECL|__HAL_QSPI_GET_FLAG|macro|__HAL_QSPI_GET_FLAG
DECL|__HAL_QSPI_GET_IT_SOURCE|macro|__HAL_QSPI_GET_IT_SOURCE
DECL|__HAL_QSPI_RESET_HANDLE_STATE|macro|__HAL_QSPI_RESET_HANDLE_STATE
DECL|__HAL_QSPI_RESET_HANDLE_STATE|macro|__HAL_QSPI_RESET_HANDLE_STATE
DECL|__QSPI_HandleTypeDef|struct|typedef struct __QSPI_HandleTypeDef
DECL|hdma|member|DMA_HandleTypeDef *hdma; /* QSPI Rx/Tx DMA Handle parameters */
DECL|pQSPI_CallbackTypeDef|typedef|typedef void (*pQSPI_CallbackTypeDef)(QSPI_HandleTypeDef *hqspi);
DECL|pRxBuffPtr|member|uint8_t *pRxBuffPtr; /* Pointer to QSPI Rx transfer Buffer */
DECL|pTxBuffPtr|member|uint8_t *pTxBuffPtr; /* Pointer to QSPI Tx transfer Buffer */
