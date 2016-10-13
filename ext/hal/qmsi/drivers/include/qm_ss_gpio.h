DECL|QM_SS_GPIO_HIGH|enumerator|QM_SS_GPIO_HIGH, /**< Pin level low. */
DECL|QM_SS_GPIO_LOW|enumerator|QM_SS_GPIO_LOW = 0, /**< Pin level high. */
DECL|QM_SS_GPIO_STATE_NUM|enumerator|QM_SS_GPIO_STATE_NUM /**< Number of states. */
DECL|__QM_SS_GPIO_H__|macro|__QM_SS_GPIO_H__
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data, uint32_t int_status);
DECL|direction|member|uint32_t direction; /**< SS GPIO direction, 0b: input, 1b: output. */
DECL|int_bothedge|member|uint32_t int_bothedge; /**< Interrupt on rising and falling edges */
DECL|int_debounce|member|uint32_t int_debounce; /**< Debounce on/off. */
DECL|int_en|member|uint32_t int_en; /**< Interrupt enable. */
DECL|int_polarity|member|uint32_t int_polarity; /**< Interrupt polarity, 0b: low, 1b: high. */
DECL|int_type|member|uint32_t int_type; /**< Interrupt type, 0b: level; 1b: edge. */
DECL|qm_ss_gpio_port_config_t|typedef|} qm_ss_gpio_port_config_t;
DECL|qm_ss_gpio_state_t|typedef|} qm_ss_gpio_state_t;
