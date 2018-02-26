DECL|ADC_ClearStatusFlags|function|void ADC_ClearStatusFlags(ADC_Type *base, uint32_t mask)
DECL|ADC_Deinit|function|void ADC_Deinit(ADC_Type *base)
DECL|ADC_DoAutoCalibration|function|status_t ADC_DoAutoCalibration(ADC_Type *base)
DECL|ADC_GetDefaultConfig|function|void ADC_GetDefaultConfig(adc_config_t *config)
DECL|ADC_GetInstance|function|static uint32_t ADC_GetInstance(ADC_Type *base)
DECL|ADC_Init|function|void ADC_Init(ADC_Type *base, const adc_config_t *config)
DECL|ADC_SetChannelConfig|function|void ADC_SetChannelConfig(ADC_Type *base, uint32_t channelGroup, const adc_channel_config_t *config)
DECL|ADC_SetHardwareAverageConfig|function|void ADC_SetHardwareAverageConfig(ADC_Type *base, adc_hardware_average_mode_t mode)
DECL|ADC_SetHardwareCompareConfig|function|void ADC_SetHardwareCompareConfig(ADC_Type *base, const adc_hardware_compare_config_t *config)
DECL|ADC_SetOffsetConfig|function|void ADC_SetOffsetConfig(ADC_Type *base, const adc_offest_config_t *config)
DECL|s_adcBases|variable|s_adcBases
DECL|s_adcClocks|variable|s_adcClocks
