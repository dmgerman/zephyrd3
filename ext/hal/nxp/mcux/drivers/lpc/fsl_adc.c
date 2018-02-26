DECL|ADC_Deinit|function|void ADC_Deinit(ADC_Type *base)
DECL|ADC_DoSelfCalibration|function|bool ADC_DoSelfCalibration(ADC_Type *base)
DECL|ADC_GetChannelConversionResult|function|bool ADC_GetChannelConversionResult(ADC_Type *base, uint32_t channel, adc_result_info_t *info)
DECL|ADC_GetConvSeqAGlobalConversionResult|function|bool ADC_GetConvSeqAGlobalConversionResult(ADC_Type *base, adc_result_info_t *info)
DECL|ADC_GetConvSeqBGlobalConversionResult|function|bool ADC_GetConvSeqBGlobalConversionResult(ADC_Type *base, adc_result_info_t *info)
DECL|ADC_GetDefaultConfig|function|void ADC_GetDefaultConfig(adc_config_t *config)
DECL|ADC_GetInstance|function|static uint32_t ADC_GetInstance(ADC_Type *base)
DECL|ADC_Init|function|void ADC_Init(ADC_Type *base, const adc_config_t *config)
DECL|ADC_SetConvSeqAConfig|function|void ADC_SetConvSeqAConfig(ADC_Type *base, const adc_conv_seq_config_t *config)
DECL|ADC_SetConvSeqBConfig|function|void ADC_SetConvSeqBConfig(ADC_Type *base, const adc_conv_seq_config_t *config)
DECL|s_adcBases|variable|s_adcBases
DECL|s_adcClocks|variable|s_adcClocks
