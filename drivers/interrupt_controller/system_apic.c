DECL|HARDWARE_IRQ_LIMIT|macro|HARDWARE_IRQ_LIMIT
DECL|HARDWARE_IRQ_LIMIT|macro|HARDWARE_IRQ_LIMIT
DECL|IS_IOAPIC_IRQ|macro|IS_IOAPIC_IRQ
DECL|IS_IOAPIC_IRQ|macro|IS_IOAPIC_IRQ
DECL|LOAPIC_IRQ_BASE|macro|LOAPIC_IRQ_BASE
DECL|LOAPIC_IRQ_COUNT|macro|LOAPIC_IRQ_COUNT
DECL|_SysIntVecAlloc|function|int _SysIntVecAlloc(unsigned int irq, /* virtualized IRQ */ unsigned int priority, /* get vector from <priority> group */ uint32_t flags /* interrupt flags */ )
DECL|_SysIntVecProgram|function|void _SysIntVecProgram(unsigned int vector, unsigned int irq, uint32_t flags)
DECL|__LocalIntVecAlloc|function|static int __LocalIntVecAlloc(unsigned int irq, /* virtualized IRQ */ unsigned int priority/* get vector from <priority> group */ )
DECL|handle_fixed_mapping|function|static inline int handle_fixed_mapping(int irq, int *vector)
DECL|handle_fixed_mapping|function|static inline int handle_fixed_mapping(int irq, int *vector)
DECL|irq_disable|function|void irq_disable(unsigned int irq)
DECL|irq_enable|function|void irq_enable(unsigned int irq)
