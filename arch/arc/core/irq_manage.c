DECL|_irq_disconnect|function|void _irq_disconnect(unsigned int irq)
DECL|_irq_handler_set|function|void _irq_handler_set(unsigned int irq, void (*new)(void *arg), void *arg )
DECL|_irq_priority_set|function|void _irq_priority_set(unsigned int irq, unsigned int prio )
DECL|_irq_spurious|function|void _irq_spurious(void *unused)
DECL|irq_connect_dynamic|function|int irq_connect_dynamic(unsigned int irq, unsigned int prio, void (*isr)(void *arg), void *arg,
DECL|irq_disable|function|void irq_disable(unsigned int irq)
DECL|irq_enable|function|void irq_enable(unsigned int irq)
