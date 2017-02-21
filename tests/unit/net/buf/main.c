DECL|TEST_BUF_COUNT|macro|TEST_BUF_COUNT
DECL|TEST_BUF_SIZE|macro|TEST_BUF_SIZE
DECL|irq_lock|function|unsigned int irq_lock(void)
DECL|irq_unlock|function|void irq_unlock(unsigned int key)
DECL|k_is_in_isr|function|int k_is_in_isr(void)
DECL|k_queue_append_list|function|void k_queue_append_list(struct k_queue *queue, void *head, void *tail) {}
DECL|k_queue_append|function|void k_queue_append(struct k_queue *queue, void *data)
DECL|k_queue_get|function|void *k_queue_get(struct k_queue *queue, int32_t timeout)
DECL|k_queue_init|function|void k_queue_init(struct k_queue *queue) {}
DECL|k_queue_prepend|function|void k_queue_prepend(struct k_queue *fifo, void *data)
DECL|test_get_single_buffer|function|static void test_get_single_buffer(void)
DECL|test_main|function|void test_main(void)
