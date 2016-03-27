DECL|PWM_START|macro|PWM_START
DECL|QM_PWM_CONF_INT_EN_MASK|macro|QM_PWM_CONF_INT_EN_MASK
DECL|QM_PWM_CONF_MODE_MASK|macro|QM_PWM_CONF_MODE_MASK
DECL|QM_PWM_MODE_PWM|enumerator|QM_PWM_MODE_PWM = 10
DECL|QM_PWM_MODE_TIMER_COUNT|enumerator|QM_PWM_MODE_TIMER_COUNT = 2,
DECL|QM_PWM_MODE_TIMER_FREE_RUNNING|enumerator|QM_PWM_MODE_TIMER_FREE_RUNNING = 0,
DECL|__QM_PWM_H__|macro|__QM_PWM_H__
DECL|callback|member|void (*callback)(uint32_t int_status);
DECL|hi_count|member|uint32_t hi_count; /* Number of cycles the PWM output is driven high.
DECL|lo_count|member|uint32_t lo_count; /* Number of cycles the PWM output is driven low. In
DECL|mask_interrupt|member|bool mask_interrupt;
DECL|mode|member|qm_pwm_mode_t mode;
DECL|qm_pwm_config_t|typedef|} qm_pwm_config_t;
DECL|qm_pwm_mode_t|typedef|} qm_pwm_mode_t;
