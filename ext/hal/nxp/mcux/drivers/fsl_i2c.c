DECL|I2C0_DriverIRQHandler|function|void I2C0_DriverIRQHandler(void)
DECL|I2C1_DriverIRQHandler|function|void I2C1_DriverIRQHandler(void)
DECL|I2C2_DriverIRQHandler|function|void I2C2_DriverIRQHandler(void)
DECL|I2C3_DriverIRQHandler|function|void I2C3_DriverIRQHandler(void)
DECL|I2C_CheckAndClearError|function|static status_t I2C_CheckAndClearError(I2C_Type *base, uint32_t status)
DECL|I2C_DisableInterrupts|function|void I2C_DisableInterrupts(I2C_Type *base, uint32_t mask)
DECL|I2C_EnableInterrupts|function|void I2C_EnableInterrupts(I2C_Type *base, uint32_t mask)
DECL|I2C_GetInstance|function|uint32_t I2C_GetInstance(I2C_Type *base)
DECL|I2C_InitTransferStateMachine|function|static status_t I2C_InitTransferStateMachine(I2C_Type *base, i2c_master_handle_t *handle, i2c_master_transfer_t *xfer)
DECL|I2C_MasterDeinit|function|void I2C_MasterDeinit(I2C_Type *base)
DECL|I2C_MasterGetDefaultConfig|function|void I2C_MasterGetDefaultConfig(i2c_master_config_t *masterConfig)
DECL|I2C_MasterGetStatusFlags|function|uint32_t I2C_MasterGetStatusFlags(I2C_Type *base)
DECL|I2C_MasterInit|function|void I2C_MasterInit(I2C_Type *base, const i2c_master_config_t *masterConfig, uint32_t srcClock_Hz)
DECL|I2C_MasterReadBlocking|function|status_t I2C_MasterReadBlocking(I2C_Type *base, uint8_t *rxBuff, size_t rxSize, uint32_t flags)
DECL|I2C_MasterRepeatedStart|function|status_t I2C_MasterRepeatedStart(I2C_Type *base, uint8_t address, i2c_direction_t direction)
DECL|I2C_MasterSetBaudRate|function|void I2C_MasterSetBaudRate(I2C_Type *base, uint32_t baudRate_Bps, uint32_t srcClock_Hz)
DECL|I2C_MasterStart|function|status_t I2C_MasterStart(I2C_Type *base, uint8_t address, i2c_direction_t direction)
DECL|I2C_MasterStop|function|status_t I2C_MasterStop(I2C_Type *base)
DECL|I2C_MasterTransferAbort|function|void I2C_MasterTransferAbort(I2C_Type *base, i2c_master_handle_t *handle)
DECL|I2C_MasterTransferBlocking|function|status_t I2C_MasterTransferBlocking(I2C_Type *base, i2c_master_transfer_t *xfer)
DECL|I2C_MasterTransferCreateHandle|function|void I2C_MasterTransferCreateHandle(I2C_Type *base, i2c_master_handle_t *handle, i2c_master_transfer_callback_t callback, void *userData)
DECL|I2C_MasterTransferGetCount|function|status_t I2C_MasterTransferGetCount(I2C_Type *base, i2c_master_handle_t *handle, size_t *count)
DECL|I2C_MasterTransferHandleIRQ|function|void I2C_MasterTransferHandleIRQ(I2C_Type *base, void *i2cHandle)
DECL|I2C_MasterTransferNonBlocking|function|status_t I2C_MasterTransferNonBlocking(I2C_Type *base, i2c_master_handle_t *handle, i2c_master_transfer_t *xfer)
DECL|I2C_MasterTransferRunStateMachine|function|static status_t I2C_MasterTransferRunStateMachine(I2C_Type *base, i2c_master_handle_t *handle, bool *isDone)
DECL|I2C_MasterWriteBlocking|function|status_t I2C_MasterWriteBlocking(I2C_Type *base, const uint8_t *txBuff, size_t txSize, uint32_t flags)
DECL|I2C_SetHoldTime|function|static void I2C_SetHoldTime(I2C_Type *base, uint32_t sclStopHoldTime_ns, uint32_t sourceClock_Hz)
DECL|I2C_SlaveDeinit|function|void I2C_SlaveDeinit(I2C_Type *base)
DECL|I2C_SlaveGetDefaultConfig|function|void I2C_SlaveGetDefaultConfig(i2c_slave_config_t *slaveConfig)
DECL|I2C_SlaveInit|function|void I2C_SlaveInit(I2C_Type *base, const i2c_slave_config_t *slaveConfig, uint32_t srcClock_Hz)
DECL|I2C_SlaveReadBlocking|function|void I2C_SlaveReadBlocking(I2C_Type *base, uint8_t *rxBuff, size_t rxSize)
DECL|I2C_SlaveTransferAbort|function|void I2C_SlaveTransferAbort(I2C_Type *base, i2c_slave_handle_t *handle)
DECL|I2C_SlaveTransferCreateHandle|function|void I2C_SlaveTransferCreateHandle(I2C_Type *base, i2c_slave_handle_t *handle, i2c_slave_transfer_callback_t callback, void *userData)
DECL|I2C_SlaveTransferGetCount|function|status_t I2C_SlaveTransferGetCount(I2C_Type *base, i2c_slave_handle_t *handle, size_t *count)
DECL|I2C_SlaveTransferHandleIRQ|function|void I2C_SlaveTransferHandleIRQ(I2C_Type *base, void *i2cHandle)
DECL|I2C_SlaveTransferNonBlocking|function|status_t I2C_SlaveTransferNonBlocking(I2C_Type *base, i2c_slave_handle_t *handle, uint32_t eventMask)
DECL|I2C_SlaveWriteBlocking|function|status_t I2C_SlaveWriteBlocking(I2C_Type *base, const uint8_t *txBuff, size_t txSize)
DECL|I2C_TransferCommonIRQHandler|function|static void I2C_TransferCommonIRQHandler(I2C_Type *base, void *handle)
DECL|_i2c_flag_constants|enum|enum _i2c_flag_constants
DECL|_i2c_transfer_states|enum|enum _i2c_transfer_states
DECL|i2c_isr_t|typedef|typedef void (*i2c_isr_t)(I2C_Type *base, void *i2cHandle);
DECL|kCheckAddressState|enumerator|kCheckAddressState = 0x1U, /*!< 7-bit address check state. */
DECL|kClearFlags|enumerator|kClearFlags = kI2C_ArbitrationLostFlag | kI2C_IntPendingFlag | kI2C_StartDetectFlag | kI2C_StopDetectFlag,
DECL|kIdleState|enumerator|kIdleState = 0x0U, /*!< I2C bus idle. */
DECL|kIrqFlags|enumerator|kIrqFlags = kI2C_GlobalInterruptEnable | kI2C_StartStopDetectInterruptEnable,
DECL|kReceiveDataBeginState|enumerator|kReceiveDataBeginState = 0x4U, /*!< Receive data transfer phase begin. */
DECL|kReceiveDataState|enumerator|kReceiveDataState = 0x5U, /*!< Receive data transfer phase. */
DECL|kSendCommandState|enumerator|kSendCommandState = 0x2U, /*!< Send command byte phase. */
DECL|kSendDataState|enumerator|kSendDataState = 0x3U, /*!< Send data transfer phase. */
DECL|s_i2cBases|variable|s_i2cBases
DECL|s_i2cClocks|variable|s_i2cClocks
DECL|s_i2cDividerTable|variable|s_i2cDividerTable
DECL|s_i2cHandle|variable|s_i2cHandle
DECL|s_i2cIrqs|variable|s_i2cIrqs
DECL|s_i2cMasterIsr|variable|s_i2cMasterIsr
DECL|s_i2cSlaveIsr|variable|s_i2cSlaveIsr
