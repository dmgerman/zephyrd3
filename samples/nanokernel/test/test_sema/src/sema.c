DECL|FIBER_PRIORITY|macro|FIBER_PRIORITY
DECL|FIBER_STACKSIZE|macro|FIBER_STACKSIZE
DECL|ISR_SEM_INFO|typedef|} ISR_SEM_INFO;
DECL|NUM_SW_IRQS|macro|NUM_SW_IRQS
DECL|NUM_WAITERS|macro|NUM_WAITERS
DECL|SEM_TEST_STATE|typedef|} SEM_TEST_STATE;
DECL|STS_FIBER_WOKE_TASK|enumerator|STS_FIBER_WOKE_TASK,
DECL|STS_INIT|enumerator|STS_INIT = -1,
DECL|STS_ISR_WOKE_TASK|enumerator|STS_ISR_WOKE_TASK
DECL|STS_TASK_WOKE_FIBER|enumerator|STS_TASK_WOKE_FIBER,
DECL|TIMEOUT_ORDER_NUM_FIBERS|macro|TIMEOUT_ORDER_NUM_FIBERS
DECL|_trigger_nano_isr_sem_give|variable|_trigger_nano_isr_sem_give
DECL|_trigger_nano_isr_sem_take|variable|_trigger_nano_isr_sem_take
DECL|data|member|int data; /* data */
DECL|do_test_multiple_waiters|function|static int do_test_multiple_waiters(void)
DECL|fiberDetectedFailure|variable|fiberDetectedFailure
DECL|fiberEntry|function|static void fiberEntry(int arg1, int arg2)
DECL|fiberStack|variable|fiberStack
DECL|fiber_multi_waiters_stacks|variable|fiber_multi_waiters_stacks
DECL|fiber_multi_waiters|function|static void fiber_multi_waiters(int arg1, int arg2)
DECL|initNanoObjects|function|void initNanoObjects(void)
DECL|isrSemInfo|variable|isrSemInfo
DECL|isr_sem_give|function|void isr_sem_give(void *data)
DECL|isr_sem_take|function|void isr_sem_take(void *data)
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|main|function|void main(void)
DECL|multi_waiters|variable|multi_waiters
DECL|q_order|member|int q_order;
DECL|reply_multi_waiters|variable|reply_multi_waiters
DECL|reply_packet|struct|struct reply_packet {
DECL|reply|member|int reply;
DECL|semTestState|variable|semTestState
DECL|sem_timeout|variable|sem_timeout
DECL|sem|member|struct nano_sem *sem;
DECL|sem|member|struct nano_sem *sem; /* ptr to semaphore */
DECL|testSemFiberNoWait|function|int testSemFiberNoWait(void)
DECL|testSemIsrNoWait|function|int testSemIsrNoWait(void)
DECL|testSemTaskNoWait|function|int testSemTaskNoWait(void)
DECL|testSemWait|function|int testSemWait(void)
DECL|testSem|variable|testSem
DECL|test_fiber_give_timeout|function|static void test_fiber_give_timeout(int sem, int timeout)
DECL|test_fiber_pend_and_get_sem|function|static void test_fiber_pend_and_get_sem(int data, int unused)
DECL|test_fiber_pend_and_timeout|function|static void test_fiber_pend_and_timeout(int data, int unused)
DECL|test_fiber_ticks_special_values|function|static void test_fiber_ticks_special_values(int packet, int special_value)
DECL|test_multiple_fibers_get_sem|function|static int test_multiple_fibers_get_sem(struct timeout_order_data *test_data,int test_data_size)
DECL|test_multiple_fibers_pending|function|static int test_multiple_fibers_pending(struct timeout_order_data *test_data,int test_data_size)
DECL|test_multiple_waiters|function|static int test_multiple_waiters(void)
DECL|test_timeout|function|static int test_timeout(void)
DECL|timeout_order_data_mult_sem|variable|timeout_order_data_mult_sem
DECL|timeout_order_data|struct|struct timeout_order_data {
DECL|timeout_order_data|variable|timeout_order_data
DECL|timeout_order_fifo|variable|timeout_order_fifo
DECL|timeout_order|member|int timeout_order;
DECL|timeout_stacks|variable|timeout_stacks
DECL|timeout|member|int32_t timeout;
DECL|timerData|variable|timerData
DECL|timer|variable|timer
