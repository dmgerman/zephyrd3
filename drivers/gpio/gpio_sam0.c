DECL|DEV_CFG|macro|DEV_CFG
DECL|gpio_sam0_api|variable|gpio_sam0_api
DECL|gpio_sam0_config_0|variable|gpio_sam0_config_0
DECL|gpio_sam0_config_1|variable|gpio_sam0_config_1
DECL|gpio_sam0_config|function|static int gpio_sam0_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_sam0_config|struct|struct gpio_sam0_config {
DECL|gpio_sam0_init|function|int gpio_sam0_init(struct device *dev) { return 0; }
DECL|gpio_sam0_read|function|static int gpio_sam0_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_sam0_write|function|static int gpio_sam0_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|regs|member|PortGroup *regs;
