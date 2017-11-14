DECL|ALT_IRQ_DISABLED|macro|ALT_IRQ_DISABLED
DECL|ALT_IRQ_ENABLED|macro|ALT_IRQ_ENABLED
DECL|ALT_NIRQ|macro|ALT_NIRQ
DECL|__ALT_IRQ_H__|macro|__ALT_IRQ_H__
DECL|alt_irq_context|typedef|typedef int alt_irq_context;
DECL|alt_irq_cpu_enable_interrupts|function|alt_irq_cpu_enable_interrupts (void)
DECL|alt_irq_disable_all|function|alt_irq_disable_all (void)
DECL|alt_irq_enable_all|function|alt_irq_enable_all (alt_irq_context context)
DECL|alt_irq_enabled|function|static ALT_INLINE int ALT_ALWAYS_INLINE alt_irq_enabled (void)
DECL|alt_irq_pending|function|static ALT_INLINE alt_u32 ALT_ALWAYS_INLINE alt_irq_pending (void)
DECL|alt_isr_func|typedef|typedef void (*alt_isr_func)(void* isr_context);
DECL|alt_isr_func|typedef|typedef void (*alt_isr_func)(void* isr_context, alt_u32 id);
