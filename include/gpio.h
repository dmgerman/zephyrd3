DECL|GPIO_ACCESS_BY_PIN|macro|GPIO_ACCESS_BY_PIN
DECL|GPIO_ACCESS_BY_PORT|macro|GPIO_ACCESS_BY_PORT
DECL|GPIO_DIR_IN|macro|GPIO_DIR_IN
DECL|GPIO_DIR_MASK|macro|GPIO_DIR_MASK
DECL|GPIO_DIR_OUT|macro|GPIO_DIR_OUT
DECL|GPIO_INT_ACTIVE_HIGH|macro|GPIO_INT_ACTIVE_HIGH
DECL|GPIO_INT_ACTIVE_LOW|macro|GPIO_INT_ACTIVE_LOW
DECL|GPIO_INT_CLOCK_SYNC|macro|GPIO_INT_CLOCK_SYNC
DECL|GPIO_INT_DEBOUNCE|macro|GPIO_INT_DEBOUNCE
DECL|GPIO_INT_DOUBLE_EDGE|macro|GPIO_INT_DOUBLE_EDGE
DECL|GPIO_INT_EDGE|macro|GPIO_INT_EDGE
DECL|GPIO_INT_LEVEL|macro|GPIO_INT_LEVEL
DECL|GPIO_INT|macro|GPIO_INT
DECL|__GPIO_H__|macro|__GPIO_H__
DECL|config|member|gpio_config_t config;
DECL|disable_callback|member|gpio_disable_callback_t disable_callback;
DECL|enable_callback|member|gpio_enable_callback_t enable_callback;
DECL|gpio_callback_t|typedef|typedef void (*gpio_callback_t)(struct device *port, uint32_t pin);
DECL|gpio_config_t|typedef|typedef int (*gpio_config_t)(struct device *port, int access_op,
DECL|gpio_disable_callback_t|typedef|typedef int (*gpio_disable_callback_t)(struct device *port,
DECL|gpio_driver_api|struct|struct gpio_driver_api {
DECL|gpio_enable_callback_t|typedef|typedef int (*gpio_enable_callback_t)(struct device *port,
DECL|gpio_pin_configure|function|inline int gpio_pin_configure(struct device *port, uint8_t pin, int flags)
DECL|gpio_pin_disable_callback|function|inline int gpio_pin_disable_callback(struct device *port, uint32_t pin)
DECL|gpio_pin_enable_callback|function|inline int gpio_pin_enable_callback(struct device *port, uint32_t pin)
DECL|gpio_pin_read|function|inline int gpio_pin_read(struct device *port, uint32_t pin, uint32_t *value)
DECL|gpio_pin_write|function|inline int gpio_pin_write(struct device *port, uint32_t pin, uint32_t value)
DECL|gpio_port_configure|function|inline int gpio_port_configure(struct device *port, int flags)
DECL|gpio_port_disable_callback|function|inline int gpio_port_disable_callback(struct device *port)
DECL|gpio_port_enable_callback|function|inline int gpio_port_enable_callback(struct device *port)
DECL|gpio_port_read|function|inline int gpio_port_read(struct device *port, uint32_t *value)
DECL|gpio_port_write|function|inline int gpio_port_write(struct device *port, uint32_t value)
DECL|gpio_read_t|typedef|typedef int (*gpio_read_t)(struct device *port, int access_op,
DECL|gpio_resume_port_t|typedef|typedef int (*gpio_resume_port_t)(struct device *port);
DECL|gpio_resume|function|inline int gpio_resume(struct device *port)
DECL|gpio_set_callback_t|typedef|typedef int (*gpio_set_callback_t)(struct device *port,
DECL|gpio_set_callback|function|inline int gpio_set_callback(struct device *port, gpio_callback_t callback)
DECL|gpio_suspend_port_t|typedef|typedef int (*gpio_suspend_port_t)(struct device *port);
DECL|gpio_suspend|function|inline int gpio_suspend(struct device *port)
DECL|gpio_write_t|typedef|typedef int (*gpio_write_t)(struct device *port, int access_op,
DECL|read|member|gpio_read_t read;
DECL|resume|member|gpio_resume_port_t resume;
DECL|set_callback|member|gpio_set_callback_t set_callback;
DECL|suspend|member|gpio_suspend_port_t suspend;
DECL|write|member|gpio_write_t write;
