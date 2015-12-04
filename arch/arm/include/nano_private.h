DECL|ESSENTIAL|macro|ESSENTIAL
DECL|EXC_ACTIVE|macro|EXC_ACTIVE
DECL|FIBER|macro|FIBER
DECL|INT_ACTIVE|macro|INT_ACTIVE
DECL|NO_METRICS|macro|NO_METRICS
DECL|PREEMPTIBLE|macro|PREEMPTIBLE
DECL|STACK_ROUND_DOWN|macro|STACK_ROUND_DOWN
DECL|STACK_ROUND_UP|macro|STACK_ROUND_UP
DECL|TASK|macro|TASK
DECL|USE_FP|macro|USE_FP
DECL|_IS_IN_ISR|macro|_IS_IN_ISR
DECL|_NANO_PRIVATE_H|macro|_NANO_PRIVATE_H
DECL|basepri|member|uint32_t basepri;
DECL|coopReg|member|struct coop coopReg;
DECL|coop|struct|struct coop {
DECL|current_fp|member|struct tcs *current_fp; /* thread (fiber or task) that owns the FP regs */
DECL|current|member|struct tcs *current; /* currently scheduled thread (fiber or task) */
DECL|custom_data|member|void *custom_data; /* available for custom use */
DECL|errno_var|member|int errno_var;
DECL|fiberRtnValueSet|function|static ALWAYS_INLINE void fiberRtnValueSet(struct tcs *fiber, unsigned int value)
DECL|fiber|member|struct tcs *fiber; /* singly linked list of runnable fiber */
DECL|flags|member|int flags; /* struct tcs->flags of 'current' thread */
DECL|flags|member|uint32_t flags;
DECL|idle|member|int32_t idle; /* Number of ticks for kernel idling */
DECL|link|member|struct tcs *link; /* singly-linked list in _nanokernel.fibers */
DECL|nanoArchInit|function|static ALWAYS_INLINE void nanoArchInit(void)
DECL|nano_timeout|member|struct _nano_timeout nano_timeout;
DECL|next_thread|member|struct tcs *next_thread; /* next item in list of ALL fiber+tasks */
DECL|preempReg|member|struct preempt preempReg;
DECL|preempt|struct|struct preempt {
DECL|prio|member|int prio;
DECL|psp|member|uint32_t psp; /* r13 */
DECL|s_NANO|struct|struct s_NANO {
DECL|tESF|typedef|typedef struct __esf tESF;
DECL|tNANO|typedef|typedef struct s_NANO tNANO;
DECL|tPreempt|typedef|typedef struct preempt tPreempt;
DECL|task|member|struct tcs *task; /* pointer to runnable task */
DECL|tcs|struct|struct tcs {
DECL|threads|member|struct tcs *threads; /* singly linked list of ALL fiber+tasks */
DECL|timeout_q|member|sys_dlist_t timeout_q;
DECL|v1|member|uint32_t v1; /* r4 */
DECL|v2|member|uint32_t v2; /* r5 */
DECL|v3|member|uint32_t v3; /* r6 */
DECL|v4|member|uint32_t v4; /* r7 */
DECL|v5|member|uint32_t v5; /* r8 */
DECL|v6|member|uint32_t v6; /* r9 */
DECL|v7|member|uint32_t v7; /* r10 */
DECL|v8|member|uint32_t v8; /* r11 */
