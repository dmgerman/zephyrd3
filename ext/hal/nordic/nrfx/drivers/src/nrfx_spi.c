DECL|NRFX_LOG_MODULE|macro|NRFX_LOG_MODULE
DECL|abort|member|bool abort;
DECL|bytes_transferred|member|size_t bytes_transferred;
DECL|evt|member|nrfx_spi_evt_t evt; // Keep the struct that is ready for event handler. Less memcpy.
DECL|finish_transfer|function|static void finish_transfer(spi_control_block_t * p_cb)
DECL|handler|member|nrfx_spi_evt_handler_t handler;
DECL|irq_handler|function|static void irq_handler(NRF_SPI_Type * p_spi, spi_control_block_t * p_cb)
DECL|m_cb|variable|m_cb
DECL|miso_pin|member|uint8_t miso_pin;
DECL|nrfx_spi_0_irq_handler|function|void nrfx_spi_0_irq_handler(void)
DECL|nrfx_spi_1_irq_handler|function|void nrfx_spi_1_irq_handler(void)
DECL|nrfx_spi_2_irq_handler|function|void nrfx_spi_2_irq_handler(void)
DECL|nrfx_spi_abort|function|void nrfx_spi_abort(nrfx_spi_t const * p_instance)
DECL|nrfx_spi_init|function|nrfx_err_t nrfx_spi_init(nrfx_spi_t const * const p_instance, nrfx_spi_config_t const * p_config, nrfx_spi_evt_handler_t handler, void * p_context)
DECL|nrfx_spi_uninit|function|void nrfx_spi_uninit(nrfx_spi_t const * const p_instance)
DECL|nrfx_spi_xfer|function|nrfx_err_t nrfx_spi_xfer(nrfx_spi_t const * const p_instance, nrfx_spi_xfer_desc_t const * p_xfer_desc, uint32_t flags)
DECL|orc|member|uint8_t orc;
DECL|p_context|member|void * p_context;
DECL|spi_control_block_t|typedef|} spi_control_block_t;
DECL|spi_xfer|function|static void spi_xfer(NRF_SPI_Type * p_spi, spi_control_block_t * p_cb, nrfx_spi_xfer_desc_t const * p_xfer_desc)
DECL|ss_pin|member|uint8_t ss_pin;
DECL|state|member|nrfx_drv_state_t state;
DECL|transfer_byte|function|static bool transfer_byte(NRF_SPI_Type * p_spi, spi_control_block_t * p_cb)
DECL|transfer_in_progress|member|volatile bool transfer_in_progress;
