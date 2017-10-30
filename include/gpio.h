DECL|GPIO_ACCESS_BY_PIN|macro|GPIO_ACCESS_BY_PIN
DECL|GPIO_ACCESS_BY_PORT|macro|GPIO_ACCESS_BY_PORT
DECL|GPIO_DECLARE_PIN_CONFIG_IDX|macro|GPIO_DECLARE_PIN_CONFIG_IDX
DECL|GPIO_DECLARE_PIN_CONFIG|macro|GPIO_DECLARE_PIN_CONFIG
DECL|GPIO_DIR_IN|macro|GPIO_DIR_IN
DECL|GPIO_DIR_MASK|macro|GPIO_DIR_MASK
DECL|GPIO_DIR_OUT|macro|GPIO_DIR_OUT
DECL|GPIO_DS_ALT_HIGH|macro|GPIO_DS_ALT_HIGH
DECL|GPIO_DS_ALT_LOW|macro|GPIO_DS_ALT_LOW
DECL|GPIO_DS_DFLT_HIGH|macro|GPIO_DS_DFLT_HIGH
DECL|GPIO_DS_DFLT_LOW|macro|GPIO_DS_DFLT_LOW
DECL|GPIO_DS_DISCONNECT_HIGH|macro|GPIO_DS_DISCONNECT_HIGH
DECL|GPIO_DS_DISCONNECT_LOW|macro|GPIO_DS_DISCONNECT_LOW
DECL|GPIO_DS_HIGH_MASK|macro|GPIO_DS_HIGH_MASK
DECL|GPIO_DS_HIGH_POS|macro|GPIO_DS_HIGH_POS
DECL|GPIO_DS_LOW_MASK|macro|GPIO_DS_LOW_MASK
DECL|GPIO_DS_LOW_POS|macro|GPIO_DS_LOW_POS
DECL|GPIO_GET_CONTROLLER_IDX|macro|GPIO_GET_CONTROLLER_IDX
DECL|GPIO_GET_CONTROLLER|macro|GPIO_GET_CONTROLLER
DECL|GPIO_GET_PIN_IDX|macro|GPIO_GET_PIN_IDX
DECL|GPIO_GET_PIN|macro|GPIO_GET_PIN
DECL|GPIO_INT_ACTIVE_HIGH|macro|GPIO_INT_ACTIVE_HIGH
DECL|GPIO_INT_ACTIVE_LOW|macro|GPIO_INT_ACTIVE_LOW
DECL|GPIO_INT_CLOCK_SYNC|macro|GPIO_INT_CLOCK_SYNC
DECL|GPIO_INT_DEBOUNCE|macro|GPIO_INT_DEBOUNCE
DECL|GPIO_INT_DOUBLE_EDGE|macro|GPIO_INT_DOUBLE_EDGE
DECL|GPIO_INT_EDGE|macro|GPIO_INT_EDGE
DECL|GPIO_INT_LEVEL|macro|GPIO_INT_LEVEL
DECL|GPIO_INT|macro|GPIO_INT
DECL|GPIO_PIN_DISABLE|macro|GPIO_PIN_DISABLE
DECL|GPIO_PIN_ENABLE|macro|GPIO_PIN_ENABLE
DECL|GPIO_PIN_IDX|macro|GPIO_PIN_IDX
DECL|GPIO_PIN|macro|GPIO_PIN
DECL|GPIO_POL_INV|macro|GPIO_POL_INV
DECL|GPIO_POL_MASK|macro|GPIO_POL_MASK
DECL|GPIO_POL_NORMAL|macro|GPIO_POL_NORMAL
DECL|GPIO_POL_POS|macro|GPIO_POL_POS
DECL|GPIO_PUD_MASK|macro|GPIO_PUD_MASK
DECL|GPIO_PUD_NORMAL|macro|GPIO_PUD_NORMAL
DECL|GPIO_PUD_POS|macro|GPIO_PUD_POS
DECL|GPIO_PUD_PULL_DOWN|macro|GPIO_PUD_PULL_DOWN
DECL|GPIO_PUD_PULL_UP|macro|GPIO_PUD_PULL_UP
DECL|__GPIO_H__|macro|__GPIO_H__
DECL|_impl_gpio_config|function|static inline int _impl_gpio_config(struct device *port, int access_op, u32_t pin, int flags)
DECL|_impl_gpio_disable_callback|function|static inline int _impl_gpio_disable_callback(struct device *port, int access_op, u32_t pin)
DECL|_impl_gpio_enable_callback|function|static inline int _impl_gpio_enable_callback(struct device *port, int access_op, u32_t pin)
DECL|_impl_gpio_get_pending_int|function|static inline int _impl_gpio_get_pending_int(struct device *dev)
DECL|_impl_gpio_read|function|static inline int _impl_gpio_read(struct device *port, int access_op, u32_t pin, u32_t *value)
DECL|_impl_gpio_write|function|static inline int _impl_gpio_write(struct device *port, int access_op, u32_t pin, u32_t value)
DECL|config|member|gpio_config_t config;
DECL|disable_callback|member|gpio_disable_callback_t disable_callback;
DECL|enable_callback|member|gpio_enable_callback_t enable_callback;
DECL|get_pending_int|member|gpio_api_get_pending_int get_pending_int;
DECL|gpio_add_callback|function|static inline int gpio_add_callback(struct device *port, struct gpio_callback *callback)
DECL|gpio_api_get_pending_int|typedef|typedef u32_t (*gpio_api_get_pending_int)(struct device *dev);
DECL|gpio_callback_handler_t|typedef|typedef void (*gpio_callback_handler_t)(struct device *port,
DECL|gpio_callback|struct|struct gpio_callback {
DECL|gpio_config_t|typedef|typedef int (*gpio_config_t)(struct device *port, int access_op,
DECL|gpio_controller|member|char *gpio_controller;
DECL|gpio_disable_callback_t|typedef|typedef int (*gpio_disable_callback_t)(struct device *port,
DECL|gpio_driver_api|struct|struct gpio_driver_api {
DECL|gpio_enable_callback_t|typedef|typedef int (*gpio_enable_callback_t)(struct device *port,
DECL|gpio_init_callback|function|static inline void gpio_init_callback(struct gpio_callback *callback, gpio_callback_handler_t handler, u32_t pin_mask)
DECL|gpio_manage_callback_t|typedef|typedef int (*gpio_manage_callback_t)(struct device *port,
DECL|gpio_pin_configure|function|static inline int gpio_pin_configure(struct device *port, u32_t pin, int flags)
DECL|gpio_pin_config|struct|struct gpio_pin_config {
DECL|gpio_pin_disable_callback|function|static inline int gpio_pin_disable_callback(struct device *port, u32_t pin)
DECL|gpio_pin_enable_callback|function|static inline int gpio_pin_enable_callback(struct device *port, u32_t pin)
DECL|gpio_pin_read|function|static inline int gpio_pin_read(struct device *port, u32_t pin,u32_t *value)
DECL|gpio_pin_write|function|static inline int gpio_pin_write(struct device *port, u32_t pin, u32_t value)
DECL|gpio_pin|member|u32_t gpio_pin;
DECL|gpio_port_configure|function|static inline int gpio_port_configure(struct device *port, int flags)
DECL|gpio_port_disable_callback|function|static inline int gpio_port_disable_callback(struct device *port)
DECL|gpio_port_enable_callback|function|static inline int gpio_port_enable_callback(struct device *port)
DECL|gpio_port_read|function|static inline int gpio_port_read(struct device *port, u32_t *value)
DECL|gpio_port_write|function|static inline int gpio_port_write(struct device *port, u32_t value)
DECL|gpio_read_t|typedef|typedef int (*gpio_read_t)(struct device *port, int access_op,
DECL|gpio_remove_callback|function|static inline int gpio_remove_callback(struct device *port, struct gpio_callback *callback)
DECL|gpio_write_t|typedef|typedef int (*gpio_write_t)(struct device *port, int access_op,
DECL|handler|member|gpio_callback_handler_t handler;
DECL|manage_callback|member|gpio_manage_callback_t manage_callback;
DECL|node|member|sys_snode_t node;
DECL|pin_mask|member|u32_t pin_mask;
DECL|read|member|gpio_read_t read;
DECL|write|member|gpio_write_t write;
