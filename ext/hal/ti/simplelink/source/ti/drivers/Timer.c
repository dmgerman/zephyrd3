DECL|Timer_Params_init|function|void Timer_Params_init(Timer_Params *params)
DECL|Timer_close|function|void Timer_close(Timer_Handle handle)
DECL|Timer_control|function|int_fast16_t Timer_control(Timer_Handle handle, uint_fast16_t cmd, void *arg)
DECL|Timer_getCount|function|uint32_t Timer_getCount(Timer_Handle handle)
DECL|Timer_init|function|void Timer_init(void)
DECL|Timer_open|function|Timer_Handle Timer_open(uint_least8_t index, Timer_Params *params)
DECL|Timer_start|function|int32_t Timer_start(Timer_Handle handle)
DECL|Timer_stop|function|void Timer_stop(Timer_Handle handle)
DECL|defaultParams|variable|defaultParams
DECL|isInitialized|variable|isInitialized
