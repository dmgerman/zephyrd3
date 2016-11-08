DECL|_FOREACH_STATIC_THREAD|macro|_FOREACH_STATIC_THREAD
DECL|_init_static_threads|function|void _init_static_threads(void)
DECL|_is_thread_essential|function|int _is_thread_essential(void)
DECL|_k_thread_group_join|function|void _k_thread_group_join(uint32_t groups, struct k_thread *thread)
DECL|_k_thread_group_leave|function|void _k_thread_group_leave(uint32_t groups, struct k_thread *thread)
DECL|_k_thread_group_mask_get|function|uint32_t _k_thread_group_mask_get(struct k_thread *thread)
DECL|_k_thread_group_op|function|void _k_thread_group_op(uint32_t groups, void (*func)(struct k_thread *))
DECL|_k_thread_single_abort|function|void _k_thread_single_abort(struct k_thread *thread)
DECL|_k_thread_single_resume|function|void _k_thread_single_resume(struct k_thread *thread)
DECL|_k_thread_single_start|function|void _k_thread_single_start(struct k_thread *thread)
DECL|_k_thread_single_suspend|function|void _k_thread_single_suspend(struct k_thread *thread)
DECL|_thread_entry|function|FUNC_NORETURN void _thread_entry(void (*entry)(void *, void *, void *), void *p1, void *p2, void *p3)
DECL|_thread_essential_clear|function|void _thread_essential_clear(void)
DECL|_thread_essential_set|function|void _thread_essential_set(void)
DECL|_thread_monitor_exit|function|void _thread_monitor_exit(struct k_thread *thread)
DECL|is_in_any_group|function|static inline int is_in_any_group(struct _static_thread_data *thread_data, uint32_t groups)
DECL|k_busy_wait|function|void k_busy_wait(uint32_t usec_to_wait)
DECL|k_is_in_isr|function|int k_is_in_isr(void)
DECL|k_thread_cancel|function|int k_thread_cancel(k_tid_t tid)
DECL|k_thread_custom_data_get|function|void *k_thread_custom_data_get(void)
DECL|k_thread_custom_data_set|function|void k_thread_custom_data_set(void *value)
DECL|k_thread_resume|function|void k_thread_resume(struct k_thread *thread)
DECL|k_thread_spawn|function|k_tid_t k_thread_spawn(char *stack, unsigned stack_size,void (*entry)(void *, void *, void*), void *p1, void *p2, void *p3, int32_t prio, uint32_t options, int32_t delay)
DECL|k_thread_suspend|function|void k_thread_suspend(struct k_thread *thread)
DECL|schedule_new_thread|function|static void schedule_new_thread(struct k_thread *thread, int32_t delay)
DECL|start_thread|function|static void start_thread(struct k_thread *thread)
DECL|sys_execution_context_type_get|function|int sys_execution_context_type_get(void)
DECL|task_start|function|void task_start(ktask_t task)
