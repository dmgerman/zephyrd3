DECL|HAL_SMARTCARD_AbortCpltCallback|function|__weak void HAL_SMARTCARD_AbortCpltCallback (SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_AbortReceiveCpltCallback|function|__weak void HAL_SMARTCARD_AbortReceiveCpltCallback (SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_AbortReceive_IT|function|HAL_StatusTypeDef HAL_SMARTCARD_AbortReceive_IT(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_AbortReceive|function|HAL_StatusTypeDef HAL_SMARTCARD_AbortReceive(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_AbortTransmitCpltCallback|function|__weak void HAL_SMARTCARD_AbortTransmitCpltCallback (SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_AbortTransmit_IT|function|HAL_StatusTypeDef HAL_SMARTCARD_AbortTransmit_IT(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_AbortTransmit|function|HAL_StatusTypeDef HAL_SMARTCARD_AbortTransmit(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_Abort_IT|function|HAL_StatusTypeDef HAL_SMARTCARD_Abort_IT(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_Abort|function|HAL_StatusTypeDef HAL_SMARTCARD_Abort(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_DeInit|function|HAL_StatusTypeDef HAL_SMARTCARD_DeInit(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_ErrorCallback|function|__weak void HAL_SMARTCARD_ErrorCallback(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_GetError|function|uint32_t HAL_SMARTCARD_GetError(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_GetState|function|HAL_SMARTCARD_StateTypeDef HAL_SMARTCARD_GetState(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_IRQHandler|function|void HAL_SMARTCARD_IRQHandler(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_Init|function|HAL_StatusTypeDef HAL_SMARTCARD_Init(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_MspDeInit|function|__weak void HAL_SMARTCARD_MspDeInit(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_MspInit|function|__weak void HAL_SMARTCARD_MspInit(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_Receive_DMA|function|HAL_StatusTypeDef HAL_SMARTCARD_Receive_DMA(SMARTCARD_HandleTypeDef *hsc, uint8_t *pData, uint16_t Size)
DECL|HAL_SMARTCARD_Receive_IT|function|HAL_StatusTypeDef HAL_SMARTCARD_Receive_IT(SMARTCARD_HandleTypeDef *hsc, uint8_t *pData, uint16_t Size)
DECL|HAL_SMARTCARD_Receive|function|HAL_StatusTypeDef HAL_SMARTCARD_Receive(SMARTCARD_HandleTypeDef *hsc, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_SMARTCARD_RxCpltCallback|function|__weak void HAL_SMARTCARD_RxCpltCallback(SMARTCARD_HandleTypeDef *hsc)
DECL|HAL_SMARTCARD_Transmit_DMA|function|HAL_StatusTypeDef HAL_SMARTCARD_Transmit_DMA(SMARTCARD_HandleTypeDef *hsc, uint8_t *pData, uint16_t Size)
DECL|HAL_SMARTCARD_Transmit_IT|function|HAL_StatusTypeDef HAL_SMARTCARD_Transmit_IT(SMARTCARD_HandleTypeDef *hsc, uint8_t *pData, uint16_t Size)
DECL|HAL_SMARTCARD_Transmit|function|HAL_StatusTypeDef HAL_SMARTCARD_Transmit(SMARTCARD_HandleTypeDef *hsc, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_SMARTCARD_TxCpltCallback|function|__weak void HAL_SMARTCARD_TxCpltCallback(SMARTCARD_HandleTypeDef *hsc)
DECL|SMARTCARD_DMAAbortOnError|function|static void SMARTCARD_DMAAbortOnError(DMA_HandleTypeDef *hdma)
DECL|SMARTCARD_DMAError|function|static void SMARTCARD_DMAError(DMA_HandleTypeDef *hdma)
DECL|SMARTCARD_DMAReceiveCplt|function|static void SMARTCARD_DMAReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|SMARTCARD_DMARxAbortCallback|function|static void SMARTCARD_DMARxAbortCallback(DMA_HandleTypeDef *hdma)
DECL|SMARTCARD_DMARxOnlyAbortCallback|function|static void SMARTCARD_DMARxOnlyAbortCallback(DMA_HandleTypeDef *hdma)
DECL|SMARTCARD_DMATransmitCplt|function|static void SMARTCARD_DMATransmitCplt(DMA_HandleTypeDef *hdma)
DECL|SMARTCARD_DMATxAbortCallback|function|static void SMARTCARD_DMATxAbortCallback(DMA_HandleTypeDef *hdma)
DECL|SMARTCARD_DMATxOnlyAbortCallback|function|static void SMARTCARD_DMATxOnlyAbortCallback(DMA_HandleTypeDef *hdma)
DECL|SMARTCARD_EndRxTransfer|function|static void SMARTCARD_EndRxTransfer(SMARTCARD_HandleTypeDef *hsc)
DECL|SMARTCARD_EndTransmit_IT|function|static HAL_StatusTypeDef SMARTCARD_EndTransmit_IT(SMARTCARD_HandleTypeDef *hsmartcard)
DECL|SMARTCARD_EndTxTransfer|function|static void SMARTCARD_EndTxTransfer(SMARTCARD_HandleTypeDef *hsc)
DECL|SMARTCARD_Receive_IT|function|static HAL_StatusTypeDef SMARTCARD_Receive_IT(SMARTCARD_HandleTypeDef *hsc)
DECL|SMARTCARD_SetConfig|function|static void SMARTCARD_SetConfig(SMARTCARD_HandleTypeDef *hsc)
DECL|SMARTCARD_Transmit_IT|function|static HAL_StatusTypeDef SMARTCARD_Transmit_IT(SMARTCARD_HandleTypeDef *hsc)
DECL|SMARTCARD_WaitOnFlagUntilTimeout|function|static HAL_StatusTypeDef SMARTCARD_WaitOnFlagUntilTimeout(SMARTCARD_HandleTypeDef *hsc, uint32_t Flag, FlagStatus Status, uint32_t Tickstart, uint32_t Timeout)
