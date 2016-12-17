DECL|_legacy_sleep|function|void _legacy_sleep(int32_t ticks)
DECL|_timer_pool_is_empty|function|bool _timer_pool_is_empty(void)
DECL|dynamic_timers|variable|dynamic_timers
DECL|init_dyamic_timers|function|static int init_dyamic_timers(struct device *dev)
DECL|nano_timer_test|function|void *nano_timer_test(struct nano_timer *timer, int32_t timeout_in_ticks)
DECL|task_timer_alloc|function|ktimer_t task_timer_alloc(void)
DECL|task_timer_free|function|void task_timer_free(ktimer_t timer)
DECL|task_timer_start|function|void task_timer_start(ktimer_t timer, int32_t duration, int32_t period, ksem_t sema)
DECL|timer_pool|variable|timer_pool
DECL|timer_sem_give|function|static void timer_sem_give(struct k_timer *timer)
