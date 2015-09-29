DECL|api_funcs|variable|api_funcs
DECL|disable|function|static inline int disable(struct device *dev, struct device *isr_dev)
DECL|enable|function|static inline int enable(struct device *dev, struct device *isr_dev)
DECL|isr_register|function|static int isr_register(struct device *dev, isr_t isr_func, struct device *isr_dev)
DECL|last_enabled_isr|function|static int last_enabled_isr(struct shared_irq_runtime *clients, int count)
DECL|shared_irq_0_runtime|variable|shared_irq_0_runtime
DECL|shared_irq_1_runtime|variable|shared_irq_1_runtime
DECL|shared_irq_config_0_irq|function|void shared_irq_config_0_irq(struct device *port)
DECL|shared_irq_config_0|variable|shared_irq_config_0
DECL|shared_irq_config_1_irq|function|void shared_irq_config_1_irq(struct device *port)
DECL|shared_irq_config_1|variable|shared_irq_config_1
DECL|shared_irq_initialize|function|int shared_irq_initialize(struct device *dev)
DECL|shared_irq_isr_0|function|void shared_irq_isr_0(void *unused)
DECL|shared_irq_isr_1|function|void shared_irq_isr_1(void *unused)
DECL|shared_irq_isr|function|void shared_irq_isr(struct device *dev)
