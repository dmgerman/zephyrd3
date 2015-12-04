DECL|IOAPIC_DATA|macro|IOAPIC_DATA
DECL|IOAPIC_IND|macro|IOAPIC_IND
DECL|LOAPIC_ENABLE|macro|LOAPIC_ENABLE
DECL|LOAPIC_MVIC_ISR|macro|LOAPIC_MVIC_ISR
DECL|LOAPIC_VECTOR|macro|LOAPIC_VECTOR
DECL|MVIC_HIGH_NIBBLE_MASK|macro|MVIC_HIGH_NIBBLE_MASK
DECL|MVIC_LOW_NIBBLE_MASK|macro|MVIC_LOW_NIBBLE_MASK
DECL|_ioapic_eoi_get|function|void *_ioapic_eoi_get(unsigned int irq, char *argRequired, void **arg)
DECL|_ioapic_eoi|function|void _ioapic_eoi(unsigned int irq)
DECL|_ioapic_int_vec_set|function|void _ioapic_int_vec_set(unsigned int irq, unsigned int vector)
DECL|_ioapic_irq_disable|function|void _ioapic_irq_disable(unsigned int irq)
DECL|_ioapic_irq_enable|function|void _ioapic_irq_enable(unsigned int irq)
DECL|_ioapic_irq_set|function|void _ioapic_irq_set(unsigned int irq, unsigned int vector, uint32_t flags)
DECL|_loapic_disable|function|void _loapic_disable(void)
DECL|_loapic_enable|function|void _loapic_enable(void)
DECL|_loapic_int_vec_set|function|void _loapic_int_vec_set(unsigned int irq, unsigned int vector)
DECL|_loapic_irq_disable|function|void _loapic_irq_disable(unsigned int irq)
DECL|_loapic_irq_enable|function|void _loapic_irq_enable(unsigned int irq)
DECL|_loapic_isr_vector_get|function|int _loapic_isr_vector_get(void)
DECL|_mvic_init|function|int _mvic_init(struct device *unused)
DECL|_mvic_rte_get|function|static uint32_t _mvic_rte_get(unsigned int irq)
DECL|_mvic_rte_set|function|static void _mvic_rte_set(unsigned int irq, uint32_t value)
DECL|_mvic_rte_update|function|static void _mvic_rte_update(unsigned int irq, uint32_t value, uint32_t mask)
