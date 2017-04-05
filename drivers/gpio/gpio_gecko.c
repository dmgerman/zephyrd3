DECL|GECKO_GPIO_MODEH|macro|GECKO_GPIO_MODEH
DECL|GECKO_GPIO_MODEL|macro|GECKO_GPIO_MODEL
DECL|NUMBER_OF_PORTS|macro|NUMBER_OF_PORTS
DECL|callbacks|member|sys_slist_t callbacks;
DECL|count|member|size_t count;
DECL|gpio_base|member|GPIO_P_TypeDef *gpio_base;
DECL|gpio_gecko_add_port|function|static inline void gpio_gecko_add_port(struct gpio_gecko_common_data *data, struct device *dev)
DECL|gpio_gecko_common_config|struct|struct gpio_gecko_common_config {
DECL|gpio_gecko_common_config|variable|gpio_gecko_common_config
DECL|gpio_gecko_common_data|struct|struct gpio_gecko_common_data {
DECL|gpio_gecko_common_data|variable|gpio_gecko_common_data
DECL|gpio_gecko_common_driver_api|variable|gpio_gecko_common_driver_api
DECL|gpio_gecko_common_init|function|static int gpio_gecko_common_init(struct device *dev)
DECL|gpio_gecko_common_isr|function|static void gpio_gecko_common_isr(void *arg)
DECL|gpio_gecko_configure|function|static int gpio_gecko_configure(struct device *dev,int access_op, u32_t pin, int flags)
DECL|gpio_gecko_config|struct|struct gpio_gecko_config {
DECL|gpio_gecko_data|struct|struct gpio_gecko_data {
DECL|gpio_gecko_disable_callback|function|static int gpio_gecko_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_gecko_driver_api|variable|gpio_gecko_driver_api
DECL|gpio_gecko_enable_callback|function|static int gpio_gecko_enable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_gecko_manage_callback|function|static int gpio_gecko_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_gecko_porta_config|variable|gpio_gecko_porta_config
DECL|gpio_gecko_porta_data|variable|gpio_gecko_porta_data
DECL|gpio_gecko_porta_init|function|static int gpio_gecko_porta_init(struct device *dev)
DECL|gpio_gecko_portb_config|variable|gpio_gecko_portb_config
DECL|gpio_gecko_portb_data|variable|gpio_gecko_portb_data
DECL|gpio_gecko_portb_init|function|static int gpio_gecko_portb_init(struct device *dev)
DECL|gpio_gecko_portc_config|variable|gpio_gecko_portc_config
DECL|gpio_gecko_portc_data|variable|gpio_gecko_portc_data
DECL|gpio_gecko_portc_init|function|static int gpio_gecko_portc_init(struct device *dev)
DECL|gpio_gecko_portd_config|variable|gpio_gecko_portd_config
DECL|gpio_gecko_portd_data|variable|gpio_gecko_portd_data
DECL|gpio_gecko_portd_init|function|static int gpio_gecko_portd_init(struct device *dev)
DECL|gpio_gecko_porte_config|variable|gpio_gecko_porte_config
DECL|gpio_gecko_porte_data|variable|gpio_gecko_porte_data
DECL|gpio_gecko_porte_init|function|static int gpio_gecko_porte_init(struct device *dev)
DECL|gpio_gecko_portf_config|variable|gpio_gecko_portf_config
DECL|gpio_gecko_portf_data|variable|gpio_gecko_portf_data
DECL|gpio_gecko_portf_init|function|static int gpio_gecko_portf_init(struct device *dev)
DECL|gpio_gecko_read|function|static int gpio_gecko_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_gecko_write|function|static int gpio_gecko_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|gpio_index|member|GPIO_Port_TypeDef gpio_index;
DECL|member_size|macro|member_size
DECL|pin_callback_enables|member|u32_t pin_callback_enables;
DECL|ports|member|struct device *ports[NUMBER_OF_PORTS];
