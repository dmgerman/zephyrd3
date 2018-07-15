DECL|HWTIMER|enumerator|static enum { HWTIMER = 0, IRQCNT, NUMBER_OF_TIMERS, NONE }
DECL|IRQCNT|enumerator|static enum { HWTIMER = 0, IRQCNT, NUMBER_OF_TIMERS, NONE }
DECL|NONE|enumerator|static enum { HWTIMER = 0, IRQCNT, NUMBER_OF_TIMERS, NONE }
DECL|NUMBER_OF_TIMERS|enumerator|static enum { HWTIMER = 0, IRQCNT, NUMBER_OF_TIMERS, NONE }
DECL|Timer_list|variable|Timer_list
DECL|end_of_time|variable|end_of_time
DECL|hwm_cleanup|function|void hwm_cleanup(void)
DECL|hwm_find_next_timer|function|void hwm_find_next_timer(void)
DECL|hwm_get_time|function|u64_t hwm_get_time(void)
DECL|hwm_init|function|void hwm_init(void)
DECL|hwm_main_loop|function|void hwm_main_loop(void)
DECL|hwm_set_end_of_time|function|void hwm_set_end_of_time(u64_t new_end_of_time)
DECL|hwm_set_sig_handler|function|void hwm_set_sig_handler(void)
DECL|hwm_signal_end_handler|function|void hwm_signal_end_handler(int sig)
DECL|hwm_sleep_until_next_timer|function|static void hwm_sleep_until_next_timer(void)
DECL|next_timer_index|variable|next_timer_index
DECL|next_timer_time|variable|next_timer_time
DECL|posix_get_hw_cycle|function|u64_t posix_get_hw_cycle(void)
DECL|signaled_end|variable|signaled_end
DECL|simu_time|variable|simu_time
