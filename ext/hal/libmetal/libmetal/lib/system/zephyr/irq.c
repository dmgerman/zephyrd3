DECL|_irqs|variable|_irqs
DECL|dev|member|struct metal_device *dev; /**< device identifier */
DECL|drv_id|member|void *drv_id; /**< id to identify the driver
DECL|hdls|member|struct metal_list hdls; /**< interrupt handlers */
DECL|hd|member|metal_irq_handler hd; /**< irq handler */
DECL|irq_lock|member|metal_mutex_t irq_lock; /**< access lock */
DECL|irqs|member|struct metal_list irqs; /**< interrupt descriptors */
DECL|irq|member|int irq; /**< interrupt number */
DECL|metal_irq_delete_node|function|static void metal_irq_delete_node(struct metal_list *node, void *p_to_free)
DECL|metal_irq_desc|struct|struct metal_irq_desc {
DECL|metal_irq_disable|function|void metal_irq_disable(unsigned int vector)
DECL|metal_irq_enable|function|void metal_irq_enable(unsigned int vector)
DECL|metal_irq_hddesc|struct|struct metal_irq_hddesc {
DECL|metal_irq_isr|function|void metal_irq_isr(unsigned int vector)
DECL|metal_irq_register|function|int metal_irq_register(int irq, metal_irq_handler hd, struct metal_device *dev, void *drv_id)
DECL|metal_irq_restore_enable|function|void metal_irq_restore_enable(unsigned int flags)
DECL|metal_irq_save_disable|function|unsigned int metal_irq_save_disable(void)
DECL|metal_irq_unregister|function|int metal_irq_unregister(int irq, metal_irq_handler hd, struct metal_device *dev, void *drv_id)
DECL|metal_irqs_state|struct|struct metal_irqs_state {
DECL|node|member|struct metal_list node; /**< node on irq handlers list */
DECL|node|member|struct metal_list node; /**< node on irqs list */
