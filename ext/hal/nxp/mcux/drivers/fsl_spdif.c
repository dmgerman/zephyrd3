DECL|SPDIF_Deinit|function|void SPDIF_Deinit(SPDIF_Type *base)
DECL|SPDIF_DriverIRQHandler|function|void SPDIF_DriverIRQHandler(void)
DECL|SPDIF_GetDefaultConfig|function|void SPDIF_GetDefaultConfig(spdif_config_t *config)
DECL|SPDIF_GetInstance|function|uint32_t SPDIF_GetInstance(SPDIF_Type *base)
DECL|SPDIF_GetRxSampleRate|function|uint32_t SPDIF_GetRxSampleRate(SPDIF_Type *base, uint32_t clockSourceFreq_Hz)
DECL|SPDIF_Init|function|void SPDIF_Init(SPDIF_Type *base, const spdif_config_t *config)
DECL|SPDIF_ReadBlocking|function|void SPDIF_ReadBlocking(SPDIF_Type *base, uint8_t *buffer, uint32_t size)
DECL|SPDIF_TransferAbortReceive|function|void SPDIF_TransferAbortReceive(SPDIF_Type *base, spdif_handle_t *handle)
DECL|SPDIF_TransferAbortSend|function|void SPDIF_TransferAbortSend(SPDIF_Type *base, spdif_handle_t *handle)
DECL|SPDIF_TransferGetReceiveCount|function|status_t SPDIF_TransferGetReceiveCount(SPDIF_Type *base, spdif_handle_t *handle, size_t *count)
DECL|SPDIF_TransferGetSendCount|function|status_t SPDIF_TransferGetSendCount(SPDIF_Type *base, spdif_handle_t *handle, size_t *count)
DECL|SPDIF_TransferReceiveNonBlocking|function|status_t SPDIF_TransferReceiveNonBlocking(SPDIF_Type *base, spdif_handle_t *handle, spdif_transfer_t *xfer)
DECL|SPDIF_TransferRxCreateHandle|function|void SPDIF_TransferRxCreateHandle(SPDIF_Type *base, spdif_handle_t *handle, spdif_transfer_callback_t callback, void *userData)
DECL|SPDIF_TransferRxHandleIRQ|function|void SPDIF_TransferRxHandleIRQ(SPDIF_Type *base, spdif_handle_t *handle)
DECL|SPDIF_TransferSendNonBlocking|function|status_t SPDIF_TransferSendNonBlocking(SPDIF_Type *base, spdif_handle_t *handle, spdif_transfer_t *xfer)
DECL|SPDIF_TransferTxCreateHandle|function|void SPDIF_TransferTxCreateHandle(SPDIF_Type *base, spdif_handle_t *handle, spdif_transfer_callback_t callback, void *userData)
DECL|SPDIF_TransferTxHandleIRQ|function|void SPDIF_TransferTxHandleIRQ(SPDIF_Type *base, spdif_handle_t *handle)
DECL|SPDIF_TxEnable|function|void SPDIF_TxEnable(SPDIF_Type *base, bool enable)
DECL|SPDIF_TxSetSampleRate|function|void SPDIF_TxSetSampleRate(SPDIF_Type *base, uint32_t sampleRate_Hz, uint32_t sourceClockFreq_Hz)
DECL|SPDIF_WriteBlocking|function|void SPDIF_WriteBlocking(SPDIF_Type *base, uint8_t *buffer, uint32_t size)
DECL|_spdif_transfer_state|enum|enum _spdif_transfer_state
DECL|kSPDIF_Busy|enumerator|kSPDIF_Busy = 0x0U, /*!< SPDIF is busy */
DECL|kSPDIF_Error|enumerator|kSPDIF_Error /*!< Transfer error occured. */
DECL|kSPDIF_Idle|enumerator|kSPDIF_Idle, /*!< Transfer is done. */
DECL|s_spdifBases|variable|s_spdifBases
DECL|s_spdifClock|variable|s_spdifClock
DECL|s_spdifHandle|variable|s_spdifHandle
DECL|s_spdifIRQ|variable|s_spdifIRQ
DECL|s_spdifRxIsr|variable|s_spdifRxIsr
DECL|s_spdifTxIsr|variable|s_spdifTxIsr
DECL|s_spdif_gain|variable|s_spdif_gain
DECL|s_spdif_rx_watermark|variable|s_spdif_rx_watermark
DECL|s_spdif_tx_watermark|variable|s_spdif_tx_watermark
DECL|spdif_isr_t|typedef|typedef void (*spdif_isr_t)(SPDIF_Type *base, spdif_handle_t *handle);
