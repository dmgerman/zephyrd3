DECL|COMBINE_MODE_SUPPORT|macro|COMBINE_MODE_SUPPORT
DECL|MAX_PWM_OUT|macro|MAX_PWM_OUT
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|pwm_ftm_0_cfg|variable|pwm_ftm_0_cfg
DECL|pwm_ftm_0_drvdata|variable|pwm_ftm_0_drvdata
DECL|pwm_ftm_1_cfg|variable|pwm_ftm_1_cfg
DECL|pwm_ftm_1_drvdata|variable|pwm_ftm_1_drvdata
DECL|pwm_ftm_2_cfg|variable|pwm_ftm_2_cfg
DECL|pwm_ftm_2_drvdata|variable|pwm_ftm_2_drvdata
DECL|pwm_ftm_3_cfg|variable|pwm_ftm_3_cfg
DECL|pwm_ftm_3_drvdata|variable|pwm_ftm_3_drvdata
DECL|pwm_ftm_clk_enable|function|static int pwm_ftm_clk_enable(uint8_t ftm_num)
DECL|pwm_ftm_configure|function|static int pwm_ftm_configure(struct device *dev, int access_op, uint32_t channel, int flags)
DECL|pwm_ftm_device_ctrl|function|static int pwm_ftm_device_ctrl(struct device *dev, uint32_t ctrl_command, void *context)
DECL|pwm_ftm_drv_api_funcs|variable|pwm_ftm_drv_api_funcs
DECL|pwm_ftm_get_power_state|function|static uint32_t pwm_ftm_get_power_state(struct device *dev)
DECL|pwm_ftm_init|function|int pwm_ftm_init(struct device *dev)
DECL|pwm_ftm_resume_from_suspend|function|static int pwm_ftm_resume_from_suspend(struct device *dev)
DECL|pwm_ftm_set_duty_cycle|function|static int pwm_ftm_set_duty_cycle(struct device *dev, int access_op, uint32_t channel, uint8_t duty)
DECL|pwm_ftm_set_phase|function|static int pwm_ftm_set_phase(struct device *dev, int access_op, uint32_t channel, uint8_t phase)
DECL|pwm_ftm_set_power_state|function|static void pwm_ftm_set_power_state(struct device *dev, uint32_t power_state)
DECL|pwm_ftm_set_power_state|macro|pwm_ftm_set_power_state
DECL|pwm_ftm_set_values|function|static int pwm_ftm_set_values(struct device *dev, int access_op, uint32_t channel, uint32_t on, uint32_t off)
DECL|pwm_ftm_suspend|function|static int pwm_ftm_suspend(struct device *dev)
