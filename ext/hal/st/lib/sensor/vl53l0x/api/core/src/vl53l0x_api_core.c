DECL|LOG_FUNCTION_END_FMT|macro|LOG_FUNCTION_END_FMT
DECL|LOG_FUNCTION_END|macro|LOG_FUNCTION_END
DECL|LOG_FUNCTION_START|macro|LOG_FUNCTION_START
DECL|VL53L0X_calc_dmax|function|VL53L0X_Error VL53L0X_calc_dmax(VL53L0X_DEV Dev, FixPoint1616_t totalSignalRate_mcps, FixPoint1616_t totalCorrSignalRate_mcps, FixPoint1616_t pwMult,
DECL|VL53L0X_calc_macro_period_ps|function|uint32_t VL53L0X_calc_macro_period_ps(VL53L0X_DEV Dev, uint8_t vcsel_period_pclks)
DECL|VL53L0X_calc_sigma_estimate|function|VL53L0X_Error VL53L0X_calc_sigma_estimate(VL53L0X_DEV Dev,VL53L0X_RangingMeasurementData_t *pRangingMeasurementData, FixPoint1616_t *pSigmaEstimate, uint32_t *pDmax_mm)
DECL|VL53L0X_calc_timeout_mclks|function|uint32_t VL53L0X_calc_timeout_mclks(VL53L0X_DEV Dev,uint32_t timeout_period_us, uint8_t vcsel_period_pclks)
DECL|VL53L0X_calc_timeout_us|function|uint32_t VL53L0X_calc_timeout_us(VL53L0X_DEV Dev,uint16_t timeout_period_mclks, uint8_t vcsel_period_pclks)
DECL|VL53L0X_decode_timeout|function|uint32_t VL53L0X_decode_timeout(uint16_t encoded_timeout)
DECL|VL53L0X_decode_vcsel_period|function|uint8_t VL53L0X_decode_vcsel_period(uint8_t vcsel_period_reg)
DECL|VL53L0X_device_read_strobe|function|VL53L0X_Error VL53L0X_device_read_strobe(VL53L0X_DEV Dev)
DECL|VL53L0X_encode_timeout|function|uint16_t VL53L0X_encode_timeout(uint32_t timeout_macro_clks)
DECL|VL53L0X_encode_vcsel_period|function|uint8_t VL53L0X_encode_vcsel_period(uint8_t vcsel_period_pclks)
DECL|VL53L0X_get_info_from_device|function|VL53L0X_Error VL53L0X_get_info_from_device(VL53L0X_DEV Dev, uint8_t option)
DECL|VL53L0X_get_measurement_timing_budget_micro_seconds|function|VL53L0X_Error VL53L0X_get_measurement_timing_budget_micro_seconds(VL53L0X_DEV Dev,uint32_t *pMeasurementTimingBudgetMicroSeconds)
DECL|VL53L0X_get_pal_range_status|function|VL53L0X_Error VL53L0X_get_pal_range_status(VL53L0X_DEV Dev,uint8_t DeviceRangeStatus, FixPoint1616_t SignalRate, uint16_t EffectiveSpadRtnCount, VL53L0X_RangingMeasurementData_t *pRangingMeasurementData,
DECL|VL53L0X_get_total_signal_rate|function|VL53L0X_Error VL53L0X_get_total_signal_rate(VL53L0X_DEV Dev,VL53L0X_RangingMeasurementData_t *pRangingMeasurementData, FixPoint1616_t *ptotal_signal_rate_mcps)
DECL|VL53L0X_get_total_xtalk_rate|function|VL53L0X_Error VL53L0X_get_total_xtalk_rate(VL53L0X_DEV Dev,VL53L0X_RangingMeasurementData_t *pRangingMeasurementData, FixPoint1616_t *ptotal_xtalk_rate_mcps)
DECL|VL53L0X_get_vcsel_pulse_period|function|VL53L0X_Error VL53L0X_get_vcsel_pulse_period(VL53L0X_DEV Dev,VL53L0X_VcselPeriod VcselPeriodType, uint8_t *pVCSELPulsePeriodPCLK)
DECL|VL53L0X_isqrt|function|uint32_t VL53L0X_isqrt(uint32_t num)
DECL|VL53L0X_load_tuning_settings|function|VL53L0X_Error VL53L0X_load_tuning_settings(VL53L0X_DEV Dev,uint8_t *pTuningSettingBuffer)
DECL|VL53L0X_measurement_poll_for_completion|function|VL53L0X_Error VL53L0X_measurement_poll_for_completion(VL53L0X_DEV Dev)
DECL|VL53L0X_quadrature_sum|function|uint32_t VL53L0X_quadrature_sum(uint32_t a, uint32_t b)
DECL|VL53L0X_reverse_bytes|function|VL53L0X_Error VL53L0X_reverse_bytes(uint8_t *data, uint32_t size)
DECL|VL53L0X_set_measurement_timing_budget_micro_seconds|function|VL53L0X_Error VL53L0X_set_measurement_timing_budget_micro_seconds(VL53L0X_DEV Dev,uint32_t MeasurementTimingBudgetMicroSeconds)
DECL|VL53L0X_set_vcsel_pulse_period|function|VL53L0X_Error VL53L0X_set_vcsel_pulse_period(VL53L0X_DEV Dev,VL53L0X_VcselPeriod VcselPeriodType, uint8_t VCSELPulsePeriodPCLK)
DECL|get_sequence_step_timeout|function|VL53L0X_Error get_sequence_step_timeout(VL53L0X_DEV Dev,VL53L0X_SequenceStepId SequenceStepId, uint32_t *pTimeOutMicroSecs)
DECL|set_sequence_step_timeout|function|VL53L0X_Error set_sequence_step_timeout(VL53L0X_DEV Dev,VL53L0X_SequenceStepId SequenceStepId, uint32_t TimeOutMicroSecs)
