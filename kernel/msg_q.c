DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(k_msgq_get, msgq_p, data, timeout)
DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(k_msgq_init, q, buffer, msg_size, max_msgs)
DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(k_msgq_put, msgq_p, data, timeout)
DECL|_impl_k_msgq_get|function|int _impl_k_msgq_get(struct k_msgq *q, void *data, s32_t timeout)
DECL|_impl_k_msgq_init|function|void _impl_k_msgq_init(struct k_msgq *q, char *buffer, size_t msg_size, u32_t max_msgs)
DECL|_impl_k_msgq_purge|function|void _impl_k_msgq_purge(struct k_msgq *q)
DECL|_impl_k_msgq_put|function|int _impl_k_msgq_put(struct k_msgq *q, void *data, s32_t timeout)
DECL|_trace_list_k_msgq|variable|_trace_list_k_msgq
DECL|init_msgq_module|function|static int init_msgq_module(struct device *dev)
