DECL|INVALID_TASK|macro|INVALID_TASK
DECL|MAX_TASK_IRQS|macro|MAX_TASK_IRQS
DECL|RELEASE_VECTOR|macro|RELEASE_VECTOR
DECL|RELEASE_VECTOR|macro|RELEASE_VECTOR
DECL|_k_task_irq_alloc|function|static int _k_task_irq_alloc(void *arg /* ptr to registration request arguments */ )
DECL|_task_irq_test|function|int _task_irq_test(kirq_t irq_obj, /* IRQ object identifier */ int32_t time /* time to wait (in ticks) */ )
DECL|event|member|kevent_t event; /* event number assigned to task IRQ object */
DECL|irq_obj_reg_arg|struct|struct irq_obj_reg_arg {
DECL|irq_obj|member|kirq_t irq_obj; /* IRQ object identifier */
DECL|irq|member|uint32_t irq; /* IRQ of device */
DECL|irq|member|uint32_t irq; /* IRQ used by task IRQ object */
DECL|taskId|member|ktask_t taskId; /* requesting task */
DECL|taskId|member|ktask_t taskId; /* task ID of task IRQ object's owner */
DECL|task_irq_ack|function|void task_irq_ack(kirq_t irq_obj /* IRQ object identifier */ )
DECL|task_irq_alloc|function|uint32_t task_irq_alloc(kirq_t irq_obj, /* IRQ object identifier */ uint32_t irq, /* requested IRQ */ uint32_t priority /* requested interrupt priority */ )
DECL|task_irq_free|function|void task_irq_free(kirq_t irq_obj /* IRQ object identifier */ )
DECL|task_irq_info|struct|struct task_irq_info {
DECL|task_irq_int_handler|function|static void task_irq_int_handler(void *parameter /* ptr to task IRQ object */ )
DECL|task_irq_object|variable|task_irq_object
DECL|vector|member|uint32_t vector; /* interrupt vector assigned to task IRQ object */
