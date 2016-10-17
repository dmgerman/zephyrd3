DECL|ADC_CFGR2_FIELDS|macro|ADC_CFGR2_FIELDS
DECL|ADC_CFGR_FIELDS_1|macro|ADC_CFGR_FIELDS_1
DECL|ADC_CFGR_WD_FIELDS|macro|ADC_CFGR_WD_FIELDS
DECL|ADC_CONVERSION_TIME_MAX_CPU_CYCLES|macro|ADC_CONVERSION_TIME_MAX_CPU_CYCLES
DECL|ADC_ConversionStop|function|HAL_StatusTypeDef ADC_ConversionStop(ADC_HandleTypeDef* hadc, uint32_t ConversionGroup)
DECL|ADC_DISABLE_TIMEOUT|macro|ADC_DISABLE_TIMEOUT
DECL|ADC_DMAConvCplt|function|void ADC_DMAConvCplt(DMA_HandleTypeDef *hdma)
DECL|ADC_DMAError|function|void ADC_DMAError(DMA_HandleTypeDef *hdma)
DECL|ADC_DMAHalfConvCplt|function|void ADC_DMAHalfConvCplt(DMA_HandleTypeDef *hdma)
DECL|ADC_Disable|function|HAL_StatusTypeDef ADC_Disable(ADC_HandleTypeDef* hadc)
DECL|ADC_ENABLE_TIMEOUT|macro|ADC_ENABLE_TIMEOUT
DECL|ADC_Enable|function|HAL_StatusTypeDef ADC_Enable(ADC_HandleTypeDef* hadc)
DECL|ADC_OFR_FIELDS|macro|ADC_OFR_FIELDS
DECL|ADC_STAB_DELAY_US|macro|ADC_STAB_DELAY_US
DECL|HAL_ADC_AnalogWDGConfig|function|HAL_StatusTypeDef HAL_ADC_AnalogWDGConfig(ADC_HandleTypeDef* hadc, ADC_AnalogWDGConfTypeDef* AnalogWDGConfig)
DECL|HAL_ADC_ConfigChannel|function|HAL_StatusTypeDef HAL_ADC_ConfigChannel(ADC_HandleTypeDef* hadc, ADC_ChannelConfTypeDef* sConfig)
DECL|HAL_ADC_ConvCpltCallback|function|__weak void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_ConvHalfCpltCallback|function|__weak void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_DeInit|function|HAL_StatusTypeDef HAL_ADC_DeInit(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_ErrorCallback|function|__weak void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc)
DECL|HAL_ADC_GetError|function|uint32_t HAL_ADC_GetError(ADC_HandleTypeDef *hadc)
DECL|HAL_ADC_GetState|function|uint32_t HAL_ADC_GetState(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_GetValue|function|uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_IRQHandler|function|void HAL_ADC_IRQHandler(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_Init|function|HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_LevelOutOfWindowCallback|function|__weak void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_MspDeInit|function|__weak void HAL_ADC_MspDeInit(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_MspInit|function|__weak void HAL_ADC_MspInit(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_PollForConversion|function|HAL_StatusTypeDef HAL_ADC_PollForConversion(ADC_HandleTypeDef* hadc, uint32_t Timeout)
DECL|HAL_ADC_PollForEvent|function|HAL_StatusTypeDef HAL_ADC_PollForEvent(ADC_HandleTypeDef* hadc, uint32_t EventType, uint32_t Timeout)
DECL|HAL_ADC_Start_DMA|function|HAL_StatusTypeDef HAL_ADC_Start_DMA(ADC_HandleTypeDef* hadc, uint32_t* pData, uint32_t Length)
DECL|HAL_ADC_Start_IT|function|HAL_StatusTypeDef HAL_ADC_Start_IT(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_Start|function|HAL_StatusTypeDef HAL_ADC_Start(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_Stop_DMA|function|HAL_StatusTypeDef HAL_ADC_Stop_DMA(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_Stop_IT|function|HAL_StatusTypeDef HAL_ADC_Stop_IT(ADC_HandleTypeDef* hadc)
DECL|HAL_ADC_Stop|function|HAL_StatusTypeDef HAL_ADC_Stop(ADC_HandleTypeDef* hadc)
