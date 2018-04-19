DECL|MAX_IRQS|macro|MAX_IRQS
DECL|METAL_IRQ_STOP|macro|METAL_IRQ_STOP
DECL|_irqs|variable|_irqs
DECL|dev|member|struct metal_device *dev; /**< metal device */
DECL|drv_id|member|void *drv_id; /**< id to identify the driver
DECL|hds|member|struct metal_irq_hddesc hds[MAX_IRQS]; /**< irqs handlers descriptor */
DECL|hd|member|metal_irq_handler hd; /**< irq handler */
DECL|irq_lock|member|metal_mutex_t irq_lock; /**< irq handling lock */
DECL|irq_pthread|member|pthread_t irq_pthread; /**< irq handling thread id */
DECL|irq_reg_fd|member|int irq_reg_fd; /**< irqs registration notification file
DECL|irq_reg_stat|member|signed char irq_reg_stat[MAX_IRQS]; /**< irqs registration statistics.
DECL|irq_state|member|unsigned int irq_state; /**< global irq handling state */
DECL|list|member|struct metal_list list; /**< handler list container */
DECL|metal_irq_disable|function|void metal_irq_disable(unsigned int vector)
DECL|metal_irq_enable|function|void metal_irq_enable(unsigned int vector)
DECL|metal_irq_hddesc|struct|struct metal_irq_hddesc {
DECL|metal_irq_register|function|int metal_irq_register(int irq, metal_irq_handler hd, struct metal_device *dev, void *drv_id)
DECL|metal_irq_restore_enable|function|void metal_irq_restore_enable(unsigned flags)
DECL|metal_irq_save_disable|function|unsigned int metal_irq_save_disable()
DECL|metal_irq_unregister|function|int metal_irq_unregister(int irq,metal_irq_handler hd, struct metal_device *dev, void *drv_id)
DECL|metal_irqs_state|struct|struct metal_irqs_state {
DECL|metal_linux_irq_handling|function|static void *metal_linux_irq_handling(void *args)
DECL|metal_linux_irq_init|function|int metal_linux_irq_init()
DECL|metal_linux_irq_shutdown|function|void metal_linux_irq_shutdown()
