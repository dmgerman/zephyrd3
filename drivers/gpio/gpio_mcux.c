DECL|callbacks|member|sys_slist_t callbacks;
DECL|flags|member|unsigned int flags;
DECL|gpio_base|member|GPIO_Type *gpio_base;
DECL|gpio_mcux_configure|function|static int gpio_mcux_configure(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_mcux_config|struct|struct gpio_mcux_config {
DECL|gpio_mcux_data|struct|struct gpio_mcux_data {
DECL|gpio_mcux_disable_callback|function|static int gpio_mcux_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_mcux_driver_api|variable|gpio_mcux_driver_api
DECL|gpio_mcux_enable_callback|function|static int gpio_mcux_enable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_mcux_manage_callback|function|static int gpio_mcux_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_mcux_port_isr|function|static void gpio_mcux_port_isr(void *arg)
DECL|gpio_mcux_porta_config|variable|gpio_mcux_porta_config
DECL|gpio_mcux_porta_data|variable|gpio_mcux_porta_data
DECL|gpio_mcux_porta_init|function|static int gpio_mcux_porta_init(struct device *dev)
DECL|gpio_mcux_portb_config|variable|gpio_mcux_portb_config
DECL|gpio_mcux_portb_data|variable|gpio_mcux_portb_data
DECL|gpio_mcux_portb_init|function|static int gpio_mcux_portb_init(struct device *dev)
DECL|gpio_mcux_portc_config|variable|gpio_mcux_portc_config
DECL|gpio_mcux_portc_data|variable|gpio_mcux_portc_data
DECL|gpio_mcux_portc_init|function|static int gpio_mcux_portc_init(struct device *dev)
DECL|gpio_mcux_portd_config|variable|gpio_mcux_portd_config
DECL|gpio_mcux_portd_data|variable|gpio_mcux_portd_data
DECL|gpio_mcux_portd_init|function|static int gpio_mcux_portd_init(struct device *dev)
DECL|gpio_mcux_porte_config|variable|gpio_mcux_porte_config
DECL|gpio_mcux_porte_data|variable|gpio_mcux_porte_data
DECL|gpio_mcux_porte_init|function|static int gpio_mcux_porte_init(struct device *dev)
DECL|gpio_mcux_read|function|static int gpio_mcux_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_mcux_write|function|static int gpio_mcux_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|pin_callback_enables|member|u32_t pin_callback_enables;
DECL|port_base|member|PORT_Type *port_base;
