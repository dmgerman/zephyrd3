DECL|PIT_ADRS|macro|PIT_ADRS
DECL|PIT_CMD|macro|PIT_CMD
DECL|PIT_CNT0|macro|PIT_CNT0
DECL|PIT_CNT1|macro|PIT_CNT1
DECL|PIT_CNT2|macro|PIT_CNT2
DECL|TIMER_MODE_PERIODIC_ENT|macro|TIMER_MODE_PERIODIC_ENT
DECL|TIMER_MODE_PERIODIC|macro|TIMER_MODE_PERIODIC
DECL|TIMER_SUPPORTS_TICKLESS|macro|TIMER_SUPPORTS_TICKLESS
DECL|_TimerMode|variable|_TimerMode
DECL|_currentLoadVal|variable|_currentLoadVal
DECL|_i8253CounterOneShot|function|static inline void _i8253CounterOneShot(uint16_t count /* value from which the counter will decrement */ )
DECL|_i8253CounterPeriodic|function|static inline void _i8253CounterPeriodic(uint16_t count /* value from which the counter will decrement */ )
DECL|_i8253CounterRead|function|static inline uint16_t _i8253CounterRead(void)
DECL|_i8253CounterSet|function|static inline void _i8253CounterSet(uint16_t count /* value from which the counter will decrement */ )
DECL|_i8253TicklessIdleInit|function|static void _i8253TicklessIdleInit(void)
DECL|_i8253TicklessIdleInit|macro|_i8253TicklessIdleInit
DECL|_i8253TicklessIdleSkew|function|static void _i8253TicklessIdleSkew(void)
DECL|_i8253TicklessIdleSkew|macro|_i8253TicklessIdleSkew
DECL|_timer_idle_enter|function|void _timer_idle_enter(int32_t ticks /* system ticks */)
DECL|_timer_idle_exit|function|void _timer_idle_exit(void)
DECL|_timer_int_handler|function|void _timer_int_handler(void *unusedArg /* not used */ )
DECL|clock_accumulated_count|variable|clock_accumulated_count
DECL|counterLoadVal|variable|counterLoadVal
DECL|idle_original_count|variable|idle_original_count
DECL|idle_original_ticks|variable|idle_original_ticks
DECL|max_load_value|variable|max_load_value
DECL|max_system_ticks|variable|max_system_ticks
DECL|oldAcc|variable|oldAcc
DECL|oldCount|variable|oldCount
DECL|timer_disable|function|void timer_disable(void)
DECL|timer_driver|function|void timer_driver(int priority /* priority parameter ignored by this driver */ )
DECL|timer_idle_skew|variable|timer_idle_skew
DECL|timer_read|function|uint32_t timer_read(void)
