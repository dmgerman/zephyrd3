DECL|CONFIG|member|__IO uint32_t CONFIG[8];
DECL|DETECTMODE|member|__IO uint32_t DETECTMODE;
DECL|DEV_GPIO_CFG|macro|DEV_GPIO_CFG
DECL|DEV_GPIO_DATA|macro|DEV_GPIO_DATA
DECL|DIRCLR|member|__IO uint32_t DIRCLR;
DECL|DIRSET|member|__IO uint32_t DIRSET;
DECL|DIR|member|__IO uint32_t DIR;
DECL|EVENTS_IN|member|__IO uint32_t EVENTS_IN[8];
DECL|EVENTS_PORT|member|__IO uint32_t EVENTS_PORT;
DECL|GPIOTE_STRUCT|macro|GPIOTE_STRUCT
DECL|GPIO_DIR_INPUT|macro|GPIO_DIR_INPUT
DECL|GPIO_DIR_OUTPUT|macro|GPIO_DIR_OUTPUT
DECL|GPIO_DRIVE_D0H1|macro|GPIO_DRIVE_D0H1
DECL|GPIO_DRIVE_D0S1|macro|GPIO_DRIVE_D0S1
DECL|GPIO_DRIVE_H0D1|macro|GPIO_DRIVE_H0D1
DECL|GPIO_DRIVE_H0H1|macro|GPIO_DRIVE_H0H1
DECL|GPIO_DRIVE_H0S1|macro|GPIO_DRIVE_H0S1
DECL|GPIO_DRIVE_S0D1|macro|GPIO_DRIVE_S0D1
DECL|GPIO_DRIVE_S0H1|macro|GPIO_DRIVE_S0H1
DECL|GPIO_DRIVE_S0S1|macro|GPIO_DRIVE_S0S1
DECL|GPIO_INPUT_CONNECT|macro|GPIO_INPUT_CONNECT
DECL|GPIO_INPUT_DISCONNECT|macro|GPIO_INPUT_DISCONNECT
DECL|GPIO_PULL_DISABLE|macro|GPIO_PULL_DISABLE
DECL|GPIO_PULL_DOWN|macro|GPIO_PULL_DOWN
DECL|GPIO_PULL_UP|macro|GPIO_PULL_UP
DECL|GPIO_SENSE_DISABLE|macro|GPIO_SENSE_DISABLE
DECL|GPIO_SENSE_ENABLE|macro|GPIO_SENSE_ENABLE
DECL|GPIO_STRUCT|macro|GPIO_STRUCT
DECL|INTENCLR|member|__IO uint32_t INTENCLR;
DECL|INTENSET|member|__IO uint32_t INTENSET;
DECL|IN|member|__I uint32_t IN;
DECL|LATCH|member|__IO uint32_t LATCH;
DECL|OUTCLR|member|__IO uint32_t OUTCLR;
DECL|OUTSET|member|__IO uint32_t OUTSET;
DECL|OUT|member|__IO uint32_t OUT;
DECL|PIN_CNF|member|__IO uint32_t PIN_CNF[32];
DECL|RESERVED0|member|__I uint32_t RESERVED0[321];
DECL|RESERVED0|member|__I uint32_t RESERVED0[4];
DECL|RESERVED1|member|__I uint32_t RESERVED1[118];
DECL|RESERVED1|member|__I uint32_t RESERVED1[4];
DECL|RESERVED2|member|__I uint32_t RESERVED2[32];
DECL|RESERVED3|member|__I uint32_t RESERVED3[23];
DECL|RESERVED4|member|__I uint32_t RESERVED4[97];
DECL|RESERVED5|member|__I uint32_t RESERVED5[129];
DECL|TASKS_CLR|member|__O uint32_t TASKS_CLR[8];
DECL|TASKS_OUT|member|__O uint32_t TASKS_OUT[8];
DECL|TASKS_SET|member|__O uint32_t TASKS_SET[8];
DECL|_gpiote|struct|struct _gpiote {
DECL|_gpio|struct|struct _gpio {
DECL|callback_func|member|gpio_callback_t callback_func;
DECL|gpio_base_addr|member|uint32_t gpio_base_addr;
DECL|gpio_data_P0|variable|gpio_data_P0
DECL|gpio_nrf5_P0_cfg|variable|gpio_nrf5_P0_cfg
DECL|gpio_nrf5_P0_init|function|static int gpio_nrf5_P0_init(struct device *dev)
DECL|gpio_nrf5_config|function|static int gpio_nrf5_config(struct device *dev, int access_op, uint32_t pin, int flags)
DECL|gpio_nrf5_config|struct|struct gpio_nrf5_config {
DECL|gpio_nrf5_data|struct|struct gpio_nrf5_data {
DECL|gpio_nrf5_drv_api_funcs|variable|gpio_nrf5_drv_api_funcs
DECL|gpio_nrf5_port_isr|function|static void gpio_nrf5_port_isr(void *dev)
DECL|gpiote_base_addr|member|uint32_t gpiote_base_addr;
DECL|pin_callback_enables|member|uint32_t pin_callback_enables;
DECL|port_base_addr|member|uint32_t port_base_addr;
DECL|port_callback_enable|member|uint8_t port_callback_enable;
