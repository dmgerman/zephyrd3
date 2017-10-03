DECL|ADCBuf_Params_init|function|void ADCBuf_Params_init(ADCBuf_Params *params)
DECL|ADCBuf_adjustRawValues|function|int_fast16_t ADCBuf_adjustRawValues(ADCBuf_Handle handle, void *sampleBuf, uint_fast16_t sampleCount, uint32_t adcChan)
DECL|ADCBuf_close|function|void ADCBuf_close(ADCBuf_Handle handle)
DECL|ADCBuf_control|function|int_fast16_t ADCBuf_control(ADCBuf_Handle handle, uint_fast16_t cmd, void *cmdArg)
DECL|ADCBuf_convertAdjustedToMicroVolts|function|int_fast16_t ADCBuf_convertAdjustedToMicroVolts(ADCBuf_Handle handle, uint32_t adcChan, void *adjustedSampleBuffer, uint32_t outputMicroVoltBuffer[], uint_fast16_t sampleCount)
DECL|ADCBuf_convertCancel|function|int_fast16_t ADCBuf_convertCancel(ADCBuf_Handle handle)
DECL|ADCBuf_convert|function|int_fast16_t ADCBuf_convert(ADCBuf_Handle handle, ADCBuf_Conversion conversions[], uint_fast8_t channelCount)
DECL|ADCBuf_defaultParams|variable|ADCBuf_defaultParams
DECL|ADCBuf_getResolution|function|uint_fast8_t ADCBuf_getResolution(ADCBuf_Handle handle)
DECL|ADCBuf_init|function|void ADCBuf_init(void)
DECL|ADCBuf_open|function|ADCBuf_Handle ADCBuf_open(uint_least8_t index, ADCBuf_Params *params)
DECL|isInitialized|variable|isInitialized
