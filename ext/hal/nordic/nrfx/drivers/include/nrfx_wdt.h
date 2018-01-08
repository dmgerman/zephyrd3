DECL|NRFX_WDT_DEAFULT_CONFIG|macro|NRFX_WDT_DEAFULT_CONFIG
DECL|NRFX_WDT_H__|macro|NRFX_WDT_H__
DECL|behaviour|member|nrf_wdt_behaviour_t behaviour; /**< WDT behaviour when CPU in sleep/halt mode. */
DECL|interrupt_priority|member|uint8_t interrupt_priority; /**< WDT interrupt priority */
DECL|nrfx_wdt_channel_id|typedef|typedef nrf_wdt_rr_register_t nrfx_wdt_channel_id;
DECL|nrfx_wdt_config_t|typedef|} nrfx_wdt_config_t;
DECL|nrfx_wdt_event_handler_t|typedef|typedef void (*nrfx_wdt_event_handler_t)(void);
DECL|nrfx_wdt_ppi_event_addr|function|__STATIC_INLINE uint32_t nrfx_wdt_ppi_event_addr(nrf_wdt_event_t event)
DECL|nrfx_wdt_ppi_task_addr|function|__STATIC_INLINE uint32_t nrfx_wdt_ppi_task_addr(nrf_wdt_task_t task)
DECL|reload_value|member|uint32_t reload_value; /**< WDT reload value in ms. */
