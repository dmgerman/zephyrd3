DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|irq_handler|function|static void irq_handler(NRF_RTC_Type * p_reg, uint32_t instance_id, uint32_t channel_count)
DECL|m_cb|variable|m_cb
DECL|m_handlers|variable|m_handlers
DECL|nrfx_rtc_0_irq_handler|function|void nrfx_rtc_0_irq_handler(void)
DECL|nrfx_rtc_1_irq_handler|function|void nrfx_rtc_1_irq_handler(void)
DECL|nrfx_rtc_2_irq_handler|function|void nrfx_rtc_2_irq_handler(void)
DECL|nrfx_rtc_cb_t|typedef|} nrfx_rtc_cb_t;
DECL|nrfx_rtc_cc_disable|function|nrfx_err_t nrfx_rtc_cc_disable(nrfx_rtc_t const * const p_instance, uint32_t channel)
DECL|nrfx_rtc_cc_set|function|nrfx_err_t nrfx_rtc_cc_set(nrfx_rtc_t const * const p_instance, uint32_t channel, uint32_t val, bool enable_irq)
DECL|nrfx_rtc_disable|function|void nrfx_rtc_disable(nrfx_rtc_t const * const p_instance)
DECL|nrfx_rtc_enable|function|void nrfx_rtc_enable(nrfx_rtc_t const * const p_instance)
DECL|nrfx_rtc_init|function|nrfx_err_t nrfx_rtc_init(nrfx_rtc_t const * const p_instance, nrfx_rtc_config_t const * p_config, nrfx_rtc_handler_t handler)
DECL|nrfx_rtc_max_ticks_get|function|uint32_t nrfx_rtc_max_ticks_get(nrfx_rtc_t const * const p_instance)
DECL|nrfx_rtc_overflow_disable|function|void nrfx_rtc_overflow_disable(nrfx_rtc_t const * const p_instance)
DECL|nrfx_rtc_overflow_enable|function|void nrfx_rtc_overflow_enable(nrfx_rtc_t const * const p_instance, bool enable_irq)
DECL|nrfx_rtc_tick_disable|function|void nrfx_rtc_tick_disable(nrfx_rtc_t const * const p_instance)
DECL|nrfx_rtc_tick_enable|function|void nrfx_rtc_tick_enable(nrfx_rtc_t const * const p_instance, bool enable_irq)
DECL|nrfx_rtc_uninit|function|void nrfx_rtc_uninit(nrfx_rtc_t const * const p_instance)
DECL|reliable|member|bool reliable; /**< Reliable mode flag. */
DECL|state|member|nrfx_drv_state_t state; /**< Instance state. */
DECL|tick_latency|member|uint8_t tick_latency; /**< Maximum length of interrupt handler in ticks (max 7.7 ms). */
