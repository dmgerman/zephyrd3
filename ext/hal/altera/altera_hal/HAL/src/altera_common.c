DECL|ALTERA_MAX_IRQ|macro|ALTERA_MAX_IRQ
DECL|alt_busy_sleep|function|unsigned int alt_busy_sleep (unsigned int us)
DECL|alt_dev_llist_insert|function|int alt_dev_llist_insert (alt_dev_llist* dev, alt_llist* list)
DECL|alt_hal_isr|variable|alt_hal_isr
DECL|alt_handle_irq|function|void alt_handle_irq(void* base, alt_u32 id)
DECL|alt_ic_isr_register|function|int alt_ic_isr_register(alt_u32 ic_id, alt_u32 irq,alt_isr_func isr, void *isr_context, void *flags)
DECL|alt_irq_register|function|int alt_irq_register(alt_u32 irq, void* context, alt_isr_func isr)
DECL|alt_printf|function|void alt_printf(const char *fmt, ...)
DECL|alt_tick|function|void alt_tick (void)
