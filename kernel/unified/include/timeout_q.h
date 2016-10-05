DECL|_abort_thread_timeout|function|static inline int _abort_thread_timeout(struct k_thread *thread)
DECL|_abort_timeout|function|static inline int _abort_timeout(struct _timeout *t)
DECL|_add_thread_timeout|function|static inline void _add_thread_timeout(struct k_thread *thread, _wait_q_t *wait_q, int32_t timeout)
DECL|_add_timeout|function|static inline void _add_timeout(struct k_thread *thread,struct _timeout *timeout_obj, _wait_q_t *wait_q, int32_t timeout)
DECL|_get_next_timeout_expiry|function|static inline int32_t _get_next_timeout_expiry(void)
DECL|_handle_one_timeout|function|static inline struct _timeout *_handle_one_timeout(sys_dlist_t *timeout_q)
DECL|_handle_timeouts|function|static inline void _handle_timeouts(void)
DECL|_init_thread_timeout|function|static inline void _init_thread_timeout(struct k_thread *thread)
DECL|_init_timeout|function|static inline void _init_timeout(struct _timeout *t, _timeout_func_t func)
DECL|_is_timeout_insert_point|function|static int _is_timeout_insert_point(sys_dnode_t *test, void *timeout)
DECL|_kernel_nanokernel_include_timeout_q__h_|macro|_kernel_nanokernel_include_timeout_q__h_
DECL|_nano_timeout_tcs_init|function|static inline void _nano_timeout_tcs_init(struct tcs *tcs)
DECL|_unpend_thread_timing_out|function|static inline void _unpend_thread_timing_out(struct k_thread *thread, struct _timeout *timeout_obj)
DECL|_unpend_thread_timing_out|macro|_unpend_thread_timing_out
