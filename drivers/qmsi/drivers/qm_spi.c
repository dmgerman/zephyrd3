DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_spi_master_0_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_spi_master_1_isr)
DECL|SPI_DEFAULT_RX_THRESHOLD|macro|SPI_DEFAULT_RX_THRESHOLD
DECL|SPI_DEFAULT_TX_THRESHOLD|macro|SPI_DEFAULT_TX_THRESHOLD
DECL|SPI_DMARDLR_DMARDL|macro|SPI_DMARDLR_DMARDL
DECL|SPI_DMATDLR_DMATDL|macro|SPI_DMATDLR_DMATDL
DECL|SPI_DMA_READ_BURST_LENGTH|macro|SPI_DMA_READ_BURST_LENGTH
DECL|SPI_DMA_WRITE_BURST_LENGTH|macro|SPI_DMA_WRITE_BURST_LENGTH
DECL|SPI_FIFOS_DEPTH|macro|SPI_FIFOS_DEPTH
DECL|SPI_RX_ONLY_DUMMY_BYTE|macro|SPI_RX_ONLY_DUMMY_BYTE
DECL|cb_pending|member|volatile bool cb_pending; /**< True if waiting for DMA calllback. */
DECL|dfs|variable|dfs
DECL|dma_channel_id|member|qm_dma_channel_id_t dma_channel_id; /**< Used DMA channel. */
DECL|dma_context_rx|variable|dma_context_rx
DECL|dma_context_tx|variable|dma_context_tx
DECL|dma_context_t|typedef|} dma_context_t;
DECL|dma_core|variable|dma_core
DECL|handle_rx_interrupt|function|static __inline__ void handle_rx_interrupt(const qm_spi_t spi)
DECL|handle_spi_interrupt|function|static void handle_spi_interrupt(const qm_spi_t spi)
DECL|handle_tx_interrupt|function|static __inline__ void handle_tx_interrupt(const qm_spi_t spi)
DECL|qm_spi_controllers|variable|qm_spi_controllers
DECL|qm_spi_controllers|variable|qm_spi_controllers
DECL|qm_spi_dma_channel_config|function|int qm_spi_dma_channel_config( const qm_spi_t spi, const qm_dma_t dma_ctrl_id, const qm_dma_channel_id_t dma_channel_id, const qm_dma_channel_direction_t dma_channel_direction)
DECL|qm_spi_dma_transfer_terminate|function|int qm_spi_dma_transfer_terminate(qm_spi_t spi)
DECL|qm_spi_dma_transfer|function|int qm_spi_dma_transfer(const qm_spi_t spi,const qm_spi_async_transfer_t *const xfer)
DECL|qm_spi_get_status|function|int qm_spi_get_status(const qm_spi_t spi, qm_spi_status_t *const status)
DECL|qm_spi_irq_transfer_terminate|function|int qm_spi_irq_transfer_terminate(const qm_spi_t spi)
DECL|qm_spi_irq_transfer|function|int qm_spi_irq_transfer(const qm_spi_t spi,const qm_spi_async_transfer_t *const xfer)
DECL|qm_spi_set_config|function|int qm_spi_set_config(const qm_spi_t spi, const qm_spi_config_t *cfg)
DECL|qm_spi_slave_select|function|int qm_spi_slave_select(const qm_spi_t spi, const qm_spi_slave_select_t ss)
DECL|qm_spi_transfer|function|int qm_spi_transfer(const qm_spi_t spi, const qm_spi_transfer_t *const xfer, qm_spi_status_t *const status)
DECL|read_frame|function|static void read_frame(const qm_spi_t spi, uint8_t *const rx_buffer)
DECL|rx_counter|variable|rx_counter
DECL|spi_async_transfer|variable|spi_async_transfer
DECL|spi_dma_callback|function|static void spi_dma_callback(void *callback_context, uint32_t len, int error_code)
DECL|spi_id|member|qm_spi_t spi_id; /**< SPI controller identifier. */
DECL|tmode|variable|tmode
DECL|tx_counter|variable|tx_counter
DECL|tx_dummy_frame|variable|tx_dummy_frame
DECL|wait_for_controller|function|static void wait_for_controller(const qm_spi_reg_t *const controller)
DECL|write_frame|function|static void write_frame(const qm_spi_t spi, const uint8_t *const tx_buffer)
