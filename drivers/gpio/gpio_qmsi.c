DECL|INTEN|macro|INTEN
DECL|INTMASK|macro|INTMASK
DECL|INT_GPIO_MASK|macro|INT_GPIO_MASK
DECL|PORTA_EOI|macro|PORTA_EOI
DECL|addr|member|void *addr;
DECL|api_funcs|variable|api_funcs
DECL|callback|member|gpio_callback_t callback;
DECL|gpio_0_config|variable|gpio_0_config
DECL|gpio_0_runtime|variable|gpio_0_runtime
DECL|gpio_qmsi_0_int_callback|function|static void gpio_qmsi_0_int_callback(uint32_t status)
DECL|gpio_qmsi_config|function|static inline int gpio_qmsi_config(struct device *port, int access_op, uint32_t pin, int flags)
DECL|gpio_qmsi_config|struct|struct gpio_qmsi_config {
DECL|gpio_qmsi_disable_callback|function|static inline int gpio_qmsi_disable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_qmsi_enable_callback|function|static inline int gpio_qmsi_enable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_qmsi_init|function|int gpio_qmsi_init(struct device *port)
DECL|gpio_qmsi_read|function|static inline int gpio_qmsi_read(struct device *port, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_qmsi_resume_port|function|static inline int gpio_qmsi_resume_port(struct device *port)
DECL|gpio_qmsi_runtime|struct|struct gpio_qmsi_runtime {
DECL|gpio_qmsi_set_callback|function|static inline int gpio_qmsi_set_callback(struct device *port, gpio_callback_t callback)
DECL|gpio_qmsi_suspend_port|function|static inline int gpio_qmsi_suspend_port(struct device *port)
DECL|gpio_qmsi_write|function|static inline int gpio_qmsi_write(struct device *port, int access_op,uint32_t pin, uint32_t value)
DECL|gpio|member|qm_gpio_t gpio;
DECL|num_pins|member|uint8_t num_pins;
DECL|pin_callbacks|member|uint32_t pin_callbacks;
DECL|port_callback|member|uint8_t port_callback;
DECL|qmsi_pin_config|function|static inline void qmsi_pin_config(struct device *port, uint32_t pin, int flags)
DECL|qmsi_port_config|function|static inline void qmsi_port_config(struct device *port, int flags)
DECL|qmsi_write_bit|function|static void qmsi_write_bit(uint32_t *target, uint8_t bit, uint8_t value)
