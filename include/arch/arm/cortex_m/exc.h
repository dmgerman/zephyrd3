DECL|NANO_ESF|typedef|typedef struct __esf NANO_ESF;
DECL|_ARCH_ARM_CORTEXM_EXC_H_|macro|_ARCH_ARM_CORTEXM_EXC_H_
DECL|_ExcExit|variable|_ExcExit
DECL|__esf|struct|struct __esf {
DECL|fpscr|member|uint32_t fpscr;
DECL|sys_exc_handler_sig|macro|sys_exc_handler_sig
DECL|sys_exc_handler_t|typedef|typedef sys_exc_handler_sig(sys_exc_handler_t);
DECL|s|member|float s[16];
DECL|undefined|member|uint32_t undefined;
DECL|xpsr|member|uint32_t xpsr;
