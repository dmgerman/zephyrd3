DECL|BITS_PER_IRQ|macro|BITS_PER_IRQ
DECL|BIT_POS_FOR_IRQ_OPTION|macro|BIT_POS_FOR_IRQ_OPTION
DECL|IOAPIC_BITFIELD_ENBL_DSBL|macro|IOAPIC_BITFIELD_ENBL_DSBL
DECL|IOAPIC_BITFIELD_HI_LO|macro|IOAPIC_BITFIELD_HI_LO
DECL|IOAPIC_BITFIELD_LVL_EDGE|macro|IOAPIC_BITFIELD_LVL_EDGE
DECL|SUSPEND_BITS_REQD|macro|SUSPEND_BITS_REQD
DECL|_IoApicRedUpdateLo|function|static void _IoApicRedUpdateLo(unsigned int irq,u32_t value, u32_t mask)
DECL|__IoApicGet|function|static u32_t __IoApicGet(s32_t offset)
DECL|__IoApicSet|function|static void __IoApicSet(s32_t offset, u32_t value)
DECL|_ioapic_init|function|int _ioapic_init(struct device *unused)
DECL|_ioapic_int_vec_set|function|void _ioapic_int_vec_set(unsigned int irq, unsigned int vector)
DECL|_ioapic_irq_disable|function|void _ioapic_irq_disable(unsigned int irq)
DECL|_ioapic_irq_enable|function|void _ioapic_irq_enable(unsigned int irq)
DECL|_ioapic_irq_set|function|void _ioapic_irq_set(unsigned int irq, unsigned int vector, u32_t flags)
DECL|ioApicRedGetLo|function|static u32_t ioApicRedGetLo(unsigned int irq)
DECL|ioApicRedSetHi|function|static void ioApicRedSetHi(unsigned int irq, u32_t upper32)
DECL|ioApicRedSetLo|function|static void ioApicRedSetLo(unsigned int irq, u32_t lower32)
DECL|ioapic_device_ctrl|function|static int ioapic_device_ctrl(struct device *device, u32_t ctrl_command, void *context)
DECL|ioapic_device_power_state|variable|ioapic_device_power_state
DECL|ioapic_resume_from_suspend|function|int ioapic_resume_from_suspend(struct device *port)
DECL|ioapic_suspend_buf|variable|ioapic_suspend_buf
DECL|ioapic_suspend|function|int ioapic_suspend(struct device *port)
DECL|restore_flags|function|u32_t restore_flags(unsigned int irq)
DECL|store_flags|function|void store_flags(unsigned int irq, u32_t flags)
