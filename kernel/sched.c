DECL|LOCKED|macro|LOCKED
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_sleep, duration)
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_thread_deadline_set, thread_p, deadline)
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_thread_priority_set, thread_p, prio)
DECL|_add_thread_to_ready_q|function|void _add_thread_to_ready_q(struct k_thread *thread)
DECL|_find_first_thread_to_unpend|function|struct k_thread *_find_first_thread_to_unpend(_wait_q_t *wait_q, struct k_thread *from)
DECL|_get_next_ready_thread|function|struct k_thread *_get_next_ready_thread(void)
DECL|_get_next_switch_handle|function|void *_get_next_switch_handle(void *interrupted)
DECL|_impl_k_current_get|function|k_tid_t _impl_k_current_get(void)
DECL|_impl_k_is_preempt_thread|function|int _impl_k_is_preempt_thread(void)
DECL|_impl_k_sleep|function|void _impl_k_sleep(s32_t duration)
DECL|_impl_k_thread_deadline_set|function|void _impl_k_thread_deadline_set(k_tid_t tid, int deadline)
DECL|_impl_k_thread_priority_get|function|int _impl_k_thread_priority_get(k_tid_t thread)
DECL|_impl_k_thread_priority_set|function|void _impl_k_thread_priority_set(k_tid_t tid, int prio)
DECL|_impl_k_wakeup|function|void _impl_k_wakeup(k_tid_t thread)
DECL|_impl_k_yield|function|void _impl_k_yield(void)
DECL|_is_idle|function|static inline int _is_idle(struct k_thread *thread)
DECL|_is_preempt|function|static inline int _is_preempt(struct k_thread *thread)
DECL|_is_t1_higher_prio_than_t2|function|int _is_t1_higher_prio_than_t2(struct k_thread *t1, struct k_thread *t2)
DECL|_is_thread_dummy|function|static inline int _is_thread_dummy(struct k_thread *thread)
DECL|_is_thread_time_slicing|function|int _is_thread_time_slicing(struct k_thread *thread)
DECL|_kernel|variable|_kernel
DECL|_move_thread_to_end_of_prio_q|function|void _move_thread_to_end_of_prio_q(struct k_thread *thread)
DECL|_ms_to_ticks|function|s32_t _ms_to_ticks(s32_t ms)
DECL|_pend_current_thread|function|int _pend_current_thread(int key, _wait_q_t *wait_q, s32_t timeout)
DECL|_pend_thread|function|void _pend_thread(struct k_thread *thread, _wait_q_t *wait_q, s32_t timeout)
DECL|_priq_dumb_add|function|void _priq_dumb_add(sys_dlist_t *pq, struct k_thread *thread)
DECL|_priq_dumb_best|function|struct k_thread *_priq_dumb_best(sys_dlist_t *pq)
DECL|_priq_dumb_remove|function|void _priq_dumb_remove(sys_dlist_t *pq, struct k_thread *thread)
DECL|_priq_rb_add|function|void _priq_rb_add(struct _priq_rb *pq, struct k_thread *thread)
DECL|_priq_rb_best|function|struct k_thread *_priq_rb_best(struct _priq_rb *pq)
DECL|_priq_rb_lessthan|function|int _priq_rb_lessthan(struct rbnode *a, struct rbnode *b)
DECL|_priq_rb_remove|function|void _priq_rb_remove(struct _priq_rb *pq, struct k_thread *thread)
DECL|_priq_run_add|macro|_priq_run_add
DECL|_priq_run_add|macro|_priq_run_add
DECL|_priq_run_best|macro|_priq_run_best
DECL|_priq_run_best|macro|_priq_run_best
DECL|_priq_run_remove|macro|_priq_run_remove
DECL|_priq_run_remove|macro|_priq_run_remove
DECL|_priq_wait_add|macro|_priq_wait_add
DECL|_priq_wait_add|macro|_priq_wait_add
DECL|_priq_wait_best|macro|_priq_wait_best
DECL|_priq_wait_best|macro|_priq_wait_best
DECL|_priq_wait_remove|macro|_priq_wait_remove
DECL|_priq_wait_remove|macro|_priq_wait_remove
DECL|_remove_thread_from_ready_q|function|void _remove_thread_from_ready_q(struct k_thread *thread)
DECL|_reschedule|function|int _reschedule(int key)
DECL|_sched_init|function|void _sched_init(void)
DECL|_thread_priority_set|function|void _thread_priority_set(struct k_thread *thread, int prio)
DECL|_unpend_all|function|int _unpend_all(_wait_q_t *waitq)
DECL|_unpend_first_thread|function|struct k_thread *_unpend_first_thread(_wait_q_t *wait_q)
DECL|_unpend_thread_no_timeout|function|void _unpend_thread_no_timeout(struct k_thread *thread)
DECL|_unpend_thread|function|void _unpend_thread(struct k_thread *thread)
DECL|_update_time_slice_before_swap|function|void _update_time_slice_before_swap(void)
DECL|is_metairq|function|static inline int is_metairq(struct k_thread *thread)
DECL|k_current_get|variable|k_current_get
DECL|k_is_preempt_thread|variable|k_is_preempt_thread
DECL|k_sched_lock|function|void k_sched_lock(void)
DECL|k_sched_time_slice_set|function|void k_sched_time_slice_set(s32_t duration_in_ms, int prio)
DECL|k_sched_unlock|function|void k_sched_unlock(void)
DECL|k_yield|variable|k_yield
DECL|next_up|function|static struct k_thread *next_up(void)
DECL|pended_on|function|static _wait_q_t *pended_on(struct k_thread *thread)
DECL|pend|function|static void pend(struct k_thread *thread, _wait_q_t *wait_q, s32_t timeout)
DECL|sched_lock|variable|sched_lock
DECL|update_cache|function|static void update_cache(int preempt_ok)
