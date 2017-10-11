DECL|_CAVS_ICTL_H_|macro|_CAVS_ICTL_H_
DECL|base_addr|member|u32_t base_addr;
DECL|cavs_ictl_config_irq_t|typedef|typedef void (*cavs_ictl_config_irq_t)(struct device *port);
DECL|cavs_ictl_config|struct|struct cavs_ictl_config {
DECL|cavs_ictl_runtime|struct|struct cavs_ictl_runtime {
DECL|cavs_registers|struct|struct cavs_registers {
DECL|config_func|member|cavs_ictl_config_irq_t config_func;
DECL|disable_il|member|u32_t disable_il; /* il_msd - offset 0x00 */
DECL|disable_state_il|member|u32_t disable_state_il; /* il_md - offset 0x08 */
DECL|enable_il|member|u32_t enable_il; /* il_mcd - offset 0x04 */
DECL|irq_num|member|u32_t irq_num;
DECL|isr_table_offset|member|u32_t isr_table_offset;
DECL|status_il|member|u32_t status_il; /* il_sd - offset 0x0C */
