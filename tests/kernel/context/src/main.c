DECL|EXEC_CTX_TYPE_CMD|macro|EXEC_CTX_TYPE_CMD
DECL|HAS_POWERSAVE_INSTRUCTION|macro|HAS_POWERSAVE_INSTRUCTION
DECL|ISR_INFO|typedef|} ISR_INFO;
DECL|NUM_TIMEOUT_THREADS|macro|NUM_TIMEOUT_THREADS
DECL|THREAD_PRIORITY|macro|THREAD_PRIORITY
DECL|THREAD_SELF_CMD|macro|THREAD_SELF_CMD
DECL|THREAD_STACKSIZE2|macro|THREAD_STACKSIZE2
DECL|THREAD_STACKSIZE|macro|THREAD_STACKSIZE
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|UNKNOWN_COMMAND|macro|UNKNOWN_COMMAND
DECL|_test_kernel_cpu_idle|function|static void _test_kernel_cpu_idle(int atomic)
DECL|_test_kernel_interrupts|function|static void _test_kernel_interrupts(disable_int_func disable_int, enable_int_func enable_int, int irq)
DECL|_test_kernel_thread|function|static void _test_kernel_thread(k_tid_t _thread_id)
DECL|busy_wait_thread|function|static void busy_wait_thread(void *mseconds, void *arg2, void *arg3)
DECL|command|member|int command; /* command to process */
DECL|data|member|void *data; /* pointer to data to use or return */
DECL|delayed_thread|function|static void delayed_thread(void *num, void *arg2, void *arg3)
DECL|disable_int_func|typedef|typedef int (*disable_int_func) (int);
DECL|enable_int_func|typedef|typedef void (*enable_int_func) (int);
DECL|error|member|int error; /* error value (if any) */
DECL|irq_disable_wrapper|function|int irq_disable_wrapper(int irq)
DECL|irq_enable_wrapper|function|void irq_enable_wrapper(int irq)
DECL|irq_lock_wrapper|function|int irq_lock_wrapper(int unused)
DECL|irq_unlock_wrapper|function|void irq_unlock_wrapper(int imask)
DECL|isr_handler_trigger|function|static void isr_handler_trigger(void)
DECL|isr_handler|function|static void isr_handler(void *data)
DECL|isr_info|variable|isr_info
DECL|k_yield_entry|function|static void k_yield_entry(void *arg0, void *arg1, void *arg2)
DECL|kernel_init_objects|function|static void kernel_init_objects(void)
DECL|kernel_thread_entry|function|static void kernel_thread_entry(void *_thread_id, void *arg1, void *arg2)
DECL|link_in_fifo|member|void *link_in_fifo;
DECL|q_order|member|int q_order;
DECL|reply_timeout|variable|reply_timeout
DECL|sem_thread|variable|sem_thread
DECL|test_busy_wait|function|static void test_busy_wait(void)
DECL|test_k_sleep|function|static void test_k_sleep(void)
DECL|test_k_yield|function|void test_k_yield(void)
DECL|test_kernel_cpu_idle_atomic|function|static void test_kernel_cpu_idle_atomic(void)
DECL|test_kernel_cpu_idle_atomic|function|static void test_kernel_cpu_idle_atomic(void)
DECL|test_kernel_cpu_idle_atomic|function|static void test_kernel_cpu_idle_atomic(void)
DECL|test_kernel_cpu_idle|function|static void test_kernel_cpu_idle(void)
DECL|test_kernel_cpu_idle|function|static void test_kernel_cpu_idle(void)
DECL|test_kernel_ctx_thread|function|static void test_kernel_ctx_thread(void)
DECL|test_kernel_interrupts|function|static void test_kernel_interrupts(void)
DECL|test_kernel_thread|function|void test_kernel_thread(void)
DECL|test_kernel_timer_interrupts|function|static void test_kernel_timer_interrupts(void)
DECL|test_main|function|void test_main(void)
DECL|thread_data1|variable|thread_data1
DECL|thread_data2|variable|thread_data2
DECL|thread_data3|variable|thread_data3
DECL|thread_evidence|variable|thread_evidence
DECL|thread_helper|function|static void thread_helper(void *arg1, void *arg2, void *arg3)
DECL|thread_sleep|function|static void thread_sleep(void *delta, void *arg2, void *arg3)
DECL|timeout_order_fifo|variable|timeout_order_fifo
DECL|timeout_order|member|int timeout_order;
DECL|timeout_order|struct|struct timeout_order {
DECL|timeout_threads|variable|timeout_threads
DECL|timeouts|variable|timeouts
DECL|timeout|member|s32_t timeout;
DECL|timer|variable|timer
DECL|value|member|int value; /* value to be passed or returned */
