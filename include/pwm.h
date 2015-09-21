DECL|PWM_ACCESS_ALL|macro|PWM_ACCESS_ALL
DECL|PWM_ACCESS_BY_PIN|macro|PWM_ACCESS_BY_PIN
DECL|__PWM_H__|macro|__PWM_H__
DECL|config|member|pwm_config_t config;
DECL|pwm_all_configure|function|static inline int pwm_all_configure(struct device *dev, int flags)
DECL|pwm_all_set_duty_cycle|function|static inline int pwm_all_set_duty_cycle(struct device *dev, uint8_t duty)
DECL|pwm_all_set_values|function|static inline int pwm_all_set_values(struct device *dev, uint32_t on, uint32_t off)
DECL|pwm_config_t|typedef|typedef int (*pwm_config_t)(struct device *dev, int access_op,
DECL|pwm_driver_api|struct|struct pwm_driver_api {
DECL|pwm_pin_configure|function|static inline int pwm_pin_configure(struct device *dev, uint8_t pwm, int flags)
DECL|pwm_pin_set_duty_cycle|function|static inline int pwm_pin_set_duty_cycle(struct device *dev, uint32_t pwm, uint8_t duty)
DECL|pwm_pin_set_values|function|static inline int pwm_pin_set_values(struct device *dev, uint32_t pwm, uint32_t on, uint32_t off)
DECL|pwm_resume_dev_t|typedef|typedef int (*pwm_resume_dev_t)(struct device *dev);
DECL|pwm_resume|function|static inline int pwm_resume(struct device *dev)
DECL|pwm_set_duty_cycle_t|typedef|typedef int (*pwm_set_duty_cycle_t)(struct device *dev, int access_op,
DECL|pwm_set_values_t|typedef|typedef int (*pwm_set_values_t)(struct device *dev, int access_op,
DECL|pwm_suspend_dev_t|typedef|typedef int (*pwm_suspend_dev_t)(struct device *dev);
DECL|pwm_suspend|function|static inline int pwm_suspend(struct device *dev)
DECL|resume|member|pwm_resume_dev_t resume;
DECL|set_duty_cycle|member|pwm_set_duty_cycle_t set_duty_cycle;
DECL|set_values|member|pwm_set_values_t set_values;
DECL|suspend|member|pwm_suspend_dev_t suspend;
