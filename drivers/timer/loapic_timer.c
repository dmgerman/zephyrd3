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
DECL|TIMER_MODE_ONE_SHOT|macro|TIMER_MODE_ONE_SHOT
DECL|TIMER_MODE_PERIODIC|macro|TIMER_MODE_PERIODIC
DECL|TIMER_SUPPORTS_TICKLESS|macro|TIMER_SUPPORTS_TICKLESS
DECL|_REG_TIMER_CCR|macro|_REG_TIMER_CCR
DECL|_REG_TIMER_CFG|macro|_REG_TIMER_CFG
DECL|_REG_TIMER_ICR|macro|_REG_TIMER_ICR
DECL|_REG_TIMER|macro|_REG_TIMER
DECL|_sys_clock_cycle_get|function|uint32_t _sys_clock_cycle_get(void)
DECL|_sys_clock_driver_init|function|int _sys_clock_driver_init(struct device *device)
DECL|_timer_idle_enter|function|void _timer_idle_enter(int32_t ticks /* system ticks */)
DECL|_timer_idle_exit|function|void _timer_idle_exit(void)
DECL|_timer_int_handler|function|void _timer_int_handler(void *unused /* parameter is not used */ )
DECL|accumulated_cycle_count|variable|accumulated_cycle_count
DECL|current_count_register_get|function|static inline uint32_t current_count_register_get(void)
DECL|cycles_per_max_ticks|variable|cycles_per_max_ticks
DECL|cycles_per_tick|variable|cycles_per_tick
DECL|divide_configuration_register_set|function|static inline void divide_configuration_register_set(void)
DECL|initial_count_register_get|function|static inline uint32_t initial_count_register_get(void)
DECL|initial_count_register_set|function|static inline void initial_count_register_set(uint32_t count /* count from which timer is to count down */ )
DECL|max_system_ticks|variable|max_system_ticks
DECL|one_shot_mode_set|function|static inline void one_shot_mode_set(void)
DECL|periodic_mode_set|function|static inline void periodic_mode_set(void)
DECL|programmed_cycles|variable|programmed_cycles
DECL|programmed_full_ticks|variable|programmed_full_ticks
DECL|tickless_idle_init|function|static void tickless_idle_init(void)
DECL|tickless_idle_init|macro|tickless_idle_init
DECL|timer_disable|function|void timer_disable(void)
DECL|timer_interrupt_mask|function|static inline void timer_interrupt_mask(void)
DECL|timer_interrupt_unmask|function|static inline void timer_interrupt_unmask(void)
DECL|timer_known_to_have_expired|variable|timer_known_to_have_expired
DECL|timer_mode|variable|timer_mode
