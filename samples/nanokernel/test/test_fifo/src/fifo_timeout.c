DECL|FIBER_PRIORITY|macro|FIBER_PRIORITY
DECL|FIBER_STACKSIZE|macro|FIBER_STACKSIZE
DECL|NUM_SCRATCH_FIFO_PACKETS|macro|NUM_SCRATCH_FIFO_PACKETS
DECL|TIMEOUT_ORDER_NUM_FIBERS|macro|TIMEOUT_ORDER_NUM_FIBERS
DECL|data_if_needed|member|void *data_if_needed;
DECL|fifo_timeout|variable|fifo_timeout
DECL|fifo|member|struct nano_fifo *fifo;
DECL|get_scratch_packet|function|void *get_scratch_packet(void)
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|put_scratch_packet|function|void put_scratch_packet(void *packet)
DECL|q_order|member|int q_order;
DECL|reply_packet|struct|struct reply_packet {
DECL|reply|member|int reply;
DECL|scratch_fifo_packets_fifo|variable|scratch_fifo_packets_fifo
DECL|scratch_fifo_packets|variable|scratch_fifo_packets
DECL|scratch_fifo_packet|struct|struct scratch_fifo_packet {
DECL|test_fiber_pend_and_get_data|function|static void test_fiber_pend_and_get_data(int data, int unused)
DECL|test_fiber_pend_and_timeout|function|static void test_fiber_pend_and_timeout(int data, int unused)
DECL|test_fiber_put_timeout|function|static void test_fiber_put_timeout(int fifo, int timeout)
DECL|test_fiber_ticks_special_values|function|static void test_fiber_ticks_special_values(int packet, int special_value)
DECL|test_fifo_timeout|function|int test_fifo_timeout(void)
DECL|test_multiple_fibers_get_data|function|static int test_multiple_fibers_get_data(struct timeout_order_data *test_data,int test_data_size)
DECL|test_multiple_fibers_pending|function|static int test_multiple_fibers_pending(struct timeout_order_data *test_data,int test_data_size)
DECL|timeout_order_data_mult_fifo|variable|timeout_order_data_mult_fifo
DECL|timeout_order_data|struct|struct timeout_order_data {
DECL|timeout_order_data|variable|timeout_order_data
DECL|timeout_order_fifo|variable|timeout_order_fifo
DECL|timeout_order|member|int timeout_order;
DECL|timeout_stacks|variable|timeout_stacks
DECL|timeout|member|int32_t timeout;
