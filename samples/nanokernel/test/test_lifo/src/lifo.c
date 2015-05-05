DECL|FIBER_PRIORITY|macro|FIBER_PRIORITY
DECL|FIBER_STACKSIZE|macro|FIBER_STACKSIZE
DECL|ISR_LIFO_INFO|typedef|} ISR_LIFO_INFO;
DECL|LIFO_ITEM|typedef|} LIFO_ITEM;
DECL|NUM_SW_IRQS|macro|NUM_SW_IRQS
DECL|NUM_WAITERS|macro|NUM_WAITERS
DECL|_trigger_nano_isr_lifo_get|variable|_trigger_nano_isr_lifo_get
DECL|_trigger_nano_isr_lifo_put|variable|_trigger_nano_isr_lifo_put
DECL|channel|member|struct nano_lifo *channel; /* LIFO channel */
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
DECL|initNanoObjects|function|void initNanoObjects(void)
DECL|isrLifoInfo|variable|isrLifoInfo
DECL|isr_lifo_get|function|void isr_lifo_get(void *data)
DECL|isr_lifo_put|function|void isr_lifo_put(void *data)
DECL|lifoChannel|variable|lifoChannel
DECL|lifoItem|variable|lifoItem
DECL|link|member|uint32_t link; /* 32-bit word for LIFO to use as a link */
DECL|main|function|void main(void)
DECL|multi_waiters_items|variable|multi_waiters_items
DECL|multi_waiters|variable|multi_waiters
DECL|reply_multi_waiters|variable|reply_multi_waiters
DECL|taskLifoNonWaitTest|function|int taskLifoNonWaitTest(void)
DECL|taskLifoWaitTest|function|int taskLifoWaitTest(void)
DECL|taskWaitSem|variable|taskWaitSem
DECL|test_multiple_waiters|function|static int test_multiple_waiters(void)
DECL|timerData|variable|timerData
DECL|timer|variable|timer
