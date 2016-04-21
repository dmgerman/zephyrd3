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
DECL|callee_saved|struct|struct callee_saved {
DECL|coopReg|member|struct coop coopReg;
DECL|coop|struct|struct coop {
DECL|current|member|struct tcs *current; /* currently scheduled thread (fiber or task) */
DECL|entry|member|struct __thread_entry *entry; /* thread entry and parameters description */
DECL|errno_var|member|int errno_var;
DECL|fiberRtnValueSet|function|static ALWAYS_INLINE void fiberRtnValueSet(struct tcs *fiber, unsigned int value)
DECL|fiber|member|struct tcs *fiber; /* singly linked list of runnable fibers */
DECL|flags|member|uint32_t flags; /* bitmask of flags above */
DECL|irq_stack_frame|struct|struct irq_stack_frame {
DECL|link|member|struct tcs *link; /* node in singly-linked list
DECL|nanoArchInit|function|static ALWAYS_INLINE void nanoArchInit(void)
DECL|nano_timeout|member|struct _nano_timeout nano_timeout;
DECL|next_thread|member|struct tcs *next_thread; /* next item in list of ALL fiber+tasks */
DECL|preempReg|member|struct preempt preempReg;
DECL|preempt|struct|struct preempt {
DECL|prio|member|int prio; /* fiber priority, -1 for a task */
DECL|s_NANO|struct|struct s_NANO {
DECL|stub|member|int stub;
DECL|stub|member|int stub;
DECL|stub|member|int stub;
DECL|stub|member|int stub;
DECL|tCalleeSaved|typedef|typedef struct callee_saved tCalleeSaved;
DECL|tISF|typedef|typedef struct irq_stack_frame tISF;
DECL|tNANO|typedef|typedef struct s_NANO tNANO;
DECL|task_timeout|member|int32_t task_timeout;
DECL|task|member|struct tcs *task; /* current task the nanokernel knows about */
DECL|tcs|struct|struct tcs {
DECL|threads|member|struct tcs *threads; /* singly linked list of ALL fiber+tasks */
DECL|timeout_q|member|sys_dlist_t timeout_q;
