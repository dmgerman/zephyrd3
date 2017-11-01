DECL|SAI_RxEDMACallback|function|static void SAI_RxEDMACallback(edma_handle_t *handle, void *userData, bool done, uint32_t tcds)
DECL|SAI_TransferAbortReceiveEDMA|function|void SAI_TransferAbortReceiveEDMA(I2S_Type *base, sai_edma_handle_t *handle)
DECL|SAI_TransferAbortSendEDMA|function|void SAI_TransferAbortSendEDMA(I2S_Type *base, sai_edma_handle_t *handle)
DECL|SAI_TransferGetReceiveCountEDMA|function|status_t SAI_TransferGetReceiveCountEDMA(I2S_Type *base, sai_edma_handle_t *handle, size_t *count)
DECL|SAI_TransferGetSendCountEDMA|function|status_t SAI_TransferGetSendCountEDMA(I2S_Type *base, sai_edma_handle_t *handle, size_t *count)
DECL|SAI_TransferReceiveEDMA|function|status_t SAI_TransferReceiveEDMA(I2S_Type *base, sai_edma_handle_t *handle, sai_transfer_t *xfer)
DECL|SAI_TransferRxCreateHandleEDMA|function|void SAI_TransferRxCreateHandleEDMA( I2S_Type *base, sai_edma_handle_t *handle, sai_edma_callback_t callback, void *userData, edma_handle_t *dmaHandle)
DECL|SAI_TransferRxSetFormatEDMA|function|void SAI_TransferRxSetFormatEDMA(I2S_Type *base, sai_edma_handle_t *handle, sai_transfer_format_t *format, uint32_t mclkSourceClockHz, uint32_t bclkSourceClockHz)
DECL|SAI_TransferSendEDMA|function|status_t SAI_TransferSendEDMA(I2S_Type *base, sai_edma_handle_t *handle, sai_transfer_t *xfer)
DECL|SAI_TransferTerminateReceiveEDMA|function|void SAI_TransferTerminateReceiveEDMA(I2S_Type *base, sai_edma_handle_t *handle)
DECL|SAI_TransferTerminateSendEDMA|function|void SAI_TransferTerminateSendEDMA(I2S_Type *base, sai_edma_handle_t *handle)
DECL|SAI_TransferTxCreateHandleEDMA|function|void SAI_TransferTxCreateHandleEDMA( I2S_Type *base, sai_edma_handle_t *handle, sai_edma_callback_t callback, void *userData, edma_handle_t *dmaHandle)
DECL|SAI_TransferTxSetFormatEDMA|function|void SAI_TransferTxSetFormatEDMA(I2S_Type *base, sai_edma_handle_t *handle, sai_transfer_format_t *format, uint32_t mclkSourceClockHz, uint32_t bclkSourceClockHz)
DECL|SAI_TxEDMACallback|function|static void SAI_TxEDMACallback(edma_handle_t *handle, void *userData, bool done, uint32_t tcds)
DECL|STCD_ADDR|macro|STCD_ADDR
DECL|_sai_edma_private_handle|struct|typedef struct _sai_edma_private_handle
DECL|_sai_edma_transfer_state|enum|enum _sai_edma_transfer_state
DECL|base|member|I2S_Type *base;
DECL|handle|member|sai_edma_handle_t *handle;
DECL|kSAI_Busy|enumerator|kSAI_Busy = 0x0U, /*!< SAI is busy */
DECL|kSAI_Idle|enumerator|kSAI_Idle, /*!< Transfer is done. */
DECL|s_edmaPrivateHandle|variable|s_edmaPrivateHandle
DECL|sai_edma_private_handle_t|typedef|} sai_edma_private_handle_t;
