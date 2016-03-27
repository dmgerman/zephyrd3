DECL|__QM_COMPARATOR_H__|macro|__QM_COMPARATOR_H__
DECL|callback|member|void (*callback)(uint32_t int_status); /* Callback function */
DECL|int_en|member|uint32_t int_en; /* Enable/disable comparator interrupt */
DECL|polarity|member|uint32_t polarity; /* 0b: input>ref; 1b: input<ref */
DECL|power|member|uint32_t power; /* 1b: Normal mode; 0b:Power-down/Shutdown mode */
DECL|qm_ac_config_t|typedef|} qm_ac_config_t;
DECL|reference|member|uint32_t reference; /* 1b: VREF; 0b: AR_PIN */
