DECL|DEFAULT_PERIOD|macro|DEFAULT_PERIOD
DECL|HW_CLOCK_CYCLES_PER_USEC|macro|HW_CLOCK_CYCLES_PER_USEC
DECL|MAX_HIGH_PERIOD_IN_HW_CLOCK_CYCLES|macro|MAX_HIGH_PERIOD_IN_HW_CLOCK_CYCLES
DECL|MAX_LOW_PERIOD_IN_HW_CLOCK_CYCLES|macro|MAX_LOW_PERIOD_IN_HW_CLOCK_CYCLES
DECL|MAX_PERIOD_IN_HW_CLOCK_CYCLES|macro|MAX_PERIOD_IN_HW_CLOCK_CYCLES
DECL|MAX_PERIOD|macro|MAX_PERIOD
DECL|MIN_PERIOD|macro|MIN_PERIOD
DECL|RP_GET|macro|RP_GET
DECL|RP_GET|macro|RP_GET
DECL|__set_one_port|function|static int __set_one_port(struct device *dev, qm_pwm_t id, u32_t pwm,u32_t on, u32_t off)
DECL|channel_period|member|u32_t channel_period[CONFIG_PWM_QMSI_NUM_PORTS];
DECL|device_power_state|member|u32_t device_power_state;
DECL|pwm_context|variable|pwm_context
DECL|pwm_ctx|variable|pwm_ctx
DECL|pwm_data|struct|struct pwm_data {
DECL|pwm_qmsi_device_ctrl|function|static int pwm_qmsi_device_ctrl(struct device *dev, u32_t ctrl_command,void *context)
DECL|pwm_qmsi_drv_api_funcs|variable|pwm_qmsi_drv_api_funcs
DECL|pwm_qmsi_get_cycles_per_sec|function|static int pwm_qmsi_get_cycles_per_sec(struct device *dev, u32_t pwm, u64_t *cycles)
DECL|pwm_qmsi_get_power_state|function|static u32_t pwm_qmsi_get_power_state(struct device *dev)
DECL|pwm_qmsi_init|function|static int pwm_qmsi_init(struct device *dev)
DECL|pwm_qmsi_pin_set|function|static int pwm_qmsi_pin_set(struct device *dev, u32_t pwm, u32_t period_cycles, u32_t pulse_cycles)
DECL|pwm_qmsi_resume_from_suspend|function|static int pwm_qmsi_resume_from_suspend(struct device *dev)
DECL|pwm_qmsi_set_power_state|function|static void pwm_qmsi_set_power_state(struct device *dev, u32_t power_state)
DECL|pwm_qmsi_set_power_state|macro|pwm_qmsi_set_power_state
DECL|pwm_qmsi_suspend|function|static int pwm_qmsi_suspend(struct device *dev)
DECL|sem|member|struct k_sem sem;
