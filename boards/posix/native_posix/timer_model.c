DECL|DEBUG_NP_TIMER|macro|DEBUG_NP_TIMER
DECL|boot_time|variable|boot_time
DECL|clock_ratio|variable|clock_ratio
DECL|get_host_us_time|function|u64_t get_host_us_time(void)
DECL|host_clock_gettime|function|static inline void host_clock_gettime(struct timespec *tv)
DECL|hw_timer_awake_timer|variable|hw_timer_awake_timer
DECL|hw_timer_tick_timer|variable|hw_timer_tick_timer
DECL|hw_timer_timer|variable|hw_timer_timer
DECL|hwtimer_adjust_rt_ratio|function|void hwtimer_adjust_rt_ratio(double ratio_correction)
DECL|hwtimer_adjust_rtc_offset|function|void hwtimer_adjust_rtc_offset(s64_t offset_delta)
DECL|hwtimer_awake_timer_reached|function|static void hwtimer_awake_timer_reached(void)
DECL|hwtimer_cleanup|function|void hwtimer_cleanup(void)
DECL|hwtimer_enable|function|void hwtimer_enable(u64_t period)
DECL|hwtimer_get_pending_silent_ticks|function|s64_t hwtimer_get_pending_silent_ticks(void)
DECL|hwtimer_get_pseudohost_rtc_time|function|void hwtimer_get_pseudohost_rtc_time(u32_t *nsec, u64_t *sec)
DECL|hwtimer_get_simu_rtc_time|function|s64_t hwtimer_get_simu_rtc_time(void)
DECL|hwtimer_init|function|void hwtimer_init(void)
DECL|hwtimer_reset_rtc|function|void hwtimer_reset_rtc(void)
DECL|hwtimer_set_real_time_mode|function|void hwtimer_set_real_time_mode(bool new_rt)
DECL|hwtimer_set_rt_ratio|function|void hwtimer_set_rt_ratio(double ratio)
DECL|hwtimer_set_rtc_offset|function|void hwtimer_set_rtc_offset(s64_t offset)
DECL|hwtimer_set_silent_ticks|function|void hwtimer_set_silent_ticks(s64_t sys_ticks)
DECL|hwtimer_tick_timer_reached|function|static void hwtimer_tick_timer_reached(void)
DECL|hwtimer_timer_reached|function|void hwtimer_timer_reached(void)
DECL|hwtimer_update_timer|function|static void hwtimer_update_timer(void)
DECL|hwtimer_wake_in_time|function|void hwtimer_wake_in_time(u64_t time)
DECL|last_drift_offset|variable|last_drift_offset
DECL|last_radj_rtime|variable|last_radj_rtime
DECL|last_radj_stime|variable|last_radj_stime
DECL|real_time_mode|variable|real_time_mode
DECL|reset_rtc|variable|reset_rtc
DECL|rtc_offset|variable|rtc_offset
DECL|silent_ticks|variable|silent_ticks
DECL|tick_p|variable|tick_p
DECL|us_time_to_str|function|static char *us_time_to_str(char *dest, u64_t time)
