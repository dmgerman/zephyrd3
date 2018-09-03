DECL|FLEXIO_UART_HANDLE_COUNT|macro|FLEXIO_UART_HANDLE_COUNT
DECL|FLEXIO_UART_TransferAbortReceiveEDMA|function|void FLEXIO_UART_TransferAbortReceiveEDMA(FLEXIO_UART_Type *base, flexio_uart_edma_handle_t *handle)
DECL|FLEXIO_UART_TransferAbortSendEDMA|function|void FLEXIO_UART_TransferAbortSendEDMA(FLEXIO_UART_Type *base, flexio_uart_edma_handle_t *handle)
DECL|FLEXIO_UART_TransferCreateHandleEDMA|function|status_t FLEXIO_UART_TransferCreateHandleEDMA(FLEXIO_UART_Type *base, flexio_uart_edma_handle_t *handle, flexio_uart_edma_transfer_callback_t callback, void *userData, edma_handle_t *txEdmaHandle,
DECL|FLEXIO_UART_TransferGetReceiveCountEDMA|function|status_t FLEXIO_UART_TransferGetReceiveCountEDMA(FLEXIO_UART_Type *base, flexio_uart_edma_handle_t *handle, size_t *count)
DECL|FLEXIO_UART_TransferGetSendCountEDMA|function|status_t FLEXIO_UART_TransferGetSendCountEDMA(FLEXIO_UART_Type *base, flexio_uart_edma_handle_t *handle, size_t *count)
DECL|FLEXIO_UART_TransferReceiveEDMACallback|function|static void FLEXIO_UART_TransferReceiveEDMACallback(edma_handle_t *handle, void *param, bool transferDone, uint32_t tcds)
DECL|FLEXIO_UART_TransferReceiveEDMA|function|status_t FLEXIO_UART_TransferReceiveEDMA(FLEXIO_UART_Type *base, flexio_uart_edma_handle_t *handle, flexio_uart_transfer_t *xfer)
DECL|FLEXIO_UART_TransferSendEDMACallback|function|static void FLEXIO_UART_TransferSendEDMACallback(edma_handle_t *handle, void *param, bool transferDone, uint32_t tcds)
DECL|FLEXIO_UART_TransferSendEDMA|function|status_t FLEXIO_UART_TransferSendEDMA(FLEXIO_UART_Type *base, flexio_uart_edma_handle_t *handle, flexio_uart_transfer_t *xfer)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|_flexio_uart_edma_private_handle|struct|typedef struct _flexio_uart_edma_private_handle
DECL|_flexio_uart_edma_tansfer_states|enum|enum _flexio_uart_edma_tansfer_states
DECL|base|member|FLEXIO_UART_Type *base;
DECL|flexio_uart_edma_private_handle_t|typedef|} flexio_uart_edma_private_handle_t;
DECL|handle|member|flexio_uart_edma_handle_t *handle;
DECL|kFLEXIO_UART_RxBusy|enumerator|kFLEXIO_UART_RxBusy /* RX busy. */
DECL|kFLEXIO_UART_RxIdle|enumerator|kFLEXIO_UART_RxIdle, /* RX idle. */
DECL|kFLEXIO_UART_TxBusy|enumerator|kFLEXIO_UART_TxBusy, /* TX busy. */
DECL|kFLEXIO_UART_TxIdle|enumerator|kFLEXIO_UART_TxIdle, /* TX idle. */
DECL|s_edmaPrivateHandle|variable|s_edmaPrivateHandle
