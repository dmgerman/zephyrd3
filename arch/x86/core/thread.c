DECL|_new_thread_internal|function|static void _new_thread_internal(char *pStackMem, unsigned int stackSize, int priority, unsigned int options, struct k_thread *thread)
DECL|_new_thread|function|void _new_thread(struct k_thread *thread, k_thread_stack_t stack, size_t stackSize, _thread_entry_t pEntry, void *parameter1, void *parameter2, void *parameter3, int priority, unsigned int options)
