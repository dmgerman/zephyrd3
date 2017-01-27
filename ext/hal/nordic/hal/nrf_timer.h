DECL|NRF_TIMER_BIT_WIDTH_16|enumerator|NRF_TIMER_BIT_WIDTH_16 = TIMER_BITMODE_BITMODE_16Bit, ///< Timer bit width 16 bit.
DECL|NRF_TIMER_BIT_WIDTH_24|enumerator|NRF_TIMER_BIT_WIDTH_24 = TIMER_BITMODE_BITMODE_24Bit, ///< Timer bit width 24 bit.
DECL|NRF_TIMER_BIT_WIDTH_32|enumerator|NRF_TIMER_BIT_WIDTH_32 = TIMER_BITMODE_BITMODE_32Bit ///< Timer bit width 32 bit.
DECL|NRF_TIMER_BIT_WIDTH_8|enumerator|NRF_TIMER_BIT_WIDTH_8 = TIMER_BITMODE_BITMODE_08Bit, ///< Timer bit width 8 bit.
DECL|NRF_TIMER_CC_CHANNEL0|enumerator|NRF_TIMER_CC_CHANNEL0 = 0, ///< Timer capture/compare channel 0.
DECL|NRF_TIMER_CC_CHANNEL1|enumerator|NRF_TIMER_CC_CHANNEL1, ///< Timer capture/compare channel 1.
DECL|NRF_TIMER_CC_CHANNEL2|enumerator|NRF_TIMER_CC_CHANNEL2, ///< Timer capture/compare channel 2.
DECL|NRF_TIMER_CC_CHANNEL3|enumerator|NRF_TIMER_CC_CHANNEL3, ///< Timer capture/compare channel 3.
DECL|NRF_TIMER_CC_CHANNEL4|enumerator|NRF_TIMER_CC_CHANNEL4, ///< Timer capture/compare channel 4.
DECL|NRF_TIMER_CC_CHANNEL5|enumerator|NRF_TIMER_CC_CHANNEL5, ///< Timer capture/compare channel 5.
DECL|NRF_TIMER_CC_CHANNEL_COUNT|macro|NRF_TIMER_CC_CHANNEL_COUNT
DECL|NRF_TIMER_EVENT_COMPARE0|enumerator|NRF_TIMER_EVENT_COMPARE0 = offsetof(NRF_TIMER_Type, EVENTS_COMPARE[0]), ///< Event from compare channel 0.
DECL|NRF_TIMER_EVENT_COMPARE1|enumerator|NRF_TIMER_EVENT_COMPARE1 = offsetof(NRF_TIMER_Type, EVENTS_COMPARE[1]), ///< Event from compare channel 1.
DECL|NRF_TIMER_EVENT_COMPARE2|enumerator|NRF_TIMER_EVENT_COMPARE2 = offsetof(NRF_TIMER_Type, EVENTS_COMPARE[2]), ///< Event from compare channel 2.
DECL|NRF_TIMER_EVENT_COMPARE3|enumerator|NRF_TIMER_EVENT_COMPARE3 = offsetof(NRF_TIMER_Type, EVENTS_COMPARE[3]), ///< Event from compare channel 3.
DECL|NRF_TIMER_EVENT_COMPARE4|enumerator|NRF_TIMER_EVENT_COMPARE4 = offsetof(NRF_TIMER_Type, EVENTS_COMPARE[4]), ///< Event from compare channel 4.
DECL|NRF_TIMER_EVENT_COMPARE5|enumerator|NRF_TIMER_EVENT_COMPARE5 = offsetof(NRF_TIMER_Type, EVENTS_COMPARE[5]), ///< Event from compare channel 5.
DECL|NRF_TIMER_FREQ_125kHz|enumerator|NRF_TIMER_FREQ_125kHz, ///< Timer frequency 125 kHz.
DECL|NRF_TIMER_FREQ_16MHz|enumerator|NRF_TIMER_FREQ_16MHz = 0, ///< Timer frequency 16 MHz.
DECL|NRF_TIMER_FREQ_1MHz|enumerator|NRF_TIMER_FREQ_1MHz, ///< Timer frequency 1 MHz.
DECL|NRF_TIMER_FREQ_250kHz|enumerator|NRF_TIMER_FREQ_250kHz, ///< Timer frequency 250 kHz.
DECL|NRF_TIMER_FREQ_2MHz|enumerator|NRF_TIMER_FREQ_2MHz, ///< Timer frequency 2 MHz.
DECL|NRF_TIMER_FREQ_31250Hz|enumerator|NRF_TIMER_FREQ_31250Hz ///< Timer frequency 31250 Hz.
DECL|NRF_TIMER_FREQ_4MHz|enumerator|NRF_TIMER_FREQ_4MHz, ///< Timer frequency 4 MHz.
DECL|NRF_TIMER_FREQ_500kHz|enumerator|NRF_TIMER_FREQ_500kHz, ///< Timer frequency 500 kHz.
DECL|NRF_TIMER_FREQ_62500Hz|enumerator|NRF_TIMER_FREQ_62500Hz, ///< Timer frequency 62500 Hz.
DECL|NRF_TIMER_FREQ_8MHz|enumerator|NRF_TIMER_FREQ_8MHz, ///< Timer frequency 8 MHz.
DECL|NRF_TIMER_H__|macro|NRF_TIMER_H__
DECL|NRF_TIMER_INT_COMPARE0_MASK|enumerator|NRF_TIMER_INT_COMPARE0_MASK = TIMER_INTENSET_COMPARE0_Msk, ///< Timer interrupt from compare event on channel 0.
DECL|NRF_TIMER_INT_COMPARE1_MASK|enumerator|NRF_TIMER_INT_COMPARE1_MASK = TIMER_INTENSET_COMPARE1_Msk, ///< Timer interrupt from compare event on channel 1.
DECL|NRF_TIMER_INT_COMPARE2_MASK|enumerator|NRF_TIMER_INT_COMPARE2_MASK = TIMER_INTENSET_COMPARE2_Msk, ///< Timer interrupt from compare event on channel 2.
DECL|NRF_TIMER_INT_COMPARE3_MASK|enumerator|NRF_TIMER_INT_COMPARE3_MASK = TIMER_INTENSET_COMPARE3_Msk, ///< Timer interrupt from compare event on channel 3.
DECL|NRF_TIMER_INT_COMPARE4_MASK|enumerator|NRF_TIMER_INT_COMPARE4_MASK = TIMER_INTENSET_COMPARE4_Msk, ///< Timer interrupt from compare event on channel 4.
DECL|NRF_TIMER_INT_COMPARE5_MASK|enumerator|NRF_TIMER_INT_COMPARE5_MASK = TIMER_INTENSET_COMPARE5_Msk, ///< Timer interrupt from compare event on channel 5.
DECL|NRF_TIMER_IS_BIT_WIDTH_VALID|macro|NRF_TIMER_IS_BIT_WIDTH_VALID
DECL|NRF_TIMER_IS_BIT_WIDTH_VALID|macro|NRF_TIMER_IS_BIT_WIDTH_VALID
DECL|NRF_TIMER_MODE_COUNTER|enumerator|NRF_TIMER_MODE_COUNTER = TIMER_MODE_MODE_Counter, ///< Timer mode: counter.
DECL|NRF_TIMER_MODE_LOW_POWER_COUNTER|enumerator|NRF_TIMER_MODE_LOW_POWER_COUNTER = TIMER_MODE_MODE_LowPowerCounter, ///< Timer mode: low-power counter.
DECL|NRF_TIMER_MODE_TIMER|enumerator|NRF_TIMER_MODE_TIMER = TIMER_MODE_MODE_Timer, ///< Timer mode: timer.
DECL|NRF_TIMER_SHORT_COMPARE0_CLEAR_MASK|enumerator|NRF_TIMER_SHORT_COMPARE0_CLEAR_MASK = TIMER_SHORTS_COMPARE0_CLEAR_Msk, ///< Shortcut for clearing the timer based on compare 0.
DECL|NRF_TIMER_SHORT_COMPARE0_STOP_MASK|enumerator|NRF_TIMER_SHORT_COMPARE0_STOP_MASK = TIMER_SHORTS_COMPARE0_STOP_Msk, ///< Shortcut for stopping the timer based on compare 0.
DECL|NRF_TIMER_SHORT_COMPARE1_CLEAR_MASK|enumerator|NRF_TIMER_SHORT_COMPARE1_CLEAR_MASK = TIMER_SHORTS_COMPARE1_CLEAR_Msk, ///< Shortcut for clearing the timer based on compare 1.
DECL|NRF_TIMER_SHORT_COMPARE1_STOP_MASK|enumerator|NRF_TIMER_SHORT_COMPARE1_STOP_MASK = TIMER_SHORTS_COMPARE1_STOP_Msk, ///< Shortcut for stopping the timer based on compare 1.
DECL|NRF_TIMER_SHORT_COMPARE2_CLEAR_MASK|enumerator|NRF_TIMER_SHORT_COMPARE2_CLEAR_MASK = TIMER_SHORTS_COMPARE2_CLEAR_Msk, ///< Shortcut for clearing the timer based on compare 2.
DECL|NRF_TIMER_SHORT_COMPARE2_STOP_MASK|enumerator|NRF_TIMER_SHORT_COMPARE2_STOP_MASK = TIMER_SHORTS_COMPARE2_STOP_Msk, ///< Shortcut for stopping the timer based on compare 2.
DECL|NRF_TIMER_SHORT_COMPARE3_CLEAR_MASK|enumerator|NRF_TIMER_SHORT_COMPARE3_CLEAR_MASK = TIMER_SHORTS_COMPARE3_CLEAR_Msk, ///< Shortcut for clearing the timer based on compare 3.
DECL|NRF_TIMER_SHORT_COMPARE3_STOP_MASK|enumerator|NRF_TIMER_SHORT_COMPARE3_STOP_MASK = TIMER_SHORTS_COMPARE3_STOP_Msk, ///< Shortcut for stopping the timer based on compare 3.
DECL|NRF_TIMER_SHORT_COMPARE4_CLEAR_MASK|enumerator|NRF_TIMER_SHORT_COMPARE4_CLEAR_MASK = TIMER_SHORTS_COMPARE4_CLEAR_Msk, ///< Shortcut for clearing the timer based on compare 4.
DECL|NRF_TIMER_SHORT_COMPARE4_STOP_MASK|enumerator|NRF_TIMER_SHORT_COMPARE4_STOP_MASK = TIMER_SHORTS_COMPARE4_STOP_Msk, ///< Shortcut for stopping the timer based on compare 4.
DECL|NRF_TIMER_SHORT_COMPARE5_CLEAR_MASK|enumerator|NRF_TIMER_SHORT_COMPARE5_CLEAR_MASK = TIMER_SHORTS_COMPARE5_CLEAR_Msk, ///< Shortcut for clearing the timer based on compare 5.
DECL|NRF_TIMER_SHORT_COMPARE5_STOP_MASK|enumerator|NRF_TIMER_SHORT_COMPARE5_STOP_MASK = TIMER_SHORTS_COMPARE5_STOP_Msk, ///< Shortcut for stopping the timer based on compare 5.
DECL|NRF_TIMER_TASK_CAPTURE0|enumerator|NRF_TIMER_TASK_CAPTURE0 = offsetof(NRF_TIMER_Type, TASKS_CAPTURE[0]), ///< Task for capturing the timer value on channel 0.
DECL|NRF_TIMER_TASK_CAPTURE1|enumerator|NRF_TIMER_TASK_CAPTURE1 = offsetof(NRF_TIMER_Type, TASKS_CAPTURE[1]), ///< Task for capturing the timer value on channel 1.
DECL|NRF_TIMER_TASK_CAPTURE2|enumerator|NRF_TIMER_TASK_CAPTURE2 = offsetof(NRF_TIMER_Type, TASKS_CAPTURE[2]), ///< Task for capturing the timer value on channel 2.
DECL|NRF_TIMER_TASK_CAPTURE3|enumerator|NRF_TIMER_TASK_CAPTURE3 = offsetof(NRF_TIMER_Type, TASKS_CAPTURE[3]), ///< Task for capturing the timer value on channel 3.
DECL|NRF_TIMER_TASK_CAPTURE4|enumerator|NRF_TIMER_TASK_CAPTURE4 = offsetof(NRF_TIMER_Type, TASKS_CAPTURE[4]), ///< Task for capturing the timer value on channel 4.
DECL|NRF_TIMER_TASK_CAPTURE5|enumerator|NRF_TIMER_TASK_CAPTURE5 = offsetof(NRF_TIMER_Type, TASKS_CAPTURE[5]), ///< Task for capturing the timer value on channel 5.
DECL|NRF_TIMER_TASK_CLEAR|enumerator|NRF_TIMER_TASK_CLEAR = offsetof(NRF_TIMER_Type, TASKS_CLEAR), ///< Task for resetting the timer value.
DECL|NRF_TIMER_TASK_COUNT|enumerator|NRF_TIMER_TASK_COUNT = offsetof(NRF_TIMER_Type, TASKS_COUNT), ///< Task for incrementing the timer (in counter mode).
DECL|NRF_TIMER_TASK_SHUTDOWN|enumerator|NRF_TIMER_TASK_SHUTDOWN = offsetof(NRF_TIMER_Type, TASKS_SHUTDOWN), ///< Task for powering off the timer.
DECL|NRF_TIMER_TASK_START|enumerator|NRF_TIMER_TASK_START = offsetof(NRF_TIMER_Type, TASKS_START), ///< Task for starting the timer.
DECL|NRF_TIMER_TASK_STOP|enumerator|NRF_TIMER_TASK_STOP = offsetof(NRF_TIMER_Type, TASKS_STOP), ///< Task for stopping the timer.
DECL|TIMER_BIT_WIDTH_MAX|macro|TIMER_BIT_WIDTH_MAX
DECL|TIMER_MAX_SIZE|macro|TIMER_MAX_SIZE
DECL|nrf_timer_bit_width_get|function|__STATIC_INLINE nrf_timer_bit_width_t nrf_timer_bit_width_get(NRF_TIMER_Type * p_reg)
DECL|nrf_timer_bit_width_set|function|__STATIC_INLINE void nrf_timer_bit_width_set(NRF_TIMER_Type * p_reg, nrf_timer_bit_width_t bit_width)
DECL|nrf_timer_bit_width_t|typedef|} nrf_timer_bit_width_t;
DECL|nrf_timer_capture_task_get|function|__STATIC_INLINE nrf_timer_task_t nrf_timer_capture_task_get(uint32_t channel)
DECL|nrf_timer_cc_channel_t|typedef|} nrf_timer_cc_channel_t;
DECL|nrf_timer_cc_read|function|__STATIC_INLINE uint32_t nrf_timer_cc_read(NRF_TIMER_Type * p_reg, nrf_timer_cc_channel_t cc_channel)
DECL|nrf_timer_cc_write|function|__STATIC_INLINE void nrf_timer_cc_write(NRF_TIMER_Type * p_reg, nrf_timer_cc_channel_t cc_channel, uint32_t cc_value)
DECL|nrf_timer_compare_event_get|function|__STATIC_INLINE nrf_timer_event_t nrf_timer_compare_event_get(uint32_t channel)
DECL|nrf_timer_compare_int_get|function|__STATIC_INLINE nrf_timer_int_mask_t nrf_timer_compare_int_get(uint32_t channel)
DECL|nrf_timer_event_address_get|function|__STATIC_INLINE uint32_t * nrf_timer_event_address_get(NRF_TIMER_Type * p_reg, nrf_timer_event_t event)
DECL|nrf_timer_event_check|function|__STATIC_INLINE bool nrf_timer_event_check(NRF_TIMER_Type * p_reg, nrf_timer_event_t event)
DECL|nrf_timer_event_clear|function|__STATIC_INLINE void nrf_timer_event_clear(NRF_TIMER_Type * p_reg, nrf_timer_event_t event)
DECL|nrf_timer_event_t|typedef|} nrf_timer_event_t;
DECL|nrf_timer_frequency_get|function|__STATIC_INLINE nrf_timer_frequency_t nrf_timer_frequency_get(NRF_TIMER_Type * p_reg)
DECL|nrf_timer_frequency_set|function|__STATIC_INLINE void nrf_timer_frequency_set(NRF_TIMER_Type * p_reg, nrf_timer_frequency_t frequency)
DECL|nrf_timer_frequency_t|typedef|} nrf_timer_frequency_t;
DECL|nrf_timer_int_disable|function|__STATIC_INLINE void nrf_timer_int_disable(NRF_TIMER_Type * p_reg, uint32_t timer_int_mask)
DECL|nrf_timer_int_enable_check|function|__STATIC_INLINE bool nrf_timer_int_enable_check(NRF_TIMER_Type * p_reg, uint32_t timer_int)
DECL|nrf_timer_int_enable|function|__STATIC_INLINE void nrf_timer_int_enable(NRF_TIMER_Type * p_reg, uint32_t timer_int_mask)
DECL|nrf_timer_int_mask_t|typedef|} nrf_timer_int_mask_t;
DECL|nrf_timer_mode_get|function|__STATIC_INLINE nrf_timer_mode_t nrf_timer_mode_get(NRF_TIMER_Type * p_reg)
DECL|nrf_timer_mode_set|function|__STATIC_INLINE void nrf_timer_mode_set(NRF_TIMER_Type * p_reg, nrf_timer_mode_t mode)
DECL|nrf_timer_mode_t|typedef|} nrf_timer_mode_t;
DECL|nrf_timer_ms_to_ticks|function|__STATIC_INLINE uint32_t nrf_timer_ms_to_ticks(uint32_t time_ms, nrf_timer_frequency_t frequency)
DECL|nrf_timer_short_mask_t|typedef|} nrf_timer_short_mask_t;
DECL|nrf_timer_shorts_disable|function|__STATIC_INLINE void nrf_timer_shorts_disable(NRF_TIMER_Type * p_reg, uint32_t timer_shorts_mask)
DECL|nrf_timer_shorts_enable|function|__STATIC_INLINE void nrf_timer_shorts_enable(NRF_TIMER_Type * p_reg, uint32_t timer_shorts_mask)
DECL|nrf_timer_task_address_get|function|__STATIC_INLINE uint32_t * nrf_timer_task_address_get(NRF_TIMER_Type * p_reg, nrf_timer_task_t task)
DECL|nrf_timer_task_trigger|function|__STATIC_INLINE void nrf_timer_task_trigger(NRF_TIMER_Type * p_reg, nrf_timer_task_t task)
DECL|nrf_timer_task_t|typedef|} nrf_timer_task_t;
DECL|nrf_timer_us_to_ticks|function|__STATIC_INLINE uint32_t nrf_timer_us_to_ticks(uint32_t time_us, nrf_timer_frequency_t frequency)
