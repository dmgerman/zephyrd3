DECL|RTC_CC_EVENT|macro|RTC_CC_EVENT
DECL|RTC_CC_VALUE|macro|RTC_CC_VALUE
DECL|RTC_COUNTER|macro|RTC_COUNTER
DECL|RTC_HALF|macro|RTC_HALF
DECL|RTC_MASK|macro|RTC_MASK
DECL|RTC_MIN_DELTA|macro|RTC_MIN_DELTA
DECL|RTC_TICKS_PER_SYS_TICK|macro|RTC_TICKS_PER_SYS_TICK
DECL|SYS_CLOCK_RTC|macro|SYS_CLOCK_RTC
DECL|_enable_sys_clock|function|void _enable_sys_clock(void)
DECL|_get_elapsed_clock_time|function|uint64_t _get_elapsed_clock_time(void)
DECL|_get_elapsed_program_time|function|uint32_t _get_elapsed_program_time(void)
DECL|_get_max_clock_time|function|int32_t _get_max_clock_time(void)
DECL|_get_program_time|function|uint32_t _get_program_time(void)
DECL|_get_remaining_program_time|function|uint32_t _get_remaining_program_time(void)
DECL|_set_time|function|void _set_time(uint32_t time)
DECL|_sys_clock_driver_init|function|int _sys_clock_driver_init(struct device *device)
DECL|_timer_cycle_get_32|function|u32_t _timer_cycle_get_32(void)
DECL|_timer_idle_enter|function|void _timer_idle_enter(s32_t sys_ticks)
DECL|_timer_idle_exit|function|void _timer_idle_exit(void)
DECL|expected_sys_ticks|variable|expected_sys_ticks
DECL|rtc1_nrf5_isr|function|static void rtc1_nrf5_isr(void *arg)
DECL|rtc_announce_set_next|function|static void rtc_announce_set_next(void)
DECL|rtc_compare_set|function|static void rtc_compare_set(u32_t rtc_ticks)
DECL|rtc_past|variable|rtc_past
DECL|sys_clock_disable|function|void sys_clock_disable(void)
