DECL|IRQ_TABLE_SIZE|macro|IRQ_TABLE_SIZE
DECL|ISR_FLAG_DIRECT|macro|ISR_FLAG_DIRECT
DECL|ZEPHYR_INCLUDE_SW_ISR_TABLE_H_|macro|ZEPHYR_INCLUDE_SW_ISR_TABLE_H_
DECL|_ISR_DECLARE|macro|_ISR_DECLARE
DECL|_MK_ISR_NAME|macro|_MK_ISR_NAME
DECL|_isr_list|struct|struct _isr_list {
DECL|_isr_table_entry|struct|struct _isr_table_entry {
DECL|arg|member|void *arg;
DECL|flags|member|s32_t flags;
DECL|func|member|void *func;
DECL|irq|member|s32_t irq;
DECL|isr|member|void (*isr)(void *);
DECL|param|member|void *param;
