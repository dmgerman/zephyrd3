DECL|INVALID_TASK|macro|INVALID_TASK
DECL|MAX_TASK_IRQS|macro|MAX_TASK_IRQS
DECL|_k_task_irq_alloc|function|static int _k_task_irq_alloc(void *arg)
DECL|event|member|kevent_t event; /* event number assigned to task IRQ object */
DECL|irq_obj_reg_arg|struct|struct irq_obj_reg_arg {
DECL|irq_obj|member|kirq_t irq_obj; /* IRQ object identifier */
DECL|irq|member|uint32_t irq; /* IRQ of device */
DECL|irq|member|uint32_t irq; /* IRQ used by task IRQ object */
DECL|task_id|member|ktask_t task_id; /* requesting task */
DECL|task_id|member|ktask_t task_id; /* task ID of task IRQ object's owner */
DECL|task_irq_ack|function|void task_irq_ack(kirq_t irq_obj)
DECL|task_irq_alloc|function|uint32_t task_irq_alloc(kirq_t irq_obj, uint32_t irq, uint32_t priority,uint32_t flags)
DECL|task_irq_info|struct|struct task_irq_info {
DECL|task_irq_int_handler|function|static void task_irq_int_handler(void *parameter)
DECL|task_irq_object|variable|task_irq_object
DECL|task_irq_wait|function|int task_irq_wait(kirq_t irq_obj, int32_t timeout)
DECL|vector|member|uint32_t vector; /* interrupt vector assigned to task IRQ object */
