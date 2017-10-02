DECL|_FOREACH_STATIC_THREAD|macro|_FOREACH_STATIC_THREAD
DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(k_thread_create, new_thread_p, stack_p, stack_size, entry, p1, more_args)
DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(k_thread_custom_data_set, data)
DECL|_check_stack_sentinel|function|void _check_stack_sentinel(void)
DECL|_impl_k_thread_cancel|function|int _impl_k_thread_cancel(k_tid_t tid)
DECL|_impl_k_thread_create|function|k_tid_t _impl_k_thread_create(struct k_thread *new_thread, k_thread_stack_t stack, size_t stack_size, k_thread_entry_t entry, void *p1, void *p2, void *p3, int prio, u32_t options, s32_t delay)
DECL|_impl_k_thread_custom_data_get|function|void *_impl_k_thread_custom_data_get(void)
DECL|_impl_k_thread_custom_data_set|function|void _impl_k_thread_custom_data_set(void *value)
DECL|_impl_k_thread_resume|function|void _impl_k_thread_resume(struct k_thread *thread)
DECL|_impl_k_thread_start|function|void _impl_k_thread_start(struct k_thread *thread)
DECL|_impl_k_thread_suspend|function|void _impl_k_thread_suspend(struct k_thread *thread)
DECL|_init_static_threads|function|void _init_static_threads(void)
DECL|_init_thread_base|function|void _init_thread_base(struct _thread_base *thread_base, int priority, u32_t initial_state, unsigned int options)
DECL|_is_thread_essential|function|int _is_thread_essential(void)
DECL|_k_thread_group_join|function|void _k_thread_group_join(u32_t groups, struct k_thread *thread)
DECL|_k_thread_group_leave|function|void _k_thread_group_leave(u32_t groups, struct k_thread *thread)
DECL|_k_thread_group_mask_get|function|u32_t _k_thread_group_mask_get(struct k_thread *thread)
DECL|_k_thread_group_op|function|void _k_thread_group_op(u32_t groups, void (*func)(struct k_thread *))
DECL|_k_thread_single_abort|function|void _k_thread_single_abort(struct k_thread *thread)
DECL|_k_thread_single_resume|function|void _k_thread_single_resume(struct k_thread *thread)
DECL|_k_thread_single_start|function|void _k_thread_single_start(struct k_thread *thread)
DECL|_k_thread_single_suspend|function|void _k_thread_single_suspend(struct k_thread *thread)
DECL|_setup_new_thread|function|void _setup_new_thread(struct k_thread *new_thread, k_thread_stack_t stack, size_t stack_size, k_thread_entry_t entry, void *p1, void *p2, void *p3, int prio, u32_t options)
DECL|_thread_entry|function|FUNC_NORETURN void _thread_entry(k_thread_entry_t entry, void *p1, void *p2, void *p3)
DECL|_thread_essential_clear|function|void _thread_essential_clear(void)
DECL|_thread_essential_set|function|void _thread_essential_set(void)
DECL|_thread_monitor_exit|function|void _thread_monitor_exit(struct k_thread *thread)
DECL|free_thread_index|function|static void free_thread_index(int id)
DECL|get_next_thread_index|function|static int get_next_thread_index(void)
DECL|is_in_any_group|function|static inline int is_in_any_group(struct _static_thread_data *thread_data, u32_t groups)
DECL|k_busy_wait|function|void k_busy_wait(u32_t usec_to_wait)
DECL|k_is_in_isr|function|int k_is_in_isr(void)
DECL|k_thread_custom_data_get|variable|k_thread_custom_data_get
DECL|k_thread_user_mode_enter|function|FUNC_NORETURN void k_thread_user_mode_enter(k_thread_entry_t entry, void *p1, void *p2, void *p3)
DECL|schedule_new_thread|function|static void schedule_new_thread(struct k_thread *thread, s32_t delay)
DECL|thread_count|variable|thread_count
