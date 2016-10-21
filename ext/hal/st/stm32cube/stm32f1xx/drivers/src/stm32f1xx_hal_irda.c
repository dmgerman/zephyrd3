DECL|HAL_IRDA_DMAPause|function|HAL_StatusTypeDef HAL_IRDA_DMAPause(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_DMAResume|function|HAL_StatusTypeDef HAL_IRDA_DMAResume(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_DMAStop|function|HAL_StatusTypeDef HAL_IRDA_DMAStop(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_DeInit|function|HAL_StatusTypeDef HAL_IRDA_DeInit(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_ErrorCallback|function|__weak void HAL_IRDA_ErrorCallback(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_GetError|function|uint32_t HAL_IRDA_GetError(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_GetState|function|HAL_IRDA_StateTypeDef HAL_IRDA_GetState(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_IRQHandler|function|void HAL_IRDA_IRQHandler(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_Init|function|HAL_StatusTypeDef HAL_IRDA_Init(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_MspDeInit|function|__weak void HAL_IRDA_MspDeInit(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_MspInit|function|__weak void HAL_IRDA_MspInit(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_Receive_DMA|function|HAL_StatusTypeDef HAL_IRDA_Receive_DMA(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size)
DECL|HAL_IRDA_Receive_IT|function|HAL_StatusTypeDef HAL_IRDA_Receive_IT(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size)
DECL|HAL_IRDA_Receive|function|HAL_StatusTypeDef HAL_IRDA_Receive(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_IRDA_RxCpltCallback|function|__weak void HAL_IRDA_RxCpltCallback(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_RxHalfCpltCallback|function|__weak void HAL_IRDA_RxHalfCpltCallback(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_Transmit_DMA|function|HAL_StatusTypeDef HAL_IRDA_Transmit_DMA(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size)
DECL|HAL_IRDA_Transmit_IT|function|HAL_StatusTypeDef HAL_IRDA_Transmit_IT(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size)
DECL|HAL_IRDA_Transmit|function|HAL_StatusTypeDef HAL_IRDA_Transmit(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_IRDA_TxCpltCallback|function|__weak void HAL_IRDA_TxCpltCallback(IRDA_HandleTypeDef *hirda)
DECL|HAL_IRDA_TxHalfCpltCallback|function|__weak void HAL_IRDA_TxHalfCpltCallback(IRDA_HandleTypeDef *hirda)
DECL|IRDA_DMAError|function|static void IRDA_DMAError(DMA_HandleTypeDef *hdma)
DECL|IRDA_DMAReceiveCplt|function|static void IRDA_DMAReceiveCplt(DMA_HandleTypeDef *hdma)
DECL|IRDA_DMAReceiveHalfCplt|function|static void IRDA_DMAReceiveHalfCplt(DMA_HandleTypeDef *hdma)
DECL|IRDA_DMATransmitCplt|function|static void IRDA_DMATransmitCplt(DMA_HandleTypeDef *hdma)
DECL|IRDA_DMATransmitHalfCplt|function|static void IRDA_DMATransmitHalfCplt(DMA_HandleTypeDef *hdma)
DECL|IRDA_DR_MASK_U16_8DATABITS|macro|IRDA_DR_MASK_U16_8DATABITS
DECL|IRDA_DR_MASK_U16_9DATABITS|macro|IRDA_DR_MASK_U16_9DATABITS
DECL|IRDA_DR_MASK_U8_7DATABITS|macro|IRDA_DR_MASK_U8_7DATABITS
DECL|IRDA_DR_MASK_U8_8DATABITS|macro|IRDA_DR_MASK_U8_8DATABITS
DECL|IRDA_EndTransmit_IT|function|static HAL_StatusTypeDef IRDA_EndTransmit_IT(IRDA_HandleTypeDef *hirda)
DECL|IRDA_Receive_IT|function|static HAL_StatusTypeDef IRDA_Receive_IT(IRDA_HandleTypeDef *hirda)
DECL|IRDA_SetConfig|function|static void IRDA_SetConfig(IRDA_HandleTypeDef *hirda)
DECL|IRDA_Transmit_IT|function|static HAL_StatusTypeDef IRDA_Transmit_IT(IRDA_HandleTypeDef *hirda)
DECL|IRDA_WaitOnFlagUntilTimeout|function|static HAL_StatusTypeDef IRDA_WaitOnFlagUntilTimeout(IRDA_HandleTypeDef *hirda, uint32_t Flag, FlagStatus Status, uint32_t Timeout)
