DECL|_mbox_async_alloc|function|static inline void _mbox_async_alloc(struct k_mbox_async **async)
DECL|_mbox_async_free|function|static inline void _mbox_async_free(struct k_mbox_async *async)
DECL|_mbox_message_data_check|function|static int _mbox_message_data_check(struct k_mbox_msg *rx_msg, void *buffer)
DECL|_mbox_message_dispose|function|static void _mbox_message_dispose(struct k_mbox_msg *rx_msg)
DECL|_mbox_message_match|function|static int _mbox_message_match(struct k_mbox_msg *tx_msg, struct k_mbox_msg *rx_msg)
DECL|_mbox_message_put|function|static int _mbox_message_put(struct k_mbox *mbox, struct k_mbox_msg *tx_msg, int32_t timeout)
DECL|_trace_list_k_mbox|variable|_trace_list_k_mbox
DECL|async_msg|variable|async_msg
DECL|init_mbox_module|function|static int init_mbox_module(struct device *dev)
DECL|k_mbox_async_put|function|void k_mbox_async_put(struct k_mbox *mbox, struct k_mbox_msg *tx_msg, struct k_sem *sem)
DECL|k_mbox_async|struct|struct k_mbox_async {
DECL|k_mbox_data_block_get|function|int k_mbox_data_block_get(struct k_mbox_msg *rx_msg, struct k_mem_pool *pool, struct k_mem_block *block, int32_t timeout)
DECL|k_mbox_data_get|function|void k_mbox_data_get(struct k_mbox_msg *rx_msg, void *buffer)
DECL|k_mbox_get|function|int k_mbox_get(struct k_mbox *mbox, struct k_mbox_msg *rx_msg, void *buffer, int32_t timeout)
DECL|k_mbox_init|function|void k_mbox_init(struct k_mbox *mbox_ptr)
DECL|k_mbox_put|function|int k_mbox_put(struct k_mbox *mbox, struct k_mbox_msg *tx_msg, int32_t timeout)
DECL|task_mbox_block_put|function|void task_mbox_block_put(kmbox_t mbox, kpriority_t prio, struct k_msg *msg, ksem_t sema)
DECL|task_mbox_data_block_get|function|int task_mbox_data_block_get(struct k_msg *msg, struct k_block *block, kmemory_pool_t pool_id, int32_t timeout)
DECL|task_mbox_data_get|function|void task_mbox_data_get(struct k_msg *msg)
DECL|task_mbox_get|function|int task_mbox_get(kmbox_t mbox, struct k_msg *msg, int32_t timeout)
DECL|task_mbox_put|function|int task_mbox_put(kmbox_t mbox, kpriority_t prio, struct k_msg *msg, int32_t timeout)
DECL|thread|member|struct _thread_base thread; /* dummy thread object */
DECL|tx_msg|member|struct k_mbox_msg tx_msg; /* transmit message descriptor */
