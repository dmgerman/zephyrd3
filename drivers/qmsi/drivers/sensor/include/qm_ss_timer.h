DECL|__QM_SS_TIMER_H__|macro|__QM_SS_TIMER_H__
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data);
DECL|count|member|uint32_t count; /**< Final count value. */
DECL|inc_run_only|member|bool inc_run_only;
DECL|int_en|member|bool int_en; /**< Interrupt enable. */
DECL|qm_ss_timer_config_t|typedef|} qm_ss_timer_config_t;
DECL|watchdog_mode|member|bool watchdog_mode; /**< Watchdog mode. */
