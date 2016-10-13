DECL|QM_WDT_MODE_INTERRUPT_RESET|enumerator|QM_WDT_MODE_INTERRUPT_RESET
DECL|QM_WDT_MODE_RESET|enumerator|QM_WDT_MODE_RESET = 0,
DECL|__QM_WDT_H__|macro|__QM_WDT_H__
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data);
DECL|mode|member|qm_wdt_mode_t mode; /**< Watchdog response mode. */
DECL|pause_en|member|bool pause_en;
DECL|qm_wdt_config_t|typedef|} qm_wdt_config_t;
DECL|qm_wdt_mode_t|typedef|} qm_wdt_mode_t;
DECL|timeout|member|uint32_t timeout;
