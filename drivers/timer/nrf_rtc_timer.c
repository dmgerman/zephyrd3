DECL|RTC_TICKS|macro|RTC_TICKS
DECL|_sys_clock_driver_init|function|int _sys_clock_driver_init(struct device *device)
DECL|_timer_cycle_get_32|function|uint32_t _timer_cycle_get_32(void)
DECL|_timer_idle_enter|function|void _timer_idle_enter(int32_t ticks)
DECL|_timer_idle_exit|function|void _timer_idle_exit(void)
DECL|isr_ack|variable|isr_ack
DECL|isr_req|variable|isr_req
DECL|rtc1_nrf5_isr|function|static void rtc1_nrf5_isr(void *arg)
DECL|rtc_clock_tick_count|variable|rtc_clock_tick_count
DECL|rtc_compare_set|function|static uint32_t rtc_compare_set(uint32_t rtc_ticks)
DECL|sys_clock_disable|function|void sys_clock_disable(void)
