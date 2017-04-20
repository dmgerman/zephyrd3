DECL|STACK_ALIGN_SIZE|macro|STACK_ALIGN_SIZE
DECL|STACK_ROUND_DOWN|macro|STACK_ROUND_DOWN
DECL|STACK_ROUND_UP|macro|STACK_ROUND_UP
DECL|_CAUSE_COOP|macro|_CAUSE_COOP
DECL|_CAUSE_FIRQ|macro|_CAUSE_FIRQ
DECL|_CAUSE_NONE|macro|_CAUSE_NONE
DECL|_CAUSE_RIRQ|macro|_CAUSE_RIRQ
DECL|_callee_saved_stack_t|typedef|typedef struct _callee_saved_stack _callee_saved_stack_t;
DECL|_callee_saved_stack|struct|struct _callee_saved_stack {
DECL|_callee_saved_t|typedef|typedef struct _callee_saved _callee_saved_t;
DECL|_callee_saved|struct|struct _callee_saved {
DECL|_caller_saved_t|typedef|typedef struct _caller_saved _caller_saved_t;
DECL|_caller_saved|struct|struct _caller_saved {
DECL|_irq_stack_frame|struct|struct _irq_stack_frame {
DECL|_isf_t|typedef|typedef struct _irq_stack_frame _isf_t;
DECL|_kernel_arch_data__h_|macro|_kernel_arch_data__h_
DECL|_kernel_arch_t|typedef|typedef struct _kernel_arch _kernel_arch_t;
DECL|_kernel_arch|struct|struct _kernel_arch {
DECL|_thread_arch_t|typedef|typedef struct _thread_arch _thread_arch_t;
DECL|_thread_arch|struct|struct _thread_arch {
DECL|blink|member|u32_t blink;
DECL|ei_base|member|u32_t ei_base;
DECL|fp|member|u32_t fp; /* r27 */
DECL|intlock_key|member|u32_t intlock_key;
DECL|jli_base|member|u32_t jli_base;
DECL|ldi_base|member|u32_t ldi_base;
DECL|lp_count|member|u32_t lp_count;
DECL|lp_end|member|u32_t lp_end;
DECL|lp_start|member|u32_t lp_start;
DECL|pc|member|u32_t pc;
DECL|r0|member|u32_t r0;
DECL|r10|member|u32_t r10;
DECL|r11|member|u32_t r11;
DECL|r12|member|u32_t r12;
DECL|r13|member|u32_t r13;
DECL|r13|member|u32_t r13;
DECL|r14|member|u32_t r14;
DECL|r15|member|u32_t r15;
DECL|r16|member|u32_t r16;
DECL|r17|member|u32_t r17;
DECL|r18|member|u32_t r18;
DECL|r19|member|u32_t r19;
DECL|r1|member|u32_t r1;
DECL|r20|member|u32_t r20;
DECL|r21|member|u32_t r21;
DECL|r22|member|u32_t r22;
DECL|r23|member|u32_t r23;
DECL|r24|member|u32_t r24;
DECL|r25|member|u32_t r25;
DECL|r26|member|u32_t r26;
DECL|r2|member|u32_t r2;
DECL|r30|member|u32_t r30;
DECL|r3|member|u32_t r3;
DECL|r4|member|u32_t r4;
DECL|r5|member|u32_t r5;
DECL|r6|member|u32_t r6;
DECL|r7|member|u32_t r7;
DECL|r8|member|u32_t r8;
DECL|r9|member|u32_t r9;
DECL|relinquish_cause|member|int relinquish_cause;
DECL|return_value|member|unsigned int return_value;
DECL|rirq_sp|member|char *rirq_sp; /* regular IRQ stack pointer base */
DECL|sp|member|u32_t sp; /* r28 */
DECL|stack_top|member|u32_t stack_top;
DECL|status32|member|u32_t status32;
