DECL|DCDC_AdjustDutyCycleSwitchingTargetOutput|function|static inline void DCDC_AdjustDutyCycleSwitchingTargetOutput(DCDC_Type *base, uint32_t value)
DECL|DCDC_DisableInterrupts|function|static inline void DCDC_DisableInterrupts(DCDC_Type *base, uint32_t mask)
DECL|DCDC_DoSoftShutdown|function|static inline void DCDC_DoSoftShutdown(DCDC_Type *base)
DECL|DCDC_EnableInterrupts|function|static inline void DCDC_EnableInterrupts(DCDC_Type *base, uint32_t mask)
DECL|DCDC_EnableOutputRangeComparator|function|static inline void DCDC_EnableOutputRangeComparator(DCDC_Type *base, bool enable)
DECL|DCDC_EnableReduceCurrent|function|static inline void DCDC_EnableReduceCurrent(DCDC_Type *base, bool enable)
DECL|DCDC_EnableXtalOKDetectionCircuit|function|static inline void DCDC_EnableXtalOKDetectionCircuit(DCDC_Type *base, bool enable)
DECL|DCDC_LockTargetVoltage|function|static inline void DCDC_LockTargetVoltage(DCDC_Type *base)
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_ADJTN_MASK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_ADJTN_MASK
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_ADJTN_MASK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_ADJTN_MASK
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_ADJTN|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_ADJTN
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_ADJTN|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_ADJTN
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_DISABLE_STEP_MASK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_DISABLE_STEP_MASK
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_DISABLE_STEP_MASK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_DISABLE_STEP_MASK
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BOOST_MASK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BOOST_MASK
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BOOST_MASK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BOOST_MASK
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BOOST|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BOOST
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BOOST|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BOOST
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BUCK_MASK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BUCK_MASK
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BUCK_MASK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BUCK_MASK
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BUCK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BUCK
DECL|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BUCK|macro|DCDC_REG3_DCDC_VDD1P5XCTRL_TRG_BUCK
DECL|DCDC_SetBatteryVoltageDivider|function|static inline void DCDC_SetBatteryVoltageDivider(DCDC_Type *base, dcdc_vbat_divider_t divider)
DECL|DCDC_SetUpperLimitDutyCycleBoost|function|static inline void DCDC_SetUpperLimitDutyCycleBoost(DCDC_Type *base, uint32_t value)
DECL|DCDC_SetUpperLimitDutyCycleBuck|function|static inline void DCDC_SetUpperLimitDutyCycleBuck(DCDC_Type *base, uint32_t value)
DECL|FSL_DCDC_DRIVER_VERSION|macro|FSL_DCDC_DRIVER_VERSION
DECL|_FSL_DCDC_H_|macro|_FSL_DCDC_H_
DECL|_dcdc_clock_source_t|enum|typedef enum _dcdc_clock_source_t
DECL|_dcdc_hysteretic_threshold_offset_value|enum|typedef enum _dcdc_hysteretic_threshold_offset_value
DECL|_dcdc_interrupt_enable_t|enum|enum _dcdc_interrupt_enable_t
DECL|_dcdc_loop_control_config|struct|typedef struct _dcdc_loop_control_config
DECL|_dcdc_low_power_config|struct|typedef struct _dcdc_low_power_config
DECL|_dcdc_min_power_config|struct|typedef struct _dcdc_min_power_config
DECL|_dcdc_pswitch_detect_event_t|enum|enum _dcdc_pswitch_detect_event_t
DECL|_dcdc_pulsed_integrator_config_t|struct|typedef struct _dcdc_pulsed_integrator_config_t
DECL|_dcdc_status_flags_t|enum|enum _dcdc_status_flags_t
DECL|_dcdc_vbat_divider|enum|typedef enum _dcdc_vbat_divider
DECL|_dcdc_work_mode|enum|typedef enum _dcdc_work_mode
DECL|dcdc_clock_source_t|typedef|} dcdc_clock_source_t;
DECL|dcdc_hysteretic_threshold_offset_value_t|typedef|} dcdc_hysteretic_threshold_offset_value_t;
DECL|dcdc_loop_control_config_t|typedef|} dcdc_loop_control_config_t;
DECL|dcdc_low_power_config_t|typedef|} dcdc_low_power_config_t;
DECL|dcdc_min_power_config_t|typedef|} dcdc_min_power_config_t;
DECL|dcdc_pulsed_integrator_config_t|typedef|} dcdc_pulsed_integrator_config_t;
DECL|dcdc_vbat_divider_t|typedef|} dcdc_vbat_divider_t;
DECL|dcdc_work_mode_t|typedef|} dcdc_work_mode_t;
DECL|enableAdjustHystereticValueComparator|member|bool enableAdjustHystereticValueComparator; /*!< Adjust hysteretic value in low power comparator. */
DECL|enableAdjustHystereticValueSense|member|bool enableAdjustHystereticValueSense; /*!< Adjust hysteretic value in low power voltage sense. */
DECL|enableCommonHysteresisThresh|member|bool enableCommonHysteresisThresh; /*!< This field act the same rule as enableCommonHysteresis. However, if this
DECL|enableCommonHysteresis|member|bool enableCommonHysteresis; /*!< Enable hysteresis in switching converter common mode analog comparators. This
DECL|enableDiffComparators|member|bool enableDiffComparators; /*!< Enable low power differential comparators, to sense lower supply in pulsed mode. */
DECL|enableDiffHysteresisThresh|member|bool enableDiffHysteresisThresh; /*!< This field act the same rule as enableDiffHysteresis. However, if this field
DECL|enableDiffHysteresis|member|bool enableDiffHysteresis; /*!< Enable hysteresis in switching converter differential mode analog comparators. This
DECL|enableHysteresisVoltageSense|member|bool enableHysteresisVoltageSense; /*!< Enable hysteresis in low power voltage sense. */
DECL|enableHystersisComparator|member|bool enableHystersisComparator; /*!< Enable hysteresis in low power comparator. */
DECL|enableInvertHysteresisSign|member|bool enableInvertHysteresisSign; /*!< Invert the sign of the hysteresis in DC-DC analog comparators. */
DECL|enablePulseRunSpeedup|member|bool enablePulseRunSpeedup; /*!< Enable pulse run speedup. */
DECL|enableUseDoubleFetForContinuous|member|bool enableUseDoubleFetForContinuous; /*!< Use double switch FET for the continuous mode. */
DECL|enableUseDoubleFetForPulsed|member|bool enableUseDoubleFetForPulsed; /*!< Use double switch FET for the Pulsed mode. */
DECL|enableUseHalfFetForContinuous|member|bool enableUseHalfFetForContinuous; /*!< Use half switch FET for the continuous mode. */
DECL|enableUseHalfFetForPulsed|member|bool enableUseHalfFetForPulsed; /*!< Use half switch FET for the Pulsed mode. */
DECL|enableUseHalfFreqForContinuous|member|bool enableUseHalfFreqForContinuous; /*!< Set DCDC clock to half frequency for the continuous mode. */
DECL|enableUseHalfFreqForPulsed|member|bool enableUseHalfFreqForPulsed; /*!< Set DCDC clock to half frequency for the Pulsed mode. */
DECL|enableUseUserIntegratorValue|member|bool enableUseUserIntegratorValue; /*!< Enable to use the setting value in userIntegratorValue field. Otherwise, the
DECL|hystereticLowerThresholdValue|member|dcdc_hysteretic_threshold_offset_value_t hystereticLowerThresholdValue; /*!< Configure the hysteretic lower
DECL|hystereticUpperThresholdValue|member|dcdc_hysteretic_threshold_offset_value_t hystereticUpperThresholdValue; /*!< Configure the hysteretic upper
DECL|kDCDC_ClockAutoSwitch|enumerator|kDCDC_ClockAutoSwitch = 0U, /*!< Automatic clock switch from internal oscillator to external clock. */
DECL|kDCDC_ClockExternalOsc|enumerator|kDCDC_ClockExternalOsc, /* Use external 32M crystal oscillator. */
DECL|kDCDC_ClockInternalOsc|enumerator|kDCDC_ClockInternalOsc, /* Use internal oscillator. */
DECL|kDCDC_HystereticThresholdOffset0mV|enumerator|kDCDC_HystereticThresholdOffset0mV = 0U, /*!< Target voltage value +/- 0mV. */
DECL|kDCDC_HystereticThresholdOffset25mV|enumerator|kDCDC_HystereticThresholdOffset25mV = 1U, /*!< Target voltage value +/- 25mV. */
DECL|kDCDC_HystereticThresholdOffset50mV|enumerator|kDCDC_HystereticThresholdOffset50mV = 2U, /*!< Target voltage value +/- 50mV. */
DECL|kDCDC_HystereticThresholdOffset75mV|enumerator|kDCDC_HystereticThresholdOffset75mV = 3U, /*!< Target voltage value +/- 75mV. */
DECL|kDCDC_LockedOKStatus|enumerator|kDCDC_LockedOKStatus = (1U << 0), /*!< Status to indicate DCDC lock. Read only bit. */
DECL|kDCDC_PSwitchEdgeDetectInterruptEnable|enumerator|kDCDC_PSwitchEdgeDetectInterruptEnable = DCDC_REG6_PSWITCH_INT_MUTE_MASK, /*!< Enable the edge detect interrupt. */
DECL|kDCDC_PSwitchFallingEdgeDetectEnable|enumerator|kDCDC_PSwitchFallingEdgeDetectEnable = DCDC_REG6_PSWITCH_INT_FALL_EN_MASK, /*!< Enable falling edge detect. */
DECL|kDCDC_PSwitchInterruptStatus|enumerator|kDCDC_PSwitchInterruptStatus = (1U << 2), /*!< PSWITCH edge detection interrupt status. */
DECL|kDCDC_PSwitchRisingEdgeDetectEnable|enumerator|kDCDC_PSwitchRisingEdgeDetectEnable = DCDC_REG6_PSWITCH_INT_RISE_EN_MASK, /*!< Enable rising edge detect. */
DECL|kDCDC_PSwitchStatus|enumerator|kDCDC_PSwitchStatus = (1U << 1), /*!< Status to indicate PSWITCH signal. Read only bit. */
DECL|kDCDC_VBatVoltageDivider1|enumerator|kDCDC_VBatVoltageDivider1 = 1U, /*!< VBat. */
DECL|kDCDC_VBatVoltageDivider2|enumerator|kDCDC_VBatVoltageDivider2 = 2U, /*!< VBat/2. */
DECL|kDCDC_VBatVoltageDivider4|enumerator|kDCDC_VBatVoltageDivider4 = 3U, /*!< VBat/4 */
DECL|kDCDC_VBatVoltageDividerOff|enumerator|kDCDC_VBatVoltageDividerOff = 0U, /*!< The sensor signal is disabled. */
DECL|kDCDC_WorkInContinuousMode|enumerator|kDCDC_WorkInContinuousMode = 0U, /*!< DCDC works in continuous mode when SOC is in low power mode. */
DECL|kDCDC_WorkInPulsedMode|enumerator|kDCDC_WorkInPulsedMode = 1U, /*!< DCDC works in pulsed mode when SOC is in low power mode. */
DECL|userIntegratorValue|member|uint32_t userIntegratorValue; /*!< User defined integrator value. The available value is 19-bit. */
DECL|workModeInVLPRW|member|dcdc_work_mode_t workModeInVLPRW; /*!< Select the behavior of DCDC in device VLPR and VLPW low power modes. */
DECL|workModeInVLPS|member|dcdc_work_mode_t workModeInVLPS; /*!< Select the behavior of DCDC in device VLPS low power modes. */
