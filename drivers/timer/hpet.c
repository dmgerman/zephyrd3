DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|GENERAL_CAPS_REG|macro|GENERAL_CAPS_REG
DECL|GENERAL_CONFIG_REG|macro|GENERAL_CONFIG_REG
DECL|GENERAL_INT_STATUS_REG|macro|GENERAL_INT_STATUS_REG
DECL|HPET_COMP_DELAY|macro|HPET_COMP_DELAY
DECL|HPET_COUNTER_CLK_PERIOD|macro|HPET_COUNTER_CLK_PERIOD
DECL|HPET_ENABLE_CNF|macro|HPET_ENABLE_CNF
DECL|HPET_IOAPIC_FLAGS|macro|HPET_IOAPIC_FLAGS
DECL|HPET_IOAPIC_FLAGS|macro|HPET_IOAPIC_FLAGS
DECL|HPET_IOAPIC_FLAGS|macro|HPET_IOAPIC_FLAGS
DECL|HPET_IOAPIC_FLAGS|macro|HPET_IOAPIC_FLAGS
DECL|HPET_IS64BITS|macro|HPET_IS64BITS
DECL|HPET_LEGACY_RT_CNF|macro|HPET_LEGACY_RT_CNF
DECL|HPET_NUM_TIMERS|macro|HPET_NUM_TIMERS
DECL|HPET_Tn_32MODE_CNF|macro|HPET_Tn_32MODE_CNF
DECL|HPET_Tn_FSB_EN_CNF|macro|HPET_Tn_FSB_EN_CNF
DECL|HPET_Tn_FSB_INT_DEL_CAP|macro|HPET_Tn_FSB_INT_DEL_CAP
DECL|HPET_Tn_INT_ENB_CNF|macro|HPET_Tn_INT_ENB_CNF
DECL|HPET_Tn_INT_ROUTE_CAP|macro|HPET_Tn_INT_ROUTE_CAP
DECL|HPET_Tn_INT_ROUTE_CNF_MASK|macro|HPET_Tn_INT_ROUTE_CNF_MASK
DECL|HPET_Tn_INT_ROUTE_CNF_SHIFT|macro|HPET_Tn_INT_ROUTE_CNF_SHIFT
DECL|HPET_Tn_INT_TYPE_CNF|macro|HPET_Tn_INT_TYPE_CNF
DECL|HPET_Tn_PER_INT_CAP|macro|HPET_Tn_PER_INT_CAP
DECL|HPET_Tn_SIZE_CAP|macro|HPET_Tn_SIZE_CAP
DECL|HPET_Tn_TYPE_CNF|macro|HPET_Tn_TYPE_CNF
DECL|HPET_Tn_VAL_SET_CNF|macro|HPET_Tn_VAL_SET_CNF
DECL|MAIN_COUNTER_VALUE_REG|macro|MAIN_COUNTER_VALUE_REG
DECL|TIMER0_COMPARATOR_REG|macro|TIMER0_COMPARATOR_REG
DECL|TIMER0_CONFIG_CAPS_REG|macro|TIMER0_CONFIG_CAPS_REG
DECL|TIMER0_FSB_INT_ROUTE_REG|macro|TIMER0_FSB_INT_ROUTE_REG
DECL|TIMER1_COMPARATOR_REG|macro|TIMER1_COMPARATOR_REG
DECL|TIMER1_CONFIG_CAP_REG|macro|TIMER1_CONFIG_CAP_REG
DECL|TIMER1_FSB_INT_ROUTE_REG|macro|TIMER1_FSB_INT_ROUTE_REG
DECL|TIMER2_COMPARATOR_REG|macro|TIMER2_COMPARATOR_REG
DECL|TIMER2_CONFIG_CAP_REG|macro|TIMER2_CONFIG_CAP_REG
DECL|TIMER2_FSB_INT_ROUTE_REG|macro|TIMER2_FSB_INT_ROUTE_REG
DECL|_HPET_GENERAL_CAPS|macro|_HPET_GENERAL_CAPS
DECL|_HPET_GENERAL_CONFIG|macro|_HPET_GENERAL_CONFIG
DECL|_HPET_GENERAL_INT_STATUS|macro|_HPET_GENERAL_INT_STATUS
DECL|_HPET_MAIN_COUNTER_LSW|macro|_HPET_MAIN_COUNTER_LSW
DECL|_HPET_MAIN_COUNTER_MSW|macro|_HPET_MAIN_COUNTER_MSW
DECL|_HPET_MAIN_COUNTER_VALUE|macro|_HPET_MAIN_COUNTER_VALUE
DECL|_HPET_TIMER0_COMPARATOR|macro|_HPET_TIMER0_COMPARATOR
DECL|_HPET_TIMER0_CONFIG_CAPS|macro|_HPET_TIMER0_CONFIG_CAPS
DECL|_HPET_TIMER0_FSB_INT_ROUTE|macro|_HPET_TIMER0_FSB_INT_ROUTE
DECL|_enable_sys_clock|function|void _enable_sys_clock(void)
DECL|_get_elapsed_clock_time|function|u64_t _get_elapsed_clock_time(void)
DECL|_get_elapsed_program_time|function|u32_t _get_elapsed_program_time(void)
DECL|_get_program_time|function|u32_t _get_program_time(void)
DECL|_get_remaining_program_time|function|u32_t _get_remaining_program_time(void)
DECL|_hpetMainCounterAtomic|function|static u64_t _hpetMainCounterAtomic(void)
DECL|_set_time|function|void _set_time(u32_t time)
DECL|_sys_clock_driver_init|function|int _sys_clock_driver_init(struct device *device)
DECL|_timer_cycle_get_32|function|u32_t _timer_cycle_get_32(void)
DECL|_timer_idle_enter|function|void _timer_idle_enter(s32_t ticks /* system ticks */)
DECL|_timer_idle_exit|function|void _timer_idle_exit(void)
DECL|_timer_int_handler|function|void _timer_int_handler(void *unused)
DECL|counter_last_value|variable|counter_last_value
DECL|counter_load_value|variable|counter_load_value
DECL|main_count_expected_value|variable|main_count_expected_value
DECL|main_count_first_irq_value|variable|main_count_first_irq_value
DECL|program_max_cycles|function|static inline void program_max_cycles(void)
DECL|programmed_ticks|variable|programmed_ticks
DECL|stale_irq_check|variable|stale_irq_check
DECL|sys_clock_disable|function|void sys_clock_disable(void)
