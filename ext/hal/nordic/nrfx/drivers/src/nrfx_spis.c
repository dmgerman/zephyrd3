DECL|DISABLE_ALL|macro|DISABLE_ALL
DECL|DISABLE_ALL|macro|DISABLE_ALL
DECL|EVT_TO_STR|macro|EVT_TO_STR
DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|SPIS0_LENGTH_VALIDATE|macro|SPIS0_LENGTH_VALIDATE
DECL|SPIS0_LENGTH_VALIDATE|macro|SPIS0_LENGTH_VALIDATE
DECL|SPIS1_EASYDMA_MAXCNT_SIZE|macro|SPIS1_EASYDMA_MAXCNT_SIZE
DECL|SPIS1_LENGTH_VALIDATE|macro|SPIS1_LENGTH_VALIDATE
DECL|SPIS1_LENGTH_VALIDATE|macro|SPIS1_LENGTH_VALIDATE
DECL|SPIS2_LENGTH_VALIDATE|macro|SPIS2_LENGTH_VALIDATE
DECL|SPIS2_LENGTH_VALIDATE|macro|SPIS2_LENGTH_VALIDATE
DECL|SPISX_LENGTH_VALIDATE|macro|SPISX_LENGTH_VALIDATE
DECL|SPIS_BUFFER_RESOURCE_CONFIGURED|enumerator|SPIS_BUFFER_RESOURCE_CONFIGURED, /**< State where the configuration of the memory buffers, which are to be used in SPI transaction, has completed. */
DECL|SPIS_BUFFER_RESOURCE_REQUESTED|enumerator|SPIS_BUFFER_RESOURCE_REQUESTED, /**< State where the configuration of the memory buffers, which are to be used in SPI transaction, has started. */
DECL|SPIS_LENGTH_VALIDATE|macro|SPIS_LENGTH_VALIDATE
DECL|SPIS_STATE_INIT|enumerator|SPIS_STATE_INIT, /**< Initialization state. In this state the module waits for a call to @ref spi_slave_buffers_set. */
DECL|SPIS_XFER_COMPLETED|enumerator|SPIS_XFER_COMPLETED /**< State where SPI transaction has been completed. */
DECL|USE_DMA_ISSUE_WORKAROUND|macro|USE_DMA_ISSUE_WORKAROUND
DECL|csn_event_handler|function|static void csn_event_handler(nrfx_gpiote_pin_t pin, nrf_gpiote_polarity_t action)
DECL|handler|member|nrfx_spis_event_handler_t handler; //!< SPI event handler.
DECL|m_cb|variable|m_cb
DECL|nrfx_spis_0_irq_handler|function|void nrfx_spis_0_irq_handler(void)
DECL|nrfx_spis_1_irq_handler|function|void nrfx_spis_1_irq_handler(void)
DECL|nrfx_spis_2_irq_handler|function|void nrfx_spis_2_irq_handler(void)
DECL|nrfx_spis_buffers_set|function|nrfx_err_t nrfx_spis_buffers_set(nrfx_spis_t const * const p_instance, uint8_t const * p_tx_buffer, size_t tx_buffer_length, uint8_t * p_rx_buffer, size_t rx_buffer_length)
DECL|nrfx_spis_init|function|nrfx_err_t nrfx_spis_init(nrfx_spis_t const * const p_instance, nrfx_spis_config_t const * p_config, nrfx_spis_event_handler_t event_handler)
DECL|nrfx_spis_state_t|typedef|} nrfx_spis_state_t;
DECL|nrfx_spis_uninit|function|void nrfx_spis_uninit(nrfx_spis_t const * const p_instance)
DECL|rx_buffer_size|member|volatile uint32_t rx_buffer_size; //!< SPI slave RX buffer size in bytes.
DECL|rx_buffer|member|volatile uint8_t * rx_buffer; //!< SPI slave RX buffer.
DECL|spi_state|member|volatile nrfx_spis_state_t spi_state; //!< SPI slave state.
DECL|spis_cb_t|typedef|} spis_cb_t;
DECL|spis_irq_handler|function|static void spis_irq_handler(NRF_SPIS_Type * p_spis, spis_cb_t * p_cb)
DECL|spis_state_change|function|static void spis_state_change(NRF_SPIS_Type * p_spis, spis_cb_t * p_cb, nrfx_spis_state_t new_state)
DECL|spis_state_entry_action_execute|function|static void spis_state_entry_action_execute(NRF_SPIS_Type * p_spis, spis_cb_t * p_cb)
DECL|state|member|nrfx_drv_state_t state; //!< driver initialization state.
DECL|tx_buffer_size|member|volatile uint32_t tx_buffer_size; //!< SPI slave TX buffer size in bytes.
DECL|tx_buffer|member|volatile const uint8_t * tx_buffer; //!< SPI slave TX buffer.
