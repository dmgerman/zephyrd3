DECL|_CAUSE_COOP|macro|_CAUSE_COOP
DECL|_CAUSE_FIRQ|macro|_CAUSE_FIRQ
DECL|_CAUSE_NONE|macro|_CAUSE_NONE
DECL|_CAUSE_RIRQ|macro|_CAUSE_RIRQ
DECL|_callee_saved_t|typedef|typedef struct _callee_saved _callee_saved_t;
DECL|_callee_saved|struct|struct _callee_saved {
DECL|_caller_saved_t|typedef|typedef struct _caller_saved _caller_saved_t;
DECL|_caller_saved|struct|struct _caller_saved {
DECL|_kernel_arch_thread__h_|macro|_kernel_arch_thread__h_
DECL|_thread_arch_t|typedef|typedef struct _thread_arch _thread_arch_t;
DECL|_thread_arch|struct|struct _thread_arch {
DECL|intlock_key|member|u32_t intlock_key;
DECL|k_stack_base|member|u32_t k_stack_base;
DECL|k_stack_top|member|u32_t k_stack_top;
DECL|priv_stack_size|member|u32_t priv_stack_size;
DECL|priv_stack_start|member|u32_t priv_stack_start;
DECL|relinquish_cause|member|int relinquish_cause;
DECL|return_value|member|unsigned int return_value;
DECL|sp|member|u32_t sp; /* r28 */
DECL|u_stack_base|member|u32_t u_stack_base;
DECL|u_stack_top|member|u32_t u_stack_top;
