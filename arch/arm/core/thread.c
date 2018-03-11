DECL|_arch_user_mode_enter|function|FUNC_NORETURN void _arch_user_mode_enter(k_thread_entry_t user_entry,void *p1, void *p2, void *p3)
DECL|_new_thread|function|void _new_thread(struct k_thread *thread, k_thread_stack_t *stack, size_t stackSize, k_thread_entry_t pEntry, void *parameter1, void *parameter2, void *parameter3, int priority, unsigned int options)
DECL|configure_builtin_stack_guard|function|void configure_builtin_stack_guard(struct k_thread *thread)
