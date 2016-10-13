DECL|QM_PWM_MODE_PWM|enumerator|QM_PWM_MODE_PWM = QM_PWM_MODE_PWM_VALUE
DECL|QM_PWM_MODE_TIMER_COUNT|enumerator|QM_PWM_MODE_TIMER_COUNT = QM_PWM_MODE_TIMER_COUNT_VALUE,
DECL|QM_PWM_MODE_TIMER_FREE_RUNNING|enumerator|QM_PWM_MODE_TIMER_FREE_RUNNING = QM_PWM_MODE_TIMER_FREE_RUNNING_VALUE,
DECL|__QM_PWM_H__|macro|__QM_PWM_H__
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data, uint32_t int_status);
DECL|hi_count|member|uint32_t hi_count;
DECL|lo_count|member|uint32_t lo_count;
DECL|mask_interrupt|member|bool mask_interrupt; /**< Mask interrupt. */
DECL|mode|member|qm_pwm_mode_t mode; /**< Pwm mode. */
DECL|qm_pwm_config_t|typedef|} qm_pwm_config_t;
DECL|qm_pwm_mode_t|typedef|} qm_pwm_mode_t;
