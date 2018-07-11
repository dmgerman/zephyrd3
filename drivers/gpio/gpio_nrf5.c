DECL|CONFIG|member|__IO u32_t CONFIG[8];
DECL|DEV_GPIO_CFG|macro|DEV_GPIO_CFG
DECL|DEV_GPIO_DATA|macro|DEV_GPIO_DATA
DECL|EVENTS_IN|member|__IO u32_t EVENTS_IN[8];
DECL|EVENTS_PORT|member|__IO u32_t EVENTS_PORT;
DECL|GPIOTE_CFG_EVT|macro|GPIOTE_CFG_EVT
DECL|GPIOTE_CFG_PIN_GET|macro|GPIOTE_CFG_PIN_GET
DECL|GPIOTE_CFG_PIN|macro|GPIOTE_CFG_PIN
DECL|GPIOTE_CFG_POL_H2L|macro|GPIOTE_CFG_POL_H2L
DECL|GPIOTE_CFG_POL_L2H|macro|GPIOTE_CFG_POL_L2H
DECL|GPIOTE_CFG_POL_TOGG|macro|GPIOTE_CFG_POL_TOGG
DECL|GPIOTE_CFG_PORT_GET|macro|GPIOTE_CFG_PORT_GET
DECL|GPIOTE_CFG_PORT_GET|macro|GPIOTE_CFG_PORT_GET
DECL|GPIOTE_CFG_PORT|macro|GPIOTE_CFG_PORT
DECL|GPIOTE_CFG_PORT|macro|GPIOTE_CFG_PORT
DECL|GPIOTE_CFG_TASK|macro|GPIOTE_CFG_TASK
DECL|GPIOTE_CH_BASE|macro|GPIOTE_CH_BASE
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
DECL|GPIO_PIN_CNF_SENSE_Invalid|macro|GPIO_PIN_CNF_SENSE_Invalid
DECL|GPIO_PORT|macro|GPIO_PORT
DECL|GPIO_PULL_DISABLE|macro|GPIO_PULL_DISABLE
DECL|GPIO_PULL_DOWN|macro|GPIO_PULL_DOWN
DECL|GPIO_PULL_UP|macro|GPIO_PULL_UP
DECL|GPIO_SENSE_DISABLE|macro|GPIO_SENSE_DISABLE
DECL|GPIO_SENSE_HIGH|macro|GPIO_SENSE_HIGH
DECL|GPIO_SENSE_INVALID|macro|GPIO_SENSE_INVALID
DECL|GPIO_SENSE_LOW|macro|GPIO_SENSE_LOW
DECL|GPIO_STRUCT|macro|GPIO_STRUCT
DECL|INTENCLR|member|__IO u32_t INTENCLR;
DECL|INTENSET|member|__IO u32_t INTENSET;
DECL|RESERVED0|member|__I u32_t RESERVED0[4];
DECL|RESERVED1|member|__I u32_t RESERVED1[4];
DECL|RESERVED2|member|__I u32_t RESERVED2[32];
DECL|RESERVED3|member|__I u32_t RESERVED3[23];
DECL|RESERVED4|member|__I u32_t RESERVED4[97];
DECL|RESERVED5|member|__I u32_t RESERVED5[129];
DECL|TASKS_CLR|member|__O u32_t TASKS_CLR[8];
DECL|TASKS_OUT|member|__O u32_t TASKS_OUT[8];
DECL|TASKS_SET|member|__O u32_t TASKS_SET[8];
DECL|_gpiote|struct|struct _gpiote {
DECL|callbacks|member|sys_slist_t callbacks;
DECL|gpio_base_addr|member|u32_t gpio_base_addr;
DECL|gpio_data_P0|variable|gpio_data_P0
DECL|gpio_data_P1|variable|gpio_data_P1
DECL|gpio_nrf5_P0_cfg|variable|gpio_nrf5_P0_cfg
DECL|gpio_nrf5_P0_init|function|static int gpio_nrf5_P0_init(struct device *dev)
DECL|gpio_nrf5_P0|variable|gpio_nrf5_P0
DECL|gpio_nrf5_P1_cfg|variable|gpio_nrf5_P1_cfg
DECL|gpio_nrf5_P1_init|function|static int gpio_nrf5_P1_init(struct device *dev)
DECL|gpio_nrf5_P1|variable|gpio_nrf5_P1
DECL|gpio_nrf5_config|function|static int gpio_nrf5_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_nrf5_config|struct|struct gpio_nrf5_config {
DECL|gpio_nrf5_data|struct|struct gpio_nrf5_data {
DECL|gpio_nrf5_disable_callback|function|static int gpio_nrf5_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_nrf5_drv_api_funcs|variable|gpio_nrf5_drv_api_funcs
DECL|gpio_nrf5_enable_callback|function|static int gpio_nrf5_enable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_nrf5_init|function|static int gpio_nrf5_init(struct device *dev)
DECL|gpio_nrf5_manage_callback|function|static int gpio_nrf5_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_nrf5_port_isr|function|static void gpio_nrf5_port_isr(void *arg)
DECL|gpio_nrf5_read|function|static int gpio_nrf5_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_nrf5_write|function|static int gpio_nrf5_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|gpio_port|member|u8_t gpio_port;
DECL|gpiote_chan_mask|variable|gpiote_chan_mask
DECL|gpiote_find_channel|function|static int gpiote_find_channel(struct device *dev, u32_t pin, u32_t port)
DECL|nrf_gpiote_clear_port_event|function|void nrf_gpiote_clear_port_event(void)
DECL|nrf_gpiote_interrupt_disable|function|void nrf_gpiote_interrupt_disable(uint32_t mask)
DECL|nrf_gpiote_interrupt_enable|function|void nrf_gpiote_interrupt_enable(uint32_t mask)
DECL|pin_callback_enables|member|u32_t pin_callback_enables;
