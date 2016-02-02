DECL|_IntVecAlloc|function|int _IntVecAlloc(unsigned int requested_priority)
DECL|_IntVecMarkAllocated|function|void _IntVecMarkAllocated(unsigned int vector)
DECL|_IntVecMarkFree|function|void _IntVecMarkFree(unsigned int vector)
DECL|_IntVecSet|function|void _IntVecSet(unsigned int vector, void (*routine)(void *), unsigned int dpl)
DECL|_SpuriousIntHandler|variable|_SpuriousIntHandler
DECL|_SpuriousIntNoErrCodeHandler|variable|_SpuriousIntNoErrCodeHandler
DECL|_common_dynamic_irq_handler|function|void _common_dynamic_irq_handler(uint32_t stub_idx)
DECL|_dummy_exception_vector_stub|variable|_dummy_exception_vector_stub
DECL|_dummy_spurious_interrupt|variable|_dummy_spurious_interrupt
DECL|_irq_handler_set|function|void _irq_handler_set(unsigned int vector, void (*routine)(void *parameter), void *parameter)
DECL|dyn_irq_info|struct|struct dyn_irq_info {
DECL|dyn_irq_list|variable|dyn_irq_list
DECL|handler|member|void (*handler)(void *param);
DECL|irq_connect_dynamic|function|int irq_connect_dynamic(unsigned int irq, unsigned int priority,void (*routine)(void *parameter), void *parameter, uint32_t flags)
DECL|next_irq_stub|variable|next_irq_stub
DECL|param|member|void *param;
