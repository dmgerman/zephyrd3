DECL|K_NUM_PRIORITIES|macro|K_NUM_PRIORITIES
DECL|K_NUM_PRIO_BITMAPS|macro|K_NUM_PRIO_BITMAPS
DECL|STACK_SENTINEL|macro|STACK_SENTINEL
DECL|_NON_PREEMPT_THRESHOLD|macro|_NON_PREEMPT_THRESHOLD
DECL|_PREEMPT_THRESHOLD|macro|_PREEMPT_THRESHOLD
DECL|_THREAD_DEAD|macro|_THREAD_DEAD
DECL|_THREAD_DUMMY|macro|_THREAD_DUMMY
DECL|_THREAD_PENDING|macro|_THREAD_PENDING
DECL|_THREAD_POLLING|macro|_THREAD_POLLING
DECL|_THREAD_PRESTART|macro|_THREAD_PRESTART
DECL|_THREAD_SUSPENDED|macro|_THREAD_SUSPENDED
DECL|_cpu_t|typedef|typedef struct _cpu _cpu_t;
DECL|_cpu|struct|struct _cpu {
DECL|_current|macro|_current
DECL|_current|macro|_current
DECL|_kernel_structs__h_|macro|_kernel_structs__h_
DECL|_kernel_t|typedef|typedef struct _kernel _kernel_t;
DECL|_kernel|struct|struct _kernel {
DECL|_new_thread_init|function|static ALWAYS_INLINE void _new_thread_init(struct k_thread *thread, char *pStack, size_t stackSize, int prio, unsigned int options)
DECL|_ready_q_t|typedef|typedef struct _ready_q _ready_q_t;
DECL|_ready_q|macro|_ready_q
DECL|_ready_q|struct|struct _ready_q {
DECL|_set_thread_return_value_with_data|function|_set_thread_return_value_with_data(struct k_thread *thread, unsigned int value, void *data)
DECL|_set_thread_return_value|function|_set_thread_return_value(struct k_thread *thread, unsigned int value)
DECL|_threads|macro|_threads
DECL|_timeout_q|macro|_timeout_q
DECL|arch|member|struct _kernel_arch arch;
DECL|cache|member|struct k_thread *cache;
DECL|cpus|member|struct _cpu cpus[CONFIG_MP_NUM_CPUS];
DECL|current_fp|member|struct k_thread *current_fp;
DECL|current|member|struct k_thread *current;
DECL|current|member|struct k_thread *current;
DECL|idle|member|s32_t idle; /* Number of ticks for kernel idling */
DECL|irq_stack|member|char *irq_stack;
DECL|irq_stack|member|char *irq_stack;
DECL|nested|member|u32_t nested;
DECL|nested|member|u32_t nested;
DECL|prio_bmap|member|u32_t prio_bmap[K_NUM_PRIO_BITMAPS];
DECL|q|member|sys_dlist_t q[K_NUM_PRIORITIES];
DECL|ready_q|member|struct _ready_q ready_q;
DECL|thread_monitor_init|function|static ALWAYS_INLINE void thread_monitor_init(struct k_thread *thread)
DECL|thread_monitor_init|macro|thread_monitor_init
DECL|threads|member|struct k_thread *threads; /* singly linked list of ALL threads */
DECL|timeout_q|member|sys_dlist_t timeout_q;
