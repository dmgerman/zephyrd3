DECL|TASK_IRQ_H|macro|TASK_IRQ_H
DECL|event|member|kevent_t event; /* event number assigned to task IRQ object */
DECL|irq|member|uint32_t irq; /* IRQ used by task IRQ object */
DECL|taskId|member|ktask_t taskId; /* task ID of task IRQ object's owner */
DECL|task_irq_info|struct|struct task_irq_info {
DECL|vector|member|uint32_t vector; /* interrupt vector assigned to task IRQ object */
