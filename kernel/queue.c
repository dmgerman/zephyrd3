DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_queue_alloc_append, queue, data)
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_queue_alloc_prepend, queue, data)
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_queue_get, queue, timeout_p)
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_queue_init, queue_ptr)
DECL|_impl_k_queue_alloc_append|function|int _impl_k_queue_alloc_append(struct k_queue *queue, void *data)
DECL|_impl_k_queue_alloc_prepend|function|int _impl_k_queue_alloc_prepend(struct k_queue *queue, void *data)
DECL|_impl_k_queue_cancel_wait|function|void _impl_k_queue_cancel_wait(struct k_queue *queue)
DECL|_impl_k_queue_get|function|void *_impl_k_queue_get(struct k_queue *queue, s32_t timeout)
DECL|_impl_k_queue_init|function|void _impl_k_queue_init(struct k_queue *queue)
DECL|_trace_list_k_queue|variable|_trace_list_k_queue
DECL|alloc_node|struct|struct alloc_node {
DECL|data|member|void *data;
DECL|handle_poll_events|function|static inline void handle_poll_events(struct k_queue *queue, u32_t state)
DECL|init_queue_module|function|static int init_queue_module(struct device *dev)
DECL|k_queue_append_list|function|void k_queue_append_list(struct k_queue *queue, void *head, void *tail)
DECL|k_queue_append|function|void k_queue_append(struct k_queue *queue, void *data)
DECL|k_queue_insert|function|void k_queue_insert(struct k_queue *queue, void *prev, void *data)
DECL|k_queue_merge_slist|function|void k_queue_merge_slist(struct k_queue *queue, sys_slist_t *list)
DECL|k_queue_poll|function|static void *k_queue_poll(struct k_queue *queue, s32_t timeout)
DECL|k_queue_prepend|function|void k_queue_prepend(struct k_queue *queue, void *data)
DECL|node|member|sys_sfnode_t node;
DECL|prepare_thread_to_run|function|static void prepare_thread_to_run(struct k_thread *thread, void *data)
DECL|queue_insert|function|static int queue_insert(struct k_queue *queue, void *prev, void *data,bool alloc)
DECL|z_queue_node_peek|function|void *z_queue_node_peek(sys_sfnode_t *node, bool needs_free)
