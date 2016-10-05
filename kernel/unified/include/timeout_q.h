DECL|_abort_thread_timeout|function|static inline int _abort_thread_timeout(struct k_thread *thread)
DECL|_abort_timeout|function|static inline int _abort_timeout(struct _timeout *t)
DECL|_add_thread_timeout|function|static inline void _add_thread_timeout(struct k_thread *thread, _wait_q_t *wait_q, int32_t timeout)
DECL|_add_timeout|function|static inline void _add_timeout(struct k_thread *thread,struct _timeout *timeout_obj, _wait_q_t *wait_q, int32_t timeout)
DECL|_kernel_nanokernel_include_timeout_q__h_|macro|_kernel_nanokernel_include_timeout_q__h_
DECL|_nano_timeout_tcs_init|function|static inline void _nano_timeout_tcs_init(struct tcs *tcs)
DECL|_timeout_get_next_expiry|function|static inline int32_t _timeout_get_next_expiry(void)
DECL|_timeout_handle_one_timeout|function|static inline struct _timeout *_timeout_handle_one_timeout(sys_dlist_t *timeout_q)
DECL|_timeout_handle_timeouts|function|static inline void _timeout_handle_timeouts(void)
DECL|_timeout_init|function|static inline void _timeout_init(struct _timeout *t, _timeout_func_t func)
DECL|_timeout_insert_point_test|function|static int _timeout_insert_point_test(sys_dnode_t *test, void *timeout)
DECL|_timeout_object_dequeue|function|static inline void _timeout_object_dequeue(struct tcs *tcs, struct _timeout *t)
DECL|_timeout_object_dequeue|macro|_timeout_object_dequeue
DECL|_timeout_tcs_init|function|static inline void _timeout_tcs_init(struct tcs *tcs)
