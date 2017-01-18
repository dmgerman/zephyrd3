DECL|EXC_ACTIVE|macro|EXC_ACTIVE
DECL|INT_ACTIVE|macro|INT_ACTIVE
DECL|STACK_ROUND_DOWN|macro|STACK_ROUND_DOWN
DECL|STACK_ROUND_UP|macro|STACK_ROUND_UP
DECL|USE_FP|macro|USE_FP
DECL|__esf_t|typedef|typedef struct __esf __esf_t;
DECL|_callee_saved_t|typedef|typedef struct _callee_saved _callee_saved_t;
DECL|_callee_saved|struct|struct _callee_saved {
DECL|_caller_saved_t|typedef|typedef struct _caller_saved _caller_saved_t;
DECL|_caller_saved|struct|struct _caller_saved {
DECL|_kernel_arch_data__h_|macro|_kernel_arch_data__h_
DECL|_kernel_arch_t|typedef|typedef struct _kernel_arch _kernel_arch_t;
DECL|_kernel_arch|struct|struct _kernel_arch {
DECL|_thread_arch_t|typedef|typedef struct _thread_arch _thread_arch_t;
DECL|_thread_arch|struct|struct _thread_arch {
DECL|coopCoprocReg|member|tCoopCoprocReg coopCoprocReg; /* non-volatile coprocessor's register storage */
DECL|cpStack|member|char *cpStack;
DECL|custom_data|member|void *custom_data; /* available for custom use */
DECL|entry|member|struct __thread_entry *entry; /* thread entry and parameters description */
DECL|errno_var|member|int errno_var;
DECL|flags|member|uint32_t flags;
DECL|isf|member|NANO_ISF *isf; /* ptr to interrupt stack frame */
DECL|next_thread|member|struct tcs *next_thread; /* next item in list of ALL fiber+tasks */
DECL|preempCoprocReg|member|tPreempCoprocReg preempCoprocReg; /* volatile coprocessor's register storage */
DECL|prio|member|int prio; /* thread priority used to sort linked list */
DECL|retval|member|uint32_t retval; /* a2 */
DECL|s_coopCoprocReg|struct|typedef struct s_coopCoprocReg {
DECL|s_preempCoprocReg|struct|typedef struct s_preempCoprocReg {
DECL|tCoopCoprocReg|typedef|} tCoopCoprocReg;
DECL|tPreempCoprocReg|typedef|} tPreempCoprocReg;
DECL|topOfStack|member|XtExcFrame *topOfStack; /* a1 = sp */
