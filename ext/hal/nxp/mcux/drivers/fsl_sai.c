DECL|I2S0_DriverIRQHandler|function|void I2S0_DriverIRQHandler(void)
DECL|I2S0_Rx_DriverIRQHandler|function|void I2S0_Rx_DriverIRQHandler(void)
DECL|I2S0_Tx_DriverIRQHandler|function|void I2S0_Tx_DriverIRQHandler(void)
DECL|I2S1_Rx_DriverIRQHandler|function|void I2S1_Rx_DriverIRQHandler(void)
DECL|I2S1_Tx_DriverIRQHandler|function|void I2S1_Tx_DriverIRQHandler(void)
DECL|SAI_Deinit|function|void SAI_Deinit(I2S_Type *base)
DECL|SAI_GetInstance|function|uint32_t SAI_GetInstance(I2S_Type *base)
DECL|SAI_ReadBlocking|function|void SAI_ReadBlocking(I2S_Type *base, uint32_t channel, uint32_t bitWidth, uint8_t *buffer, uint32_t size)
DECL|SAI_ReadNonBlocking|function|static void SAI_ReadNonBlocking(I2S_Type *base, uint32_t channel, uint32_t bitWidth, uint8_t *buffer, uint32_t size)
DECL|SAI_RxEnable|function|void SAI_RxEnable(I2S_Type *base, bool enable)
DECL|SAI_RxGetDefaultConfig|function|void SAI_RxGetDefaultConfig(sai_config_t *config)
DECL|SAI_RxInit|function|void SAI_RxInit(I2S_Type *base, const sai_config_t *config)
DECL|SAI_RxReset|function|void SAI_RxReset(I2S_Type *base)
DECL|SAI_RxSetFormat|function|void SAI_RxSetFormat(I2S_Type *base, sai_transfer_format_t *format, uint32_t mclkSourceClockHz, uint32_t bclkSourceClockHz)
DECL|SAI_SetMasterClockDivider|function|static void SAI_SetMasterClockDivider(I2S_Type *base, uint32_t mclk_Hz, uint32_t mclkSrcClock_Hz)
DECL|SAI_TransferAbortReceive|function|void SAI_TransferAbortReceive(I2S_Type *base, sai_handle_t *handle)
DECL|SAI_TransferAbortSend|function|void SAI_TransferAbortSend(I2S_Type *base, sai_handle_t *handle)
DECL|SAI_TransferGetReceiveCount|function|status_t SAI_TransferGetReceiveCount(I2S_Type *base, sai_handle_t *handle, size_t *count)
DECL|SAI_TransferGetSendCount|function|status_t SAI_TransferGetSendCount(I2S_Type *base, sai_handle_t *handle, size_t *count)
DECL|SAI_TransferReceiveNonBlocking|function|status_t SAI_TransferReceiveNonBlocking(I2S_Type *base, sai_handle_t *handle, sai_transfer_t *xfer)
DECL|SAI_TransferRxCreateHandle|function|void SAI_TransferRxCreateHandle(I2S_Type *base, sai_handle_t *handle, sai_transfer_callback_t callback, void *userData)
DECL|SAI_TransferRxHandleIRQ|function|void SAI_TransferRxHandleIRQ(I2S_Type *base, sai_handle_t *handle)
DECL|SAI_TransferRxSetFormat|function|status_t SAI_TransferRxSetFormat(I2S_Type *base, sai_handle_t *handle, sai_transfer_format_t *format, uint32_t mclkSourceClockHz, uint32_t bclkSourceClockHz)
DECL|SAI_TransferSendNonBlocking|function|status_t SAI_TransferSendNonBlocking(I2S_Type *base, sai_handle_t *handle, sai_transfer_t *xfer)
DECL|SAI_TransferTxCreateHandle|function|void SAI_TransferTxCreateHandle(I2S_Type *base, sai_handle_t *handle, sai_transfer_callback_t callback, void *userData)
DECL|SAI_TransferTxHandleIRQ|function|void SAI_TransferTxHandleIRQ(I2S_Type *base, sai_handle_t *handle)
DECL|SAI_TransferTxSetFormat|function|status_t SAI_TransferTxSetFormat(I2S_Type *base, sai_handle_t *handle, sai_transfer_format_t *format, uint32_t mclkSourceClockHz, uint32_t bclkSourceClockHz)
DECL|SAI_TxEnable|function|void SAI_TxEnable(I2S_Type *base, bool enable)
DECL|SAI_TxGetDefaultConfig|function|void SAI_TxGetDefaultConfig(sai_config_t *config)
DECL|SAI_TxInit|function|void SAI_TxInit(I2S_Type *base, const sai_config_t *config)
DECL|SAI_TxReset|function|void SAI_TxReset(I2S_Type *base)
DECL|SAI_TxSetFormat|function|void SAI_TxSetFormat(I2S_Type *base, sai_transfer_format_t *format, uint32_t mclkSourceClockHz, uint32_t bclkSourceClockHz)
DECL|SAI_WriteBlocking|function|void SAI_WriteBlocking(I2S_Type *base, uint32_t channel, uint32_t bitWidth, uint8_t *buffer, uint32_t size)
DECL|SAI_WriteNonBlocking|function|static void SAI_WriteNonBlocking(I2S_Type *base, uint32_t channel, uint32_t bitWidth, uint8_t *buffer, uint32_t size)
DECL|_sai_transfer_state|enum|enum _sai_transfer_state
DECL|kSAI_Busy|enumerator|kSAI_Busy = 0x0U, /*!< SAI is busy */
DECL|kSAI_Error|enumerator|kSAI_Error /*!< Transfer error occured. */
DECL|kSAI_Idle|enumerator|kSAI_Idle, /*!< Transfer is done. */
DECL|s_saiBases|variable|s_saiBases
DECL|s_saiClock|variable|s_saiClock
DECL|s_saiHandle|variable|s_saiHandle
DECL|s_saiRxIRQ|variable|s_saiRxIRQ
DECL|s_saiTxIRQ|variable|s_saiTxIRQ
