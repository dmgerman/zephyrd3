DECL|DMA_I2C0_INT_DriverIRQHandler|function|void DMA_I2C0_INT_DriverIRQHandler(void)
DECL|DMA_I2C1_INT_DriverIRQHandler|function|void DMA_I2C1_INT_DriverIRQHandler(void)
DECL|DMA_I2C2_INT_DriverIRQHandler|function|void DMA_I2C2_INT_DriverIRQHandler(void)
DECL|DMA_I2C3_INT_DriverIRQHandler|function|void DMA_I2C3_INT_DriverIRQHandler(void)
DECL|DMA_I2C4_INT_DriverIRQHandler|function|void DMA_I2C4_INT_DriverIRQHandler(void)
DECL|LPI2C0_DriverIRQHandler|function|void LPI2C0_DriverIRQHandler(void)
DECL|LPI2C1_DriverIRQHandler|function|void LPI2C1_DriverIRQHandler(void)
DECL|LPI2C2_DriverIRQHandler|function|void LPI2C2_DriverIRQHandler(void)
DECL|LPI2C3_DriverIRQHandler|function|void LPI2C3_DriverIRQHandler(void)
DECL|LPI2C_CheckForBusyBus|function|status_t LPI2C_CheckForBusyBus(LPI2C_Type *base)
DECL|LPI2C_CommonIRQHandler|function|static void LPI2C_CommonIRQHandler(LPI2C_Type *base, uint32_t instance)
DECL|LPI2C_GetCyclesForWidth|function|static uint32_t LPI2C_GetCyclesForWidth(uint32_t sourceClock_Hz, uint32_t width_ns, uint32_t maxCycles, uint32_t prescaler)
DECL|LPI2C_GetInstance|function|uint32_t LPI2C_GetInstance(LPI2C_Type *base)
DECL|LPI2C_InitTransferStateMachine|function|static void LPI2C_InitTransferStateMachine(lpi2c_master_handle_t *handle)
DECL|LPI2C_MasterCheckAndClearError|function|status_t LPI2C_MasterCheckAndClearError(LPI2C_Type *base, uint32_t status)
DECL|LPI2C_MasterConfigureDataMatch|function|void LPI2C_MasterConfigureDataMatch(LPI2C_Type *base, const lpi2c_data_match_config_t *config)
DECL|LPI2C_MasterDeinit|function|void LPI2C_MasterDeinit(LPI2C_Type *base)
DECL|LPI2C_MasterGetDefaultConfig|function|void LPI2C_MasterGetDefaultConfig(lpi2c_master_config_t *masterConfig)
DECL|LPI2C_MasterInit|function|void LPI2C_MasterInit(LPI2C_Type *base, const lpi2c_master_config_t *masterConfig, uint32_t sourceClock_Hz)
DECL|LPI2C_MasterReceive|function|status_t LPI2C_MasterReceive(LPI2C_Type *base, void *rxBuff, size_t rxSize)
DECL|LPI2C_MasterSend|function|status_t LPI2C_MasterSend(LPI2C_Type *base, const void *txBuff, size_t txSize)
DECL|LPI2C_MasterSetBaudRate|function|void LPI2C_MasterSetBaudRate(LPI2C_Type *base, uint32_t sourceClock_Hz, uint32_t baudRate_Hz)
DECL|LPI2C_MasterStart|function|status_t LPI2C_MasterStart(LPI2C_Type *base, uint8_t address, lpi2c_direction_t dir)
DECL|LPI2C_MasterStop|function|status_t LPI2C_MasterStop(LPI2C_Type *base)
DECL|LPI2C_MasterTransferAbort|function|void LPI2C_MasterTransferAbort(LPI2C_Type *base, lpi2c_master_handle_t *handle)
DECL|LPI2C_MasterTransferBlocking|function|status_t LPI2C_MasterTransferBlocking(LPI2C_Type *base, lpi2c_master_transfer_t *transfer)
DECL|LPI2C_MasterTransferCreateHandle|function|void LPI2C_MasterTransferCreateHandle(LPI2C_Type *base, lpi2c_master_handle_t *handle, lpi2c_master_transfer_callback_t callback, void *userData)
DECL|LPI2C_MasterTransferGetCount|function|status_t LPI2C_MasterTransferGetCount(LPI2C_Type *base, lpi2c_master_handle_t *handle, size_t *count)
DECL|LPI2C_MasterTransferHandleIRQ|function|void LPI2C_MasterTransferHandleIRQ(LPI2C_Type *base, lpi2c_master_handle_t *handle)
DECL|LPI2C_MasterTransferNonBlocking|function|status_t LPI2C_MasterTransferNonBlocking(LPI2C_Type *base, lpi2c_master_handle_t *handle, lpi2c_master_transfer_t *transfer)
DECL|LPI2C_MasterWaitForTxReady|function|static status_t LPI2C_MasterWaitForTxReady(LPI2C_Type *base)
DECL|LPI2C_RunTransferStateMachine|function|static status_t LPI2C_RunTransferStateMachine(LPI2C_Type *base, lpi2c_master_handle_t *handle, bool *isDone)
DECL|LPI2C_SlaveCheckAndClearError|function|static status_t LPI2C_SlaveCheckAndClearError(LPI2C_Type *base, uint32_t flags)
DECL|LPI2C_SlaveDeinit|function|void LPI2C_SlaveDeinit(LPI2C_Type *base)
DECL|LPI2C_SlaveGetDefaultConfig|function|void LPI2C_SlaveGetDefaultConfig(lpi2c_slave_config_t *slaveConfig)
DECL|LPI2C_SlaveInit|function|void LPI2C_SlaveInit(LPI2C_Type *base, const lpi2c_slave_config_t *slaveConfig, uint32_t sourceClock_Hz)
DECL|LPI2C_SlaveReceive|function|status_t LPI2C_SlaveReceive(LPI2C_Type *base, void *rxBuff, size_t rxSize, size_t *actualRxSize)
DECL|LPI2C_SlaveSend|function|status_t LPI2C_SlaveSend(LPI2C_Type *base, const void *txBuff, size_t txSize, size_t *actualTxSize)
DECL|LPI2C_SlaveTransferAbort|function|void LPI2C_SlaveTransferAbort(LPI2C_Type *base, lpi2c_slave_handle_t *handle)
DECL|LPI2C_SlaveTransferCreateHandle|function|void LPI2C_SlaveTransferCreateHandle(LPI2C_Type *base, lpi2c_slave_handle_t *handle, lpi2c_slave_transfer_callback_t callback, void *userData)
DECL|LPI2C_SlaveTransferGetCount|function|status_t LPI2C_SlaveTransferGetCount(LPI2C_Type *base, lpi2c_slave_handle_t *handle, size_t *count)
DECL|LPI2C_SlaveTransferHandleIRQ|function|void LPI2C_SlaveTransferHandleIRQ(LPI2C_Type *base, lpi2c_slave_handle_t *handle)
DECL|LPI2C_SlaveTransferNonBlocking|function|status_t LPI2C_SlaveTransferNonBlocking(LPI2C_Type *base, lpi2c_slave_handle_t *handle, uint32_t eventMask)
DECL|M4_0_LPI2C_DriverIRQHandler|function|void M4_0_LPI2C_DriverIRQHandler(void)
DECL|M4_1_LPI2C_DriverIRQHandler|function|void M4_1_LPI2C_DriverIRQHandler(void)
DECL|_lpi2c_default_watermarks|enum|enum _lpi2c_default_watermarks
DECL|_lpi2c_flag_constants|enum|enum _lpi2c_flag_constants
DECL|_lpi2c_master_fifo_cmd|enum|enum _lpi2c_master_fifo_cmd
DECL|_lpi2c_transfer_states|enum|enum _lpi2c_transfer_states
DECL|kDefaultRxWatermark|enumerator|kDefaultRxWatermark = 0,
DECL|kDefaultTxWatermark|enumerator|kDefaultTxWatermark = 0,
DECL|kIdleState|enumerator|kIdleState = 0,
DECL|kIssueReadCommandState|enumerator|kIssueReadCommandState,
DECL|kLpi2cBases|variable|kLpi2cBases
DECL|kLpi2cClocks|variable|kLpi2cClocks
DECL|kLpi2cIrqs|variable|kLpi2cIrqs
DECL|kLpi2cPeriphClocks|variable|kLpi2cPeriphClocks
DECL|kMasterClearFlags|enumerator|kMasterClearFlags = kLPI2C_MasterEndOfPacketFlag | kLPI2C_MasterStopDetectFlag | kLPI2C_MasterNackDetectFlag |
DECL|kMasterErrorFlags|enumerator|kMasterErrorFlags = kLPI2C_MasterNackDetectFlag | kLPI2C_MasterArbitrationLostFlag | kLPI2C_MasterFifoErrFlag |
DECL|kMasterIrqFlags|enumerator|kMasterIrqFlags = kLPI2C_MasterArbitrationLostFlag | kLPI2C_MasterTxReadyFlag | kLPI2C_MasterRxReadyFlag |
DECL|kRxDataCmd|enumerator|kRxDataCmd = LPI2C_MTDR_CMD(0X1U), /*!< Receive (DATA[7:0] + 1) bytes */
DECL|kSendCommandState|enumerator|kSendCommandState,
DECL|kSlaveClearFlags|enumerator|kSlaveClearFlags = kLPI2C_SlaveRepeatedStartDetectFlag | kLPI2C_SlaveStopDetectFlag | kLPI2C_SlaveBitErrFlag |
DECL|kSlaveErrorFlags|enumerator|kSlaveErrorFlags = kLPI2C_SlaveFifoErrFlag | kLPI2C_SlaveBitErrFlag,
DECL|kSlaveIrqFlags|enumerator|kSlaveIrqFlags = kLPI2C_SlaveTxReadyFlag | kLPI2C_SlaveRxReadyFlag | kLPI2C_SlaveStopDetectFlag |
DECL|kStartCmd|enumerator|kStartCmd = LPI2C_MTDR_CMD(0x4U), /*!< Generate(repeated) START and transmit address in DATA[[7:0] */
DECL|kStopCmd|enumerator|kStopCmd = LPI2C_MTDR_CMD(0x2U), /*!< Generate STOP condition */
DECL|kStopState|enumerator|kStopState,
DECL|kTransferDataState|enumerator|kTransferDataState,
DECL|kTxDataCmd|enumerator|kTxDataCmd = LPI2C_MTDR_CMD(0x0U), /*!< Transmit DATA[7:0] */
DECL|kWaitForCompletionState|enumerator|kWaitForCompletionState,
DECL|lpi2c_master_isr_t|typedef|typedef void (*lpi2c_master_isr_t)(LPI2C_Type *base, lpi2c_master_handle_t *handle);
DECL|lpi2c_slave_isr_t|typedef|typedef void (*lpi2c_slave_isr_t)(LPI2C_Type *base, lpi2c_slave_handle_t *handle);
DECL|s_lpi2cMasterHandle|variable|s_lpi2cMasterHandle
DECL|s_lpi2cMasterIsr|variable|s_lpi2cMasterIsr
DECL|s_lpi2cSlaveHandle|variable|s_lpi2cSlaveHandle
DECL|s_lpi2cSlaveIsr|variable|s_lpi2cSlaveIsr
