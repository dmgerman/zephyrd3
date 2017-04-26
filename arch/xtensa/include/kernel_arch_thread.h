DECL|_callee_saved_t|typedef|typedef struct _callee_saved _callee_saved_t;
DECL|_callee_saved|struct|struct _callee_saved {
DECL|_caller_saved_t|typedef|typedef struct _caller_saved _caller_saved_t;
DECL|_caller_saved|struct|struct _caller_saved {
DECL|_kernel_arch_thread__h_|macro|_kernel_arch_thread__h_
DECL|_thread_arch_t|typedef|typedef struct _thread_arch _thread_arch_t;
DECL|_thread_arch|struct|struct _thread_arch {
DECL|coopCoprocReg|member|tCoopCoprocReg coopCoprocReg;
DECL|cpStack|member|char *cpStack;
DECL|custom_data|member|void *custom_data; /* available for custom use */
DECL|entry|member|struct __thread_entry *entry;
DECL|errno_var|member|int errno_var;
DECL|flags|member|u32_t flags;
DECL|next_thread|member|struct k_thread *next_thread;
DECL|preempCoprocReg|member|tPreempCoprocReg preempCoprocReg;
DECL|retval|member|u32_t retval; /* a2 */
DECL|s_coopCoprocReg|struct|typedef struct s_coopCoprocReg {
DECL|s_preempCoprocReg|struct|typedef struct s_preempCoprocReg {
DECL|tCoopCoprocReg|typedef|} tCoopCoprocReg;
DECL|tPreempCoprocReg|typedef|} tPreempCoprocReg;
DECL|topOfStack|member|XtExcFrame *topOfStack; /* a1 = sp */
