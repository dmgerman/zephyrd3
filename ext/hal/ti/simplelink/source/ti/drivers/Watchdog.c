DECL|Watchdog_Params_init|function|void Watchdog_Params_init(Watchdog_Params *params)
DECL|Watchdog_clear|function|void Watchdog_clear(Watchdog_Handle handle)
DECL|Watchdog_close|function|void Watchdog_close(Watchdog_Handle handle)
DECL|Watchdog_control|function|int_fast16_t Watchdog_control(Watchdog_Handle handle, uint_fast16_t cmd, void *arg)
DECL|Watchdog_convertMsToTicks|function|uint32_t Watchdog_convertMsToTicks(Watchdog_Handle handle, uint32_t milliseconds)
DECL|Watchdog_defaultParams|variable|Watchdog_defaultParams
DECL|Watchdog_init|function|void Watchdog_init(void)
DECL|Watchdog_open|function|Watchdog_Handle Watchdog_open(uint_least8_t index, Watchdog_Params *params)
DECL|Watchdog_setReload|function|int_fast16_t Watchdog_setReload(Watchdog_Handle handle, uint32_t ticks)
DECL|isInitialized|variable|isInitialized
