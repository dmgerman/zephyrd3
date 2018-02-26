DECL|DCDC_EnableAdjustDelay|function|static inline void DCDC_EnableAdjustDelay(DCDC_Type *base, bool enable)
DECL|DCDC_EnableImproveTransition|function|static inline void DCDC_EnableImproveTransition(DCDC_Type *base, bool enable)
DECL|DCDC_EnableOutputRangeComparator|function|static inline void DCDC_EnableOutputRangeComparator(DCDC_Type *base, bool enable)
DECL|DCDC_LockTargetVoltage|function|static inline void DCDC_LockTargetVoltage(DCDC_Type *base)
DECL|DCDC_SetBandgapVoltageTrimValue|function|static inline void DCDC_SetBandgapVoltageTrimValue(DCDC_Type *base, uint32_t trimValue)
DECL|DCDC_SetLPComparatorBiasValue|function|static inline void DCDC_SetLPComparatorBiasValue(DCDC_Type *base, dcdc_comparator_current_bias_t biasVaule)
DECL|FSL_DCDC_DRIVER_VERSION|macro|FSL_DCDC_DRIVER_VERSION
DECL|OverCurrentThreshold|member|dcdc_over_current_threshold_t OverCurrentThreshold; /*!< The threshold of over current detection. */
DECL|PeakCurrentThreshold|member|dcdc_peak_current_threshold_t PeakCurrentThreshold; /*!< The threshold of peak current detection. */
DECL|__FSL_DCDC_H__|macro|__FSL_DCDC_H__
DECL|_dcdc_clock_source|enum|typedef enum _dcdc_clock_source
DECL|_dcdc_comparator_current_bias|enum|typedef enum _dcdc_comparator_current_bias
DECL|_dcdc_count_charging_time_period|enum|typedef enum _dcdc_count_charging_time_period
DECL|_dcdc_count_charging_time_threshold|enum|typedef enum _dcdc_count_charging_time_threshold
DECL|_dcdc_detection_config|struct|typedef struct _dcdc_detection_config
DECL|_dcdc_internal_regulator_config|struct|typedef struct _dcdc_internal_regulator_config
DECL|_dcdc_loop_control_config|struct|typedef struct _dcdc_loop_control_config
DECL|_dcdc_low_power_config|struct|typedef struct _dcdc_low_power_config
DECL|_dcdc_min_power_config|struct|typedef struct _dcdc_min_power_config
DECL|_dcdc_over_current_threshold|enum|typedef enum _dcdc_over_current_threshold
DECL|_dcdc_peak_current_threshold|enum|typedef enum _dcdc_peak_current_threshold
DECL|_dcdc_status_flags_t|enum|enum _dcdc_status_flags_t
DECL|complementFeedForwardStep|member|uint32_t complementFeedForwardStep; /*!< Available range is 0~7. Two's complement feed forward step in duty cycle in
DECL|controlParameterMagnitude|member|uint32_t controlParameterMagnitude; /*!< Available range is 0~15. Magnitude of proportional control parameter in the
DECL|countChargingTimePeriod|member|countChargingTimePeriod; /*!< The period of counting the charging times in power save mode. */
DECL|countChargingTimeThreshold|member|countChargingTimeThreshold; /*!< the threshold of the counting number of charging times during
DECL|dcdc_clock_source_t|typedef|} dcdc_clock_source_t;
DECL|dcdc_comparator_current_bias_t|typedef|} dcdc_comparator_current_bias_t;
DECL|dcdc_count_charging_time_period_t|typedef|} dcdc_count_charging_time_period_t;
DECL|dcdc_count_charging_time_threshold_t|typedef|} dcdc_count_charging_time_threshold_t;
DECL|dcdc_detection_config_t|typedef|} dcdc_detection_config_t;
DECL|dcdc_internal_regulator_config_t|typedef|} dcdc_internal_regulator_config_t;
DECL|dcdc_loop_control_config_t|typedef|} dcdc_loop_control_config_t;
DECL|dcdc_low_power_config_t|typedef|} dcdc_low_power_config_t;
DECL|dcdc_min_power_config_t|typedef|} dcdc_min_power_config_t;
DECL|dcdc_over_current_threshold_t|typedef|} dcdc_over_current_threshold_t;
DECL|dcdc_peak_current_threshold_t|typedef|} dcdc_peak_current_threshold_t;
DECL|enableAdjustHystereticValue|member|bool enableAdjustHystereticValue; /*!< Adjust hysteretic value in low power from 12.5mV to 25mV. */
DECL|enableCommonHysteresis|member|bool enableCommonHysteresis; /*!< Enable hysteresis in switching converter common mode analog comparators.
DECL|enableCommonThresholdDetection|member|bool enableCommonThresholdDetection; /*!< Increase the threshold detection for common mode analog comparator. */
DECL|enableInvertHysteresisSign|member|bool enableInvertHysteresisSign; /*!< Invert the sign of the hysteresis in DC-DC analog comparators. */
DECL|enableLoadResistor|member|bool enableLoadResistor; /*!< control the load resistor of the internal regulator of DCDC, the load resistor is
DECL|enableOverloadDetection|member|bool enableOverloadDetection; /*!< Enable the overload detection in power save mode, if current is larger than the
DECL|enableRCScaleCircuit|member|uint32_t enableRCScaleCircuit; /*!< Available range is 0~7. Enable analog circuit of DC-DC converter to respond
DECL|enableRCThresholdDetection|member|bool enableRCThresholdDetection; /*!< Increase the threshold detection for RC scale circuit. */
DECL|enableUseHalfFreqForContinuous|member|bool enableUseHalfFreqForContinuous; /*!< Set DCDC clock to half frequency for the continuous mode. */
DECL|enableXtalokDetection|member|bool enableXtalokDetection; /*!< Enable xtalok detection circuit. */
DECL|feedbackPoint|member|uint32_t feedbackPoint; /*!< Available range is 0~3. Select the feedback point of the internal regulator. */
DECL|integralProportionalRatio|member|uint32_t integralProportionalRatio; /*!< Available range is 0~3.Ratio of integral control parameter to proportional
DECL|kDCDC_ClockAutoSwitch|enumerator|kDCDC_ClockAutoSwitch = 0U, /*!< Automatic clock switch from internal oscillator to external clock. */
DECL|kDCDC_ClockExternalOsc|enumerator|kDCDC_ClockExternalOsc = 2U, /*!< Use external 24M crystal oscillator. */
DECL|kDCDC_ClockInternalOsc|enumerator|kDCDC_ClockInternalOsc = 1U, /*!< Use internal oscillator. */
DECL|kDCDC_ComparatorCurrentBias100nA|enumerator|kDCDC_ComparatorCurrentBias100nA = 1U, /*!< The current bias of low power comparator is 100nA. */
DECL|kDCDC_ComparatorCurrentBias200nA|enumerator|kDCDC_ComparatorCurrentBias200nA = 2U, /*!< The current bias of low power comparator is 200nA. */
DECL|kDCDC_ComparatorCurrentBias400nA|enumerator|kDCDC_ComparatorCurrentBias400nA = 3U, /*!< The current bias of low power comparator is 400nA. */
DECL|kDCDC_ComparatorCurrentBias50nA|enumerator|kDCDC_ComparatorCurrentBias50nA = 0U, /*!< The current bias of low power comparator is 50nA. */
DECL|kDCDC_CountChargingTimePeriod16Cycle|enumerator|kDCDC_CountChargingTimePeriod16Cycle = 1U, /*!< Sixteen 32k cycle. */
DECL|kDCDC_CountChargingTimePeriod8Cycle|enumerator|kDCDC_CountChargingTimePeriod8Cycle = 0U, /*!< Eight 32k cycle. */
DECL|kDCDC_CountChargingTimeThreshold16|enumerator|kDCDC_CountChargingTimeThreshold16 = 2U, /*!< 0x2: 16. */
DECL|kDCDC_CountChargingTimeThreshold32|enumerator|kDCDC_CountChargingTimeThreshold32 = 0U, /*!< 0x0: 32. */
DECL|kDCDC_CountChargingTimeThreshold64|enumerator|kDCDC_CountChargingTimeThreshold64 = 1U, /*!< 0x1: 64. */
DECL|kDCDC_CountChargingTimeThreshold8|enumerator|kDCDC_CountChargingTimeThreshold8 = 3U, /*!< 0x3: 8. */
DECL|kDCDC_LockedOKStatus|enumerator|kDCDC_LockedOKStatus = (1U << 0U), /*!< Indicate DCDC status. 1'b1: DCDC already settled 1'b0: DCDC is settling. */
DECL|kDCDC_OverCurrentThresholdAlt0|enumerator|kDCDC_OverCurrentThresholdAlt0 = 0U, /*!< 1A in the run mode, 0.25A in the power save mode. */
DECL|kDCDC_OverCurrentThresholdAlt1|enumerator|kDCDC_OverCurrentThresholdAlt1 = 1U, /*!< 2A in the run mode, 0.25A in the power save mode. */
DECL|kDCDC_OverCurrentThresholdAlt2|enumerator|kDCDC_OverCurrentThresholdAlt2 = 2U, /*!< 1A in the run mode, 0.2A in the power save mode. */
DECL|kDCDC_OverCurrentThresholdAlt3|enumerator|kDCDC_OverCurrentThresholdAlt3 = 3U, /*!< 2A in the run mode, 0.2A in the power save mode. */
DECL|kDCDC_PeakCurrentThresholdAlt0|enumerator|kDCDC_PeakCurrentThresholdAlt0 = 0U, /*!< 150mA peak current threshold. */
DECL|kDCDC_PeakCurrentThresholdAlt1|enumerator|kDCDC_PeakCurrentThresholdAlt1 = 1U, /*!< 250mA peak current threshold. */
DECL|kDCDC_PeakCurrentThresholdAlt2|enumerator|kDCDC_PeakCurrentThresholdAlt2 = 2U, /*!< 350mA peak current threshold. */
DECL|kDCDC_PeakCurrentThresholdAlt3|enumerator|kDCDC_PeakCurrentThresholdAlt3 = 3U, /*!< 450mA peak current threshold. */
DECL|kDCDC_PeakCurrentThresholdAlt4|enumerator|kDCDC_PeakCurrentThresholdAlt4 = 4U, /*!< 550mA peak current threshold. */
DECL|kDCDC_PeakCurrentThresholdAlt5|enumerator|kDCDC_PeakCurrentThresholdAlt5 = 5U, /*!< 650mA peak current threshold. */
DECL|powerDownLowVlotageDetection|member|bool powerDownLowVlotageDetection; /*!< Power down low-voltage detection comparator. */
DECL|powerDownOverCurrentDetection|member|bool powerDownOverCurrentDetection; /*!< Power down over-current detection. */
DECL|powerDownOverVoltageDetection|member|bool powerDownOverVoltageDetection; /*!< Power down over-voltage detection comparator. */
DECL|powerDownPeakCurrentDetection|member|bool powerDownPeakCurrentDetection; /*!< Power down peak-current detection. */
DECL|powerDownZeroCrossDetection|member|bool powerDownZeroCrossDetection; /*!< Power down the zero cross detection function for discontinuous conductor
