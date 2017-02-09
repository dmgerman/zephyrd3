DECL|IRQ_TABLE_SIZE|macro|IRQ_TABLE_SIZE
DECL|ISR_FLAG_DIRECT|macro|ISR_FLAG_DIRECT
DECL|_ISR_DECLARE|macro|_ISR_DECLARE
DECL|_MK_ISR_NAME|macro|_MK_ISR_NAME
DECL|_SW_ISR_TABLE__H_|macro|_SW_ISR_TABLE__H_
DECL|_isr_list|struct|struct _isr_list {
DECL|_isr_table_entry|struct|struct _isr_table_entry {
DECL|arg|member|void *arg;
DECL|flags|member|int32_t flags;
DECL|func|member|void *func;
DECL|irq|member|int32_t irq;
DECL|isr|member|void (*isr)(void *);
DECL|param|member|void *param;
