DECL|_SysIntVecAlloc|function|int _SysIntVecAlloc(unsigned int irq, /* virtualized IRQ */ unsigned int priority, /* get vector from <priority> group */ NANO_EOI_GET_FUNC * boiRtn, /* ptr to BOI routine
DECL|_SysIntVecProgram|function|void _SysIntVecProgram(unsigned int vector, /* vector number */ unsigned int irq /* virtualized IRQ */ )
DECL|irq_disable|function|void irq_disable(unsigned int irq)
DECL|irq_enable|function|void irq_enable(unsigned int irq)
