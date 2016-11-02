DECL|DMA_Base_Registers|typedef|} DMA_Base_Registers;
DECL|DMA_CalcBaseAndBitshift|function|static uint32_t DMA_CalcBaseAndBitshift(DMA_HandleTypeDef *hdma)
DECL|DMA_CheckFifoParam|function|static HAL_StatusTypeDef DMA_CheckFifoParam(DMA_HandleTypeDef *hdma)
DECL|DMA_SetConfig|function|static void DMA_SetConfig(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength)
DECL|HAL_DMA_Abort_IT|function|HAL_StatusTypeDef HAL_DMA_Abort_IT(DMA_HandleTypeDef *hdma)
DECL|HAL_DMA_Abort|function|HAL_StatusTypeDef HAL_DMA_Abort(DMA_HandleTypeDef *hdma)
DECL|HAL_DMA_DeInit|function|HAL_StatusTypeDef HAL_DMA_DeInit(DMA_HandleTypeDef *hdma)
DECL|HAL_DMA_GetError|function|uint32_t HAL_DMA_GetError(DMA_HandleTypeDef *hdma)
DECL|HAL_DMA_GetState|function|HAL_DMA_StateTypeDef HAL_DMA_GetState(DMA_HandleTypeDef *hdma)
DECL|HAL_DMA_IRQHandler|function|void HAL_DMA_IRQHandler(DMA_HandleTypeDef *hdma)
DECL|HAL_DMA_Init|function|HAL_StatusTypeDef HAL_DMA_Init(DMA_HandleTypeDef *hdma)
DECL|HAL_DMA_PollForTransfer|function|HAL_StatusTypeDef HAL_DMA_PollForTransfer(DMA_HandleTypeDef *hdma, HAL_DMA_LevelCompleteTypeDef CompleteLevel, uint32_t Timeout)
DECL|HAL_DMA_RegisterCallback|function|HAL_StatusTypeDef HAL_DMA_RegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID, void (* pCallback)(DMA_HandleTypeDef *_hdma))
DECL|HAL_DMA_Start_IT|function|HAL_StatusTypeDef HAL_DMA_Start_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength)
DECL|HAL_DMA_Start|function|HAL_StatusTypeDef HAL_DMA_Start(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength)
DECL|HAL_DMA_UnRegisterCallback|function|HAL_StatusTypeDef HAL_DMA_UnRegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID)
DECL|HAL_TIMEOUT_DMA_ABORT|macro|HAL_TIMEOUT_DMA_ABORT
DECL|IFCR|member|__IO uint32_t IFCR; /*!< DMA interrupt flag clear register */
DECL|ISR|member|__IO uint32_t ISR; /*!< DMA interrupt status register */
DECL|Reserved0|member|__IO uint32_t Reserved0;
