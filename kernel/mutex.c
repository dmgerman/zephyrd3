DECL|RECORD_CONFLICT|macro|RECORD_CONFLICT
DECL|RECORD_STATE_CHANGE|macro|RECORD_STATE_CHANGE
DECL|_SYSCALL_HANDLER1|function|_SYSCALL_HANDLER1(k_mutex_init, mutex)
DECL|_SYSCALL_HANDLER2|function|_SYSCALL_HANDLER2(k_mutex_lock, mutex, timeout)
DECL|_impl_k_mutex_init|function|void _impl_k_mutex_init(struct k_mutex *mutex)
DECL|_impl_k_mutex_lock|function|int _impl_k_mutex_lock(struct k_mutex *mutex, s32_t timeout)
DECL|_impl_k_mutex_unlock|function|void _impl_k_mutex_unlock(struct k_mutex *mutex)
DECL|_trace_list_k_mutex|variable|_trace_list_k_mutex
DECL|adjust_owner_prio|function|static void adjust_owner_prio(struct k_mutex *mutex, int new_prio)
DECL|init_mutex_module|function|static int init_mutex_module(struct device *dev)
DECL|new_prio_for_inheritance|function|static int new_prio_for_inheritance(int target, int limit)
