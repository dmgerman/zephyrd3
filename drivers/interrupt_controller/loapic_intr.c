DECL|EXT_MP_ENTRY_BHD|macro|EXT_MP_ENTRY_BHD
DECL|EXT_MP_ENTRY_CBASM|macro|EXT_MP_ENTRY_CBASM
DECL|EXT_MP_ENTRY_SASM|macro|EXT_MP_ENTRY_SASM
DECL|IMCR_ADRS|macro|IMCR_ADRS
DECL|IMCR_DATA|macro|IMCR_DATA
DECL|IMCR_IOAPIC_OFF|macro|IMCR_IOAPIC_OFF
DECL|IMCR_IOAPIC_ON|macro|IMCR_IOAPIC_ON
DECL|IMCR_REG_SEL|macro|IMCR_REG_SEL
DECL|LOAPIC_BASE_MASK|macro|LOAPIC_BASE_MASK
DECL|LOAPIC_EDGE|macro|LOAPIC_EDGE
DECL|LOAPIC_ENABLE|macro|LOAPIC_ENABLE
DECL|LOAPIC_EXT|macro|LOAPIC_EXT
DECL|LOAPIC_FIXED|macro|LOAPIC_FIXED
DECL|LOAPIC_FOCUS_DISABLE|macro|LOAPIC_FOCUS_DISABLE
DECL|LOAPIC_GLOBAL_ENABLE|macro|LOAPIC_GLOBAL_ENABLE
DECL|LOAPIC_HIGH|macro|LOAPIC_HIGH
DECL|LOAPIC_IDLE|macro|LOAPIC_IDLE
DECL|LOAPIC_ID_MASK|macro|LOAPIC_ID_MASK
DECL|LOAPIC_LEVEL|macro|LOAPIC_LEVEL
DECL|LOAPIC_LOW|macro|LOAPIC_LOW
DECL|LOAPIC_LVT_P5|macro|LOAPIC_LVT_P5
DECL|LOAPIC_LVT_P6|macro|LOAPIC_LVT_P6
DECL|LOAPIC_LVT_PENTIUM4|macro|LOAPIC_LVT_PENTIUM4
DECL|LOAPIC_MAXLVT_MASK|macro|LOAPIC_MAXLVT_MASK
DECL|LOAPIC_MODE|macro|LOAPIC_MODE
DECL|LOAPIC_NMI|macro|LOAPIC_NMI
DECL|LOAPIC_PEND|macro|LOAPIC_PEND
DECL|LOAPIC_PENTIUM4|macro|LOAPIC_PENTIUM4
DECL|LOAPIC_READ|function|static ALWAYS_INLINE u32_t LOAPIC_READ(mem_addr_t addr)
DECL|LOAPIC_REMOTE|macro|LOAPIC_REMOTE
DECL|LOAPIC_SMI|macro|LOAPIC_SMI
DECL|LOAPIC_SPURIOUS_VECTOR_ID|macro|LOAPIC_SPURIOUS_VECTOR_ID
DECL|LOAPIC_SPURIOUS_VECTOR_ID|macro|LOAPIC_SPURIOUS_VECTOR_ID
DECL|LOAPIC_VECTOR|macro|LOAPIC_VECTOR
DECL|LOAPIC_VERSION_MASK|macro|LOAPIC_VERSION_MASK
DECL|LOAPIC_WRITE|function|static ALWAYS_INLINE void LOAPIC_WRITE(mem_addr_t addr, u32_t data)
DECL|LOCKED_ERROR|macro|LOCKED_ERROR
DECL|LOCKED_LINT0|macro|LOCKED_LINT0
DECL|LOCKED_LINT1|macro|LOCKED_LINT1
DECL|LOCKED_PMC|macro|LOCKED_PMC
DECL|LOCKED_THERMAL|macro|LOCKED_THERMAL
DECL|LOCKED_TIMER|macro|LOCKED_TIMER
DECL|LOPIC_SSPND_BITS_PER_IRQ|macro|LOPIC_SSPND_BITS_PER_IRQ
DECL|LOPIC_SUSPEND_BITS_REQD|macro|LOPIC_SUSPEND_BITS_REQD
DECL|MODE_FIXED|macro|MODE_FIXED
DECL|MODE_INIT|macro|MODE_INIT
DECL|MODE_LOWEST|macro|MODE_LOWEST
DECL|MODE_NMI|macro|MODE_NMI
DECL|MODE_SMI|macro|MODE_SMI
DECL|MODE_STARTUP|macro|MODE_STARTUP
DECL|MP_CPU_FLAGS_BP|macro|MP_CPU_FLAGS_BP
DECL|MP_ENTRY_BUS|macro|MP_ENTRY_BUS
DECL|MP_ENTRY_CPU|macro|MP_ENTRY_CPU
DECL|MP_ENTRY_IOAPIC|macro|MP_ENTRY_IOAPIC
DECL|MP_ENTRY_IOINTERRUPT|macro|MP_ENTRY_IOINTERRUPT
DECL|MP_ENTRY_LOINTERRUPT|macro|MP_ENTRY_LOINTERRUPT
DECL|STATUS_PEND|macro|STATUS_PEND
DECL|__irq_controller_isr_vector_get|function|int __irq_controller_isr_vector_get(void)
DECL|_loapic_init|function|static int _loapic_init(struct device *unused)
DECL|_loapic_int_vec_set|function|void _loapic_int_vec_set(unsigned int irq, /* IRQ number of the interrupt */ unsigned int vector /* vector to copy into the LVT */ )
DECL|_loapic_irq_disable|function|void _loapic_irq_disable(unsigned int irq)
DECL|_loapic_irq_enable|function|void _loapic_irq_enable(unsigned int irq)
DECL|loapic_device_ctrl|function|static int loapic_device_ctrl(struct device *port, u32_t ctrl_command, void *context)
DECL|loapic_device_power_state|variable|loapic_device_power_state
DECL|loapic_resume|function|int loapic_resume(struct device *port)
DECL|loapic_suspend_buf|variable|loapic_suspend_buf
DECL|loapic_suspend|function|static int loapic_suspend(struct device *port)
