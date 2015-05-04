DECL|_stack_pop|function|int _stack_pop(struct nano_stack *stack,/* stack on which to interact */ uint32_t *pData/* container for data to pop */ )
DECL|_stack_push|function|void _stack_push(struct nano_stack *stack, /* stack on which to interact */ uint32_t data /* data to push on stack */ )
DECL|nano_fiber_stack_pop_wait|function|uint32_t nano_fiber_stack_pop_wait(struct nano_stack *stack /* stack on which to interact */ )
DECL|nano_stack_init|function|void nano_stack_init(struct nano_stack *stack,/* stack to initialize */ uint32_t *data/* container for stack */ )
DECL|nano_task_stack_pop_wait|function|uint32_t nano_task_stack_pop_wait(struct nano_stack *stack /* stack on which to interact */ )
DECL|nano_task_stack_push|function|void nano_task_stack_push(struct nano_stack *stack, /* stack on which to interact */ uint32_t data /* data to push on stack */ )
