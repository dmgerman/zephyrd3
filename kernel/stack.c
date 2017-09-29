DECL|_handler_k_stack_init|function|u32_t _handler_k_stack_init(u32_t stack, u32_t buffer, u32_t num_entries_p, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_handler_k_stack_pop|function|u32_t _handler_k_stack_pop(u32_t stack, u32_t data, u32_t timeout, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_handler_k_stack_push|function|u32_t _handler_k_stack_push(u32_t stack_p, u32_t data, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_impl_k_stack_init|function|void _impl_k_stack_init(struct k_stack *stack, u32_t *buffer, int num_entries)
DECL|_impl_k_stack_pop|function|int _impl_k_stack_pop(struct k_stack *stack, u32_t *data, s32_t timeout)
DECL|_impl_k_stack_push|function|void _impl_k_stack_push(struct k_stack *stack, u32_t data)
DECL|_trace_list_k_stack|variable|_trace_list_k_stack
DECL|init_stack_module|function|static int init_stack_module(struct device *dev)
