DECL|base|member|GPIO_Type *base;
DECL|callbacks|member|sys_slist_t callbacks;
DECL|mcux_igpio_1_config|variable|mcux_igpio_1_config
DECL|mcux_igpio_1_data|variable|mcux_igpio_1_data
DECL|mcux_igpio_1_init|function|static int mcux_igpio_1_init(struct device *dev)
DECL|mcux_igpio_2_config|variable|mcux_igpio_2_config
DECL|mcux_igpio_2_data|variable|mcux_igpio_2_data
DECL|mcux_igpio_2_init|function|static int mcux_igpio_2_init(struct device *dev)
DECL|mcux_igpio_3_config|variable|mcux_igpio_3_config
DECL|mcux_igpio_3_data|variable|mcux_igpio_3_data
DECL|mcux_igpio_3_init|function|static int mcux_igpio_3_init(struct device *dev)
DECL|mcux_igpio_4_config|variable|mcux_igpio_4_config
DECL|mcux_igpio_4_data|variable|mcux_igpio_4_data
DECL|mcux_igpio_4_init|function|static int mcux_igpio_4_init(struct device *dev)
DECL|mcux_igpio_5_config|variable|mcux_igpio_5_config
DECL|mcux_igpio_5_data|variable|mcux_igpio_5_data
DECL|mcux_igpio_5_init|function|static int mcux_igpio_5_init(struct device *dev)
DECL|mcux_igpio_configure|function|static int mcux_igpio_configure(struct device *dev, int access_op, u32_t pin, int flags)
DECL|mcux_igpio_config|struct|struct mcux_igpio_config {
DECL|mcux_igpio_data|struct|struct mcux_igpio_data {
DECL|mcux_igpio_disable_callback|function|static int mcux_igpio_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|mcux_igpio_driver_api|variable|mcux_igpio_driver_api
DECL|mcux_igpio_enable_callback|function|static int mcux_igpio_enable_callback(struct device *dev, int access_op, u32_t pin)
DECL|mcux_igpio_manage_callback|function|static int mcux_igpio_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|mcux_igpio_port_isr|function|static void mcux_igpio_port_isr(void *arg)
DECL|mcux_igpio_read|function|static int mcux_igpio_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|mcux_igpio_write|function|static int mcux_igpio_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|pin_callback_enables|member|u32_t pin_callback_enables;
