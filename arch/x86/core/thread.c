DECL|_new_thread|function|void _new_thread(struct k_thread *thread, k_thread_stack_t stack, size_t stack_size, k_thread_entry_t entry, void *parameter1, void *parameter2, void *parameter3, int priority, unsigned int options)
DECL|_thread_entry|member|void *_thread_entry;
DECL|_x86_initial_frame|struct|struct _x86_initial_frame {
DECL|ebp|member|u32_t ebp;
DECL|ebx|member|u32_t ebx;
DECL|edi|member|u32_t edi;
DECL|eflags|member|u32_t eflags;
DECL|entry|member|k_thread_entry_t entry;
DECL|esi|member|u32_t esi;
DECL|p1|member|void *p1;
DECL|p2|member|void *p2;
DECL|p3|member|void *p3;
DECL|swap_retval|member|u32_t swap_retval;
