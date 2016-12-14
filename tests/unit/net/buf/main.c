DECL|TEST_BUF_COUNT|macro|TEST_BUF_COUNT
DECL|TEST_BUF_SIZE|macro|TEST_BUF_SIZE
DECL|irq_lock|function|unsigned int irq_lock(void)
DECL|irq_unlock|function|void irq_unlock(unsigned int key)
DECL|k_fifo_get|function|void *k_fifo_get(struct k_fifo *fifo, int32_t timeout)
DECL|k_fifo_init|function|void k_fifo_init(struct k_fifo *fifo) {}
DECL|k_fifo_put_list|function|void k_fifo_put_list(struct k_fifo *fifo, void *head, void *tail) {}
DECL|k_fifo_put|function|void k_fifo_put(struct k_fifo *fifo, void *data)
DECL|k_is_in_isr|function|int k_is_in_isr(void)
DECL|k_lifo_get|function|void *k_lifo_get(struct k_lifo *lifo, int32_t timeout)
DECL|k_lifo_init|function|void k_lifo_init(struct k_lifo *lifo) {}
DECL|k_lifo_put|function|void k_lifo_put(struct k_lifo *lifo, void *data)
DECL|test_get_single_buffer|function|static void test_get_single_buffer(void)
DECL|test_main|function|void test_main(void)
