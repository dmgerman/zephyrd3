DECL|LPSCI_ClearStatusFlags|function|status_t LPSCI_ClearStatusFlags(UART0_Type *base, uint32_t mask)
DECL|LPSCI_Deinit|function|void LPSCI_Deinit(UART0_Type *base)
DECL|LPSCI_DisableInterrupts|function|void LPSCI_DisableInterrupts(UART0_Type *base, uint32_t mask)
DECL|LPSCI_EnableInterrupts|function|void LPSCI_EnableInterrupts(UART0_Type *base, uint32_t mask)
DECL|LPSCI_GetDefaultConfig|function|void LPSCI_GetDefaultConfig(lpsci_config_t *config)
DECL|LPSCI_GetEnabledInterrupts|function|uint32_t LPSCI_GetEnabledInterrupts(UART0_Type *base)
DECL|LPSCI_GetInstance|function|uint32_t LPSCI_GetInstance(UART0_Type *base)
DECL|LPSCI_GetStatusFlags|function|uint32_t LPSCI_GetStatusFlags(UART0_Type *base)
DECL|LPSCI_Init|function|status_t LPSCI_Init(UART0_Type *base, const lpsci_config_t *config, uint32_t srcClock_Hz)
DECL|LPSCI_ReadBlocking|function|status_t LPSCI_ReadBlocking(UART0_Type *base, uint8_t *data, size_t length)
DECL|LPSCI_ReadNonBlocking|function|static void LPSCI_ReadNonBlocking(UART0_Type *base, uint8_t *data, size_t length)
DECL|LPSCI_SetBaudRate|function|status_t LPSCI_SetBaudRate(UART0_Type *base, uint32_t baudRate_Bps, uint32_t srcClock_Hz)
DECL|LPSCI_TransferAbortReceive|function|void LPSCI_TransferAbortReceive(UART0_Type *base, lpsci_handle_t *handle)
DECL|LPSCI_TransferAbortSend|function|void LPSCI_TransferAbortSend(UART0_Type *base, lpsci_handle_t *handle)
DECL|LPSCI_TransferCreateHandle|function|void LPSCI_TransferCreateHandle(UART0_Type *base, lpsci_handle_t *handle, lpsci_transfer_callback_t callback, void *userData)
DECL|LPSCI_TransferGetReceiveCount|function|status_t LPSCI_TransferGetReceiveCount(UART0_Type *base, lpsci_handle_t *handle, uint32_t *count)
DECL|LPSCI_TransferGetRxRingBufferLength|function|static size_t LPSCI_TransferGetRxRingBufferLength(lpsci_handle_t *handle)
DECL|LPSCI_TransferGetSendCount|function|status_t LPSCI_TransferGetSendCount(UART0_Type *base, lpsci_handle_t *handle, uint32_t *count)
DECL|LPSCI_TransferHandleErrorIRQ|function|void LPSCI_TransferHandleErrorIRQ(UART0_Type *base, lpsci_handle_t *handle)
DECL|LPSCI_TransferHandleIRQ|function|void LPSCI_TransferHandleIRQ(UART0_Type *base, lpsci_handle_t *handle)
DECL|LPSCI_TransferIsRxRingBufferFull|function|static bool LPSCI_TransferIsRxRingBufferFull(lpsci_handle_t *handle)
DECL|LPSCI_TransferReceiveNonBlocking|function|status_t LPSCI_TransferReceiveNonBlocking(UART0_Type *base, lpsci_handle_t *handle, lpsci_transfer_t *xfer, size_t *receivedBytes)
DECL|LPSCI_TransferSendNonBlocking|function|status_t LPSCI_TransferSendNonBlocking(UART0_Type *base, lpsci_handle_t *handle, lpsci_transfer_t *xfer)
DECL|LPSCI_TransferStartRingBuffer|function|void LPSCI_TransferStartRingBuffer(UART0_Type *base, lpsci_handle_t *handle, uint8_t *ringBuffer, size_t ringBufferSize)
DECL|LPSCI_TransferStopRingBuffer|function|void LPSCI_TransferStopRingBuffer(UART0_Type *base, lpsci_handle_t *handle)
DECL|LPSCI_WriteBlocking|function|void LPSCI_WriteBlocking(UART0_Type *base, const uint8_t *data, size_t length)
DECL|LPSCI_WriteNonBlocking|function|static void LPSCI_WriteNonBlocking(UART0_Type *base, const uint8_t *data, size_t length)
DECL|UART0_DriverIRQHandler|function|void UART0_DriverIRQHandler(void)
DECL|_lpsci_tansfer_state|enum|enum _lpsci_tansfer_state
DECL|kLPSCI_RxBusy|enumerator|kLPSCI_RxBusy, /*!< RX busy. */
DECL|kLPSCI_RxFramingError|enumerator|kLPSCI_RxFramingError, /* Rx framing error */
DECL|kLPSCI_RxIdle|enumerator|kLPSCI_RxIdle, /*!< RX idle. */
DECL|kLPSCI_RxParityError|enumerator|kLPSCI_RxParityError /* Rx parity error */
DECL|kLPSCI_TxBusy|enumerator|kLPSCI_TxBusy, /*!< TX busy. */
DECL|kLPSCI_TxIdle|enumerator|kLPSCI_TxIdle, /*!< TX idle. */
DECL|lpsci_isr_t|typedef|typedef void (*lpsci_isr_t)(UART0_Type *base, lpsci_handle_t *handle);
DECL|s_lpsciBases|variable|s_lpsciBases
DECL|s_lpsciClock|variable|s_lpsciClock
DECL|s_lpsciHandle|variable|s_lpsciHandle
DECL|s_lpsciIRQ|variable|s_lpsciIRQ
DECL|s_lpsciIsr|variable|s_lpsciIsr
