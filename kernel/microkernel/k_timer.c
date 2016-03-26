DECL|_do_task_sleep|variable|_do_task_sleep
DECL|_do_task_sleep|variable|_do_task_sleep
DECL|_k_task_sleep|function|void _k_task_sleep(struct k_args *P)
DECL|_k_task_wakeup|function|void _k_task_wakeup(struct k_args *P)
DECL|_k_timeout_alloc|function|void _k_timeout_alloc(struct k_args *P)
DECL|_k_timeout_cancel|function|void _k_timeout_cancel(struct k_args *A)
DECL|_k_timeout_free|function|void _k_timeout_free(struct k_timer *T)
DECL|_k_timer_alloc|function|void _k_timer_alloc(struct k_args *P)
DECL|_k_timer_dealloc|function|void _k_timer_dealloc(struct k_args *P)
DECL|_k_timer_delist|function|void _k_timer_delist(struct k_timer *T)
DECL|_k_timer_enlist|function|void _k_timer_enlist(struct k_timer *T)
DECL|_k_timer_list_head|variable|_k_timer_list_head
DECL|_k_timer_list_tail|variable|_k_timer_list_tail
DECL|_k_timer_list_update|function|void _k_timer_list_update(int ticks)
DECL|_k_timer_start|function|void _k_timer_start(struct k_args *P)
DECL|_k_timer_stop|function|void _k_timer_stop(struct k_args *P)
DECL|_micro_task_sleep|function|void _micro_task_sleep(int32_t ticks)
DECL|task_timer_alloc|function|ktimer_t task_timer_alloc(void)
DECL|task_timer_free|function|void task_timer_free(ktimer_t timer)
DECL|task_timer_start|function|void task_timer_start(ktimer_t timer, int32_t duration, int32_t period, ksem_t sema)
DECL|task_timer_stop|function|void task_timer_stop(ktimer_t timer)
