DECL|FIBER_PRIORITY|macro|FIBER_PRIORITY
DECL|FIBER_STACKSIZE|macro|FIBER_STACKSIZE
DECL|ISR_LIFO_INFO|typedef|} ISR_LIFO_INFO;
DECL|LIFO_ITEM|typedef|} LIFO_ITEM;
DECL|NUM_SW_IRQS|macro|NUM_SW_IRQS
DECL|_trigger_nano_isr_lifo_get|variable|_trigger_nano_isr_lifo_get
DECL|_trigger_nano_isr_lifo_put|variable|_trigger_nano_isr_lifo_put
DECL|channel|member|struct nano_lifo *channel; /* LIFO channel */
DECL|data|member|uint32_t data; /* miscellaneous data put on LIFO (not important) */
DECL|data|member|void *data; /* pointer to data to add */
DECL|fiberDetectedFailure|variable|fiberDetectedFailure
DECL|fiberEntry|function|static void fiberEntry(int arg1, int arg2)
DECL|fiberLifoNonWaitTest|function|int fiberLifoNonWaitTest(void)
DECL|fiberLifoWaitTest|function|int fiberLifoWaitTest(void)
DECL|fiberStack|variable|fiberStack
DECL|fiberWaitSem|variable|fiberWaitSem
DECL|initNanoObjects|function|void initNanoObjects(void)
DECL|isrLifoInfo|variable|isrLifoInfo
DECL|isr_lifo_get|function|void isr_lifo_get(void *data)
DECL|isr_lifo_put|function|void isr_lifo_put(void *data)
DECL|lifoChannel|variable|lifoChannel
DECL|lifoItem|variable|lifoItem
DECL|link|member|uint32_t link; /* 32-bit word for LIFO to use as a link */
DECL|main|function|void main(void)
DECL|taskLifoNonWaitTest|function|int taskLifoNonWaitTest(void)
DECL|taskLifoWaitTest|function|int taskLifoWaitTest(void)
DECL|taskWaitSem|variable|taskWaitSem
DECL|timerData|variable|timerData
DECL|timer|variable|timer
