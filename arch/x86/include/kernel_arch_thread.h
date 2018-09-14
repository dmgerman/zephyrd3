DECL|FP_REG_SET_ALIGN|macro|FP_REG_SET_ALIGN
DECL|FP_REG_SET_ALIGN|macro|FP_REG_SET_ALIGN
DECL|ZEPHYR_ARCH_X86_INCLUDE_KERNEL_ARCH_THREAD_H_|macro|ZEPHYR_ARCH_X86_INCLUDE_KERNEL_ARCH_THREAD_H_
DECL|__aligned|typedef|} tFpRegSet __aligned(FP_REG_SET_ALIGN);
DECL|__aligned|typedef|} tFpRegSetEx __aligned(FP_REG_SET_ALIGN);
DECL|_callee_saved_t|typedef|typedef struct _callee_saved _callee_saved_t;
DECL|_callee_saved|struct|struct _callee_saved {
DECL|_caller_saved_t|typedef|typedef struct _caller_saved _caller_saved_t;
DECL|_caller_saved|struct|struct _caller_saved {
DECL|_thread_arch_t|typedef|typedef struct _thread_arch _thread_arch_t;
DECL|_thread_arch|struct|struct _thread_arch {
DECL|coopFloatReg|member|tCoopFloatReg coopFloatReg; /* non-volatile float register storage */
DECL|cs|member|unsigned short cs; /* 2 : x87 FPU instruction pointer selector */
DECL|cs|member|unsigned short cs; /* 2 : x87 FPU instruction pointer selector */
DECL|ds|member|unsigned short ds; /* 2 : x87 FPU instr operand ptr selector */
DECL|ds|member|unsigned short ds; /* 2 : x87 FPU instr operand ptr selector */
DECL|esp|member|unsigned long esp;
DECL|excNestCount|member|unsigned excNestCount; /* nested exception count */
DECL|fcw|member|unsigned short fcw; /* 2 : x87 FPU control word */
DECL|fcw|member|unsigned short fcw; /* 2 : x87 FPU control word */
DECL|floatRegsUnion|member|} floatRegsUnion;
DECL|fop|member|unsigned short fop : 11; /* 2 : x87 FPU opcode */
DECL|fop|member|unsigned short fop; /* 2 : x87 FPU opcode */
DECL|fpRegsEx|member|tFpRegSetEx fpRegsEx;
DECL|fpRegs|member|tFpRegSet fpRegs;
DECL|fpReg|member|tFpReg fpReg[8]; /* 80 : ST0 -> ST7 */
DECL|fpReg|member|tFpRegEx fpReg[8]; /* 128 : x87 FPU/MMX registers */
DECL|fpudp|member|unsigned int fpudp; /* 4 : x87 FPU instr operand ptr offset */
DECL|fpudp|member|unsigned int fpudp; /* 4 : x87 FPU instr operand ptr offset */
DECL|fpuip|member|unsigned int fpuip; /* 4 : x87 FPU instruction pointer offset */
DECL|fpuip|member|unsigned int fpuip; /* 4 : x87 FPU instruction pointer offset */
DECL|fsw|member|unsigned short fsw; /* 2 : x87 FPU status word */
DECL|fsw|member|unsigned short fsw; /* 2 : x87 FPU status word */
DECL|ftw|member|unsigned char ftw; /* 1 : x87 FPU abridged tag word */
DECL|ftw|member|unsigned short ftw; /* 2 : x87 FPU tag word */
DECL|mxcsrMask|member|unsigned int mxcsrMask; /* 4 : MXCSR register mask */
DECL|mxcsr|member|unsigned int mxcsr; /* 4 : MXCSR register state */
DECL|pad1|member|unsigned short pad1; /* 2 : N/A */
DECL|pad2|member|unsigned short pad2; /* 2 : N/A */
DECL|pad3|member|unsigned short pad3; /* 2 : N/A */
DECL|pad4|member|unsigned short pad4 : 5; /* : 5 bits = 00000 */
DECL|pad5|member|unsigned short pad5; /* 2 : N/A */
DECL|preempFloatReg|member|tPreempFloatReg preempFloatReg; /* volatile float register storage */
DECL|reg|member|unsigned char reg[10]; /* 80 bits: ST[0-7] */
DECL|reg|member|unsigned char reg[10]; /* 80 bits: ST[0-7] or MM[0-7] */
DECL|reg|member|unsigned char reg[16]; /* 128 bits: XMM[0-7] */
DECL|rsrvd0|member|unsigned char rsrvd0; /* 1 : reserved */
DECL|rsrvd1|member|unsigned short rsrvd1; /* 2 : reserved */
DECL|rsrvd2|member|unsigned short rsrvd2; /* 2 : reserved */
DECL|rsrvd3|member|unsigned char rsrvd3[176]; /* 176 : reserved */
DECL|rsrvd|member|unsigned char rsrvd[6]; /* 48 bits: reserved */
DECL|s_FpRegEx|struct|typedef struct s_FpRegEx {
DECL|s_FpRegSetEx|struct|typedef struct s_FpRegSetEx /* # of bytes: name of register */
DECL|s_FpRegSetEx|struct|typedef struct s_FpRegSetEx {
DECL|s_FpRegSetEx|struct|typedef struct s_FpRegSetEx {
DECL|s_FpRegSet|struct|typedef struct s_FpRegSet {
DECL|s_FpRegSet|struct|typedef struct s_FpRegSet { /* # of bytes: name of register */
DECL|s_FpReg|struct|typedef struct s_FpReg {
DECL|s_XmmReg|struct|typedef struct s_XmmReg {
DECL|s_coopFloatReg|struct|typedef struct s_coopFloatReg {
DECL|s_preempFloatReg|struct|typedef struct s_preempFloatReg {
DECL|tCoopFloatReg|typedef|} tCoopFloatReg;
DECL|tFpRegEx|typedef|} tFpRegEx;
DECL|tFpRegSetEx|typedef|} tFpRegSetEx;
DECL|tFpRegSetEx|typedef|} tFpRegSetEx;
DECL|tFpRegSet|typedef|} tFpRegSet;
DECL|tFpReg|typedef|} tFpReg;
DECL|tPreempFloatReg|typedef|} tPreempFloatReg;
DECL|tXmmReg|typedef|} tXmmReg;
DECL|xmmReg|member|tXmmReg xmmReg[8]; /* 128 : XMM registers */
