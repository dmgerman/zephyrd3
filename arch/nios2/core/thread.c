DECL|_nanokernel|variable|_nanokernel
DECL|_new_thread|function|void _new_thread(char *stack_memory, unsigned stack_size, void *uk_task_ptr, _thread_entry_t thread_func, void *arg1, void *arg2, void *arg3, int priority, unsigned options)
DECL|arg1|member|void *arg1;
DECL|arg2|member|void *arg2;
DECL|arg3|member|void *arg3;
DECL|entry_point|member|_thread_entry_t entry_point;
DECL|init_stack_frame|struct|struct init_stack_frame {
DECL|thread_monitor_init|function|static ALWAYS_INLINE void thread_monitor_init(struct tcs *tcs)
DECL|thread_monitor_init|macro|thread_monitor_init
