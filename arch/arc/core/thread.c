DECL|THREAD_MONITOR_INIT|macro|THREAD_MONITOR_INIT
DECL|THREAD_MONITOR_INIT|macro|THREAD_MONITOR_INIT
DECL|_nanokernel|variable|_nanokernel
DECL|_new_thread|function|void _new_thread(char *pStackMem, /* pointer to aligned stack memory */ unsigned stackSize, /* stack size in bytes */ _thread_entry_t pEntry, /* thread entry point routine */ void *parameter1, /* first param to entry point */
DECL|init_stack_frame|struct|struct init_stack_frame {
DECL|pc|member|uint32_t pc;
DECL|r0|member|uint32_t r0;
DECL|r1|member|uint32_t r1;
DECL|r2|member|uint32_t r2;
DECL|r3|member|uint32_t r3;
DECL|status32|member|uint32_t status32;
DECL|thread_monitor_init|function|static ALWAYS_INLINE void thread_monitor_init(struct tcs *tcs)
