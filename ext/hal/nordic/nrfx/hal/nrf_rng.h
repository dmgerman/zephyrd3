DECL|NRF_RNG_EVENT_CLEAR|macro|NRF_RNG_EVENT_CLEAR
DECL|NRF_RNG_EVENT_VALRDY|enumerator|NRF_RNG_EVENT_VALRDY = offsetof(NRF_RNG_Type, EVENTS_VALRDY) /**< New random number generated event. */
DECL|NRF_RNG_H__|macro|NRF_RNG_H__
DECL|NRF_RNG_INT_VALRDY_MASK|enumerator|NRF_RNG_INT_VALRDY_MASK = RNG_INTENSET_VALRDY_Msk /**< Mask for enabling or disabling an interrupt on VALRDY event. */
DECL|NRF_RNG_SHORT_VALRDY_STOP_MASK|enumerator|NRF_RNG_SHORT_VALRDY_STOP_MASK = RNG_SHORTS_VALRDY_STOP_Msk /**< Mask for setting shortcut between EVENT_VALRDY and TASK_STOP. */
DECL|NRF_RNG_TASK_SET|macro|NRF_RNG_TASK_SET
DECL|NRF_RNG_TASK_START|enumerator|NRF_RNG_TASK_START = offsetof(NRF_RNG_Type, TASKS_START), /**< Start the random number generator. */
DECL|NRF_RNG_TASK_STOP|enumerator|NRF_RNG_TASK_STOP = offsetof(NRF_RNG_Type, TASKS_STOP) /**< Stop the random number generator. */
DECL|nrf_rng_error_correction_disable|function|__STATIC_INLINE void nrf_rng_error_correction_disable(void)
DECL|nrf_rng_error_correction_enable|function|__STATIC_INLINE void nrf_rng_error_correction_enable(void)
DECL|nrf_rng_event_address_get|function|__STATIC_INLINE uint32_t * nrf_rng_event_address_get(nrf_rng_event_t rng_event)
DECL|nrf_rng_event_clear|function|__STATIC_INLINE void nrf_rng_event_clear(nrf_rng_event_t rng_event)
DECL|nrf_rng_event_get|function|__STATIC_INLINE bool nrf_rng_event_get(nrf_rng_event_t rng_event)
DECL|nrf_rng_event_t|typedef|} nrf_rng_event_t; /*lint -restore */
DECL|nrf_rng_int_disable|function|__STATIC_INLINE void nrf_rng_int_disable(uint32_t rng_int_mask)
DECL|nrf_rng_int_enable|function|__STATIC_INLINE void nrf_rng_int_enable(uint32_t rng_int_mask)
DECL|nrf_rng_int_get|function|__STATIC_INLINE bool nrf_rng_int_get(nrf_rng_int_mask_t rng_int_mask)
DECL|nrf_rng_int_mask_t|typedef|} nrf_rng_int_mask_t;
DECL|nrf_rng_random_value_get|function|__STATIC_INLINE uint8_t nrf_rng_random_value_get(void)
DECL|nrf_rng_short_mask_t|typedef|} nrf_rng_short_mask_t;
DECL|nrf_rng_shorts_disable|function|__STATIC_INLINE void nrf_rng_shorts_disable(uint32_t rng_short_mask)
DECL|nrf_rng_shorts_enable|function|__STATIC_INLINE void nrf_rng_shorts_enable(uint32_t rng_short_mask)
DECL|nrf_rng_task_address_get|function|__STATIC_INLINE uint32_t * nrf_rng_task_address_get(nrf_rng_task_t rng_task)
DECL|nrf_rng_task_trigger|function|__STATIC_INLINE void nrf_rng_task_trigger(nrf_rng_task_t rng_task)
DECL|nrf_rng_task_t|typedef|} nrf_rng_task_t; /*lint -restore */
