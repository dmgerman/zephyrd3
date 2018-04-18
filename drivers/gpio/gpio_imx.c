DECL|base|member|GPIO_Type *base;
DECL|callbacks|member|sys_slist_t callbacks;
DECL|imx_gpio_1_config|variable|imx_gpio_1_config
DECL|imx_gpio_1_data|variable|imx_gpio_1_data
DECL|imx_gpio_1_init|function|static int imx_gpio_1_init(struct device *dev)
DECL|imx_gpio_2_config|variable|imx_gpio_2_config
DECL|imx_gpio_2_data|variable|imx_gpio_2_data
DECL|imx_gpio_2_init|function|static int imx_gpio_2_init(struct device *dev)
DECL|imx_gpio_3_config|variable|imx_gpio_3_config
DECL|imx_gpio_3_data|variable|imx_gpio_3_data
DECL|imx_gpio_3_init|function|static int imx_gpio_3_init(struct device *dev)
DECL|imx_gpio_4_config|variable|imx_gpio_4_config
DECL|imx_gpio_4_data|variable|imx_gpio_4_data
DECL|imx_gpio_4_init|function|static int imx_gpio_4_init(struct device *dev)
DECL|imx_gpio_5_config|variable|imx_gpio_5_config
DECL|imx_gpio_5_data|variable|imx_gpio_5_data
DECL|imx_gpio_5_init|function|static int imx_gpio_5_init(struct device *dev)
DECL|imx_gpio_6_config|variable|imx_gpio_6_config
DECL|imx_gpio_6_data|variable|imx_gpio_6_data
DECL|imx_gpio_6_init|function|static int imx_gpio_6_init(struct device *dev)
DECL|imx_gpio_7_config|variable|imx_gpio_7_config
DECL|imx_gpio_7_data|variable|imx_gpio_7_data
DECL|imx_gpio_7_init|function|static int imx_gpio_7_init(struct device *dev)
DECL|imx_gpio_configure|function|static int imx_gpio_configure(struct device *dev, int access_op, u32_t pin, int flags)
DECL|imx_gpio_config|struct|struct imx_gpio_config {
DECL|imx_gpio_data|struct|struct imx_gpio_data {
DECL|imx_gpio_disable_callback|function|static int imx_gpio_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|imx_gpio_driver_api|variable|imx_gpio_driver_api
DECL|imx_gpio_enable_callback|function|static int imx_gpio_enable_callback(struct device *dev, int access_op, u32_t pin)
DECL|imx_gpio_manage_callback|function|static int imx_gpio_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|imx_gpio_port_isr|function|static void imx_gpio_port_isr(void *arg)
DECL|imx_gpio_read|function|static int imx_gpio_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|imx_gpio_write|function|static int imx_gpio_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|pin_callback_enables|member|u32_t pin_callback_enables;
