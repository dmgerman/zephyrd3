DECL|claim_complete|member|u32_t claim_complete;
DECL|plic_init|function|static int plic_init(struct device *dev)
DECL|plic_irq_handler|function|static void plic_irq_handler(void *arg)
DECL|plic_regs_t|struct|struct plic_regs_t {
DECL|riscv_plic_get_irq|function|int riscv_plic_get_irq(void)
DECL|riscv_plic_irq_disable|function|void riscv_plic_irq_disable(u32_t irq)
DECL|riscv_plic_irq_enable|function|void riscv_plic_irq_enable(u32_t irq)
DECL|riscv_plic_irq_is_enabled|function|int riscv_plic_irq_is_enabled(u32_t irq)
DECL|riscv_plic_set_priority|function|void riscv_plic_set_priority(u32_t irq, u32_t priority)
DECL|save_irq|variable|save_irq
DECL|threshold_prio|member|u32_t threshold_prio;
