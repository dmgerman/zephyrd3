DECL|K_DEAD|macro|K_DEAD
DECL|K_DUMMY|macro|K_DUMMY
DECL|K_ESSENTIAL|macro|K_ESSENTIAL
DECL|K_EXECUTION_MASK|macro|K_EXECUTION_MASK
DECL|K_FP_REGS|macro|K_FP_REGS
DECL|K_PENDING|macro|K_PENDING
DECL|K_PRESTART|macro|K_PRESTART
DECL|K_READY|macro|K_READY
DECL|K_STATIC|macro|K_STATIC
DECL|K_SUSPENDED|macro|K_SUSPENDED
DECL|K_TIMING|macro|K_TIMING
DECL|NO_METRICS|macro|NO_METRICS
DECL|STACK_ROUND_DOWN|macro|STACK_ROUND_DOWN
DECL|STACK_ROUND_UP|macro|STACK_ROUND_UP
DECL|_IDLE_THREAD_PRIO|macro|_IDLE_THREAD_PRIO
DECL|_NANO_PRIVATE_H|macro|_NANO_PRIVATE_H
DECL|__thread_entry|struct|struct __thread_entry {
DECL|_current|macro|_current
DECL|_is_in_isr|macro|_is_in_isr
DECL|_ready_q|macro|_ready_q
DECL|_set_thread_return_value_with_data|function|_set_thread_return_value_with_data(struct k_thread *thread, unsigned int value, void *data)
DECL|_set_thread_return_value|macro|_set_thread_return_value
DECL|_timeout_q|macro|_timeout_q
DECL|basepri|member|uint32_t basepri;
DECL|cache|member|struct k_thread *cache;
DECL|coopReg|member|struct coop coopReg;
DECL|coop|struct|struct coop {
DECL|current_fp|member|struct tcs *current_fp; /* thread (fiber or task) that owns the FP regs */
DECL|current|member|struct tcs *current; /* currently scheduled thread (fiber or task) */
DECL|custom_data|member|void *custom_data; /* available for custom use */
DECL|entry|member|struct __thread_entry *entry; /* thread entry and parameters description */
DECL|errno_var|member|int errno_var;
DECL|fiberRtnValueSet|function|static ALWAYS_INLINE void fiberRtnValueSet(struct tcs *fiber, unsigned int value)
DECL|flags|member|uint32_t flags;
DECL|flags|member|uint32_t flags;
DECL|fn_abort|member|void (*fn_abort)(void);
DECL|idle|member|int32_t idle; /* Number of ticks for kernel idling */
DECL|init_data|member|void *init_data;
DECL|k_q_node|member|sys_dnode_t k_q_node;
DECL|k_q_node|member|sys_dnode_t k_q_node; /* node object in any kernel queue */
DECL|nanoArchInit|function|static ALWAYS_INLINE void nanoArchInit(void)
DECL|next_thread|member|struct tcs *next_thread; /* next item in list of ALL fiber+tasks */
DECL|pEntry|member|_thread_entry_t pEntry;
DECL|parameter1|member|void *parameter1;
DECL|parameter2|member|void *parameter2;
DECL|parameter3|member|void *parameter3;
DECL|preempReg|member|struct preempt preempReg;
DECL|preemp_float_regs|member|struct preemp_float preemp_float_regs;
DECL|preemp_float|struct|struct preemp_float {
DECL|preempt|struct|struct preempt {
DECL|prio_bmap|member|uint32_t prio_bmap[1];
DECL|prio|member|int prio;
DECL|prio|member|int prio;
DECL|psp|member|uint32_t psp; /* r13 */
DECL|q|member|sys_dlist_t q[K_NUM_PRIORITIES];
DECL|ready_q|member|struct ready_q ready_q;
DECL|ready_q|struct|struct ready_q {
DECL|s16|member|float s16;
DECL|s17|member|float s17;
DECL|s18|member|float s18;
DECL|s19|member|float s19;
DECL|s20|member|float s20;
DECL|s21|member|float s21;
DECL|s22|member|float s22;
DECL|s23|member|float s23;
DECL|s24|member|float s24;
DECL|s25|member|float s25;
DECL|s26|member|float s26;
DECL|s27|member|float s27;
DECL|s28|member|float s28;
DECL|s29|member|float s29;
DECL|s30|member|float s30;
DECL|s31|member|float s31;
DECL|s_NANO|struct|struct s_NANO {
DECL|sched_locked|member|atomic_t sched_locked;
DECL|swap_data|member|void *swap_data;
DECL|swap_data|member|void *swap_data;
DECL|tESF|typedef|typedef struct __esf tESF;
DECL|tNANO|typedef|typedef struct s_NANO tNANO;
DECL|tPreempt|typedef|typedef struct preempt tPreempt;
DECL|tcs_base|struct|struct tcs_base {
DECL|tcs|struct|struct tcs {
DECL|threads|member|struct tcs *threads; /* singly linked list of ALL fiber+tasks */
DECL|timeout_q|member|sys_dlist_t timeout_q;
DECL|timeout|member|struct _timeout timeout;
DECL|timeout|member|struct _timeout timeout;
DECL|v1|member|uint32_t v1; /* r4 */
DECL|v2|member|uint32_t v2; /* r5 */
DECL|v3|member|uint32_t v3; /* r6 */
DECL|v4|member|uint32_t v4; /* r7 */
DECL|v5|member|uint32_t v5; /* r8 */
DECL|v6|member|uint32_t v6; /* r9 */
DECL|v7|member|uint32_t v7; /* r10 */
DECL|v8|member|uint32_t v8; /* r11 */
