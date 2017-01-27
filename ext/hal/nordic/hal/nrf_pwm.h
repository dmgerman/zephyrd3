DECL|NRF_PWM_CHANNEL_COUNT|macro|NRF_PWM_CHANNEL_COUNT
DECL|NRF_PWM_CLK_125kHz|enumerator|NRF_PWM_CLK_125kHz = PWM_PRESCALER_PRESCALER_DIV_128 ///< 16 MHz / 128 = 125 kHz.
DECL|NRF_PWM_CLK_16MHz|enumerator|NRF_PWM_CLK_16MHz = PWM_PRESCALER_PRESCALER_DIV_1, ///< 16 MHz / 1 = 16 MHz.
DECL|NRF_PWM_CLK_1MHz|enumerator|NRF_PWM_CLK_1MHz = PWM_PRESCALER_PRESCALER_DIV_16, ///< 16 MHz / 16 = 1 MHz.
DECL|NRF_PWM_CLK_250kHz|enumerator|NRF_PWM_CLK_250kHz = PWM_PRESCALER_PRESCALER_DIV_64, ///< 16 MHz / 64 = 250 kHz.
DECL|NRF_PWM_CLK_2MHz|enumerator|NRF_PWM_CLK_2MHz = PWM_PRESCALER_PRESCALER_DIV_8, ///< 16 MHz / 8 = 2 MHz.
DECL|NRF_PWM_CLK_4MHz|enumerator|NRF_PWM_CLK_4MHz = PWM_PRESCALER_PRESCALER_DIV_4, ///< 16 MHz / 4 = 4 MHz.
DECL|NRF_PWM_CLK_500kHz|enumerator|NRF_PWM_CLK_500kHz = PWM_PRESCALER_PRESCALER_DIV_32, ///< 16 MHz / 32 = 500 kHz.
DECL|NRF_PWM_CLK_8MHz|enumerator|NRF_PWM_CLK_8MHz = PWM_PRESCALER_PRESCALER_DIV_2, ///< 16 MHz / 2 = 8 MHz.
DECL|NRF_PWM_EVENT_LOOPSDONE|enumerator|NRF_PWM_EVENT_LOOPSDONE = offsetof(NRF_PWM_Type, EVENTS_LOOPSDONE) ///< Concatenated sequences have been played the requested number of times.
DECL|NRF_PWM_EVENT_PWMPERIODEND|enumerator|NRF_PWM_EVENT_PWMPERIODEND = offsetof(NRF_PWM_Type, EVENTS_PWMPERIODEND), ///< Emitted at the end of each PWM period.
DECL|NRF_PWM_EVENT_SEQEND0|enumerator|NRF_PWM_EVENT_SEQEND0 = offsetof(NRF_PWM_Type, EVENTS_SEQEND[0]), ///< Emitted at the end of every sequence 0 when its last value has been read from RAM.
DECL|NRF_PWM_EVENT_SEQEND1|enumerator|NRF_PWM_EVENT_SEQEND1 = offsetof(NRF_PWM_Type, EVENTS_SEQEND[1]), ///< Emitted at the end of every sequence 1 when its last value has been read from RAM.
DECL|NRF_PWM_EVENT_SEQSTARTED0|enumerator|NRF_PWM_EVENT_SEQSTARTED0 = offsetof(NRF_PWM_Type, EVENTS_SEQSTARTED[0]), ///< First PWM period started on sequence 0.
DECL|NRF_PWM_EVENT_SEQSTARTED1|enumerator|NRF_PWM_EVENT_SEQSTARTED1 = offsetof(NRF_PWM_Type, EVENTS_SEQSTARTED[1]), ///< First PWM period started on sequence 1.
DECL|NRF_PWM_EVENT_STOPPED|enumerator|NRF_PWM_EVENT_STOPPED = offsetof(NRF_PWM_Type, EVENTS_STOPPED), ///< Response to STOP task, emitted when PWM pulses are no longer generated.
DECL|NRF_PWM_H__|macro|NRF_PWM_H__
DECL|NRF_PWM_INT_LOOPSDONE_MASK|enumerator|NRF_PWM_INT_LOOPSDONE_MASK = PWM_INTENSET_LOOPSDONE_Msk ///< Interrupt on LOOPSDONE event.
DECL|NRF_PWM_INT_PWMPERIODEND_MASK|enumerator|NRF_PWM_INT_PWMPERIODEND_MASK = PWM_INTENSET_PWMPERIODEND_Msk, ///< Interrupt on PWMPERIODEND event.
DECL|NRF_PWM_INT_SEQEND0_MASK|enumerator|NRF_PWM_INT_SEQEND0_MASK = PWM_INTENSET_SEQEND0_Msk, ///< Interrupt on SEQEND[0] event.
DECL|NRF_PWM_INT_SEQEND1_MASK|enumerator|NRF_PWM_INT_SEQEND1_MASK = PWM_INTENSET_SEQEND1_Msk, ///< Interrupt on SEQEND[1] event.
DECL|NRF_PWM_INT_SEQSTARTED0_MASK|enumerator|NRF_PWM_INT_SEQSTARTED0_MASK = PWM_INTENSET_SEQSTARTED0_Msk, ///< Interrupt on SEQSTARTED[0] event.
DECL|NRF_PWM_INT_SEQSTARTED1_MASK|enumerator|NRF_PWM_INT_SEQSTARTED1_MASK = PWM_INTENSET_SEQSTARTED1_Msk, ///< Interrupt on SEQSTARTED[1] event.
DECL|NRF_PWM_INT_STOPPED_MASK|enumerator|NRF_PWM_INT_STOPPED_MASK = PWM_INTENSET_STOPPED_Msk, ///< Interrupt on STOPPED event.
DECL|NRF_PWM_LOAD_COMMON|enumerator|NRF_PWM_LOAD_COMMON = PWM_DECODER_LOAD_Common, ///< 1st half word (16-bit) used in all PWM channels (0-3).
DECL|NRF_PWM_LOAD_GROUPED|enumerator|NRF_PWM_LOAD_GROUPED = PWM_DECODER_LOAD_Grouped, ///< 1st half word (16-bit) used in channels 0 and 1; 2nd word in channels 2 and 3.
DECL|NRF_PWM_LOAD_INDIVIDUAL|enumerator|NRF_PWM_LOAD_INDIVIDUAL = PWM_DECODER_LOAD_Individual, ///< 1st half word (16-bit) used in channel 0; 2nd in channel 1; 3rd in channel 2; 4th in channel 3.
DECL|NRF_PWM_LOAD_WAVE_FORM|enumerator|NRF_PWM_LOAD_WAVE_FORM = PWM_DECODER_LOAD_WaveForm ///< 1st half word (16-bit) used in channel 0; 2nd in channel 1; ... ; 4th as the top value for the pulse generator counter.
DECL|NRF_PWM_MODE_UP_AND_DOWN|enumerator|NRF_PWM_MODE_UP_AND_DOWN = PWM_MODE_UPDOWN_UpAndDown, ///< Up and down counter (center-aligned PWM duty cycle).
DECL|NRF_PWM_MODE_UP|enumerator|NRF_PWM_MODE_UP = PWM_MODE_UPDOWN_Up, ///< Up counter (edge-aligned PWM duty cycle).
DECL|NRF_PWM_PIN_NOT_CONNECTED|macro|NRF_PWM_PIN_NOT_CONNECTED
DECL|NRF_PWM_SHORT_LOOPSDONE_SEQSTART0_MASK|enumerator|NRF_PWM_SHORT_LOOPSDONE_SEQSTART0_MASK = PWM_SHORTS_LOOPSDONE_SEQSTART0_Msk, ///< Shortcut between LOOPSDONE event and SEQSTART[0] task.
DECL|NRF_PWM_SHORT_LOOPSDONE_SEQSTART1_MASK|enumerator|NRF_PWM_SHORT_LOOPSDONE_SEQSTART1_MASK = PWM_SHORTS_LOOPSDONE_SEQSTART1_Msk, ///< Shortcut between LOOPSDONE event and SEQSTART[1] task.
DECL|NRF_PWM_SHORT_LOOPSDONE_STOP_MASK|enumerator|NRF_PWM_SHORT_LOOPSDONE_STOP_MASK = PWM_SHORTS_LOOPSDONE_STOP_Msk ///< Shortcut between LOOPSDONE event and STOP task.
DECL|NRF_PWM_SHORT_SEQEND0_STOP_MASK|enumerator|NRF_PWM_SHORT_SEQEND0_STOP_MASK = PWM_SHORTS_SEQEND0_STOP_Msk, ///< Shortcut between SEQEND[0] event and STOP task.
DECL|NRF_PWM_SHORT_SEQEND1_STOP_MASK|enumerator|NRF_PWM_SHORT_SEQEND1_STOP_MASK = PWM_SHORTS_SEQEND1_STOP_Msk, ///< Shortcut between SEQEND[1] event and STOP task.
DECL|NRF_PWM_STEP_AUTO|enumerator|NRF_PWM_STEP_AUTO = PWM_DECODER_MODE_RefreshCount, ///< Automatically after the current value is played and repeated the requested number of times.
DECL|NRF_PWM_STEP_TRIGGERED|enumerator|NRF_PWM_STEP_TRIGGERED = PWM_DECODER_MODE_NextStep ///< When the @ref NRF_PWM_TASK_NEXTSTEP task is triggered.
DECL|NRF_PWM_TASK_NEXTSTEP|enumerator|NRF_PWM_TASK_NEXTSTEP = offsetof(NRF_PWM_Type, TASKS_NEXTSTEP) ///< Steps by one value in the current sequence if the decoder is set to @ref NRF_PWM_STEP_TRIGGERED mode.
DECL|NRF_PWM_TASK_SEQSTART0|enumerator|NRF_PWM_TASK_SEQSTART0 = offsetof(NRF_PWM_Type, TASKS_SEQSTART[0]), ///< Starts playback of sequence 0.
DECL|NRF_PWM_TASK_SEQSTART1|enumerator|NRF_PWM_TASK_SEQSTART1 = offsetof(NRF_PWM_Type, TASKS_SEQSTART[1]), ///< Starts playback of sequence 1.
DECL|NRF_PWM_TASK_STOP|enumerator|NRF_PWM_TASK_STOP = offsetof(NRF_PWM_Type, TASKS_STOP), ///< Stops PWM pulse generation on all channels at the end of the current PWM period, and stops the sequence playback.
DECL|NRF_PWM_VALUES_LENGTH|macro|NRF_PWM_VALUES_LENGTH
DECL|channel_0|member|uint16_t channel_0; ///< Duty cycle value for channel 0.
DECL|channel_0|member|uint16_t channel_0; ///< Duty cycle value for channel 0.
DECL|channel_1|member|uint16_t channel_1; ///< Duty cycle value for channel 1.
DECL|channel_1|member|uint16_t channel_1; ///< Duty cycle value for channel 1.
DECL|channel_2|member|uint16_t channel_2; ///< Duty cycle value for channel 2.
DECL|channel_2|member|uint16_t channel_2; ///< Duty cycle value for channel 2.
DECL|channel_3|member|uint16_t channel_3; ///< Duty cycle value for channel 3.
DECL|counter_top|member|uint16_t counter_top; ///< Top value for the pulse generator counter.
DECL|end_delay|member|uint32_t end_delay; ///< Additional time (in PWM periods) that the last duty cycle is to be kept after the sequence is played. Ignored in @ref NRF_PWM_STEP_TRIGGERED mode.
DECL|group_0|member|uint16_t group_0; ///< Duty cycle value for group 0 (channels 0 and 1).
DECL|group_1|member|uint16_t group_1; ///< Duty cycle value for group 1 (channels 2 and 3).
DECL|length|member|uint16_t length; ///< Number of 16-bit values in the array pointed by @p values.
DECL|nrf_pwm_clk_t|typedef|} nrf_pwm_clk_t;
DECL|nrf_pwm_configure|function|__STATIC_INLINE void nrf_pwm_configure(NRF_PWM_Type * p_reg, nrf_pwm_clk_t base_clock, nrf_pwm_mode_t mode, uint16_t top_value)
DECL|nrf_pwm_dec_load_t|typedef|} nrf_pwm_dec_load_t;
DECL|nrf_pwm_dec_step_t|typedef|} nrf_pwm_dec_step_t;
DECL|nrf_pwm_decoder_set|function|__STATIC_INLINE void nrf_pwm_decoder_set(NRF_PWM_Type * p_reg, nrf_pwm_dec_load_t dec_load, nrf_pwm_dec_step_t dec_step)
DECL|nrf_pwm_disable|function|__STATIC_INLINE void nrf_pwm_disable(NRF_PWM_Type * p_reg)
DECL|nrf_pwm_enable|function|__STATIC_INLINE void nrf_pwm_enable(NRF_PWM_Type * p_reg)
DECL|nrf_pwm_event_address_get|function|__STATIC_INLINE uint32_t nrf_pwm_event_address_get(NRF_PWM_Type const * p_reg, nrf_pwm_event_t event)
DECL|nrf_pwm_event_check|function|__STATIC_INLINE bool nrf_pwm_event_check(NRF_PWM_Type const * p_reg, nrf_pwm_event_t event)
DECL|nrf_pwm_event_clear|function|__STATIC_INLINE void nrf_pwm_event_clear(NRF_PWM_Type * p_reg, nrf_pwm_event_t event)
DECL|nrf_pwm_event_t|typedef|} nrf_pwm_event_t;
DECL|nrf_pwm_int_disable|function|__STATIC_INLINE void nrf_pwm_int_disable(NRF_PWM_Type * p_reg, uint32_t pwm_int_mask)
DECL|nrf_pwm_int_enable_check|function|__STATIC_INLINE bool nrf_pwm_int_enable_check(NRF_PWM_Type const * p_reg, nrf_pwm_int_mask_t pwm_int)
DECL|nrf_pwm_int_enable|function|__STATIC_INLINE void nrf_pwm_int_enable(NRF_PWM_Type * p_reg, uint32_t pwm_int_mask)
DECL|nrf_pwm_int_mask_t|typedef|} nrf_pwm_int_mask_t;
DECL|nrf_pwm_int_set|function|__STATIC_INLINE void nrf_pwm_int_set(NRF_PWM_Type * p_reg, uint32_t pwm_int_mask)
DECL|nrf_pwm_loop_set|function|__STATIC_INLINE void nrf_pwm_loop_set(NRF_PWM_Type * p_reg, uint16_t loop_count)
DECL|nrf_pwm_mode_t|typedef|} nrf_pwm_mode_t;
DECL|nrf_pwm_pins_set|function|__STATIC_INLINE void nrf_pwm_pins_set(NRF_PWM_Type * p_reg, uint32_t out_pins[NRF_PWM_CHANNEL_COUNT])
DECL|nrf_pwm_seq_cnt_set|function|__STATIC_INLINE void nrf_pwm_seq_cnt_set(NRF_PWM_Type * p_reg, uint8_t seq_id, uint16_t length)
DECL|nrf_pwm_seq_end_delay_set|function|__STATIC_INLINE void nrf_pwm_seq_end_delay_set(NRF_PWM_Type * p_reg, uint8_t seq_id, uint32_t end_delay)
DECL|nrf_pwm_seq_ptr_set|function|__STATIC_INLINE void nrf_pwm_seq_ptr_set(NRF_PWM_Type * p_reg, uint8_t seq_id, uint16_t const * p_values)
DECL|nrf_pwm_seq_refresh_set|function|__STATIC_INLINE void nrf_pwm_seq_refresh_set(NRF_PWM_Type * p_reg, uint8_t seq_id, uint32_t refresh)
DECL|nrf_pwm_sequence_set|function|__STATIC_INLINE void nrf_pwm_sequence_set(NRF_PWM_Type * p_reg, uint8_t seq_id, nrf_pwm_sequence_t const * p_seq)
DECL|nrf_pwm_sequence_t|typedef|} nrf_pwm_sequence_t;
DECL|nrf_pwm_short_mask_t|typedef|} nrf_pwm_short_mask_t;
DECL|nrf_pwm_shorts_disable|function|__STATIC_INLINE void nrf_pwm_shorts_disable(NRF_PWM_Type * p_reg, uint32_t pwm_shorts_mask)
DECL|nrf_pwm_shorts_enable|function|__STATIC_INLINE void nrf_pwm_shorts_enable(NRF_PWM_Type * p_reg, uint32_t pwm_shorts_mask)
DECL|nrf_pwm_shorts_set|function|__STATIC_INLINE void nrf_pwm_shorts_set(NRF_PWM_Type * p_reg, uint32_t pwm_shorts_mask)
DECL|nrf_pwm_task_address_get|function|__STATIC_INLINE uint32_t nrf_pwm_task_address_get(NRF_PWM_Type const * p_reg, nrf_pwm_task_t task)
DECL|nrf_pwm_task_trigger|function|__STATIC_INLINE void nrf_pwm_task_trigger(NRF_PWM_Type * p_reg, nrf_pwm_task_t task)
DECL|nrf_pwm_task_t|typedef|} nrf_pwm_task_t;
DECL|nrf_pwm_values_common_t|typedef|typedef uint16_t nrf_pwm_values_common_t;
DECL|nrf_pwm_values_grouped_t|typedef|} nrf_pwm_values_grouped_t;
DECL|nrf_pwm_values_individual_t|typedef|} nrf_pwm_values_individual_t;
DECL|nrf_pwm_values_t|typedef|} nrf_pwm_values_t;
DECL|nrf_pwm_values_wave_form_t|typedef|} nrf_pwm_values_wave_form_t;
DECL|p_common|member|nrf_pwm_values_common_t const * p_common; ///< Pointer to be used in @ref NRF_PWM_LOAD_COMMON mode.
DECL|p_grouped|member|nrf_pwm_values_grouped_t const * p_grouped; ///< Pointer to be used in @ref NRF_PWM_LOAD_GROUPED mode.
DECL|p_individual|member|nrf_pwm_values_individual_t const * p_individual; ///< Pointer to be used in @ref NRF_PWM_LOAD_INDIVIDUAL mode.
DECL|p_raw|member|uint16_t const * p_raw; ///< Pointer providing raw access to the values.
DECL|p_wave_form|member|nrf_pwm_values_wave_form_t const * p_wave_form; ///< Pointer to be used in @ref NRF_PWM_LOAD_WAVE_FORM mode.
DECL|repeats|member|uint32_t repeats; ///< Number of times that each duty cycle should be repeated (after being played once). Ignored in @ref NRF_PWM_STEP_TRIGGERED mode.
DECL|values|member|nrf_pwm_values_t values; ///< Pointer to an array with duty cycle values. This array must be in Data RAM.
