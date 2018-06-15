DECL|NRF_ECB_EVENT_ENDECB|enumerator|NRF_ECB_EVENT_ENDECB = offsetof(NRF_ECB_Type, EVENTS_ENDECB), /**< ECB block encrypt complete. */
DECL|NRF_ECB_EVENT_ERRORECB|enumerator|NRF_ECB_EVENT_ERRORECB = offsetof(NRF_ECB_Type, EVENTS_ERRORECB), /**< ECB block encrypt aborted because of a STOPECB task or due to an error. */
DECL|NRF_ECB_H__|macro|NRF_ECB_H__
DECL|NRF_ECB_INT_ENDECB_MASK|enumerator|NRF_ECB_INT_ENDECB_MASK = ECB_INTENSET_ENDECB_Msk, ///< Interrupt on ENDECB event.
DECL|NRF_ECB_INT_ERRORECB_MASK|enumerator|NRF_ECB_INT_ERRORECB_MASK = ECB_INTENSET_ERRORECB_Msk, ///< Interrupt on ERRORECB event.
DECL|NRF_ECB_TASK_STARTECB|enumerator|NRF_ECB_TASK_STARTECB = offsetof(NRF_ECB_Type, TASKS_STARTECB), /**< Task for starting ECB block encryption. */
DECL|NRF_ECB_TASK_STOPECB|enumerator|NRF_ECB_TASK_STOPECB = offsetof(NRF_ECB_Type, TASKS_STOPECB), /**< Task for stopping ECB block encryption. */
DECL|nrf_ecb_data_pointer_get|function|__STATIC_INLINE void * nrf_ecb_data_pointer_get(NRF_ECB_Type const * p_reg)
DECL|nrf_ecb_data_pointer_set|function|__STATIC_INLINE void nrf_ecb_data_pointer_set(NRF_ECB_Type * p_reg, void const * p_buffer)
DECL|nrf_ecb_event_address_get|function|__STATIC_INLINE uint32_t nrf_ecb_event_address_get(NRF_ECB_Type const * p_reg, nrf_ecb_event_t event)
DECL|nrf_ecb_event_check|function|__STATIC_INLINE bool nrf_ecb_event_check(NRF_ECB_Type const * p_reg, nrf_ecb_event_t event)
DECL|nrf_ecb_event_clear|function|__STATIC_INLINE void nrf_ecb_event_clear(NRF_ECB_Type * p_reg, nrf_ecb_event_t event)
DECL|nrf_ecb_event_t|typedef|} nrf_ecb_event_t;
DECL|nrf_ecb_int_disable|function|__STATIC_INLINE void nrf_ecb_int_disable(NRF_ECB_Type * p_reg, uint32_t mask)
DECL|nrf_ecb_int_enable_check|function|__STATIC_INLINE bool nrf_ecb_int_enable_check(NRF_ECB_Type const * p_reg, nrf_ecb_int_mask_t ecb_int)
DECL|nrf_ecb_int_enable|function|__STATIC_INLINE void nrf_ecb_int_enable(NRF_ECB_Type * p_reg, uint32_t mask)
DECL|nrf_ecb_int_mask_t|typedef|} nrf_ecb_int_mask_t;
DECL|nrf_ecb_task_address_get|function|__STATIC_INLINE uint32_t nrf_ecb_task_address_get(NRF_ECB_Type const * p_reg, nrf_ecb_task_t task)
DECL|nrf_ecb_task_trigger|function|__STATIC_INLINE void nrf_ecb_task_trigger(NRF_ECB_Type * p_reg, nrf_ecb_task_t task)
DECL|nrf_ecb_task_t|typedef|} nrf_ecb_task_t;
