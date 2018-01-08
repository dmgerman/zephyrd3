DECL|NRFX_TIMER0_INST_IDX|enumerator|NRFX_TIMER0_INST_IDX,
DECL|NRFX_TIMER1_INST_IDX|enumerator|NRFX_TIMER1_INST_IDX,
DECL|NRFX_TIMER2_INST_IDX|enumerator|NRFX_TIMER2_INST_IDX,
DECL|NRFX_TIMER3_INST_IDX|enumerator|NRFX_TIMER3_INST_IDX,
DECL|NRFX_TIMER4_INST_IDX|enumerator|NRFX_TIMER4_INST_IDX,
DECL|NRFX_TIMER_DEFAULT_CONFIG|macro|NRFX_TIMER_DEFAULT_CONFIG
DECL|NRFX_TIMER_ENABLED_COUNT|enumerator|NRFX_TIMER_ENABLED_COUNT
DECL|NRFX_TIMER_H__|macro|NRFX_TIMER_H__
DECL|NRFX_TIMER_INSTANCE|macro|NRFX_TIMER_INSTANCE
DECL|bit_width|member|nrf_timer_bit_width_t bit_width; ///< Bit width.
DECL|cc_channel_count|member|uint8_t cc_channel_count; ///< Number of capture/compare channels.
DECL|frequency|member|nrf_timer_frequency_t frequency; ///< Frequency.
DECL|instance_id|member|uint8_t instance_id; ///< Driver instance index.
DECL|interrupt_priority|member|uint8_t interrupt_priority; ///< Interrupt priority.
DECL|mode|member|nrf_timer_mode_t mode; ///< Mode of operation.
DECL|nrfx_timer_capture_get|function|__STATIC_INLINE uint32_t nrfx_timer_capture_get(nrfx_timer_t const * const p_instance, nrf_timer_cc_channel_t cc_channel)
DECL|nrfx_timer_capture_task_address_get|function|__STATIC_INLINE uint32_t nrfx_timer_capture_task_address_get(nrfx_timer_t const * const p_instance, uint32_t channel)
DECL|nrfx_timer_compare_event_address_get|function|__STATIC_INLINE uint32_t nrfx_timer_compare_event_address_get(nrfx_timer_t const * const p_instance, uint32_t channel)
DECL|nrfx_timer_config_t|typedef|} nrfx_timer_config_t;
DECL|nrfx_timer_event_address_get|function|__STATIC_INLINE uint32_t nrfx_timer_event_address_get(nrfx_timer_t const * const p_instance, nrf_timer_event_t timer_event)
DECL|nrfx_timer_event_handler_t|typedef|typedef void (* nrfx_timer_event_handler_t)(nrf_timer_event_t event_type,
DECL|nrfx_timer_ms_to_ticks|function|__STATIC_INLINE uint32_t nrfx_timer_ms_to_ticks(nrfx_timer_t const * const p_instance, uint32_t timer_ms)
DECL|nrfx_timer_task_address_get|function|__STATIC_INLINE uint32_t nrfx_timer_task_address_get(nrfx_timer_t const * const p_instance, nrf_timer_task_t timer_task)
DECL|nrfx_timer_t|typedef|} nrfx_timer_t;
DECL|nrfx_timer_us_to_ticks|function|__STATIC_INLINE uint32_t nrfx_timer_us_to_ticks(nrfx_timer_t const * const p_instance, uint32_t timer_us)
DECL|p_context|member|void * p_context; ///< Context passed to interrupt handler.
DECL|p_reg|member|NRF_TIMER_Type * p_reg; ///< Pointer to the structure with TIMER peripheral instance registers.
