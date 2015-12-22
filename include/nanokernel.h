DECL|DEBUG_TRACING_OBJ_INIT|macro|DEBUG_TRACING_OBJ_INIT
DECL|DEBUG_TRACING_OBJ_INIT|macro|DEBUG_TRACING_OBJ_INIT
DECL|NANO_CTX_FIBER|macro|NANO_CTX_FIBER
DECL|NANO_CTX_ISR|macro|NANO_CTX_ISR
DECL|NANO_CTX_TASK|macro|NANO_CTX_TASK
DECL|TICKS_NONE|macro|TICKS_NONE
DECL|TICKS_UNLIMITED|macro|TICKS_UNLIMITED
DECL|__NANOKERNEL_H__|macro|__NANOKERNEL_H__
DECL|_nano_queue|struct|struct _nano_queue {
DECL|_nano_timeout|struct|struct _nano_timeout {
DECL|_track_list_nano_fifo|variable|_track_list_nano_fifo
DECL|_track_list_nano_lifo|variable|_track_list_nano_lifo
DECL|_track_list_nano_sem|variable|_track_list_nano_sem
DECL|_track_list_nano_timer|variable|_track_list_nano_timer
DECL|base|member|uint32_t *base;
DECL|data_q|member|struct _nano_queue data_q;
DECL|delta_ticks_from_prev|member|int32_t delta_ticks_from_prev;
DECL|fiber|member|nano_thread_id_t fiber;
DECL|head|member|void *head;
DECL|lifo|member|struct nano_lifo lifo;
DECL|link|member|struct nano_timer *link;
DECL|list|member|void *list;
DECL|nano_context_type_t|typedef|typedef int nano_context_type_t;
DECL|nano_fiber_entry_t|typedef|typedef void (*nano_fiber_entry_t)(int i1, int i2);
DECL|nano_fiber_timer_test|function|static inline void *nano_fiber_timer_test(struct nano_timer *timer, int32_t timeout_in_ticks)
DECL|nano_fifo|struct|struct nano_fifo {
DECL|nano_isr_timer_test|function|static inline void *nano_isr_timer_test(struct nano_timer *timer, int32_t timeout_in_ticks)
DECL|nano_lifo|struct|struct nano_lifo {
DECL|nano_sem|struct|struct nano_sem {
DECL|nano_stack|struct|struct nano_stack {
DECL|nano_task_timer_test|function|static inline void *nano_task_timer_test(struct nano_timer *timer, int32_t timeout_in_ticks)
DECL|nano_thread_id_t|typedef|typedef struct tcs *nano_thread_id_t;
DECL|nano_timer_test|function|static inline void *nano_timer_test(struct nano_timer *timer, int32_t timeout_in_ticks)
DECL|nano_timer|struct|struct nano_timer {
DECL|next|member|struct nano_fifo *next;
DECL|next|member|struct nano_lifo *next;
DECL|next|member|struct nano_sem *next;
DECL|next|member|struct nano_timer *next;
DECL|next|member|uint32_t *next;
DECL|node|member|sys_dlist_t node;
DECL|nsig|member|int nsig;
DECL|stat|member|int stat;
DECL|tail|member|void *tail;
DECL|ticks|member|uint32_t ticks;
DECL|userData|member|void *userData;
DECL|wait_q|member|struct _nano_queue *wait_q;
DECL|wait_q|member|struct _nano_queue wait_q;
DECL|wait_q|member|struct _nano_queue wait_q;
DECL|wait_q|member|struct _nano_queue wait_q;
