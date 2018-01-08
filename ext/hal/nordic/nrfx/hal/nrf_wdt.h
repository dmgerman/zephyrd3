DECL|NRF_WDT_BEHAVIOUR_PAUSE_SLEEP_HALT|enumerator|NRF_WDT_BEHAVIOUR_PAUSE_SLEEP_HALT = 0, /**< WDT will be paused when CPU is in SLEEP or HALT mode. */
DECL|NRF_WDT_BEHAVIOUR_RUN_HALT|enumerator|NRF_WDT_BEHAVIOUR_RUN_HALT = WDT_CONFIG_HALT_Msk, /**< WDT will run when CPU is in HALT mode. */
DECL|NRF_WDT_BEHAVIOUR_RUN_SLEEP_HALT|enumerator|NRF_WDT_BEHAVIOUR_RUN_SLEEP_HALT = WDT_CONFIG_SLEEP_Msk | WDT_CONFIG_HALT_Msk, /**< WDT will run when CPU is in SLEEP or HALT mode. */
DECL|NRF_WDT_BEHAVIOUR_RUN_SLEEP|enumerator|NRF_WDT_BEHAVIOUR_RUN_SLEEP = WDT_CONFIG_SLEEP_Msk, /**< WDT will run when CPU is in SLEEP mode. */
DECL|NRF_WDT_CHANNEL_NUMBER|macro|NRF_WDT_CHANNEL_NUMBER
DECL|NRF_WDT_EVENT_CLEAR|macro|NRF_WDT_EVENT_CLEAR
DECL|NRF_WDT_EVENT_TIMEOUT|enumerator|NRF_WDT_EVENT_TIMEOUT = offsetof(NRF_WDT_Type, EVENTS_TIMEOUT), /**< Event from WDT time-out. */
DECL|NRF_WDT_H__|macro|NRF_WDT_H__
DECL|NRF_WDT_INT_TIMEOUT_MASK|enumerator|NRF_WDT_INT_TIMEOUT_MASK = WDT_INTENSET_TIMEOUT_Msk, /**< WDT interrupt from time-out event. */
DECL|NRF_WDT_RR0|enumerator|NRF_WDT_RR0 = 0, /**< Reload request register 0. */
DECL|NRF_WDT_RR1|enumerator|NRF_WDT_RR1, /**< Reload request register 1. */
DECL|NRF_WDT_RR2|enumerator|NRF_WDT_RR2, /**< Reload request register 2. */
DECL|NRF_WDT_RR3|enumerator|NRF_WDT_RR3, /**< Reload request register 3. */
DECL|NRF_WDT_RR4|enumerator|NRF_WDT_RR4, /**< Reload request register 4. */
DECL|NRF_WDT_RR5|enumerator|NRF_WDT_RR5, /**< Reload request register 5. */
DECL|NRF_WDT_RR6|enumerator|NRF_WDT_RR6, /**< Reload request register 6. */
DECL|NRF_WDT_RR7|enumerator|NRF_WDT_RR7 /**< Reload request register 7. */
DECL|NRF_WDT_RR_VALUE|macro|NRF_WDT_RR_VALUE
DECL|NRF_WDT_TASK_SET|macro|NRF_WDT_TASK_SET
DECL|NRF_WDT_TASK_START|enumerator|NRF_WDT_TASK_START = offsetof(NRF_WDT_Type, TASKS_START), /**< Task for starting WDT. */
DECL|nrf_wdt_behaviour_set|function|__STATIC_INLINE void nrf_wdt_behaviour_set(nrf_wdt_behaviour_t behaviour)
DECL|nrf_wdt_behaviour_t|typedef|} nrf_wdt_behaviour_t;
DECL|nrf_wdt_event_address_get|function|__STATIC_INLINE uint32_t nrf_wdt_event_address_get(nrf_wdt_event_t event)
DECL|nrf_wdt_event_check|function|__STATIC_INLINE bool nrf_wdt_event_check(nrf_wdt_event_t event)
DECL|nrf_wdt_event_clear|function|__STATIC_INLINE void nrf_wdt_event_clear(nrf_wdt_event_t event)
DECL|nrf_wdt_event_t|typedef|} nrf_wdt_event_t;
DECL|nrf_wdt_int_disable|function|__STATIC_INLINE void nrf_wdt_int_disable(uint32_t int_mask)
DECL|nrf_wdt_int_enable_check|function|__STATIC_INLINE bool nrf_wdt_int_enable_check(uint32_t int_mask)
DECL|nrf_wdt_int_enable|function|__STATIC_INLINE void nrf_wdt_int_enable(uint32_t int_mask)
DECL|nrf_wdt_int_mask_t|typedef|} nrf_wdt_int_mask_t;
DECL|nrf_wdt_reload_request_disable|function|__STATIC_INLINE void nrf_wdt_reload_request_disable(nrf_wdt_rr_register_t rr_register)
DECL|nrf_wdt_reload_request_enable|function|__STATIC_INLINE void nrf_wdt_reload_request_enable(nrf_wdt_rr_register_t rr_register)
DECL|nrf_wdt_reload_request_is_enabled|function|__STATIC_INLINE bool nrf_wdt_reload_request_is_enabled(nrf_wdt_rr_register_t rr_register)
DECL|nrf_wdt_reload_request_set|function|__STATIC_INLINE void nrf_wdt_reload_request_set(nrf_wdt_rr_register_t rr_register)
DECL|nrf_wdt_reload_value_get|function|__STATIC_INLINE uint32_t nrf_wdt_reload_value_get(void)
DECL|nrf_wdt_reload_value_set|function|__STATIC_INLINE void nrf_wdt_reload_value_set(uint32_t reload_value)
DECL|nrf_wdt_request_status|function|__STATIC_INLINE bool nrf_wdt_request_status(nrf_wdt_rr_register_t rr_register)
DECL|nrf_wdt_rr_register_t|typedef|} nrf_wdt_rr_register_t;
DECL|nrf_wdt_started|function|__STATIC_INLINE bool nrf_wdt_started(void)
DECL|nrf_wdt_task_address_get|function|__STATIC_INLINE uint32_t nrf_wdt_task_address_get(nrf_wdt_task_t task)
DECL|nrf_wdt_task_trigger|function|__STATIC_INLINE void nrf_wdt_task_trigger(nrf_wdt_task_t task)
DECL|nrf_wdt_task_t|typedef|} nrf_wdt_task_t;
