DECL|DEFINE_MM_REG_READ|macro|DEFINE_MM_REG_READ
DECL|DEFINE_MM_REG_SET_BIT|macro|DEFINE_MM_REG_SET_BIT
DECL|DEFINE_MM_REG_WRITE|macro|DEFINE_MM_REG_WRITE
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_REG_CLEAR_BIT|macro|_REG_CLEAR_BIT
DECL|_REG_CLEAR_BIT|macro|_REG_CLEAR_BIT
DECL|_REG_READ|macro|_REG_READ
DECL|_REG_READ|macro|_REG_READ
DECL|_REG_SET_BIT|macro|_REG_SET_BIT
DECL|_REG_SET_BIT|macro|_REG_SET_BIT
DECL|_REG_WRITE|macro|_REG_WRITE
DECL|_REG_WRITE|macro|_REG_WRITE
DECL|_gpio_pin_config|function|static void _gpio_pin_config(struct device *dev, u32_t pin, int flags)
DECL|_gpio_port_config|function|static inline void _gpio_port_config(struct device *dev, int flags)
DECL|_gpio_sch_manage_callback|function|static void _gpio_sch_manage_callback(struct device *dev)
DECL|_gpio_sch_poll_status|function|static void _gpio_sch_poll_status(void *arg1, void *unused1, void *unused2)
DECL|_set_bit|function|static void _set_bit(u32_t base_addr, u32_t bit, u8_t set)
DECL|_set_data_reg|function|static inline void _set_data_reg(u32_t *reg, u8_t pin, u8_t set)
DECL|gpio_data_0|variable|gpio_data_0
DECL|gpio_data_1|variable|gpio_data_1
DECL|gpio_sch_0_config|variable|gpio_sch_0_config
DECL|gpio_sch_1_config|variable|gpio_sch_1_config
DECL|gpio_sch_api|variable|gpio_sch_api
DECL|gpio_sch_config|function|static int gpio_sch_config(struct device *dev, int access_op, u32_t pin, int flags)
DECL|gpio_sch_disable_callback|function|static int gpio_sch_disable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_sch_enable_callback|function|static int gpio_sch_enable_callback(struct device *dev, int access_op, u32_t pin)
DECL|gpio_sch_init|function|static int gpio_sch_init(struct device *dev)
DECL|gpio_sch_manage_callback|function|static int gpio_sch_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_sch_read|function|static int gpio_sch_read(struct device *dev, int access_op, u32_t pin, u32_t *value)
DECL|gpio_sch_write|function|static int gpio_sch_write(struct device *dev, int access_op, u32_t pin, u32_t value)
