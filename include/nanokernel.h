DECL|NANO_CTX_FIBER|macro|NANO_CTX_FIBER
DECL|NANO_CTX_ISR|macro|NANO_CTX_ISR
DECL|NANO_CTX_TASK|macro|NANO_CTX_TASK
DECL|TICKS_NONE|macro|TICKS_NONE
DECL|TICKS_UNLIMITED|macro|TICKS_UNLIMITED
DECL|USE_FP|macro|USE_FP
DECL|USE_SSE|macro|USE_SSE
DECL|__NANOKERNEL_H__|macro|__NANOKERNEL_H__
DECL|__next|member|struct nano_fifo *__next;
DECL|__next|member|struct nano_lifo *__next;
DECL|__next|member|struct nano_sem *__next;
DECL|__next|member|struct nano_stack *__next;
DECL|__next|member|struct nano_timer *__next;
DECL|_nano_queue|struct|struct _nano_queue {
DECL|_nano_timeout_func_t|typedef|typedef void (*_nano_timeout_func_t)(struct _nano_timeout *t);
DECL|_nano_timeout|struct|struct _nano_timeout {
DECL|base|member|uint32_t *base;
DECL|data_q|member|struct _nano_queue data_q;
DECL|delete|function|inline void operator delete(void *ptr)
DECL|delete|function|inline void operator delete(void *ptr1, void *ptr2)
DECL|delete|function|inline void operator delete[](void *ptr)
DECL|delete|function|inline void operator delete[](void *ptr1, void *ptr2)
DECL|delta_ticks_from_prev|member|int32_t delta_ticks_from_prev;
DECL|fiber_config|struct|struct fiber_config {
DECL|fiber_fiber_start_config|function|fiber_fiber_start_config(const struct fiber_config *config, nano_fiber_entry_t entry, int arg1, int arg2, unsigned options)
DECL|fiber_start_config|function|fiber_start_config(const struct fiber_config *config, nano_fiber_entry_t entry, int arg1, int arg2, unsigned options)
DECL|fiber|member|nano_thread_id_t fiber;
DECL|func|member|_nano_timeout_func_t func;
DECL|head|member|void *head;
DECL|list|member|void *list;
DECL|nano_context_type_t|typedef|typedef int nano_context_type_t;
DECL|nano_fiber_entry_t|typedef|typedef void (*nano_fiber_entry_t)(int i1, int i2);
DECL|nano_fifo|struct|struct nano_fifo {
DECL|nano_lifo|struct|struct nano_lifo {
DECL|nano_sem_count_get|function|static inline int nano_sem_count_get(struct nano_sem *sem)
DECL|nano_sem|struct|struct nano_sem {
DECL|nano_stack|struct|struct nano_stack {
DECL|nano_thread_id_t|typedef|typedef struct tcs *nano_thread_id_t;
DECL|nano_timer|struct|struct nano_timer {
DECL|new|function|inline void *operator new(size_t size)
DECL|new|function|inline void *operator new(size_t size, void *ptr)
DECL|new|function|inline void *operator new[](size_t size)
DECL|new|function|inline void *operator new[](size_t size, void *ptr)
DECL|next|member|uint32_t *next;
DECL|node|member|sys_dlist_t node;
DECL|nsig|member|int nsig;
DECL|prio|member|unsigned prio;
DECL|stack_size|member|unsigned stack_size;
DECL|stack|member|char *stack;
DECL|tail|member|void *tail;
DECL|task_fiber_start_config|function|task_fiber_start_config(const struct fiber_config *config,nano_fiber_entry_t entry, int arg1, int arg2, unsigned options)
DECL|task_q|member|struct _nano_queue task_q; /* waiting tasks */
DECL|task_q|member|struct _nano_queue task_q; /* waiting tasks */
DECL|task_q|member|struct _nano_queue task_q; /* waiting tasks */
DECL|tcs|member|struct tcs *tcs;
DECL|timeout_data|member|struct _nano_timeout timeout_data;
DECL|user_data_backup|member|void *user_data_backup;
DECL|user_data|member|void *user_data;
DECL|wait_q|member|struct _nano_queue *wait_q;
DECL|wait_q|member|struct _nano_queue wait_q;
DECL|wait_q|member|struct _nano_queue wait_q;
DECL|wait_q|member|struct _nano_queue wait_q; /* waiting fibers */
