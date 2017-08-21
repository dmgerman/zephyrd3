DECL|_trace_list_k_queue|variable|_trace_list_k_queue
DECL|handle_poll_events|function|static inline int handle_poll_events(struct k_queue *queue)
DECL|init_queue_module|function|static int init_queue_module(struct device *dev)
DECL|k_queue_append_list|function|void k_queue_append_list(struct k_queue *queue, void *head, void *tail)
DECL|k_queue_append|function|void k_queue_append(struct k_queue *queue, void *data)
DECL|k_queue_cancel_wait|function|void k_queue_cancel_wait(struct k_queue *queue)
DECL|k_queue_get|function|void *k_queue_get(struct k_queue *queue, s32_t timeout)
DECL|k_queue_init|function|void k_queue_init(struct k_queue *queue)
DECL|k_queue_insert|function|void k_queue_insert(struct k_queue *queue, void *prev, void *data)
DECL|k_queue_merge_slist|function|void k_queue_merge_slist(struct k_queue *queue, sys_slist_t *list)
DECL|k_queue_poll|function|static void *k_queue_poll(struct k_queue *queue, s32_t timeout)
DECL|k_queue_prepend|function|void k_queue_prepend(struct k_queue *queue, void *data)
DECL|prepare_thread_to_run|function|static void prepare_thread_to_run(struct k_thread *thread, void *data)
