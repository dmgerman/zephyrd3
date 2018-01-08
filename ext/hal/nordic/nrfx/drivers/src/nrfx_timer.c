DECL|DISABLE_ALL|macro|DISABLE_ALL
DECL|DISABLE_ALL|macro|DISABLE_ALL
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|context|member|void * context;
DECL|handler|member|nrfx_timer_event_handler_t handler;
DECL|irq_handler|function|static void irq_handler(NRF_TIMER_Type * p_reg, timer_control_block_t * p_cb, uint8_t channel_count)
DECL|m_cb|variable|m_cb
DECL|nrfx_timer_0_irq_handler|function|void nrfx_timer_0_irq_handler(void)
DECL|nrfx_timer_1_irq_handler|function|void nrfx_timer_1_irq_handler(void)
DECL|nrfx_timer_2_irq_handler|function|void nrfx_timer_2_irq_handler(void)
DECL|nrfx_timer_3_irq_handler|function|void nrfx_timer_3_irq_handler(void)
DECL|nrfx_timer_4_irq_handler|function|void nrfx_timer_4_irq_handler(void)
DECL|nrfx_timer_capture|function|uint32_t nrfx_timer_capture(nrfx_timer_t const * const p_instance, nrf_timer_cc_channel_t cc_channel)
DECL|nrfx_timer_clear|function|void nrfx_timer_clear(nrfx_timer_t const * const p_instance)
DECL|nrfx_timer_compare_int_disable|function|void nrfx_timer_compare_int_disable(nrfx_timer_t const * const p_instance, uint32_t channel)
DECL|nrfx_timer_compare_int_enable|function|void nrfx_timer_compare_int_enable(nrfx_timer_t const * const p_instance, uint32_t channel)
DECL|nrfx_timer_compare|function|void nrfx_timer_compare(nrfx_timer_t const * const p_instance, nrf_timer_cc_channel_t cc_channel, uint32_t cc_value, bool enable_int)
DECL|nrfx_timer_disable|function|void nrfx_timer_disable(nrfx_timer_t const * const p_instance)
DECL|nrfx_timer_enable|function|void nrfx_timer_enable(nrfx_timer_t const * const p_instance)
DECL|nrfx_timer_extended_compare|function|void nrfx_timer_extended_compare(nrfx_timer_t const * const p_instance, nrf_timer_cc_channel_t cc_channel, uint32_t cc_value, nrf_timer_short_mask_t timer_short_mask, bool enable_int)
DECL|nrfx_timer_increment|function|void nrfx_timer_increment(nrfx_timer_t const * const p_instance)
DECL|nrfx_timer_init|function|nrfx_err_t nrfx_timer_init(nrfx_timer_t const * const p_instance, nrfx_timer_config_t const * p_config, nrfx_timer_event_handler_t timer_event_handler)
DECL|nrfx_timer_is_enabled|function|bool nrfx_timer_is_enabled(nrfx_timer_t const * const p_instance)
DECL|nrfx_timer_pause|function|void nrfx_timer_pause(nrfx_timer_t const * const p_instance)
DECL|nrfx_timer_resume|function|void nrfx_timer_resume(nrfx_timer_t const * const p_instance)
DECL|nrfx_timer_uninit|function|void nrfx_timer_uninit(nrfx_timer_t const * const p_instance)
DECL|state|member|nrfx_drv_state_t state;
DECL|timer_control_block_t|typedef|} timer_control_block_t;
