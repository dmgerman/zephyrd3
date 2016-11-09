DECL|ANYTASK|macro|ANYTASK
DECL|CONFIG_NUM_TIMER_PACKETS|macro|CONFIG_NUM_TIMER_PACKETS
DECL|DEFINE_EVENT|macro|DEFINE_EVENT
DECL|DEFINE_FIFO|macro|DEFINE_FIFO
DECL|DEFINE_MAILBOX|macro|DEFINE_MAILBOX
DECL|DEFINE_MEM_MAP|macro|DEFINE_MEM_MAP
DECL|DEFINE_MUTEX|macro|DEFINE_MUTEX
DECL|DEFINE_PIPE|macro|DEFINE_PIPE
DECL|DEFINE_SEMAPHORE|macro|DEFINE_SEMAPHORE
DECL|DEFINE_TASK|macro|DEFINE_TASK
DECL|ENDLIST|macro|ENDLIST
DECL|K_PIPE_OPTION|typedef|} K_PIPE_OPTION;
DECL|K_TASK_GROUP_EXE|macro|K_TASK_GROUP_EXE
DECL|K_TASK_GROUP_FPU|macro|K_TASK_GROUP_FPU
DECL|K_TASK_GROUP_SSE|macro|K_TASK_GROUP_SSE
DECL|K_TASK_GROUP_SYS|macro|K_TASK_GROUP_SYS
DECL|NANO_CTX_FIBER|macro|NANO_CTX_FIBER
DECL|NANO_CTX_ISR|macro|NANO_CTX_ISR
DECL|NANO_CTX_TASK|macro|NANO_CTX_TASK
DECL|RC_ALIGNMENT|macro|RC_ALIGNMENT
DECL|RC_FAIL|macro|RC_FAIL
DECL|RC_INCOMPLETE|macro|RC_INCOMPLETE
DECL|RC_OK|macro|RC_OK
DECL|RC_TIME|macro|RC_TIME
DECL|TICKS_NONE|macro|TICKS_NONE
DECL|TICKS_UNLIMITED|macro|TICKS_UNLIMITED
DECL|USE_FP|macro|USE_FP
DECL|USE_SSE|macro|USE_SSE
DECL|_0_TO_N|enumerator|_0_TO_N = 0x0,
DECL|_1_TO_N|enumerator|_1_TO_N = 0x1,
DECL|_ALL_N|enumerator|_ALL_N = 0x2,
DECL|_MDEF_THREAD_DEFINE|macro|_MDEF_THREAD_DEFINE
DECL|_error_to_rc_no_timeout|function|static inline int _error_to_rc_no_timeout(int err)
DECL|_error_to_rc|function|static inline int _error_to_rc(int err)
DECL|_legacy__h_|macro|_legacy__h_
DECL|_ticks_to_ms|function|static inline int32_t _ticks_to_ms(int32_t ticks)
DECL|extra|member|} extra;
DECL|fiber_abort|function|static inline __deprecated void fiber_abort(void)
DECL|fiber_config|struct|struct fiber_config {
DECL|fiber_delayed_start_cancel|function|fiber_delayed_start_cancel(nano_thread_id_t handle)
DECL|fiber_delayed_start|function|fiber_delayed_start(char *stack, unsigned int stack_size_in_bytes,nano_fiber_entry_t entry_point, int param1, int param2, unsigned int priority, unsigned int options, int32_t timeout_in_ticks)
DECL|fiber_event_send|macro|fiber_event_send
DECL|fiber_fiber_delayed_start_cancel|macro|fiber_fiber_delayed_start_cancel
DECL|fiber_fiber_delayed_start|macro|fiber_fiber_delayed_start
DECL|fiber_fiber_start_config|macro|fiber_fiber_start_config
DECL|fiber_fiber_start|macro|fiber_fiber_start
DECL|fiber_fiber_wakeup|macro|fiber_fiber_wakeup
DECL|fiber_float_disable|function|static inline __deprecated void fiber_float_disable(struct tcs *tcs)
DECL|fiber_float_enable|function|fiber_float_enable(struct tcs *tcs, unsigned int options)
DECL|fiber_sem_give|macro|fiber_sem_give
DECL|fiber_sleep|macro|fiber_sleep
DECL|fiber_start_config|macro|fiber_start_config
DECL|fiber_start|function|fiber_start(char *stack, unsigned stack_size, nano_fiber_entry_t entry, int arg1, int arg2, unsigned prio, unsigned options)
DECL|fiber_wakeup|function|static inline __deprecated void fiber_wakeup(nano_thread_id_t fiber)
DECL|fiber_yield|function|static inline __deprecated void fiber_yield(void)
DECL|info|member|uint32_t info;
DECL|isr_event_send|macro|isr_event_send
DECL|isr_fiber_wakeup|macro|isr_fiber_wakeup
DECL|isr_sem_give|macro|isr_sem_give
DECL|isr_task_group_mask_get|macro|isr_task_group_mask_get
DECL|isr_task_id_get|macro|isr_task_id_get
DECL|isr_task_priority_get|macro|isr_task_priority_get
DECL|k_block|macro|k_block
DECL|k_msg|struct|struct k_msg {
DECL|kevent_handler_t|typedef|typedef int (*kevent_handler_t)(int event);
DECL|kevent_t|macro|kevent_t
DECL|kfifo_t|macro|kfifo_t
DECL|kmbox_t|macro|kmbox_t
DECL|kmemory_map_t|macro|kmemory_map_t
DECL|kmemory_pool_t|macro|kmemory_pool_t
DECL|kmutex_t|macro|kmutex_t
DECL|kpipe_t|macro|kpipe_t
DECL|kpriority_t|macro|kpriority_t
DECL|ksem_t|macro|ksem_t
DECL|ksemg_t|typedef|typedef ksem_t *ksemg_t;
DECL|ktask_t|macro|ktask_t
DECL|ktimer_t|macro|ktimer_t
DECL|mailbox|member|kmbox_t mailbox;
DECL|nano_context_type_t|typedef|typedef int nano_context_type_t;
DECL|nano_delayed_work_cancel|function|nano_delayed_work_cancel(struct nano_delayed_work *work)
DECL|nano_delayed_work_init|function|nano_delayed_work_init(struct nano_delayed_work *work, work_handler_t handler)
DECL|nano_delayed_work_submit_to_queue|function|nano_delayed_work_submit_to_queue(struct nano_workqueue *wq, struct nano_delayed_work *work, int ticks)
DECL|nano_delayed_work_submit|macro|nano_delayed_work_submit
DECL|nano_delayed_work|macro|nano_delayed_work
DECL|nano_fiber_entry_t|typedef|typedef void (*nano_fiber_entry_t)(int i1, int i2);
DECL|nano_fiber_fifo_get|macro|nano_fiber_fifo_get
DECL|nano_fiber_fifo_put_list|macro|nano_fiber_fifo_put_list
DECL|nano_fiber_fifo_put_slist|macro|nano_fiber_fifo_put_slist
DECL|nano_fiber_fifo_put|macro|nano_fiber_fifo_put
DECL|nano_fiber_lifo_get|macro|nano_fiber_lifo_get
DECL|nano_fiber_lifo_put|macro|nano_fiber_lifo_put
DECL|nano_fiber_sem_give|macro|nano_fiber_sem_give
DECL|nano_fiber_sem_take|macro|nano_fiber_sem_take
DECL|nano_fiber_stack_pop|macro|nano_fiber_stack_pop
DECL|nano_fiber_stack_push|macro|nano_fiber_stack_push
DECL|nano_fiber_timer_start|macro|nano_fiber_timer_start
DECL|nano_fiber_timer_stop|macro|nano_fiber_timer_stop
DECL|nano_fiber_timer_test|macro|nano_fiber_timer_test
DECL|nano_fiber_workqueue_start|macro|nano_fiber_workqueue_start
DECL|nano_fifo_get|function|static inline __deprecated void *nano_fifo_get(struct nano_fifo *fifo, int32_t timeout_in_ticks)
DECL|nano_fifo_init|function|static inline __deprecated void nano_fifo_init(struct nano_fifo *fifo)
DECL|nano_fifo_put_list|function|nano_fifo_put_list(struct nano_fifo *fifo, void *head, void *tail)
DECL|nano_fifo_put_slist|function|nano_fifo_put_slist(struct nano_fifo *fifo, sys_slist_t *list)
DECL|nano_fifo_put|function|static inline __deprecated void nano_fifo_put(struct nano_fifo *fifo, void *data)
DECL|nano_fifo|macro|nano_fifo
DECL|nano_isr_fifo_get|macro|nano_isr_fifo_get
DECL|nano_isr_fifo_put_list|macro|nano_isr_fifo_put_list
DECL|nano_isr_fifo_put_slist|macro|nano_isr_fifo_put_slist
DECL|nano_isr_fifo_put|macro|nano_isr_fifo_put
DECL|nano_isr_lifo_get|macro|nano_isr_lifo_get
DECL|nano_isr_lifo_put|macro|nano_isr_lifo_put
DECL|nano_isr_sem_give|macro|nano_isr_sem_give
DECL|nano_isr_sem_take|macro|nano_isr_sem_take
DECL|nano_isr_stack_pop|macro|nano_isr_stack_pop
DECL|nano_isr_stack_push|macro|nano_isr_stack_push
DECL|nano_isr_timer_start|macro|nano_isr_timer_start
DECL|nano_isr_timer_stop|macro|nano_isr_timer_stop
DECL|nano_isr_timer_test|macro|nano_isr_timer_test
DECL|nano_lifo_get|function|static inline __deprecated void *nano_lifo_get(struct nano_lifo *lifo, int32_t timeout_in_ticks)
DECL|nano_lifo_init|function|static inline __deprecated void nano_lifo_init(struct nano_lifo *lifo)
DECL|nano_lifo_put|function|nano_lifo_put(struct nano_lifo *lifo, void *data)
DECL|nano_lifo|macro|nano_lifo
DECL|nano_sem_count_get|function|static inline __deprecated int nano_sem_count_get(ksem_t sem)
DECL|nano_sem_give|function|static inline __deprecated void nano_sem_give(struct nano_sem *sem)
DECL|nano_sem_init|function|static inline __deprecated void nano_sem_init(struct nano_sem *sem)
DECL|nano_sem_take|function|static inline __deprecated int nano_sem_take(struct nano_sem *sem, int32_t timeout_in_ticks)
DECL|nano_sem|macro|nano_sem
DECL|nano_stack_init|function|static inline __deprecated void nano_stack_init(struct nano_stack *stack,uint32_t *data)
DECL|nano_stack_pop|function|nano_stack_pop(struct nano_stack *stack, uint32_t *data, int32_t timeout_in_ticks)
DECL|nano_stack_push|function|nano_stack_push(struct nano_stack *stack, uint32_t data)
DECL|nano_stack|macro|nano_stack
DECL|nano_task_fifo_get|macro|nano_task_fifo_get
DECL|nano_task_fifo_put_list|macro|nano_task_fifo_put_list
DECL|nano_task_fifo_put_slist|macro|nano_task_fifo_put_slist
DECL|nano_task_fifo_put|macro|nano_task_fifo_put
DECL|nano_task_lifo_get|macro|nano_task_lifo_get
DECL|nano_task_lifo_put|macro|nano_task_lifo_put
DECL|nano_task_sem_give|macro|nano_task_sem_give
DECL|nano_task_sem_take|macro|nano_task_sem_take
DECL|nano_task_stack_pop|macro|nano_task_stack_pop
DECL|nano_task_stack_push|macro|nano_task_stack_push
DECL|nano_task_timer_start|macro|nano_task_timer_start
DECL|nano_task_timer_stop|macro|nano_task_timer_stop
DECL|nano_task_timer_test|macro|nano_task_timer_test
DECL|nano_task_workqueue_start|macro|nano_task_workqueue_start
DECL|nano_thread_id_t|macro|nano_thread_id_t
DECL|nano_timer_init|function|nano_timer_init(struct k_timer *timer, void *data)
DECL|nano_timer_start|function|nano_timer_start(struct nano_timer *timer, int ticks)
DECL|nano_timer_stop|function|static inline __deprecated void nano_timer_stop(struct nano_timer *timer)
DECL|nano_timer_ticks_remain|function|nano_timer_ticks_remain(struct nano_timer *timer)
DECL|nano_timer|macro|nano_timer
DECL|nano_work_init|function|static inline void nano_work_init(struct nano_work *work, work_handler_t handler)
DECL|nano_work_submit_to_queue|function|nano_work_submit_to_queue(struct nano_workqueue *wq, struct nano_work *work)
DECL|nano_work_submit|function|static inline __deprecated void nano_work_submit(struct nano_work *work)
DECL|nano_workqueue_start|function|nano_workqueue_start(struct nano_workqueue *wq, const struct fiber_config *config)
DECL|nano_workqueue|macro|nano_workqueue
DECL|nano_work|macro|nano_work
DECL|pool_struct|macro|pool_struct
DECL|prio|member|unsigned prio;
DECL|rx_data|member|void *rx_data;
DECL|rx_task|member|ktask_t rx_task;
DECL|sema|member|ksem_t sema;
DECL|size|member|uint32_t size;
DECL|stack_size|member|unsigned stack_size;
DECL|stack|member|char *stack;
DECL|sys_cycle_get_32|macro|sys_cycle_get_32
DECL|sys_scheduler_time_slice_set|function|static inline void __deprecated sys_scheduler_time_slice_set(int32_t ticks,kpriority_t priority)
DECL|sys_thread_busy_wait|function|static inline __deprecated void sys_thread_busy_wait(uint32_t usec_to_wait)
DECL|sys_thread_self_get|function|static inline __deprecated nano_thread_id_t sys_thread_self_get(void)
DECL|task_abort|function|static inline __deprecated void task_abort(ktask_t task)
DECL|task_entry_set|function|task_entry_set(ktask_t task, void (*entry)(void))
DECL|task_event_handler_set|function|task_event_handler_set(kevent_t legacy_event, kevent_handler_t handler)
DECL|task_event_recv|function|static inline __deprecated int task_event_recv(kevent_t legacy_event, int32_t timeout)
DECL|task_event_send|function|static inline __deprecated int task_event_send(kevent_t legacy_event)
DECL|task_fiber_delayed_start_cancel|macro|task_fiber_delayed_start_cancel
DECL|task_fiber_delayed_start|macro|task_fiber_delayed_start
DECL|task_fiber_start_config|macro|task_fiber_start_config
DECL|task_fiber_start|macro|task_fiber_start
DECL|task_fiber_wakeup|macro|task_fiber_wakeup
DECL|task_fifo_get|function|static inline __deprecated int task_fifo_get(kfifo_t queue, void *data, int32_t timeout)
DECL|task_fifo_purge|function|static inline __deprecated int task_fifo_purge(kfifo_t queue)
DECL|task_fifo_put|function|static inline __deprecated int task_fifo_put(kfifo_t queue, void *data, int32_t timeout)
DECL|task_fifo_size_get|function|static inline __deprecated int task_fifo_size_get(kfifo_t queue)
DECL|task_float_disable|macro|task_float_disable
DECL|task_float_enable|macro|task_float_enable
DECL|task_free|function|static inline __deprecated void task_free(void *ptr)
DECL|task_group_abort|function|static inline __deprecated void task_group_abort(uint32_t groups)
DECL|task_group_join|function|static inline __deprecated void task_group_join(uint32_t groups)
DECL|task_group_leave|function|static inline __deprecated void task_group_leave(uint32_t groups)
DECL|task_group_mask_get|function|static inline __deprecated uint32_t task_group_mask_get(void)
DECL|task_group_resume|function|static inline __deprecated void task_group_resume(uint32_t groups)
DECL|task_group_start|function|static inline __deprecated void task_group_start(uint32_t groups)
DECL|task_group_suspend|function|static inline __deprecated void task_group_suspend(uint32_t groups)
DECL|task_id_get|function|static inline __deprecated ktask_t task_id_get(void)
DECL|task_malloc|function|static inline __deprecated void *task_malloc(uint32_t size)
DECL|task_mem_map_alloc|function|task_mem_map_alloc(kmemory_map_t map, void **mptr, int32_t timeout)
DECL|task_mem_map_free|function|task_mem_map_free(kmemory_map_t m, void **p)
DECL|task_mem_map_used_get|function|static inline __deprecated int task_mem_map_used_get(kmemory_map_t map)
DECL|task_mem_pool_alloc|function|task_mem_pool_alloc(struct k_block *blockptr, kmemory_pool_t pool_id, int reqsize, int32_t timeout)
DECL|task_mem_pool_defragment|function|static inline __deprecated void task_mem_pool_defragment(kmemory_pool_t pool)
DECL|task_mem_pool_free|function|static inline __deprecated void task_mem_pool_free(struct k_block *block)
DECL|task_mutex_lock|function|static inline __deprecated int task_mutex_lock(kmutex_t mutex, int32_t timeout)
DECL|task_mutex_unlock|function|static inline __deprecated void task_mutex_unlock(kmutex_t mutex)
DECL|task_pipe_block_put|function|task_pipe_block_put(kpipe_t id, struct k_block block, int size, ksem_t sem)
DECL|task_pipe_get|function|task_pipe_get(kpipe_t id, void *buffer, int bytes_to_read, int *bytes_read, K_PIPE_OPTION options, int32_t timeout)
DECL|task_pipe_put|function|task_pipe_put(kpipe_t id, void *buffer, int bytes_to_write, int *bytes_written, K_PIPE_OPTION options, int32_t timeout)
DECL|task_priority_get|function|static inline __deprecated kpriority_t task_priority_get(void)
DECL|task_priority_set|function|static inline __deprecated void task_priority_set(ktask_t task, kpriority_t prio)
DECL|task_resume|function|static inline __deprecated void task_resume(ktask_t task)
DECL|task_sem_count_get|function|static inline __deprecated int task_sem_count_get(ksem_t sem)
DECL|task_sem_give|macro|task_sem_give
DECL|task_sem_group_give|function|static inline __deprecated void task_sem_group_give(ksemg_t group)
DECL|task_sem_group_reset|function|static inline __deprecated void task_sem_group_reset(ksemg_t group)
DECL|task_sem_group_take|function|static inline __deprecated ksem_t task_sem_group_take(ksemg_t group, int32_t timeout)
DECL|task_sem_reset|function|static inline __deprecated void task_sem_reset(ksem_t sem)
DECL|task_sem_take|function|static inline __deprecated int task_sem_take(ksem_t sem, int32_t timeout)
DECL|task_sleep|macro|task_sleep
DECL|task_suspend|function|static inline __deprecated void task_suspend(ktask_t task)
DECL|task_timer_restart|function|task_timer_restart(ktimer_t timer, int32_t duration, int32_t period)
DECL|task_timer_stop|function|static inline __deprecated void task_timer_stop(ktimer_t timer)
DECL|task_timer_stop|macro|task_timer_stop
DECL|task_yield|macro|task_yield
DECL|transfer|member|struct k_args *transfer;
DECL|tx_block|member|struct k_block tx_block;
DECL|tx_data|member|void *tx_data;
DECL|tx_task|member|ktask_t tx_task;
DECL|work_handler_t|macro|work_handler_t
