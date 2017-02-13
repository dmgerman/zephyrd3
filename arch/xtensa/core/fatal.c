DECL|FatalErrorHandler|function|FUNC_NORETURN void FatalErrorHandler(void)
DECL|ReservedInterruptHandler|function|FUNC_NORETURN void ReservedInterruptHandler(unsigned int intNo)
DECL|_NanoFatalErrorHandler|function|FUNC_NORETURN void _NanoFatalErrorHandler(unsigned int reason, const NANO_ESF *pEsf)
DECL|_SysFatalErrorHandler|function|FUNC_NORETURN void _SysFatalErrorHandler(unsigned int reason, const NANO_ESF *pEsf)
DECL|_default_esf|variable|_default_esf
DECL|cause_str|function|static char *cause_str(unsigned int cause_code)
DECL|dump_exc_state|function|static void dump_exc_state(void)
DECL|get_bits|function|static inline unsigned int get_bits(int offset, int num_bits, unsigned int val)
DECL|get_sreg|macro|get_sreg
