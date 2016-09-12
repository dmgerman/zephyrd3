DECL|cmsdk_ahb_gpio_config|function|static void cmsdk_ahb_gpio_config(struct device *dev, uint32_t mask, int flags)
DECL|gpio_cb|member|sys_slist_t gpio_cb;
DECL|gpio_cmsdk_ahb_0_cfg|variable|gpio_cmsdk_ahb_0_cfg
DECL|gpio_cmsdk_ahb_0_data|variable|gpio_cmsdk_ahb_0_data
DECL|gpio_cmsdk_ahb_1_cfg|variable|gpio_cmsdk_ahb_1_cfg
DECL|gpio_cmsdk_ahb_1_data|variable|gpio_cmsdk_ahb_1_data
DECL|gpio_cmsdk_ahb_2_cfg|variable|gpio_cmsdk_ahb_2_cfg
DECL|gpio_cmsdk_ahb_2_data|variable|gpio_cmsdk_ahb_2_data
DECL|gpio_cmsdk_ahb_3_cfg|variable|gpio_cmsdk_ahb_3_cfg
DECL|gpio_cmsdk_ahb_3_data|variable|gpio_cmsdk_ahb_3_data
DECL|gpio_cmsdk_ahb_cfg|struct|struct gpio_cmsdk_ahb_cfg {
DECL|gpio_cmsdk_ahb_config_0|function|static void gpio_cmsdk_ahb_config_0(struct device *dev)
DECL|gpio_cmsdk_ahb_config_1|function|static void gpio_cmsdk_ahb_config_1(struct device *dev)
DECL|gpio_cmsdk_ahb_config_2|function|static void gpio_cmsdk_ahb_config_2(struct device *dev)
DECL|gpio_cmsdk_ahb_config_3|function|static void gpio_cmsdk_ahb_config_3(struct device *dev)
DECL|gpio_cmsdk_ahb_config|function|static int gpio_cmsdk_ahb_config(struct device *dev, int access_op, uint32_t pin, int flags)
DECL|gpio_cmsdk_ahb_dev_data|struct|struct gpio_cmsdk_ahb_dev_data {
DECL|gpio_cmsdk_ahb_disable_callback|function|static int gpio_cmsdk_ahb_disable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_cmsdk_ahb_drv_api_funcs|variable|gpio_cmsdk_ahb_drv_api_funcs
DECL|gpio_cmsdk_ahb_enable_callback|function|static int gpio_cmsdk_ahb_enable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_cmsdk_ahb_init|function|static int gpio_cmsdk_ahb_init(struct device *dev)
DECL|gpio_cmsdk_ahb_isr|function|static void gpio_cmsdk_ahb_isr(void *arg)
DECL|gpio_cmsdk_ahb_manage_callback|function|static int gpio_cmsdk_ahb_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_cmsdk_ahb_read|function|static int gpio_cmsdk_ahb_read(struct device *dev, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_cmsdk_ahb_write|function|static int gpio_cmsdk_ahb_write(struct device *dev, int access_op,uint32_t pin, uint32_t value)
DECL|gpio_config_func_t|typedef|typedef void (*gpio_config_func_t)(struct device *port);
DECL|gpio_config_func|member|gpio_config_func_t gpio_config_func;
DECL|port|member|volatile struct gpio_cmsdk_ahb *port;
