DECL|CTX_SELF_CMD|macro|CTX_SELF_CMD
DECL|CTX_TYPE_CMD|macro|CTX_TYPE_CMD
DECL|FIBER_PRIORITY|macro|FIBER_PRIORITY
DECL|FIBER_STACKSIZE|macro|FIBER_STACKSIZE
DECL|ISR_INFO|typedef|ISR_INFO;
DECL|NUM_SW_IRQS|macro|NUM_SW_IRQS
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|TICK_IRQ|macro|TICK_IRQ
DECL|UNKNOWN_COMMAND|macro|UNKNOWN_COMMAND
DECL|_trigger_isrHandler|variable|_trigger_isrHandler
DECL|command|member|int command; /* command to process */
DECL|data|member|void * data; /* pointer to data to use or return */
DECL|disable_interrupt_func|typedef|typedef int (* disable_interrupt_func)(int);
DECL|enable_interrupt_func|typedef|typedef void (* enable_interrupt_func)(int);
DECL|error|member|int error; /* error value (if any) */
DECL|excHandlerExecuted|variable|excHandlerExecuted
DECL|exc_divide_error_handler|function|void exc_divide_error_handler( NANO_ESF * pEsf )
DECL|fiberDetectedError|variable|fiberDetectedError
DECL|fiberEntry|function|static void fiberEntry( int taskCtxId, /* context ID of the spawning task */ int arg1 /* unused */ )
DECL|fiberEvidence|variable|fiberEvidence
DECL|fiberHelper|function|static void fiberHelper( int arg1, /* unused */ int arg2 /* unused */ )
DECL|fiberStack1|variable|fiberStack1
DECL|fiberStack2|variable|fiberStack2
DECL|fiber_yieldTest|function|int fiber_yieldTest (void)
DECL|initNanoObjects|function|int initNanoObjects (void)
DECL|irq_disableWrapper|function|int irq_disableWrapper( int irq )
DECL|irq_enableWrapper|function|void irq_enableWrapper( int irq )
DECL|irq_lockWrapper|function|int irq_lockWrapper( int unused )
DECL|irq_lock_inlineWrapper|function|int irq_lock_inlineWrapper( int unused )
DECL|irq_unlockWrapper|function|void irq_unlockWrapper( int imask )
DECL|irq_unlock_inlineWrapper|function|void irq_unlock_inlineWrapper( int imask )
DECL|isrInfo|variable|isrInfo
DECL|isr_handler|function|void isr_handler( void * data )
DECL|main|function|void main (void)
DECL|nanoCpuDisableInterruptsTest|function|int nanoCpuDisableInterruptsTest( disable_interrupt_func disableRtn, enable_interrupt_func enableRtn, int irq
DECL|nanoCtxFiberTest|function|int nanoCtxFiberTest( nano_context_id_t taskCtxId )
DECL|nanoCtxTaskTest|function|int nanoCtxTaskTest (void)
DECL|nano_cpu_idleTest|function|int nano_cpu_idleTest (void)
DECL|timerData|variable|timerData
DECL|timer|variable|timer
DECL|value|member|int value; /* value to be passed or returned */
DECL|wakeFiber|variable|wakeFiber
