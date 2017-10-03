DECL|ADC_Params_init|function|void ADC_Params_init(ADC_Params *params)
DECL|ADC_close|function|void ADC_close(ADC_Handle handle)
DECL|ADC_control|function|int_fast16_t ADC_control(ADC_Handle handle, uint_fast16_t cmd, void *arg)
DECL|ADC_convertToMicroVolts|function|uint32_t ADC_convertToMicroVolts(ADC_Handle handle, uint16_t adcValue)
DECL|ADC_convert|function|int_fast16_t ADC_convert(ADC_Handle handle, uint16_t *value)
DECL|ADC_defaultParams|variable|ADC_defaultParams
DECL|ADC_init|function|void ADC_init(void)
DECL|ADC_open|function|ADC_Handle ADC_open(uint_least8_t index, ADC_Params *params)
DECL|isInitialized|variable|isInitialized
