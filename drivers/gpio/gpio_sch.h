DECL|GPIO_SCH_POLLING_MSEC|macro|GPIO_SCH_POLLING_MSEC
DECL|GPIO_SCH_POLLING_STACK_SIZE|macro|GPIO_SCH_POLLING_STACK_SIZE
DECL|GPIO_SCH_REG_GEN|macro|GPIO_SCH_REG_GEN
DECL|GPIO_SCH_REG_GGPE|macro|GPIO_SCH_REG_GGPE
DECL|GPIO_SCH_REG_GIO|macro|GPIO_SCH_REG_GIO
DECL|GPIO_SCH_REG_GLVL|macro|GPIO_SCH_REG_GLVL
DECL|GPIO_SCH_REG_GSMI|macro|GPIO_SCH_REG_GSMI
DECL|GPIO_SCH_REG_GTNE|macro|GPIO_SCH_REG_GTNE
DECL|GPIO_SCH_REG_GTPE|macro|GPIO_SCH_REG_GTPE
DECL|GPIO_SCH_REG_GTS|macro|GPIO_SCH_REG_GTS
DECL|ZEPHYR_DRIVERS_GPIO_GPIO_SCH_H_|macro|ZEPHYR_DRIVERS_GPIO_GPIO_SCH_H_
DECL|bits|member|u8_t bits;
DECL|callbacks|member|sys_slist_t callbacks;
DECL|cb_enabled|member|u32_t cb_enabled;
DECL|gpio_sch_config|struct|struct gpio_sch_config {
DECL|gpio_sch_data|struct|struct gpio_sch_data {
DECL|gtne|member|u32_t gtne;
DECL|gtpe|member|u32_t gtpe;
DECL|int_regs|member|} int_regs;
DECL|poll_timer|member|struct k_timer poll_timer;
DECL|polling_thread|member|struct k_thread polling_thread;
DECL|poll|member|u8_t poll;
DECL|regs|member|u32_t regs;
DECL|stride|member|u8_t stride[3];
DECL|stride|member|u8_t stride[3];
