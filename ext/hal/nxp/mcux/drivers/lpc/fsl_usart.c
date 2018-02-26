DECL|USART_Deinit|function|void USART_Deinit(USART_Type *base)
DECL|USART_GetDefaultConfig|function|void USART_GetDefaultConfig(usart_config_t *config)
DECL|USART_GetInstance|function|uint32_t USART_GetInstance(USART_Type *base)
DECL|USART_Init|function|status_t USART_Init(USART_Type *base, const usart_config_t *config, uint32_t srcClock_Hz)
DECL|USART_ReadBlocking|function|status_t USART_ReadBlocking(USART_Type *base, uint8_t *data, size_t length)
DECL|USART_SetBaudRate|function|status_t USART_SetBaudRate(USART_Type *base, uint32_t baudrate_Bps, uint32_t srcClock_Hz)
DECL|USART_TransferAbortReceive|function|void USART_TransferAbortReceive(USART_Type *base, usart_handle_t *handle)
DECL|USART_TransferAbortSend|function|void USART_TransferAbortSend(USART_Type *base, usart_handle_t *handle)
DECL|USART_TransferCreateHandle|function|status_t USART_TransferCreateHandle(USART_Type *base, usart_handle_t *handle, usart_transfer_callback_t callback, void *userData)
DECL|USART_TransferGetReceiveCount|function|status_t USART_TransferGetReceiveCount(USART_Type *base, usart_handle_t *handle, uint32_t *count)
DECL|USART_TransferGetRxRingBufferLength|function|static size_t USART_TransferGetRxRingBufferLength(usart_handle_t *handle)
DECL|USART_TransferGetSendCount|function|status_t USART_TransferGetSendCount(USART_Type *base, usart_handle_t *handle, uint32_t *count)
DECL|USART_TransferHandleIRQ|function|void USART_TransferHandleIRQ(USART_Type *base, usart_handle_t *handle)
DECL|USART_TransferIsRxRingBufferFull|function|static bool USART_TransferIsRxRingBufferFull(usart_handle_t *handle)
DECL|USART_TransferReceiveNonBlocking|function|status_t USART_TransferReceiveNonBlocking(USART_Type *base, usart_handle_t *handle, usart_transfer_t *xfer, size_t *receivedBytes)
DECL|USART_TransferSendNonBlocking|function|status_t USART_TransferSendNonBlocking(USART_Type *base, usart_handle_t *handle, usart_transfer_t *xfer)
DECL|USART_TransferStartRingBuffer|function|void USART_TransferStartRingBuffer(USART_Type *base, usart_handle_t *handle, uint8_t *ringBuffer, size_t ringBufferSize)
DECL|USART_TransferStopRingBuffer|function|void USART_TransferStopRingBuffer(USART_Type *base, usart_handle_t *handle)
DECL|USART_WriteBlocking|function|void USART_WriteBlocking(USART_Type *base, const uint8_t *data, size_t length)
DECL|_usart_transfer_states|enum|enum _usart_transfer_states
DECL|kUSART_RxBusy|enumerator|kUSART_RxBusy /* RX busy. */
DECL|kUSART_RxIdle|enumerator|kUSART_RxIdle, /* RX idle. */
DECL|kUSART_TxBusy|enumerator|kUSART_TxBusy, /* TX busy. */
DECL|kUSART_TxIdle|enumerator|kUSART_TxIdle, /* TX idle. */
DECL|s_usartBaseAddrs|variable|s_usartBaseAddrs
DECL|s_usartIRQ|variable|s_usartIRQ
