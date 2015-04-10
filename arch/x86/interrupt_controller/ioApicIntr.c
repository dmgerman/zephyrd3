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
DECL|IOAPIC_LINE_INT_MASK0|macro|IOAPIC_LINE_INT_MASK0
DECL|IOAPIC_LINE_INT_MASK1|macro|IOAPIC_LINE_INT_MASK1
DECL|IOAPIC_LINE_INT_STAT0|macro|IOAPIC_LINE_INT_STAT0
DECL|IOAPIC_LINE_INT_STAT1|macro|IOAPIC_LINE_INT_STAT1
DECL|IOAPIC_MRE_MASK|macro|IOAPIC_MRE_MASK
DECL|IOAPIC_PRQ|macro|IOAPIC_PRQ
DECL|IOAPIC_REDIR_ADDR0|macro|IOAPIC_REDIR_ADDR0
DECL|IOAPIC_REDIR_ADDR1|macro|IOAPIC_REDIR_ADDR1
DECL|IOAPIC_REDIR_ADDR2|macro|IOAPIC_REDIR_ADDR2
DECL|IOAPIC_REDIR_ADDR3|macro|IOAPIC_REDIR_ADDR3
DECL|IOAPIC_REDIR_ADDR4|macro|IOAPIC_REDIR_ADDR4
DECL|IOAPIC_REDIR_ADDR5|macro|IOAPIC_REDIR_ADDR5
DECL|IOAPIC_REDIR_ADDR6|macro|IOAPIC_REDIR_ADDR6
DECL|IOAPIC_REDIR_ADDR7|macro|IOAPIC_REDIR_ADDR7
DECL|IOAPIC_REDTBL|macro|IOAPIC_REDTBL
DECL|IOAPIC_RTE0_CONFIG|macro|IOAPIC_RTE0_CONFIG
DECL|IOAPIC_RTE0_HIGH|macro|IOAPIC_RTE0_HIGH
DECL|IOAPIC_RTE0_LOW|macro|IOAPIC_RTE0_LOW
DECL|IOAPIC_RTE1_CONFIG|macro|IOAPIC_RTE1_CONFIG
DECL|IOAPIC_RTE1_HIGH|macro|IOAPIC_RTE1_HIGH
DECL|IOAPIC_RTE1_LOW|macro|IOAPIC_RTE1_LOW
DECL|IOAPIC_RTE2_CONFIG|macro|IOAPIC_RTE2_CONFIG
DECL|IOAPIC_RTE2_HIGH|macro|IOAPIC_RTE2_HIGH
DECL|IOAPIC_RTE2_LOW|macro|IOAPIC_RTE2_LOW
DECL|IOAPIC_RTE_CONFIG_BYPASS_MSI_DISABLE|macro|IOAPIC_RTE_CONFIG_BYPASS_MSI_DISABLE
DECL|IOAPIC_RTE_CONFIG_DISABLE_INT_EXT|macro|IOAPIC_RTE_CONFIG_DISABLE_INT_EXT
DECL|IOAPIC_RTE_CONFIG_LI0EN|macro|IOAPIC_RTE_CONFIG_LI0EN
DECL|IOAPIC_RTE_CONFIG_LI1EN|macro|IOAPIC_RTE_CONFIG_LI1EN
DECL|IOAPIC_RTE_CONFIG_LI2EN|macro|IOAPIC_RTE_CONFIG_LI2EN
DECL|IOAPIC_RTE_CONFIG_REDIR_SEL|macro|IOAPIC_RTE_CONFIG_REDIR_SEL
DECL|IOAPIC_VEC_MASK|macro|IOAPIC_VEC_MASK
DECL|IOAPIC_VERSION|macro|IOAPIC_VERSION
DECL|IOAPIC_VERS|macro|IOAPIC_VERS
DECL|MAX_REDTABLE_ENTRIES|macro|MAX_REDTABLE_ENTRIES
DECL|_IoApicRedUpdateLo|function|static void _IoApicRedUpdateLo(unsigned int irq, /* INTIN number */ uint32_t value, /* value to be written */ uint32_t mask /* mask of bits to be modified */ )
DECL|_IoApicRedirRegSet|function|static void _IoApicRedirRegSet(unsigned int reg, uint32_t value)
DECL|_IoApicRteConfigSet|function|static void _IoApicRteConfigSet(unsigned int irq, /* INTIN number */ uint32_t value /* value to be written */ )
DECL|__IoApicGet|function|static uint32_t __IoApicGet(int32_t offset /* register offset (8 bits) */ )
DECL|__IoApicSet|function|static void __IoApicSet(int32_t offset, /* register offset (8 bits) */ uint32_t value /* value to set the register */ )
DECL|_ioapic_eoi_get|function|void *_ioapic_eoi_get(unsigned int irq, /* INTIN number of interest */ char *argRequired, /* ptr to "argument required" result area */ void **arg /* ptr to "argument value" result area */ )
DECL|_ioapic_eoi|function|void _ioapic_eoi(unsigned int irq /* INT number to send EOI */ )
DECL|_ioapic_init|function|void _ioapic_init(void)
DECL|_ioapic_int_vec_set|function|void _ioapic_int_vec_set(unsigned int irq, /* INT number */ unsigned int vector /* vector number */ )
DECL|_ioapic_irq_disable|function|void _ioapic_irq_disable(unsigned int irq /* INTIN number to disable */ )
DECL|_ioapic_irq_enable|function|void _ioapic_irq_enable(unsigned int irq /* INTIN number to enable */ )
DECL|_ioapic_irq_set|function|void _ioapic_irq_set(unsigned int irq, /* virtualized IRQ */ unsigned int vector, /* vector number */ uint32_t flags /* interrupt flags */ )
DECL|ioApicRedGetLo|function|static uint32_t ioApicRedGetLo(unsigned int irq /* INTIN number */ )
DECL|ioApicRedSetHi|function|static void ioApicRedSetHi(unsigned int irq, /* INTIN number */ uint32_t upper32 /* value to be written */ )
DECL|ioApicRedSetLo|function|static void ioApicRedSetLo(unsigned int irq, /* INTIN number */ uint32_t lower32 /* value to be written */ )
