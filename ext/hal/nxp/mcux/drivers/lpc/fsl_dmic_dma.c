DECL|DMIC_HANDLE_ARRAY_SIZE|macro|DMIC_HANDLE_ARRAY_SIZE
DECL|DMIC_TransferAbortReceiveDMA|function|void DMIC_TransferAbortReceiveDMA(DMIC_Type *base, dmic_dma_handle_t *handle)
DECL|DMIC_TransferCreateHandleDMA|function|status_t DMIC_TransferCreateHandleDMA(DMIC_Type *base, dmic_dma_handle_t *handle, dmic_dma_transfer_callback_t callback, void *userData, dma_handle_t *rxDmaHandle)
DECL|DMIC_TransferGetReceiveCountDMA|function|status_t DMIC_TransferGetReceiveCountDMA(DMIC_Type *base, dmic_dma_handle_t *handle, uint32_t *count)
DECL|DMIC_TransferReceiveDMACallback|function|static void DMIC_TransferReceiveDMACallback(dma_handle_t *handle, void *param, bool transferDone, uint32_t intmode)
DECL|DMIC_TransferReceiveDMA|function|status_t DMIC_TransferReceiveDMA(DMIC_Type *base, dmic_dma_handle_t *handle, dmic_transfer_t *xfer, uint32_t dmic_channel)
DECL|_dmic_dma_private_handle|struct|typedef struct _dmic_dma_private_handle
DECL|_dmic_dma_states_t|enum|enum _dmic_dma_states_t
DECL|base|member|DMIC_Type *base;
DECL|dmic_dma_private_handle_t|typedef|} dmic_dma_private_handle_t;
DECL|handle|member|dmic_dma_handle_t *handle;
DECL|kDMIC_Busy|enumerator|kDMIC_Busy /*!< DMIC is busy tranferring data. */
DECL|kDMIC_Idle|enumerator|kDMIC_Idle = 0x0, /*!< DMIC is idle state */
DECL|s_dmaPrivateHandle|variable|s_dmaPrivateHandle
