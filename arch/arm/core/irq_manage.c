DECL|IRQ_PRIORITY_OFFSET|macro|IRQ_PRIORITY_OFFSET
DECL|_arch_irq_connect_dynamic|function|int _arch_irq_connect_dynamic(unsigned int irq, unsigned int prio, void (*isr)(void *arg), void *arg, uint32_t flags)
DECL|_arch_irq_disable|function|void _arch_irq_disable(unsigned int irq)
DECL|_arch_irq_enable|function|void _arch_irq_enable(unsigned int irq)
DECL|_irq_disconnect|function|void _irq_disconnect(unsigned int irq)
DECL|_irq_handler_set|function|void _irq_handler_set(unsigned int irq,void (*new)(void *arg), void *arg)
DECL|_irq_priority_set|function|void _irq_priority_set(unsigned int irq, unsigned int prio, uint32_t flags)
DECL|_irq_spurious|function|void _irq_spurious(void *unused)
