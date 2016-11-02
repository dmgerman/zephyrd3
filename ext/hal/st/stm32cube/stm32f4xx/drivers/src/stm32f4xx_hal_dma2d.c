DECL|DMA2D_POSITION_AMTCR_DT|macro|DMA2D_POSITION_AMTCR_DT
DECL|DMA2D_POSITION_BGPFCCR_ALPHA|macro|DMA2D_POSITION_BGPFCCR_ALPHA
DECL|DMA2D_POSITION_BGPFCCR_AM|macro|DMA2D_POSITION_BGPFCCR_AM
DECL|DMA2D_POSITION_BGPFCCR_CCM|macro|DMA2D_POSITION_BGPFCCR_CCM
DECL|DMA2D_POSITION_BGPFCCR_CS|macro|DMA2D_POSITION_BGPFCCR_CS
DECL|DMA2D_POSITION_FGPFCCR_ALPHA|macro|DMA2D_POSITION_FGPFCCR_ALPHA
DECL|DMA2D_POSITION_FGPFCCR_AM|macro|DMA2D_POSITION_FGPFCCR_AM
DECL|DMA2D_POSITION_FGPFCCR_CCM|macro|DMA2D_POSITION_FGPFCCR_CCM
DECL|DMA2D_POSITION_FGPFCCR_CS|macro|DMA2D_POSITION_FGPFCCR_CS
DECL|DMA2D_POSITION_NLR_PL|macro|DMA2D_POSITION_NLR_PL
DECL|DMA2D_SetConfig|function|static void DMA2D_SetConfig(DMA2D_HandleTypeDef *hdma2d, uint32_t pdata, uint32_t DstAddress, uint32_t Width, uint32_t Height)
DECL|DMA2D_TIMEOUT_ABORT|macro|DMA2D_TIMEOUT_ABORT
DECL|DMA2D_TIMEOUT_SUSPEND|macro|DMA2D_TIMEOUT_SUSPEND
DECL|HAL_DMA2D_Abort|function|HAL_StatusTypeDef HAL_DMA2D_Abort(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_BlendingStart_IT|function|HAL_StatusTypeDef HAL_DMA2D_BlendingStart_IT(DMA2D_HandleTypeDef *hdma2d, uint32_t SrcAddress1, uint32_t SrcAddress2, uint32_t DstAddress, uint32_t Width, uint32_t Height)
DECL|HAL_DMA2D_BlendingStart|function|HAL_StatusTypeDef HAL_DMA2D_BlendingStart(DMA2D_HandleTypeDef *hdma2d, uint32_t SrcAddress1, uint32_t SrcAddress2, uint32_t DstAddress, uint32_t Width, uint32_t Height)
DECL|HAL_DMA2D_CLUTLoad_IT|function|HAL_StatusTypeDef HAL_DMA2D_CLUTLoad_IT(DMA2D_HandleTypeDef *hdma2d, DMA2D_CLUTCfgTypeDef CLUTCfg, uint32_t LayerIdx)
DECL|HAL_DMA2D_CLUTLoadingCpltCallback|function|__weak void HAL_DMA2D_CLUTLoadingCpltCallback(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_CLUTLoading_Abort|function|HAL_StatusTypeDef HAL_DMA2D_CLUTLoading_Abort(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx)
DECL|HAL_DMA2D_CLUTLoading_Resume|function|HAL_StatusTypeDef HAL_DMA2D_CLUTLoading_Resume(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx)
DECL|HAL_DMA2D_CLUTLoading_Suspend|function|HAL_StatusTypeDef HAL_DMA2D_CLUTLoading_Suspend(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx)
DECL|HAL_DMA2D_CLUTLoad|function|HAL_StatusTypeDef HAL_DMA2D_CLUTLoad(DMA2D_HandleTypeDef *hdma2d, DMA2D_CLUTCfgTypeDef CLUTCfg, uint32_t LayerIdx)
DECL|HAL_DMA2D_ConfigCLUT|function|HAL_StatusTypeDef HAL_DMA2D_ConfigCLUT(DMA2D_HandleTypeDef *hdma2d, DMA2D_CLUTCfgTypeDef CLUTCfg, uint32_t LayerIdx)
DECL|HAL_DMA2D_ConfigDeadTime|function|HAL_StatusTypeDef HAL_DMA2D_ConfigDeadTime(DMA2D_HandleTypeDef *hdma2d, uint8_t DeadTime)
DECL|HAL_DMA2D_ConfigLayer|function|HAL_StatusTypeDef HAL_DMA2D_ConfigLayer(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx)
DECL|HAL_DMA2D_DeInit|function|HAL_StatusTypeDef HAL_DMA2D_DeInit(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_DisableDeadTime|function|HAL_StatusTypeDef HAL_DMA2D_DisableDeadTime(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_EnableCLUT|function|HAL_StatusTypeDef HAL_DMA2D_EnableCLUT(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx)
DECL|HAL_DMA2D_EnableDeadTime|function|HAL_StatusTypeDef HAL_DMA2D_EnableDeadTime(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_GetError|function|uint32_t HAL_DMA2D_GetError(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_GetState|function|HAL_DMA2D_StateTypeDef HAL_DMA2D_GetState(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_IRQHandler|function|void HAL_DMA2D_IRQHandler(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_Init|function|HAL_StatusTypeDef HAL_DMA2D_Init(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_LineEventCallback|function|__weak void HAL_DMA2D_LineEventCallback(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_MspDeInit|function|__weak void HAL_DMA2D_MspDeInit(DMA2D_HandleTypeDef* hdma2d)
DECL|HAL_DMA2D_MspInit|function|__weak void HAL_DMA2D_MspInit(DMA2D_HandleTypeDef* hdma2d)
DECL|HAL_DMA2D_PollForTransfer|function|HAL_StatusTypeDef HAL_DMA2D_PollForTransfer(DMA2D_HandleTypeDef *hdma2d, uint32_t Timeout)
DECL|HAL_DMA2D_ProgramLineEvent|function|HAL_StatusTypeDef HAL_DMA2D_ProgramLineEvent(DMA2D_HandleTypeDef *hdma2d, uint32_t Line)
DECL|HAL_DMA2D_Resume|function|HAL_StatusTypeDef HAL_DMA2D_Resume(DMA2D_HandleTypeDef *hdma2d)
DECL|HAL_DMA2D_Start_IT|function|HAL_StatusTypeDef HAL_DMA2D_Start_IT(DMA2D_HandleTypeDef *hdma2d, uint32_t pdata, uint32_t DstAddress, uint32_t Width, uint32_t Height)
DECL|HAL_DMA2D_Start|function|HAL_StatusTypeDef HAL_DMA2D_Start(DMA2D_HandleTypeDef *hdma2d, uint32_t pdata, uint32_t DstAddress, uint32_t Width, uint32_t Height)
DECL|HAL_DMA2D_Suspend|function|HAL_StatusTypeDef HAL_DMA2D_Suspend(DMA2D_HandleTypeDef *hdma2d)
