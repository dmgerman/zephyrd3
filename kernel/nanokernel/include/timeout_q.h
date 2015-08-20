DECL|_kernel_nanokernel_include_timeout_q__h_|macro|_kernel_nanokernel_include_timeout_q__h_
DECL|_nano_get_earliest_timeouts_deadline|function|static inline uint32_t _nano_get_earliest_timeouts_deadline(void)
DECL|_nano_timeout_abort|function|static inline void _nano_timeout_abort(struct tcs *tcs)
DECL|_nano_timeout_add|function|static inline void _nano_timeout_add(struct tcs *tcs,struct _nano_queue *wait_q, int32_t timeout)
DECL|_nano_timeout_handle_one_timeout|function|static inline struct _nano_timeout *_nano_timeout_handle_one_timeout(sys_dlist_t *timeout_q)
DECL|_nano_timeout_handle_timeouts|function|static inline void _nano_timeout_handle_timeouts(void)
DECL|_nano_timeout_insert_point_test|function|static int _nano_timeout_insert_point_test(sys_dnode_t *test, void *timeout)
DECL|_nano_timeout_tcs_init|function|static inline void _nano_timeout_tcs_init(struct tcs *tcs)
