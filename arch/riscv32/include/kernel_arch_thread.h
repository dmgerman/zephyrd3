DECL|ZEPHYR_ARCH_RISCV32_INCLUDE_KERNEL_ARCH_THREAD_H_|macro|ZEPHYR_ARCH_RISCV32_INCLUDE_KERNEL_ARCH_THREAD_H_
DECL|_callee_saved_t|typedef|typedef struct _callee_saved _callee_saved_t;
DECL|_callee_saved|struct|struct _callee_saved {
DECL|_caller_saved_t|typedef|typedef struct _caller_saved _caller_saved_t;
DECL|_caller_saved|struct|struct _caller_saved {
DECL|_thread_arch_t|typedef|typedef struct _thread_arch _thread_arch_t;
DECL|_thread_arch|struct|struct _thread_arch {
DECL|s0|member|u32_t s0; /* saved register/frame pointer */
DECL|s10|member|u32_t s10; /* saved register */
DECL|s11|member|u32_t s11; /* saved register */
DECL|s1|member|u32_t s1; /* saved register */
DECL|s2|member|u32_t s2; /* saved register */
DECL|s3|member|u32_t s3; /* saved register */
DECL|s4|member|u32_t s4; /* saved register */
DECL|s5|member|u32_t s5; /* saved register */
DECL|s6|member|u32_t s6; /* saved register */
DECL|s7|member|u32_t s7; /* saved register */
DECL|s8|member|u32_t s8; /* saved register */
DECL|s9|member|u32_t s9; /* saved register */
DECL|sp|member|u32_t sp; /* Stack pointer, (x2 register) */
DECL|swap_return_value|member|u32_t swap_return_value; /* Return value of _Swap() */
