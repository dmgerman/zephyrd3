DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_ReceiveEDMACallback|function|static void UART_ReceiveEDMACallback(edma_handle_t *handle, void *param, bool transferDone, uint32_t tcds)
DECL|UART_ReceiveEDMA|function|status_t UART_ReceiveEDMA(UART_Type *base, uart_edma_handle_t *handle, uart_transfer_t *xfer)
DECL|UART_SendEDMACallback|function|static void UART_SendEDMACallback(edma_handle_t *handle, void *param, bool transferDone, uint32_t tcds)
DECL|UART_SendEDMA|function|status_t UART_SendEDMA(UART_Type *base, uart_edma_handle_t *handle, uart_transfer_t *xfer)
DECL|UART_TransferAbortReceiveEDMA|function|void UART_TransferAbortReceiveEDMA(UART_Type *base, uart_edma_handle_t *handle)
DECL|UART_TransferAbortSendEDMA|function|void UART_TransferAbortSendEDMA(UART_Type *base, uart_edma_handle_t *handle)
DECL|UART_TransferCreateHandleEDMA|function|void UART_TransferCreateHandleEDMA(UART_Type *base, uart_edma_handle_t *handle, uart_edma_transfer_callback_t callback, void *userData, edma_handle_t *txEdmaHandle,
DECL|UART_TransferGetReceiveCountEDMA|function|status_t UART_TransferGetReceiveCountEDMA(UART_Type *base, uart_edma_handle_t *handle, uint32_t *count)
DECL|UART_TransferGetSendCountEDMA|function|status_t UART_TransferGetSendCountEDMA(UART_Type *base, uart_edma_handle_t *handle, uint32_t *count)
DECL|_uart_edma_private_handle|struct|typedef struct _uart_edma_private_handle
DECL|_uart_edma_tansfer_states|enum|enum _uart_edma_tansfer_states
DECL|base|member|UART_Type *base;
DECL|handle|member|uart_edma_handle_t *handle;
DECL|kUART_RxBusy|enumerator|kUART_RxBusy /* RX busy. */
DECL|kUART_RxIdle|enumerator|kUART_RxIdle, /* RX idle. */
DECL|kUART_TxBusy|enumerator|kUART_TxBusy, /* TX busy. */
DECL|kUART_TxIdle|enumerator|kUART_TxIdle, /* TX idle. */
DECL|s_edmaPrivateHandle|variable|s_edmaPrivateHandle
DECL|uart_edma_private_handle_t|typedef|} uart_edma_private_handle_t;
