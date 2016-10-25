DECL|RP_GET|macro|RP_GET
DECL|RP_GET|macro|RP_GET
DECL|api_funcs|variable|api_funcs
DECL|callbacks|member|sys_slist_t callbacks;
DECL|device_power_state|member|uint32_t device_power_state;
DECL|gpio_0_config|variable|gpio_0_config
DECL|gpio_0_runtime|variable|gpio_0_runtime
DECL|gpio_aon_config|variable|gpio_aon_config
DECL|gpio_aon_device_ctrl|function|static int gpio_aon_device_ctrl(struct device *port, uint32_t ctrl_command,void *context)
DECL|gpio_aon_resume_device_from_suspend|function|static int gpio_aon_resume_device_from_suspend(struct device *dev)
DECL|gpio_aon_runtime|variable|gpio_aon_runtime
DECL|gpio_aon_suspend_device|function|static int gpio_aon_suspend_device(struct device *dev)
DECL|gpio_critical_region_end|function|static void gpio_critical_region_end(struct device *dev)
DECL|gpio_critical_region_start|function|static void gpio_critical_region_start(struct device *dev)
DECL|gpio_qmsi_0_int_callback|function|static void gpio_qmsi_0_int_callback(void *data, uint32_t status)
DECL|gpio_qmsi_aon_int_callback|function|static void gpio_qmsi_aon_int_callback(void *data, uint32_t status)
DECL|gpio_qmsi_callback|function|static void gpio_qmsi_callback(struct device *port, uint32_t status)
DECL|gpio_qmsi_config|function|static inline int gpio_qmsi_config(struct device *port, int access_op, uint32_t pin, int flags)
DECL|gpio_qmsi_config|struct|struct gpio_qmsi_config {
DECL|gpio_qmsi_device_ctrl|function|static int gpio_qmsi_device_ctrl(struct device *port, uint32_t ctrl_command, void *context)
DECL|gpio_qmsi_disable_callback|function|static inline int gpio_qmsi_disable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_qmsi_enable_callback|function|static inline int gpio_qmsi_enable_callback(struct device *port, int access_op, uint32_t pin)
DECL|gpio_qmsi_get_power_state|function|static uint32_t gpio_qmsi_get_power_state(struct device *dev)
DECL|gpio_qmsi_init|function|static int gpio_qmsi_init(struct device *port)
DECL|gpio_qmsi_manage_callback|function|static inline int gpio_qmsi_manage_callback(struct device *port, struct gpio_callback *callback, bool set)
DECL|gpio_qmsi_read|function|static inline int gpio_qmsi_read(struct device *port, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_qmsi_runtime|struct|struct gpio_qmsi_runtime {
DECL|gpio_qmsi_set_power_state|function|static void gpio_qmsi_set_power_state(struct device *dev, uint32_t power_state)
DECL|gpio_qmsi_set_power_state|macro|gpio_qmsi_set_power_state
DECL|gpio_qmsi_write|function|static inline int gpio_qmsi_write(struct device *port, int access_op, uint32_t pin, uint32_t value)
DECL|gpio_reentrancy_init|function|static void gpio_reentrancy_init(struct device *dev)
DECL|gpio_resume_device_from_suspend|function|static int gpio_resume_device_from_suspend(struct device *dev)
DECL|gpio_suspend_device|function|static int gpio_suspend_device(struct device *dev)
DECL|gpio|member|qm_gpio_t gpio;
DECL|int_gpio_aon_mask_save|variable|int_gpio_aon_mask_save
DECL|int_gpio_mask_save|variable|int_gpio_mask_save
DECL|num_pins|member|uint8_t num_pins;
DECL|pin_callbacks|member|uint32_t pin_callbacks;
DECL|qmsi_pin_config|function|static inline void qmsi_pin_config(struct device *port, uint32_t pin, int flags)
DECL|qmsi_port_config|function|static inline void qmsi_port_config(struct device *port, int flags)
DECL|qmsi_write_bit|function|static void qmsi_write_bit(uint32_t *target, uint8_t bit, uint8_t value)
DECL|reentrancy_protection|variable|reentrancy_protection
DECL|reentrancy_protection|variable|reentrancy_protection
DECL|save_reg|variable|save_reg
DECL|sem|member|struct nano_sem sem;
