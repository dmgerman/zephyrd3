DECL|NRFX_RTC0_INST_IDX|enumerator|NRFX_RTC0_INST_IDX,
DECL|NRFX_RTC1_INST_IDX|enumerator|NRFX_RTC1_INST_IDX,
DECL|NRFX_RTC2_INST_IDX|enumerator|NRFX_RTC2_INST_IDX,
DECL|NRFX_RTC3_INST_IDX|enumerator|NRFX_RTC3_INST_IDX,
DECL|NRFX_RTC_DEFAULT_CONFIG|macro|NRFX_RTC_DEFAULT_CONFIG
DECL|NRFX_RTC_ENABLED_COUNT|enumerator|NRFX_RTC_ENABLED_COUNT
DECL|NRFX_RTC_H__|macro|NRFX_RTC_H__
DECL|NRFX_RTC_INSTANCE|macro|NRFX_RTC_INSTANCE
DECL|NRFX_RTC_INT_COMPARE0|enumerator|NRFX_RTC_INT_COMPARE0 = 0, /**< Interrupt from COMPARE0 event. */
DECL|NRFX_RTC_INT_COMPARE1|enumerator|NRFX_RTC_INT_COMPARE1 = 1, /**< Interrupt from COMPARE1 event. */
DECL|NRFX_RTC_INT_COMPARE2|enumerator|NRFX_RTC_INT_COMPARE2 = 2, /**< Interrupt from COMPARE2 event. */
DECL|NRFX_RTC_INT_COMPARE3|enumerator|NRFX_RTC_INT_COMPARE3 = 3, /**< Interrupt from COMPARE3 event. */
DECL|NRFX_RTC_INT_OVERFLOW|enumerator|NRFX_RTC_INT_OVERFLOW = 5 /**< Interrupt from OVERFLOW event. */
DECL|NRFX_RTC_INT_TICK|enumerator|NRFX_RTC_INT_TICK = 4, /**< Interrupt from TICK event. */
DECL|NRFX_RTC_US_TO_TICKS|macro|NRFX_RTC_US_TO_TICKS
DECL|cc_channel_count|member|uint8_t cc_channel_count; /**< Number of capture/compare channels. */
DECL|instance_id|member|uint8_t instance_id; /**< Instance index. */
DECL|interrupt_priority|member|uint8_t interrupt_priority; /**< Interrupt priority. */
DECL|irq|member|IRQn_Type irq; /**< Instance IRQ ID. */
DECL|nrfx_rtc_config_t|typedef|} nrfx_rtc_config_t;
DECL|nrfx_rtc_counter_clear|function|__STATIC_INLINE void nrfx_rtc_counter_clear(nrfx_rtc_t const * const p_instance)
DECL|nrfx_rtc_counter_get|function|__STATIC_INLINE uint32_t nrfx_rtc_counter_get(nrfx_rtc_t const * const p_instance)
DECL|nrfx_rtc_event_address_get|function|__STATIC_INLINE uint32_t nrfx_rtc_event_address_get(nrfx_rtc_t const * const p_instance, nrf_rtc_event_t event)
DECL|nrfx_rtc_handler_t|typedef|typedef void (*nrfx_rtc_handler_t)(nrfx_rtc_int_type_t int_type);
DECL|nrfx_rtc_int_disable|function|__STATIC_INLINE void nrfx_rtc_int_disable(nrfx_rtc_t const * const p_instance, uint32_t * p_mask)
DECL|nrfx_rtc_int_enable|function|__STATIC_INLINE void nrfx_rtc_int_enable(nrfx_rtc_t const * const p_instance, uint32_t mask)
DECL|nrfx_rtc_int_type_t|typedef|} nrfx_rtc_int_type_t;
DECL|nrfx_rtc_task_address_get|function|__STATIC_INLINE uint32_t nrfx_rtc_task_address_get(nrfx_rtc_t const * const p_instance, nrf_rtc_task_t task)
DECL|nrfx_rtc_t|typedef|} nrfx_rtc_t;
DECL|p_reg|member|NRF_RTC_Type * p_reg; /**< Pointer to instance register set. */
DECL|prescaler|member|uint16_t prescaler; /**< Prescaler. */
DECL|reliable|member|bool reliable; /**< Reliable mode flag. */
DECL|tick_latency|member|uint8_t tick_latency; /**< Maximum length of interrupt handler in ticks (max 7.7 ms). */
