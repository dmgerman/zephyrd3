DECL|FLEXIO_I2C_GetInstance|function|static uint32_t FLEXIO_I2C_GetInstance(FLEXIO_I2C_Type *base)
DECL|FLEXIO_I2C_MasterAbortStop|function|void FLEXIO_I2C_MasterAbortStop(FLEXIO_I2C_Type *base)
DECL|FLEXIO_I2C_MasterClearStatusFlags|function|void FLEXIO_I2C_MasterClearStatusFlags(FLEXIO_I2C_Type *base, uint32_t mask)
DECL|FLEXIO_I2C_MasterDeinit|function|void FLEXIO_I2C_MasterDeinit(FLEXIO_I2C_Type *base)
DECL|FLEXIO_I2C_MasterDisableInterrupts|function|void FLEXIO_I2C_MasterDisableInterrupts(FLEXIO_I2C_Type *base, uint32_t mask)
DECL|FLEXIO_I2C_MasterEnableAck|function|void FLEXIO_I2C_MasterEnableAck(FLEXIO_I2C_Type *base, bool enable)
DECL|FLEXIO_I2C_MasterEnableInterrupts|function|void FLEXIO_I2C_MasterEnableInterrupts(FLEXIO_I2C_Type *base, uint32_t mask)
DECL|FLEXIO_I2C_MasterGetDefaultConfig|function|void FLEXIO_I2C_MasterGetDefaultConfig(flexio_i2c_master_config_t *masterConfig)
DECL|FLEXIO_I2C_MasterGetStatusFlags|function|uint32_t FLEXIO_I2C_MasterGetStatusFlags(FLEXIO_I2C_Type *base)
DECL|FLEXIO_I2C_MasterInit|function|status_t FLEXIO_I2C_MasterInit(FLEXIO_I2C_Type *base, flexio_i2c_master_config_t *masterConfig, uint32_t srcClock_Hz)
DECL|FLEXIO_I2C_MasterReadBlocking|function|void FLEXIO_I2C_MasterReadBlocking(FLEXIO_I2C_Type *base, uint8_t *rxBuff, uint8_t rxSize)
DECL|FLEXIO_I2C_MasterRepeatedStart|function|void FLEXIO_I2C_MasterRepeatedStart(FLEXIO_I2C_Type *base)
DECL|FLEXIO_I2C_MasterSetBaudRate|function|void FLEXIO_I2C_MasterSetBaudRate(FLEXIO_I2C_Type *base, uint32_t baudRate_Bps, uint32_t srcClock_Hz)
DECL|FLEXIO_I2C_MasterSetTransferCount|function|status_t FLEXIO_I2C_MasterSetTransferCount(FLEXIO_I2C_Type *base, uint8_t count)
DECL|FLEXIO_I2C_MasterStart|function|void FLEXIO_I2C_MasterStart(FLEXIO_I2C_Type *base, uint8_t address, flexio_i2c_direction_t direction)
DECL|FLEXIO_I2C_MasterStop|function|void FLEXIO_I2C_MasterStop(FLEXIO_I2C_Type *base)
DECL|FLEXIO_I2C_MasterTransferAbort|function|void FLEXIO_I2C_MasterTransferAbort(FLEXIO_I2C_Type *base, flexio_i2c_master_handle_t *handle)
DECL|FLEXIO_I2C_MasterTransferBlocking|function|status_t FLEXIO_I2C_MasterTransferBlocking(FLEXIO_I2C_Type *base, flexio_i2c_master_transfer_t *xfer)
DECL|FLEXIO_I2C_MasterTransferComplete|function|static void FLEXIO_I2C_MasterTransferComplete(FLEXIO_I2C_Type *base, flexio_i2c_master_handle_t *handle, status_t status)
DECL|FLEXIO_I2C_MasterTransferCreateHandle|function|status_t FLEXIO_I2C_MasterTransferCreateHandle(FLEXIO_I2C_Type *base, flexio_i2c_master_handle_t *handle, flexio_i2c_master_transfer_callback_t callback, void *userData)
DECL|FLEXIO_I2C_MasterTransferGetCount|function|status_t FLEXIO_I2C_MasterTransferGetCount(FLEXIO_I2C_Type *base, flexio_i2c_master_handle_t *handle, size_t *count)
DECL|FLEXIO_I2C_MasterTransferHandleIRQ|function|void FLEXIO_I2C_MasterTransferHandleIRQ(void *i2cType, void *i2cHandle)
DECL|FLEXIO_I2C_MasterTransferInitStateMachine|function|static status_t FLEXIO_I2C_MasterTransferInitStateMachine(FLEXIO_I2C_Type *base, flexio_i2c_master_handle_t *handle, flexio_i2c_master_transfer_t *xfer)
DECL|FLEXIO_I2C_MasterTransferNonBlocking|function|status_t FLEXIO_I2C_MasterTransferNonBlocking(FLEXIO_I2C_Type *base, flexio_i2c_master_handle_t *handle, flexio_i2c_master_transfer_t *xfer)
DECL|FLEXIO_I2C_MasterTransferRunStateMachine|function|static status_t FLEXIO_I2C_MasterTransferRunStateMachine(FLEXIO_I2C_Type *base, flexio_i2c_master_handle_t *handle, uint32_t statusFlags)
DECL|FLEXIO_I2C_MasterWriteBlocking|function|status_t FLEXIO_I2C_MasterWriteBlocking(FLEXIO_I2C_Type *base, const uint8_t *txBuff, uint8_t txSize)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|_flexio_i2c_master_transfer_states|enum|enum _flexio_i2c_master_transfer_states
DECL|kFLEXIO_I2C_CheckAddress|enumerator|kFLEXIO_I2C_CheckAddress = 0x1U, /*!< 7-bit address check state */
DECL|kFLEXIO_I2C_Idle|enumerator|kFLEXIO_I2C_Idle = 0x0U, /*!< I2C bus idle */
DECL|kFLEXIO_I2C_ReceiveDataBegin|enumerator|kFLEXIO_I2C_ReceiveDataBegin = 0x4U, /*!< Receive data begin transfer phase*/
DECL|kFLEXIO_I2C_ReceiveData|enumerator|kFLEXIO_I2C_ReceiveData = 0x5U, /*!< Receive data transfer phase*/
DECL|kFLEXIO_I2C_SendCommand|enumerator|kFLEXIO_I2C_SendCommand = 0x2U, /*!< Send command byte phase */
DECL|kFLEXIO_I2C_SendData|enumerator|kFLEXIO_I2C_SendData = 0x3U, /*!< Send data transfer phase*/
