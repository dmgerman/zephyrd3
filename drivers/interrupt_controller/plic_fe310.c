DECL|PLIC_FE310_EN_SIZE|macro|PLIC_FE310_EN_SIZE
DECL|PLIC_FE310_IRQS|macro|PLIC_FE310_IRQS
DECL|claim_complete|member|uint32_t claim_complete;
DECL|plic_fe310_init|function|static int plic_fe310_init(struct device *dev)
DECL|plic_fe310_irq_handler|function|static void plic_fe310_irq_handler(void *arg)
DECL|plic_fe310_regs_t|struct|struct plic_fe310_regs_t {
DECL|riscv_plic_get_irq|function|int riscv_plic_get_irq(void)
DECL|riscv_plic_irq_disable|function|void riscv_plic_irq_disable(uint32_t irq)
DECL|riscv_plic_irq_enable|function|void riscv_plic_irq_enable(uint32_t irq)
DECL|riscv_plic_irq_is_enabled|function|int riscv_plic_irq_is_enabled(uint32_t irq)
DECL|riscv_plic_set_priority|function|void riscv_plic_set_priority(uint32_t irq, uint32_t priority)
DECL|save_irq|variable|save_irq
DECL|threshold_prio|member|uint32_t threshold_prio;
