DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_TransferAbortReceiveDMA|function|void UART_TransferAbortReceiveDMA(UART_Type *base, uart_dma_handle_t *handle)
DECL|UART_TransferAbortSendDMA|function|void UART_TransferAbortSendDMA(UART_Type *base, uart_dma_handle_t *handle)
DECL|UART_TransferCreateHandleDMA|function|void UART_TransferCreateHandleDMA(UART_Type *base, uart_dma_handle_t *handle, uart_dma_transfer_callback_t callback, void *userData, dma_handle_t *txDmaHandle,
DECL|UART_TransferGetReceiveCountDMA|function|status_t UART_TransferGetReceiveCountDMA(UART_Type *base, uart_dma_handle_t *handle, uint32_t *count)
DECL|UART_TransferGetSendCountDMA|function|status_t UART_TransferGetSendCountDMA(UART_Type *base, uart_dma_handle_t *handle, uint32_t *count)
DECL|UART_TransferReceiveDMACallback|function|static void UART_TransferReceiveDMACallback(dma_handle_t *handle, void *param)
DECL|UART_TransferReceiveDMA|function|status_t UART_TransferReceiveDMA(UART_Type *base, uart_dma_handle_t *handle, uart_transfer_t *xfer)
DECL|UART_TransferSendDMACallback|function|static void UART_TransferSendDMACallback(dma_handle_t *handle, void *param)
DECL|UART_TransferSendDMA|function|status_t UART_TransferSendDMA(UART_Type *base, uart_dma_handle_t *handle, uart_transfer_t *xfer)
DECL|_uart_dma_private_handle|struct|typedef struct _uart_dma_private_handle
DECL|_uart_dma_tansfer_states|enum|enum _uart_dma_tansfer_states
DECL|base|member|UART_Type *base;
DECL|handle|member|uart_dma_handle_t *handle;
DECL|kUART_RxBusy|enumerator|kUART_RxBusy /* RX busy. */
DECL|kUART_RxIdle|enumerator|kUART_RxIdle, /* RX idle. */
DECL|kUART_TxBusy|enumerator|kUART_TxBusy, /* TX busy. */
DECL|kUART_TxIdle|enumerator|kUART_TxIdle, /* TX idle. */
DECL|s_dmaPrivateHandle|variable|s_dmaPrivateHandle
DECL|uart_dma_private_handle_t|typedef|} uart_dma_private_handle_t;
