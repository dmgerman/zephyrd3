DECL|_SysIntVecAlloc|function|int _SysIntVecAlloc(unsigned int irq, /* virtualized IRQ */ unsigned int priority, /* get vector from <priority> group */ uint32_t flags /* interrupt flags */ )
DECL|_SysIntVecProgram|function|void _SysIntVecProgram(unsigned int vector, unsigned int irq, uint32_t flags)
DECL|irq_disable|function|void irq_disable(unsigned int irq)
DECL|irq_enable|function|void irq_enable(unsigned int irq)
