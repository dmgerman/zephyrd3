DECL|_dynamic_timers|variable|_dynamic_timers
DECL|_k_dyamic_timer_init|function|void _k_dyamic_timer_init(void)
DECL|_timer_pool|variable|_timer_pool
DECL|k_timer_alloc|function|struct k_timer *k_timer_alloc(void)
DECL|k_timer_free|function|void k_timer_free(struct k_timer *timer)
DECL|k_timer_init|function|void k_timer_init(struct k_timer *timer, void *data)
DECL|k_timer_pool_is_empty|function|bool k_timer_pool_is_empty(void)
DECL|k_timer_remaining_get|function|int32_t k_timer_remaining_get(struct k_timer *timer)
DECL|k_timer_restart|function|void k_timer_restart(struct k_timer *timer, int32_t duration, int32_t period)
DECL|k_timer_start|function|void k_timer_start(struct k_timer *timer, int32_t duration, int32_t period, void (*handler)(void *), void *handler_arg, void (*stop_handler)(void *), void *stop_handler_arg)
DECL|k_timer_stop|function|void k_timer_stop(struct k_timer *timer)
DECL|k_timer_test|function|int k_timer_test(struct k_timer *timer, void **user_data_ptr, int wait)
DECL|timer_expiration_handler|function|void timer_expiration_handler(struct _timeout *t)
