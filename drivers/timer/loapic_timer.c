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
DECL|TIMER_IRQ_PRIORITY|macro|TIMER_IRQ_PRIORITY
DECL|TIMER_IRQ_PRIORITY|macro|TIMER_IRQ_PRIORITY
DECL|TIMER_IRQ|macro|TIMER_IRQ
DECL|TIMER_IRQ|macro|TIMER_IRQ
DECL|TIMER_MODE_ONE_SHOT|macro|TIMER_MODE_ONE_SHOT
DECL|TIMER_MODE_PERIODIC|macro|TIMER_MODE_PERIODIC
DECL|_REG_TIMER_CCR|macro|_REG_TIMER_CCR
DECL|_REG_TIMER_CCR|macro|_REG_TIMER_CCR
DECL|_REG_TIMER_CFG|macro|_REG_TIMER_CFG
DECL|_REG_TIMER_ICR|macro|_REG_TIMER_ICR
DECL|_REG_TIMER_ICR|macro|_REG_TIMER_ICR
DECL|_REG_TIMER|macro|_REG_TIMER
DECL|_REG_TIMER|macro|_REG_TIMER
DECL|_enable_sys_clock|function|void _enable_sys_clock(void)
DECL|_get_elapsed_clock_time|function|u64_t _get_elapsed_clock_time(void)
DECL|_get_elapsed_program_time|function|u32_t _get_elapsed_program_time(void)
DECL|_get_program_time|function|u32_t _get_program_time(void)
DECL|_get_remaining_program_time|function|u32_t _get_remaining_program_time(void)
DECL|_jailhouse_eoi|function|void _jailhouse_eoi(void)
DECL|_set_time|function|void _set_time(u32_t time)
DECL|_sys_clock_driver_init|function|int _sys_clock_driver_init(struct device *device)
DECL|_timer_cycle_get_32|function|u32_t _timer_cycle_get_32(void)
DECL|_timer_idle_enter|function|void _timer_idle_enter(s32_t ticks /* system ticks */)
DECL|_timer_idle_exit|function|void _timer_idle_exit(void)
DECL|_timer_int_handler|function|void _timer_int_handler(void *unused /* parameter is not used */ )
DECL|current_count_register_get|function|static inline u32_t current_count_register_get(void)
DECL|cycles_per_max_ticks|variable|cycles_per_max_ticks
DECL|cycles_per_tick|variable|cycles_per_tick
DECL|divide_configuration_register_set|function|static inline void divide_configuration_register_set(void)
DECL|initial_count_register_get|function|static inline u32_t initial_count_register_get(void)
DECL|initial_count_register_set|function|static inline void initial_count_register_set(u32_t count)
DECL|loapic_timer_device_power_state|variable|loapic_timer_device_power_state
DECL|max_system_ticks|variable|max_system_ticks
DECL|one_shot_mode_set|function|static inline void one_shot_mode_set(void)
DECL|periodic_mode_set|function|static inline void periodic_mode_set(void)
DECL|program_max_cycles|function|static inline void program_max_cycles(void)
DECL|programmed_cycles|variable|programmed_cycles
DECL|programmed_full_ticks|variable|programmed_full_ticks
DECL|reg_timer_cfg_save|variable|reg_timer_cfg_save
DECL|reg_timer_save|variable|reg_timer_save
DECL|sys_clock_device_ctrl|function|int sys_clock_device_ctrl(struct device *port, u32_t ctrl_command, void *context)
DECL|sys_clock_disable|function|void sys_clock_disable(void)
DECL|sys_clock_resume|function|static int sys_clock_resume(struct device *dev)
DECL|sys_clock_suspend|function|static int sys_clock_suspend(struct device *dev)
DECL|tickless_idle_init|function|static void tickless_idle_init(void)
DECL|tickless_idle_init|macro|tickless_idle_init
DECL|timer_known_to_have_expired|variable|timer_known_to_have_expired
DECL|timer_mode|variable|timer_mode
