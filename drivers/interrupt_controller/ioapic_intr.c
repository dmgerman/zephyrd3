DECL|_IoApicRedUpdateLo|function|static void _IoApicRedUpdateLo(unsigned int irq,uint32_t value, uint32_t mask)
DECL|__IoApicGet|function|static uint32_t __IoApicGet(int32_t offset)
DECL|__IoApicSet|function|static void __IoApicSet(int32_t offset, uint32_t value)
DECL|_ioapic_init|function|int _ioapic_init(struct device *unused)
DECL|_ioapic_int_vec_set|function|void _ioapic_int_vec_set(unsigned int irq, unsigned int vector)
DECL|_ioapic_irq_disable|function|void _ioapic_irq_disable(unsigned int irq)
DECL|_ioapic_irq_enable|function|void _ioapic_irq_enable(unsigned int irq)
DECL|_ioapic_irq_set|function|void _ioapic_irq_set(unsigned int irq, unsigned int vector, uint32_t flags)
DECL|ioApicRedGetLo|function|static uint32_t ioApicRedGetLo(unsigned int irq)
DECL|ioApicRedSetHi|function|static void ioApicRedSetHi(unsigned int irq, uint32_t upper32)
DECL|ioApicRedSetLo|function|static void ioApicRedSetLo(unsigned int irq, uint32_t lower32)
