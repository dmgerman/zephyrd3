DECL|FLEXIO_I2S_RxEDMACallback|function|static void FLEXIO_I2S_RxEDMACallback(edma_handle_t *handle, void *userData, bool done, uint32_t tcds)
DECL|FLEXIO_I2S_TransferAbortReceiveEDMA|function|void FLEXIO_I2S_TransferAbortReceiveEDMA(FLEXIO_I2S_Type *base, flexio_i2s_edma_handle_t *handle)
DECL|FLEXIO_I2S_TransferAbortSendEDMA|function|void FLEXIO_I2S_TransferAbortSendEDMA(FLEXIO_I2S_Type *base, flexio_i2s_edma_handle_t *handle)
DECL|FLEXIO_I2S_TransferGetReceiveCountEDMA|function|status_t FLEXIO_I2S_TransferGetReceiveCountEDMA(FLEXIO_I2S_Type *base, flexio_i2s_edma_handle_t *handle, size_t *count)
DECL|FLEXIO_I2S_TransferGetSendCountEDMA|function|status_t FLEXIO_I2S_TransferGetSendCountEDMA(FLEXIO_I2S_Type *base, flexio_i2s_edma_handle_t *handle, size_t *count)
DECL|FLEXIO_I2S_TransferReceiveEDMA|function|status_t FLEXIO_I2S_TransferReceiveEDMA(FLEXIO_I2S_Type *base, flexio_i2s_edma_handle_t *handle, flexio_i2s_transfer_t *xfer)
DECL|FLEXIO_I2S_TransferRxCreateHandleEDMA|function|void FLEXIO_I2S_TransferRxCreateHandleEDMA(FLEXIO_I2S_Type *base, flexio_i2s_edma_handle_t *handle, flexio_i2s_edma_callback_t callback, void *userData, edma_handle_t *dmaHandle)
DECL|FLEXIO_I2S_TransferSendEDMA|function|status_t FLEXIO_I2S_TransferSendEDMA(FLEXIO_I2S_Type *base, flexio_i2s_edma_handle_t *handle, flexio_i2s_transfer_t *xfer)
DECL|FLEXIO_I2S_TransferSetFormatEDMA|function|void FLEXIO_I2S_TransferSetFormatEDMA(FLEXIO_I2S_Type *base, flexio_i2s_edma_handle_t *handle, flexio_i2s_format_t *format, uint32_t srcClock_Hz)
DECL|FLEXIO_I2S_TransferTxCreateHandleEDMA|function|void FLEXIO_I2S_TransferTxCreateHandleEDMA(FLEXIO_I2S_Type *base, flexio_i2s_edma_handle_t *handle, flexio_i2s_edma_callback_t callback, void *userData, edma_handle_t *dmaHandle)
DECL|FLEXIO_I2S_TxEDMACallback|function|static void FLEXIO_I2S_TxEDMACallback(edma_handle_t *handle, void *userData, bool done, uint32_t tcds)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|STCD_ADDR|macro|STCD_ADDR
DECL|_flexio_i2s_edma_private_handle|struct|typedef struct _flexio_i2s_edma_private_handle
DECL|_flexio_i2s_edma_transfer_state|enum|enum _flexio_i2s_edma_transfer_state
DECL|base|member|FLEXIO_I2S_Type *base;
DECL|flexio_i2s_edma_private_handle_t|typedef|} flexio_i2s_edma_private_handle_t;
DECL|handle|member|flexio_i2s_edma_handle_t *handle;
DECL|kFLEXIO_I2S_Busy|enumerator|kFLEXIO_I2S_Busy = 0x0U, /*!< FLEXIO I2S is busy */
DECL|kFLEXIO_I2S_Idle|enumerator|kFLEXIO_I2S_Idle, /*!< Transfer is done. */
DECL|s_edmaPrivateHandle|variable|s_edmaPrivateHandle
