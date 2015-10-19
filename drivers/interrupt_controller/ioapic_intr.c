DECL|IOAPIC_ARB|macro|IOAPIC_ARB
DECL|IOAPIC_BOOT|macro|IOAPIC_BOOT
DECL|IOAPIC_DATA|macro|IOAPIC_DATA
DECL|IOAPIC_DESTINATION|macro|IOAPIC_DESTINATION
DECL|IOAPIC_DT_APIC|macro|IOAPIC_DT_APIC
DECL|IOAPIC_DT_FS|macro|IOAPIC_DT_FS
DECL|IOAPIC_EOI|macro|IOAPIC_EOI
DECL|IOAPIC_ID|macro|IOAPIC_ID
DECL|IOAPIC_IND|macro|IOAPIC_IND
DECL|IOAPIC_IRQPA|macro|IOAPIC_IRQPA
DECL|IOAPIC_MRE_MASK|macro|IOAPIC_MRE_MASK
DECL|IOAPIC_PRQ|macro|IOAPIC_PRQ
DECL|IOAPIC_REDTBL|macro|IOAPIC_REDTBL
DECL|IOAPIC_VEC_MASK|macro|IOAPIC_VEC_MASK
DECL|IOAPIC_VERSION|macro|IOAPIC_VERSION
DECL|IOAPIC_VERS|macro|IOAPIC_VERS
DECL|MAX_REDTABLE_ENTRIES|macro|MAX_REDTABLE_ENTRIES
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
