DECL|_timer_expiration_handler|function|void _timer_expiration_handler(struct _timeout *t)
DECL|_trace_list_k_timer|variable|_trace_list_k_timer
DECL|init_timer_module|function|static int init_timer_module(struct device *dev)
DECL|k_timer_init|function|void k_timer_init(struct k_timer *timer, void (*expiry_fn)(struct k_timer *), void (*stop_fn)(struct k_timer *))
DECL|k_timer_remaining_get|function|int32_t k_timer_remaining_get(struct k_timer *timer)
DECL|k_timer_start|function|void k_timer_start(struct k_timer *timer, int32_t duration, int32_t period)
DECL|k_timer_status_get|function|uint32_t k_timer_status_get(struct k_timer *timer)
DECL|k_timer_status_sync|function|uint32_t k_timer_status_sync(struct k_timer *timer)
DECL|k_timer_stop|function|void k_timer_stop(struct k_timer *timer)
