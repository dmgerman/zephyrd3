DECL|NRFX_PWM0_INST_IDX|enumerator|NRFX_PWM0_INST_IDX,
DECL|NRFX_PWM1_INST_IDX|enumerator|NRFX_PWM1_INST_IDX,
DECL|NRFX_PWM2_INST_IDX|enumerator|NRFX_PWM2_INST_IDX,
DECL|NRFX_PWM3_INST_IDX|enumerator|NRFX_PWM3_INST_IDX,
DECL|NRFX_PWM_DEFAULT_CONFIG|macro|NRFX_PWM_DEFAULT_CONFIG
DECL|NRFX_PWM_ENABLED_COUNT|enumerator|NRFX_PWM_ENABLED_COUNT
DECL|NRFX_PWM_EVT_END_SEQ0|enumerator|NRFX_PWM_EVT_END_SEQ0, /**< End of sequence 0 reached. Its data can be
DECL|NRFX_PWM_EVT_END_SEQ1|enumerator|NRFX_PWM_EVT_END_SEQ1, /**< End of sequence 1 reached. Its data can be
DECL|NRFX_PWM_EVT_FINISHED|enumerator|NRFX_PWM_EVT_FINISHED, ///< Sequence playback finished.
DECL|NRFX_PWM_EVT_STOPPED|enumerator|NRFX_PWM_EVT_STOPPED, ///< The PWM peripheral has been stopped.
DECL|NRFX_PWM_FLAG_LOOP|enumerator|NRFX_PWM_FLAG_LOOP = 0x02, /**< When the requested playback is finished,
DECL|NRFX_PWM_FLAG_NO_EVT_FINISHED|enumerator|NRFX_PWM_FLAG_NO_EVT_FINISHED = 0x10, /**< The playback finished event
DECL|NRFX_PWM_FLAG_SIGNAL_END_SEQ0|enumerator|NRFX_PWM_FLAG_SIGNAL_END_SEQ0 = 0x04, /**< The event handler should be
DECL|NRFX_PWM_FLAG_SIGNAL_END_SEQ1|enumerator|NRFX_PWM_FLAG_SIGNAL_END_SEQ1 = 0x08, /**< The event handler should be
DECL|NRFX_PWM_FLAG_START_VIA_TASK|enumerator|NRFX_PWM_FLAG_START_VIA_TASK = 0x80, /**< The playback should not be
DECL|NRFX_PWM_FLAG_STOP|enumerator|NRFX_PWM_FLAG_STOP = 0x01, /**< When the requested playback is finished,
DECL|NRFX_PWM_H__|macro|NRFX_PWM_H__
DECL|NRFX_PWM_INSTANCE|macro|NRFX_PWM_INSTANCE
DECL|NRFX_PWM_PIN_INVERTED|macro|NRFX_PWM_PIN_INVERTED
DECL|NRFX_PWM_PIN_NOT_USED|macro|NRFX_PWM_PIN_NOT_USED
DECL|base_clock|member|nrf_pwm_clk_t base_clock; ///< Base clock frequency.
DECL|count_mode|member|nrf_pwm_mode_t count_mode; ///< Operating mode of the pulse generator counter.
DECL|drv_inst_idx|member|uint8_t drv_inst_idx; ///< Driver instance index.
DECL|irq_priority|member|uint8_t irq_priority; ///< Interrupt priority.
DECL|load_mode|member|nrf_pwm_dec_load_t load_mode; ///< Mode of loading sequence data from RAM.
DECL|nrfx_pwm_config_t|typedef|} nrfx_pwm_config_t;
DECL|nrfx_pwm_event_address_get|function|__STATIC_INLINE uint32_t nrfx_pwm_event_address_get(nrfx_pwm_t const * const p_instance, nrf_pwm_event_t event)
DECL|nrfx_pwm_evt_type_t|typedef|} nrfx_pwm_evt_type_t;
DECL|nrfx_pwm_flag_t|typedef|} nrfx_pwm_flag_t;
DECL|nrfx_pwm_handler_t|typedef|typedef void (* nrfx_pwm_handler_t)(nrfx_pwm_evt_type_t event_type);
DECL|nrfx_pwm_sequence_end_delay_update|function|__STATIC_INLINE void nrfx_pwm_sequence_end_delay_update(nrfx_pwm_t const * const p_instance, uint8_t seq_id, uint32_t end_delay)
DECL|nrfx_pwm_sequence_length_update|function|__STATIC_INLINE void nrfx_pwm_sequence_length_update(nrfx_pwm_t const * const p_instance, uint8_t seq_id, uint16_t length)
DECL|nrfx_pwm_sequence_repeats_update|function|__STATIC_INLINE void nrfx_pwm_sequence_repeats_update(nrfx_pwm_t const * const p_instance, uint8_t seq_id, uint32_t repeats)
DECL|nrfx_pwm_sequence_update|function|__STATIC_INLINE void nrfx_pwm_sequence_update(nrfx_pwm_t const * const p_instance, uint8_t seq_id, nrf_pwm_sequence_t const * p_sequence)
DECL|nrfx_pwm_sequence_values_update|function|__STATIC_INLINE void nrfx_pwm_sequence_values_update(nrfx_pwm_t const * const p_instance, uint8_t seq_id, nrf_pwm_values_t values)
DECL|nrfx_pwm_step|function|__STATIC_INLINE void nrfx_pwm_step(nrfx_pwm_t const * const p_instance)
DECL|nrfx_pwm_task_address_get|function|__STATIC_INLINE uint32_t nrfx_pwm_task_address_get(nrfx_pwm_t const * const p_instance, nrf_pwm_task_t task)
DECL|nrfx_pwm_t|typedef|} nrfx_pwm_t;
DECL|output_pins|member|uint8_t output_pins[NRF_PWM_CHANNEL_COUNT]; ///< Pin numbers for individual output channels (optional).
DECL|p_registers|member|NRF_PWM_Type * p_registers; ///< Pointer to the structure with PWM peripheral instance registers.
DECL|step_mode|member|nrf_pwm_dec_step_t step_mode; ///< Mode of advancing the active sequence.
DECL|top_value|member|uint16_t top_value; ///< Value up to which the pulse generator counter counts.
