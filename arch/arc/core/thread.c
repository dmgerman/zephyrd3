DECL|_new_thread|function|void _new_thread(char *pStackMem, size_t stackSize, _thread_entry_t pEntry, void *parameter1, void *parameter2, void *parameter3, int priority, unsigned int options)
DECL|init_stack_frame|struct|struct init_stack_frame {
DECL|pc|member|u32_t pc;
DECL|r0|member|u32_t r0;
DECL|r1|member|u32_t r1;
DECL|r2|member|u32_t r2;
DECL|r3|member|u32_t r3;
DECL|status32|member|u32_t status32;
DECL|thread_monitor_init|function|static ALWAYS_INLINE void thread_monitor_init(struct k_thread *thread)
DECL|thread_monitor_init|macro|thread_monitor_init
