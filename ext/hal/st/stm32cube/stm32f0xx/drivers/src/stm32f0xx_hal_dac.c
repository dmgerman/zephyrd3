DECL|HAL_DAC_ConfigChannel|function|__weak HAL_StatusTypeDef HAL_DAC_ConfigChannel(DAC_HandleTypeDef* hdac, DAC_ChannelConfTypeDef* sConfig, uint32_t Channel)
DECL|HAL_DAC_ConvCpltCallbackCh1|function|__weak void HAL_DAC_ConvCpltCallbackCh1(DAC_HandleTypeDef* hdac)
DECL|HAL_DAC_ConvHalfCpltCallbackCh1|function|__weak void HAL_DAC_ConvHalfCpltCallbackCh1(DAC_HandleTypeDef* hdac)
DECL|HAL_DAC_DMAUnderrunCallbackCh1|function|__weak void HAL_DAC_DMAUnderrunCallbackCh1(DAC_HandleTypeDef *hdac)
DECL|HAL_DAC_DeInit|function|HAL_StatusTypeDef HAL_DAC_DeInit(DAC_HandleTypeDef* hdac)
DECL|HAL_DAC_ErrorCallbackCh1|function|__weak void HAL_DAC_ErrorCallbackCh1(DAC_HandleTypeDef *hdac)
DECL|HAL_DAC_GetError|function|uint32_t HAL_DAC_GetError(DAC_HandleTypeDef *hdac)
DECL|HAL_DAC_GetState|function|HAL_DAC_StateTypeDef HAL_DAC_GetState(DAC_HandleTypeDef* hdac)
DECL|HAL_DAC_GetValue|function|__weak uint32_t HAL_DAC_GetValue(DAC_HandleTypeDef* hdac, uint32_t Channel)
DECL|HAL_DAC_IRQHandler|function|__weak void HAL_DAC_IRQHandler(DAC_HandleTypeDef* hdac)
DECL|HAL_DAC_Init|function|HAL_StatusTypeDef HAL_DAC_Init(DAC_HandleTypeDef* hdac)
DECL|HAL_DAC_MspDeInit|function|__weak void HAL_DAC_MspDeInit(DAC_HandleTypeDef* hdac)
DECL|HAL_DAC_MspInit|function|__weak void HAL_DAC_MspInit(DAC_HandleTypeDef* hdac)
DECL|HAL_DAC_SetValue|function|HAL_StatusTypeDef HAL_DAC_SetValue(DAC_HandleTypeDef* hdac, uint32_t Channel, uint32_t Alignment, uint32_t Data)
DECL|HAL_DAC_Start_DMA|function|__weak HAL_StatusTypeDef HAL_DAC_Start_DMA(DAC_HandleTypeDef* hdac, uint32_t Channel, uint32_t* pData, uint32_t Length, uint32_t Alignment)
DECL|HAL_DAC_Start|function|__weak HAL_StatusTypeDef HAL_DAC_Start(DAC_HandleTypeDef* hdac, uint32_t Channel)
DECL|HAL_DAC_Stop_DMA|function|HAL_StatusTypeDef HAL_DAC_Stop_DMA(DAC_HandleTypeDef* hdac, uint32_t Channel)
DECL|HAL_DAC_Stop|function|HAL_StatusTypeDef HAL_DAC_Stop(DAC_HandleTypeDef* hdac, uint32_t Channel)
