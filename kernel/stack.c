DECL|_SYSCALL_HANDLER2|function|_SYSCALL_HANDLER2(k_stack_push, stack_p, data)
DECL|_SYSCALL_HANDLER3|function|_SYSCALL_HANDLER3(k_stack_init, stack, buffer, num_entries_p)
DECL|_SYSCALL_HANDLER3|function|_SYSCALL_HANDLER3(k_stack_pop, stack, data, timeout)
DECL|_impl_k_stack_init|function|void _impl_k_stack_init(struct k_stack *stack, u32_t *buffer, int num_entries)
DECL|_impl_k_stack_pop|function|int _impl_k_stack_pop(struct k_stack *stack, u32_t *data, s32_t timeout)
DECL|_impl_k_stack_push|function|void _impl_k_stack_push(struct k_stack *stack, u32_t data)
DECL|_trace_list_k_stack|variable|_trace_list_k_stack
DECL|init_stack_module|function|static int init_stack_module(struct device *dev)
