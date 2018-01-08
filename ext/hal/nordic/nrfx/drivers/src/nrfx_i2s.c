DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|buffer_half_size|member|uint16_t buffer_half_size;
DECL|configure_pins|function|static void configure_pins(nrfx_i2s_config_t const * p_config)
DECL|handler|member|nrfx_i2s_data_handler_t handler;
DECL|i2s_control_block_t|typedef|} i2s_control_block_t;
DECL|just_started|member|bool just_started : 1;
DECL|m_cb|variable|m_cb
DECL|nrfx_i2s_init|function|nrfx_err_t nrfx_i2s_init(nrfx_i2s_config_t const * p_config, nrfx_i2s_data_handler_t handler)
DECL|nrfx_i2s_irq_handler|function|void nrfx_i2s_irq_handler(void)
DECL|nrfx_i2s_start|function|nrfx_err_t nrfx_i2s_start(uint32_t * p_rx_buffer, uint32_t * p_tx_buffer, uint16_t buffer_size, uint8_t flags)
DECL|nrfx_i2s_stop|function|void nrfx_i2s_stop(void)
DECL|nrfx_i2s_uninit|function|void nrfx_i2s_uninit(void)
DECL|p_rx_buffer|member|uint32_t * p_rx_buffer;
DECL|p_tx_buffer|member|uint32_t * p_tx_buffer;
DECL|rx_ready|member|bool rx_ready : 1;
DECL|state|member|nrfx_drv_state_t state;
DECL|synchronized_mode|member|bool synchronized_mode : 1;
DECL|tx_ready|member|bool tx_ready : 1;
