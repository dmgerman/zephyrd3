DECL|HAL_SPDIFRX_CxCpltCallback|function|__weak void HAL_SPDIFRX_CxCpltCallback(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_CxHalfCpltCallback|function|__weak void HAL_SPDIFRX_CxHalfCpltCallback(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_DMAStop|function|HAL_StatusTypeDef HAL_SPDIFRX_DMAStop(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_DeInit|function|HAL_StatusTypeDef HAL_SPDIFRX_DeInit(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_ErrorCallback|function|__weak void HAL_SPDIFRX_ErrorCallback(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_GetError|function|uint32_t HAL_SPDIFRX_GetError(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_GetState|function|HAL_SPDIFRX_StateTypeDef HAL_SPDIFRX_GetState(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_IRQHandler|function|void HAL_SPDIFRX_IRQHandler(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_Init|function|HAL_StatusTypeDef HAL_SPDIFRX_Init(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_MspDeInit|function|__weak void HAL_SPDIFRX_MspDeInit(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_MspInit|function|__weak void HAL_SPDIFRX_MspInit(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_ReceiveControlFlow_DMA|function|HAL_StatusTypeDef HAL_SPDIFRX_ReceiveControlFlow_DMA(SPDIFRX_HandleTypeDef *hspdif, uint32_t *pData, uint16_t Size)
DECL|HAL_SPDIFRX_ReceiveControlFlow_IT|function|HAL_StatusTypeDef HAL_SPDIFRX_ReceiveControlFlow_IT(SPDIFRX_HandleTypeDef *hspdif, uint32_t *pData, uint16_t Size)
DECL|HAL_SPDIFRX_ReceiveControlFlow|function|HAL_StatusTypeDef HAL_SPDIFRX_ReceiveControlFlow(SPDIFRX_HandleTypeDef *hspdif, uint32_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_SPDIFRX_ReceiveDataFlow_DMA|function|HAL_StatusTypeDef HAL_SPDIFRX_ReceiveDataFlow_DMA(SPDIFRX_HandleTypeDef *hspdif, uint32_t *pData, uint16_t Size)
DECL|HAL_SPDIFRX_ReceiveDataFlow_IT|function|HAL_StatusTypeDef HAL_SPDIFRX_ReceiveDataFlow_IT(SPDIFRX_HandleTypeDef *hspdif, uint32_t *pData, uint16_t Size)
DECL|HAL_SPDIFRX_ReceiveDataFlow|function|HAL_StatusTypeDef HAL_SPDIFRX_ReceiveDataFlow(SPDIFRX_HandleTypeDef *hspdif, uint32_t *pData, uint16_t Size, uint32_t Timeout)
DECL|HAL_SPDIFRX_RxCpltCallback|function|__weak void HAL_SPDIFRX_RxCpltCallback(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_RxHalfCpltCallback|function|__weak void HAL_SPDIFRX_RxHalfCpltCallback(SPDIFRX_HandleTypeDef *hspdif)
DECL|HAL_SPDIFRX_SetDataFormat|function|HAL_StatusTypeDef HAL_SPDIFRX_SetDataFormat(SPDIFRX_HandleTypeDef *hspdif, SPDIFRX_SetDataFormatTypeDef sDataFormat)
DECL|SPDIFRX_DMACxCplt|function|static void SPDIFRX_DMACxCplt(DMA_HandleTypeDef *hdma)
DECL|SPDIFRX_DMACxHalfCplt|function|static void SPDIFRX_DMACxHalfCplt(DMA_HandleTypeDef *hdma)
DECL|SPDIFRX_DMAError|function|static void SPDIFRX_DMAError(DMA_HandleTypeDef *hdma)
DECL|SPDIFRX_DMARxCplt|function|static void SPDIFRX_DMARxCplt(DMA_HandleTypeDef *hdma)
DECL|SPDIFRX_DMARxHalfCplt|function|static void SPDIFRX_DMARxHalfCplt(DMA_HandleTypeDef *hdma)
DECL|SPDIFRX_ReceiveControlFlow_IT|function|static void SPDIFRX_ReceiveControlFlow_IT(SPDIFRX_HandleTypeDef *hspdif)
DECL|SPDIFRX_ReceiveDataFlow_IT|function|static void SPDIFRX_ReceiveDataFlow_IT(SPDIFRX_HandleTypeDef *hspdif)
DECL|SPDIFRX_TIMEOUT_VALUE|macro|SPDIFRX_TIMEOUT_VALUE
DECL|SPDIFRX_WaitOnFlagUntilTimeout|function|static HAL_StatusTypeDef SPDIFRX_WaitOnFlagUntilTimeout(SPDIFRX_HandleTypeDef *hspdif, uint32_t Flag, FlagStatus Status, uint32_t Timeout)
