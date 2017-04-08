DECL|_ARC_V2_TMR_CTRL_IE|macro|_ARC_V2_TMR_CTRL_IE
DECL|_ARC_V2_TMR_CTRL_IP|macro|_ARC_V2_TMR_CTRL_IP
DECL|_ARC_V2_TMR_CTRL_NH|macro|_ARC_V2_TMR_CTRL_NH
DECL|_ARC_V2_TMR_CTRL_W|macro|_ARC_V2_TMR_CTRL_W
DECL|_enable_sys_clock|function|void _enable_sys_clock(void)
DECL|_get_elapsed_clock_time|function|u64_t _get_elapsed_clock_time(void)
DECL|_get_elapsed_program_time|function|u32_t _get_elapsed_program_time(void)
DECL|_get_program_time|function|u32_t _get_program_time(void)
DECL|_get_remaining_program_time|function|u32_t _get_remaining_program_time(void)
DECL|_set_time|function|void _set_time(u32_t time)
DECL|_sys_clock_driver_init|function|int _sys_clock_driver_init(struct device *device)
DECL|_timer_cycle_get_32|function|u32_t _timer_cycle_get_32(void)
DECL|_timer_idle_enter|function|void _timer_idle_enter(s32_t ticks)
DECL|_timer_idle_exit|function|void _timer_idle_exit(void)
DECL|_timer_int_handler|function|void _timer_int_handler(void *unused)
DECL|accumulated_cycle_count|variable|accumulated_cycle_count
DECL|arcv2_timer0_device_power_state|variable|arcv2_timer0_device_power_state
DECL|cycles_per_tick|variable|cycles_per_tick
DECL|get_elapsed_count|function|static inline u64_t get_elapsed_count(void)
DECL|max_system_ticks|variable|max_system_ticks
DECL|program_max_cycles|function|static inline void program_max_cycles(void)
DECL|programmed_limit|variable|programmed_limit
DECL|programmed_ticks|variable|programmed_ticks
DECL|saved_control|variable|saved_control
DECL|saved_limit|variable|saved_limit
DECL|straddled_tick_on_idle_enter|variable|straddled_tick_on_idle_enter
DECL|sys_clock_device_ctrl|function|int sys_clock_device_ctrl(struct device *port, u32_t ctrl_command, void *context)
DECL|sys_clock_disable|function|void sys_clock_disable(void)
DECL|sys_clock_resume|function|static int sys_clock_resume(struct device *dev)
DECL|sys_clock_suspend|function|static int sys_clock_suspend(struct device *dev)
DECL|tickless_idle_init|function|static void tickless_idle_init(void)
DECL|tickless_idle_init|function|static void tickless_idle_init(void) {}
DECL|timer0_control_register_get|function|static ALWAYS_INLINE u32_t timer0_control_register_get(void)
DECL|timer0_control_register_set|function|static ALWAYS_INLINE void timer0_control_register_set(u32_t value)
DECL|timer0_count_register_get|function|static ALWAYS_INLINE u32_t timer0_count_register_get(void)
DECL|timer0_count_register_set|function|static ALWAYS_INLINE void timer0_count_register_set(u32_t value)
DECL|timer0_limit_register_get|function|static ALWAYS_INLINE u32_t timer0_limit_register_get(void)
DECL|timer0_limit_register_set|function|static ALWAYS_INLINE void timer0_limit_register_set(u32_t count)
DECL|timer_expired|variable|timer_expired
DECL|update_accumulated_count|function|static ALWAYS_INLINE void update_accumulated_count(void)
DECL|update_accumulated_count|function|static ALWAYS_INLINE void update_accumulated_count(void)
