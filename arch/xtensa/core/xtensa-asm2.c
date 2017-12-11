DECL|DEF_INT_C_HANDLER|macro|DEF_INT_C_HANDLER
DECL|_irq_spurious|function|void _irq_spurious(void *arg)
DECL|_new_thread|function|void _new_thread(struct k_thread *thread, k_thread_stack_t *stack, size_t sz, k_thread_entry_t entry, void *p1, void *p2, void *p3, int prio, unsigned int opts)
DECL|dump_stack|function|static void dump_stack(int *stack)
DECL|restore_stack|function|static inline void *restore_stack(void *interrupted_stack)
DECL|xtensa_excint1_c|function|void *xtensa_excint1_c(int *interrupted_stack)
DECL|xtensa_init_stack|function|void *xtensa_init_stack(int *stack_top,void (*entry)(void *, void *, void *), void *arg1, void *arg2, void *arg3)
