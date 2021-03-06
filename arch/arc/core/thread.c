DECL|_arch_user_mode_enter|function|FUNC_NORETURN void _arch_user_mode_enter(k_thread_entry_t user_entry,void *p1, void *p2, void *p3)
DECL|_new_thread|function|void _new_thread(struct k_thread *thread, k_thread_stack_t *stack, size_t stackSize, k_thread_entry_t pEntry, void *parameter1, void *parameter2, void *parameter3, int priority, unsigned int options)
DECL|init_stack_frame|struct|struct init_stack_frame {
DECL|pc|member|u32_t pc;
DECL|r0|member|u32_t r0;
DECL|r1|member|u32_t r1;
DECL|r2|member|u32_t r2;
DECL|r3|member|u32_t r3;
DECL|sec_stat|member|u32_t sec_stat;
DECL|status32|member|u32_t status32;
