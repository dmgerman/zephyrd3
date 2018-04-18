DECL|ADC_ClearStatusFlag|function|static inline void ADC_ClearStatusFlag(ADC_Type* base, uint32_t flags)
DECL|ADC_GetCalibrationResult|function|static inline uint8_t ADC_GetCalibrationResult(ADC_Type* base)
DECL|ADC_GetConvertSpeed|function|static inline uint8_t ADC_GetConvertSpeed(ADC_Type* base)
DECL|ADC_GetConvertTrigMode|function|static inline uint8_t ADC_GetConvertTrigMode(ADC_Type* base)
DECL|ADC_GetPowerMode|function|static inline uint8_t ADC_GetPowerMode(ADC_Type* base)
DECL|ADC_GetResolutionMode|function|static inline uint8_t ADC_GetResolutionMode(ADC_Type* base)
DECL|ADC_GetStatusFlag|function|static inline uint32_t ADC_GetStatusFlag(ADC_Type* base, uint32_t flags)
DECL|ADC_SetOffsetVal|function|static inline void ADC_SetOffsetVal(ADC_Type* base, uint16_t val)
DECL|ADC_SetResolutionMode|function|static inline void ADC_SetResolutionMode(ADC_Type* base, uint8_t mode)
DECL|__ADC_IMX6SX_H__|macro|__ADC_IMX6SX_H__
DECL|_adc_average_number|enum|enum _adc_average_number
DECL|_adc_clock_divide|enum|enum _adc_clock_divide
DECL|_adc_clock_source|enum|enum _adc_clock_source
DECL|_adc_compare_mode|enum|enum _adc_compare_mode
DECL|_adc_convert_speed_config|enum|enum _adc_convert_speed_config
DECL|_adc_convert_trigger_mode|enum|enum _adc_convert_trigger_mode
DECL|_adc_general_status_flag|enum|enum _adc_general_status_flag
DECL|_adc_init_config|struct|typedef struct _adc_init_config
DECL|_adc_power_mode|enum|enum _adc_power_mode
DECL|_adc_resolution_mode|enum|enum _adc_resolution_mode
DECL|_adc_sample_time_duration|enum|enum _adc_sample_time_duration
DECL|adcAsynClock|enumerator|adcAsynClock = 3U, /*!< Select asynchronous clock as input clock source.*/
DECL|adcAvgNum16|enumerator|adcAvgNum16 = 2U, /*!< ADC Hardware Average Number is set to 16.*/
DECL|adcAvgNum32|enumerator|adcAvgNum32 = 3U, /*!< ADC Hardware Average Number is set to 32.*/
DECL|adcAvgNum4|enumerator|adcAvgNum4 = 0U, /*!< ADC Hardware Average Number is set to 4.*/
DECL|adcAvgNum8|enumerator|adcAvgNum8 = 1U, /*!< ADC Hardware Average Number is set to 8.*/
DECL|adcAvgNumNone|enumerator|adcAvgNumNone = 4U, /*!< Disable ADC Hardware Average.*/
DECL|adcCmpModeDisable|enumerator|adcCmpModeDisable, /*!< ADC compare function disable.*/
DECL|adcCmpModeGreaterThanCmpVal1|enumerator|adcCmpModeGreaterThanCmpVal1, /*!< Compare true if the result is greater than or equal to compare value 1.*/
DECL|adcCmpModeInRangInclusive|enumerator|adcCmpModeInRangInclusive, /*!< Compare true if the result is greater than or equal to compare value 1 and the result is less than or equal to compare value 2.*/
DECL|adcCmpModeInRangNotInclusive|enumerator|adcCmpModeInRangNotInclusive, /*!< Compare true if the result is less than compare value 1 and the result is greater than compare value 2.*/
DECL|adcCmpModeLessThanCmpVal1|enumerator|adcCmpModeLessThanCmpVal1, /*!< Compare true if the result is less than compare value 1.*/
DECL|adcCmpModeOutRangInclusive|enumerator|adcCmpModeOutRangInclusive, /*!< Compare true if the result is greater than or equal to compare value 1 or the result is less than or equal to compare value 2.*/
DECL|adcCmpModeOutRangNotInclusive|enumerator|adcCmpModeOutRangNotInclusive, /*!< Compare true if the result is less than compare value 1 or the result is Greater than compare value 2.*/
DECL|adcFlagAsynWakeUpInt|enumerator|adcFlagAsynWakeUpInt = 1U << 0, /*!< Indicate asynchronous wake up interrupt occurred in stop mode.*/
DECL|adcFlagCalibrateFailed|enumerator|adcFlagCalibrateFailed = 1U << 1, /*!< Indicate the result of the calibration sequence.*/
DECL|adcFlagConvertActive|enumerator|adcFlagConvertActive = 1U << 2, /*!< Indicate a conversion is in the process.*/
DECL|adcHardwareTrigger|enumerator|adcHardwareTrigger = 1U, /*!< ADC hardware trigger a conversion.*/
DECL|adcHighSpeed|enumerator|adcHighSpeed = 1U, /*!< ADC set as high conversion speed.*/
DECL|adcInputClockDiv1|enumerator|adcInputClockDiv1 = 0U, /*!< Input clock divide 1 to generate internal clock.*/
DECL|adcInputClockDiv2|enumerator|adcInputClockDiv2 = 1U, /*!< Input clock divide 2 to generate internal clock.*/
DECL|adcInputClockDiv4|enumerator|adcInputClockDiv4 = 2U, /*!< Input clock divide 4 to generate internal clock.*/
DECL|adcInputClockDiv8|enumerator|adcInputClockDiv8 = 3U, /*!< Input clock divide 8 to generate internal clock.*/
DECL|adcIpgClockDivide2|enumerator|adcIpgClockDivide2 = 1U, /*!< Select ipg clock divide 2 as input clock source.*/
DECL|adcIpgClock|enumerator|adcIpgClock = 0U, /*!< Select ipg clock as input clock source.*/
DECL|adcLowPowerMode|enumerator|adcLowPowerMode = 1U, /*!< ADC hard block set as low power mode.*/
DECL|adcNormalPowerMode|enumerator|adcNormalPowerMode = 0U, /*!< ADC hard block set as normal power mode.*/
DECL|adcNormalSpeed|enumerator|adcNormalSpeed = 0U, /*!< ADC set as normal conversion speed.*/
DECL|adcResolutionBit10|enumerator|adcResolutionBit10 = 1U, /*!< ADC resolution set as 10 bit conversion mode.*/
DECL|adcResolutionBit12|enumerator|adcResolutionBit12 = 2U, /*!< ADC resolution set as 12 bit conversion mode.*/
DECL|adcResolutionBit8|enumerator|adcResolutionBit8 = 0U, /*!< ADC resolution set as 8 bit conversion mode.*/
DECL|adcSamplePeriodClock12|enumerator|adcSamplePeriodClock12, /*!< The sample time duration is set as 12 ADC clocks.*/
DECL|adcSamplePeriodClock16|enumerator|adcSamplePeriodClock16, /*!< The sample time duration is set as 16 ADC clocks.*/
DECL|adcSamplePeriodClock20|enumerator|adcSamplePeriodClock20, /*!< The sample time duration is set as 20 ADC clocks.*/
DECL|adcSamplePeriodClock24|enumerator|adcSamplePeriodClock24, /*!< The sample time duration is set as 24 ADC clocks.*/
DECL|adcSamplePeriodClock2|enumerator|adcSamplePeriodClock2, /*!< The sample time duration is set as 2 ADC clocks.*/
DECL|adcSamplePeriodClock4|enumerator|adcSamplePeriodClock4, /*!< The sample time duration is set as 4 ADC clocks.*/
DECL|adcSamplePeriodClock6|enumerator|adcSamplePeriodClock6, /*!< The sample time duration is set as 6 ADC clocks.*/
DECL|adcSamplePeriodClock8|enumerator|adcSamplePeriodClock8, /*!< The sample time duration is set as 8 ADC clocks.*/
DECL|adcSoftwareTrigger|enumerator|adcSoftwareTrigger = 0U, /*!< ADC software trigger a conversion.*/
DECL|adc_init_config_t|typedef|} adc_init_config_t;
DECL|averageNumber|member|uint8_t averageNumber; /*!< The average number for hardware average function.*/
DECL|clockSource|member|uint8_t clockSource; /*!< Select input clock source to generate the internal conversion clock.*/
DECL|divideRatio|member|uint8_t divideRatio; /*!< Selects divide ratio used to generate the internal conversion clock.*/
DECL|resolutionMode|member|uint8_t resolutionMode; /*!< Set ADC resolution mode.*/
