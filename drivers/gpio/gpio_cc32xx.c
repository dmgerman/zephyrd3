DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|EXCEPTION_GPIOA0|macro|EXCEPTION_GPIOA0
DECL|EXCEPTION_GPIOA1|macro|EXCEPTION_GPIOA1
DECL|EXCEPTION_GPIOA2|macro|EXCEPTION_GPIOA2
DECL|EXCEPTION_GPIOA3|macro|EXCEPTION_GPIOA3
DECL|__GPIO_H__|macro|__GPIO_H__
DECL|api_funcs|variable|api_funcs
DECL|callbacks|member|sys_slist_t callbacks;
DECL|gpio_cc32xx_a0_config|variable|gpio_cc32xx_a0_config
DECL|gpio_cc32xx_a0_data|variable|gpio_cc32xx_a0_data
DECL|gpio_cc32xx_a0_init|function|static int gpio_cc32xx_a0_init(struct device *dev)
DECL|gpio_cc32xx_a1_config|variable|gpio_cc32xx_a1_config
DECL|gpio_cc32xx_a1_data|variable|gpio_cc32xx_a1_data
DECL|gpio_cc32xx_a1_init|function|static int gpio_cc32xx_a1_init(struct device *dev)
DECL|gpio_cc32xx_a2_config|variable|gpio_cc32xx_a2_config
DECL|gpio_cc32xx_a2_data|variable|gpio_cc32xx_a2_data
DECL|gpio_cc32xx_a2_init|function|static int gpio_cc32xx_a2_init(struct device *dev)
DECL|gpio_cc32xx_a3_config|variable|gpio_cc32xx_a3_config
DECL|gpio_cc32xx_a3_data|variable|gpio_cc32xx_a3_data
DECL|gpio_cc32xx_a3_init|function|static int gpio_cc32xx_a3_init(struct device *dev)
DECL|gpio_cc32xx_config|function|static inline int gpio_cc32xx_config(struct device *port, int access_op, uint32_t pin, int flags)
DECL|gpio_cc32xx_config|struct|struct gpio_cc32xx_config {
DECL|gpio_cc32xx_data|struct|struct gpio_cc32xx_data {
DECL|gpio_cc32xx_disable_callback|function|static int gpio_cc32xx_disable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_cc32xx_enable_callback|function|static int gpio_cc32xx_enable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_cc32xx_manage_callback|function|static int gpio_cc32xx_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_cc32xx_port_isr|function|static void gpio_cc32xx_port_isr(void *arg)
DECL|gpio_cc32xx_read|function|static inline int gpio_cc32xx_read(struct device *port, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_cc32xx_write|function|static inline int gpio_cc32xx_write(struct device *port, int access_op, uint32_t pin, uint32_t value)
DECL|irq_num|member|unsigned long irq_num;
DECL|pin_callback_enables|member|uint32_t pin_callback_enables;
DECL|port_base|member|unsigned long port_base;
