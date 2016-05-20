DECL|__QM_COMPARATOR_H__|macro|__QM_COMPARATOR_H__
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data, uint32_t int_status);
DECL|int_en|member|uint32_t int_en; /**< Interrupt enable. */
DECL|polarity|member|uint32_t polarity; /**< 0b: input>ref; 1b: input<ref */
DECL|power|member|uint32_t power; /**< 1b: Normal mode; 0b:Power-down/Shutdown mode */
DECL|qm_ac_config_t|typedef|} qm_ac_config_t;
DECL|reference|member|uint32_t reference; /**< Reference voltage, 1b: VREF; 0b: AR_PIN. */
