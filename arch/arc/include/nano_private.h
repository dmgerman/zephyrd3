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
DECL|STACK_ALIGN_SIZE|macro|STACK_ALIGN_SIZE
DECL|STACK_ROUND_DOWN|macro|STACK_ROUND_DOWN
DECL|STACK_ROUND_UP|macro|STACK_ROUND_UP
DECL|USE_FP|macro|USE_FP
DECL|_CAUSE_COOP|macro|_CAUSE_COOP
DECL|_CAUSE_FIRQ|macro|_CAUSE_FIRQ
DECL|_CAUSE_NONE|macro|_CAUSE_NONE
DECL|_CAUSE_RIRQ|macro|_CAUSE_RIRQ
DECL|_IDLE_THREAD_PRIO|macro|_IDLE_THREAD_PRIO
DECL|_INTERRUPT_CAUSE|function|static ALWAYS_INLINE int _INTERRUPT_CAUSE(void)
DECL|_IntLibInit|function|static inline void _IntLibInit(void)
DECL|_NANO_PRIVATE_H|macro|_NANO_PRIVATE_H
DECL|__thread_entry|struct|struct __thread_entry {
DECL|_current|macro|_current
DECL|_is_in_isr|function|static ALWAYS_INLINE int _is_in_isr(void)
DECL|_ready_q|macro|_ready_q
DECL|_set_thread_return_value_with_data|function|_set_thread_return_value_with_data(struct k_thread *thread, unsigned int value, void *data)
DECL|_set_thread_return_value|macro|_set_thread_return_value
DECL|_timeout_q|macro|_timeout_q
DECL|blink|member|uint32_t blink;
DECL|cache|member|struct k_thread *cache;
DECL|callee_saved|struct|struct callee_saved {
DECL|coopReg|member|struct coop coopReg;
DECL|coop|struct|struct coop {
DECL|current_fp|member|struct tcs *current_fp; /* thread (fiber or task) that owns the FP regs */
DECL|current|member|struct tcs *current; /* currently scheduled thread (fiber or task) */
DECL|custom_data|member|void *custom_data; /* available for custom use */
DECL|ei_base|member|uint32_t ei_base;
DECL|entry|member|struct __thread_entry *entry; /* thread entry and parameters description */
DECL|errno_var|member|int errno_var;
DECL|fiberRtnValueSet|function|static ALWAYS_INLINE void fiberRtnValueSet(struct tcs *fiber, unsigned int value)
DECL|flags|member|uint32_t flags;
DECL|flags|member|uint32_t flags;
DECL|fn_abort|member|void (*fn_abort)(void);
DECL|fp|member|uint32_t fp; /* r27 */
DECL|idle|member|int32_t idle; /* Number of ticks for kernel idling */
DECL|init_data|member|void *init_data;
DECL|intlock_key|member|uint32_t intlock_key; /* interrupt key when relinquishing control */
DECL|irq_stack_frame|struct|struct irq_stack_frame {
DECL|jli_base|member|uint32_t jli_base;
DECL|k_q_node|member|sys_dnode_t k_q_node;
DECL|k_q_node|member|sys_dnode_t k_q_node; /* node object in any kernel queue */
DECL|ldi_base|member|uint32_t ldi_base;
DECL|lp_count|member|uint32_t lp_count;
DECL|lp_end|member|uint32_t lp_end;
DECL|lp_start|member|uint32_t lp_start;
DECL|nanoArchInit|function|static ALWAYS_INLINE void nanoArchInit(void)
DECL|next_thread|member|struct tcs *next_thread; /* next item in list of ALL fiber+tasks */
DECL|pEntry|member|_thread_entry_t pEntry;
DECL|parameter1|member|void *parameter1;
DECL|parameter2|member|void *parameter2;
DECL|parameter3|member|void *parameter3;
DECL|pc|member|uint32_t pc;
DECL|preempReg|member|struct preempt preempReg;
DECL|preempt|struct|struct preempt {
DECL|prio_bmap|member|uint32_t prio_bmap[1];
DECL|prio|member|int prio;
DECL|prio|member|int prio;
DECL|q|member|sys_dlist_t q[K_NUM_PRIORITIES];
DECL|r0|member|uint32_t r0;
DECL|r10|member|uint32_t r10;
DECL|r11|member|uint32_t r11;
DECL|r12|member|uint32_t r12;
DECL|r13|member|uint32_t r13;
DECL|r13|member|uint32_t r13;
DECL|r14|member|uint32_t r14;
DECL|r15|member|uint32_t r15;
DECL|r16|member|uint32_t r16;
DECL|r17|member|uint32_t r17;
DECL|r18|member|uint32_t r18;
DECL|r19|member|uint32_t r19;
DECL|r1|member|uint32_t r1;
DECL|r20|member|uint32_t r20;
DECL|r21|member|uint32_t r21;
DECL|r22|member|uint32_t r22;
DECL|r23|member|uint32_t r23;
DECL|r24|member|uint32_t r24;
DECL|r25|member|uint32_t r25;
DECL|r26|member|uint32_t r26;
DECL|r2|member|uint32_t r2;
DECL|r30|member|uint32_t r30;
DECL|r3|member|uint32_t r3;
DECL|r4|member|uint32_t r4;
DECL|r5|member|uint32_t r5;
DECL|r6|member|uint32_t r6;
DECL|r7|member|uint32_t r7;
DECL|r8|member|uint32_t r8;
DECL|r9|member|uint32_t r9;
DECL|ready_q|member|struct ready_q ready_q;
DECL|ready_q|struct|struct ready_q {
DECL|relinquish_cause|member|int relinquish_cause; /* one of the _CAUSE_xxxx definitions above */
DECL|return_value|member|unsigned int return_value;/* return value from _Swap */
DECL|rirq_sp|member|char *rirq_sp; /* regular IRQ stack pointer base */
DECL|s_NANO|struct|struct s_NANO {
DECL|sched_locked|member|atomic_t sched_locked;
DECL|sp|member|uint32_t sp; /* r28 */
DECL|stack_top|member|uint32_t stack_top;
DECL|status32|member|uint32_t status32;
DECL|swap_data|member|void *swap_data;
DECL|swap_data|member|void *swap_data;
DECL|tCalleeSaved|typedef|typedef struct callee_saved tCalleeSaved;
DECL|tISF|typedef|typedef struct irq_stack_frame tISF;
DECL|tNANO|typedef|typedef struct s_NANO tNANO;
DECL|tPreempt|typedef|typedef struct preempt tPreempt;
DECL|tcs_base|struct|struct tcs_base {
DECL|tcs|struct|struct tcs {
DECL|threads|member|struct tcs *threads; /* singly linked list of ALL fiber+tasks */
DECL|timeout_q|member|sys_dlist_t timeout_q;
DECL|timeout|member|struct _timeout timeout;
DECL|timeout|member|struct _timeout timeout;
