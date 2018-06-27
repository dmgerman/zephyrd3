DECL|HAL_TIM_Base_DeInit|function|HAL_StatusTypeDef HAL_TIM_Base_DeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Base_GetState|function|HAL_TIM_StateTypeDef HAL_TIM_Base_GetState(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Base_Init|function|HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Base_MspDeInit|function|__weak void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Base_MspInit|function|__weak void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Base_Start_DMA|function|HAL_StatusTypeDef HAL_TIM_Base_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length)
DECL|HAL_TIM_Base_Start_IT|function|HAL_StatusTypeDef HAL_TIM_Base_Start_IT(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Base_Start|function|HAL_StatusTypeDef HAL_TIM_Base_Start(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Base_Stop_DMA|function|HAL_StatusTypeDef HAL_TIM_Base_Stop_DMA(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Base_Stop_IT|function|HAL_StatusTypeDef HAL_TIM_Base_Stop_IT(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Base_Stop|function|HAL_StatusTypeDef HAL_TIM_Base_Stop(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_ConfigClockSource|function|HAL_StatusTypeDef HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *htim, TIM_ClockConfigTypeDef * sClockSourceConfig)
DECL|HAL_TIM_ConfigOCrefClear|function|__weak HAL_StatusTypeDef HAL_TIM_ConfigOCrefClear(TIM_HandleTypeDef *htim, TIM_ClearInputConfigTypeDef * sClearInputConfig, uint32_t Channel)
DECL|HAL_TIM_ConfigTI1Input|function|HAL_StatusTypeDef HAL_TIM_ConfigTI1Input(TIM_HandleTypeDef *htim, uint32_t TI1_Selection)
DECL|HAL_TIM_DMABurst_ReadStart|function|HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength)
DECL|HAL_TIM_DMABurst_ReadStop|function|HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc)
DECL|HAL_TIM_DMABurst_WriteStart|function|HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t* BurstBuffer, uint32_t BurstLength)
DECL|HAL_TIM_DMABurst_WriteStop|function|HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc)
DECL|HAL_TIM_DMACaptureCplt|function|void HAL_TIM_DMACaptureCplt(DMA_HandleTypeDef *hdma)
DECL|HAL_TIM_DMADelayPulseCplt|function|void HAL_TIM_DMADelayPulseCplt(DMA_HandleTypeDef *hdma)
DECL|HAL_TIM_DMAError|function|void HAL_TIM_DMAError(DMA_HandleTypeDef *hdma)
DECL|HAL_TIM_Encoder_DeInit|function|HAL_StatusTypeDef HAL_TIM_Encoder_DeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Encoder_GetState|function|HAL_TIM_StateTypeDef HAL_TIM_Encoder_GetState(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Encoder_Init|function|HAL_StatusTypeDef HAL_TIM_Encoder_Init(TIM_HandleTypeDef *htim, TIM_Encoder_InitTypeDef* sConfig)
DECL|HAL_TIM_Encoder_MspDeInit|function|__weak void HAL_TIM_Encoder_MspDeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Encoder_MspInit|function|__weak void HAL_TIM_Encoder_MspInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_Encoder_Start_DMA|function|HAL_StatusTypeDef HAL_TIM_Encoder_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData1, uint32_t *pData2, uint16_t Length)
DECL|HAL_TIM_Encoder_Start_IT|function|HAL_StatusTypeDef HAL_TIM_Encoder_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_Encoder_Start|function|HAL_StatusTypeDef HAL_TIM_Encoder_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_Encoder_Stop_DMA|function|HAL_StatusTypeDef HAL_TIM_Encoder_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_Encoder_Stop_IT|function|HAL_StatusTypeDef HAL_TIM_Encoder_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_Encoder_Stop|function|HAL_StatusTypeDef HAL_TIM_Encoder_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_ErrorCallback|function|__weak void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_GenerateEvent|function|HAL_StatusTypeDef HAL_TIM_GenerateEvent(TIM_HandleTypeDef *htim, uint32_t EventSource)
DECL|HAL_TIM_IC_CaptureCallback|function|__weak void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_IC_ConfigChannel|function|HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_IC_InitTypeDef* sConfig, uint32_t Channel)
DECL|HAL_TIM_IC_DeInit|function|HAL_StatusTypeDef HAL_TIM_IC_DeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_IC_GetState|function|HAL_TIM_StateTypeDef HAL_TIM_IC_GetState(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_IC_Init|function|HAL_StatusTypeDef HAL_TIM_IC_Init(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_IC_MspDeInit|function|__weak void HAL_TIM_IC_MspDeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_IC_MspInit|function|__weak void HAL_TIM_IC_MspInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_IC_Start_DMA|function|HAL_StatusTypeDef HAL_TIM_IC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
DECL|HAL_TIM_IC_Start_IT|function|HAL_StatusTypeDef HAL_TIM_IC_Start_IT (TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_IC_Start|function|HAL_StatusTypeDef HAL_TIM_IC_Start (TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_IC_Stop_DMA|function|HAL_StatusTypeDef HAL_TIM_IC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_IC_Stop_IT|function|HAL_StatusTypeDef HAL_TIM_IC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_IC_Stop|function|HAL_StatusTypeDef HAL_TIM_IC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_IRQHandler|function|void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OC_ConfigChannel|function|__weak HAL_StatusTypeDef HAL_TIM_OC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef* sConfig, uint32_t Channel)
DECL|HAL_TIM_OC_DeInit|function|HAL_StatusTypeDef HAL_TIM_OC_DeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OC_DelayElapsedCallback|function|__weak void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OC_GetState|function|HAL_TIM_StateTypeDef HAL_TIM_OC_GetState(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OC_Init|function|HAL_StatusTypeDef HAL_TIM_OC_Init(TIM_HandleTypeDef* htim)
DECL|HAL_TIM_OC_MspDeInit|function|__weak void HAL_TIM_OC_MspDeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OC_MspInit|function|__weak void HAL_TIM_OC_MspInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OC_Start_DMA|function|HAL_StatusTypeDef HAL_TIM_OC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
DECL|HAL_TIM_OC_Start_IT|function|HAL_StatusTypeDef HAL_TIM_OC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_OC_Start|function|HAL_StatusTypeDef HAL_TIM_OC_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_OC_Stop_DMA|function|HAL_StatusTypeDef HAL_TIM_OC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_OC_Stop_IT|function|HAL_StatusTypeDef HAL_TIM_OC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_OC_Stop|function|HAL_StatusTypeDef HAL_TIM_OC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_OnePulse_ConfigChannel|function|HAL_StatusTypeDef HAL_TIM_OnePulse_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OnePulse_InitTypeDef* sConfig, uint32_t OutputChannel, uint32_t InputChannel)
DECL|HAL_TIM_OnePulse_DeInit|function|HAL_StatusTypeDef HAL_TIM_OnePulse_DeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OnePulse_GetState|function|HAL_TIM_StateTypeDef HAL_TIM_OnePulse_GetState(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OnePulse_Init|function|HAL_StatusTypeDef HAL_TIM_OnePulse_Init(TIM_HandleTypeDef *htim, uint32_t OnePulseMode)
DECL|HAL_TIM_OnePulse_MspDeInit|function|__weak void HAL_TIM_OnePulse_MspDeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OnePulse_MspInit|function|__weak void HAL_TIM_OnePulse_MspInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_OnePulse_Start_IT|function|HAL_StatusTypeDef HAL_TIM_OnePulse_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
DECL|HAL_TIM_OnePulse_Start|function|HAL_StatusTypeDef HAL_TIM_OnePulse_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
DECL|HAL_TIM_OnePulse_Stop_IT|function|HAL_StatusTypeDef HAL_TIM_OnePulse_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
DECL|HAL_TIM_OnePulse_Stop|function|HAL_StatusTypeDef HAL_TIM_OnePulse_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
DECL|HAL_TIM_PWM_ConfigChannel|function|__weak HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef* sConfig, uint32_t Channel)
DECL|HAL_TIM_PWM_DeInit|function|HAL_StatusTypeDef HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_PWM_GetState|function|HAL_TIM_StateTypeDef HAL_TIM_PWM_GetState(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_PWM_Init|function|HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_PWM_MspDeInit|function|__weak void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_PWM_MspInit|function|__weak void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_PWM_PulseFinishedCallback|function|__weak void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_PWM_Start_DMA|function|HAL_StatusTypeDef HAL_TIM_PWM_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
DECL|HAL_TIM_PWM_Start_IT|function|HAL_StatusTypeDef HAL_TIM_PWM_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_PWM_Start|function|HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_PWM_Stop_DMA|function|HAL_StatusTypeDef HAL_TIM_PWM_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_PWM_Stop_IT|function|HAL_StatusTypeDef HAL_TIM_PWM_Stop_IT (TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_PWM_Stop|function|HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_PeriodElapsedCallback|function|__weak void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_ReadCapturedValue|function|uint32_t HAL_TIM_ReadCapturedValue(TIM_HandleTypeDef *htim, uint32_t Channel)
DECL|HAL_TIM_RegisterCallback|function|HAL_StatusTypeDef HAL_TIM_RegisterCallback(TIM_HandleTypeDef *htim, HAL_TIM_CallbackIDTypeDef CallbackID, pTIM_CallbackTypeDef pCallback)
DECL|HAL_TIM_SlaveConfigSynchronization_IT|function|HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchronization_IT(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef * sSlaveConfig)
DECL|HAL_TIM_SlaveConfigSynchronization|function|HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchronization(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef * sSlaveConfig)
DECL|HAL_TIM_TriggerCallback|function|__weak void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim)
DECL|HAL_TIM_UnRegisterCallback|function|HAL_StatusTypeDef HAL_TIM_UnRegisterCallback(TIM_HandleTypeDef *htim, HAL_TIM_CallbackIDTypeDef CallbackID)
DECL|TIM_Base_SetConfig|function|void TIM_Base_SetConfig(TIM_TypeDef *TIMx, TIM_Base_InitTypeDef *Structure)
DECL|TIM_CCxChannelCmd|function|void TIM_CCxChannelCmd(TIM_TypeDef* TIMx, uint32_t Channel, uint32_t ChannelState)
DECL|TIM_DMAPeriodElapsedCplt|function|static void TIM_DMAPeriodElapsedCplt(DMA_HandleTypeDef *hdma)
DECL|TIM_DMATriggerCplt|function|static void TIM_DMATriggerCplt(DMA_HandleTypeDef *hdma)
DECL|TIM_ETR_SetConfig|function|void TIM_ETR_SetConfig(TIM_TypeDef* TIMx, uint32_t TIM_ExtTRGPrescaler, uint32_t TIM_ExtTRGPolarity, uint32_t ExtTRGFilter)
DECL|TIM_ITRx_SetConfig|function|static void TIM_ITRx_SetConfig(TIM_TypeDef *TIMx, uint16_t TIM_ITRx)
DECL|TIM_OC1_SetConfig|function|void TIM_OC1_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config)
DECL|TIM_OC2_SetConfig|function|void TIM_OC2_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config)
DECL|TIM_OC3_SetConfig|function|void TIM_OC3_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config)
DECL|TIM_OC4_SetConfig|function|void TIM_OC4_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config)
DECL|TIM_ResetCallback|function|void TIM_ResetCallback(TIM_HandleTypeDef *htim)
DECL|TIM_SlaveTimer_SetConfig|function|static void TIM_SlaveTimer_SetConfig(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef * sSlaveConfig)
DECL|TIM_TI1_ConfigInputStage|function|static void TIM_TI1_ConfigInputStage(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICFilter)
DECL|TIM_TI1_SetConfig|function|void TIM_TI1_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter)
DECL|TIM_TI2_ConfigInputStage|function|static void TIM_TI2_ConfigInputStage(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICFilter)
DECL|TIM_TI2_SetConfig|function|static void TIM_TI2_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter)
DECL|TIM_TI3_SetConfig|function|static void TIM_TI3_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter)
DECL|TIM_TI4_SetConfig|function|static void TIM_TI4_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter)
