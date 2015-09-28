DECL|IDLE_NOT_TICKLESS|macro|IDLE_NOT_TICKLESS
DECL|IDLE_TICKLESS|macro|IDLE_TICKLESS
DECL|TIMER_MODE_ONE_SHOT|macro|TIMER_MODE_ONE_SHOT
DECL|TIMER_MODE_PERIODIC|macro|TIMER_MODE_PERIODIC
DECL|_TIMER_INT_HANDLER|function|void _TIMER_INT_HANDLER(void *unused)
DECL|_TIMER_INT_HANDLER|macro|_TIMER_INT_HANDLER
DECL|_TIMER_INT_HANDLER|macro|_TIMER_INT_HANDLER
DECL|_sys_clock_cycle_get|function|uint32_t _sys_clock_cycle_get(void)
DECL|_sys_clock_driver_init|function|int _sys_clock_driver_init(struct device *device)
DECL|_timer_idle_enter|function|void _timer_idle_enter(int32_t ticks /* system ticks */)
DECL|_timer_idle_exit|function|void _timer_idle_exit(void)
DECL|clock_accumulated_count|variable|clock_accumulated_count
DECL|default_load_value|variable|default_load_value
DECL|idle_mode|variable|idle_mode
DECL|idle_original_count|variable|idle_original_count
DECL|idle_original_ticks|variable|idle_original_ticks
DECL|max_load_value|variable|max_load_value
DECL|max_system_ticks|variable|max_system_ticks
DECL|sysTickCurrentGet|function|static ALWAYS_INLINE uint32_t sysTickCurrentGet(void)
DECL|sysTickReloadGet|function|static ALWAYS_INLINE uint32_t sysTickReloadGet(void)
DECL|sysTickReloadSet|function|static ALWAYS_INLINE void sysTickReloadSet(uint32_t count /* count from which timer is to count down */ )
DECL|sysTickStart|function|static ALWAYS_INLINE void sysTickStart(void)
DECL|sysTickStop|function|static ALWAYS_INLINE void sysTickStop(void)
DECL|sysTickTicklessIdleInit|function|static void sysTickTicklessIdleInit(void)
DECL|sys_clock_disable|function|void sys_clock_disable(void)
DECL|timer_idle_skew|variable|timer_idle_skew
DECL|timer_mode|variable|timer_mode
