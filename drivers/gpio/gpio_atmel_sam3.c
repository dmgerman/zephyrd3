DECL|_config|function|static void _config(struct device *dev, uint32_t mask, int flags)
DECL|cb|member|sys_slist_t cb;
DECL|config_func_t|typedef|typedef void (*config_func_t)(struct device *port);
DECL|config_func|member|config_func_t config_func;
DECL|gpio_sam3_a_cfg|variable|gpio_sam3_a_cfg
DECL|gpio_sam3_a|variable|gpio_sam3_a
DECL|gpio_sam3_b_cfg|variable|gpio_sam3_b_cfg
DECL|gpio_sam3_b|variable|gpio_sam3_b
DECL|gpio_sam3_c_cfg|variable|gpio_sam3_c_cfg
DECL|gpio_sam3_config_a|function|void gpio_sam3_config_a(struct device *dev)
DECL|gpio_sam3_config_b|function|void gpio_sam3_config_b(struct device *dev)
DECL|gpio_sam3_config_c|function|void gpio_sam3_config_c(struct device *dev)
DECL|gpio_sam3_config_d|function|void gpio_sam3_config_d(struct device *dev)
DECL|gpio_sam3_config|function|static int gpio_sam3_config(struct device *dev, int access_op, uint32_t pin, int flags)
DECL|gpio_sam3_config|struct|struct gpio_sam3_config {
DECL|gpio_sam3_c|variable|gpio_sam3_c
DECL|gpio_sam3_d_cfg|variable|gpio_sam3_d_cfg
DECL|gpio_sam3_disable_callback|function|static int gpio_sam3_disable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_sam3_drv_api_funcs|variable|gpio_sam3_drv_api_funcs
DECL|gpio_sam3_d|variable|gpio_sam3_d
DECL|gpio_sam3_enable_callback|function|static int gpio_sam3_enable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_sam3_init|function|int gpio_sam3_init(struct device *dev)
DECL|gpio_sam3_isr|function|static void gpio_sam3_isr(void *arg)
DECL|gpio_sam3_manage_callback|function|static int gpio_sam3_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_sam3_read|function|static int gpio_sam3_read(struct device *dev, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_sam3_write|function|static int gpio_sam3_write(struct device *dev, int access_op, uint32_t pin, uint32_t value)
DECL|port|member|volatile struct __pio *port;
