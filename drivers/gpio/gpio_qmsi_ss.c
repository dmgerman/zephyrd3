DECL|RP_GET|macro|RP_GET
DECL|RP_GET|macro|RP_GET
DECL|api_funcs|variable|api_funcs
DECL|callbacks|member|sys_slist_t callbacks;
DECL|device_power_state|member|u32_t device_power_state;
DECL|gpio_1_runtime|variable|gpio_1_runtime
DECL|gpio_ctx|member|qm_ss_gpio_context_t gpio_ctx;
DECL|gpio|member|qm_ss_gpio_t gpio;
DECL|num_pins|member|u8_t num_pins;
DECL|pin_callbacks|member|u32_t pin_callbacks;
DECL|sem|member|struct k_sem sem;
DECL|ss_gpio_0_config|variable|ss_gpio_0_config
DECL|ss_gpio_0_runtime|variable|ss_gpio_0_runtime
DECL|ss_gpio_1_config|variable|ss_gpio_1_config
DECL|ss_gpio_isr|function|void ss_gpio_isr(void *arg)
DECL|ss_gpio_qmsi_callback|function|static void ss_gpio_qmsi_callback(void *data, uint32_t status)
DECL|ss_gpio_qmsi_config|function|static inline int ss_gpio_qmsi_config(struct device *port, int access_op, u32_t pin, int flags)
DECL|ss_gpio_qmsi_config|struct|struct ss_gpio_qmsi_config {
DECL|ss_gpio_qmsi_device_ctrl|function|static int ss_gpio_qmsi_device_ctrl(struct device *port, u32_t ctrl_command, void *context)
DECL|ss_gpio_qmsi_disable_callback|function|static inline int ss_gpio_qmsi_disable_callback(struct device *port,int access_op, u32_t pin)
DECL|ss_gpio_qmsi_enable_callback|function|static inline int ss_gpio_qmsi_enable_callback(struct device *port, int access_op, u32_t pin)
DECL|ss_gpio_qmsi_get_power_state|function|static u32_t ss_gpio_qmsi_get_power_state(struct device *dev)
DECL|ss_gpio_qmsi_init|function|static int ss_gpio_qmsi_init(struct device *port)
DECL|ss_gpio_qmsi_manage_callback|function|static inline int ss_gpio_qmsi_manage_callback(struct device *port, struct gpio_callback *callback, bool set)
DECL|ss_gpio_qmsi_read|function|static inline int ss_gpio_qmsi_read(struct device *port, int access_op, u32_t pin, u32_t *value)
DECL|ss_gpio_qmsi_runtime|struct|struct ss_gpio_qmsi_runtime {
DECL|ss_gpio_qmsi_set_power_state|function|static void ss_gpio_qmsi_set_power_state(struct device *dev, u32_t power_state)
DECL|ss_gpio_qmsi_set_power_state|macro|ss_gpio_qmsi_set_power_state
DECL|ss_gpio_qmsi_write|function|static inline int ss_gpio_qmsi_write(struct device *port, int access_op, u32_t pin, u32_t value)
DECL|ss_gpio_resume_device_from_suspend|function|static int ss_gpio_resume_device_from_suspend(struct device *dev)
DECL|ss_gpio_suspend_device|function|static int ss_gpio_suspend_device(struct device *dev)
DECL|ss_qmsi_pin_config|function|static inline void ss_qmsi_pin_config(struct device *port, u8_t pin, int flags)
DECL|ss_qmsi_port_config|function|static inline void ss_qmsi_port_config(struct device *port, int flags)
DECL|ss_qmsi_write_bit|function|static void ss_qmsi_write_bit(u32_t *target, u8_t bit, u8_t value)
