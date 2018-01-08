DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|TX_COUNTER_ABORT_REQ_VALUE|macro|TX_COUNTER_ABORT_REQ_VALUE
DECL|apply_config|function|static void apply_config(nrfx_uart_t const * p_instance, nrfx_uart_config_t const * p_config)
DECL|handler|member|nrfx_uart_event_handler_t handler;
DECL|interrupts_disable|function|static void interrupts_disable(nrfx_uart_t const * p_instance)
DECL|interrupts_enable|function|static void interrupts_enable(nrfx_uart_t const * p_instance, uint8_t interrupt_priority)
DECL|m_cb|variable|m_cb
DECL|nrfx_uart_0_irq_handler|function|void nrfx_uart_0_irq_handler(void)
DECL|nrfx_uart_errorsrc_get|function|uint32_t nrfx_uart_errorsrc_get(nrfx_uart_t const * p_instance)
DECL|nrfx_uart_init|function|nrfx_err_t nrfx_uart_init(nrfx_uart_t const * p_instance, nrfx_uart_config_t const * p_config, nrfx_uart_event_handler_t event_handler)
DECL|nrfx_uart_rx_abort|function|void nrfx_uart_rx_abort(nrfx_uart_t const * p_instance)
DECL|nrfx_uart_rx_disable|function|void nrfx_uart_rx_disable(nrfx_uart_t const * p_instance)
DECL|nrfx_uart_rx_enable|function|void nrfx_uart_rx_enable(nrfx_uart_t const * p_instance)
DECL|nrfx_uart_rx_ready|function|bool nrfx_uart_rx_ready(nrfx_uart_t const * p_instance)
DECL|nrfx_uart_rx|function|nrfx_err_t nrfx_uart_rx(nrfx_uart_t const * p_instance, uint8_t * p_data, size_t length)
DECL|nrfx_uart_tx_abort|function|void nrfx_uart_tx_abort(nrfx_uart_t const * p_instance)
DECL|nrfx_uart_tx_in_progress|function|bool nrfx_uart_tx_in_progress(nrfx_uart_t const * p_instance)
DECL|nrfx_uart_tx|function|nrfx_err_t nrfx_uart_tx(nrfx_uart_t const * p_instance, uint8_t const * p_data, size_t length)
DECL|nrfx_uart_uninit|function|void nrfx_uart_uninit(nrfx_uart_t const * p_instance)
DECL|p_context|member|void * p_context;
DECL|p_rx_buffer|member|uint8_t * p_rx_buffer;
DECL|p_rx_secondary_buffer|member|uint8_t * p_rx_secondary_buffer;
DECL|p_tx_buffer|member|uint8_t const * p_tx_buffer;
DECL|pins_to_default|function|static void pins_to_default(nrfx_uart_t const * p_instance)
DECL|rx_buffer_length|member|size_t rx_buffer_length;
DECL|rx_byte|function|static void rx_byte(NRF_UART_Type * p_uart, uart_control_block_t * p_cb)
DECL|rx_counter|member|volatile size_t rx_counter;
DECL|rx_done_event|function|static void rx_done_event(uart_control_block_t * p_cb, size_t bytes, uint8_t * p_data)
DECL|rx_enabled|member|bool rx_enabled;
DECL|rx_enable|function|static void rx_enable(nrfx_uart_t const * p_instance)
DECL|rx_secondary_buffer_length|member|size_t rx_secondary_buffer_length;
DECL|state|member|nrfx_drv_state_t state;
DECL|tx_abort|member|volatile bool tx_abort;
DECL|tx_blocking|function|static bool tx_blocking(NRF_UART_Type * p_uart, uart_control_block_t * p_cb)
DECL|tx_buffer_length|member|size_t tx_buffer_length;
DECL|tx_byte|function|static void tx_byte(NRF_UART_Type * p_uart, uart_control_block_t * p_cb)
DECL|tx_counter|member|volatile size_t tx_counter;
DECL|tx_done_event|function|static void tx_done_event(uart_control_block_t * p_cb, size_t bytes)
DECL|uart_control_block_t|typedef|} uart_control_block_t;
DECL|uart_irq_handler|function|static void uart_irq_handler(NRF_UART_Type * p_uart, uart_control_block_t * p_cb)
