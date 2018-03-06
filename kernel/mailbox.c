DECL|_trace_list_k_mbox|variable|_trace_list_k_mbox
DECL|async_msg|variable|async_msg
DECL|init_mbox_module|function|static int init_mbox_module(struct device *dev)
DECL|k_mbox_async_put|function|void k_mbox_async_put(struct k_mbox *mbox, struct k_mbox_msg *tx_msg, struct k_sem *sem)
DECL|k_mbox_async|struct|struct k_mbox_async {
DECL|k_mbox_data_block_get|function|int k_mbox_data_block_get(struct k_mbox_msg *rx_msg, struct k_mem_pool *pool, struct k_mem_block *block, s32_t timeout)
DECL|k_mbox_data_get|function|void k_mbox_data_get(struct k_mbox_msg *rx_msg, void *buffer)
DECL|k_mbox_get|function|int k_mbox_get(struct k_mbox *mbox, struct k_mbox_msg *rx_msg, void *buffer, s32_t timeout)
DECL|k_mbox_init|function|void k_mbox_init(struct k_mbox *mbox_ptr)
DECL|k_mbox_put|function|int k_mbox_put(struct k_mbox *mbox, struct k_mbox_msg *tx_msg, s32_t timeout)
DECL|mbox_async_alloc|function|static inline void mbox_async_alloc(struct k_mbox_async **async)
DECL|mbox_async_free|function|static inline void mbox_async_free(struct k_mbox_async *async)
DECL|mbox_message_data_check|function|static int mbox_message_data_check(struct k_mbox_msg *rx_msg, void *buffer)
DECL|mbox_message_dispose|function|static void mbox_message_dispose(struct k_mbox_msg *rx_msg)
DECL|mbox_message_match|function|static int mbox_message_match(struct k_mbox_msg *tx_msg, struct k_mbox_msg *rx_msg)
DECL|mbox_message_put|function|static int mbox_message_put(struct k_mbox *mbox, struct k_mbox_msg *tx_msg, s32_t timeout)
DECL|thread|member|struct _thread_base thread; /* dummy thread object */
DECL|tx_msg|member|struct k_mbox_msg tx_msg; /* transmit message descriptor */
