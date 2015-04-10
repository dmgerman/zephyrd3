DECL|STUB_PTR|macro|STUB_PTR
DECL|_NanoCpuExcConnectAtDpl|function|void _NanoCpuExcConnectAtDpl(unsigned int vector, /* interrupt vector: 0 to 255 on IA-32 */ void (*routine)(NANO_ESF * pEsf), NANO_EXC_STUB pExcStubMem, unsigned int dpl /* priv level for interrupt-gate descriptor */
DECL|nanoCpuExcConnect|function|void nanoCpuExcConnect(unsigned int vector, /* interrupt vector: 0 to 255 on IA-32 */ void (*routine)(NANO_ESF * pEsf), NANO_EXC_STUB pExcStubMem)
