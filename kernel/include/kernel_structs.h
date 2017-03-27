DECL|_NON_PREEMPT_THRESHOLD|macro|_NON_PREEMPT_THRESHOLD
DECL|_PREEMPT_THRESHOLD|macro|_PREEMPT_THRESHOLD
DECL|_THREAD_DEAD|macro|_THREAD_DEAD
DECL|_THREAD_DUMMY|macro|_THREAD_DUMMY
DECL|_THREAD_PENDING|macro|_THREAD_PENDING
DECL|_THREAD_POLLING|macro|_THREAD_POLLING
DECL|_THREAD_PRESTART|macro|_THREAD_PRESTART
DECL|_THREAD_SUSPENDED|macro|_THREAD_SUSPENDED
DECL|__thread_entry|struct|struct __thread_entry {
DECL|_current|macro|_current
DECL|_kernel_structs__h_|macro|_kernel_structs__h_
DECL|_kernel_t|typedef|typedef struct _kernel _kernel_t;
DECL|_kernel|struct|struct _kernel {
DECL|_new_thread_init|function|static ALWAYS_INLINE struct k_thread *_new_thread_init(char *pStack, size_t stackSize, int prio, unsigned int options)
DECL|_ready_q_t|typedef|typedef struct _ready_q _ready_q_t;
DECL|_ready_q|macro|_ready_q
DECL|_ready_q|struct|struct _ready_q {
DECL|_set_thread_return_value_with_data|function|_set_thread_return_value_with_data(struct k_thread *thread, unsigned int value, void *data)
DECL|_thread_base_t|typedef|typedef struct _thread_base _thread_base_t;
DECL|_thread_base|struct|struct _thread_base {
DECL|_thread_stack_info|struct|struct _thread_stack_info {
DECL|_thread_t|typedef|typedef struct k_thread _thread_t;
DECL|_threads|macro|_threads
DECL|_timeout_q|macro|_timeout_q
DECL|arch|member|struct _kernel_arch arch;
DECL|arch|member|struct _thread_arch arch;
DECL|base|member|struct _thread_base base;
DECL|cache|member|struct k_thread *cache;
DECL|callee_saved|member|struct _callee_saved callee_saved;
DECL|caller_saved|member|struct _caller_saved caller_saved;
DECL|current_fp|member|struct k_thread *current_fp;
DECL|current|member|struct k_thread *current;
DECL|custom_data|member|void *custom_data;
DECL|entry|member|struct __thread_entry *entry;
DECL|errno_var|member|int errno_var;
DECL|fn_abort|member|void (*fn_abort)(void);
DECL|idle|member|s32_t idle; /* Number of ticks for kernel idling */
DECL|init_data|member|void *init_data;
DECL|irq_stack|member|char *irq_stack;
DECL|k_q_node|member|sys_dnode_t k_q_node;
DECL|k_thread|struct|struct k_thread {
DECL|nested|member|u32_t nested;
DECL|next_thread|member|struct k_thread *next_thread;
DECL|pEntry|member|_thread_entry_t pEntry;
DECL|parameter1|member|void *parameter1;
DECL|parameter2|member|void *parameter2;
DECL|parameter3|member|void *parameter3;
DECL|preempt|member|u16_t preempt;
DECL|prio_bmap|member|u32_t prio_bmap[K_NUM_PRIO_BITMAPS];
DECL|prio|member|s8_t prio;
DECL|q|member|sys_dlist_t q[K_NUM_PRIORITIES];
DECL|ready_q|member|struct _ready_q ready_q;
DECL|sched_locked|member|u8_t sched_locked;
DECL|size|member|u32_t size;
DECL|stack_info|member|struct _thread_stack_info stack_info;
DECL|start|member|u32_t start;
DECL|swap_data|member|void *swap_data;
DECL|thread_monitor_init|function|static ALWAYS_INLINE void thread_monitor_init(struct k_thread *thread)
DECL|thread_monitor_init|macro|thread_monitor_init
DECL|thread_state|member|u8_t thread_state;
DECL|threads|member|struct k_thread *threads; /* singly linked list of ALL fiber+tasks */
DECL|timeout_q|member|sys_dlist_t timeout_q;
DECL|timeout|member|struct _timeout timeout;
DECL|user_options|member|u8_t user_options;
