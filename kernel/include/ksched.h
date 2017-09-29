DECL|_ASSERT_VALID_PRIO|macro|_ASSERT_VALID_PRIO
DECL|_ASSERT_VALID_PRIO|macro|_ASSERT_VALID_PRIO
DECL|_VALID_PRIO|macro|_VALID_PRIO
DECL|_VALID_PRIO|macro|_VALID_PRIO
DECL|_find_first_thread_to_unpend|function|_find_first_thread_to_unpend(_wait_q_t *wait_q, struct k_thread *from)
DECL|_get_highest_ready_prio|function|static inline int _get_highest_ready_prio(void)
DECL|_get_new_prio_with_ceiling|function|static inline int _get_new_prio_with_ceiling(int prio)
DECL|_get_next_ready_thread|function|static ALWAYS_INLINE struct k_thread *_get_next_ready_thread(void)
DECL|_get_ready_q_prio_bit|function|static inline int _get_ready_q_prio_bit(int prio)
DECL|_get_ready_q_prio_bmap_index|function|static inline int _get_ready_q_prio_bmap_index(int prio)
DECL|_get_ready_q_q_index|function|static inline int _get_ready_q_q_index(int prio)
DECL|_has_thread_started|function|static inline int _has_thread_started(struct k_thread *thread)
DECL|_is_coop|function|static inline int _is_coop(struct k_thread *thread)
DECL|_is_current_execution_context_preemptible|function|static inline int _is_current_execution_context_preemptible(void)
DECL|_is_higher_prio_than_current|function|static inline int _is_higher_prio_than_current(struct k_thread *thread)
DECL|_is_idle_thread_ptr|function|static inline int _is_idle_thread_ptr(k_tid_t thread)
DECL|_is_idle_thread|function|static inline int _is_idle_thread(void *entry_point)
DECL|_is_preempt|function|static inline int _is_preempt(struct k_thread *thread)
DECL|_is_prio1_higher_than_or_equal_to_prio2|function|static inline int _is_prio1_higher_than_or_equal_to_prio2(int prio1, int prio2)
DECL|_is_prio1_higher_than_prio2|function|static inline int _is_prio1_higher_than_prio2(int prio1, int prio2)
DECL|_is_prio1_lower_than_or_equal_to_prio2|function|static inline int _is_prio1_lower_than_or_equal_to_prio2(int prio1, int prio2)
DECL|_is_prio1_lower_than_prio2|function|static inline int _is_prio1_lower_than_prio2(int prio1, int prio2)
DECL|_is_prio_higher_or_equal|function|static inline int _is_prio_higher_or_equal(int prio1, int prio2)
DECL|_is_prio_higher|function|static inline int _is_prio_higher(int prio, int test_prio)
DECL|_is_prio_lower_or_equal|function|static inline int _is_prio_lower_or_equal(int prio1, int prio2)
DECL|_is_prio_lower|function|static inline int _is_prio_lower(int prio1, int prio2)
DECL|_is_t1_higher_prio_than_t2|function|static inline int _is_t1_higher_prio_than_t2(struct k_thread *t1, struct k_thread *t2)
DECL|_is_thread_dummy|function|static inline int _is_thread_dummy(struct k_thread *thread)
DECL|_is_thread_pending|function|static inline int _is_thread_pending(struct k_thread *thread)
DECL|_is_thread_polling|function|static inline int _is_thread_polling(struct k_thread *thread)
DECL|_is_thread_prevented_from_running|function|static inline int _is_thread_prevented_from_running(struct k_thread *thread)
DECL|_is_thread_ready|function|static inline int _is_thread_ready(struct k_thread *thread)
DECL|_is_thread_state_set|function|static inline int _is_thread_state_set(struct k_thread *thread, u32_t state)
DECL|_is_thread_timeout_active|function|static inline int _is_thread_timeout_active(struct k_thread *thread)
DECL|_is_thread_timeout_expired|function|static ALWAYS_INLINE int _is_thread_timeout_expired(struct k_thread *thread)
DECL|_is_thread_user|function|static inline int _is_thread_user(void)
DECL|_is_under_prio_ceiling|function|static inline int _is_under_prio_ceiling(int prio)
DECL|_ksched__h_|macro|_ksched__h_
DECL|_mark_thread_as_dead|function|static inline void _mark_thread_as_dead(struct k_thread *thread)
DECL|_mark_thread_as_not_pending|function|static inline void _mark_thread_as_not_pending(struct k_thread *thread)
DECL|_mark_thread_as_not_polling|function|static inline void _mark_thread_as_not_polling(struct k_thread *thread)
DECL|_mark_thread_as_not_suspended|function|static inline void _mark_thread_as_not_suspended(struct k_thread *thread)
DECL|_mark_thread_as_pending|function|static inline void _mark_thread_as_pending(struct k_thread *thread)
DECL|_mark_thread_as_polling|function|static inline void _mark_thread_as_polling(struct k_thread *thread)
DECL|_mark_thread_as_started|function|static inline void _mark_thread_as_started(struct k_thread *thread)
DECL|_mark_thread_as_suspended|function|static inline void _mark_thread_as_suspended(struct k_thread *thread)
DECL|_must_switch_threads|function|static inline int _must_switch_threads(void)
DECL|_peek_first_pending_thread|function|static inline struct k_thread *_peek_first_pending_thread(_wait_q_t *wait_q)
DECL|_ready_thread|function|static inline void _ready_thread(struct k_thread *thread)
DECL|_reset_thread_states|function|static inline void _reset_thread_states(struct k_thread *thread,u32_t states)
DECL|_sched_lock|function|static inline void _sched_lock(void)
DECL|_sched_unlock_no_reschedule|function|static ALWAYS_INLINE void _sched_unlock_no_reschedule(void)
DECL|_set_thread_states|function|static inline void _set_thread_states(struct k_thread *thread, u32_t states)
DECL|_thread_priority_set|function|static inline void _thread_priority_set(struct k_thread *thread, int prio)
DECL|_unpend_first_thread|function|static inline struct k_thread *_unpend_first_thread(_wait_q_t *wait_q)
DECL|_unpend_thread|function|static inline void _unpend_thread(struct k_thread *thread)
