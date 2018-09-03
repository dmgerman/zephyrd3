DECL|CMP_ClearStatusFlags|function|void CMP_ClearStatusFlags(CMP_Type *base, uint32_t mask)
DECL|CMP_Deinit|function|void CMP_Deinit(CMP_Type *base)
DECL|CMP_DisableInterrupts|function|void CMP_DisableInterrupts(CMP_Type *base, uint32_t mask)
DECL|CMP_EnableDMA|function|void CMP_EnableDMA(CMP_Type *base, bool enable)
DECL|CMP_EnableInterrupts|function|void CMP_EnableInterrupts(CMP_Type *base, uint32_t mask)
DECL|CMP_GetDefaultConfig|function|void CMP_GetDefaultConfig(cmp_config_t *config)
DECL|CMP_GetInstance|function|static uint32_t CMP_GetInstance(CMP_Type *base)
DECL|CMP_GetStatusFlags|function|uint32_t CMP_GetStatusFlags(CMP_Type *base)
DECL|CMP_Init|function|void CMP_Init(CMP_Type *base, const cmp_config_t *config)
DECL|CMP_SetDACConfig|function|void CMP_SetDACConfig(CMP_Type *base, const cmp_dac_config_t *config)
DECL|CMP_SetFilterConfig|function|void CMP_SetFilterConfig(CMP_Type *base, const cmp_filter_config_t *config)
DECL|CMP_SetInputChannels|function|void CMP_SetInputChannels(CMP_Type *base, uint8_t positiveChannel, uint8_t negativeChannel)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|s_cmpBases|variable|s_cmpBases
DECL|s_cmpClocks|variable|s_cmpClocks
