DECL|ADC_EnableDMA|function|static inline void ADC_EnableDMA(ADC_Type *base, bool enable)
DECL|ADC_EnableHardwareTrigger|function|static inline void ADC_EnableHardwareTrigger(ADC_Type *base, bool enable)
DECL|ADC_GetChannelConversionValue|function|static inline uint32_t ADC_GetChannelConversionValue(ADC_Type *base, uint32_t channelGroup)
DECL|ADC_GetChannelStatusFlags|function|static inline uint32_t ADC_GetChannelStatusFlags(ADC_Type *base, uint32_t channelGroup)
DECL|ADC_GetStatusFlags|function|static inline uint32_t ADC_GetStatusFlags(ADC_Type *base)
DECL|FSL_ADC_DRIVER_VERSION|macro|FSL_ADC_DRIVER_VERSION
DECL|_FSL_ADC_H_|macro|_FSL_ADC_H_
DECL|_adc_channel_config|struct|typedef struct _adc_channel_config
DECL|_adc_clock_drvier|enum|typedef enum _adc_clock_drvier
DECL|_adc_clock_source|enum|typedef enum _adc_clock_source
DECL|_adc_config|struct|typedef struct _adc_config
DECL|_adc_hardware_average_mode|enum|typedef enum _adc_hardware_average_mode
DECL|_adc_hardware_compare_config|struct|typedef struct _adc_hardware_compare_config
DECL|_adc_hardware_compare_mode|enum|typedef enum _adc_hardware_compare_mode
DECL|_adc_offest_config|struct|typedef struct _adc_offest_config
DECL|_adc_reference_voltage_source|enum|typedef enum _adc_reference_voltage_source
DECL|_adc_resolution|enum|typedef enum _adc_resolution
DECL|_adc_sample_period_mode|enum|typedef enum _adc_sample_period_mode
DECL|_adc_status_flags|enum|typedef enum _adc_status_flags
DECL|adc_channel_config_t|typedef|} adc_channel_config_t;
DECL|adc_clock_driver_t|typedef|} adc_clock_driver_t;
DECL|adc_clock_source_t|typedef|} adc_clock_source_t;
DECL|adc_config_t|typedef|} adc_config_t;
DECL|adc_hardware_average_mode_t|typedef|} adc_hardware_average_mode_t;
DECL|adc_hardware_compare_config_t|typedef|} adc_hardware_compare_config_t;
DECL|adc_hardware_compare_mode_t|typedef|} adc_hardware_compare_mode_t;
DECL|adc_offest_config_t|typedef|} adc_offest_config_t;
DECL|adc_reference_voltage_source_t|typedef|} adc_reference_voltage_source_t;
DECL|adc_resolution_t|typedef|} adc_resolution_t;
DECL|adc_sample_period_mode_t|typedef|} adc_sample_period_mode_t;
DECL|adc_status_flags_t|typedef|} adc_status_flags_t;
DECL|channelNumber|member|uint32_t channelNumber; /*!< Setting the conversion channel number. The available range is 0-31.
DECL|clockDriver|member|adc_clock_driver_t clockDriver; /*!< Select the divide ratio used by the ADC to generate the internal clock ADCK. */
DECL|clockSource|member|adc_clock_source_t clockSource; /*!< Select the input clock source to generate the internal clock ADCK. */
DECL|enableAsynchronousClockOutput|member|bool enableAsynchronousClockOutput; /*!< Enable the asynchronous clock output. */
DECL|enableContinuousConversion|member|bool enableContinuousConversion; /*!< Enable the continuous conversion mode. */
DECL|enableHighSpeed|member|bool enableHighSpeed; /*!< Enable the high-speed mode. */
DECL|enableInterruptOnConversionCompleted|member|bool enableInterruptOnConversionCompleted; /*!< Generate an interrupt request once the conversion is completed. */
DECL|enableLongSample|member|bool enableLongSample; /*!< Enable the long sample mode. */
DECL|enableLowPower|member|bool enableLowPower; /*!< Enable the low power mode. */
DECL|enableOverWrite|member|bool enableOverWrite; /*!< Enable the overwriting. */
DECL|enableSigned|member|bool enableSigned; /*!< if false,The offset value is added with the raw result.
DECL|hardwareCompareMode|member|adc_hardware_compare_mode_t hardwareCompareMode; /*!< Select the hardware compare mode.
DECL|kADC_AsynchronousWakeupInterruptFlag|enumerator|kADC_AsynchronousWakeupInterruptFlag =
DECL|kADC_CalibrationFailedFlag|enumerator|kADC_CalibrationFailedFlag = ADC_GS_CALF_MASK, /*!< Calibration is failed,support w1c. */
DECL|kADC_ClockDriver1|enumerator|kADC_ClockDriver1 = 0U, /*!< For divider 1 from the input clock to the module. */
DECL|kADC_ClockDriver2|enumerator|kADC_ClockDriver2 = 1U, /*!< For divider 2 from the input clock to the module. */
DECL|kADC_ClockDriver4|enumerator|kADC_ClockDriver4 = 2U, /*!< For divider 4 from the input clock to the module. */
DECL|kADC_ClockDriver8|enumerator|kADC_ClockDriver8 = 3U, /*!< For divider 8 from the input clock to the module. */
DECL|kADC_ClockSourceAD|enumerator|kADC_ClockSourceAD = 3U, /*!< Select Asynchronous clock to generate ADCK. */
DECL|kADC_ClockSourceALT|enumerator|kADC_ClockSourceALT = 2U, /*!< Select alternate clock to generate ADCK. */
DECL|kADC_ClockSourceIPGDiv2|enumerator|kADC_ClockSourceIPGDiv2 = 1U, /*!< Select IPG clock divided by 2 to generate ADCK. */
DECL|kADC_ClockSourceIPG|enumerator|kADC_ClockSourceIPG = 0U, /*!< Select IPG clock to generate ADCK. */
DECL|kADC_ConversionActiveFlag|enumerator|kADC_ConversionActiveFlag = ADC_GS_ADACT_MASK, /*!< Conversion is active,not support w1c. */
DECL|kADC_HardwareAverageCount16|enumerator|kADC_HardwareAverageCount16 = 2U, /*!< For hardware average with 16 samples. */
DECL|kADC_HardwareAverageCount32|enumerator|kADC_HardwareAverageCount32 = 3U, /*!< For hardware average with 32 samples. */
DECL|kADC_HardwareAverageCount4|enumerator|kADC_HardwareAverageCount4 = 0U, /*!< For hardware average with 4 samples. */
DECL|kADC_HardwareAverageCount8|enumerator|kADC_HardwareAverageCount8 = 1U, /*!< For hardware average with 8 samples. */
DECL|kADC_HardwareAverageDiasable|enumerator|kADC_HardwareAverageDiasable = 4U, /*!< Disable the hardware average function. */
DECL|kADC_HardwareCompareMode0|enumerator|kADC_HardwareCompareMode0 = 0U, /*!< Compare true if the result is less than the value1. */
DECL|kADC_HardwareCompareMode1|enumerator|kADC_HardwareCompareMode1 = 1U, /*!< Compare true if the result is greater than or equal to value1. */
DECL|kADC_HardwareCompareMode2|enumerator|kADC_HardwareCompareMode2 = 2U, /*!< Value1 <= Value2, compare true if the result is less than value1 Or
DECL|kADC_HardwareCompareMode3|enumerator|kADC_HardwareCompareMode3 = 3U, /*!< Value1 <= Value2, compare true if the result is greater than or equal
DECL|kADC_ReferenceVoltageSourceAlt0|enumerator|kADC_ReferenceVoltageSourceAlt0 = 0U, /*!< For external pins pair of VrefH and VrefL. */
DECL|kADC_Resolution10Bit|enumerator|kADC_Resolution10Bit = 1U, /*!< Single End 10-bit resolution. */
DECL|kADC_Resolution12Bit|enumerator|kADC_Resolution12Bit = 2U, /*!< Single End 12-bit resolution. */
DECL|kADC_Resolution8Bit|enumerator|kADC_Resolution8Bit = 0U, /*!< Single End 8-bit resolution. */
DECL|kADC_SamplePeriod2or12Clocks|enumerator|kADC_SamplePeriod2or12Clocks = 0U, /*!< Long sample 12 clocks or short sample 2 clocks. */
DECL|kADC_SamplePeriod4or16Clocks|enumerator|kADC_SamplePeriod4or16Clocks = 1U, /*!< Long sample 16 clocks or short sample 4 clocks. */
DECL|kADC_SamplePeriod6or20Clocks|enumerator|kADC_SamplePeriod6or20Clocks = 2U, /*!< Long sample 20 clocks or short sample 6 clocks. */
DECL|kADC_SamplePeriod8or24Clocks|enumerator|kADC_SamplePeriod8or24Clocks = 3U, /*!< Long sample 24 clocks or short sample 8 clocks. */
DECL|kADC_SamplePeriodLong12Clcoks|enumerator|kADC_SamplePeriodLong12Clcoks = kADC_SamplePeriod2or12Clocks, /*!< Long sample 12 clocks. */
DECL|kADC_SamplePeriodLong16Clcoks|enumerator|kADC_SamplePeriodLong16Clcoks = kADC_SamplePeriod4or16Clocks, /*!< Long sample 16 clocks. */
DECL|kADC_SamplePeriodLong20Clcoks|enumerator|kADC_SamplePeriodLong20Clcoks = kADC_SamplePeriod6or20Clocks, /*!< Long sample 20 clocks. */
DECL|kADC_SamplePeriodLong24Clcoks|enumerator|kADC_SamplePeriodLong24Clcoks = kADC_SamplePeriod8or24Clocks, /*!< Long sample 24 clocks. */
DECL|kADC_SamplePeriodShort2Clocks|enumerator|kADC_SamplePeriodShort2Clocks = kADC_SamplePeriod2or12Clocks, /*!< Short sample 2 clocks. */
DECL|kADC_SamplePeriodShort4Clocks|enumerator|kADC_SamplePeriodShort4Clocks = kADC_SamplePeriod4or16Clocks, /*!< Short sample 4 clocks. */
DECL|kADC_SamplePeriodShort6Clocks|enumerator|kADC_SamplePeriodShort6Clocks = kADC_SamplePeriod6or20Clocks, /*!< Short sample 6 clocks. */
DECL|kADC_SamplePeriodShort8Clocks|enumerator|kADC_SamplePeriodShort8Clocks = kADC_SamplePeriod8or24Clocks, /*!< Short sample 8 clocks. */
DECL|offsetValue|member|uint32_t offsetValue; /*!< User configurable offset value(0-4095). */
DECL|referenceVoltageSource|member|adc_reference_voltage_source_t referenceVoltageSource; /*!< Select the reference voltage source. */
DECL|resolution|member|adc_resolution_t resolution; /*!< Select the ADC resolution mode. */
DECL|samplePeriodMode|member|adc_sample_period_mode_t samplePeriodMode; /*!< Select the sample period in long sample mode or short mode. */
DECL|value1|member|uint16_t value1; /*!< Setting value1(0-4095) for hardware compare mode. */
DECL|value2|member|uint16_t value2; /*!< Setting value2(0-4095) for hardware compare mode. */
