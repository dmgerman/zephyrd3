DECL|LPUART0_DriverIRQHandler|function|void LPUART0_DriverIRQHandler(void)
DECL|LPUART0_RX_TX_DriverIRQHandler|function|void LPUART0_RX_TX_DriverIRQHandler(void)
DECL|LPUART1_DriverIRQHandler|function|void LPUART1_DriverIRQHandler(void)
DECL|LPUART1_RX_TX_DriverIRQHandler|function|void LPUART1_RX_TX_DriverIRQHandler(void)
DECL|LPUART2_DriverIRQHandler|function|void LPUART2_DriverIRQHandler(void)
DECL|LPUART2_RX_TX_DriverIRQHandler|function|void LPUART2_RX_TX_DriverIRQHandler(void)
DECL|LPUART3_DriverIRQHandler|function|void LPUART3_DriverIRQHandler(void)
DECL|LPUART3_RX_TX_DriverIRQHandler|function|void LPUART3_RX_TX_DriverIRQHandler(void)
DECL|LPUART4_DriverIRQHandler|function|void LPUART4_DriverIRQHandler(void)
DECL|LPUART4_RX_TX_DriverIRQHandler|function|void LPUART4_RX_TX_DriverIRQHandler(void)
DECL|LPUART5_DriverIRQHandler|function|void LPUART5_DriverIRQHandler(void)
DECL|LPUART5_RX_TX_DriverIRQHandler|function|void LPUART5_RX_TX_DriverIRQHandler(void)
DECL|LPUART_ClearStatusFlags|function|status_t LPUART_ClearStatusFlags(LPUART_Type *base, uint32_t mask)
DECL|LPUART_Deinit|function|void LPUART_Deinit(LPUART_Type *base)
DECL|LPUART_DisableInterrupts|function|void LPUART_DisableInterrupts(LPUART_Type *base, uint32_t mask)
DECL|LPUART_EnableInterrupts|function|void LPUART_EnableInterrupts(LPUART_Type *base, uint32_t mask)
DECL|LPUART_GetDefaultConfig|function|void LPUART_GetDefaultConfig(lpuart_config_t *config)
DECL|LPUART_GetEnabledInterrupts|function|uint32_t LPUART_GetEnabledInterrupts(LPUART_Type *base)
DECL|LPUART_GetInstance|function|uint32_t LPUART_GetInstance(LPUART_Type *base)
DECL|LPUART_GetStatusFlags|function|uint32_t LPUART_GetStatusFlags(LPUART_Type *base)
DECL|LPUART_Init|function|void LPUART_Init(LPUART_Type *base, const lpuart_config_t *config, uint32_t srcClock_Hz)
DECL|LPUART_ReadBlocking|function|status_t LPUART_ReadBlocking(LPUART_Type *base, uint8_t *data, size_t length)
DECL|LPUART_ReadNonBlocking|function|static void LPUART_ReadNonBlocking(LPUART_Type *base, uint8_t *data, size_t length)
DECL|LPUART_SetBaudRate|function|void LPUART_SetBaudRate(LPUART_Type *base, uint32_t baudRate_Bps, uint32_t srcClock_Hz)
DECL|LPUART_TransferAbortReceive|function|void LPUART_TransferAbortReceive(LPUART_Type *base, lpuart_handle_t *handle)
DECL|LPUART_TransferAbortSend|function|void LPUART_TransferAbortSend(LPUART_Type *base, lpuart_handle_t *handle)
DECL|LPUART_TransferCreateHandle|function|void LPUART_TransferCreateHandle(LPUART_Type *base, lpuart_handle_t *handle, lpuart_transfer_callback_t callback, void *userData)
DECL|LPUART_TransferGetReceiveCount|function|status_t LPUART_TransferGetReceiveCount(LPUART_Type *base, lpuart_handle_t *handle, uint32_t *count)
DECL|LPUART_TransferGetRxRingBufferLength|function|static size_t LPUART_TransferGetRxRingBufferLength(LPUART_Type *base, lpuart_handle_t *handle)
DECL|LPUART_TransferGetSendCount|function|status_t LPUART_TransferGetSendCount(LPUART_Type *base, lpuart_handle_t *handle, uint32_t *count)
DECL|LPUART_TransferHandleErrorIRQ|function|void LPUART_TransferHandleErrorIRQ(LPUART_Type *base, lpuart_handle_t *handle)
DECL|LPUART_TransferHandleIRQ|function|void LPUART_TransferHandleIRQ(LPUART_Type *base, lpuart_handle_t *handle)
DECL|LPUART_TransferIsRxRingBufferFull|function|static bool LPUART_TransferIsRxRingBufferFull(LPUART_Type *base, lpuart_handle_t *handle)
DECL|LPUART_TransferReceiveNonBlocking|function|status_t LPUART_TransferReceiveNonBlocking(LPUART_Type *base, lpuart_handle_t *handle, lpuart_transfer_t *xfer, size_t *receivedBytes)
DECL|LPUART_TransferSendNonBlocking|function|status_t LPUART_TransferSendNonBlocking(LPUART_Type *base, lpuart_handle_t *handle, lpuart_transfer_t *xfer)
DECL|LPUART_TransferStartRingBuffer|function|void LPUART_TransferStartRingBuffer(LPUART_Type *base, lpuart_handle_t *handle, uint8_t *ringBuffer, size_t ringBufferSize)
DECL|LPUART_TransferStopRingBuffer|function|void LPUART_TransferStopRingBuffer(LPUART_Type *base, lpuart_handle_t *handle)
DECL|LPUART_WriteBlocking|function|void LPUART_WriteBlocking(LPUART_Type *base, const uint8_t *data, size_t length)
DECL|LPUART_WriteNonBlocking|function|static void LPUART_WriteNonBlocking(LPUART_Type *base, const uint8_t *data, size_t length)
DECL|_lpuart_transfer_states|enum|enum _lpuart_transfer_states
DECL|kLPUART_RxBusy|enumerator|kLPUART_RxBusy /*!< RX busy. */
DECL|kLPUART_RxIdle|enumerator|kLPUART_RxIdle, /*!< RX idle. */
DECL|kLPUART_TxBusy|enumerator|kLPUART_TxBusy, /*!< TX busy. */
DECL|kLPUART_TxIdle|enumerator|kLPUART_TxIdle, /*!< TX idle. */
DECL|lpuart_isr_t|typedef|typedef void (*lpuart_isr_t)(LPUART_Type *base, lpuart_handle_t *handle);
DECL|s_lpuartBases|variable|s_lpuartBases
DECL|s_lpuartClock|variable|s_lpuartClock
DECL|s_lpuartHandle|variable|s_lpuartHandle
DECL|s_lpuartIRQ|variable|s_lpuartIRQ
DECL|s_lpuartIsr|variable|s_lpuartIsr
