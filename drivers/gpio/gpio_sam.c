DECL|DEV_CFG|macro|DEV_CFG
DECL|cb|member|sys_slist_t cb;
DECL|config_func_t|typedef|typedef void (*config_func_t)(struct device *dev);
DECL|config_func|member|config_func_t config_func;
DECL|gpio_sam_api|variable|gpio_sam_api
DECL|gpio_sam_config|function|static int gpio_sam_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_sam_config|struct|struct gpio_sam_config {
DECL|gpio_sam_disable_callback|function|static int gpio_sam_disable_callback(struct device *port, int access_op, u32_t pin)
DECL|gpio_sam_enable_callback|function|static int gpio_sam_enable_callback(struct device *port, int access_op, u32_t pin)
DECL|gpio_sam_init|function|int gpio_sam_init(struct device *dev)
DECL|gpio_sam_isr|function|static void gpio_sam_isr(void *arg)
DECL|gpio_sam_manage_callback|function|static int gpio_sam_manage_callback(struct device *port, struct gpio_callback *callback, bool set)
DECL|gpio_sam_read|function|static int gpio_sam_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_sam_runtime|struct|struct gpio_sam_runtime {
DECL|gpio_sam_write|function|static int gpio_sam_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|periph_id|member|u32_t periph_id;
DECL|port_a_sam_config_func|function|static void port_a_sam_config_func(struct device *dev)
DECL|port_a_sam_config|variable|port_a_sam_config
DECL|port_a_sam_runtime|variable|port_a_sam_runtime
DECL|port_b_sam_config_func|function|static void port_b_sam_config_func(struct device *dev)
DECL|port_b_sam_config|variable|port_b_sam_config
DECL|port_b_sam_runtime|variable|port_b_sam_runtime
DECL|port_c_sam_config_func|function|static void port_c_sam_config_func(struct device *dev)
DECL|port_c_sam_config|variable|port_c_sam_config
DECL|port_c_sam_runtime|variable|port_c_sam_runtime
DECL|port_d_sam_config_func|function|static void port_d_sam_config_func(struct device *dev)
DECL|port_d_sam_config|variable|port_d_sam_config
DECL|port_d_sam_runtime|variable|port_d_sam_runtime
DECL|port_e_sam_config_func|function|static void port_e_sam_config_func(struct device *dev)
DECL|port_e_sam_config|variable|port_e_sam_config
DECL|port_e_sam_runtime|variable|port_e_sam_runtime
DECL|regs|member|Pio *regs;
