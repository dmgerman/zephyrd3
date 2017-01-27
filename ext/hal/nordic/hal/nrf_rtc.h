DECL|NRF_RTC_CC_CHANNEL_COUNT|macro|NRF_RTC_CC_CHANNEL_COUNT
DECL|NRF_RTC_EVENT_COMPARE_0|enumerator|NRF_RTC_EVENT_COMPARE_0 = offsetof(NRF_RTC_Type,EVENTS_COMPARE[0]), /**< Compare 0 event. */
DECL|NRF_RTC_EVENT_COMPARE_1|enumerator|NRF_RTC_EVENT_COMPARE_1 = offsetof(NRF_RTC_Type,EVENTS_COMPARE[1]), /**< Compare 1 event. */
DECL|NRF_RTC_EVENT_COMPARE_2|enumerator|NRF_RTC_EVENT_COMPARE_2 = offsetof(NRF_RTC_Type,EVENTS_COMPARE[2]), /**< Compare 2 event. */
DECL|NRF_RTC_EVENT_COMPARE_3|enumerator|NRF_RTC_EVENT_COMPARE_3 = offsetof(NRF_RTC_Type,EVENTS_COMPARE[3]) /**< Compare 3 event. */
DECL|NRF_RTC_EVENT_OVERFLOW|enumerator|NRF_RTC_EVENT_OVERFLOW = offsetof(NRF_RTC_Type,EVENTS_OVRFLW), /**< Overflow event. */
DECL|NRF_RTC_EVENT_TICK|enumerator|NRF_RTC_EVENT_TICK = offsetof(NRF_RTC_Type,EVENTS_TICK), /**< Tick event. */
DECL|NRF_RTC_H|macro|NRF_RTC_H
DECL|NRF_RTC_INT_COMPARE0_MASK|enumerator|NRF_RTC_INT_COMPARE0_MASK = RTC_INTENSET_COMPARE0_Msk, /**< RTC interrupt from compare event on channel 0. */
DECL|NRF_RTC_INT_COMPARE1_MASK|enumerator|NRF_RTC_INT_COMPARE1_MASK = RTC_INTENSET_COMPARE1_Msk, /**< RTC interrupt from compare event on channel 1. */
DECL|NRF_RTC_INT_COMPARE2_MASK|enumerator|NRF_RTC_INT_COMPARE2_MASK = RTC_INTENSET_COMPARE2_Msk, /**< RTC interrupt from compare event on channel 2. */
DECL|NRF_RTC_INT_COMPARE3_MASK|enumerator|NRF_RTC_INT_COMPARE3_MASK = RTC_INTENSET_COMPARE3_Msk /**< RTC interrupt from compare event on channel 3. */
DECL|NRF_RTC_INT_OVERFLOW_MASK|enumerator|NRF_RTC_INT_OVERFLOW_MASK = RTC_INTENSET_OVRFLW_Msk, /**< RTC interrupt from overflow event. */
DECL|NRF_RTC_INT_TICK_MASK|enumerator|NRF_RTC_INT_TICK_MASK = RTC_INTENSET_TICK_Msk, /**< RTC interrupt from tick event. */
DECL|NRF_RTC_TASK_CLEAR|enumerator|NRF_RTC_TASK_CLEAR = offsetof(NRF_RTC_Type,TASKS_CLEAR), /**< Clear. */
DECL|NRF_RTC_TASK_START|enumerator|NRF_RTC_TASK_START = offsetof(NRF_RTC_Type,TASKS_START), /**< Start. */
DECL|NRF_RTC_TASK_STOP|enumerator|NRF_RTC_TASK_STOP = offsetof(NRF_RTC_Type,TASKS_STOP), /**< Stop. */
DECL|NRF_RTC_TASK_TRIGGER_OVERFLOW|enumerator|NRF_RTC_TASK_TRIGGER_OVERFLOW = offsetof(NRF_RTC_Type,TASKS_TRIGOVRFLW),/**< Trigger overflow. */
DECL|RTC_CHANNEL_EVENT_ADDR|macro|RTC_CHANNEL_EVENT_ADDR
DECL|RTC_CHANNEL_INT_MASK|macro|RTC_CHANNEL_INT_MASK
DECL|RTC_FREQ_TO_PRESCALER|macro|RTC_FREQ_TO_PRESCALER
DECL|RTC_INPUT_FREQ|macro|RTC_INPUT_FREQ
DECL|RTC_WRAP|macro|RTC_WRAP
DECL|nrf_rtc_cc_get|function|__STATIC_INLINE uint32_t nrf_rtc_cc_get(NRF_RTC_Type * p_rtc, uint32_t ch)
DECL|nrf_rtc_cc_set|function|__STATIC_INLINE void nrf_rtc_cc_set(NRF_RTC_Type * p_rtc, uint32_t ch, uint32_t cc_val)
DECL|nrf_rtc_counter_get|function|__STATIC_INLINE uint32_t nrf_rtc_counter_get(NRF_RTC_Type * p_rtc)
DECL|nrf_rtc_event_address_get|function|__STATIC_INLINE uint32_t nrf_rtc_event_address_get(NRF_RTC_Type * p_rtc, nrf_rtc_event_t event)
DECL|nrf_rtc_event_clear|function|__STATIC_INLINE void nrf_rtc_event_clear(NRF_RTC_Type * p_rtc, nrf_rtc_event_t event)
DECL|nrf_rtc_event_disable|function|__STATIC_INLINE void nrf_rtc_event_disable(NRF_RTC_Type * p_rtc, uint32_t mask)
DECL|nrf_rtc_event_enable|function|__STATIC_INLINE void nrf_rtc_event_enable(NRF_RTC_Type * p_rtc, uint32_t mask)
DECL|nrf_rtc_event_pending|function|__STATIC_INLINE uint32_t nrf_rtc_event_pending(NRF_RTC_Type * p_rtc, nrf_rtc_event_t event)
DECL|nrf_rtc_event_t|typedef|} nrf_rtc_event_t;
DECL|nrf_rtc_int_disable|function|__STATIC_INLINE void nrf_rtc_int_disable(NRF_RTC_Type * p_rtc, uint32_t mask)
DECL|nrf_rtc_int_enable|function|__STATIC_INLINE void nrf_rtc_int_enable(NRF_RTC_Type * p_rtc, uint32_t mask)
DECL|nrf_rtc_int_get|function|__STATIC_INLINE uint32_t nrf_rtc_int_get(NRF_RTC_Type * p_rtc)
DECL|nrf_rtc_int_is_enabled|function|__STATIC_INLINE uint32_t nrf_rtc_int_is_enabled(NRF_RTC_Type * p_rtc, uint32_t mask)
DECL|nrf_rtc_int_t|typedef|} nrf_rtc_int_t;
DECL|nrf_rtc_prescaler_set|function|__STATIC_INLINE void nrf_rtc_prescaler_set(NRF_RTC_Type * p_rtc, uint32_t val)
DECL|nrf_rtc_task_address_get|function|__STATIC_INLINE uint32_t nrf_rtc_task_address_get(NRF_RTC_Type * p_rtc, nrf_rtc_task_t task)
DECL|nrf_rtc_task_trigger|function|__STATIC_INLINE void nrf_rtc_task_trigger(NRF_RTC_Type * p_rtc, nrf_rtc_task_t task)
DECL|nrf_rtc_task_t|typedef|} nrf_rtc_task_t;
DECL|rtc_prescaler_get|function|__STATIC_INLINE uint32_t rtc_prescaler_get(NRF_RTC_Type * p_rtc)
