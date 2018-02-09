DECL|FatalErrorHandler|function|XTENSA_ERR_NORET void FatalErrorHandler(void)
DECL|ReservedInterruptHandler|function|XTENSA_ERR_NORET void ReservedInterruptHandler(unsigned int intNo)
DECL|_NanoFatalErrorHandler|function|XTENSA_ERR_NORET void _NanoFatalErrorHandler(unsigned int reason, const NANO_ESF *pEsf)
DECL|_SysFatalErrorHandler|function|XTENSA_ERR_NORET __weak void _SysFatalErrorHandler(unsigned int reason, const NANO_ESF *pEsf)
DECL|_default_esf|variable|_default_esf
DECL|cause_str|function|static char *cause_str(unsigned int cause_code)
DECL|dump_exc_state|function|static void dump_exc_state(void)
DECL|exit|function|void exit(int return_code)
DECL|get_bits|function|static inline unsigned int get_bits(int offset, int num_bits, unsigned int val)
DECL|get_sreg|macro|get_sreg
