DECL|_arch_irq_disable|function|void _arch_irq_disable(unsigned int irq)
DECL|_arch_irq_enable|function|void _arch_irq_enable(unsigned int irq)
DECL|_arch_irq_is_enabled|function|int _arch_irq_is_enabled(unsigned int irq)
DECL|_arch_irq_lock|function|unsigned int _arch_irq_lock(void)
DECL|_arch_irq_unlock|function|void _arch_irq_unlock(unsigned int key)
DECL|_irq_priority_set|function|void _irq_priority_set(unsigned int irq, unsigned int prio, uint32_t flags)
DECL|_isr_declare|function|void _isr_declare(unsigned int irq_p, int flags, void isr_p(void *),void *isr_param_p)
DECL|currently_running_irq|variable|currently_running_irq
DECL|direct_irq_f_ptr|typedef|typedef int (*direct_irq_f_ptr)(void);
DECL|irq_offload|function|void irq_offload(irq_offload_routine_t routine, void *parameter)
DECL|irq_vector_table|variable|irq_vector_table
DECL|isr_table_entry_t|typedef|typedef struct _isr_list isr_table_entry_t;
DECL|normal_irq_f_ptr|typedef|typedef void (*normal_irq_f_ptr)(void *);
DECL|off_parameter|variable|off_parameter
DECL|off_routine|variable|off_routine
DECL|offload_sw_irq_handler|function|static void offload_sw_irq_handler(void *a)
DECL|posix_get_current_irq|function|int posix_get_current_irq(void)
DECL|posix_irq_full_unlock|function|void posix_irq_full_unlock(void)
DECL|posix_irq_handler_im_from_sw|function|void posix_irq_handler_im_from_sw(void)
DECL|posix_irq_handler|function|void posix_irq_handler(void)
DECL|posix_irq_lock|function|unsigned int posix_irq_lock(void)
DECL|posix_irq_unlock|function|void posix_irq_unlock(unsigned int key)
DECL|posix_sw_clear_pending_IRQ|function|void posix_sw_clear_pending_IRQ(unsigned int IRQn)
DECL|posix_sw_set_pending_IRQ|function|void posix_sw_set_pending_IRQ(unsigned int IRQn)
DECL|vector_to_irq|function|static inline void vector_to_irq(int irq_nbr, int *may_swap)
