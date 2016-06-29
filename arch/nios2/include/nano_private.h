DECL|ESSENTIAL|macro|ESSENTIAL
DECL|EXC_ACTIVE|macro|EXC_ACTIVE
DECL|FIBER|macro|FIBER
DECL|INT_ACTIVE|macro|INT_ACTIVE
DECL|NO_METRICS|macro|NO_METRICS
DECL|PREEMPTIBLE|macro|PREEMPTIBLE
DECL|STACK_ALIGN_SIZE|macro|STACK_ALIGN_SIZE
DECL|STACK_ROUND_DOWN|macro|STACK_ROUND_DOWN
DECL|STACK_ROUND_UP|macro|STACK_ROUND_UP
DECL|TASK|macro|TASK
DECL|USE_FP|macro|USE_FP
DECL|_IS_IN_ISR|function|static ALWAYS_INLINE int _IS_IN_ISR(void)
DECL|_IntLibInit|function|static inline void _IntLibInit(void)
DECL|_NANO_PRIVATE_H|macro|_NANO_PRIVATE_H
DECL|_nios2_dcache_flush_all|macro|_nios2_dcache_flush_all
DECL|_nios2_icache_flush_all|macro|_nios2_icache_flush_all
DECL|coopReg|member|t_coop coopReg;
DECL|current|member|struct tcs *current; /* currently scheduled thread (fiber or task) */
DECL|custom_data|member|void *custom_data; /* available for custom use */
DECL|entry|member|struct __thread_entry *entry; /* thread entry and parameters description */
DECL|errno_var|member|int errno_var;
DECL|fiberRtnValueSet|function|static ALWAYS_INLINE void fiberRtnValueSet(struct tcs *fiber, unsigned int value)
DECL|fiber|member|struct tcs *fiber; /* singly linked list of runnable fibers */
DECL|flags|member|uint32_t flags; /* bitmask of flags above */
DECL|irq_sp|member|char *irq_sp; /* Interrupt stack pointer */
DECL|key|member|uint32_t key; /* IRQ status before irq_lock() and call to _Swap() */
DECL|link|member|struct tcs *link; /* node in singly-linked list
DECL|nanoArchInit|function|static ALWAYS_INLINE void nanoArchInit(void)
DECL|nano_timeout|member|struct _nano_timeout nano_timeout;
DECL|nested|member|uint32_t nested; /* IRQ/exception nest level */
DECL|next_thread|member|struct tcs *next_thread; /* next item in list of ALL fiber+tasks */
DECL|preempReg|member|struct preempt preempReg;
DECL|preempt|struct|struct preempt {
DECL|prio|member|int prio; /* fiber priority, -1 for a task */
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
DECL|retval|member|uint32_t retval; /* Return value of _Swap() */
DECL|s_NANO|struct|struct s_NANO {
DECL|s_coop|struct|struct s_coop {
DECL|sp|member|uint32_t sp; /* Stack pointer */
DECL|tNANO|typedef|typedef struct s_NANO tNANO;
DECL|t_coop|typedef|typedef struct s_coop t_coop;
DECL|task_timeout|member|int32_t task_timeout;
DECL|task|member|struct tcs *task; /* current task the nanokernel knows about */
DECL|tcs|struct|struct tcs {
DECL|threads|member|struct tcs *threads; /* singly linked list of ALL fiber+tasks */
DECL|timeout_q|member|sys_dlist_t timeout_q;
DECL|uk_task_ptr|member|void *uk_task_ptr;
