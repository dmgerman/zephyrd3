DECL|ENC_CTRL2_W1C_FLAGS|macro|ENC_CTRL2_W1C_FLAGS
DECL|ENC_CTRL_W1C_FLAGS|macro|ENC_CTRL_W1C_FLAGS
DECL|ENC_ClearStatusFlags|function|void ENC_ClearStatusFlags(ENC_Type *base, uint32_t mask)
DECL|ENC_Deinit|function|void ENC_Deinit(ENC_Type *base)
DECL|ENC_DisableInterrupts|function|void ENC_DisableInterrupts(ENC_Type *base, uint32_t mask)
DECL|ENC_DoSoftwareLoadInitialPositionValue|function|void ENC_DoSoftwareLoadInitialPositionValue(ENC_Type *base)
DECL|ENC_EnableInterrupts|function|void ENC_EnableInterrupts(ENC_Type *base, uint32_t mask)
DECL|ENC_EnableWatchdog|function|void ENC_EnableWatchdog(ENC_Type *base, bool enable)
DECL|ENC_GetDefaultConfig|function|void ENC_GetDefaultConfig(enc_config_t *config)
DECL|ENC_GetEnabledInterrupts|function|uint32_t ENC_GetEnabledInterrupts(ENC_Type *base)
DECL|ENC_GetHoldPositionValue|function|uint32_t ENC_GetHoldPositionValue(ENC_Type *base)
DECL|ENC_GetInstance|function|static uint32_t ENC_GetInstance(ENC_Type *base)
DECL|ENC_GetPositionValue|function|uint32_t ENC_GetPositionValue(ENC_Type *base)
DECL|ENC_GetStatusFlags|function|uint32_t ENC_GetStatusFlags(ENC_Type *base)
DECL|ENC_Init|function|void ENC_Init(ENC_Type *base, const enc_config_t *config)
DECL|ENC_SetInitialPositionValue|function|void ENC_SetInitialPositionValue(ENC_Type *base, uint32_t value)
DECL|ENC_SetSelfTestConfig|function|void ENC_SetSelfTestConfig(ENC_Type *base, const enc_self_test_config_t *config)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|s_encBases|variable|s_encBases
DECL|s_encClocks|variable|s_encClocks
