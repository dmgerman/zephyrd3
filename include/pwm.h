DECL|PWM_ACCESS_ALL|macro|PWM_ACCESS_ALL
DECL|PWM_ACCESS_BY_PIN|macro|PWM_ACCESS_BY_PIN
DECL|ZEPHYR_INCLUDE_PWM_H_|macro|ZEPHYR_INCLUDE_PWM_H_
DECL|_impl_pwm_get_cycles_per_sec|function|static inline int _impl_pwm_get_cycles_per_sec(struct device *dev, u32_t pwm, u64_t *cycles)
DECL|_impl_pwm_pin_set_cycles|function|static inline int _impl_pwm_pin_set_cycles(struct device *dev, u32_t pwm, u32_t period, u32_t pulse)
DECL|get_cycles_per_sec|member|pwm_get_cycles_per_sec_t get_cycles_per_sec;
DECL|pin_set|member|pwm_pin_set_t pin_set;
DECL|pwm_driver_api|struct|struct pwm_driver_api {
DECL|pwm_get_cycles_per_sec_t|typedef|typedef int (*pwm_get_cycles_per_sec_t)(struct device *dev, u32_t pwm,
DECL|pwm_pin_set_t|typedef|typedef int (*pwm_pin_set_t)(struct device *dev, u32_t pwm,
DECL|pwm_pin_set_usec|function|static inline int pwm_pin_set_usec(struct device *dev, u32_t pwm, u32_t period, u32_t pulse)
