DECL|DEV_GPIO_CFG|macro|DEV_GPIO_CFG
DECL|DEV_GPIO_DATA|macro|DEV_GPIO_DATA
DECL|DEV_GPIO|macro|DEV_GPIO
DECL|cb|member|sys_slist_t cb;
DECL|ds|member|unsigned int ds;
DECL|fall_ie|member|unsigned int fall_ie;
DECL|fall_ip|member|unsigned int fall_ip;
DECL|gpio_base_addr|member|u32_t gpio_base_addr;
DECL|gpio_cfg_func|member|sifive_cfg_func_t gpio_cfg_func;
DECL|gpio_irq_base|member|u32_t gpio_irq_base;
DECL|gpio_sifive_cfg_0|function|static void gpio_sifive_cfg_0(void)
DECL|gpio_sifive_config0|variable|gpio_sifive_config0
DECL|gpio_sifive_config|function|static int gpio_sifive_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_sifive_config|struct|struct gpio_sifive_config {
DECL|gpio_sifive_data0|variable|gpio_sifive_data0
DECL|gpio_sifive_data|struct|struct gpio_sifive_data {
DECL|gpio_sifive_disable_callback|function|static int gpio_sifive_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_sifive_driver|variable|gpio_sifive_driver
DECL|gpio_sifive_enable_callback|function|static int gpio_sifive_enable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_sifive_init|function|static int gpio_sifive_init(struct device *dev)
DECL|gpio_sifive_irq_handler|function|static void gpio_sifive_irq_handler(void *arg)
DECL|gpio_sifive_manage_callback|function|static int gpio_sifive_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_sifive_read|function|static int gpio_sifive_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_sifive_t|struct|struct gpio_sifive_t {
DECL|gpio_sifive_write|function|static int gpio_sifive_write(struct device *dev, int access_op, u32_t pin, u32_t value)
DECL|high_ie|member|unsigned int high_ie;
DECL|high_ip|member|unsigned int high_ip;
DECL|in_en|member|unsigned int in_en;
DECL|in_val|member|unsigned int in_val;
DECL|invert|member|unsigned int invert;
DECL|iof_en|member|unsigned int iof_en;
DECL|iof_sel|member|unsigned int iof_sel;
DECL|low_ie|member|unsigned int low_ie;
DECL|low_ip|member|unsigned int low_ip;
DECL|out_en|member|unsigned int out_en;
DECL|out_val|member|unsigned int out_val;
DECL|pue|member|unsigned int pue;
DECL|rise_ie|member|unsigned int rise_ie;
DECL|rise_ip|member|unsigned int rise_ip;
DECL|sifive_cfg_func_t|typedef|typedef void (*sifive_cfg_func_t)(void);
