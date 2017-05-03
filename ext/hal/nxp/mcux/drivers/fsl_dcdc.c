DECL|DCDC_AdjustTargetVoltage|function|void DCDC_AdjustTargetVoltage(DCDC_Type *base, uint32_t vdd1p5xBoost, uint32_t vdd1p5xBuck, uint32_t vdd1p8)
DECL|DCDC_ClearStatusFlags|function|void DCDC_ClearStatusFlags(DCDC_Type *base, uint32_t mask) /* Clear flags indicated by mask. */
DECL|DCDC_Deinit|function|void DCDC_Deinit(DCDC_Type *base)
DECL|DCDC_GetDefaultLoopControlConfig|function|void DCDC_GetDefaultLoopControlConfig(dcdc_loop_control_config_t *config)
DECL|DCDC_GetDefaultLowPowerConfig|function|void DCDC_GetDefaultLowPowerConfig(dcdc_low_power_config_t *config)
DECL|DCDC_GetDefaultMinPowerDefault|function|void DCDC_GetDefaultMinPowerDefault(dcdc_min_power_config_t *config)
DECL|DCDC_GetDefaultPulsedIntegratorConfig|function|void DCDC_GetDefaultPulsedIntegratorConfig(dcdc_pulsed_integrator_config_t *config)
DECL|DCDC_GetInstance|function|static uint32_t DCDC_GetInstance(DCDC_Type *base)
DECL|DCDC_GetStatusFlags|function|uint32_t DCDC_GetStatusFlags(DCDC_Type *base)
DECL|DCDC_Init|function|void DCDC_Init(DCDC_Type *base)
DECL|DCDC_SetBatteryMonitorValue|function|void DCDC_SetBatteryMonitorValue(DCDC_Type *base, uint32_t battValue)
DECL|DCDC_SetClockSource|function|void DCDC_SetClockSource(DCDC_Type *base, dcdc_clock_source_t clockSource)
DECL|DCDC_SetLoopControlConfig|function|void DCDC_SetLoopControlConfig(DCDC_Type *base, const dcdc_loop_control_config_t *config)
DECL|DCDC_SetLowPowerConfig|function|void DCDC_SetLowPowerConfig(DCDC_Type *base, const dcdc_low_power_config_t *config)
DECL|DCDC_SetMinPowerConfig|function|void DCDC_SetMinPowerConfig(DCDC_Type *base, const dcdc_min_power_config_t *config)
DECL|DCDC_SetPSwitchInterruptConfig|function|void DCDC_SetPSwitchInterruptConfig(DCDC_Type *base, uint32_t mask)
DECL|DCDC_SetPulsedIntegratorConfig|function|void DCDC_SetPulsedIntegratorConfig(DCDC_Type *base, const dcdc_pulsed_integrator_config_t *config)
DECL|s_dcdcBases|variable|s_dcdcBases
DECL|s_dcdcClocks|variable|s_dcdcClocks
