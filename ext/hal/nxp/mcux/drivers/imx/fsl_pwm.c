DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|PWM_ClearStatusFlags|function|void PWM_ClearStatusFlags(PWM_Type *base, pwm_submodule_t subModule, uint32_t mask)
DECL|PWM_Deinit|function|void PWM_Deinit(PWM_Type *base, pwm_submodule_t subModule)
DECL|PWM_DisableInterrupts|function|void PWM_DisableInterrupts(PWM_Type *base, pwm_submodule_t subModule, uint32_t mask)
DECL|PWM_EnableInterrupts|function|void PWM_EnableInterrupts(PWM_Type *base, pwm_submodule_t subModule, uint32_t mask)
DECL|PWM_GetDefaultConfig|function|void PWM_GetDefaultConfig(pwm_config_t *config)
DECL|PWM_GetEnabledInterrupts|function|uint32_t PWM_GetEnabledInterrupts(PWM_Type *base, pwm_submodule_t subModule)
DECL|PWM_GetInstance|function|static uint32_t PWM_GetInstance(PWM_Type *base)
DECL|PWM_GetStatusFlags|function|uint32_t PWM_GetStatusFlags(PWM_Type *base, pwm_submodule_t subModule)
DECL|PWM_Init|function|status_t PWM_Init(PWM_Type *base, pwm_submodule_t subModule, const pwm_config_t *config)
DECL|PWM_SetupFaults|function|void PWM_SetupFaults(PWM_Type *base, pwm_fault_input_t faultNum, const pwm_fault_param_t *faultParams)
DECL|PWM_SetupForceSignal|function|void PWM_SetupForceSignal(PWM_Type *base, pwm_submodule_t subModule, pwm_channels_t pwmChannel, pwm_force_signal_t mode)
DECL|PWM_SetupInputCapture|function|void PWM_SetupInputCapture(PWM_Type *base, pwm_submodule_t subModule, pwm_channels_t pwmChannel, const pwm_input_capture_param_t *inputCaptureParams)
DECL|PWM_SetupPwm|function|status_t PWM_SetupPwm(PWM_Type *base, pwm_submodule_t subModule, const pwm_signal_param_t *chnlParams, uint8_t numOfChnls, pwm_mode_t mode,
DECL|PWM_UpdatePwmDutycycle|function|void PWM_UpdatePwmDutycycle(PWM_Type *base, pwm_submodule_t subModule, pwm_channels_t pwmSignal, pwm_mode_t currPwmMode, uint8_t dutyCyclePercent)
DECL|s_pwmBases|variable|s_pwmBases
DECL|s_pwmClocks|variable|s_pwmClocks
