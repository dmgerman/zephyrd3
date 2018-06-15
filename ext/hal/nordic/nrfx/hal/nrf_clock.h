DECL|NRF_CLOCK_EVENT_CLEAR|macro|NRF_CLOCK_EVENT_CLEAR
DECL|NRF_CLOCK_EVENT_CTTO|enumerator|NRF_CLOCK_EVENT_CTTO = offsetof(NRF_CLOCK_Type, EVENTS_CTTO) /**< Calibration timer time-out.*/
DECL|NRF_CLOCK_EVENT_DONE|enumerator|NRF_CLOCK_EVENT_DONE = offsetof(NRF_CLOCK_Type, EVENTS_DONE), /**< Calibration of LFCLK RC oscillator completed.*/
DECL|NRF_CLOCK_EVENT_HFCLKSTARTED|enumerator|NRF_CLOCK_EVENT_HFCLKSTARTED = offsetof(NRF_CLOCK_Type, EVENTS_HFCLKSTARTED), /**< HFCLK oscillator started.*/
DECL|NRF_CLOCK_EVENT_LFCLKSTARTED|enumerator|NRF_CLOCK_EVENT_LFCLKSTARTED = offsetof(NRF_CLOCK_Type, EVENTS_LFCLKSTARTED), /**< LFCLK oscillator started.*/
DECL|NRF_CLOCK_HFCLK_HIGH_ACCURACY|enumerator|NRF_CLOCK_HFCLK_HIGH_ACCURACY = CLOCK_HFCLKSTAT_SRC_Xtal /**< External 16 MHz/32 MHz crystal oscillator. */
DECL|NRF_CLOCK_HFCLK_LOW_ACCURACY|enumerator|NRF_CLOCK_HFCLK_LOW_ACCURACY = CLOCK_HFCLKSTAT_SRC_RC, /**< Internal 16 MHz RC oscillator. */
DECL|NRF_CLOCK_H__|macro|NRF_CLOCK_H__
DECL|NRF_CLOCK_INT_CTTO_MASK|enumerator|NRF_CLOCK_INT_CTTO_MASK = CLOCK_INTENSET_CTTO_Msk /**< Interrupt on CTTO event. */
DECL|NRF_CLOCK_INT_DONE_MASK|enumerator|NRF_CLOCK_INT_DONE_MASK = CLOCK_INTENSET_DONE_Msk, /**< Interrupt on DONE event. */
DECL|NRF_CLOCK_INT_HF_STARTED_MASK|enumerator|NRF_CLOCK_INT_HF_STARTED_MASK = CLOCK_INTENSET_HFCLKSTARTED_Msk, /**< Interrupt on HFCLKSTARTED event. */
DECL|NRF_CLOCK_INT_LF_STARTED_MASK|enumerator|NRF_CLOCK_INT_LF_STARTED_MASK = CLOCK_INTENSET_LFCLKSTARTED_Msk, /**< Interrupt on LFCLKSTARTED event. */
DECL|NRF_CLOCK_LFCLK_RC|enumerator|NRF_CLOCK_LFCLK_RC = CLOCK_LFCLKSRC_SRC_RC, /**< Internal 32 kHz RC oscillator. */
DECL|NRF_CLOCK_LFCLK_Synth|enumerator|NRF_CLOCK_LFCLK_Synth = CLOCK_LFCLKSRC_SRC_Synth, /**< Internal 32 kHz synthesizer from HFCLK system clock. */
DECL|NRF_CLOCK_LFCLK_Xtal_Full_Swing|enumerator|NRF_CLOCK_LFCLK_Xtal_Full_Swing = (CLOCK_LFCLKSRC_SRC_Xtal |
DECL|NRF_CLOCK_LFCLK_Xtal_Low_Swing|enumerator|NRF_CLOCK_LFCLK_Xtal_Low_Swing = (CLOCK_LFCLKSRC_SRC_Xtal |
DECL|NRF_CLOCK_LFCLK_Xtal|enumerator|NRF_CLOCK_LFCLK_Xtal = CLOCK_LFCLKSRC_SRC_Xtal, /**< External 32 kHz crystal. */
DECL|NRF_CLOCK_START_TASK_NOT_TRIGGERED|enumerator|NRF_CLOCK_START_TASK_NOT_TRIGGERED = CLOCK_LFCLKRUN_STATUS_NotTriggered, /**< Task LFCLKSTART/HFCLKSTART has not been triggered. */
DECL|NRF_CLOCK_START_TASK_TRIGGERED|enumerator|NRF_CLOCK_START_TASK_TRIGGERED = CLOCK_LFCLKRUN_STATUS_Triggered /**< Task LFCLKSTART/HFCLKSTART has been triggered. */
DECL|NRF_CLOCK_TASK_CAL|enumerator|NRF_CLOCK_TASK_CAL = offsetof(NRF_CLOCK_Type, TASKS_CAL), /**< Start calibration of LFCLK RC oscillator.*/
DECL|NRF_CLOCK_TASK_CTSTART|enumerator|NRF_CLOCK_TASK_CTSTART = offsetof(NRF_CLOCK_Type, TASKS_CTSTART), /**< Start calibration timer.*/
DECL|NRF_CLOCK_TASK_CTSTOP|enumerator|NRF_CLOCK_TASK_CTSTOP = offsetof(NRF_CLOCK_Type, TASKS_CTSTOP) /**< Stop calibration timer.*/
DECL|NRF_CLOCK_TASK_HFCLKSTART|enumerator|NRF_CLOCK_TASK_HFCLKSTART = offsetof(NRF_CLOCK_Type, TASKS_HFCLKSTART), /**< Start HFCLK clock source.*/
DECL|NRF_CLOCK_TASK_HFCLKSTOP|enumerator|NRF_CLOCK_TASK_HFCLKSTOP = offsetof(NRF_CLOCK_Type, TASKS_HFCLKSTOP), /**< Stop HFCLK clock source.*/
DECL|NRF_CLOCK_TASK_LFCLKSTART|enumerator|NRF_CLOCK_TASK_LFCLKSTART = offsetof(NRF_CLOCK_Type, TASKS_LFCLKSTART), /**< Start LFCLK clock source.*/
DECL|NRF_CLOCK_TASK_LFCLKSTOP|enumerator|NRF_CLOCK_TASK_LFCLKSTOP = offsetof(NRF_CLOCK_Type, TASKS_LFCLKSTOP), /**< Stop LFCLK clock source.*/
DECL|NRF_CLOCK_TASK_TRIGGER|macro|NRF_CLOCK_TASK_TRIGGER
DECL|NRF_CLOCK_USE_EXTERNAL_LFCLK_SOURCES|macro|NRF_CLOCK_USE_EXTERNAL_LFCLK_SOURCES
DECL|nrf_clock_cal_timer_timeout_set|function|__STATIC_INLINE void nrf_clock_cal_timer_timeout_set(uint32_t interval)
DECL|nrf_clock_event_address_get|function|__STATIC_INLINE uint32_t nrf_clock_event_address_get(nrf_clock_event_t event)
DECL|nrf_clock_event_check|function|__STATIC_INLINE bool nrf_clock_event_check(nrf_clock_event_t event)
DECL|nrf_clock_event_clear|function|__STATIC_INLINE void nrf_clock_event_clear(nrf_clock_event_t event)
DECL|nrf_clock_event_t|typedef|} nrf_clock_event_t; /*lint -restore */
DECL|nrf_clock_hf_is_running|function|__STATIC_INLINE bool nrf_clock_hf_is_running(nrf_clock_hfclk_t clk_src)
DECL|nrf_clock_hf_src_get|function|__STATIC_INLINE nrf_clock_hfclk_t nrf_clock_hf_src_get(void)
DECL|nrf_clock_hf_start_task_status_get|function|__STATIC_INLINE nrf_clock_start_task_status_t nrf_clock_hf_start_task_status_get(void)
DECL|nrf_clock_hfclk_t|typedef|} nrf_clock_hfclk_t;
DECL|nrf_clock_int_disable|function|__STATIC_INLINE void nrf_clock_int_disable(uint32_t int_mask)
DECL|nrf_clock_int_enable_check|function|__STATIC_INLINE bool nrf_clock_int_enable_check(nrf_clock_int_mask_t int_mask)
DECL|nrf_clock_int_enable|function|__STATIC_INLINE void nrf_clock_int_enable(uint32_t int_mask)
DECL|nrf_clock_int_mask_t|typedef|} nrf_clock_int_mask_t;
DECL|nrf_clock_lf_actv_src_get|function|__STATIC_INLINE nrf_clock_lfclk_t nrf_clock_lf_actv_src_get(void)
DECL|nrf_clock_lf_is_running|function|__STATIC_INLINE bool nrf_clock_lf_is_running(void)
DECL|nrf_clock_lf_src_get|function|__STATIC_INLINE nrf_clock_lfclk_t nrf_clock_lf_src_get(void)
DECL|nrf_clock_lf_src_set|function|__STATIC_INLINE void nrf_clock_lf_src_set(nrf_clock_lfclk_t source)
DECL|nrf_clock_lf_srccopy_get|function|__STATIC_INLINE nrf_clock_lfclk_t nrf_clock_lf_srccopy_get(void)
DECL|nrf_clock_lf_start_task_status_get|function|__STATIC_INLINE nrf_clock_start_task_status_t nrf_clock_lf_start_task_status_get(void)
DECL|nrf_clock_lfclk_t|typedef|} nrf_clock_lfclk_t;
DECL|nrf_clock_start_task_status_t|typedef|} nrf_clock_start_task_status_t;
DECL|nrf_clock_task_address_get|function|__STATIC_INLINE uint32_t nrf_clock_task_address_get(nrf_clock_task_t task)
DECL|nrf_clock_task_trigger|function|__STATIC_INLINE void nrf_clock_task_trigger(nrf_clock_task_t task)
DECL|nrf_clock_task_t|typedef|} nrf_clock_task_t; /*lint -restore */
