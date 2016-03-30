DECL|IDLE_TASK_TIMER_PEND|macro|IDLE_TASK_TIMER_PEND
DECL|NANO_TASK_TIMER_PEND|macro|NANO_TASK_TIMER_PEND
DECL|NANO_TASK_TIMER_PEND|macro|NANO_TASK_TIMER_PEND
DECL|_TASK_NANO_TIMER_TASK_READY|macro|_TASK_NANO_TIMER_TASK_READY
DECL|_TASK_NANO_TIMER_TASK_READY|macro|_TASK_NANO_TIMER_TASK_READY
DECL|_nano_timer_expire_wait|function|static int _nano_timer_expire_wait(struct nano_timer *timer, int32_t timeout_in_ticks, void **user_data_ptr)
DECL|_timer_start|function|void _timer_start(struct nano_timer *timer, int ticks)
DECL|_timer_stop_non_preemptible|function|void _timer_stop_non_preemptible(struct nano_timer *timer)
DECL|nano_fiber_timer_test|function|void *nano_fiber_timer_test(struct nano_timer *timer, int32_t timeout_in_ticks)
DECL|nano_isr_timer_test|function|void *nano_isr_timer_test(struct nano_timer *timer, int32_t timeout_in_ticks)
DECL|nano_task_timer_stop|function|void nano_task_timer_stop(struct nano_timer *timer)
DECL|nano_task_timer_test|function|void *nano_task_timer_test(struct nano_timer *timer, int32_t timeout_in_ticks)
DECL|nano_timer_init|function|void nano_timer_init(struct nano_timer *timer, void *data)
DECL|nano_timer_stop|function|void nano_timer_stop(struct nano_timer *timer)
DECL|nano_timer_test|function|void *nano_timer_test(struct nano_timer *timer, int32_t timeout_in_ticks)
DECL|nano_timer_ticks_remain|function|int32_t nano_timer_ticks_remain(struct nano_timer *timer)
