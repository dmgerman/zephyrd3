DECL|SCT0_IRQHandler|function|void SCT0_IRQHandler(void)
DECL|SCTIMER_CreateAndScheduleEvent|function|status_t SCTIMER_CreateAndScheduleEvent(SCT_Type *base, sctimer_event_t howToMonitor, uint32_t matchValue, uint32_t whichIO, sctimer_counter_t whichCounter,
DECL|SCTIMER_Deinit|function|void SCTIMER_Deinit(SCT_Type *base)
DECL|SCTIMER_EventHandleIRQ|function|void SCTIMER_EventHandleIRQ(SCT_Type *base)
DECL|SCTIMER_GetCurrentState|function|uint32_t SCTIMER_GetCurrentState(SCT_Type *base)
DECL|SCTIMER_GetDefaultConfig|function|void SCTIMER_GetDefaultConfig(sctimer_config_t *config)
DECL|SCTIMER_GetInstance|function|static uint32_t SCTIMER_GetInstance(SCT_Type *base)
DECL|SCTIMER_IncreaseState|function|status_t SCTIMER_IncreaseState(SCT_Type *base)
DECL|SCTIMER_Init|function|status_t SCTIMER_Init(SCT_Type *base, const sctimer_config_t *config)
DECL|SCTIMER_ScheduleEvent|function|void SCTIMER_ScheduleEvent(SCT_Type *base, uint32_t event)
DECL|SCTIMER_SetCallback|function|void SCTIMER_SetCallback(SCT_Type *base, sctimer_event_callback_t callback, uint32_t event)
DECL|SCTIMER_SetupCaptureAction|function|status_t SCTIMER_SetupCaptureAction(SCT_Type *base, sctimer_counter_t whichCounter, uint32_t *captureRegister, uint32_t event)
DECL|SCTIMER_SetupOutputToggleAction|function|void SCTIMER_SetupOutputToggleAction(SCT_Type *base, uint32_t whichIO, uint32_t event)
DECL|SCTIMER_SetupPwm|function|status_t SCTIMER_SetupPwm(SCT_Type *base, const sctimer_pwm_signal_param_t *pwmParams, sctimer_pwm_mode_t mode, uint32_t pwmFreq_Hz, uint32_t srcClock_Hz,
DECL|SCTIMER_UpdatePwmDutycycle|function|void SCTIMER_UpdatePwmDutycycle(SCT_Type *base, sctimer_out_t output, uint8_t dutyCyclePercent, uint32_t event)
DECL|s_currentEvent|variable|s_currentEvent
DECL|s_currentMatch|variable|s_currentMatch
DECL|s_currentState|variable|s_currentState
DECL|s_eventCallback|variable|s_eventCallback
DECL|s_sctBases|variable|s_sctBases
DECL|s_sctClocks|variable|s_sctClocks
DECL|s_sctResets|variable|s_sctResets
DECL|s_sctimerIsr|variable|s_sctimerIsr
DECL|sctimer_isr_t|typedef|typedef void (*sctimer_isr_t)(SCT_Type *base);
