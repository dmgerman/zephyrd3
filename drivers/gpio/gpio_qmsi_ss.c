DECL|RP_GET|macro|RP_GET
DECL|RP_GET|macro|RP_GET
DECL|api_funcs|variable|api_funcs
DECL|callbacks|member|sys_slist_t callbacks;
DECL|gpio_1_runtime|variable|gpio_1_runtime
DECL|gpio_critical_region_end|function|static void gpio_critical_region_end(struct device *dev)
DECL|gpio_critical_region_start|function|static void gpio_critical_region_start(struct device *dev)
DECL|gpio_reentrancy_init|function|static void gpio_reentrancy_init(struct device *dev)
DECL|gpio|member|qm_ss_gpio_t gpio;
DECL|num_pins|member|uint8_t num_pins;
DECL|pin_callbacks|member|uint32_t pin_callbacks;
DECL|reentrancy_protection|variable|reentrancy_protection
DECL|reentrancy_protection|variable|reentrancy_protection
DECL|sem|member|struct k_sem sem;
DECL|ss_gpio_0_config|variable|ss_gpio_0_config
DECL|ss_gpio_0_runtime|variable|ss_gpio_0_runtime
DECL|ss_gpio_1_config|variable|ss_gpio_1_config
DECL|ss_gpio_isr|function|void ss_gpio_isr(void *arg)
DECL|ss_gpio_qmsi_callback|function|static void ss_gpio_qmsi_callback(void *data, uint32_t status)
DECL|ss_gpio_qmsi_config|function|static inline int ss_gpio_qmsi_config(struct device *port, int access_op, uint32_t pin, int flags)
DECL|ss_gpio_qmsi_config|struct|struct ss_gpio_qmsi_config {
DECL|ss_gpio_qmsi_disable_callback|function|static inline int ss_gpio_qmsi_disable_callback(struct device *port,int access_op, uint32_t pin)
DECL|ss_gpio_qmsi_enable_callback|function|static inline int ss_gpio_qmsi_enable_callback(struct device *port, int access_op, uint32_t pin)
DECL|ss_gpio_qmsi_init|function|static int ss_gpio_qmsi_init(struct device *port)
DECL|ss_gpio_qmsi_manage_callback|function|static inline int ss_gpio_qmsi_manage_callback(struct device *port, struct gpio_callback *callback, bool set)
DECL|ss_gpio_qmsi_read|function|static inline int ss_gpio_qmsi_read(struct device *port, int access_op, uint32_t pin, uint32_t *value)
DECL|ss_gpio_qmsi_runtime|struct|struct ss_gpio_qmsi_runtime {
DECL|ss_gpio_qmsi_write|function|static inline int ss_gpio_qmsi_write(struct device *port, int access_op, uint32_t pin, uint32_t value)
DECL|ss_qmsi_pin_config|function|static inline void ss_qmsi_pin_config(struct device *port, uint32_t pin, int flags)
DECL|ss_qmsi_port_config|function|static inline void ss_qmsi_port_config(struct device *port, int flags)
DECL|ss_qmsi_write_bit|function|static void ss_qmsi_write_bit(uint32_t *target, uint8_t bit, uint8_t value)
