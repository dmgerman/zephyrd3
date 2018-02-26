DECL|ADC16_EnableDMA|function|static inline void ADC16_EnableDMA(ADC_Type *base, bool enable)
DECL|ADC16_EnableHardwareTrigger|function|static inline void ADC16_EnableHardwareTrigger(ADC_Type *base, bool enable)
DECL|ADC16_GetChannelConversionValue|function|static inline uint32_t ADC16_GetChannelConversionValue(ADC_Type *base, uint32_t channelGroup)
DECL|ADC16_SetOffsetValue|function|static inline void ADC16_SetOffsetValue(ADC_Type *base, int16_t value)
DECL|FSL_ADC16_DRIVER_VERSION|macro|FSL_ADC16_DRIVER_VERSION
DECL|_FSL_ADC16_H_|macro|_FSL_ADC16_H_
DECL|_adc16_channel_config|struct|typedef struct _adc16_channel_config
DECL|_adc16_channel_status_flags|enum|enum _adc16_channel_status_flags
DECL|_adc16_clock_divider|enum|typedef enum _adc16_clock_divider
DECL|_adc16_clock_source|enum|typedef enum _adc16_clock_source
DECL|_adc16_config|struct|typedef struct _adc16_config
DECL|_adc16_hardware_average_mode|enum|typedef enum _adc16_hardware_average_mode
DECL|_adc16_hardware_compare_config|struct|typedef struct _adc16_hardware_compare_config
DECL|_adc16_hardware_compare_mode|enum|typedef enum _adc16_hardware_compare_mode
DECL|_adc16_long_sample_mode|enum|typedef enum _adc16_long_sample_mode
DECL|_adc16_pga_config|struct|typedef struct _adc16_pga_config
DECL|_adc16_pga_gain|enum|typedef enum _adc16_pga_gain
DECL|_adc16_reference_voltage_source|enum|typedef enum _adc16_reference_voltage_source
DECL|_adc16_resolution|enum|typedef enum _adc16_resolution
DECL|_adc16_status_flags|enum|enum _adc16_status_flags
DECL|_adc_channel_mux_mode|enum|typedef enum _adc_channel_mux_mode
DECL|adc16_channel_config_t|typedef|} adc16_channel_config_t;
DECL|adc16_channel_mux_mode_t|typedef|} adc16_channel_mux_mode_t;
DECL|adc16_clock_divider_t|typedef|} adc16_clock_divider_t;
DECL|adc16_clock_source_t|typedef|} adc16_clock_source_t;
DECL|adc16_config_t|typedef|} adc16_config_t;
DECL|adc16_hardware_average_mode_t|typedef|} adc16_hardware_average_mode_t;
DECL|adc16_hardware_compare_config_t|typedef|} adc16_hardware_compare_config_t;
DECL|adc16_hardware_compare_mode_t|typedef|} adc16_hardware_compare_mode_t;
DECL|adc16_long_sample_mode_t|typedef|} adc16_long_sample_mode_t;
DECL|adc16_pga_config_t|typedef|} adc16_pga_config_t;
DECL|adc16_pga_gain_t|typedef|} adc16_pga_gain_t;
DECL|adc16_reference_voltage_source_t|typedef|} adc16_reference_voltage_source_t;
DECL|adc16_resolution_t|typedef|} adc16_resolution_t;
DECL|channelNumber|member|uint32_t channelNumber; /*!< Setting the conversion channel number. The available range is 0-31.
DECL|clockDivider|member|adc16_clock_divider_t clockDivider; /*!< Select the divider of input clock source. */
DECL|clockSource|member|adc16_clock_source_t clockSource; /*!< Select the input clock source to converter. */
DECL|disablePgaChopping|member|bool disablePgaChopping; /*!< Disable the PGA chopping function.
DECL|enableAsynchronousClock|member|bool enableAsynchronousClock; /*!< Enable the asynchronous clock output. */
DECL|enableContinuousConversion|member|bool enableContinuousConversion; /*!< Enable continuous conversion mode. */
DECL|enableDifferentialConversion|member|bool enableDifferentialConversion; /*!< Using Differential sample mode. */
DECL|enableHighSpeed|member|bool enableHighSpeed; /*!< Enable the high-speed mode. */
DECL|enableInterruptOnConversionCompleted|member|bool enableInterruptOnConversionCompleted; /*!< Generate an interrupt request once the conversion is completed. */
DECL|enableLowPower|member|bool enableLowPower; /*!< Enable low power. */
DECL|enableRunInNormalMode|member|bool enableRunInNormalMode; /*!< Enable PGA working in normal mode, or low power mode by default. */
DECL|enableRunInOffsetMeasurement|member|bool enableRunInOffsetMeasurement; /*!< Enable the PGA working in offset measurement mode.
DECL|hardwareCompareMode|member|adc16_hardware_compare_mode_t hardwareCompareMode; /*!< Select the hardware compare mode.
DECL|kADC16_ActiveFlag|enumerator|kADC16_ActiveFlag = ADC_SC2_ADACT_MASK, /*!< Converter is active. */
DECL|kADC16_CalibrationFailedFlag|enumerator|kADC16_CalibrationFailedFlag = ADC_SC3_CALF_MASK, /*!< Calibration is failed. */
DECL|kADC16_ChannelConversionDoneFlag|enumerator|kADC16_ChannelConversionDoneFlag = ADC_SC1_COCO_MASK, /*!< Conversion done. */
DECL|kADC16_ChannelMuxA|enumerator|kADC16_ChannelMuxA = 0U, /*!< For channel with channel mux a. */
DECL|kADC16_ChannelMuxB|enumerator|kADC16_ChannelMuxB = 1U, /*!< For channel with channel mux b. */
DECL|kADC16_ClockDivider1|enumerator|kADC16_ClockDivider1 = 0U, /*!< For divider 1 from the input clock to the module. */
DECL|kADC16_ClockDivider2|enumerator|kADC16_ClockDivider2 = 1U, /*!< For divider 2 from the input clock to the module. */
DECL|kADC16_ClockDivider4|enumerator|kADC16_ClockDivider4 = 2U, /*!< For divider 4 from the input clock to the module. */
DECL|kADC16_ClockDivider8|enumerator|kADC16_ClockDivider8 = 3U, /*!< For divider 8 from the input clock to the module. */
DECL|kADC16_ClockSourceAlt0|enumerator|kADC16_ClockSourceAlt0 = 0U, /*!< Selection 0 of the clock source. */
DECL|kADC16_ClockSourceAlt1|enumerator|kADC16_ClockSourceAlt1 = 1U, /*!< Selection 1 of the clock source. */
DECL|kADC16_ClockSourceAlt2|enumerator|kADC16_ClockSourceAlt2 = 2U, /*!< Selection 2 of the clock source. */
DECL|kADC16_ClockSourceAlt3|enumerator|kADC16_ClockSourceAlt3 = 3U, /*!< Selection 3 of the clock source. */
DECL|kADC16_ClockSourceAsynchronousClock|enumerator|kADC16_ClockSourceAsynchronousClock = kADC16_ClockSourceAlt3, /*!< Using internal asynchronous clock. */
DECL|kADC16_HardwareAverageCount16|enumerator|kADC16_HardwareAverageCount16 = 2U, /*!< For hardware average with 16 samples. */
DECL|kADC16_HardwareAverageCount32|enumerator|kADC16_HardwareAverageCount32 = 3U, /*!< For hardware average with 32 samples. */
DECL|kADC16_HardwareAverageCount4|enumerator|kADC16_HardwareAverageCount4 = 0U, /*!< For hardware average with 4 samples. */
DECL|kADC16_HardwareAverageCount8|enumerator|kADC16_HardwareAverageCount8 = 1U, /*!< For hardware average with 8 samples. */
DECL|kADC16_HardwareAverageDisabled|enumerator|kADC16_HardwareAverageDisabled = 4U, /*!< Disable the hardware average feature.*/
DECL|kADC16_HardwareCompareMode0|enumerator|kADC16_HardwareCompareMode0 = 0U, /*!< x < value1. */
DECL|kADC16_HardwareCompareMode1|enumerator|kADC16_HardwareCompareMode1 = 1U, /*!< x > value1. */
DECL|kADC16_HardwareCompareMode2|enumerator|kADC16_HardwareCompareMode2 = 2U, /*!< if value1 <= value2, then x < value1 || x > value2;
DECL|kADC16_HardwareCompareMode3|enumerator|kADC16_HardwareCompareMode3 = 3U, /*!< if value1 <= value2, then value1 <= x <= value2;
DECL|kADC16_LongSampleCycle10|enumerator|kADC16_LongSampleCycle10 = 2U, /*!< 6 extra ADCK cycles, 10 ADCK cycles total. */
DECL|kADC16_LongSampleCycle16|enumerator|kADC16_LongSampleCycle16 = 1U, /*!< 12 extra ADCK cycles, 16 ADCK cycles total. */
DECL|kADC16_LongSampleCycle24|enumerator|kADC16_LongSampleCycle24 = 0U, /*!< 20 extra ADCK cycles, 24 ADCK cycles total. */
DECL|kADC16_LongSampleCycle6|enumerator|kADC16_LongSampleCycle6 = 3U, /*!< 2 extra ADCK cycles, 6 ADCK cycles total. */
DECL|kADC16_LongSampleDisabled|enumerator|kADC16_LongSampleDisabled = 4U, /*!< Disable the long sample feature. */
DECL|kADC16_PGAGainValueOf16|enumerator|kADC16_PGAGainValueOf16 = 4U, /*!< For amplifier gain of 16. */
DECL|kADC16_PGAGainValueOf1|enumerator|kADC16_PGAGainValueOf1 = 0U, /*!< For amplifier gain of 1. */
DECL|kADC16_PGAGainValueOf2|enumerator|kADC16_PGAGainValueOf2 = 1U, /*!< For amplifier gain of 2. */
DECL|kADC16_PGAGainValueOf32|enumerator|kADC16_PGAGainValueOf32 = 5U, /*!< For amplifier gain of 32. */
DECL|kADC16_PGAGainValueOf4|enumerator|kADC16_PGAGainValueOf4 = 2U, /*!< For amplifier gain of 4. */
DECL|kADC16_PGAGainValueOf64|enumerator|kADC16_PGAGainValueOf64 = 6U, /*!< For amplifier gain of 64. */
DECL|kADC16_PGAGainValueOf8|enumerator|kADC16_PGAGainValueOf8 = 3U, /*!< For amplifier gain of 8. */
DECL|kADC16_ReferenceVoltageSourceValt|enumerator|kADC16_ReferenceVoltageSourceValt = 1U, /*!< For alternate reference pair of ValtH and ValtL. */
DECL|kADC16_ReferenceVoltageSourceVref|enumerator|kADC16_ReferenceVoltageSourceVref = 0U, /*!< For external pins pair of VrefH and VrefL. */
DECL|kADC16_Resolution10or11Bit|enumerator|kADC16_Resolution10or11Bit = 2U, /*!< Single End 10-bit or Differential Sample 11-bit. */
DECL|kADC16_Resolution12or13Bit|enumerator|kADC16_Resolution12or13Bit = 1U, /*!< Single End 12-bit or Differential Sample 13-bit. */
DECL|kADC16_Resolution16Bit|enumerator|kADC16_Resolution16Bit = 3U, /*!< Single End 16-bit or Differential Sample 16-bit. */
DECL|kADC16_Resolution8or9Bit|enumerator|kADC16_Resolution8or9Bit = 0U, /*!< Single End 8-bit or Differential Sample 9-bit. */
DECL|kADC16_ResolutionDF11Bit|enumerator|kADC16_ResolutionDF11Bit = kADC16_Resolution10or11Bit, /*!< Differential Sample 11-bit. */
DECL|kADC16_ResolutionDF13Bit|enumerator|kADC16_ResolutionDF13Bit = kADC16_Resolution12or13Bit, /*!< Differential Sample 13-bit. */
DECL|kADC16_ResolutionDF16Bit|enumerator|kADC16_ResolutionDF16Bit = kADC16_Resolution16Bit, /*!< Differential Sample 16-bit. */
DECL|kADC16_ResolutionDF9Bit|enumerator|kADC16_ResolutionDF9Bit = kADC16_Resolution8or9Bit, /*!< Differential Sample 9-bit. */
DECL|kADC16_ResolutionSE10Bit|enumerator|kADC16_ResolutionSE10Bit = kADC16_Resolution10or11Bit, /*!< Single End 10-bit. */
DECL|kADC16_ResolutionSE12Bit|enumerator|kADC16_ResolutionSE12Bit = kADC16_Resolution12or13Bit, /*!< Single End 12-bit. */
DECL|kADC16_ResolutionSE16Bit|enumerator|kADC16_ResolutionSE16Bit = kADC16_Resolution16Bit, /*!< Single End 16-bit. */
DECL|kADC16_ResolutionSE8Bit|enumerator|kADC16_ResolutionSE8Bit = kADC16_Resolution8or9Bit, /*!< Single End 8-bit. */
DECL|longSampleMode|member|adc16_long_sample_mode_t longSampleMode; /*!< Select the long sample mode. */
DECL|pgaGain|member|adc16_pga_gain_t pgaGain; /*!< Setting PGA gain. */
DECL|referenceVoltageSource|member|adc16_reference_voltage_source_t referenceVoltageSource; /*!< Select the reference voltage source. */
DECL|resolution|member|adc16_resolution_t resolution; /*!< Select the sample resolution mode. */
DECL|value1|member|int16_t value1; /*!< Setting value1 for hardware compare mode. */
DECL|value2|member|int16_t value2; /*!< Setting value2 for hardware compare mode. */
