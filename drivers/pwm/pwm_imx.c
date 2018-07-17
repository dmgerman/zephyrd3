DECL|DEV_BASE|macro|DEV_BASE
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|PWM_PWMCR_SWR|macro|PWM_PWMCR_SWR
DECL|PWM_PWMSR_FIFOAV_4WORDS|macro|PWM_PWMSR_FIFOAV_4WORDS
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|base|member|PWM_Type *base;
DECL|imx_pwm_config_1|variable|imx_pwm_config_1
DECL|imx_pwm_config_2|variable|imx_pwm_config_2
DECL|imx_pwm_config_3|variable|imx_pwm_config_3
DECL|imx_pwm_config_4|variable|imx_pwm_config_4
DECL|imx_pwm_config|struct|struct imx_pwm_config {
DECL|imx_pwm_data_1|variable|imx_pwm_data_1
DECL|imx_pwm_data_2|variable|imx_pwm_data_2
DECL|imx_pwm_data_3|variable|imx_pwm_data_3
DECL|imx_pwm_data_4|variable|imx_pwm_data_4
DECL|imx_pwm_data|struct|struct imx_pwm_data {
DECL|imx_pwm_driver_api|variable|imx_pwm_driver_api
DECL|imx_pwm_get_cycles_per_sec|function|static int imx_pwm_get_cycles_per_sec(struct device *dev, u32_t pwm, u64_t *cycles)
DECL|imx_pwm_init|function|static int imx_pwm_init(struct device *dev)
DECL|imx_pwm_is_enabled|function|static bool imx_pwm_is_enabled(PWM_Type *base)
DECL|imx_pwm_pin_set|function|static int imx_pwm_pin_set(struct device *dev, u32_t pwm, u32_t period_cycles, u32_t pulse_cycles)
DECL|period_cycles|member|u32_t period_cycles;
DECL|prescaler|member|u16_t prescaler;
