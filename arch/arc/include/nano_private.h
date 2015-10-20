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
DECL|_CAUSE_COOP|macro|_CAUSE_COOP
DECL|_CAUSE_FIRQ|macro|_CAUSE_FIRQ
DECL|_CAUSE_NONE|macro|_CAUSE_NONE
DECL|_CAUSE_RIRQ|macro|_CAUSE_RIRQ
DECL|_IS_IN_ISR|function|static ALWAYS_INLINE int _IS_IN_ISR(void)
DECL|_IntLibInit|function|static inline void _IntLibInit(void)
DECL|_NANO_PRIVATE_H|macro|_NANO_PRIVATE_H
DECL|blink|member|uint32_t blink;
DECL|callee_saved|struct|struct callee_saved {
DECL|coopReg|member|struct coop coopReg;
DECL|coop|struct|struct coop {
DECL|current_fp|member|struct tcs *current_fp; /* thread (fiber or task) that owns the FP regs */
DECL|current|member|struct tcs *current; /* currently scheduled thread (fiber or task) */
DECL|custom_data|member|void *custom_data; /* available for custom use */
DECL|ei_base|member|uint32_t ei_base;
DECL|fiberRtnValueSet|function|static ALWAYS_INLINE void fiberRtnValueSet(struct tcs *fiber, unsigned int value)
DECL|fiber|member|struct tcs *fiber; /* singly linked list of runnable fibers */
DECL|firq_regs|member|struct firq_regs firq_regs;
DECL|firq_regs|struct|struct firq_regs {
DECL|flags|member|uint32_t flags; /* bitmask of flags above */
DECL|fp|member|uint32_t fp; /* r27 */
DECL|idle|member|int32_t idle; /* Number of ticks for kernel idling */
DECL|intlock_key|member|uint32_t intlock_key; /* interrupt key when relinquishing control */
DECL|irq_stack_frame|struct|struct irq_stack_frame {
DECL|jli_base|member|uint32_t jli_base;
DECL|ldi_base|member|uint32_t ldi_base;
DECL|link|member|struct tcs *link; /* node in singly-linked list
DECL|lp_count|member|uint32_t lp_count;
DECL|lp_count|member|uint32_t lp_count;
DECL|lp_end|member|uint32_t lp_end;
DECL|lp_end|member|uint32_t lp_end;
DECL|lp_start|member|uint32_t lp_start;
DECL|lp_start|member|uint32_t lp_start;
DECL|nanoArchInit|function|static ALWAYS_INLINE void nanoArchInit(void)
DECL|nano_timeout|member|struct _nano_timeout nano_timeout;
DECL|next_thread|member|struct tcs *next_thread; /* next item in list of ALL fiber+tasks */
DECL|pc|member|uint32_t pc;
DECL|preempReg|member|struct preempt preempReg;
DECL|preempt|struct|struct preempt {
DECL|prio|member|int prio; /* fiber priority, -1 for a task */
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
DECL|relinquish_cause|member|int relinquish_cause; /* one of the _CAUSE_xxxx definitions above */
DECL|return_value|member|unsigned int return_value;/* return value from _Swap */
DECL|rirq_sp|member|char *rirq_sp; /* regular IRQ stack pointer base */
DECL|s_NANO|struct|struct s_NANO {
DECL|sp|member|uint32_t sp; /* r28 */
DECL|status32|member|uint32_t status32;
DECL|tCalleeSaved|typedef|typedef struct callee_saved tCalleeSaved;
DECL|tFirqRegs|typedef|typedef struct firq_regs tFirqRegs;
DECL|tISF|typedef|typedef struct irq_stack_frame tISF;
DECL|tNANO|typedef|typedef struct s_NANO tNANO;
DECL|tPreempt|typedef|typedef struct preempt tPreempt;
DECL|task|member|struct tcs *task; /* current task the nanokernel knows about */
DECL|tcs|struct|struct tcs {
DECL|threads|member|struct tcs *threads; /* singly linked list of ALL fiber+tasks */
DECL|timeout_q|member|sys_dlist_t timeout_q;
