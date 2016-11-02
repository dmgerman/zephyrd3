DECL|EXC_ACTIVE|macro|EXC_ACTIVE
DECL|FIBER|macro|FIBER
DECL|INT_ACTIVE|macro|INT_ACTIVE
DECL|K_DEAD|macro|K_DEAD
DECL|K_DUMMY|macro|K_DUMMY
DECL|K_ESSENTIAL|macro|K_ESSENTIAL
DECL|K_EXECUTION_MASK|macro|K_EXECUTION_MASK
DECL|K_PENDING|macro|K_PENDING
DECL|K_PRESTART|macro|K_PRESTART
DECL|K_READY|macro|K_READY
DECL|K_STATIC|macro|K_STATIC
DECL|K_SUSPENDED|macro|K_SUSPENDED
DECL|K_TIMING|macro|K_TIMING
DECL|NO_METRICS|macro|NO_METRICS
DECL|PREEMPTIBLE|macro|PREEMPTIBLE
DECL|STACK_ALIGN_SIZE|macro|STACK_ALIGN_SIZE
DECL|STACK_ROUND_DOWN|macro|STACK_ROUND_DOWN
DECL|STACK_ROUND_UP|macro|STACK_ROUND_UP
DECL|TASK|macro|TASK
DECL|USE_FP|macro|USE_FP
DECL|_IDLE_THREAD_PRIO|macro|_IDLE_THREAD_PRIO
DECL|_IntLibInit|function|static inline void _IntLibInit(void)
DECL|_NANO_PRIVATE_H|macro|_NANO_PRIVATE_H
DECL|_current|macro|_current
DECL|_is_in_isr|macro|_is_in_isr
DECL|_nios2_dcache_flush_all|macro|_nios2_dcache_flush_all
DECL|_nios2_icache_flush_all|macro|_nios2_icache_flush_all
DECL|_ready_q|macro|_ready_q
DECL|_set_thread_return_value_with_data|function|_set_thread_return_value_with_data(struct k_thread *thread, unsigned int value, void *data)
DECL|_set_thread_return_value|macro|_set_thread_return_value
DECL|_timeout_q|macro|_timeout_q
DECL|cache|member|struct k_thread *cache;
DECL|coopReg|member|t_coop coopReg;
DECL|current|member|struct tcs *current; /* currently scheduled thread (fiber or task) */
DECL|custom_data|member|void *custom_data; /* available for custom use */
DECL|entry|member|struct __thread_entry *entry; /* thread entry and parameters description */
DECL|errno_var|member|int errno_var;
DECL|fiberRtnValueSet|function|static ALWAYS_INLINE void fiberRtnValueSet(struct tcs *fiber, unsigned int value)
DECL|fiber|member|struct tcs *fiber; /* singly linked list of runnable fibers */
DECL|flags|member|int flags;
DECL|flags|member|uint32_t flags;
DECL|fn_abort|member|void (*fn_abort)(void);
DECL|init_data|member|void *init_data;
DECL|irq_sp|member|char *irq_sp; /* Interrupt stack pointer */
DECL|k_q_node|member|sys_dnode_t k_q_node;
DECL|k_q_node|member|sys_dnode_t k_q_node; /* node object in any kernel queue */
DECL|key|member|uint32_t key; /* IRQ status before irq_lock() and call to _Swap() */
DECL|nanoArchInit|function|static ALWAYS_INLINE void nanoArchInit(void)
DECL|nano_timeout|member|struct _nano_timeout nano_timeout;
DECL|nested|member|uint32_t nested; /* IRQ/exception nest level */
DECL|next_thread|member|struct tcs *next_thread; /* next item in list of ALL fiber+tasks */
DECL|preempReg|member|struct preempt preempReg;
DECL|preempt|struct|struct preempt {
DECL|prio_bmap|member|uint32_t prio_bmap[1];
DECL|prio|member|int prio; /* thread priority used to sort linked list */
DECL|prio|member|int prio; /* thread priority used to sort linked list */
DECL|q|member|sys_dlist_t q[K_NUM_PRIORITIES];
DECL|r16|member|uint32_t r16;
DECL|r17|member|uint32_t r17;
DECL|r18|member|uint32_t r18;
DECL|r19|member|uint32_t r19;
DECL|r20|member|uint32_t r20;
DECL|r21|member|uint32_t r21;
DECL|r22|member|uint32_t r22;
DECL|r23|member|uint32_t r23;
DECL|r28|member|uint32_t r28;
DECL|ra|member|uint32_t ra; /* Return address */
DECL|ready_q|member|struct ready_q ready_q;
DECL|ready_q|struct|struct ready_q {
DECL|retval|member|uint32_t retval; /* Return value of _Swap() */
DECL|s_NANO|struct|struct s_NANO {
DECL|s_coop|struct|struct s_coop {
DECL|sched_locked|member|atomic_t sched_locked;
DECL|sp|member|uint32_t sp; /* Stack pointer */
DECL|swap_data|member|void *swap_data;
DECL|swap_data|member|void *swap_data;
DECL|tNANO|typedef|typedef struct s_NANO tNANO;
DECL|t_coop|typedef|typedef struct s_coop t_coop;
DECL|task_timeout|member|int32_t task_timeout;
DECL|task|member|struct tcs *task; /* current task the nanokernel knows about */
DECL|tcs_base|struct|struct tcs_base {
DECL|tcs|struct|struct tcs {
DECL|threads|member|struct tcs *threads; /* singly linked list of ALL fiber+tasks */
DECL|timeout_q|member|sys_dlist_t timeout_q;
DECL|timeout|member|struct _timeout timeout;
DECL|timeout|member|struct _timeout timeout;
DECL|uk_task_ptr|member|void *uk_task_ptr;
