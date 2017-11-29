DECL|_ARC_V2_IRQ_VECT_BASE|macro|_ARC_V2_IRQ_VECT_BASE
DECL|_ARC_V2_IRQ_VECT_BASE|macro|_ARC_V2_IRQ_VECT_BASE
DECL|_arc_v2_irq_unit_device_ctrl|function|static int _arc_v2_irq_unit_device_ctrl(struct device *device,u32_t ctrl_command, void *context)
DECL|_arc_v2_irq_unit_device_power_state|variable|_arc_v2_irq_unit_device_power_state
DECL|_arc_v2_irq_unit_get_state|function|static int _arc_v2_irq_unit_get_state(struct device *dev)
DECL|_arc_v2_irq_unit_init|function|static int _arc_v2_irq_unit_init(struct device *unused)
DECL|_arc_v2_irq_unit_int_eoi|function|void _arc_v2_irq_unit_int_eoi(int irq)
DECL|_arc_v2_irq_unit_resume|function|static int _arc_v2_irq_unit_resume(struct device *dev)
DECL|_arc_v2_irq_unit_suspend|function|static int _arc_v2_irq_unit_suspend(struct device *dev)
DECL|_arc_v2_irq_unit_trigger_get|function|unsigned int _arc_v2_irq_unit_trigger_get(int irq)
DECL|_arc_v2_irq_unit_trigger_set|function|void _arc_v2_irq_unit_trigger_set(int irq, unsigned int trigger)
DECL|arc_v2_irq_unit_ctx|struct|struct arc_v2_irq_unit_ctx {
DECL|ctx|variable|ctx
DECL|irq_config|member|u8_t irq_config[CONFIG_NUM_IRQS - 16];
DECL|irq_ctrl|member|u32_t irq_ctrl; /* Interrupt Context Saving Control Register. */
DECL|irq_vect_base|member|u32_t irq_vect_base; /* Interrupt Vector Base. */
