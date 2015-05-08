DECL|STUB_PTR|macro|STUB_PTR
DECL|VEC_ALLOC_NUM_INTS|macro|VEC_ALLOC_NUM_INTS
DECL|_IntVecAlloc|function|int _IntVecAlloc(unsigned int priority)
DECL|_IntVecMarkAllocated|function|void _IntVecMarkAllocated(unsigned int vector)
DECL|_IntVecMarkFree|function|void _IntVecMarkFree(unsigned int vector)
DECL|_IntVecSet|function|void _IntVecSet(unsigned int vector, /* interrupt vector: 0 to 255 on IA-32 */ void (*routine)(void *), unsigned int dpl /* priv level for interrupt-gate descriptor */ )
DECL|_SpuriousIntHandler|variable|_SpuriousIntHandler
DECL|_SpuriousIntNoErrCodeHandler|variable|_SpuriousIntNoErrCodeHandler
DECL|_VectorsAllocated|variable|_VectorsAllocated
DECL|__DummyExcEnt|variable|__DummyExcEnt
DECL|_dummy_spurious_interrupt|variable|_dummy_spurious_interrupt
DECL|irq_connect|function|int irq_connect(unsigned int irq, /* virtualized IRQ to connect to */ unsigned int priority, /* requested priority of interrupt */ void (*routine)(void *parameter), /* C interrupt handler */ void *parameter, /* parameter passed to C routine */
