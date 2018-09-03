DECL|AHBWriteWaitInterval|member|uint16_t AHBWriteWaitInterval; /*!< AHB write wait interval, mutiply AHB write interval
DECL|AHBWriteWaitUnit|member|flexspi_ahb_write_wait_unit_t AHBWriteWaitUnit; /*!< AHB write wait unit. */
DECL|ARDSeqIndex|member|uint8_t ARDSeqIndex; /*!< Sequence ID for AHB read command. */
DECL|ARDSeqNumber|member|uint8_t ARDSeqNumber; /*!< Sequence number for AHB read command. */
DECL|AWRSeqIndex|member|uint8_t AWRSeqIndex; /*!< Sequence ID for AHB write command. */
DECL|AWRSeqNumber|member|uint8_t AWRSeqNumber; /*!< Sequence number for AHB write command. */
DECL|CSHoldTime|member|uint8_t CSHoldTime; /*!< CS line hold time. */
DECL|CSIntervalUnit|member|flexspi_cs_interval_cycle_unit_t CSIntervalUnit; /*!< CS interval unit, 1 or 256 cycle. */
DECL|CSInterval|member|uint16_t CSInterval; /*!< CS line assert interval, mutiply CS interval unit to
DECL|CSSetupTime|member|uint8_t CSSetupTime; /*!< CS line setup time. */
DECL|FLEXSPI_ClearInterruptStatusFlags|function|static inline void FLEXSPI_ClearInterruptStatusFlags(FLEXSPI_Type *base, uint32_t mask)
DECL|FLEXSPI_DisableInterrupts|function|static inline void FLEXSPI_DisableInterrupts(FLEXSPI_Type *base, uint32_t mask)
DECL|FLEXSPI_EnableAHBParallelMode|function|static inline void FLEXSPI_EnableAHBParallelMode(FLEXSPI_Type *base, bool enable)
DECL|FLEXSPI_EnableIPParallelMode|function|static inline void FLEXSPI_EnableIPParallelMode(FLEXSPI_Type *base, bool enable)
DECL|FLEXSPI_EnableInterrupts|function|static inline void FLEXSPI_EnableInterrupts(FLEXSPI_Type *base, uint32_t mask)
DECL|FLEXSPI_EnableRxDMA|function|static inline void FLEXSPI_EnableRxDMA(FLEXSPI_Type *base, bool enable)
DECL|FLEXSPI_EnableTxDMA|function|static inline void FLEXSPI_EnableTxDMA(FLEXSPI_Type *base, bool enable)
DECL|FLEXSPI_Enable|function|static inline void FLEXSPI_Enable(FLEXSPI_Type *base, bool enable)
DECL|FLEXSPI_GetAHBCommandErrorCode|function|static inline flexspi_ahb_error_code_t FLEXSPI_GetAHBCommandErrorCode(FLEXSPI_Type *base, uint8_t *index)
DECL|FLEXSPI_GetArbitratorCommandSource|function|static inline flexspi_arb_command_source_t FLEXSPI_GetArbitratorCommandSource(FLEXSPI_Type *base)
DECL|FLEXSPI_GetBusIdleStatus|function|static inline bool FLEXSPI_GetBusIdleStatus(FLEXSPI_Type *base)
DECL|FLEXSPI_GetDataLearningPhase|function|static inline void FLEXSPI_GetDataLearningPhase(FLEXSPI_Type *base, uint8_t *portAPhase, uint8_t *portBPhase)
DECL|FLEXSPI_GetFifoCounts|function|static inline void FLEXSPI_GetFifoCounts(FLEXSPI_Type *base, size_t *txCount, size_t *rxCount)
DECL|FLEXSPI_GetIPCommandErrorCode|function|static inline flexspi_ip_error_code_t FLEXSPI_GetIPCommandErrorCode(FLEXSPI_Type *base, uint8_t *index)
DECL|FLEXSPI_GetInterruptStatusFlags|function|static inline uint32_t FLEXSPI_GetInterruptStatusFlags(FLEXSPI_Type *base)
DECL|FLEXSPI_GetRxFifoAddress|function|static inline uint32_t FLEXSPI_GetRxFifoAddress(FLEXSPI_Type *base)
DECL|FLEXSPI_GetTxFifoAddress|function|static inline uint32_t FLEXSPI_GetTxFifoAddress(FLEXSPI_Type *base)
DECL|FLEXSPI_LUT_SEQ|macro|FLEXSPI_LUT_SEQ
DECL|FLEXSPI_ReadData|function|static inline uint32_t FLEXSPI_ReadData(FLEXSPI_Type *base, uint8_t fifoIndex)
DECL|FLEXSPI_ResetFifos|function|static inline void FLEXSPI_ResetFifos(FLEXSPI_Type *base, bool txFifo, bool rxFifo)
DECL|FLEXSPI_SoftwareReset|function|static inline void FLEXSPI_SoftwareReset(FLEXSPI_Type *base)
DECL|FLEXSPI_WriteData|function|static inline void FLEXSPI_WriteData(FLEXSPI_Type *base, uint32_t data, uint8_t fifoIndex)
DECL|FSL_FEATURE_FLEXSPI_AHB_BUFFER_COUNT|macro|FSL_FEATURE_FLEXSPI_AHB_BUFFER_COUNT
DECL|FSL_FLEXSPI_DRIVER_VERSION|macro|FSL_FLEXSPI_DRIVER_VERSION
DECL|SeqNumber|member|uint8_t SeqNumber; /*!< Sequence number for command. */
DECL|__FSL_FLEXSPI_H_|macro|__FSL_FLEXSPI_H_
DECL|_flexspi_ahbBuffer_config|struct|typedef struct _flexspi_ahbBuffer_config
DECL|_flexspi_ahb_error_code|enum|typedef enum _flexspi_ahb_error_code
DECL|_flexspi_ahb_write_wait_unit|enum|typedef enum _flexspi_ahb_write_wait_unit
DECL|_flexspi_arb_command_source|enum|typedef enum _flexspi_arb_command_source
DECL|_flexspi_command_type|enum|typedef enum _flexspi_command_type
DECL|_flexspi_command|enum|enum _flexspi_command
DECL|_flexspi_config|struct|typedef struct _flexspi_config
DECL|_flexspi_cs_interval_cycle_unit|enum|typedef enum _flexspi_cs_interval_cycle_unit
DECL|_flexspi_device_config|struct|typedef struct _flexspi_device_config
DECL|_flexspi_flags|enum|typedef enum _flexspi_flags
DECL|_flexspi_handle|struct|struct _flexspi_handle
DECL|_flexspi_ip_error_code|enum|typedef enum _flexspi_ip_error_code
DECL|_flexspi_pad|enum|enum _flexspi_pad
DECL|_flexspi_port|enum|typedef enum _flexspi_port
DECL|_flexspi_read_sample_clock|enum|typedef enum _flexspi_read_sample_clock
DECL|_flexspi_status|enum|enum _flexspi_status
DECL|_flexspi_transfer|struct|typedef struct _flexspi_transfer
DECL|ahbBusTimeoutCycle|member|uint16_t ahbBusTimeoutCycle; /*!< Timeout wait cycle for AHB read/write access,
DECL|ahbConfig|member|} ahbConfig;
DECL|ahbGrantTimeoutCycle|member|uint8_t ahbGrantTimeoutCycle; /*!< Timeout wait cycle for AHB command grant,
DECL|bufferSize|member|uint16_t bufferSize; /*!< AHB buffer size in byte. */
DECL|buffer|member|flexspi_ahbBuffer_config_t buffer[FSL_FEATURE_FLEXSPI_AHB_BUFFER_COUNT]; /*!< AHB buffer size. */
DECL|cmdType|member|flexspi_command_type_t cmdType; /*!< Execution command type. */
DECL|columnspace|member|uint8_t columnspace; /*!< Column space size. */
DECL|completionCallback|member|flexspi_transfer_callback_t completionCallback; /*!< Callback for users while transfer finish or error occurred */
DECL|dataSize|member|size_t dataSize; /*!< Data size in bytes. */
DECL|dataSize|member|size_t dataSize; /*!< Remaining Data size in bytes. */
DECL|dataValidTime|member|uint8_t dataValidTime; /*!< Data valid time for external device. */
DECL|data|member|uint32_t *data; /*!< Data buffer. */
DECL|data|member|uint32_t *data; /*!< Data buffer. */
DECL|deviceAddress|member|uint32_t deviceAddress; /*!< Operation device address. */
DECL|enableAHBBufferable|member|bool enableAHBBufferable; /*!< Enable/disable AHB bufferable write access support, when enabled,
DECL|enableAHBCachable|member|bool enableAHBCachable; /*!< Enable AHB bus cachable read access support. */
DECL|enableAHBPrefetch|member|bool enableAHBPrefetch; /*!< Enable/disable AHB read prefetch feature, when enabled, FLEXSPI
DECL|enableAHBWriteIpRxFifo|member|bool enableAHBWriteIpRxFifo; /*!< Enable AHB bus write access to IP RX FIFO. */
DECL|enableAHBWriteIpTxFifo|member|bool enableAHBWriteIpTxFifo; /*!< Enable AHB bus write access to IP TX FIFO. */
DECL|enableClearAHBBufferOpt|member|bool enableClearAHBBufferOpt; /*!< Enable/disable automatically clean AHB RX Buffer and TX Buffer
DECL|enableCombination|member|bool enableCombination; /*!< Enable/disable combining PORT A and B Data Pins
DECL|enableDoze|member|bool enableDoze; /*!< Enable/disable doze mode support. */
DECL|enableHalfSpeedAccess|member|bool enableHalfSpeedAccess; /*!< Enable/disable divide by 2 of the clock for half
DECL|enablePrefetch|member|bool enablePrefetch; /*!< AHB Read Prefetch Enable for current AHB RX Buffer corresponding Master, allows
DECL|enableReadAddressOpt|member|bool enableReadAddressOpt; /*!< Enable/disable remove AHB read burst start address alignment limitation.
DECL|enableSameConfigForAll|member|bool enableSameConfigForAll; /*!< Enable/disable same configuration for all connected devices
DECL|enableSckBDiffOpt|member|bool enableSckBDiffOpt; /*!< Enable/disable SCKB pad use as SCKA differential clock
DECL|enableSckFreeRunning|member|bool enableSckFreeRunning; /*!< Enable/disable SCK output free-running. */
DECL|enableWordAddress|member|bool enableWordAddress; /*!< If enable word address.*/
DECL|enableWriteMask|member|bool enableWriteMask; /*!< Enable/Disable FLEXSPI drive DQS pin as write mask
DECL|flashSize|member|uint32_t flashSize; /*!< Flash size in KByte. */
DECL|flexspiRootClk|member|uint32_t flexspiRootClk; /*!< FLEXSPI serial root clock. */
DECL|flexspi_ahbBuffer_config_t|typedef|} flexspi_ahbBuffer_config_t;
DECL|flexspi_ahb_error_code_t|typedef|} flexspi_ahb_error_code_t;
DECL|flexspi_ahb_write_wait_unit_t|typedef|} flexspi_ahb_write_wait_unit_t;
DECL|flexspi_arb_command_source_t|typedef|} flexspi_arb_command_source_t;
DECL|flexspi_command_type_t|typedef|} flexspi_command_type_t;
DECL|flexspi_config_t|typedef|} flexspi_config_t;
DECL|flexspi_cs_interval_cycle_unit_t|typedef|} flexspi_cs_interval_cycle_unit_t;
DECL|flexspi_device_config_t|typedef|} flexspi_device_config_t;
DECL|flexspi_flags_t|typedef|} flexspi_flags_t;
DECL|flexspi_handle_t|typedef|typedef struct _flexspi_handle flexspi_handle_t;
DECL|flexspi_ip_error_code_t|typedef|} flexspi_ip_error_code_t;
DECL|flexspi_port_t|typedef|} flexspi_port_t;
DECL|flexspi_read_sample_clock_t|typedef|} flexspi_read_sample_clock_t;
DECL|flexspi_transfer_callback_t|typedef|typedef void (*flexspi_transfer_callback_t)(FLEXSPI_Type *base,
DECL|flexspi_transfer_t|typedef|} flexspi_transfer_t;
DECL|ipGrantTimeoutCycle|member|uint8_t ipGrantTimeoutCycle; /*!< Timeout wait cycle for IP command grant, timeout after
DECL|isSck2Enabled|member|bool isSck2Enabled; /*!< FLEXSPI use SCK2. */
DECL|kFLEXSPI_1PAD|enumerator|kFLEXSPI_1PAD = 0x00U, /*!< Transmit command/address and transmit/receive data only through DATA0/DATA1. */
DECL|kFLEXSPI_2PAD|enumerator|kFLEXSPI_2PAD = 0x01U, /*!< Transmit command/address and transmit/receive data only through DATA[1:0]. */
DECL|kFLEXSPI_4PAD|enumerator|kFLEXSPI_4PAD = 0x02U, /*!< Transmit command/address and transmit/receive data only through DATA[3:0]. */
DECL|kFLEXSPI_8PAD|enumerator|kFLEXSPI_8PAD = 0x03U, /*!< Transmit command/address and transmit/receive data only through DATA[7:0]. */
DECL|kFLEXSPI_AhbBusTimeoutFlag|enumerator|kFLEXSPI_AhbBusTimeoutFlag = FLEXSPI_INTEN_AHBBUSTIMEOUTEN_MASK, /*!< AHB Bus timeout. */
DECL|kFLEXSPI_AhbCmdErrorDdrDummyInSdrSequence|enumerator|kFLEXSPI_AhbCmdErrorDdrDummyInSdrSequence = 0x5U, /*!< Instruction DUMMY_DDR/DUMMY_RWDS_DDR
DECL|kFLEXSPI_AhbCmdErrorJumpOnCsInWriteCmd|enumerator|kFLEXSPI_AhbCmdErrorJumpOnCsInWriteCmd = 0x2U, /*!< AHB Write command with JMP_ON_CS instruction
DECL|kFLEXSPI_AhbCmdErrorNoError|enumerator|kFLEXSPI_AhbCmdErrorNoError = 0x0U, /*!< No error. */
DECL|kFLEXSPI_AhbCmdErrorSdrDummyInDdrSequence|enumerator|kFLEXSPI_AhbCmdErrorSdrDummyInDdrSequence = 0x4U, /*!< Instruction DUMMY_SDR/DUMMY_RWDS_SDR used
DECL|kFLEXSPI_AhbCmdErrorUnknownOpCode|enumerator|kFLEXSPI_AhbCmdErrorUnknownOpCode = 0x3U, /*!< Unknown instruction opcode in the sequence. */
DECL|kFLEXSPI_AhbCmdSequenceExecutionTimeout|enumerator|kFLEXSPI_AhbCmdSequenceExecutionTimeout = 0x6U, /*!< Sequence execution timeout. */
DECL|kFLEXSPI_AhbCommandGrantTimeoutFlag|enumerator|kFLEXSPI_AhbCommandGrantTimeoutFlag =
DECL|kFLEXSPI_AhbCommandSequenceErrorFlag|enumerator|kFLEXSPI_AhbCommandSequenceErrorFlag =
DECL|kFLEXSPI_AhbReadCommand|enumerator|kFLEXSPI_AhbReadCommand = 0x0U,
DECL|kFLEXSPI_AhbWriteCommand|enumerator|kFLEXSPI_AhbWriteCommand = 0x1U,
DECL|kFLEXSPI_AhbWriteWaitUnit128AhbCycle|enumerator|kFLEXSPI_AhbWriteWaitUnit128AhbCycle = 0x3U, /*!< AWRWAIT unit is 128 ahb clock cycle. */
DECL|kFLEXSPI_AhbWriteWaitUnit2048AhbCycle|enumerator|kFLEXSPI_AhbWriteWaitUnit2048AhbCycle = 0x5U, /*!< AWRWAIT unit is 2048 ahb clock cycle. */
DECL|kFLEXSPI_AhbWriteWaitUnit2AhbCycle|enumerator|kFLEXSPI_AhbWriteWaitUnit2AhbCycle = 0x0U, /*!< AWRWAIT unit is 2 ahb clock cycle. */
DECL|kFLEXSPI_AhbWriteWaitUnit32768AhbCycle|enumerator|kFLEXSPI_AhbWriteWaitUnit32768AhbCycle = 0x7U, /*!< AWRWAIT unit is 32768 ahb clock cycle. */
DECL|kFLEXSPI_AhbWriteWaitUnit32AhbCycle|enumerator|kFLEXSPI_AhbWriteWaitUnit32AhbCycle = 0x2U, /*!< AWRWAIT unit is 32 ahb clock cycle. */
DECL|kFLEXSPI_AhbWriteWaitUnit512AhbCycle|enumerator|kFLEXSPI_AhbWriteWaitUnit512AhbCycle = 0x4U, /*!< AWRWAIT unit is 512 ahb clock cycle. */
DECL|kFLEXSPI_AhbWriteWaitUnit8192AhbCycle|enumerator|kFLEXSPI_AhbWriteWaitUnit8192AhbCycle = 0x6U, /*!< AWRWAIT unit is 8192 ahb clock cycle. */
DECL|kFLEXSPI_AhbWriteWaitUnit8AhbCycle|enumerator|kFLEXSPI_AhbWriteWaitUnit8AhbCycle = 0x1U, /*!< AWRWAIT unit is 8 ahb clock cycle. */
DECL|kFLEXSPI_AllInterruptFlags|enumerator|kFLEXSPI_AllInterruptFlags = 0xFFFU, /*!< All flags. */
DECL|kFLEXSPI_Command_CADDR_DDR|enumerator|kFLEXSPI_Command_CADDR_DDR = 0x23U, /*!< Transmit Column Address to Flash, using DDR mode. */
DECL|kFLEXSPI_Command_CADDR_SDR|enumerator|kFLEXSPI_Command_CADDR_SDR = 0x03U, /*!< Transmit Column Address to Flash, using SDR mode. */
DECL|kFLEXSPI_Command_DATSZ_DDR|enumerator|kFLEXSPI_Command_DATSZ_DDR = 0x2BU, /*!< Transmit Read/Program Data size (byte) to Flash, DDR mode. */
DECL|kFLEXSPI_Command_DATSZ_SDR|enumerator|kFLEXSPI_Command_DATSZ_SDR = 0x0BU, /*!< Transmit Read/Program Data size (byte) to Flash, SDR mode. */
DECL|kFLEXSPI_Command_DDR|enumerator|kFLEXSPI_Command_DDR = 0x21U, /*!< Transmit Command code to Flash, using DDR mode. */
DECL|kFLEXSPI_Command_DUMMY_DDR|enumerator|kFLEXSPI_Command_DUMMY_DDR = 0x2CU, /*!< Leave data lines undriven by FlexSPI controller.*/
DECL|kFLEXSPI_Command_DUMMY_RWDS_DDR|enumerator|kFLEXSPI_Command_DUMMY_RWDS_DDR = 0x2DU, /*!< Leave data lines undriven by FlexSPI controller,
DECL|kFLEXSPI_Command_DUMMY_RWDS_SDR|enumerator|kFLEXSPI_Command_DUMMY_RWDS_SDR = 0x0DU, /*!< Leave data lines undriven by FlexSPI controller,
DECL|kFLEXSPI_Command_DUMMY_SDR|enumerator|kFLEXSPI_Command_DUMMY_SDR = 0x0CU, /*!< Leave data lines undriven by FlexSPI controller.*/
DECL|kFLEXSPI_Command_JUMP_ON_CS|enumerator|kFLEXSPI_Command_JUMP_ON_CS = 0x1FU, /*!< Stop execution, deassert CS and save operand[7:0] as the
DECL|kFLEXSPI_Command_LEARN_DDR|enumerator|kFLEXSPI_Command_LEARN_DDR = 0x2AU, /*!< Receive Read Data or Preamble bit from Flash, DDR mode. */
DECL|kFLEXSPI_Command_LEARN_SDR|enumerator|kFLEXSPI_Command_LEARN_SDR = 0x0AU, /*!< Receive Read Data or Preamble bit from Flash, SDR mode. */
DECL|kFLEXSPI_Command_MODE1_DDR|enumerator|kFLEXSPI_Command_MODE1_DDR = 0x24U, /*!< Transmit 1-bit Mode bits to Flash, using DDR mode. */
DECL|kFLEXSPI_Command_MODE1_SDR|enumerator|kFLEXSPI_Command_MODE1_SDR = 0x04U, /*!< Transmit 1-bit Mode bits to Flash, using SDR mode. */
DECL|kFLEXSPI_Command_MODE2_DDR|enumerator|kFLEXSPI_Command_MODE2_DDR = 0x25U, /*!< Transmit 2-bit Mode bits to Flash, using DDR mode. */
DECL|kFLEXSPI_Command_MODE2_SDR|enumerator|kFLEXSPI_Command_MODE2_SDR = 0x05U, /*!< Transmit 2-bit Mode bits to Flash, using SDR mode. */
DECL|kFLEXSPI_Command_MODE4_DDR|enumerator|kFLEXSPI_Command_MODE4_DDR = 0x26U, /*!< Transmit 4-bit Mode bits to Flash, using DDR mode. */
DECL|kFLEXSPI_Command_MODE4_SDR|enumerator|kFLEXSPI_Command_MODE4_SDR = 0x06U, /*!< Transmit 4-bit Mode bits to Flash, using SDR mode. */
DECL|kFLEXSPI_Command_MODE8_DDR|enumerator|kFLEXSPI_Command_MODE8_DDR = 0x27U, /*!< Transmit 8-bit Mode bits to Flash, using DDR mode. */
DECL|kFLEXSPI_Command_MODE8_SDR|enumerator|kFLEXSPI_Command_MODE8_SDR = 0x07U, /*!< Transmit 8-bit Mode bits to Flash, using SDR mode. */
DECL|kFLEXSPI_Command_RADDR_DDR|enumerator|kFLEXSPI_Command_RADDR_DDR = 0x22U, /*!< Transmit Row Address to Flash, using DDR mode. */
DECL|kFLEXSPI_Command_RADDR_SDR|enumerator|kFLEXSPI_Command_RADDR_SDR = 0x02U, /*!< Transmit Row Address to Flash, using SDR mode. */
DECL|kFLEXSPI_Command_READ_DDR|enumerator|kFLEXSPI_Command_READ_DDR = 0x29U, /*!< Receive Read Data from Flash, using DDR mode. */
DECL|kFLEXSPI_Command_READ_SDR|enumerator|kFLEXSPI_Command_READ_SDR = 0x09U, /*!< Receive Read Data from Flash, using SDR mode. */
DECL|kFLEXSPI_Command_SDR|enumerator|kFLEXSPI_Command_SDR = 0x01U, /*!< Transmit Command code to Flash, using SDR mode. */
DECL|kFLEXSPI_Command_STOP|enumerator|kFLEXSPI_Command_STOP = 0x00U, /*!< Stop execution, deassert CS. */
DECL|kFLEXSPI_Command_WRITE_DDR|enumerator|kFLEXSPI_Command_WRITE_DDR = 0x28U, /*!< Transmit Programming Data to Flash, using DDR mode. */
DECL|kFLEXSPI_Command_WRITE_SDR|enumerator|kFLEXSPI_Command_WRITE_SDR = 0x08U, /*!< Transmit Programming Data to Flash, using SDR mode. */
DECL|kFLEXSPI_Command|enumerator|kFLEXSPI_Command, /*!< FlexSPI operation: Only command, both TX and Rx buffer are ignored. */
DECL|kFLEXSPI_Config|enumerator|kFLEXSPI_Config, /*!< FlexSPI operation: Configure device mode, the TX fifo size is fixed in LUT. */
DECL|kFLEXSPI_CsIntervalUnit1SckCycle|enumerator|kFLEXSPI_CsIntervalUnit1SckCycle = 0x0U, /*!< Chip selection interval: CSINTERVAL * 1 serial clock cycle. */
DECL|kFLEXSPI_CsIntervalUnit256SckCycle|enumerator|kFLEXSPI_CsIntervalUnit256SckCycle = 0x1U, /*!< Chip selection interval: CSINTERVAL * 256 serial clock cycle. */
DECL|kFLEXSPI_DataLearningFailedFlag|enumerator|kFLEXSPI_DataLearningFailedFlag = FLEXSPI_INTEN_DATALEARNFAILEN_MASK, /*!< Data learning failed. */
DECL|kFLEXSPI_IpCmdErrorDdrDummyInSdrSequence|enumerator|kFLEXSPI_IpCmdErrorDdrDummyInSdrSequence = 0x5U, /*!< Instruction DUMMY_DDR/DUMMY_RWDS_DDR
DECL|kFLEXSPI_IpCmdErrorFlashBoundaryAcrosss|enumerator|kFLEXSPI_IpCmdErrorFlashBoundaryAcrosss = 0xFU, /*!< Flash boundary crossed. */
DECL|kFLEXSPI_IpCmdErrorInvalidAddress|enumerator|kFLEXSPI_IpCmdErrorInvalidAddress = 0x6U, /*!< Flash access start address exceed the whole
DECL|kFLEXSPI_IpCmdErrorJumpOnCsInIpCmd|enumerator|kFLEXSPI_IpCmdErrorJumpOnCsInIpCmd = 0x2U, /*!< IP command with JMP_ON_CS instruction used. */
DECL|kFLEXSPI_IpCmdErrorNoError|enumerator|kFLEXSPI_IpCmdErrorNoError = 0x0U, /*!< No error. */
DECL|kFLEXSPI_IpCmdErrorSdrDummyInDdrSequence|enumerator|kFLEXSPI_IpCmdErrorSdrDummyInDdrSequence = 0x4U, /*!< Instruction DUMMY_SDR/DUMMY_RWDS_SDR
DECL|kFLEXSPI_IpCmdErrorSequenceExecutionTimeout|enumerator|kFLEXSPI_IpCmdErrorSequenceExecutionTimeout = 0xEU, /*!< Sequence execution timeout. */
DECL|kFLEXSPI_IpCmdErrorUnknownOpCode|enumerator|kFLEXSPI_IpCmdErrorUnknownOpCode = 0x3U, /*!< Unknown instruction opcode in the sequence. */
DECL|kFLEXSPI_IpCommandExcutionDoneFlag|enumerator|kFLEXSPI_IpCommandExcutionDoneFlag =
DECL|kFLEXSPI_IpCommandGrantTimeoutFlag|enumerator|kFLEXSPI_IpCommandGrantTimeoutFlag =
DECL|kFLEXSPI_IpCommandSequenceErrorFlag|enumerator|kFLEXSPI_IpCommandSequenceErrorFlag = FLEXSPI_INTEN_IPCMDERREN_MASK, /*!< IP triggered Command Sequences Error. */
DECL|kFLEXSPI_IpCommand|enumerator|kFLEXSPI_IpCommand = 0x2U,
DECL|kFLEXSPI_IpRxFifoWatermarkAvailableFlag|enumerator|kFLEXSPI_IpRxFifoWatermarkAvailableFlag = FLEXSPI_INTEN_IPRXWAEN_MASK, /*!< IP RX FIFO WaterMark available. */
DECL|kFLEXSPI_IpTxFifoWatermarkEmpltyFlag|enumerator|kFLEXSPI_IpTxFifoWatermarkEmpltyFlag = FLEXSPI_INTEN_IPTXWEEN_MASK, /*!< IP TX FIFO WaterMark empty. */
DECL|kFLEXSPI_PortA1|enumerator|kFLEXSPI_PortA1 = 0x0U, /*!< Access flash on A1 port. */
DECL|kFLEXSPI_PortA2|enumerator|kFLEXSPI_PortA2 = 0x1U, /*!< Access flash on A2 port. */
DECL|kFLEXSPI_PortB1|enumerator|kFLEXSPI_PortB1 = 0x2U, /*!< Access flash on B1 port. */
DECL|kFLEXSPI_PortB2|enumerator|kFLEXSPI_PortB2 = 0x3U, /*!< Access flash on B2 port. */
DECL|kFLEXSPI_ReadSampleClkExternalInputFromDqsPad|enumerator|kFLEXSPI_ReadSampleClkExternalInputFromDqsPad = 0x3U, /*!< Flash provided Read strobe and input from DQS pad. */
DECL|kFLEXSPI_ReadSampleClkLoopbackFromDqsPad|enumerator|kFLEXSPI_ReadSampleClkLoopbackFromDqsPad = 0x1U, /*!< Dummy Read strobe generated by FlexSPI Controller
DECL|kFLEXSPI_ReadSampleClkLoopbackFromSckPad|enumerator|kFLEXSPI_ReadSampleClkLoopbackFromSckPad = 0x2U, /*!< SCK output clock and loopback from SCK pad. */
DECL|kFLEXSPI_ReadSampleClkLoopbackInternally|enumerator|kFLEXSPI_ReadSampleClkLoopbackInternally = 0x0U, /*!< Dummy Read strobe generated by FlexSPI Controller
DECL|kFLEXSPI_Read|enumerator|kFLEXSPI_Read, /* /!< FlexSPI operation: Read, only Rx Buffer is effective. */
DECL|kFLEXSPI_SckStoppedBecauseRxFullFlag|enumerator|kFLEXSPI_SckStoppedBecauseRxFullFlag =
DECL|kFLEXSPI_SckStoppedBecauseTxEmptyFlag|enumerator|kFLEXSPI_SckStoppedBecauseTxEmptyFlag =
DECL|kFLEXSPI_SequenceExecutionTimeoutFlag|enumerator|kFLEXSPI_SequenceExecutionTimeoutFlag = FLEXSPI_INTEN_SEQTIMEOUTEN_MASK, /*!< Sequence execution timeout. */
DECL|kFLEXSPI_SuspendedCommand|enumerator|kFLEXSPI_SuspendedCommand = 0x3U,
DECL|kFLEXSPI_Write|enumerator|kFLEXSPI_Write, /* /!< FlexSPI operation: Read, only Tx Buffer is effective. */
DECL|kStatus_FLEXSPI_Busy|enumerator|kStatus_FLEXSPI_Busy = MAKE_STATUS(kStatusGroup_FLEXSPI, 0), /*!< FLEXSPI is busy */
DECL|kStatus_FLEXSPI_IpCommandGrantTimeout|enumerator|kStatus_FLEXSPI_IpCommandGrantTimeout = MAKE_STATUS(kStatusGroup_FLEXSPI, 3), /*!< IP command grant timeout error
DECL|kStatus_FLEXSPI_IpCommandSequenceError|enumerator|kStatus_FLEXSPI_IpCommandSequenceError = MAKE_STATUS(kStatusGroup_FLEXSPI, 2), /*!< IP command Sequence execution
DECL|kStatus_FLEXSPI_SequenceExecutionTimeout|enumerator|kStatus_FLEXSPI_SequenceExecutionTimeout = MAKE_STATUS(kStatusGroup_FLEXSPI, 1), /*!< Sequence execution timeout
DECL|masterIndex|member|uint8_t masterIndex; /*!< AHB Master ID the AHB RX Buffer is assigned. */
DECL|port|member|flexspi_port_t port; /*!< Operation port. */
DECL|priority|member|uint8_t priority; /*!< This priority for AHB Master Read which this AHB RX Buffer is assigned. */
DECL|resumeWaitCycle|member|uint8_t resumeWaitCycle; /*!< Wait cycle for idle state before suspended command sequence
DECL|rxSampleClock|member|flexspi_read_sample_clock_t rxSampleClock; /*!< Sample Clock source selection for Flash Reading. */
DECL|rxWatermark|member|uint8_t rxWatermark; /*!< FLEXSPI receive watermark value. */
DECL|seqIndex|member|uint8_t seqIndex; /*!< Sequence ID for command. */
DECL|seqTimeoutCycle|member|uint16_t seqTimeoutCycle; /*!< Timeout wait cycle for command sequence execution,
DECL|state|member|uint32_t state; /*!< Internal state for FLEXSPI transfer */
DECL|transferTotalSize|member|size_t transferTotalSize; /*!< Total Data size in bytes. */
DECL|txWatermark|member|uint8_t txWatermark; /*!< FLEXSPI IP transmit watermark value. */
DECL|userData|member|void *userData; /*!< FLEXSPI callback function parameter.*/
