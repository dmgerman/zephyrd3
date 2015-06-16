DECL|LOAPIC_TIMER_DIVBY_128|macro|LOAPIC_TIMER_DIVBY_128
DECL|LOAPIC_TIMER_DIVBY_16|macro|LOAPIC_TIMER_DIVBY_16
DECL|LOAPIC_TIMER_DIVBY_1|macro|LOAPIC_TIMER_DIVBY_1
DECL|LOAPIC_TIMER_DIVBY_2|macro|LOAPIC_TIMER_DIVBY_2
DECL|LOAPIC_TIMER_DIVBY_32|macro|LOAPIC_TIMER_DIVBY_32
DECL|LOAPIC_TIMER_DIVBY_4|macro|LOAPIC_TIMER_DIVBY_4
DECL|LOAPIC_TIMER_DIVBY_64|macro|LOAPIC_TIMER_DIVBY_64
DECL|LOAPIC_TIMER_DIVBY_8|macro|LOAPIC_TIMER_DIVBY_8
DECL|LOAPIC_TIMER_DIVBY_MASK|macro|LOAPIC_TIMER_DIVBY_MASK
DECL|LOAPIC_TIMER_PERIODIC|macro|LOAPIC_TIMER_PERIODIC
DECL|TIMER_MODE_PERIODIC_ENT|macro|TIMER_MODE_PERIODIC_ENT
DECL|TIMER_MODE_PERIODIC|macro|TIMER_MODE_PERIODIC
DECL|TIMER_SUPPORTS_TICKLESS|macro|TIMER_SUPPORTS_TICKLESS
DECL|_REG_TIMER_CCR|macro|_REG_TIMER_CCR
DECL|_REG_TIMER_CFG|macro|_REG_TIMER_CFG
DECL|_REG_TIMER_ICR|macro|_REG_TIMER_ICR
DECL|_REG_TIMER|macro|_REG_TIMER
DECL|_loApicTimerGetCount|function|static inline uint32_t _loApicTimerGetCount(void)
DECL|_loApicTimerGetRemaining|function|static inline uint32_t _loApicTimerGetRemaining(void)
DECL|_loApicTimerOneShot|function|static inline void _loApicTimerOneShot(void)
DECL|_loApicTimerPeriodic|function|static inline void _loApicTimerPeriodic(void)
DECL|_loApicTimerSetCount|function|static inline void _loApicTimerSetCount(uint32_t count /* count from which timer is to count down */ )
DECL|_loApicTimerSetDivider|function|static inline void _loApicTimerSetDivider(void)
DECL|_loApicTimerStart|function|static inline void _loApicTimerStart(void)
DECL|_loApicTimerStop|function|static inline void _loApicTimerStop(void)
DECL|_loApicTimerTicklessIdleInit|function|static void _loApicTimerTicklessIdleInit(void)
DECL|_loApicTimerTicklessIdleInit|macro|_loApicTimerTicklessIdleInit
DECL|_loApicTimerTicklessIdleSkew|function|static void _loApicTimerTicklessIdleSkew(void)
DECL|_loApicTimerTicklessIdleSkew|macro|_loApicTimerTicklessIdleSkew
DECL|_sys_clock_driver_init|function|void _sys_clock_driver_init(void)
DECL|_timer_idle_enter|function|void _timer_idle_enter(int32_t ticks /* system ticks */)
DECL|_timer_idle_exit|function|void _timer_idle_exit(void)
DECL|_timer_int_handler|function|void _timer_int_handler(void *unused /* parameter is not used */ )
DECL|clock_accumulated_count|variable|clock_accumulated_count
DECL|counterLoadVal|variable|counterLoadVal
DECL|idle_original_count|variable|idle_original_count
DECL|idle_original_ticks|variable|idle_original_ticks
DECL|max_load_value|variable|max_load_value
DECL|max_system_ticks|variable|max_system_ticks
DECL|timer_disable|function|void timer_disable(void)
DECL|timer_idle_skew|variable|timer_idle_skew
DECL|timer_mode|variable|timer_mode
DECL|timer_read|function|uint32_t timer_read(void)
