DECL|GPIO_SCH_POLLING_STACK_SIZE|macro|GPIO_SCH_POLLING_STACK_SIZE
DECL|GPIO_SCH_POLLING_TICKS|macro|GPIO_SCH_POLLING_TICKS
DECL|GPIO_SCH_REG_GEN|macro|GPIO_SCH_REG_GEN
DECL|GPIO_SCH_REG_GGPE|macro|GPIO_SCH_REG_GGPE
DECL|GPIO_SCH_REG_GIO|macro|GPIO_SCH_REG_GIO
DECL|GPIO_SCH_REG_GLVL|macro|GPIO_SCH_REG_GLVL
DECL|GPIO_SCH_REG_GSMI|macro|GPIO_SCH_REG_GSMI
DECL|GPIO_SCH_REG_GTNE|macro|GPIO_SCH_REG_GTNE
DECL|GPIO_SCH_REG_GTPE|macro|GPIO_SCH_REG_GTPE
DECL|GPIO_SCH_REG_GTS|macro|GPIO_SCH_REG_GTS
DECL|__GPIO_SCH_H__|macro|__GPIO_SCH_H__
DECL|bits|member|uint8_t bits;
DECL|callback|member|gpio_callback_t callback;
DECL|cb_enabled|member|uint32_t cb_enabled;
DECL|gpio_sch_config|struct|struct gpio_sch_config {
DECL|gpio_sch_data|struct|struct gpio_sch_data {
DECL|gtne|member|uint32_t gtne;
DECL|gtpe|member|uint32_t gtpe;
DECL|int_regs|member|} int_regs;
DECL|poll_timer|member|struct nano_timer poll_timer;
DECL|polling_stack|member|char __stack polling_stack[GPIO_SCH_POLLING_STACK_SIZE];
DECL|poll|member|uint8_t poll;
DECL|port_cb|member|uint8_t port_cb;
DECL|regs|member|uint32_t regs;
