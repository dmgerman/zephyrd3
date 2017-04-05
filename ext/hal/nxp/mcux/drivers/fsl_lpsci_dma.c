DECL|LPSCI_TransferAbortReceiveDMA|function|void LPSCI_TransferAbortReceiveDMA(UART0_Type *base, lpsci_dma_handle_t *handle)
DECL|LPSCI_TransferAbortSendDMA|function|void LPSCI_TransferAbortSendDMA(UART0_Type *base, lpsci_dma_handle_t *handle)
DECL|LPSCI_TransferCreateHandleDMA|function|void LPSCI_TransferCreateHandleDMA(UART0_Type *base, lpsci_dma_handle_t *handle, lpsci_dma_transfer_callback_t callback, void *userData, dma_handle_t *txDmaHandle,
DECL|LPSCI_TransferGetReceiveCountDMA|function|status_t LPSCI_TransferGetReceiveCountDMA(UART0_Type *base, lpsci_dma_handle_t *handle, uint32_t *count)
DECL|LPSCI_TransferGetSendCountDMA|function|status_t LPSCI_TransferGetSendCountDMA(UART0_Type *base, lpsci_dma_handle_t *handle, uint32_t *count)
DECL|LPSCI_TransferReceiveDMACallback|function|static void LPSCI_TransferReceiveDMACallback(dma_handle_t *handle, void *param)
DECL|LPSCI_TransferReceiveDMA|function|status_t LPSCI_TransferReceiveDMA(UART0_Type *base, lpsci_dma_handle_t *handle, lpsci_transfer_t *xfer)
DECL|LPSCI_TransferSendDMACallback|function|static void LPSCI_TransferSendDMACallback(dma_handle_t *handle, void *param)
DECL|LPSCI_TransferSendDMA|function|status_t LPSCI_TransferSendDMA(UART0_Type *base, lpsci_dma_handle_t *handle, lpsci_transfer_t *xfer)
DECL|_lpsci_dma_private_handle|struct|typedef struct _lpsci_dma_private_handle
DECL|_lpsci_dma_tansfer_states|enum|enum _lpsci_dma_tansfer_states
DECL|base|member|UART0_Type *base;
DECL|handle|member|lpsci_dma_handle_t *handle;
DECL|kLPSCI_RxBusy|enumerator|kLPSCI_RxBusy /* RX busy. */
DECL|kLPSCI_RxIdle|enumerator|kLPSCI_RxIdle, /* RX idle. */
DECL|kLPSCI_TxBusy|enumerator|kLPSCI_TxBusy, /* TX busy. */
DECL|kLPSCI_TxIdle|enumerator|kLPSCI_TxIdle, /* TX idle. */
DECL|lpsci_dma_private_handle_t|typedef|} lpsci_dma_private_handle_t;
DECL|s_dmaPrivateHandle|variable|s_dmaPrivateHandle
