DECL|EXEC_CTX_TYPE_CMD|macro|EXEC_CTX_TYPE_CMD
DECL|FIBER_PRIORITY|macro|FIBER_PRIORITY
DECL|FIBER_STACKSIZE|macro|FIBER_STACKSIZE
DECL|HAS_POWERSAVE_INSTRUCTION|macro|HAS_POWERSAVE_INSTRUCTION
DECL|ISR_INFO|typedef|} ISR_INFO;
DECL|NUM_TIMEOUT_FIBERS|macro|NUM_TIMEOUT_FIBERS
DECL|THREAD_SELF_CMD|macro|THREAD_SELF_CMD
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|UNKNOWN_COMMAND|macro|UNKNOWN_COMMAND
DECL|command|member|int command; /* command to process */
DECL|data|member|void *data; /* pointer to data to use or return */
DECL|delayed_fiber|function|static void delayed_fiber(int num, int unused)
DECL|disable_int_func|typedef|typedef int (*disable_int_func)(int);
DECL|enable_int_func|typedef|typedef void (*enable_int_func)(int);
DECL|error|member|int error; /* error value (if any) */
DECL|fiber_detected_error|variable|fiber_detected_error
DECL|fiber_entry|function|static void fiber_entry(int task_thread_id, int arg1)
DECL|fiber_evidence|variable|fiber_evidence
DECL|fiber_helper|function|static void fiber_helper(int arg1, int arg2)
DECL|fiber_priority_set|macro|fiber_priority_set
DECL|fiber_stack1|variable|fiber_stack1
DECL|fiber_stack2|variable|fiber_stack2
DECL|irq_disable_wrapper|function|int irq_disable_wrapper(int irq)
DECL|irq_enable_wrapper|function|void irq_enable_wrapper(int irq)
DECL|irq_lock_wrapper|function|int irq_lock_wrapper(int unused)
DECL|irq_unlock_wrapper|function|void irq_unlock_wrapper(int imask)
DECL|isr_handler_trigger|function|static void isr_handler_trigger(void)
DECL|isr_handler|function|static void isr_handler(void *data)
DECL|isr_info|variable|isr_info
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|main|function|void main(void)
DECL|nano_init_objects|function|static int nano_init_objects(void)
DECL|q_order|member|int q_order;
DECL|reply_timeout|variable|reply_timeout
DECL|sem_fiber|variable|sem_fiber
DECL|test_busy_wait|function|static void test_busy_wait(int ticks, int unused)
DECL|test_fiber_sleep|function|static void test_fiber_sleep(int timeout, int unused)
DECL|test_fiber_yield|function|static int test_fiber_yield(void)
DECL|test_nano_cpu_idle|function|static int test_nano_cpu_idle(void)
DECL|test_nano_ctx_task|function|static int test_nano_ctx_task(void)
DECL|test_nano_fiber|function|static int test_nano_fiber(nano_thread_id_t task_thread_id)
DECL|test_nano_interrupts|function|static int test_nano_interrupts(disable_int_func disable_int,enable_int_func enable_int, int irq)
DECL|test_timeout|function|static int test_timeout(void)
DECL|timeout_order_fifo|variable|timeout_order_fifo
DECL|timeout_order|member|int timeout_order;
DECL|timeout_order|struct|struct timeout_order {
DECL|timeout_stacks|variable|timeout_stacks
DECL|timeouts|variable|timeouts
DECL|timeout|member|int32_t timeout;
DECL|timer|variable|timer
DECL|value|member|int value; /* value to be passed or returned */
