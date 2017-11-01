DECL|SPDIF_RxEDMACallback|function|static void SPDIF_RxEDMACallback(edma_handle_t *handle, void *userData, bool done, uint32_t tcds)
DECL|SPDIF_SubmitTransfer|function|static status_t SPDIF_SubmitTransfer(edma_handle_t *handle, const edma_transfer_config_t *config, uint32_t rightChannel)
DECL|SPDIF_TransferAbortReceiveEDMA|function|void SPDIF_TransferAbortReceiveEDMA(SPDIF_Type *base, spdif_edma_handle_t *handle)
DECL|SPDIF_TransferAbortSendEDMA|function|void SPDIF_TransferAbortSendEDMA(SPDIF_Type *base, spdif_edma_handle_t *handle)
DECL|SPDIF_TransferGetReceiveCountEDMA|function|status_t SPDIF_TransferGetReceiveCountEDMA(SPDIF_Type *base, spdif_edma_handle_t *handle, size_t *count)
DECL|SPDIF_TransferGetSendCountEDMA|function|status_t SPDIF_TransferGetSendCountEDMA(SPDIF_Type *base, spdif_edma_handle_t *handle, size_t *count)
DECL|SPDIF_TransferReceiveEDMA|function|status_t SPDIF_TransferReceiveEDMA(SPDIF_Type *base, spdif_edma_handle_t *handle, spdif_edma_transfer_t *xfer)
DECL|SPDIF_TransferRxCreateHandleEDMA|function|void SPDIF_TransferRxCreateHandleEDMA(SPDIF_Type *base, spdif_edma_handle_t *handle, spdif_edma_callback_t callback, void *userData, edma_handle_t *dmaLeftHandle,
DECL|SPDIF_TransferSendEDMA|function|status_t SPDIF_TransferSendEDMA(SPDIF_Type *base, spdif_edma_handle_t *handle, spdif_edma_transfer_t *xfer)
DECL|SPDIF_TransferTxCreateHandleEDMA|function|void SPDIF_TransferTxCreateHandleEDMA(SPDIF_Type *base, spdif_edma_handle_t *handle, spdif_edma_callback_t callback, void *userData, edma_handle_t *dmaLeftHandle,
DECL|SPDIF_TxEDMACallback|function|static void SPDIF_TxEDMACallback(edma_handle_t *handle, void *userData, bool done, uint32_t tcds)
DECL|STCD_ADDR|macro|STCD_ADDR
DECL|_spdif_edma_private_handle|struct|typedef struct _spdif_edma_private_handle
DECL|_spdif_edma_transfer_state|enum|enum _spdif_edma_transfer_state
DECL|base|member|SPDIF_Type *base;
DECL|handle|member|spdif_edma_handle_t *handle;
DECL|kSPDIF_Busy|enumerator|kSPDIF_Busy = 0x0U, /*!< SPDIF is busy */
DECL|kSPDIF_Idle|enumerator|kSPDIF_Idle, /*!< Transfer is done. */
DECL|s_edmaPrivateHandle|variable|s_edmaPrivateHandle
DECL|s_spdif_rx_watermark|variable|s_spdif_rx_watermark
DECL|s_spdif_tx_watermark|variable|s_spdif_tx_watermark
DECL|spdif_edma_private_handle_t|typedef|} spdif_edma_private_handle_t;
