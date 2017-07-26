DECL|CTIMER0_DriverIRQHandler|function|void CTIMER0_DriverIRQHandler(void)
DECL|CTIMER1_DriverIRQHandler|function|void CTIMER1_DriverIRQHandler(void)
DECL|CTIMER2_DriverIRQHandler|function|void CTIMER2_DriverIRQHandler(void)
DECL|CTIMER3_DriverIRQHandler|function|void CTIMER3_DriverIRQHandler(void)
DECL|CTIMER4_DriverIRQHandler|function|void CTIMER4_DriverIRQHandler(void)
DECL|CTIMER_Deinit|function|void CTIMER_Deinit(CTIMER_Type *base)
DECL|CTIMER_GenericIRQHandler|function|void CTIMER_GenericIRQHandler(uint32_t index)
DECL|CTIMER_GetDefaultConfig|function|void CTIMER_GetDefaultConfig(ctimer_config_t *config)
DECL|CTIMER_GetInstance|function|static uint32_t CTIMER_GetInstance(CTIMER_Type *base)
DECL|CTIMER_Init|function|void CTIMER_Init(CTIMER_Type *base, const ctimer_config_t *config)
DECL|CTIMER_RegisterCallBack|function|void CTIMER_RegisterCallBack(CTIMER_Type *base, ctimer_callback_t *cb_func, ctimer_callback_type_t cb_type)
DECL|CTIMER_SetupCapture|function|void CTIMER_SetupCapture(CTIMER_Type *base, ctimer_capture_channel_t capture, ctimer_capture_edge_t edge, bool enableInt)
DECL|CTIMER_SetupMatch|function|void CTIMER_SetupMatch(CTIMER_Type *base, ctimer_match_t matchChannel, const ctimer_match_config_t *config)
DECL|CTIMER_SetupPwm|function|status_t CTIMER_SetupPwm(CTIMER_Type *base, ctimer_match_t matchChannel, uint8_t dutyCyclePercent, uint32_t pwmFreq_Hz, uint32_t srcClock_Hz,
DECL|CTIMER_UpdatePwmDutycycle|function|void CTIMER_UpdatePwmDutycycle(CTIMER_Type *base, ctimer_match_t matchChannel, uint8_t dutyCyclePercent)
DECL|ctimerCallbackType|variable|ctimerCallbackType
DECL|s_ctimerBases|variable|s_ctimerBases
DECL|s_ctimerCallback|variable|s_ctimerCallback
DECL|s_ctimerClocks|variable|s_ctimerClocks
DECL|s_ctimerIRQ|variable|s_ctimerIRQ
DECL|s_ctimerResets|variable|s_ctimerResets
