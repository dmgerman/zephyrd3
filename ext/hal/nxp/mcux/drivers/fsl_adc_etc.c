DECL|ADC_ETC_ClearInterruptStatusFlags|function|void ADC_ETC_ClearInterruptStatusFlags(ADC_ETC_Type *base, adc_etc_external_trigger_source_t sourceIndex, uint32_t mask)
DECL|ADC_ETC_Deinit|function|void ADC_ETC_Deinit(ADC_ETC_Type *base)
DECL|ADC_ETC_GetADCConversionValue|function|uint32_t ADC_ETC_GetADCConversionValue(ADC_ETC_Type *base, uint32_t triggerGroup, uint32_t chainGroup)
DECL|ADC_ETC_GetDefaultConfig|function|void ADC_ETC_GetDefaultConfig(adc_etc_config_t *config)
DECL|ADC_ETC_GetInstance|function|static uint32_t ADC_ETC_GetInstance(ADC_ETC_Type *base)
DECL|ADC_ETC_GetInterruptStatusFlags|function|uint32_t ADC_ETC_GetInterruptStatusFlags(ADC_ETC_Type *base, adc_etc_external_trigger_source_t sourceIndex)
DECL|ADC_ETC_Init|function|void ADC_ETC_Init(ADC_ETC_Type *base, const adc_etc_config_t *config)
DECL|ADC_ETC_SetTriggerChainConfig|function|void ADC_ETC_SetTriggerChainConfig(ADC_ETC_Type *base, uint32_t triggerGroup, uint32_t chainGroup, const adc_etc_trigger_chain_config_t *config)
DECL|ADC_ETC_SetTriggerConfig|function|void ADC_ETC_SetTriggerConfig(ADC_ETC_Type *base, uint32_t triggerGroup, const adc_etc_trigger_config_t *config)
DECL|s_adcetcBases|variable|s_adcetcBases
DECL|s_adcetcClocks|variable|s_adcetcClocks
