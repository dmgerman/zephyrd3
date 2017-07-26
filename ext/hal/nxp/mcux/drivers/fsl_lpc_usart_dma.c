DECL|USART_TransferAbortReceiveDMA|function|void USART_TransferAbortReceiveDMA(USART_Type *base, usart_dma_handle_t *handle)
DECL|USART_TransferAbortSendDMA|function|void USART_TransferAbortSendDMA(USART_Type *base, usart_dma_handle_t *handle)
DECL|USART_TransferCreateHandleDMA|function|status_t USART_TransferCreateHandleDMA(USART_Type *base, usart_dma_handle_t *handle, usart_dma_transfer_callback_t callback, void *userData, dma_handle_t *txDmaHandle,
DECL|USART_TransferGetReceiveCountDMA|function|status_t USART_TransferGetReceiveCountDMA(USART_Type *base, usart_dma_handle_t *handle, uint32_t *count)
DECL|USART_TransferReceiveDMACallback|function|static void USART_TransferReceiveDMACallback(dma_handle_t *handle, void *param, bool transferDone, uint32_t intmode)
DECL|USART_TransferReceiveDMA|function|status_t USART_TransferReceiveDMA(USART_Type *base, usart_dma_handle_t *handle, usart_transfer_t *xfer)
DECL|USART_TransferSendDMACallback|function|static void USART_TransferSendDMACallback(dma_handle_t *handle, void *param, bool transferDone, uint32_t intmode)
DECL|USART_TransferSendDMA|function|status_t USART_TransferSendDMA(USART_Type *base, usart_dma_handle_t *handle, usart_transfer_t *xfer)
DECL|_usart_dma_private_handle|struct|typedef struct _usart_dma_private_handle
DECL|_usart_transfer_states|enum|enum _usart_transfer_states
DECL|base|member|USART_Type *base;
DECL|handle|member|usart_dma_handle_t *handle;
DECL|kUSART_RxBusy|enumerator|kUSART_RxBusy /* RX busy. */
DECL|kUSART_RxIdle|enumerator|kUSART_RxIdle, /* RX idle. */
DECL|kUSART_TxBusy|enumerator|kUSART_TxBusy, /* TX busy. */
DECL|kUSART_TxIdle|enumerator|kUSART_TxIdle, /* TX idle. */
DECL|s_dmaPrivateHandle|variable|s_dmaPrivateHandle
DECL|usart_dma_private_handle_t|typedef|} usart_dma_private_handle_t;
