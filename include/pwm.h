DECL|PWM_ACCESS_ALL|macro|PWM_ACCESS_ALL
DECL|PWM_ACCESS_BY_PIN|macro|PWM_ACCESS_BY_PIN
DECL|__PWM_H__|macro|__PWM_H__
DECL|config|member|pwm_config_t config;
DECL|get_cycles_per_sec|member|pwm_get_cycles_per_sec_t get_cycles_per_sec;
DECL|pin_set|member|pwm_pin_set_t pin_set;
DECL|pwm_all_configure|function|static inline int __deprecated pwm_all_configure(struct device *dev, int flags)
DECL|pwm_all_period|function|static inline int __deprecated pwm_all_period(struct device *dev, uint32_t period)
DECL|pwm_all_set_duty_cycle|function|static inline int __deprecated pwm_all_set_duty_cycle(struct device *dev, uint8_t duty)
DECL|pwm_all_set_phase|function|static inline int __deprecated pwm_all_set_phase(struct device *dev, uint8_t phase)
DECL|pwm_all_set_values|function|static inline int __deprecated pwm_all_set_values(struct device *dev, uint32_t on, uint32_t off)
DECL|pwm_config_t|typedef|typedef int (*pwm_config_t)(struct device *dev, int access_op,
DECL|pwm_driver_api|struct|struct pwm_driver_api {
DECL|pwm_get_cycles_per_sec_t|typedef|typedef int (*pwm_get_cycles_per_sec_t)(struct device *dev, uint32_t pwm,
DECL|pwm_get_cycles_per_sec|function|static inline int pwm_get_cycles_per_sec(struct device *dev, uint32_t pwm, uint64_t *cycles)
DECL|pwm_pin_configure|function|static inline int __deprecated pwm_pin_configure(struct device *dev, uint8_t pwm, int flags)
DECL|pwm_pin_set_cycles|function|static inline int pwm_pin_set_cycles(struct device *dev, uint32_t pwm, uint32_t period, uint32_t pulse)
DECL|pwm_pin_set_duty_cycle|function|static inline int __deprecated pwm_pin_set_duty_cycle(struct device *dev, uint32_t pwm, uint8_t duty)
DECL|pwm_pin_set_period|function|static inline int __deprecated pwm_pin_set_period(struct device *dev, uint32_t pwm, uint32_t period)
DECL|pwm_pin_set_phase|function|static inline int __deprecated pwm_pin_set_phase(struct device *dev, uint32_t pwm, uint8_t phase)
DECL|pwm_pin_set_t|typedef|typedef int (*pwm_pin_set_t)(struct device *dev, uint32_t pwm,
DECL|pwm_pin_set_usec|function|static inline int pwm_pin_set_usec(struct device *dev, uint32_t pwm, uint32_t period, uint32_t pulse)
DECL|pwm_pin_set_values|function|static inline int __deprecated pwm_pin_set_values(struct device *dev, uint32_t pwm, uint32_t on, uint32_t off)
DECL|pwm_set_duty_cycle_t|typedef|typedef int (*pwm_set_duty_cycle_t)(struct device *dev, int access_op,
DECL|pwm_set_period_t|typedef|typedef int (*pwm_set_period_t)(struct device *dev, int access_op,
DECL|pwm_set_phase_t|typedef|typedef int (*pwm_set_phase_t)(struct device *dev, int access_op,
DECL|pwm_set_values_t|typedef|typedef int (*pwm_set_values_t)(struct device *dev, int access_op,
DECL|set_duty_cycle|member|pwm_set_duty_cycle_t set_duty_cycle;
DECL|set_period|member|pwm_set_period_t set_period;
DECL|set_phase|member|pwm_set_phase_t set_phase;
DECL|set_values|member|pwm_set_values_t set_values;
