DECL|DAC_ClearBufferStatusFlags|function|void DAC_ClearBufferStatusFlags(DAC_Type *base, uint32_t mask)
DECL|DAC_Deinit|function|void DAC_Deinit(DAC_Type *base)
DECL|DAC_DisableBufferInterrupts|function|void DAC_DisableBufferInterrupts(DAC_Type *base, uint32_t mask)
DECL|DAC_EnableBufferInterrupts|function|void DAC_EnableBufferInterrupts(DAC_Type *base, uint32_t mask)
DECL|DAC_GetBufferStatusFlags|function|uint32_t DAC_GetBufferStatusFlags(DAC_Type *base)
DECL|DAC_GetDefaultBufferConfig|function|void DAC_GetDefaultBufferConfig(dac_buffer_config_t *config)
DECL|DAC_GetDefaultConfig|function|void DAC_GetDefaultConfig(dac_config_t *config)
DECL|DAC_GetInstance|function|static uint32_t DAC_GetInstance(DAC_Type *base)
DECL|DAC_Init|function|void DAC_Init(DAC_Type *base, const dac_config_t *config)
DECL|DAC_SetBufferConfig|function|void DAC_SetBufferConfig(DAC_Type *base, const dac_buffer_config_t *config)
DECL|DAC_SetBufferReadPointer|function|void DAC_SetBufferReadPointer(DAC_Type *base, uint8_t index)
DECL|DAC_SetBufferValue|function|void DAC_SetBufferValue(DAC_Type *base, uint8_t index, uint16_t value)
DECL|s_dacBases|variable|s_dacBases
DECL|s_dacClocks|variable|s_dacClocks
