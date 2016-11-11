DECL|DSI_ConfigPacketHeader|function|static void DSI_ConfigPacketHeader(DSI_TypeDef *DSIx, uint32_t ChannelID, uint32_t DataType, uint32_t Data0, uint32_t Data1)
DECL|DSI_ERROR_ACK_MASK|macro|DSI_ERROR_ACK_MASK
DECL|DSI_ERROR_CRC_MASK|macro|DSI_ERROR_CRC_MASK
DECL|DSI_ERROR_ECC_MASK|macro|DSI_ERROR_ECC_MASK
DECL|DSI_ERROR_EOT_MASK|macro|DSI_ERROR_EOT_MASK
DECL|DSI_ERROR_GEN_MASK|macro|DSI_ERROR_GEN_MASK
DECL|DSI_ERROR_OVF_MASK|macro|DSI_ERROR_OVF_MASK
DECL|DSI_ERROR_PHY_MASK|macro|DSI_ERROR_PHY_MASK
DECL|DSI_ERROR_PSE_MASK|macro|DSI_ERROR_PSE_MASK
DECL|DSI_ERROR_RX_MASK|macro|DSI_ERROR_RX_MASK
DECL|DSI_ERROR_TX_MASK|macro|DSI_ERROR_TX_MASK
DECL|DSI_TIMEOUT_VALUE|macro|DSI_TIMEOUT_VALUE
DECL|HAL_DSI_ColorMode|function|HAL_StatusTypeDef HAL_DSI_ColorMode(DSI_HandleTypeDef *hdsi, uint32_t ColorMode)
DECL|HAL_DSI_ConfigAdaptedCommandMode|function|HAL_StatusTypeDef HAL_DSI_ConfigAdaptedCommandMode(DSI_HandleTypeDef *hdsi, DSI_CmdCfgTypeDef *CmdCfg)
DECL|HAL_DSI_ConfigCommand|function|HAL_StatusTypeDef HAL_DSI_ConfigCommand(DSI_HandleTypeDef *hdsi, DSI_LPCmdTypeDef *LPCmd)
DECL|HAL_DSI_ConfigErrorMonitor|function|HAL_StatusTypeDef HAL_DSI_ConfigErrorMonitor(DSI_HandleTypeDef *hdsi, uint32_t ActiveErrors)
DECL|HAL_DSI_ConfigFlowControl|function|HAL_StatusTypeDef HAL_DSI_ConfigFlowControl(DSI_HandleTypeDef *hdsi, uint32_t FlowControl)
DECL|HAL_DSI_ConfigHostTimeouts|function|HAL_StatusTypeDef HAL_DSI_ConfigHostTimeouts(DSI_HandleTypeDef *hdsi, DSI_HOST_TimeoutTypeDef *HostTimeouts)
DECL|HAL_DSI_ConfigPhyTimer|function|HAL_StatusTypeDef HAL_DSI_ConfigPhyTimer(DSI_HandleTypeDef *hdsi, DSI_PHY_TimerTypeDef *PhyTimers)
DECL|HAL_DSI_ConfigVideoMode|function|HAL_StatusTypeDef HAL_DSI_ConfigVideoMode(DSI_HandleTypeDef *hdsi, DSI_VidCfgTypeDef *VidCfg)
DECL|HAL_DSI_DeInit|function|HAL_StatusTypeDef HAL_DSI_DeInit(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_EndOfRefreshCallback|function|__weak void HAL_DSI_EndOfRefreshCallback(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_EnterULPMData|function|HAL_StatusTypeDef HAL_DSI_EnterULPMData(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_EnterULPM|function|HAL_StatusTypeDef HAL_DSI_EnterULPM(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_ErrorCallback|function|__weak void HAL_DSI_ErrorCallback(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_ExitULPMData|function|HAL_StatusTypeDef HAL_DSI_ExitULPMData(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_ExitULPM|function|HAL_StatusTypeDef HAL_DSI_ExitULPM(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_ForceDataLanesInRX|function|HAL_StatusTypeDef HAL_DSI_ForceDataLanesInRX(DSI_HandleTypeDef *hdsi, FunctionalState State)
DECL|HAL_DSI_ForceRXLowPower|function|HAL_StatusTypeDef HAL_DSI_ForceRXLowPower(DSI_HandleTypeDef *hdsi, FunctionalState State)
DECL|HAL_DSI_ForceTXStopMode|function|HAL_StatusTypeDef HAL_DSI_ForceTXStopMode(DSI_HandleTypeDef *hdsi, uint32_t Lane, FunctionalState State)
DECL|HAL_DSI_GetError|function|uint32_t HAL_DSI_GetError(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_GetState|function|HAL_DSI_StateTypeDef HAL_DSI_GetState(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_IRQHandler|function|void HAL_DSI_IRQHandler(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_Init|function|HAL_StatusTypeDef HAL_DSI_Init(DSI_HandleTypeDef *hdsi, DSI_PLLInitTypeDef *PLLInit)
DECL|HAL_DSI_LongWrite|function|HAL_StatusTypeDef HAL_DSI_LongWrite(DSI_HandleTypeDef *hdsi, uint32_t ChannelID, uint32_t Mode, uint32_t NbParams, uint32_t Param1,
DECL|HAL_DSI_MspDeInit|function|__weak void HAL_DSI_MspDeInit(DSI_HandleTypeDef* hdsi)
DECL|HAL_DSI_MspInit|function|__weak void HAL_DSI_MspInit(DSI_HandleTypeDef* hdsi)
DECL|HAL_DSI_PatternGeneratorStart|function|HAL_StatusTypeDef HAL_DSI_PatternGeneratorStart(DSI_HandleTypeDef *hdsi, uint32_t Mode, uint32_t Orientation)
DECL|HAL_DSI_PatternGeneratorStop|function|HAL_StatusTypeDef HAL_DSI_PatternGeneratorStop(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_Read|function|HAL_StatusTypeDef HAL_DSI_Read(DSI_HandleTypeDef *hdsi, uint32_t ChannelNbr, uint8_t* Array, uint32_t Size, uint32_t Mode,
DECL|HAL_DSI_Refresh|function|HAL_StatusTypeDef HAL_DSI_Refresh(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_SetContentionDetectionOff|function|HAL_StatusTypeDef HAL_DSI_SetContentionDetectionOff(DSI_HandleTypeDef *hdsi, FunctionalState State)
DECL|HAL_DSI_SetGenericVCID|function|HAL_StatusTypeDef HAL_DSI_SetGenericVCID(DSI_HandleTypeDef *hdsi, uint32_t VirtualChannelID)
DECL|HAL_DSI_SetLanePinsConfiguration|function|HAL_StatusTypeDef HAL_DSI_SetLanePinsConfiguration(DSI_HandleTypeDef *hdsi, uint32_t CustomLane, uint32_t Lane, FunctionalState State)
DECL|HAL_DSI_SetLowPowerRXFilter|function|HAL_StatusTypeDef HAL_DSI_SetLowPowerRXFilter(DSI_HandleTypeDef *hdsi, uint32_t Frequency)
DECL|HAL_DSI_SetPHYTimings|function|HAL_StatusTypeDef HAL_DSI_SetPHYTimings(DSI_HandleTypeDef *hdsi, uint32_t Timing, FunctionalState State, uint32_t Value)
DECL|HAL_DSI_SetPullDown|function|HAL_StatusTypeDef HAL_DSI_SetPullDown(DSI_HandleTypeDef *hdsi, FunctionalState State)
DECL|HAL_DSI_SetSDD|function|HAL_StatusTypeDef HAL_DSI_SetSDD(DSI_HandleTypeDef *hdsi, FunctionalState State)
DECL|HAL_DSI_SetSlewRateAndDelayTuning|function|HAL_StatusTypeDef HAL_DSI_SetSlewRateAndDelayTuning(DSI_HandleTypeDef *hdsi, uint32_t CommDelay, uint32_t Lane, uint32_t Value)
DECL|HAL_DSI_ShortWrite|function|HAL_StatusTypeDef HAL_DSI_ShortWrite(DSI_HandleTypeDef *hdsi, uint32_t ChannelID, uint32_t Mode, uint32_t Param1, uint32_t Param2)
DECL|HAL_DSI_Shutdown|function|HAL_StatusTypeDef HAL_DSI_Shutdown(DSI_HandleTypeDef *hdsi, uint32_t Shutdown)
DECL|HAL_DSI_Start|function|HAL_StatusTypeDef HAL_DSI_Start(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_Stop|function|HAL_StatusTypeDef HAL_DSI_Stop(DSI_HandleTypeDef *hdsi)
DECL|HAL_DSI_TearingEffectCallback|function|__weak void HAL_DSI_TearingEffectCallback(DSI_HandleTypeDef *hdsi)
