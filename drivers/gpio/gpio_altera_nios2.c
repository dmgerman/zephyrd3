DECL|config_func_t|typedef|typedef int (*config_func_t)(struct device *dev, int access_op,
DECL|config_func|member|config_func_t config_func;
DECL|gpio_nios2_config_oput_port|function|static int gpio_nios2_config_oput_port(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_nios2_config|function|static int gpio_nios2_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_nios2_config|struct|struct gpio_nios2_config {
DECL|gpio_nios2_drv_api_funcs|variable|gpio_nios2_drv_api_funcs
DECL|gpio_nios2_oput_cfg|variable|gpio_nios2_oput_cfg
DECL|gpio_nios2_oput_init|function|static int gpio_nios2_oput_init(struct device *dev)
DECL|gpio_nios2_read|function|static int gpio_nios2_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_nios2_write|function|static int gpio_nios2_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|pio_base|member|u32_t pio_base;
