DECL|_fiber_start|function|void _fiber_start(char *pStack,unsigned stackSize, /* stack size in bytes */ nano_fiber_entry_t pEntry, int parameter1, int parameter2,
DECL|_nano_fiber_ready|function|void _nano_fiber_ready(struct tcs *tcs)
DECL|_nano_fiber_swap|function|FUNC_NORETURN void _nano_fiber_swap(void)
DECL|fiber_abort|function|FUNC_NORETURN void fiber_abort(void)
DECL|fiber_delayed_start_cancel|function|void fiber_delayed_start_cancel(nano_thread_id_t handle)
DECL|fiber_delayed_start|function|nano_thread_id_t fiber_delayed_start(char *stack, unsigned int stack_size_in_bytes, nano_fiber_entry_t entry_point, int param1, int param2, unsigned int priority, unsigned int options, int32_t timeout_in_ticks)
DECL|fiber_yield|function|void fiber_yield(void)
