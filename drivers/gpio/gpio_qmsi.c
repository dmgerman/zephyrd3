DECL|RP_GET|macro|RP_GET
DECL|RP_GET|macro|RP_GET
DECL|api_funcs|variable|api_funcs
DECL|callbacks|member|sys_slist_t callbacks;
DECL|device_power_state|member|u32_t device_power_state;
DECL|gpio_0_config|variable|gpio_0_config
DECL|gpio_0_runtime|variable|gpio_0_runtime
DECL|gpio_aon_config|variable|gpio_aon_config
DECL|gpio_aon_device_ctrl|function|static int gpio_aon_device_ctrl(struct device *port, u32_t ctrl_command,void *context)
DECL|gpio_aon_runtime|variable|gpio_aon_runtime
DECL|gpio_ctx|variable|gpio_ctx
DECL|gpio_qmsi_callback|function|static void gpio_qmsi_callback(void *data, u32_t status)
DECL|gpio_qmsi_config|function|static inline int gpio_qmsi_config(struct device *port, int access_op, u32_t pin, int flags)
DECL|gpio_qmsi_config|struct|struct gpio_qmsi_config {
DECL|gpio_qmsi_device_ctrl|function|static int gpio_qmsi_device_ctrl(struct device *port, u32_t ctrl_command, void *context)
DECL|gpio_qmsi_disable_callback|function|static inline int gpio_qmsi_disable_callback(struct device *port, int access_op, u32_t pin)
DECL|gpio_qmsi_enable_callback|function|static inline int gpio_qmsi_enable_callback(struct device *port, int access_op, u32_t pin)
DECL|gpio_qmsi_get_pending_int|function|static u32_t gpio_qmsi_get_pending_int(struct device *dev)
DECL|gpio_qmsi_get_power_state|function|static u32_t gpio_qmsi_get_power_state(struct device *dev)
DECL|gpio_qmsi_init|function|static int gpio_qmsi_init(struct device *port)
DECL|gpio_qmsi_manage_callback|function|static inline int gpio_qmsi_manage_callback(struct device *port, struct gpio_callback *callback, bool set)
DECL|gpio_qmsi_read|function|static inline int gpio_qmsi_read(struct device *port, int access_op, u32_t pin, u32_t *value)
DECL|gpio_qmsi_runtime|struct|struct gpio_qmsi_runtime {
DECL|gpio_qmsi_set_power_state|function|static void gpio_qmsi_set_power_state(struct device *dev, u32_t power_state)
DECL|gpio_qmsi_set_power_state|macro|gpio_qmsi_set_power_state
DECL|gpio_qmsi_write|function|static inline int gpio_qmsi_write(struct device *port, int access_op, u32_t pin, u32_t value)
DECL|gpio_resume_device_from_suspend|function|static int gpio_resume_device_from_suspend(struct device *dev)
DECL|gpio_suspend_device|function|static int gpio_suspend_device(struct device *dev)
DECL|gpio|member|qm_gpio_t gpio;
DECL|num_pins|member|u8_t num_pins;
DECL|pin_callbacks|member|u32_t pin_callbacks;
DECL|qmsi_pin_config|function|static inline void qmsi_pin_config(struct device *port, u32_t pin, int flags)
DECL|qmsi_port_config|function|static inline void qmsi_port_config(struct device *port, int flags)
DECL|qmsi_write_bit|function|static void qmsi_write_bit(u32_t *target, u8_t bit, u8_t value)
DECL|sem|member|struct k_sem sem;
