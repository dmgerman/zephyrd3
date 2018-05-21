DECL|LIFO_THREAD_PRIO|macro|LIFO_THREAD_PRIO
DECL|LIST_LEN|macro|LIST_LEN
DECL|NUM_SCRATCH_LIFO_PACKETS|macro|NUM_SCRATCH_LIFO_PACKETS
DECL|STACK_SIZE|macro|STACK_SIZE
DECL|TIMEOUT_ORDER_NUM_THREADS|macro|TIMEOUT_ORDER_NUM_THREADS
DECL|TSTACK_SIZE|macro|TSTACK_SIZE
DECL|data_if_needed|member|void *data_if_needed;
DECL|data|variable|data
DECL|get_scratch_packet|function|static void *get_scratch_packet(void)
DECL|is_timeout_in_range|function|static bool is_timeout_in_range(u32_t start_time, u32_t timeout)
DECL|klifo|member|struct k_lifo *klifo;
DECL|lifo_timeout|variable|lifo_timeout
DECL|lifo|variable|lifo
DECL|link_in_lifo|member|void *link_in_lifo;
DECL|link_in_lifo|member|void *link_in_lifo;
DECL|link_in_lifo|member|void *link_in_lifo;
DECL|plifo|variable|plifo
DECL|put_scratch_packet|function|static void put_scratch_packet(void *packet)
DECL|q_order|member|s32_t q_order;
DECL|reply_packet|struct|struct reply_packet {
DECL|reply|member|s32_t reply;
DECL|scratch_lifo_packets_lifo|variable|scratch_lifo_packets_lifo
DECL|scratch_lifo_packets|variable|scratch_lifo_packets
DECL|scratch_lifo_packet|struct|struct scratch_lifo_packet {
DECL|start_sema|variable|start_sema
DECL|tdata1|variable|tdata1
DECL|tdata|variable|tdata
DECL|test_lifo_nowait|function|static void test_lifo_nowait(void)
DECL|test_lifo_wait|function|static void test_lifo_wait(void)
DECL|test_main|function|void test_main(void)
DECL|test_multiple_threads_pending|function|static int test_multiple_threads_pending(struct timeout_order_data *test_data, int test_data_size)
DECL|test_para_init|function|static void test_para_init(void)
DECL|test_thread_pend_and_timeout|function|void test_thread_pend_and_timeout(void *p1, void *p2, void *p3)
DECL|test_thread_put_timeout|function|static void test_thread_put_timeout(void *p1, void *p2, void *p3)
DECL|test_thread_timeout_reply_values_wfe|function|static void test_thread_timeout_reply_values_wfe(void *p1, void *p2, void *p3)
DECL|test_thread_timeout_reply_values|function|static void test_thread_timeout_reply_values(void *p1, void *p2, void *p3)
DECL|test_timeout_empty_lifo|function|static void test_timeout_empty_lifo(void)
DECL|test_timeout_lifo_thread|function|static void test_timeout_lifo_thread(void)
DECL|test_timeout_non_empty_lifo|function|static void test_timeout_non_empty_lifo(void)
DECL|test_timeout_threads_pend_on_lifo|function|static void test_timeout_threads_pend_on_lifo(void)
DECL|thread_entry_nowait|function|static void thread_entry_nowait(void *p1, void *p2, void *p3)
DECL|thread_entry_wait|function|static void thread_entry_wait(void *p1, void *p2, void *p3)
DECL|tid|variable|tid
DECL|timeout_order_data_mult_lifo|variable|timeout_order_data_mult_lifo
DECL|timeout_order_data|struct|struct timeout_order_data {
DECL|timeout_order_data|variable|timeout_order_data
DECL|timeout_order_lifo|variable|timeout_order_lifo
DECL|timeout_order|member|s32_t timeout_order;
DECL|timeout|member|u32_t timeout;
DECL|ttdata|variable|ttdata
DECL|wait_sema|variable|wait_sema
