DECL|AbortCpltCallback|member|void (* AbortCpltCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|AccessTime|member|uint32_t AccessTime; /* It indicates the number of cycles for the device acces time.
DECL|AddressDtrMode|member|uint32_t AddressDtrMode; /* It enables or not the DTR mode for the address phase.
DECL|AddressMode|member|uint32_t AddressMode; /* It indicates the mode of the address.
DECL|AddressSize|member|uint32_t AddressSize; /* It indicates the size of the address.
DECL|AddressSize|member|uint32_t AddressSize; /* It indicates the size of the address.
DECL|AddressSpace|member|uint32_t AddressSpace; /* It indicates the address space accessed by the command.
DECL|Address|member|uint32_t Address; /* It contains the address to be sent to the device.
DECL|Address|member|uint32_t Address; /* It contains the address to be sent tot he device.
DECL|AlternateBytesDtrMode|member|uint32_t AlternateBytesDtrMode; /* It enables or not the DTR mode for the alternate bytes phase.
DECL|AlternateBytesMode|member|uint32_t AlternateBytesMode; /* It indicates the mode of the alternate bytes.
DECL|AlternateBytesSize|member|uint32_t AlternateBytesSize; /* It indicates the size of the alternate bytes.
DECL|AlternateBytes|member|uint32_t AlternateBytes; /* It contains the alternate bytes to be sent to the device.
DECL|AutomaticStop|member|uint32_t AutomaticStop; /* Specifies if automatic polling is stopped after a match.
DECL|ChipSelectBoundary|member|uint32_t ChipSelectBoundary; /* It enables the transaction boundary feature and
DECL|ChipSelectHighTime|member|uint32_t ChipSelectHighTime; /* It defines the minimun number of clocks which the chip select
DECL|ClkPort|member|uint32_t ClkPort; /* It indicates which port of the OSPI IO Manager is used for the CLK pins.
DECL|ClockMode|member|uint32_t ClockMode; /* It indicates the level of clock when the chip select is released.
DECL|ClockPrescaler|member|uint32_t ClockPrescaler; /* It specifies the prescaler factor used for generating
DECL|CmdCpltCallback|member|void (* CmdCpltCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|DQSMode|member|uint32_t DQSMode; /* It enables or not the data strobe management.
DECL|DQSMode|member|uint32_t DQSMode; /* It enables or not the data strobe management.
DECL|DQSPort|member|uint32_t DQSPort; /* It indicates which port of the OSPI IO Manager is used for the DQS pin.
DECL|DataDtrMode|member|uint32_t DataDtrMode; /* It enables or not the DTR mode for the data phase.
DECL|DataMode|member|uint32_t DataMode; /* It indicates the mode of the data.
DECL|DelayHoldQuarterCycle|member|uint32_t DelayHoldQuarterCycle; /* It allows to hold to 1/4 cycle the data.
DECL|DeviceSize|member|uint32_t DeviceSize; /* It defines the size of the external device connected to the OSPI,
DECL|DualQuad|member|uint32_t DualQuad; /* It enables or not the dual-quad mode which allow to access up to
DECL|DummyCycles|member|uint32_t DummyCycles; /* It indicates the number of dummy cycles inserted before data phase.
DECL|ErrorCallback|member|void (* ErrorCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /* Error code in case of HAL driver internal error */
DECL|FifoThresholdCallback|member|void (* FifoThresholdCallback)(struct __OSPI_HandleTypeDef *hospi);
DECL|FifoThreshold|member|uint32_t FifoThreshold; /* This is the threshold used byt the IP to generate the interrupt
DECL|FlashId|member|uint32_t FlashId; /* It indicates which external device is selected for this command (it
DECL|FreeRunningClock|member|uint32_t FreeRunningClock; /* It enables or not the free running clock.
DECL|HAL_OSPIM_IOPORT_1_HIGH|macro|HAL_OSPIM_IOPORT_1_HIGH
DECL|HAL_OSPIM_IOPORT_1_LOW|macro|HAL_OSPIM_IOPORT_1_LOW
DECL|HAL_OSPIM_IOPORT_2_HIGH|macro|HAL_OSPIM_IOPORT_2_HIGH
DECL|HAL_OSPIM_IOPORT_2_LOW|macro|HAL_OSPIM_IOPORT_2_LOW
DECL|HAL_OSPI_ABORT_CB_ID|enumerator|HAL_OSPI_ABORT_CB_ID = 0x01U, /*!< OSPI Abort Callback ID */
DECL|HAL_OSPI_ADDRESS_16_BITS|macro|HAL_OSPI_ADDRESS_16_BITS
DECL|HAL_OSPI_ADDRESS_1_LINE|macro|HAL_OSPI_ADDRESS_1_LINE
DECL|HAL_OSPI_ADDRESS_24_BITS|macro|HAL_OSPI_ADDRESS_24_BITS
DECL|HAL_OSPI_ADDRESS_2_LINES|macro|HAL_OSPI_ADDRESS_2_LINES
DECL|HAL_OSPI_ADDRESS_32_BITS|macro|HAL_OSPI_ADDRESS_32_BITS
DECL|HAL_OSPI_ADDRESS_4_LINES|macro|HAL_OSPI_ADDRESS_4_LINES
DECL|HAL_OSPI_ADDRESS_8_BITS|macro|HAL_OSPI_ADDRESS_8_BITS
DECL|HAL_OSPI_ADDRESS_8_LINES|macro|HAL_OSPI_ADDRESS_8_LINES
DECL|HAL_OSPI_ADDRESS_DTR_DISABLE|macro|HAL_OSPI_ADDRESS_DTR_DISABLE
DECL|HAL_OSPI_ADDRESS_DTR_ENABLE|macro|HAL_OSPI_ADDRESS_DTR_ENABLE
DECL|HAL_OSPI_ADDRESS_NONE|macro|HAL_OSPI_ADDRESS_NONE
DECL|HAL_OSPI_ALTERNATE_BYTES_16_BITS|macro|HAL_OSPI_ALTERNATE_BYTES_16_BITS
DECL|HAL_OSPI_ALTERNATE_BYTES_1_LINE|macro|HAL_OSPI_ALTERNATE_BYTES_1_LINE
DECL|HAL_OSPI_ALTERNATE_BYTES_24_BITS|macro|HAL_OSPI_ALTERNATE_BYTES_24_BITS
DECL|HAL_OSPI_ALTERNATE_BYTES_2_LINES|macro|HAL_OSPI_ALTERNATE_BYTES_2_LINES
DECL|HAL_OSPI_ALTERNATE_BYTES_32_BITS|macro|HAL_OSPI_ALTERNATE_BYTES_32_BITS
DECL|HAL_OSPI_ALTERNATE_BYTES_4_LINES|macro|HAL_OSPI_ALTERNATE_BYTES_4_LINES
DECL|HAL_OSPI_ALTERNATE_BYTES_8_BITS|macro|HAL_OSPI_ALTERNATE_BYTES_8_BITS
DECL|HAL_OSPI_ALTERNATE_BYTES_8_LINES|macro|HAL_OSPI_ALTERNATE_BYTES_8_LINES
DECL|HAL_OSPI_ALTERNATE_BYTES_DTR_DISABLE|macro|HAL_OSPI_ALTERNATE_BYTES_DTR_DISABLE
DECL|HAL_OSPI_ALTERNATE_BYTES_DTR_ENABLE|macro|HAL_OSPI_ALTERNATE_BYTES_DTR_ENABLE
DECL|HAL_OSPI_ALTERNATE_BYTES_NONE|macro|HAL_OSPI_ALTERNATE_BYTES_NONE
DECL|HAL_OSPI_AUTOMATIC_STOP_DISABLE|macro|HAL_OSPI_AUTOMATIC_STOP_DISABLE
DECL|HAL_OSPI_AUTOMATIC_STOP_ENABLE|macro|HAL_OSPI_AUTOMATIC_STOP_ENABLE
DECL|HAL_OSPI_CLOCK_MODE_0|macro|HAL_OSPI_CLOCK_MODE_0
DECL|HAL_OSPI_CLOCK_MODE_3|macro|HAL_OSPI_CLOCK_MODE_3
DECL|HAL_OSPI_CMD_CPLT_CB_ID|enumerator|HAL_OSPI_CMD_CPLT_CB_ID = 0x03U, /*!< OSPI Command Complete Callback ID */
DECL|HAL_OSPI_CallbackIDTypeDef|typedef|}HAL_OSPI_CallbackIDTypeDef;
DECL|HAL_OSPI_DATA_1_LINE|macro|HAL_OSPI_DATA_1_LINE
DECL|HAL_OSPI_DATA_2_LINES|macro|HAL_OSPI_DATA_2_LINES
DECL|HAL_OSPI_DATA_4_LINES|macro|HAL_OSPI_DATA_4_LINES
DECL|HAL_OSPI_DATA_8_LINES|macro|HAL_OSPI_DATA_8_LINES
DECL|HAL_OSPI_DATA_DTR_DISABLE|macro|HAL_OSPI_DATA_DTR_DISABLE
DECL|HAL_OSPI_DATA_DTR_ENABLE|macro|HAL_OSPI_DATA_DTR_ENABLE
DECL|HAL_OSPI_DATA_NONE|macro|HAL_OSPI_DATA_NONE
DECL|HAL_OSPI_DHQC_DISABLE|macro|HAL_OSPI_DHQC_DISABLE
DECL|HAL_OSPI_DHQC_ENABLE|macro|HAL_OSPI_DHQC_ENABLE
DECL|HAL_OSPI_DQS_DISABLE|macro|HAL_OSPI_DQS_DISABLE
DECL|HAL_OSPI_DQS_ENABLE|macro|HAL_OSPI_DQS_ENABLE
DECL|HAL_OSPI_DUALQUAD_DISABLE|macro|HAL_OSPI_DUALQUAD_DISABLE
DECL|HAL_OSPI_DUALQUAD_ENABLE|macro|HAL_OSPI_DUALQUAD_ENABLE
DECL|HAL_OSPI_ERROR_CB_ID|enumerator|HAL_OSPI_ERROR_CB_ID = 0x00U, /*!< OSPI Error Callback ID */
DECL|HAL_OSPI_ERROR_DMA|macro|HAL_OSPI_ERROR_DMA
DECL|HAL_OSPI_ERROR_INVALID_CALLBACK|macro|HAL_OSPI_ERROR_INVALID_CALLBACK
DECL|HAL_OSPI_ERROR_INVALID_PARAM|macro|HAL_OSPI_ERROR_INVALID_PARAM
DECL|HAL_OSPI_ERROR_INVALID_SEQUENCE|macro|HAL_OSPI_ERROR_INVALID_SEQUENCE
DECL|HAL_OSPI_ERROR_NONE|macro|HAL_OSPI_ERROR_NONE
DECL|HAL_OSPI_ERROR_TIMEOUT|macro|HAL_OSPI_ERROR_TIMEOUT
DECL|HAL_OSPI_ERROR_TRANSFER|macro|HAL_OSPI_ERROR_TRANSFER
DECL|HAL_OSPI_FIFO_THRESHOLD_CB_ID|enumerator|HAL_OSPI_FIFO_THRESHOLD_CB_ID = 0x02U, /*!< OSPI FIFO Threshold Callback ID */
DECL|HAL_OSPI_FIXED_LATENCY|macro|HAL_OSPI_FIXED_LATENCY
DECL|HAL_OSPI_FLAG_BUSY|macro|HAL_OSPI_FLAG_BUSY
DECL|HAL_OSPI_FLAG_FT|macro|HAL_OSPI_FLAG_FT
DECL|HAL_OSPI_FLAG_SM|macro|HAL_OSPI_FLAG_SM
DECL|HAL_OSPI_FLAG_TC|macro|HAL_OSPI_FLAG_TC
DECL|HAL_OSPI_FLAG_TE|macro|HAL_OSPI_FLAG_TE
DECL|HAL_OSPI_FLAG_TO|macro|HAL_OSPI_FLAG_TO
DECL|HAL_OSPI_FLASH_ID_1|macro|HAL_OSPI_FLASH_ID_1
DECL|HAL_OSPI_FLASH_ID_2|macro|HAL_OSPI_FLASH_ID_2
DECL|HAL_OSPI_FREERUNCLK_DISABLE|macro|HAL_OSPI_FREERUNCLK_DISABLE
DECL|HAL_OSPI_FREERUNCLK_ENABLE|macro|HAL_OSPI_FREERUNCLK_ENABLE
DECL|HAL_OSPI_INSTRUCTION_16_BITS|macro|HAL_OSPI_INSTRUCTION_16_BITS
DECL|HAL_OSPI_INSTRUCTION_1_LINE|macro|HAL_OSPI_INSTRUCTION_1_LINE
DECL|HAL_OSPI_INSTRUCTION_24_BITS|macro|HAL_OSPI_INSTRUCTION_24_BITS
DECL|HAL_OSPI_INSTRUCTION_2_LINES|macro|HAL_OSPI_INSTRUCTION_2_LINES
DECL|HAL_OSPI_INSTRUCTION_32_BITS|macro|HAL_OSPI_INSTRUCTION_32_BITS
DECL|HAL_OSPI_INSTRUCTION_4_LINES|macro|HAL_OSPI_INSTRUCTION_4_LINES
DECL|HAL_OSPI_INSTRUCTION_8_BITS|macro|HAL_OSPI_INSTRUCTION_8_BITS
DECL|HAL_OSPI_INSTRUCTION_8_LINES|macro|HAL_OSPI_INSTRUCTION_8_LINES
DECL|HAL_OSPI_INSTRUCTION_DTR_DISABLE|macro|HAL_OSPI_INSTRUCTION_DTR_DISABLE
DECL|HAL_OSPI_INSTRUCTION_DTR_ENABLE|macro|HAL_OSPI_INSTRUCTION_DTR_ENABLE
DECL|HAL_OSPI_INSTRUCTION_NONE|macro|HAL_OSPI_INSTRUCTION_NONE
DECL|HAL_OSPI_IT_FT|macro|HAL_OSPI_IT_FT
DECL|HAL_OSPI_IT_SM|macro|HAL_OSPI_IT_SM
DECL|HAL_OSPI_IT_TC|macro|HAL_OSPI_IT_TC
DECL|HAL_OSPI_IT_TE|macro|HAL_OSPI_IT_TE
DECL|HAL_OSPI_IT_TO|macro|HAL_OSPI_IT_TO
DECL|HAL_OSPI_LATENCY_ON_WRITE|macro|HAL_OSPI_LATENCY_ON_WRITE
DECL|HAL_OSPI_MATCH_MODE_AND|macro|HAL_OSPI_MATCH_MODE_AND
DECL|HAL_OSPI_MATCH_MODE_OR|macro|HAL_OSPI_MATCH_MODE_OR
DECL|HAL_OSPI_MEMORY_ADDRESS_SPACE|macro|HAL_OSPI_MEMORY_ADDRESS_SPACE
DECL|HAL_OSPI_MEMTYPE_HYPERBUS|macro|HAL_OSPI_MEMTYPE_HYPERBUS
DECL|HAL_OSPI_MEMTYPE_MACRONIX_RAM|macro|HAL_OSPI_MEMTYPE_MACRONIX_RAM
DECL|HAL_OSPI_MEMTYPE_MACRONIX|macro|HAL_OSPI_MEMTYPE_MACRONIX
DECL|HAL_OSPI_MEMTYPE_MICRON|macro|HAL_OSPI_MEMTYPE_MICRON
DECL|HAL_OSPI_MSP_DEINIT_CB_ID|enumerator|HAL_OSPI_MSP_DEINIT_CB_ID = 0x0BU /*!< OSPI MspDeInit Callback ID */
DECL|HAL_OSPI_MSP_INIT_CB_ID|enumerator|HAL_OSPI_MSP_INIT_CB_ID = 0x0AU, /*!< OSPI MspInit Callback ID */
DECL|HAL_OSPI_NO_LATENCY_ON_WRITE|macro|HAL_OSPI_NO_LATENCY_ON_WRITE
DECL|HAL_OSPI_OPTYPE_COMMON_CFG|macro|HAL_OSPI_OPTYPE_COMMON_CFG
DECL|HAL_OSPI_OPTYPE_READ_CFG|macro|HAL_OSPI_OPTYPE_READ_CFG
DECL|HAL_OSPI_OPTYPE_WRITE_CFG|macro|HAL_OSPI_OPTYPE_WRITE_CFG
DECL|HAL_OSPI_REGISTER_ADDRESS_SPACE|macro|HAL_OSPI_REGISTER_ADDRESS_SPACE
DECL|HAL_OSPI_RX_CPLT_CB_ID|enumerator|HAL_OSPI_RX_CPLT_CB_ID = 0x04U, /*!< OSPI Rx Complete Callback ID */
DECL|HAL_OSPI_RX_HALF_CPLT_CB_ID|enumerator|HAL_OSPI_RX_HALF_CPLT_CB_ID = 0x06U, /*!< OSPI Rx Half Complete Callback ID */
DECL|HAL_OSPI_SAMPLE_SHIFTING_HALFCYCLE|macro|HAL_OSPI_SAMPLE_SHIFTING_HALFCYCLE
DECL|HAL_OSPI_SAMPLE_SHIFTING_NONE|macro|HAL_OSPI_SAMPLE_SHIFTING_NONE
DECL|HAL_OSPI_SIOO_INST_EVERY_CMD|macro|HAL_OSPI_SIOO_INST_EVERY_CMD
DECL|HAL_OSPI_SIOO_INST_ONLY_FIRST_CMD|macro|HAL_OSPI_SIOO_INST_ONLY_FIRST_CMD
DECL|HAL_OSPI_STATE_ABORT|macro|HAL_OSPI_STATE_ABORT
DECL|HAL_OSPI_STATE_BUSY_AUTO_POLLING|macro|HAL_OSPI_STATE_BUSY_AUTO_POLLING
DECL|HAL_OSPI_STATE_BUSY_CMD|macro|HAL_OSPI_STATE_BUSY_CMD
DECL|HAL_OSPI_STATE_BUSY_MEM_MAPPED|macro|HAL_OSPI_STATE_BUSY_MEM_MAPPED
DECL|HAL_OSPI_STATE_BUSY_RX|macro|HAL_OSPI_STATE_BUSY_RX
DECL|HAL_OSPI_STATE_BUSY_TX|macro|HAL_OSPI_STATE_BUSY_TX
DECL|HAL_OSPI_STATE_CMD_CFG|macro|HAL_OSPI_STATE_CMD_CFG
DECL|HAL_OSPI_STATE_ERROR|macro|HAL_OSPI_STATE_ERROR
DECL|HAL_OSPI_STATE_HYPERBUS_INIT|macro|HAL_OSPI_STATE_HYPERBUS_INIT
DECL|HAL_OSPI_STATE_READY|macro|HAL_OSPI_STATE_READY
DECL|HAL_OSPI_STATE_READ_CMD_CFG|macro|HAL_OSPI_STATE_READ_CMD_CFG
DECL|HAL_OSPI_STATE_RESET|macro|HAL_OSPI_STATE_RESET
DECL|HAL_OSPI_STATE_WRITE_CMD_CFG|macro|HAL_OSPI_STATE_WRITE_CMD_CFG
DECL|HAL_OSPI_STATUS_MATCH_CB_ID|enumerator|HAL_OSPI_STATUS_MATCH_CB_ID = 0x08U, /*!< OSPI Status Match Callback ID */
DECL|HAL_OSPI_TIMEOUT_CB_ID|enumerator|HAL_OSPI_TIMEOUT_CB_ID = 0x09U, /*!< OSPI Timeout Callback ID */
DECL|HAL_OSPI_TIMEOUT_COUNTER_DISABLE|macro|HAL_OSPI_TIMEOUT_COUNTER_DISABLE
DECL|HAL_OSPI_TIMEOUT_COUNTER_ENABLE|macro|HAL_OSPI_TIMEOUT_COUNTER_ENABLE
DECL|HAL_OSPI_TIMEOUT_DEFAULT_VALUE|macro|HAL_OSPI_TIMEOUT_DEFAULT_VALUE
DECL|HAL_OSPI_TX_CPLT_CB_ID|enumerator|HAL_OSPI_TX_CPLT_CB_ID = 0x05U, /*!< OSPI Tx Complete Callback ID */
DECL|HAL_OSPI_TX_HALF_CPLT_CB_ID|enumerator|HAL_OSPI_TX_HALF_CPLT_CB_ID = 0x07U, /*!< OSPI Tx Half Complete Callback ID */
DECL|HAL_OSPI_VARIABLE_LATENCY|macro|HAL_OSPI_VARIABLE_LATENCY
DECL|HAL_OSPI_WRAP_128_BYTES|macro|HAL_OSPI_WRAP_128_BYTES
DECL|HAL_OSPI_WRAP_16_BYTES|macro|HAL_OSPI_WRAP_16_BYTES
DECL|HAL_OSPI_WRAP_32_BYTES|macro|HAL_OSPI_WRAP_32_BYTES
DECL|HAL_OSPI_WRAP_64_BYTES|macro|HAL_OSPI_WRAP_64_BYTES
DECL|HAL_OSPI_WRAP_NOT_SUPPORTED|macro|HAL_OSPI_WRAP_NOT_SUPPORTED
DECL|IOHighPort|member|uint32_t IOHighPort; /* It indicates which port of the OSPI IO Manager is used for the IO[7:4] pins.
DECL|IOLowPort|member|uint32_t IOLowPort; /* It indicates which port of the OSPI IO Manager is used for the IO[3:0] pins.
DECL|IS_OSPIM_IO_PORT|macro|IS_OSPIM_IO_PORT
DECL|IS_OSPIM_PORT|macro|IS_OSPIM_PORT
DECL|IS_OSPI_ACCESS_TIME|macro|IS_OSPI_ACCESS_TIME
DECL|IS_OSPI_ADDRESS_DTR_MODE|macro|IS_OSPI_ADDRESS_DTR_MODE
DECL|IS_OSPI_ADDRESS_MODE|macro|IS_OSPI_ADDRESS_MODE
DECL|IS_OSPI_ADDRESS_SIZE|macro|IS_OSPI_ADDRESS_SIZE
DECL|IS_OSPI_ADDRESS_SPACE|macro|IS_OSPI_ADDRESS_SPACE
DECL|IS_OSPI_ALT_BYTES_DTR_MODE|macro|IS_OSPI_ALT_BYTES_DTR_MODE
DECL|IS_OSPI_ALT_BYTES_MODE|macro|IS_OSPI_ALT_BYTES_MODE
DECL|IS_OSPI_ALT_BYTES_SIZE|macro|IS_OSPI_ALT_BYTES_SIZE
DECL|IS_OSPI_AUTOMATIC_STOP|macro|IS_OSPI_AUTOMATIC_STOP
DECL|IS_OSPI_CLK_PRESCALER|macro|IS_OSPI_CLK_PRESCALER
DECL|IS_OSPI_CLOCK_MODE|macro|IS_OSPI_CLOCK_MODE
DECL|IS_OSPI_CS_BOUNDARY|macro|IS_OSPI_CS_BOUNDARY
DECL|IS_OSPI_CS_HIGH_TIME|macro|IS_OSPI_CS_HIGH_TIME
DECL|IS_OSPI_DATA_DTR_MODE|macro|IS_OSPI_DATA_DTR_MODE
DECL|IS_OSPI_DATA_MODE|macro|IS_OSPI_DATA_MODE
DECL|IS_OSPI_DEVICE_SIZE|macro|IS_OSPI_DEVICE_SIZE
DECL|IS_OSPI_DHQC|macro|IS_OSPI_DHQC
DECL|IS_OSPI_DQS_MODE|macro|IS_OSPI_DQS_MODE
DECL|IS_OSPI_DUALQUAD_MODE|macro|IS_OSPI_DUALQUAD_MODE
DECL|IS_OSPI_DUMMY_CYCLES|macro|IS_OSPI_DUMMY_CYCLES
DECL|IS_OSPI_FIFO_THRESHOLD|macro|IS_OSPI_FIFO_THRESHOLD
DECL|IS_OSPI_FLASH_ID|macro|IS_OSPI_FLASH_ID
DECL|IS_OSPI_FREE_RUN_CLK|macro|IS_OSPI_FREE_RUN_CLK
DECL|IS_OSPI_INSTRUCTION_DTR_MODE|macro|IS_OSPI_INSTRUCTION_DTR_MODE
DECL|IS_OSPI_INSTRUCTION_MODE|macro|IS_OSPI_INSTRUCTION_MODE
DECL|IS_OSPI_INSTRUCTION_SIZE|macro|IS_OSPI_INSTRUCTION_SIZE
DECL|IS_OSPI_INTERVAL|macro|IS_OSPI_INTERVAL
DECL|IS_OSPI_LATENCY_MODE|macro|IS_OSPI_LATENCY_MODE
DECL|IS_OSPI_MATCH_MODE|macro|IS_OSPI_MATCH_MODE
DECL|IS_OSPI_MEMORY_TYPE|macro|IS_OSPI_MEMORY_TYPE
DECL|IS_OSPI_NUMBER_DATA|macro|IS_OSPI_NUMBER_DATA
DECL|IS_OSPI_OPERATION_TYPE|macro|IS_OSPI_OPERATION_TYPE
DECL|IS_OSPI_RW_RECOVERY_TIME|macro|IS_OSPI_RW_RECOVERY_TIME
DECL|IS_OSPI_SAMPLE_SHIFTING|macro|IS_OSPI_SAMPLE_SHIFTING
DECL|IS_OSPI_SIOO_MODE|macro|IS_OSPI_SIOO_MODE
DECL|IS_OSPI_STATUS_BYTES_SIZE|macro|IS_OSPI_STATUS_BYTES_SIZE
DECL|IS_OSPI_TIMEOUT_ACTIVATION|macro|IS_OSPI_TIMEOUT_ACTIVATION
DECL|IS_OSPI_TIMEOUT_PERIOD|macro|IS_OSPI_TIMEOUT_PERIOD
DECL|IS_OSPI_WRAP_SIZE|macro|IS_OSPI_WRAP_SIZE
DECL|IS_OSPI_WRITE_ZERO_LATENCY|macro|IS_OSPI_WRITE_ZERO_LATENCY
DECL|Init|member|OSPI_InitTypeDef Init; /* OSPI initialization parameters */
DECL|Instance|member|OCTOSPI_TypeDef *Instance; /* OSPI registers base address */
DECL|InstructionDtrMode|member|uint32_t InstructionDtrMode; /* It enables or not the DTR mode for the instruction phase.
DECL|InstructionMode|member|uint32_t InstructionMode; /* It indicates the mode of the instruction.
DECL|InstructionSize|member|uint32_t InstructionSize; /* It indicates the size of the instruction.
DECL|Instruction|member|uint32_t Instruction; /* It contains the instruction to be sent to the device.
DECL|Interval|member|uint32_t Interval; /* Specifies the number of clock cycles between two read during automatic polling phases.
DECL|LatencyMode|member|uint32_t LatencyMode; /* It configures the latency mode.
DECL|Mask|member|uint32_t Mask; /* Specifies the mask to be applied to the status bytes received.
DECL|MatchMode|member|uint32_t MatchMode; /* Specifies the method used for determining a match.
DECL|Match|member|uint32_t Match; /* Specifies the value to be compared with the masked status register to get a match.
DECL|MemoryType|member|uint32_t MemoryType; /* It indicates the external device type connected to the OSPI.
DECL|MspDeInitCallback|member|void (* MspDeInitCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|MspInitCallback|member|void (* MspInitCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|NCSPort|member|uint32_t NCSPort; /* It indicates which port of the OSPI IO Manager is used for the NCS pin.
DECL|NbData|member|uint32_t NbData; /* It indicates the number of data transferred with this command.
DECL|NbData|member|uint32_t NbData; /* It indicates the number of data transferred with this command.
DECL|OSPIM_CfgTypeDef|typedef|}OSPIM_CfgTypeDef;
DECL|OSPI_AutoPollingTypeDef|typedef|}OSPI_AutoPollingTypeDef;
DECL|OSPI_HandleTypeDef|typedef|}OSPI_HandleTypeDef;
DECL|OSPI_HyperbusCfgTypeDef|typedef|}OSPI_HyperbusCfgTypeDef;
DECL|OSPI_HyperbusCmdTypeDef|typedef|}OSPI_HyperbusCmdTypeDef;
DECL|OSPI_InitTypeDef|typedef|}OSPI_InitTypeDef;
DECL|OSPI_MemoryMappedTypeDef|typedef|}OSPI_MemoryMappedTypeDef;
DECL|OSPI_RegularCmdTypeDef|typedef|}OSPI_RegularCmdTypeDef;
DECL|OperationType|member|uint32_t OperationType; /* It indicates if the configuration applies to the common regsiters or
DECL|RWRecoveryTime|member|uint32_t RWRecoveryTime; /* It indicates the number of cycles for the device read write recovery time.
DECL|RxCpltCallback|member|void (* RxCpltCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|RxHalfCpltCallback|member|void (* RxHalfCpltCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|SIOOMode|member|uint32_t SIOOMode; /* It enables or not the SIOO mode.
DECL|STM32L4xx_HAL_OSPI_H|macro|STM32L4xx_HAL_OSPI_H
DECL|SampleShifting|member|uint32_t SampleShifting; /* It allows to delay to 1/2 cycle the data sampling in order
DECL|State|member|__IO uint32_t State; /* Internal state of the OSPI HAL driver */
DECL|StatusMatchCallback|member|void (* StatusMatchCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|TimeOutActivation|member|uint32_t TimeOutActivation; /* Specifies if the timeout counter is enabled to release the chip select.
DECL|TimeOutCallback|member|void (* TimeOutCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|TimeOutPeriod|member|uint32_t TimeOutPeriod; /* Specifies the number of clock to wait when the FIFO is full before to release the chip select.
DECL|Timeout|member|uint32_t Timeout; /* Timeout used for the OSPI external device access */
DECL|TxCpltCallback|member|void (* TxCpltCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|TxHalfCpltCallback|member|void (* TxHalfCpltCallback) (struct __OSPI_HandleTypeDef *hospi);
DECL|WrapSize|member|uint32_t WrapSize; /* It indicates the wrap-size corresponding the external device configuration.
DECL|WriteZeroLatency|member|uint32_t WriteZeroLatency; /* It enables or not the latency for the write access.
DECL|XferCount|member|__IO uint32_t XferCount; /* Counter of data transferred */
DECL|XferSize|member|__IO uint32_t XferSize; /* Number of data to transfer */
DECL|__HAL_OSPI_CLEAR_FLAG|macro|__HAL_OSPI_CLEAR_FLAG
DECL|__HAL_OSPI_DISABLE_IT|macro|__HAL_OSPI_DISABLE_IT
DECL|__HAL_OSPI_DISABLE|macro|__HAL_OSPI_DISABLE
DECL|__HAL_OSPI_ENABLE_IT|macro|__HAL_OSPI_ENABLE_IT
DECL|__HAL_OSPI_ENABLE|macro|__HAL_OSPI_ENABLE
DECL|__HAL_OSPI_GET_FLAG|macro|__HAL_OSPI_GET_FLAG
DECL|__HAL_OSPI_GET_IT_SOURCE|macro|__HAL_OSPI_GET_IT_SOURCE
DECL|__HAL_OSPI_RESET_HANDLE_STATE|macro|__HAL_OSPI_RESET_HANDLE_STATE
DECL|__HAL_OSPI_RESET_HANDLE_STATE|macro|__HAL_OSPI_RESET_HANDLE_STATE
DECL|__OSPI_HandleTypeDef|struct|typedef struct __OSPI_HandleTypeDef
DECL|hdma|member|DMA_HandleTypeDef *hdma; /* Handle of the DMA channel used for the transfer */
DECL|pBuffPtr|member|uint8_t *pBuffPtr; /* Address of the OSPI buffer for transfer */
DECL|pOSPI_CallbackTypeDef|typedef|typedef void (*pOSPI_CallbackTypeDef)(OSPI_HandleTypeDef *hospi);
