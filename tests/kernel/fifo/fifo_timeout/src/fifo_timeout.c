DECL|FIFO_THREAD_PRIO|macro|FIFO_THREAD_PRIO
DECL|NUM_SCRATCH_FIFO_PACKETS|macro|NUM_SCRATCH_FIFO_PACKETS
DECL|TIMEOUT_ORDER_NUM_THREADS|macro|TIMEOUT_ORDER_NUM_THREADS
DECL|TSTACK_SIZE|macro|TSTACK_SIZE
DECL|data_if_needed|member|void *data_if_needed;
DECL|fifo_timeout|variable|fifo_timeout
DECL|fifo|member|struct k_fifo *fifo;
DECL|get_scratch_packet|function|static void *get_scratch_packet(void)
DECL|is_timeout_in_range|function|static bool is_timeout_in_range(u32_t start_time, u32_t timeout)
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|put_scratch_packet|function|static void put_scratch_packet(void *packet)
DECL|q_order|member|s32_t q_order;
DECL|reply_packet|struct|struct reply_packet {
DECL|reply|member|s32_t reply;
DECL|scratch_fifo_packets_fifo|variable|scratch_fifo_packets_fifo
DECL|scratch_fifo_packets|variable|scratch_fifo_packets
DECL|scratch_fifo_packet|struct|struct scratch_fifo_packet {
DECL|test_main|function|void test_main(void)
DECL|test_multiple_threads_get_data|function|static int test_multiple_threads_get_data(struct timeout_order_data *test_data, int test_data_size)
DECL|test_multiple_threads_pending|function|static int test_multiple_threads_pending(struct timeout_order_data *test_data, int test_data_size)
DECL|test_thread_pend_and_get_data|function|static void test_thread_pend_and_get_data(void *p1, void *p2, void *p3)
DECL|test_thread_pend_and_timeout|function|static void test_thread_pend_and_timeout(void *p1, void *p2, void *p3)
DECL|test_thread_put_timeout|function|static void test_thread_put_timeout(void *p1, void *p2, void *p3)
DECL|test_thread_timeout_reply_values_wfe|function|static void test_thread_timeout_reply_values_wfe(void *p1, void *p2, void *p3)
DECL|test_thread_timeout_reply_values|function|static void test_thread_timeout_reply_values(void *p1, void *p2, void *p3)
DECL|test_timeout_empty_fifo|function|static void test_timeout_empty_fifo(void)
DECL|test_timeout_fifo_thread|function|static void test_timeout_fifo_thread(void)
DECL|test_timeout_non_empty_fifo|function|static void test_timeout_non_empty_fifo(void)
DECL|test_timeout_setup|function|static void test_timeout_setup(void)
DECL|test_timeout_threads_pend_fail_on_fifo|function|static void test_timeout_threads_pend_fail_on_fifo(void)
DECL|test_timeout_threads_pend_on_dual_fifos|function|static void test_timeout_threads_pend_on_dual_fifos(void)
DECL|test_timeout_threads_pend_on_fifo|function|static void test_timeout_threads_pend_on_fifo(void)
DECL|tid|variable|tid
DECL|timeout_order_data_mult_fifo|variable|timeout_order_data_mult_fifo
DECL|timeout_order_data|struct|struct timeout_order_data {
DECL|timeout_order_data|variable|timeout_order_data
DECL|timeout_order_fifo|variable|timeout_order_fifo
DECL|timeout_order|member|s32_t timeout_order;
DECL|timeout|member|u32_t timeout;
DECL|ttdata|variable|ttdata
