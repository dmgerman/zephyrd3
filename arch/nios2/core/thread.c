DECL|_new_thread|function|void _new_thread(struct k_thread *thread, k_thread_stack_t stack, size_t stack_size, _thread_entry_t thread_func, void *arg1, void *arg2, void *arg3, int priority, unsigned int options)
DECL|arg1|member|void *arg1;
DECL|arg2|member|void *arg2;
DECL|arg3|member|void *arg3;
DECL|entry_point|member|_thread_entry_t entry_point;
DECL|init_stack_frame|struct|struct init_stack_frame {
