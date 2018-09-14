DECL|ZEPHYR_ARCH_ARM_INCLUDE_KERNEL_ARCH_THREAD_H_|macro|ZEPHYR_ARCH_ARM_INCLUDE_KERNEL_ARCH_THREAD_H_
DECL|_callee_saved_t|typedef|typedef struct _callee_saved _callee_saved_t;
DECL|_callee_saved|struct|struct _callee_saved {
DECL|_caller_saved_t|typedef|typedef struct _caller_saved _caller_saved_t;
DECL|_caller_saved|struct|struct _caller_saved {
DECL|_preempt_float|struct|struct _preempt_float {
DECL|_thread_arch_t|typedef|typedef struct _thread_arch _thread_arch_t;
DECL|_thread_arch|struct|struct _thread_arch {
DECL|basepri|member|u32_t basepri;
DECL|mode|member|u32_t mode;
DECL|preempt_float|member|struct _preempt_float preempt_float;
DECL|priv_stack_size|member|u32_t priv_stack_size;
DECL|priv_stack_start|member|u32_t priv_stack_start;
DECL|psp|member|u32_t psp; /* r13 */
DECL|s16|member|float s16;
DECL|s17|member|float s17;
DECL|s18|member|float s18;
DECL|s19|member|float s19;
DECL|s20|member|float s20;
DECL|s21|member|float s21;
DECL|s22|member|float s22;
DECL|s23|member|float s23;
DECL|s24|member|float s24;
DECL|s25|member|float s25;
DECL|s26|member|float s26;
DECL|s27|member|float s27;
DECL|s28|member|float s28;
DECL|s29|member|float s29;
DECL|s30|member|float s30;
DECL|s31|member|float s31;
DECL|swap_return_value|member|u32_t swap_return_value;
DECL|v1|member|u32_t v1; /* r4 */
DECL|v2|member|u32_t v2; /* r5 */
DECL|v3|member|u32_t v3; /* r6 */
DECL|v4|member|u32_t v4; /* r7 */
DECL|v5|member|u32_t v5; /* r8 */
DECL|v6|member|u32_t v6; /* r9 */
DECL|v7|member|u32_t v7; /* r10 */
DECL|v8|member|u32_t v8; /* r11 */
