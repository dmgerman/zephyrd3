DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_sem_init, sem, initial_count, limit)
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_sem_take, sem, timeout)
DECL|_impl_k_sem_give|function|void _impl_k_sem_give(struct k_sem *sem)
DECL|_impl_k_sem_init|function|void _impl_k_sem_init(struct k_sem *sem, unsigned int initial_count, unsigned int limit)
DECL|_impl_k_sem_take|function|int _impl_k_sem_take(struct k_sem *sem, s32_t timeout)
DECL|_trace_list_k_sem|variable|_trace_list_k_sem
DECL|do_sem_give|function|static void do_sem_give(struct k_sem *sem)
DECL|handle_poll_events|function|static inline void handle_poll_events(struct k_sem *sem)
DECL|increment_count_up_to_limit|function|static inline void increment_count_up_to_limit(struct k_sem *sem)
DECL|init_sem_module|function|static int init_sem_module(struct device *dev)
