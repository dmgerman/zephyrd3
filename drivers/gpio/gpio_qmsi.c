DECL|api_funcs|variable|api_funcs
DECL|callbacks|member|sys_slist_t callbacks;
DECL|gpio_0_config|variable|gpio_0_config
DECL|gpio_0_runtime|variable|gpio_0_runtime
DECL|gpio_0|variable|gpio_0
DECL|gpio_aon_config|variable|gpio_aon_config
DECL|gpio_aon_runtime|variable|gpio_aon_runtime
DECL|gpio_aon|variable|gpio_aon
DECL|gpio_qmsi_0_int_callback|function|static void gpio_qmsi_0_int_callback(uint32_t status)
DECL|gpio_qmsi_aon_int_callback|function|static void gpio_qmsi_aon_int_callback(uint32_t status)
DECL|gpio_qmsi_callback|function|static void gpio_qmsi_callback(struct device *port, uint32_t status)
DECL|gpio_qmsi_config|function|static inline int gpio_qmsi_config(struct device *port, int access_op, uint32_t pin, int flags)
DECL|gpio_qmsi_config|struct|struct gpio_qmsi_config {
DECL|gpio_qmsi_disable_callback|function|static inline int gpio_qmsi_disable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_qmsi_enable_callback|function|static inline int gpio_qmsi_enable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_qmsi_init|function|int gpio_qmsi_init(struct device *port)
DECL|gpio_qmsi_manage_callback|function|static inline int gpio_qmsi_manage_callback(struct device *port, struct gpio_callback *callback, bool set)
DECL|gpio_qmsi_read|function|static inline int gpio_qmsi_read(struct device *port, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_qmsi_runtime|struct|struct gpio_qmsi_runtime {
DECL|gpio_qmsi_write|function|static inline int gpio_qmsi_write(struct device *port, int access_op, uint32_t pin, uint32_t value)
DECL|gpio|member|qm_gpio_t gpio;
DECL|num_pins|member|uint8_t num_pins;
DECL|pin_callbacks|member|uint32_t pin_callbacks;
DECL|qmsi_pin_config|function|static inline void qmsi_pin_config(struct device *port, uint32_t pin, int flags)
DECL|qmsi_port_config|function|static inline void qmsi_port_config(struct device *port, int flags)
DECL|qmsi_write_bit|function|static void qmsi_write_bit(uint32_t *target, uint8_t bit, uint8_t value)
