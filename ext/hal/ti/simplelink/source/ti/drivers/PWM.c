DECL|PWM_Params_init|function|void PWM_Params_init(PWM_Params *params)
DECL|PWM_close|function|void PWM_close(PWM_Handle handle)
DECL|PWM_control|function|int_fast16_t PWM_control(PWM_Handle handle, uint_fast16_t cmd, void *arg)
DECL|PWM_defaultParams|variable|PWM_defaultParams
DECL|PWM_init|function|void PWM_init(void)
DECL|PWM_open|function|PWM_Handle PWM_open(uint_least8_t index, PWM_Params *params)
DECL|PWM_setDuty|function|int_fast16_t PWM_setDuty(PWM_Handle handle, uint32_t duty)
DECL|PWM_setPeriod|function|int_fast16_t PWM_setPeriod(PWM_Handle handle, uint32_t period)
DECL|PWM_start|function|void PWM_start(PWM_Handle handle)
DECL|PWM_stop|function|void PWM_stop(PWM_Handle handle)
DECL|isInitialized|variable|isInitialized
