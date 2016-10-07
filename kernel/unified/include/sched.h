DECL|_get_highest_ready_prio|function|static inline int _get_highest_ready_prio(void)
DECL|_get_new_prio_with_ceiling|function|static inline int _get_new_prio_with_ceiling(int prio)
DECL|_get_ready_q_prio_bit|function|static inline int _get_ready_q_prio_bit(int prio)
DECL|_get_ready_q_prio_bmap_index|function|static inline int _get_ready_q_prio_bmap_index(int prio)
DECL|_get_ready_q_q_index|function|static inline int _get_ready_q_q_index(int prio)
DECL|_has_thread_started|function|static inline int _has_thread_started(struct k_thread *thread)
DECL|_is_coop|function|static inline int _is_coop(struct k_thread *thread)
DECL|_is_current_execution_context_preemptible|function|static inline int _is_current_execution_context_preemptible(void)
DECL|_is_higher_prio_than_current|function|static inline int _is_higher_prio_than_current(struct k_thread *thread)
DECL|_is_preempt|function|static inline int _is_preempt(struct k_thread *thread)
DECL|_is_prio1_higher_than_prio2|function|static inline int _is_prio1_higher_than_prio2(int prio1, int prio2)
DECL|_is_prio_higher|function|static inline int _is_prio_higher(int prio, int test_prio)
DECL|_is_t1_higher_prio_than_t2|function|static inline int _is_t1_higher_prio_than_t2(struct k_thread *t1, struct k_thread *t2)
DECL|_is_thread_pending|function|static inline int _is_thread_pending(struct k_thread *thread)
DECL|_is_thread_ready|function|static inline int _is_thread_ready(struct k_thread *thread)
DECL|_is_thread_timing|function|static inline int _is_thread_timing(struct k_thread *thread)
DECL|_is_under_prio_ceiling|function|static inline int _is_under_prio_ceiling(int prio)
DECL|_mark_thread_as_dead|function|static inline void _mark_thread_as_dead(struct k_thread *thread)
DECL|_mark_thread_as_not_pending|function|static inline void _mark_thread_as_not_pending(struct k_thread *thread)
DECL|_mark_thread_as_not_suspended|function|static inline void _mark_thread_as_not_suspended(struct k_thread *thread)
DECL|_mark_thread_as_not_timing|function|static inline void _mark_thread_as_not_timing(struct k_thread *thread)
DECL|_mark_thread_as_pending|function|static inline void _mark_thread_as_pending(struct k_thread *thread)
DECL|_mark_thread_as_started|function|static inline void _mark_thread_as_started(struct k_thread *thread)
DECL|_mark_thread_as_suspended|function|static inline void _mark_thread_as_suspended(struct k_thread *thread)
DECL|_mark_thread_as_timing|function|static inline void _mark_thread_as_timing(struct k_thread *thread)
DECL|_must_switch_threads|function|static inline int _must_switch_threads(void)
DECL|_peek_first_pending_thread|function|static inline struct k_thread *_peek_first_pending_thread(_wait_q_t *wait_q)
DECL|_ready_thread|function|static inline void _ready_thread(struct k_thread *thread)
DECL|_reset_thread_states|function|static inline void _reset_thread_states(struct k_thread *thread,uint32_t states)
DECL|_sched__h_|macro|_sched__h_
DECL|_sched_unlock_no_reschedule|function|static inline void _sched_unlock_no_reschedule(void)
DECL|_set_thread_states|function|static inline void _set_thread_states(struct k_thread *thread, uint32_t states)
DECL|_thread_priority_set|function|static inline void _thread_priority_set(struct k_thread *thread, int prio)
DECL|_unpend_first_thread|function|static inline struct k_thread *_unpend_first_thread(_wait_q_t *wait_q)
DECL|_unpend_thread|function|static inline void _unpend_thread(struct k_thread *thread)
DECL|k_sched_lock|function|static inline void k_sched_lock(void)
