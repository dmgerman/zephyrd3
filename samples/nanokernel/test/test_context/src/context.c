DECL|EXEC_CTX_TYPE_CMD|macro|EXEC_CTX_TYPE_CMD
DECL|FIBER_PRIORITY|macro|FIBER_PRIORITY
DECL|FIBER_STACKSIZE|macro|FIBER_STACKSIZE
DECL|ISR_INFO|typedef|} ISR_INFO;
DECL|NUM_SW_IRQS|macro|NUM_SW_IRQS
DECL|NUM_TIMEOUT_FIBERS|macro|NUM_TIMEOUT_FIBERS
DECL|THREAD_SELF_CMD|macro|THREAD_SELF_CMD
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|UNKNOWN_COMMAND|macro|UNKNOWN_COMMAND
DECL|_trigger_isrHandler|variable|_trigger_isrHandler
DECL|command|member|int command; /* command to process */
DECL|data|member|void *data; /* pointer to data to use or return */
DECL|delayed_fiber|function|void delayed_fiber(int num, int unused)
DECL|disable_interrupt_func|typedef|typedef int (* disable_interrupt_func)(int);
DECL|enable_interrupt_func|typedef|typedef void (* enable_interrupt_func)(int);
DECL|error|member|int error; /* error value (if any) */
DECL|excHandlerExecuted|variable|excHandlerExecuted
DECL|exc_divide_error_handler|function|void exc_divide_error_handler(NANO_ESF *pEsf)
DECL|fiberDetectedError|variable|fiberDetectedError
DECL|fiberEntry|function|static void fiberEntry(int task_thread_id, int arg1)
DECL|fiberEvidence|variable|fiberEvidence
DECL|fiberHelper|function|static void fiberHelper(int arg1, int arg2)
DECL|fiberStack1|variable|fiberStack1
DECL|fiberStack2|variable|fiberStack2
DECL|fiber_yieldTest|function|int fiber_yieldTest(void)
DECL|initNanoObjects|function|int initNanoObjects(void)
DECL|irq_disableWrapper|function|int irq_disableWrapper(int irq)
DECL|irq_enableWrapper|function|void irq_enableWrapper(int irq)
DECL|irq_lockWrapper|function|int irq_lockWrapper(int unused)
DECL|irq_unlockWrapper|function|void irq_unlockWrapper(int imask)
DECL|isrInfo|variable|isrInfo
DECL|isr_handler|function|void isr_handler(void *data)
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|main|function|void main(void)
DECL|nanoCpuDisableInterruptsTest|function|int nanoCpuDisableInterruptsTest(disable_interrupt_func disableRtn, enable_interrupt_func enableRtn, int irq)
DECL|nanoCtxFiberTest|function|int nanoCtxFiberTest(nano_thread_id_t task_thread_id)
DECL|nanoCtxTaskTest|function|int nanoCtxTaskTest(void)
DECL|nano_cpu_idleTest|function|int nano_cpu_idleTest(void)
DECL|q_order|member|int q_order;
DECL|reply_timeout|variable|reply_timeout
DECL|test_fiber_sleep|function|static void test_fiber_sleep(int timeout, int arg2)
DECL|test_timeout|function|static int test_timeout(void)
DECL|timeout_order_data|struct|struct timeout_order_data {
DECL|timeout_order_data|variable|timeout_order_data
DECL|timeout_order_fifo|variable|timeout_order_fifo
DECL|timeout_order|member|int timeout_order;
DECL|timeout_stacks|variable|timeout_stacks
DECL|timeout|member|int32_t timeout;
DECL|timerData|variable|timerData
DECL|timer|variable|timer
DECL|value|member|int value; /* value to be passed or returned */
DECL|wakeFiber|variable|wakeFiber
