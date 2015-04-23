DECL|_irq_spurious|function|void _irq_spurious(void *unused)
DECL|irq_connect|function|int irq_connect(unsigned int irq, unsigned int prio, void (*isr)(void *arg), void *arg
DECL|irq_disable|function|void irq_disable(unsigned int irq)
DECL|irq_disconnect|function|void irq_disconnect(unsigned int irq)
DECL|irq_enable|function|void irq_enable(unsigned int irq)
DECL|irq_handler_set|function|void irq_handler_set(unsigned int irq, void (*old)(void *arg), void (*new)(void *arg), void *arg
DECL|irq_priority_set|function|void irq_priority_set(unsigned int irq, unsigned int prio )
