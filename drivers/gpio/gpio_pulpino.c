DECL|DEV_GPIO_CFG|macro|DEV_GPIO_CFG
DECL|DEV_GPIO_DATA|macro|DEV_GPIO_DATA
DECL|DEV_GPIO|macro|DEV_GPIO
DECL|cb|member|sys_slist_t cb;
DECL|gpio_base_addr|member|u32_t gpio_base_addr;
DECL|gpio_cfg_func|member|pulpino_cfg_func_t gpio_cfg_func;
DECL|gpio_pulpino_cfg_0|function|static void gpio_pulpino_cfg_0(void)
DECL|gpio_pulpino_config0|variable|gpio_pulpino_config0
DECL|gpio_pulpino_config|function|static int gpio_pulpino_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_pulpino_config|struct|struct gpio_pulpino_config {
DECL|gpio_pulpino_data0|variable|gpio_pulpino_data0
DECL|gpio_pulpino_data|struct|struct gpio_pulpino_data {
DECL|gpio_pulpino_disable_callback|function|static int gpio_pulpino_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_pulpino_driver|variable|gpio_pulpino_driver
DECL|gpio_pulpino_enable_callback|function|static int gpio_pulpino_enable_callback(struct device *dev,int access_op, u32_t pin)
DECL|gpio_pulpino_init|function|static int gpio_pulpino_init(struct device *dev)
DECL|gpio_pulpino_irq_handler|function|static void gpio_pulpino_irq_handler(void *arg)
DECL|gpio_pulpino_manage_callback|function|static int gpio_pulpino_manage_callback(struct device *dev,struct gpio_callback *callback, bool set)
DECL|gpio_pulpino_read|function|static int gpio_pulpino_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_pulpino_t|struct|struct gpio_pulpino_t {
DECL|gpio_pulpino_write|function|static int gpio_pulpino_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|inten|member|u32_t inten;
DECL|intstatus|member|u32_t intstatus;
DECL|inttype0|member|u32_t inttype0;
DECL|inttype1|member|u32_t inttype1;
DECL|paddir|member|u32_t paddir;
DECL|padin|member|u32_t padin;
DECL|padout|member|u32_t padout;
DECL|pulpino_cfg_func_t|typedef|typedef void (*pulpino_cfg_func_t)(void);
