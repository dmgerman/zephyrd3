DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_sleep, duration)
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_thread_priority_set, thread_p, prio)
DECL|_add_thread_to_ready_q|function|void _add_thread_to_ready_q(struct k_thread *thread)
DECL|_find_first_thread_to_unpend|function|struct k_thread *_find_first_thread_to_unpend(_wait_q_t *wait_q, struct k_thread *from)
DECL|_get_highest_ready_prio|function|int _get_highest_ready_prio(void)
DECL|_get_highest_ready_prio|function|static inline int _get_highest_ready_prio(void)
DECL|_get_next_ready_thread|function|struct k_thread *_get_next_ready_thread(void)
DECL|_get_next_switch_handle|function|void *_get_next_switch_handle(void *interrupted)
DECL|_get_ready_q_prio_bit|function|static inline int _get_ready_q_prio_bit(int prio)
DECL|_get_ready_q_prio_bmap_index|function|static inline int _get_ready_q_prio_bmap_index(int prio)
DECL|_get_ready_q_q_index|function|static inline int _get_ready_q_q_index(int prio)
DECL|_impl_k_current_get|function|k_tid_t _impl_k_current_get(void)
DECL|_impl_k_is_preempt_thread|function|int _impl_k_is_preempt_thread(void)
DECL|_impl_k_sleep|function|void _impl_k_sleep(s32_t duration)
DECL|_impl_k_thread_priority_get|function|int _impl_k_thread_priority_get(k_tid_t thread)
DECL|_impl_k_thread_priority_set|function|void _impl_k_thread_priority_set(k_tid_t tid, int prio)
DECL|_impl_k_wakeup|function|void _impl_k_wakeup(k_tid_t thread)
DECL|_impl_k_yield|function|void _impl_k_yield(void)
DECL|_is_idle_thread_ptr|function|static inline int _is_idle_thread_ptr(k_tid_t thread)
DECL|_is_preempt|function|static inline int _is_preempt(struct k_thread *thread)
DECL|_is_thread_dummy|function|static inline int _is_thread_dummy(struct k_thread *thread)
DECL|_is_thread_time_slicing|function|int _is_thread_time_slicing(struct k_thread *thread)
DECL|_kernel|variable|_kernel
DECL|_mark_thread_as_pending|function|static inline void _mark_thread_as_pending(struct k_thread *thread)
DECL|_move_thread_to_end_of_prio_q|function|void _move_thread_to_end_of_prio_q(struct k_thread *thread)
DECL|_ms_to_ticks|function|s32_t _ms_to_ticks(s32_t ms)
DECL|_pend_current_thread|function|int _pend_current_thread(int key, _wait_q_t *wait_q, s32_t timeout)
DECL|_pend_thread|function|void _pend_thread(struct k_thread *thread, _wait_q_t *wait_q, s32_t timeout)
DECL|_remove_thread_from_ready_q|function|void _remove_thread_from_ready_q(struct k_thread *thread)
DECL|_reschedule|function|int _reschedule(int key)
DECL|_thread_priority_set|function|void _thread_priority_set(struct k_thread *thread, int prio)
DECL|_unpend_first_thread|function|struct k_thread *_unpend_first_thread(_wait_q_t *wait_q)
DECL|_unpend_thread_no_timeout|function|void _unpend_thread_no_timeout(struct k_thread *thread)
DECL|_unpend_thread|function|void _unpend_thread(struct k_thread *thread)
DECL|_update_time_slice_before_swap|function|void _update_time_slice_before_swap(void)
DECL|clear_ready_q_prio_bit|function|static void clear_ready_q_prio_bit(int prio)
DECL|get_ready_q_head|function|static struct k_thread *get_ready_q_head(void)
DECL|k_current_get|variable|k_current_get
DECL|k_is_preempt_thread|variable|k_is_preempt_thread
DECL|k_sched_lock|function|void k_sched_lock(void)
DECL|k_sched_time_slice_set|function|void k_sched_time_slice_set(s32_t duration_in_ms, int prio)
DECL|k_sched_unlock|function|void k_sched_unlock(void)
DECL|k_yield|variable|k_yield
DECL|set_ready_q_prio_bit|function|static void set_ready_q_prio_bit(int prio)
