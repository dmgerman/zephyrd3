DECL|HAL_HalfDuplex_EnableReceiver|function|HAL_StatusTypeDef HAL_HalfDuplex_EnableReceiver(UART_HandleTypeDef *huart)
DECL|HAL_HalfDuplex_EnableTransmitter|function|HAL_StatusTypeDef HAL_HalfDuplex_EnableTransmitter(UART_HandleTypeDef *huart)
DECL|HAL_HalfDuplex_Init|function|HAL_StatusTypeDef HAL_HalfDuplex_Init(UART_HandleTypeDef *huart)
DECL|HAL_LIN_Init|function|HAL_StatusTypeDef HAL_LIN_Init(UART_HandleTypeDef *huart, uint32_t BreakDetectLength)
DECL|HAL_LIN_SendBreak|function|HAL_StatusTypeDef HAL_LIN_SendBreak(UART_HandleTypeDef *huart)
DECL|HAL_MultiProcessor_DisableMuteMode|function|HAL_StatusTypeDef HAL_MultiProcessor_DisableMuteMode(UART_HandleTypeDef *huart)
DECL|HAL_MultiProcessor_EnableMuteMode|function|HAL_StatusTypeDef HAL_MultiProcessor_EnableMuteMode(UART_HandleTypeDef *huart)
DECL|HAL_MultiProcessor_EnterMuteMode|function|void HAL_MultiProcessor_EnterMuteMode(UART_HandleTypeDef *huart)
DECL|HAL_MultiProcessor_Init|function|HAL_StatusTypeDef HAL_MultiProcessor_Init(UART_HandleTypeDef *huart, uint8_t Address, uint32_t WakeUpMethod)
DECL|HAL_UART_AbortCpltCallback|function|__weak void HAL_UART_AbortCpltCallback (UART_HandleTypeDef *huart)
DECL|HAL_UART_AbortReceiveCpltCallback|function|__weak void HAL_UART_AbortReceiveCpltCallback (UART_HandleTypeDef *huart)
DECL|HAL_UART_AbortReceive_IT|function|HAL_StatusTypeDef HAL_UART_AbortReceive_IT(UART_HandleTypeDef *huart)
DECL|HAL_UART_AbortReceive|function|HAL_StatusTypeDef HAL_UART_AbortReceive(UART_HandleTypeDef *huart)
DECL|HAL_UART_AbortTransmitCpltCallback|function|__weak void HAL_UART_AbortTransmitCpltCallback (UART_HandleTypeDef *huart)
DECL|HAL_UART_AbortTransmit_IT|function|HAL_StatusTypeDef HAL_UART_AbortTransmit_IT(UART_HandleTypeDef *huart)
DECL|HAL_UART_AbortTransmit|function|HAL_StatusTypeDef HAL_UART_AbortTransmit(UART_HandleTypeDef *huart)
DECL|HAL_UART_Abort_IT|function|HAL_StatusTypeDef HAL_UART_Abort_IT(UART_HandleTypeDef *huart)
DECL|HAL_UART_Abort|function|HAL_StatusTypeDef HAL_UART_Abort(UART_HandleTypeDef *huart)
DECL|HAL_UART_DMAPause|function|HAL_StatusTypeDef HAL_UART_DMAPause(UART_HandleTypeDef *huart)
DECL|HAL_UART_DMAResume|function|HAL_StatusTypeDef HAL_UART_DMAResume(UART_HandleTypeDef *huart)
DECL|HAL_UART_DMAStop|function|HAL_StatusTypeDef HAL_UART_DMAStop(UART_HandleTypeDef *huart)
DECL|HAL_UART_DeInit|function|HAL_StatusTypeDef HAL_UART_DeInit(UART_HandleTypeDef *huart)
DECL|HAL_UART_ErrorCallback|function|__weak void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)
DECL|HAL_UART_GetError|function|uint32_t HAL_UART_GetError(UART_HandleTypeDef *huart)
DECL|HAL_UART_GetState|function|HAL_UART_StateTypeDef HAL_UART_GetState(UART_HandleTypeDef *huart)
DECL|HAL_UART_IRQHandler|function|void HAL_UART_IRQHandler(UART_HandleTypeDef *huart)
DECL|HAL_UART_Init|function|HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart)
DECL|HAL_UART_MspDeInit|function|__weak void HAL_UART_MspDeInit(UART_HandleTypeDef *huart)
DECL|HAL_UART_MspInit|function|__weak void HAL_UART_MspInit(UART_HandleTypeDef *huart)
DECL|HAL_UART_Receive_DMA|function|HAL_StatusTypeDef HAL_UART_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
DECL|HAL_UART_Receive_IT|function|HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
DECL|HAL_UART_Receive|function|HAL_StatusTypeDef HAL_UART_Receive(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_UART_RxCpltCallback|function|__weak void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
DECL|HAL_UART_RxHalfCpltCallback|function|__weak void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart)
DECL|HAL_UART_Transmit_DMA|function|HAL_StatusTypeDef HAL_UART_Transmit_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
DECL|HAL_UART_Transmit_IT|function|HAL_StatusTypeDef HAL_UART_Transmit_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
DECL|HAL_UART_Transmit|function|HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_UART_TxCpltCallback|function|__weak void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
DECL|HAL_UART_TxHalfCpltCallback|function|__weak void HAL_UART_TxHalfCpltCallback(UART_HandleTypeDef *huart)
DECL|UART_AdvFeatureConfig|function|void UART_AdvFeatureConfig(UART_HandleTypeDef *huart)
DECL|UART_CR1_FIELDS|macro|UART_CR1_FIELDS
DECL|UART_CheckIdleState|function|HAL_StatusTypeDef UART_CheckIdleState(UART_HandleTypeDef *huart)
DECL|UART_DMAAbortOnError|function|static void UART_DMAAbortOnError(DMA_HandleTypeDef *hdma)
DECL|UART_DMAError|function|static void UART_DMAError(DMA_HandleTypeDef *hdma)
DECL|UART_DMAReceiveCplt|function|static void UART_DMAReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|UART_DMARxAbortCallback|function|static void UART_DMARxAbortCallback(DMA_HandleTypeDef *hdma)
DECL|UART_DMARxHalfCplt|function|static void UART_DMARxHalfCplt(DMA_HandleTypeDef *hdma)
DECL|UART_DMARxOnlyAbortCallback|function|static void UART_DMARxOnlyAbortCallback(DMA_HandleTypeDef *hdma)
DECL|UART_DMATransmitCplt|function|static void UART_DMATransmitCplt(DMA_HandleTypeDef *hdma)
DECL|UART_DMATxAbortCallback|function|static void UART_DMATxAbortCallback(DMA_HandleTypeDef *hdma)
DECL|UART_DMATxHalfCplt|function|static void UART_DMATxHalfCplt(DMA_HandleTypeDef *hdma)
DECL|UART_DMATxOnlyAbortCallback|function|static void UART_DMATxOnlyAbortCallback(DMA_HandleTypeDef *hdma)
DECL|UART_EndRxTransfer|function|static void UART_EndRxTransfer(UART_HandleTypeDef *huart)
DECL|UART_EndTransmit_IT|function|HAL_StatusTypeDef UART_EndTransmit_IT(UART_HandleTypeDef *huart)
DECL|UART_EndTxTransfer|function|static void UART_EndTxTransfer(UART_HandleTypeDef *huart)
DECL|UART_Receive_IT|function|HAL_StatusTypeDef UART_Receive_IT(UART_HandleTypeDef *huart)
DECL|UART_SetConfig|function|HAL_StatusTypeDef UART_SetConfig(UART_HandleTypeDef *huart)
DECL|UART_Transmit_IT|function|HAL_StatusTypeDef UART_Transmit_IT(UART_HandleTypeDef *huart)
DECL|UART_WaitOnFlagUntilTimeout|function|HAL_StatusTypeDef UART_WaitOnFlagUntilTimeout(UART_HandleTypeDef *huart, uint32_t Flag, FlagStatus Status, uint32_t Tickstart, uint32_t Timeout)
DECL|UART_Wakeup_AddressConfig|function|void UART_Wakeup_AddressConfig(UART_HandleTypeDef *huart, UART_WakeUpTypeDef WakeUpSelection)
