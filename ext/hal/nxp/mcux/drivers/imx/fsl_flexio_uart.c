DECL|FLEXIO_UART_ClearStatusFlags|function|void FLEXIO_UART_ClearStatusFlags(FLEXIO_UART_Type *base, uint32_t mask)
DECL|FLEXIO_UART_Deinit|function|void FLEXIO_UART_Deinit(FLEXIO_UART_Type *base)
DECL|FLEXIO_UART_DisableInterrupts|function|void FLEXIO_UART_DisableInterrupts(FLEXIO_UART_Type *base, uint32_t mask)
DECL|FLEXIO_UART_EnableInterrupts|function|void FLEXIO_UART_EnableInterrupts(FLEXIO_UART_Type *base, uint32_t mask)
DECL|FLEXIO_UART_GetDefaultConfig|function|void FLEXIO_UART_GetDefaultConfig(flexio_uart_config_t *userConfig)
DECL|FLEXIO_UART_GetInstance|function|static uint32_t FLEXIO_UART_GetInstance(FLEXIO_UART_Type *base)
DECL|FLEXIO_UART_GetStatusFlags|function|uint32_t FLEXIO_UART_GetStatusFlags(FLEXIO_UART_Type *base)
DECL|FLEXIO_UART_Init|function|status_t FLEXIO_UART_Init(FLEXIO_UART_Type *base, const flexio_uart_config_t *userConfig, uint32_t srcClock_Hz)
DECL|FLEXIO_UART_ReadBlocking|function|void FLEXIO_UART_ReadBlocking(FLEXIO_UART_Type *base, uint8_t *rxData, size_t rxSize)
DECL|FLEXIO_UART_TransferAbortReceive|function|void FLEXIO_UART_TransferAbortReceive(FLEXIO_UART_Type *base, flexio_uart_handle_t *handle)
DECL|FLEXIO_UART_TransferAbortSend|function|void FLEXIO_UART_TransferAbortSend(FLEXIO_UART_Type *base, flexio_uart_handle_t *handle)
DECL|FLEXIO_UART_TransferCreateHandle|function|status_t FLEXIO_UART_TransferCreateHandle(FLEXIO_UART_Type *base, flexio_uart_handle_t *handle, flexio_uart_transfer_callback_t callback, void *userData)
DECL|FLEXIO_UART_TransferGetReceiveCount|function|status_t FLEXIO_UART_TransferGetReceiveCount(FLEXIO_UART_Type *base, flexio_uart_handle_t *handle, size_t *count)
DECL|FLEXIO_UART_TransferGetRxRingBufferLength|function|static size_t FLEXIO_UART_TransferGetRxRingBufferLength(flexio_uart_handle_t *handle)
DECL|FLEXIO_UART_TransferGetSendCount|function|status_t FLEXIO_UART_TransferGetSendCount(FLEXIO_UART_Type *base, flexio_uart_handle_t *handle, size_t *count)
DECL|FLEXIO_UART_TransferHandleIRQ|function|void FLEXIO_UART_TransferHandleIRQ(void *uartType, void *uartHandle)
DECL|FLEXIO_UART_TransferIsRxRingBufferFull|function|static bool FLEXIO_UART_TransferIsRxRingBufferFull(flexio_uart_handle_t *handle)
DECL|FLEXIO_UART_TransferReceiveNonBlocking|function|status_t FLEXIO_UART_TransferReceiveNonBlocking(FLEXIO_UART_Type *base, flexio_uart_handle_t *handle, flexio_uart_transfer_t *xfer, size_t *receivedBytes)
DECL|FLEXIO_UART_TransferSendNonBlocking|function|status_t FLEXIO_UART_TransferSendNonBlocking(FLEXIO_UART_Type *base, flexio_uart_handle_t *handle, flexio_uart_transfer_t *xfer)
DECL|FLEXIO_UART_TransferStartRingBuffer|function|void FLEXIO_UART_TransferStartRingBuffer(FLEXIO_UART_Type *base, flexio_uart_handle_t *handle, uint8_t *ringBuffer, size_t ringBufferSize)
DECL|FLEXIO_UART_TransferStopRingBuffer|function|void FLEXIO_UART_TransferStopRingBuffer(FLEXIO_UART_Type *base, flexio_uart_handle_t *handle)
DECL|FLEXIO_UART_WriteBlocking|function|void FLEXIO_UART_WriteBlocking(FLEXIO_UART_Type *base, const uint8_t *txData, size_t txSize)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|_flexio_uart_transfer_states|enum|enum _flexio_uart_transfer_states
DECL|kFLEXIO_UART_RxBusy|enumerator|kFLEXIO_UART_RxBusy /* RX busy. */
DECL|kFLEXIO_UART_RxIdle|enumerator|kFLEXIO_UART_RxIdle, /* RX idle. */
DECL|kFLEXIO_UART_TxBusy|enumerator|kFLEXIO_UART_TxBusy, /* TX busy. */
DECL|kFLEXIO_UART_TxIdle|enumerator|kFLEXIO_UART_TxIdle, /* TX idle. */
