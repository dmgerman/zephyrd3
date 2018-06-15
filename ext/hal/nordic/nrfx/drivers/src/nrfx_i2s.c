DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|USE_WORKAROUND_FOR_ANOMALY_194|macro|USE_WORKAROUND_FOR_ANOMALY_194
DECL|buffer_size|member|uint16_t buffer_size;
DECL|buffers_needed|member|bool buffers_needed : 1;
DECL|buffers_reused|member|bool buffers_reused : 1;
DECL|configure_pins|function|static void configure_pins(nrfx_i2s_config_t const * p_config)
DECL|current_buffers|member|nrfx_i2s_buffers_t current_buffers;
DECL|handler|member|nrfx_i2s_data_handler_t handler;
DECL|i2s_control_block_t|typedef|} i2s_control_block_t;
DECL|m_cb|variable|m_cb
DECL|next_buffers|member|nrfx_i2s_buffers_t next_buffers;
DECL|nrfx_i2s_init|function|nrfx_err_t nrfx_i2s_init(nrfx_i2s_config_t const * p_config, nrfx_i2s_data_handler_t handler)
DECL|nrfx_i2s_irq_handler|function|void nrfx_i2s_irq_handler(void)
DECL|nrfx_i2s_next_buffers_set|function|nrfx_err_t nrfx_i2s_next_buffers_set(nrfx_i2s_buffers_t const * p_buffers)
DECL|nrfx_i2s_start|function|nrfx_err_t nrfx_i2s_start(nrfx_i2s_buffers_t const * p_initial_buffers, uint16_t buffer_size, uint8_t flags)
DECL|nrfx_i2s_stop|function|void nrfx_i2s_stop(void)
DECL|nrfx_i2s_uninit|function|void nrfx_i2s_uninit(void)
DECL|rx_ready|member|bool rx_ready : 1;
DECL|state|member|nrfx_drv_state_t state;
DECL|tx_ready|member|bool tx_ready : 1;
DECL|use_rx|member|bool use_rx : 1;
DECL|use_tx|member|bool use_tx : 1;
