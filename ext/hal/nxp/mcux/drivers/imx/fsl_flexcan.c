DECL|ADMA_FLEXCAN0_INT_DriverIRQHandler|function|void ADMA_FLEXCAN0_INT_DriverIRQHandler(void)
DECL|ADMA_FLEXCAN1_INT_DriverIRQHandler|function|void ADMA_FLEXCAN1_INT_DriverIRQHandler(void)
DECL|ADMA_FLEXCAN2_INT_DriverIRQHandler|function|void ADMA_FLEXCAN2_INT_DriverIRQHandler(void)
DECL|CAN0_DriverIRQHandler|function|void CAN0_DriverIRQHandler(void)
DECL|CAN1_DriverIRQHandler|function|void CAN1_DriverIRQHandler(void)
DECL|CAN2_DriverIRQHandler|function|void CAN2_DriverIRQHandler(void)
DECL|CAN3_DriverIRQHandler|function|void CAN3_DriverIRQHandler(void)
DECL|CAN4_DriverIRQHandler|function|void CAN4_DriverIRQHandler(void)
DECL|DMA_FLEXCAN0_INT_DriverIRQHandler|function|void DMA_FLEXCAN0_INT_DriverIRQHandler(void)
DECL|DMA_FLEXCAN1_INT_DriverIRQHandler|function|void DMA_FLEXCAN1_INT_DriverIRQHandler(void)
DECL|DMA_FLEXCAN2_INT_DriverIRQHandler|function|void DMA_FLEXCAN2_INT_DriverIRQHandler(void)
DECL|FLEXCAN_Deinit|function|void FLEXCAN_Deinit(CAN_Type *base)
DECL|FLEXCAN_EnableRxFifoDMA|function|void FLEXCAN_EnableRxFifoDMA(CAN_Type *base, bool enable)
DECL|FLEXCAN_EnterFreezeMode|function|static void FLEXCAN_EnterFreezeMode(CAN_Type *base)
DECL|FLEXCAN_ExitFreezeMode|function|static void FLEXCAN_ExitFreezeMode(CAN_Type *base)
DECL|FLEXCAN_FDInit|function|void FLEXCAN_FDInit(CAN_Type *base, const flexcan_config_t *config, uint32_t sourceClock_Hz, flexcan_mb_size_t dataSize, bool brs)
DECL|FLEXCAN_GetDefaultConfig|function|void FLEXCAN_GetDefaultConfig(flexcan_config_t *config)
DECL|FLEXCAN_GetFDMailboxOffset|function|static uint32_t FLEXCAN_GetFDMailboxOffset(CAN_Type *base, uint8_t mbIdx)
DECL|FLEXCAN_GetFirstValidMb|function|static uint32_t FLEXCAN_GetFirstValidMb(CAN_Type *base)
DECL|FLEXCAN_GetInstance|function|uint32_t FLEXCAN_GetInstance(CAN_Type *base)
DECL|FLEXCAN_Init|function|void FLEXCAN_Init(CAN_Type *base, const flexcan_config_t *config, uint32_t sourceClock_Hz)
DECL|FLEXCAN_IsMbIntEnabled|function|static bool FLEXCAN_IsMbIntEnabled(CAN_Type *base, uint8_t mbIdx)
DECL|FLEXCAN_IsMbOccupied|function|static bool FLEXCAN_IsMbOccupied(CAN_Type *base, uint8_t mbIdx)
DECL|FLEXCAN_ReadFDRxMb|function|status_t FLEXCAN_ReadFDRxMb(CAN_Type *base, uint8_t mbIdx, flexcan_fd_frame_t *rxFrame)
DECL|FLEXCAN_ReadRxFifo|function|status_t FLEXCAN_ReadRxFifo(CAN_Type *base, flexcan_frame_t *rxFrame)
DECL|FLEXCAN_ReadRxMb|function|status_t FLEXCAN_ReadRxMb(CAN_Type *base, uint8_t mbIdx, flexcan_frame_t *rxFrame)
DECL|FLEXCAN_Reset|function|static void FLEXCAN_Reset(CAN_Type *base)
DECL|FLEXCAN_SetBaudRate|function|static void FLEXCAN_SetBaudRate(CAN_Type *base, uint32_t sourceClock_Hz, uint32_t baudRate_Bps, flexcan_timing_config_t timingConfig)
DECL|FLEXCAN_SetFDBaudRate|function|static void FLEXCAN_SetFDBaudRate(CAN_Type *base, uint32_t sourceClock_Hz, uint32_t baudRateFD_Bps, flexcan_timing_config_t timingConfig)
DECL|FLEXCAN_SetFDRxMbConfig|function|void FLEXCAN_SetFDRxMbConfig(CAN_Type *base, uint8_t mbIdx, const flexcan_rx_mb_config_t *config, bool enable)
DECL|FLEXCAN_SetFDTimingConfig|function|void FLEXCAN_SetFDTimingConfig(CAN_Type *base, const flexcan_timing_config_t *config)
DECL|FLEXCAN_SetFDTxMbConfig|function|void FLEXCAN_SetFDTxMbConfig(CAN_Type *base, uint8_t mbIdx, bool enable)
DECL|FLEXCAN_SetRxFifoConfig|function|void FLEXCAN_SetRxFifoConfig(CAN_Type *base, const flexcan_rx_fifo_config_t *config, bool enable)
DECL|FLEXCAN_SetRxFifoGlobalMask|function|void FLEXCAN_SetRxFifoGlobalMask(CAN_Type *base, uint32_t mask)
DECL|FLEXCAN_SetRxIndividualMask|function|void FLEXCAN_SetRxIndividualMask(CAN_Type *base, uint8_t maskIdx, uint32_t mask)
DECL|FLEXCAN_SetRxMbConfig|function|void FLEXCAN_SetRxMbConfig(CAN_Type *base, uint8_t mbIdx, const flexcan_rx_mb_config_t *config, bool enable)
DECL|FLEXCAN_SetRxMbGlobalMask|function|void FLEXCAN_SetRxMbGlobalMask(CAN_Type *base, uint32_t mask)
DECL|FLEXCAN_SetTimingConfig|function|void FLEXCAN_SetTimingConfig(CAN_Type *base, const flexcan_timing_config_t *config)
DECL|FLEXCAN_SetTxMbConfig|function|void FLEXCAN_SetTxMbConfig(CAN_Type *base, uint8_t mbIdx, bool enable)
DECL|FLEXCAN_TransferAbortReceiveFifo|function|void FLEXCAN_TransferAbortReceiveFifo(CAN_Type *base, flexcan_handle_t *handle)
DECL|FLEXCAN_TransferAbortReceive|function|void FLEXCAN_TransferAbortReceive(CAN_Type *base, flexcan_handle_t *handle, uint8_t mbIdx)
DECL|FLEXCAN_TransferAbortSend|function|void FLEXCAN_TransferAbortSend(CAN_Type *base, flexcan_handle_t *handle, uint8_t mbIdx)
DECL|FLEXCAN_TransferCreateHandle|function|void FLEXCAN_TransferCreateHandle(CAN_Type *base, flexcan_handle_t *handle, flexcan_transfer_callback_t callback, void *userData)
DECL|FLEXCAN_TransferFDAbortReceive|function|void FLEXCAN_TransferFDAbortReceive(CAN_Type *base, flexcan_handle_t *handle, uint8_t mbIdx)
DECL|FLEXCAN_TransferFDAbortSend|function|void FLEXCAN_TransferFDAbortSend(CAN_Type *base, flexcan_handle_t *handle, uint8_t mbIdx)
DECL|FLEXCAN_TransferFDReceiveBlocking|function|status_t FLEXCAN_TransferFDReceiveBlocking(CAN_Type *base, uint8_t mbIdx, flexcan_fd_frame_t *rxFrame)
DECL|FLEXCAN_TransferFDReceiveNonBlocking|function|status_t FLEXCAN_TransferFDReceiveNonBlocking(CAN_Type *base, flexcan_handle_t *handle, flexcan_mb_transfer_t *xfer)
DECL|FLEXCAN_TransferFDSendBlocking|function|status_t FLEXCAN_TransferFDSendBlocking(CAN_Type *base, uint8_t mbIdx, flexcan_fd_frame_t *txFrame)
DECL|FLEXCAN_TransferFDSendNonBlocking|function|status_t FLEXCAN_TransferFDSendNonBlocking(CAN_Type *base, flexcan_handle_t *handle, flexcan_mb_transfer_t *xfer)
DECL|FLEXCAN_TransferHandleIRQ|function|void FLEXCAN_TransferHandleIRQ(CAN_Type *base, flexcan_handle_t *handle)
DECL|FLEXCAN_TransferReceiveBlocking|function|status_t FLEXCAN_TransferReceiveBlocking(CAN_Type *base, uint8_t mbIdx, flexcan_frame_t *rxFrame)
DECL|FLEXCAN_TransferReceiveFifoBlocking|function|status_t FLEXCAN_TransferReceiveFifoBlocking(CAN_Type *base, flexcan_frame_t *rxFrame)
DECL|FLEXCAN_TransferReceiveFifoNonBlocking|function|status_t FLEXCAN_TransferReceiveFifoNonBlocking(CAN_Type *base, flexcan_handle_t *handle, flexcan_fifo_transfer_t *xfer)
DECL|FLEXCAN_TransferReceiveNonBlocking|function|status_t FLEXCAN_TransferReceiveNonBlocking(CAN_Type *base, flexcan_handle_t *handle, flexcan_mb_transfer_t *xfer)
DECL|FLEXCAN_TransferSendBlocking|function|status_t FLEXCAN_TransferSendBlocking(CAN_Type *base, uint8_t mbIdx, flexcan_frame_t *txFrame)
DECL|FLEXCAN_TransferSendNonBlocking|function|status_t FLEXCAN_TransferSendNonBlocking(CAN_Type *base, flexcan_handle_t *handle, flexcan_mb_transfer_t *xfer)
DECL|FLEXCAN_WriteFDTxMb|function|status_t FLEXCAN_WriteFDTxMb(CAN_Type *base, uint8_t mbIdx, const flexcan_fd_frame_t *txFrame)
DECL|FLEXCAN_WriteTxMb|function|status_t FLEXCAN_WriteTxMb(CAN_Type *base, uint8_t mbIdx, const flexcan_frame_t *txFrame)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|_flexcan_mb_code_rx|enum|enum _flexcan_mb_code_rx
DECL|_flexcan_mb_code_tx|enum|enum _flexcan_mb_code_tx
DECL|_flexcan_state|enum|enum _flexcan_state
DECL|flexcan_isr_t|typedef|typedef void (*flexcan_isr_t)(CAN_Type *base, flexcan_handle_t *handle);
DECL|kFLEXCAN_RxMbBusy|enumerator|kFLEXCAN_RxMbBusy = 0x8, /*!< FlexCAN is updating the contents of the MB.*/
DECL|kFLEXCAN_RxMbEmpty|enumerator|kFLEXCAN_RxMbEmpty = 0x4, /*!< MB is active and empty.*/
DECL|kFLEXCAN_RxMbFull|enumerator|kFLEXCAN_RxMbFull = 0x2, /*!< MB is full.*/
DECL|kFLEXCAN_RxMbInactive|enumerator|kFLEXCAN_RxMbInactive = 0x0, /*!< MB is not active.*/
DECL|kFLEXCAN_RxMbNotUsed|enumerator|kFLEXCAN_RxMbNotUsed = 0xF, /*!< Not used.*/
DECL|kFLEXCAN_RxMbOverrun|enumerator|kFLEXCAN_RxMbOverrun = 0x6, /*!< MB is overwritten into a full buffer.*/
DECL|kFLEXCAN_RxMbRanswer|enumerator|kFLEXCAN_RxMbRanswer = 0xA, /*!< A frame was configured to recognize a Remote Request Frame */
DECL|kFLEXCAN_StateIdle|enumerator|kFLEXCAN_StateIdle = 0x0, /*!< MB/RxFIFO idle.*/
DECL|kFLEXCAN_StateRxData|enumerator|kFLEXCAN_StateRxData = 0x1, /*!< MB receiving.*/
DECL|kFLEXCAN_StateRxFifo|enumerator|kFLEXCAN_StateRxFifo = 0x5, /*!< RxFIFO receiving.*/
DECL|kFLEXCAN_StateRxRemote|enumerator|kFLEXCAN_StateRxRemote = 0x2, /*!< MB receiving remote reply.*/
DECL|kFLEXCAN_StateTxData|enumerator|kFLEXCAN_StateTxData = 0x3, /*!< MB transmitting.*/
DECL|kFLEXCAN_StateTxRemote|enumerator|kFLEXCAN_StateTxRemote = 0x4, /*!< MB transmitting remote request.*/
DECL|kFLEXCAN_TxMbAbort|enumerator|kFLEXCAN_TxMbAbort = 0x9, /*!< MB is aborted.*/
DECL|kFLEXCAN_TxMbDataOrRemote|enumerator|kFLEXCAN_TxMbDataOrRemote = 0xC, /*!< MB is a TX Data Frame(when MB RTR = 0) or */
DECL|kFLEXCAN_TxMbInactive|enumerator|kFLEXCAN_TxMbInactive = 0x8, /*!< MB is not active.*/
DECL|kFLEXCAN_TxMbNotUsed|enumerator|kFLEXCAN_TxMbNotUsed = 0xF, /*!< Not used.*/
DECL|kFLEXCAN_TxMbTanswer|enumerator|kFLEXCAN_TxMbTanswer = 0xE, /*!< MB is a TX Response Request Frame from */
DECL|s_flexcanBases|variable|s_flexcanBases
DECL|s_flexcanBusOffIRQ|variable|s_flexcanBusOffIRQ
DECL|s_flexcanClock|variable|s_flexcanClock
DECL|s_flexcanErrorIRQ|variable|s_flexcanErrorIRQ
DECL|s_flexcanHandle|variable|s_flexcanHandle
DECL|s_flexcanIsr|variable|s_flexcanIsr
DECL|s_flexcanMbIRQ|variable|s_flexcanMbIRQ
DECL|s_flexcanPeriphClock|variable|s_flexcanPeriphClock
DECL|s_flexcanRxWarningIRQ|variable|s_flexcanRxWarningIRQ
DECL|s_flexcanTxWarningIRQ|variable|s_flexcanTxWarningIRQ
DECL|s_flexcanWakeUpIRQ|variable|s_flexcanWakeUpIRQ
