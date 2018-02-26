DECL|I2S_Config|function|static void I2S_Config(I2S_Type *base, const i2s_config_t *config)
DECL|I2S_Deinit|function|void I2S_Deinit(I2S_Type *base)
DECL|I2S_FIFOCFG_PACK48_MASK|macro|I2S_FIFOCFG_PACK48_MASK
DECL|I2S_FIFOCFG_PACK48_SHIFT|macro|I2S_FIFOCFG_PACK48_SHIFT
DECL|I2S_FIFOCFG_PACK48|macro|I2S_FIFOCFG_PACK48
DECL|I2S_FIFOCFG_TXI2SE0_MASK|macro|I2S_FIFOCFG_TXI2SE0_MASK
DECL|I2S_FIFOCFG_TXI2SE0_SHIFT|macro|I2S_FIFOCFG_TXI2SE0_SHIFT
DECL|I2S_FIFOCFG_TXI2SE0|macro|I2S_FIFOCFG_TXI2SE0
DECL|I2S_RxEnable|function|void I2S_RxEnable(I2S_Type *base, bool enable)
DECL|I2S_RxGetDefaultConfig|function|void I2S_RxGetDefaultConfig(i2s_config_t *config)
DECL|I2S_RxHandleIRQ|function|void I2S_RxHandleIRQ(I2S_Type *base, i2s_handle_t *handle)
DECL|I2S_RxInit|function|void I2S_RxInit(I2S_Type *base, const i2s_config_t *config)
DECL|I2S_RxTransferAbort|function|void I2S_RxTransferAbort(I2S_Type *base, i2s_handle_t *handle)
DECL|I2S_RxTransferCreateHandle|function|void I2S_RxTransferCreateHandle(I2S_Type *base, i2s_handle_t *handle, i2s_transfer_callback_t callback, void *userData)
DECL|I2S_RxTransferNonBlocking|function|status_t I2S_RxTransferNonBlocking(I2S_Type *base, i2s_handle_t *handle, i2s_transfer_t transfer)
DECL|I2S_TransferGetCount|function|status_t I2S_TransferGetCount(I2S_Type *base, i2s_handle_t *handle, size_t *count)
DECL|I2S_TransferGetErrorCount|function|status_t I2S_TransferGetErrorCount(I2S_Type *base, i2s_handle_t *handle, size_t *count)
DECL|I2S_TxEnable|function|void I2S_TxEnable(I2S_Type *base, bool enable)
DECL|I2S_TxGetDefaultConfig|function|void I2S_TxGetDefaultConfig(i2s_config_t *config)
DECL|I2S_TxHandleIRQ|function|void I2S_TxHandleIRQ(I2S_Type *base, i2s_handle_t *handle)
DECL|I2S_TxInit|function|void I2S_TxInit(I2S_Type *base, const i2s_config_t *config)
DECL|I2S_TxTransferAbort|function|void I2S_TxTransferAbort(I2S_Type *base, i2s_handle_t *handle)
DECL|I2S_TxTransferCreateHandle|function|void I2S_TxTransferCreateHandle(I2S_Type *base, i2s_handle_t *handle, i2s_transfer_callback_t callback, void *userData)
DECL|I2S_TxTransferNonBlocking|function|status_t I2S_TxTransferNonBlocking(I2S_Type *base, i2s_handle_t *handle, i2s_transfer_t transfer)
DECL|I2S_ValidateBuffer|function|static status_t I2S_ValidateBuffer(i2s_handle_t *handle, i2s_transfer_t *transfer)
DECL|_i2s_state|enum|enum _i2s_state
DECL|kI2S_StateIdle|enumerator|kI2S_StateIdle = 0x0, /*!< Not performing transfer */
DECL|kI2S_StateRx|enumerator|kI2S_StateRx, /*!< Performing receive */
DECL|kI2S_StateTxWaitForEmptyFifo|enumerator|kI2S_StateTxWaitForEmptyFifo, /*!< Wait for FIFO to be flushed */
DECL|kI2S_StateTxWaitToWriteDummyData|enumerator|kI2S_StateTxWaitToWriteDummyData, /*!< Wait on FIFO in order to write final dummy data there */
DECL|kI2S_StateTx|enumerator|kI2S_StateTx, /*!< Performing transmit */
