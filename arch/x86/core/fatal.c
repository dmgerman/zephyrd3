DECL|EXC_FUNC_CODE|macro|EXC_FUNC_CODE
DECL|EXC_FUNC_NOCODE|macro|EXC_FUNC_NOCODE
DECL|ID|macro|ID
DECL|IV_ALIGNMENT_CHECK|variable|IV_ALIGNMENT_CHECK
DECL|IV_BOUND_RANGE|variable|IV_BOUND_RANGE
DECL|IV_DEVICE_NOT_AVAILABLE|variable|IV_DEVICE_NOT_AVAILABLE
DECL|IV_DIVIDE_ERROR|variable|IV_DIVIDE_ERROR
DECL|IV_DOUBLE_FAULT|variable|IV_DOUBLE_FAULT
DECL|IV_GENERAL_PROTECTION|variable|IV_GENERAL_PROTECTION
DECL|IV_INVALID_OPCODE|variable|IV_INVALID_OPCODE
DECL|IV_INVALID_TSS|variable|IV_INVALID_TSS
DECL|IV_MACHINE_CHECK|variable|IV_MACHINE_CHECK
DECL|IV_NON_MASKABLE_INTERRUPT|variable|IV_NON_MASKABLE_INTERRUPT
DECL|IV_OVERFLOW|variable|IV_OVERFLOW
DECL|IV_SEGMENT_NOT_PRESENT|variable|IV_SEGMENT_NOT_PRESENT
DECL|IV_STACK_FAULT|variable|IV_STACK_FAULT
DECL|IV_X87_FPU_FP_ERROR|variable|IV_X87_FPU_FP_ERROR
DECL|PK|macro|PK
DECL|PRESENT|macro|PRESENT
DECL|RSVD|macro|RSVD
DECL|SGX|macro|SGX
DECL|US|macro|US
DECL|WR|macro|WR
DECL|_EXC_FUNC_CODE|macro|_EXC_FUNC_CODE
DECL|_EXC_FUNC_NOCODE|macro|_EXC_FUNC_NOCODE
DECL|_EXC_FUNC|macro|_EXC_FUNC
DECL|_NanoFatalErrorHandler|function|FUNC_NORETURN void _NanoFatalErrorHandler(unsigned int reason, const NANO_ESF *pEsf)
DECL|_debug_fatal_hook|function|__weak void _debug_fatal_hook(const NANO_ESF *esf) { ARG_UNUSED(esf); }
DECL|_default_esf|variable|_default_esf
DECL|_df_tss|variable|_df_tss
DECL|_do_kernel_oops|function|FUNC_NORETURN void _do_kernel_oops(const struct oops_esf *esf)
DECL|_main_tss|variable|_main_tss
DECL|df_handler|function|void df_handler(void)
DECL|df_stack|variable|df_stack
DECL|generic_exc_handle|function|static FUNC_NORETURN void generic_exc_handle(unsigned int vector, const NANO_ESF *pEsf)
DECL|nano_esf|member|NANO_ESF nano_esf;
DECL|oops_esf|struct|struct oops_esf {
DECL|page_fault_handler|function|FUNC_NORETURN void page_fault_handler(const NANO_ESF *pEsf)
DECL|reason|member|unsigned int reason;
