DECL|callbacks|member|sys_slist_t callbacks;
DECL|din31_0|variable|din31_0
DECL|disconnect|function|static void disconnect(const int pin, u32_t *gpiodoe31_0, u32_t *iocfg)
DECL|doe31_0|variable|doe31_0
DECL|doutclr31_0|variable|doutclr31_0
DECL|doutset31_0|variable|doutset31_0
DECL|evflags31_0|variable|evflags31_0
DECL|gpio_cc2650_config_pin|function|static int gpio_cc2650_config_pin(int pin, int flags)
DECL|gpio_cc2650_config|function|static int gpio_cc2650_config(struct device *port, int access_op, u32_t pin, int flags)
DECL|gpio_cc2650_data|struct|struct gpio_cc2650_data {
DECL|gpio_cc2650_data|variable|gpio_cc2650_data
DECL|gpio_cc2650_disable_callback|function|static int gpio_cc2650_disable_callback(struct device *port,int access_op, u32_t pin)
DECL|gpio_cc2650_enable_callback|function|static int gpio_cc2650_enable_callback(struct device *port, int access_op, u32_t pin)
DECL|gpio_cc2650_funcs|variable|gpio_cc2650_funcs
DECL|gpio_cc2650_get_pending_int|function|static u32_t gpio_cc2650_get_pending_int(struct device *dev)
DECL|gpio_cc2650_init|function|static int gpio_cc2650_init(struct device *dev)
DECL|gpio_cc2650_isr|function|static void gpio_cc2650_isr(void *arg)
DECL|gpio_cc2650_manage_callback|function|static int gpio_cc2650_manage_callback(struct device *port, struct gpio_callback *callback, bool set)
DECL|gpio_cc2650_read_pin|function|static inline void gpio_cc2650_read_pin(int pin, u32_t *value)
DECL|gpio_cc2650_read|function|static int gpio_cc2650_read(struct device *port, int access_op, u32_t pin, u32_t *value)
DECL|gpio_cc2650_write_pin|function|static inline void gpio_cc2650_write_pin(int pin, u32_t value)
DECL|gpio_cc2650_write|function|static int gpio_cc2650_write(struct device *port, int access_op, u32_t pin, u32_t value)
DECL|pin_callback_enables|member|u32_t pin_callback_enables;
