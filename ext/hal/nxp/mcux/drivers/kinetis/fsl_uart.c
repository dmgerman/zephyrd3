DECL|UART0_DriverIRQHandler|function|void UART0_DriverIRQHandler(void)
DECL|UART0_RX_TX_DriverIRQHandler|function|void UART0_RX_TX_DriverIRQHandler(void)
DECL|UART1_DriverIRQHandler|function|void UART1_DriverIRQHandler(void)
DECL|UART1_RX_TX_DriverIRQHandler|function|void UART1_RX_TX_DriverIRQHandler(void)
DECL|UART2_DriverIRQHandler|function|void UART2_DriverIRQHandler(void)
DECL|UART2_RX_TX_DriverIRQHandler|function|void UART2_RX_TX_DriverIRQHandler(void)
DECL|UART3_DriverIRQHandler|function|void UART3_DriverIRQHandler(void)
DECL|UART3_RX_TX_DriverIRQHandler|function|void UART3_RX_TX_DriverIRQHandler(void)
DECL|UART4_DriverIRQHandler|function|void UART4_DriverIRQHandler(void)
DECL|UART4_RX_TX_DriverIRQHandler|function|void UART4_RX_TX_DriverIRQHandler(void)
DECL|UART5_DriverIRQHandler|function|void UART5_DriverIRQHandler(void)
DECL|UART5_RX_TX_DriverIRQHandler|function|void UART5_RX_TX_DriverIRQHandler(void)
DECL|UART_ClearStatusFlags|function|status_t UART_ClearStatusFlags(UART_Type *base, uint32_t mask)
DECL|UART_Deinit|function|void UART_Deinit(UART_Type *base)
DECL|UART_DisableInterrupts|function|void UART_DisableInterrupts(UART_Type *base, uint32_t mask)
DECL|UART_EnableInterrupts|function|void UART_EnableInterrupts(UART_Type *base, uint32_t mask)
DECL|UART_GetDefaultConfig|function|void UART_GetDefaultConfig(uart_config_t *config)
DECL|UART_GetEnabledInterrupts|function|uint32_t UART_GetEnabledInterrupts(UART_Type *base)
DECL|UART_GetInstance|function|uint32_t UART_GetInstance(UART_Type *base)
DECL|UART_GetStatusFlags|function|uint32_t UART_GetStatusFlags(UART_Type *base)
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_HANDLE_ARRAY_SIZE|macro|UART_HANDLE_ARRAY_SIZE
DECL|UART_Init|function|status_t UART_Init(UART_Type *base, const uart_config_t *config, uint32_t srcClock_Hz)
DECL|UART_ReadBlocking|function|status_t UART_ReadBlocking(UART_Type *base, uint8_t *data, size_t length)
DECL|UART_ReadNonBlocking|function|static void UART_ReadNonBlocking(UART_Type *base, uint8_t *data, size_t length)
DECL|UART_SetBaudRate|function|status_t UART_SetBaudRate(UART_Type *base, uint32_t baudRate_Bps, uint32_t srcClock_Hz)
DECL|UART_TransferAbortReceive|function|void UART_TransferAbortReceive(UART_Type *base, uart_handle_t *handle)
DECL|UART_TransferAbortSend|function|void UART_TransferAbortSend(UART_Type *base, uart_handle_t *handle)
DECL|UART_TransferCreateHandle|function|void UART_TransferCreateHandle(UART_Type *base, uart_handle_t *handle, uart_transfer_callback_t callback, void *userData)
DECL|UART_TransferGetReceiveCount|function|status_t UART_TransferGetReceiveCount(UART_Type *base, uart_handle_t *handle, uint32_t *count)
DECL|UART_TransferGetRxRingBufferLength|function|static size_t UART_TransferGetRxRingBufferLength(uart_handle_t *handle)
DECL|UART_TransferGetSendCount|function|status_t UART_TransferGetSendCount(UART_Type *base, uart_handle_t *handle, uint32_t *count)
DECL|UART_TransferHandleErrorIRQ|function|void UART_TransferHandleErrorIRQ(UART_Type *base, uart_handle_t *handle)
DECL|UART_TransferHandleIRQ|function|void UART_TransferHandleIRQ(UART_Type *base, uart_handle_t *handle)
DECL|UART_TransferIsRxRingBufferFull|function|static bool UART_TransferIsRxRingBufferFull(uart_handle_t *handle)
DECL|UART_TransferReceiveNonBlocking|function|status_t UART_TransferReceiveNonBlocking(UART_Type *base, uart_handle_t *handle, uart_transfer_t *xfer, size_t *receivedBytes)
DECL|UART_TransferSendNonBlocking|function|status_t UART_TransferSendNonBlocking(UART_Type *base, uart_handle_t *handle, uart_transfer_t *xfer)
DECL|UART_TransferStartRingBuffer|function|void UART_TransferStartRingBuffer(UART_Type *base, uart_handle_t *handle, uint8_t *ringBuffer, size_t ringBufferSize)
DECL|UART_TransferStopRingBuffer|function|void UART_TransferStopRingBuffer(UART_Type *base, uart_handle_t *handle)
DECL|UART_WriteBlocking|function|void UART_WriteBlocking(UART_Type *base, const uint8_t *data, size_t length)
DECL|UART_WriteNonBlocking|function|static void UART_WriteNonBlocking(UART_Type *base, const uint8_t *data, size_t length)
DECL|_uart_tansfer_states|enum|enum _uart_tansfer_states
DECL|kUART_RxBusy|enumerator|kUART_RxBusy, /* RX busy. */
DECL|kUART_RxFramingError|enumerator|kUART_RxFramingError, /* Rx framing error */
DECL|kUART_RxIdle|enumerator|kUART_RxIdle, /* RX idle. */
DECL|kUART_RxParityError|enumerator|kUART_RxParityError /* Rx parity error */
DECL|kUART_TxBusy|enumerator|kUART_TxBusy, /* TX busy. */
DECL|kUART_TxIdle|enumerator|kUART_TxIdle, /* TX idle. */
DECL|s_uartBases|variable|s_uartBases
DECL|s_uartClock|variable|s_uartClock
DECL|s_uartHandle|variable|s_uartHandle
DECL|s_uartIRQ|variable|s_uartIRQ
DECL|s_uartIsr|variable|s_uartIsr
DECL|uart_isr_t|typedef|typedef void (*uart_isr_t)(UART_Type *base, uart_handle_t *handle);
