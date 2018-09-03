DECL|FLEXIO_I2S_Deinit|function|void FLEXIO_I2S_Deinit(FLEXIO_I2S_Type *base)
DECL|FLEXIO_I2S_DisableInterrupts|function|void FLEXIO_I2S_DisableInterrupts(FLEXIO_I2S_Type *base, uint32_t mask)
DECL|FLEXIO_I2S_EnableInterrupts|function|void FLEXIO_I2S_EnableInterrupts(FLEXIO_I2S_Type *base, uint32_t mask)
DECL|FLEXIO_I2S_GetDefaultConfig|function|void FLEXIO_I2S_GetDefaultConfig(flexio_i2s_config_t *config)
DECL|FLEXIO_I2S_GetInstance|function|static uint32_t FLEXIO_I2S_GetInstance(FLEXIO_I2S_Type *base)
DECL|FLEXIO_I2S_GetStatusFlags|function|uint32_t FLEXIO_I2S_GetStatusFlags(FLEXIO_I2S_Type *base)
DECL|FLEXIO_I2S_Init|function|void FLEXIO_I2S_Init(FLEXIO_I2S_Type *base, const flexio_i2s_config_t *config)
DECL|FLEXIO_I2S_MasterSetFormat|function|void FLEXIO_I2S_MasterSetFormat(FLEXIO_I2S_Type *base, flexio_i2s_format_t *format, uint32_t srcClock_Hz)
DECL|FLEXIO_I2S_ReadBlocking|function|void FLEXIO_I2S_ReadBlocking(FLEXIO_I2S_Type *base, uint8_t bitWidth, uint8_t *rxData, size_t size)
DECL|FLEXIO_I2S_ReadNonBlocking|function|static void FLEXIO_I2S_ReadNonBlocking(FLEXIO_I2S_Type *base, uint8_t bitWidth, uint8_t *rxData, size_t size)
DECL|FLEXIO_I2S_SlaveSetFormat|function|void FLEXIO_I2S_SlaveSetFormat(FLEXIO_I2S_Type *base, flexio_i2s_format_t *format)
DECL|FLEXIO_I2S_TransferAbortReceive|function|void FLEXIO_I2S_TransferAbortReceive(FLEXIO_I2S_Type *base, flexio_i2s_handle_t *handle)
DECL|FLEXIO_I2S_TransferAbortSend|function|void FLEXIO_I2S_TransferAbortSend(FLEXIO_I2S_Type *base, flexio_i2s_handle_t *handle)
DECL|FLEXIO_I2S_TransferGetReceiveCount|function|status_t FLEXIO_I2S_TransferGetReceiveCount(FLEXIO_I2S_Type *base, flexio_i2s_handle_t *handle, size_t *count)
DECL|FLEXIO_I2S_TransferGetSendCount|function|status_t FLEXIO_I2S_TransferGetSendCount(FLEXIO_I2S_Type *base, flexio_i2s_handle_t *handle, size_t *count)
DECL|FLEXIO_I2S_TransferReceiveNonBlocking|function|status_t FLEXIO_I2S_TransferReceiveNonBlocking(FLEXIO_I2S_Type *base, flexio_i2s_handle_t *handle, flexio_i2s_transfer_t *xfer)
DECL|FLEXIO_I2S_TransferRxCreateHandle|function|void FLEXIO_I2S_TransferRxCreateHandle(FLEXIO_I2S_Type *base, flexio_i2s_handle_t *handle, flexio_i2s_callback_t callback, void *userData)
DECL|FLEXIO_I2S_TransferRxHandleIRQ|function|void FLEXIO_I2S_TransferRxHandleIRQ(void *i2sBase, void *i2sHandle)
DECL|FLEXIO_I2S_TransferSendNonBlocking|function|status_t FLEXIO_I2S_TransferSendNonBlocking(FLEXIO_I2S_Type *base, flexio_i2s_handle_t *handle, flexio_i2s_transfer_t *xfer)
DECL|FLEXIO_I2S_TransferSetFormat|function|void FLEXIO_I2S_TransferSetFormat(FLEXIO_I2S_Type *base, flexio_i2s_handle_t *handle, flexio_i2s_format_t *format, uint32_t srcClock_Hz)
DECL|FLEXIO_I2S_TransferTxCreateHandle|function|void FLEXIO_I2S_TransferTxCreateHandle(FLEXIO_I2S_Type *base, flexio_i2s_handle_t *handle, flexio_i2s_callback_t callback, void *userData)
DECL|FLEXIO_I2S_TransferTxHandleIRQ|function|void FLEXIO_I2S_TransferTxHandleIRQ(void *i2sBase, void *i2sHandle)
DECL|FLEXIO_I2S_WriteBlocking|function|void FLEXIO_I2S_WriteBlocking(FLEXIO_I2S_Type *base, uint8_t bitWidth, uint8_t *txData, size_t size)
DECL|FLEXIO_I2S_WriteNonBlocking|function|static void FLEXIO_I2S_WriteNonBlocking(FLEXIO_I2S_Type *base, uint8_t bitWidth, uint8_t *txData, size_t size)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|_sai_transfer_state|enum|enum _sai_transfer_state
DECL|kFLEXIO_I2S_Busy|enumerator|kFLEXIO_I2S_Busy = 0x0U, /*!< FLEXIO_I2S is busy */
DECL|kFLEXIO_I2S_Idle|enumerator|kFLEXIO_I2S_Idle, /*!< Transfer is done. */
