DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_HANDLE_ARRAY_SIZE|macro|LPUART_HANDLE_ARRAY_SIZE
DECL|LPUART_ReceiveEDMACallback|function|static void LPUART_ReceiveEDMACallback(edma_handle_t *handle, void *param, bool transferDone, uint32_t tcds)
DECL|LPUART_ReceiveEDMA|function|status_t LPUART_ReceiveEDMA(LPUART_Type *base, lpuart_edma_handle_t *handle, lpuart_transfer_t *xfer)
DECL|LPUART_SendEDMACallback|function|static void LPUART_SendEDMACallback(edma_handle_t *handle, void *param, bool transferDone, uint32_t tcds)
DECL|LPUART_SendEDMA|function|status_t LPUART_SendEDMA(LPUART_Type *base, lpuart_edma_handle_t *handle, lpuart_transfer_t *xfer)
DECL|LPUART_TransferAbortReceiveEDMA|function|void LPUART_TransferAbortReceiveEDMA(LPUART_Type *base, lpuart_edma_handle_t *handle)
DECL|LPUART_TransferAbortSendEDMA|function|void LPUART_TransferAbortSendEDMA(LPUART_Type *base, lpuart_edma_handle_t *handle)
DECL|LPUART_TransferCreateHandleEDMA|function|void LPUART_TransferCreateHandleEDMA(LPUART_Type *base, lpuart_edma_handle_t *handle, lpuart_edma_transfer_callback_t callback, void *userData, edma_handle_t *txEdmaHandle,
DECL|LPUART_TransferGetReceiveCountEDMA|function|status_t LPUART_TransferGetReceiveCountEDMA(LPUART_Type *base, lpuart_edma_handle_t *handle, uint32_t *count)
DECL|LPUART_TransferGetSendCountEDMA|function|status_t LPUART_TransferGetSendCountEDMA(LPUART_Type *base, lpuart_edma_handle_t *handle, uint32_t *count)
DECL|_lpuart_edma_private_handle|struct|typedef struct _lpuart_edma_private_handle
DECL|_lpuart_edma_tansfer_states|enum|enum _lpuart_edma_tansfer_states
DECL|base|member|LPUART_Type *base;
DECL|handle|member|lpuart_edma_handle_t *handle;
DECL|kLPUART_RxBusy|enumerator|kLPUART_RxBusy /* RX busy. */
DECL|kLPUART_RxIdle|enumerator|kLPUART_RxIdle, /* RX idle. */
DECL|kLPUART_TxBusy|enumerator|kLPUART_TxBusy, /* TX busy. */
DECL|kLPUART_TxIdle|enumerator|kLPUART_TxIdle, /* TX idle. */
DECL|lpuart_edma_private_handle_t|typedef|} lpuart_edma_private_handle_t;
DECL|s_edmaPrivateHandle|variable|s_edmaPrivateHandle
