DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|UARTE0_LENGTH_VALIDATE|macro|UARTE0_LENGTH_VALIDATE
DECL|UARTE0_LENGTH_VALIDATE|macro|UARTE0_LENGTH_VALIDATE
DECL|UARTE1_LENGTH_VALIDATE|macro|UARTE1_LENGTH_VALIDATE
DECL|UARTE1_LENGTH_VALIDATE|macro|UARTE1_LENGTH_VALIDATE
DECL|UARTEX_LENGTH_VALIDATE|macro|UARTEX_LENGTH_VALIDATE
DECL|UARTE_LENGTH_VALIDATE|macro|UARTE_LENGTH_VALIDATE
DECL|apply_config|function|static void apply_config(nrfx_uarte_t const * p_instance, nrfx_uarte_config_t const * p_config)
DECL|handler|member|nrfx_uarte_event_handler_t handler;
DECL|interrupts_disable|function|static void interrupts_disable(nrfx_uarte_t const * p_instance)
DECL|interrupts_enable|function|static void interrupts_enable(nrfx_uarte_t const * p_instance, uint8_t interrupt_priority)
DECL|m_cb|variable|m_cb
DECL|nrfx_uarte_0_irq_handler|function|void nrfx_uarte_0_irq_handler(void)
DECL|nrfx_uarte_1_irq_handler|function|void nrfx_uarte_1_irq_handler(void)
DECL|nrfx_uarte_errorsrc_get|function|uint32_t nrfx_uarte_errorsrc_get(nrfx_uarte_t const * p_instance)
DECL|nrfx_uarte_init|function|nrfx_err_t nrfx_uarte_init(nrfx_uarte_t const * p_instance, nrfx_uarte_config_t const * p_config, nrfx_uarte_event_handler_t event_handler)
DECL|nrfx_uarte_rx_abort|function|void nrfx_uarte_rx_abort(nrfx_uarte_t const * p_instance)
DECL|nrfx_uarte_rx_ready|function|bool nrfx_uarte_rx_ready(nrfx_uarte_t const * p_instance)
DECL|nrfx_uarte_rx|function|nrfx_err_t nrfx_uarte_rx(nrfx_uarte_t const * p_instance, uint8_t * p_data, size_t length)
DECL|nrfx_uarte_tx_abort|function|void nrfx_uarte_tx_abort(nrfx_uarte_t const * p_instance)
DECL|nrfx_uarte_tx_in_progress|function|bool nrfx_uarte_tx_in_progress(nrfx_uarte_t const * p_instance)
DECL|nrfx_uarte_tx|function|nrfx_err_t nrfx_uarte_tx(nrfx_uarte_t const * p_instance, uint8_t const * p_data, size_t length)
DECL|nrfx_uarte_uninit|function|void nrfx_uarte_uninit(nrfx_uarte_t const * p_instance)
DECL|p_context|member|void * p_context;
DECL|p_rx_buffer|member|uint8_t * p_rx_buffer;
DECL|p_rx_secondary_buffer|member|uint8_t * p_rx_secondary_buffer;
DECL|p_tx_buffer|member|uint8_t const * p_tx_buffer;
DECL|pins_to_default|function|static void pins_to_default(nrfx_uarte_t const * p_instance)
DECL|rx_buffer_length|member|size_t rx_buffer_length;
DECL|rx_done_event|function|static void rx_done_event(uarte_control_block_t * p_cb, size_t bytes, uint8_t * p_data)
DECL|rx_secondary_buffer_length|member|size_t rx_secondary_buffer_length;
DECL|state|member|nrfx_drv_state_t state;
DECL|tx_buffer_length|member|size_t tx_buffer_length;
DECL|tx_done_event|function|static void tx_done_event(uarte_control_block_t * p_cb, size_t bytes)
DECL|uarte_control_block_t|typedef|} uarte_control_block_t;
DECL|uarte_irq_handler|function|static void uarte_irq_handler(NRF_UARTE_Type * p_uarte, uarte_control_block_t * p_cb)
