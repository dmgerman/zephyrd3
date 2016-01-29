DECL|FIBER_PRIORITY|macro|FIBER_PRIORITY
DECL|FIBER_STACKSIZE|macro|FIBER_STACKSIZE
DECL|ISR_LIFO_INFO|typedef|} ISR_LIFO_INFO;
DECL|LIFO_ITEM|typedef|} LIFO_ITEM;
DECL|NUM_SCRATCH_Q_PACKETS|macro|NUM_SCRATCH_Q_PACKETS
DECL|NUM_SW_IRQS|macro|NUM_SW_IRQS
DECL|NUM_WAITERS|macro|NUM_WAITERS
DECL|TIMEOUT_ORDER_NUM_FIBERS|macro|TIMEOUT_ORDER_NUM_FIBERS
DECL|_trigger_nano_isr_lifo_get|function|static void _trigger_nano_isr_lifo_get(void)
DECL|_trigger_nano_isr_lifo_put|function|static void _trigger_nano_isr_lifo_put(void)
DECL|data_if_needed|member|void *data_if_needed;
DECL|data|member|uint32_t data; /* miscellaneous data put on LIFO (not important) */
DECL|data|member|void *data; /* pointer to data to add */
DECL|do_test_multiple_waiters|function|static int do_test_multiple_waiters(void)
DECL|fiberDetectedFailure|variable|fiberDetectedFailure
DECL|fiberEntry|function|static void fiberEntry(int arg1, int arg2)
DECL|fiberLifoNonWaitTest|function|int fiberLifoNonWaitTest(void)
DECL|fiberLifoWaitTest|function|int fiberLifoWaitTest(void)
DECL|fiberStack|variable|fiberStack
DECL|fiberWaitSem|variable|fiberWaitSem
DECL|fiber_multi_waiters_stacks|variable|fiber_multi_waiters_stacks
DECL|fiber_multi_waiters|function|static void fiber_multi_waiters(int arg1, int arg2)
DECL|get_scratch_packet|function|void *get_scratch_packet(void)
DECL|initNanoObjects|function|void initNanoObjects(void)
DECL|isrLifoInfo|variable|isrLifoInfo
DECL|isr_lifo_get|function|void isr_lifo_get(void *data)
DECL|isr_lifo_put|function|void isr_lifo_put(void *data)
DECL|lifoItem|variable|lifoItem
DECL|lifo_ptr|member|struct nano_lifo *lifo_ptr; /* LIFO */
DECL|lifo_timeout|variable|lifo_timeout
DECL|lifo|member|struct nano_lifo *lifo;
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|link_in_lifo|member|void *link_in_lifo;
DECL|link_in_q|member|void *link_in_q;
DECL|link|member|uint32_t link; /* 32-bit word for LIFO to use as a link */
DECL|main|function|void main(void)
DECL|multi_waiters_items|variable|multi_waiters_items
DECL|multi_waiters|variable|multi_waiters
DECL|put_scratch_packet|function|void put_scratch_packet(void *packet)
DECL|q_order|member|int q_order;
DECL|reply_multi_waiters|variable|reply_multi_waiters
DECL|reply_packet|struct|struct reply_packet {
DECL|reply|member|int reply;
DECL|scratch_q_packets_fifo|variable|scratch_q_packets_fifo
DECL|scratch_q_packets|variable|scratch_q_packets
DECL|scratch_q_packet|struct|struct scratch_q_packet {
DECL|taskLifoNonWaitTest|function|int taskLifoNonWaitTest(void)
DECL|taskLifoWaitTest|function|int taskLifoWaitTest(void)
DECL|taskWaitSem|variable|taskWaitSem
DECL|test_fiber_pend_and_get_data|function|static void test_fiber_pend_and_get_data(int data, int unused)
DECL|test_fiber_pend_and_timeout|function|static void test_fiber_pend_and_timeout(int data, int unused)
DECL|test_fiber_put_timeout|function|static void test_fiber_put_timeout(int lifo, int timeout)
DECL|test_fiber_ticks_special_values|function|static void test_fiber_ticks_special_values(int packet, int special_value)
DECL|test_lifo|variable|test_lifo
DECL|test_multiple_fibers_get_data|function|static int test_multiple_fibers_get_data(struct timeout_order_data *test_data,int test_data_size)
DECL|test_multiple_fibers_pending|function|static int test_multiple_fibers_pending(struct timeout_order_data *test_data,int test_data_size)
DECL|test_multiple_waiters|function|static int test_multiple_waiters(void)
DECL|test_timeout|function|static int test_timeout(void)
DECL|timeout_order_data_mult_lifo|variable|timeout_order_data_mult_lifo
DECL|timeout_order_data|struct|struct timeout_order_data {
DECL|timeout_order_data|variable|timeout_order_data
DECL|timeout_order_fifo|variable|timeout_order_fifo
DECL|timeout_order|member|int timeout_order;
DECL|timeout_stacks|variable|timeout_stacks
DECL|timeout|member|int32_t timeout;
DECL|timerData|variable|timerData
DECL|timer|variable|timer
