DECL|SPI_CTRLR0_DFS_32_MASK|macro|SPI_CTRLR0_DFS_32_MASK
DECL|SPI_CTRLR0_DFS_32_OFFSET|macro|SPI_CTRLR0_DFS_32_OFFSET
DECL|SPI_CTRLR0_FRF_MASK|macro|SPI_CTRLR0_FRF_MASK
DECL|SPI_CTRLR0_FRF_OFFSET|macro|SPI_CTRLR0_FRF_OFFSET
DECL|SPI_CTRLR0_SCPOL_SCPH_MASK|macro|SPI_CTRLR0_SCPOL_SCPH_MASK
DECL|SPI_CTRLR0_SCPOL_SCPH_OFFSET|macro|SPI_CTRLR0_SCPOL_SCPH_OFFSET
DECL|SPI_CTRLR0_TMOD_MASK|macro|SPI_CTRLR0_TMOD_MASK
DECL|SPI_CTRLR0_TMOD_OFFSET|macro|SPI_CTRLR0_TMOD_OFFSET
DECL|SPI_DEFAULT_RX_THRESHOLD|macro|SPI_DEFAULT_RX_THRESHOLD
DECL|SPI_DEFAULT_TX_THRESHOLD|macro|SPI_DEFAULT_TX_THRESHOLD
DECL|SPI_FIFOS_DEPTH|macro|SPI_FIFOS_DEPTH
DECL|SPI_IMR_RXFIM|macro|SPI_IMR_RXFIM
DECL|SPI_IMR_RXOIM|macro|SPI_IMR_RXOIM
DECL|SPI_IMR_RXUIM|macro|SPI_IMR_RXUIM
DECL|SPI_IMR_TXEIM|macro|SPI_IMR_TXEIM
DECL|SPI_IMR_TXOIM|macro|SPI_IMR_TXOIM
DECL|SPI_ISR_RXFIS|macro|SPI_ISR_RXFIS
DECL|SPI_ISR_RXOIS|macro|SPI_ISR_RXOIS
DECL|SPI_ISR_RXUIS|macro|SPI_ISR_RXUIS
DECL|SPI_ISR_TXEIS|macro|SPI_ISR_TXEIS
DECL|SPI_ISR_TXOIS|macro|SPI_ISR_TXOIS
DECL|SPI_RISR_RXFIR|macro|SPI_RISR_RXFIR
DECL|SPI_RISR_RXOIR|macro|SPI_RISR_RXOIR
DECL|SPI_RISR_RXUIR|macro|SPI_RISR_RXUIR
DECL|SPI_RISR_TXEIR|macro|SPI_RISR_TXEIR
DECL|SPI_RISR_TXOIR|macro|SPI_RISR_TXOIR
DECL|SPI_SR_BUSY|macro|SPI_SR_BUSY
DECL|SPI_SR_TFE|macro|SPI_SR_TFE
DECL|SPI_SR_TFNF|macro|SPI_SR_TFNF
DECL|dfs|variable|dfs
DECL|handle_rx_interrupt|function|static __inline void handle_rx_interrupt(const qm_spi_t spi)
DECL|handle_spi_interrupt|function|static void handle_spi_interrupt(const qm_spi_t spi)
DECL|handle_tx_interrupt|function|static __inline void handle_tx_interrupt(const qm_spi_t spi)
DECL|qm_spi_controllers|variable|qm_spi_controllers
DECL|qm_spi_controllers|variable|qm_spi_controllers
DECL|qm_spi_get_config|function|qm_rc_t qm_spi_get_config(const qm_spi_t spi, qm_spi_config_t *const cfg)
DECL|qm_spi_get_status|function|qm_spi_status_t qm_spi_get_status(const qm_spi_t spi)
DECL|qm_spi_irq_transfer|function|qm_rc_t qm_spi_irq_transfer(const qm_spi_t spi, qm_spi_async_transfer_t *const xfer)
DECL|qm_spi_master_0_isr|function|void qm_spi_master_0_isr(void)
DECL|qm_spi_master_1_isr|function|void qm_spi_master_1_isr(void)
DECL|qm_spi_set_config|function|qm_rc_t qm_spi_set_config(const qm_spi_t spi, const qm_spi_config_t *cfg)
DECL|qm_spi_slave_select|function|qm_rc_t qm_spi_slave_select(const qm_spi_t spi, const qm_spi_slave_select_t ss)
DECL|qm_spi_transfer_terminate|function|qm_rc_t qm_spi_transfer_terminate(const qm_spi_t spi)
DECL|qm_spi_transfer|function|qm_rc_t qm_spi_transfer(const qm_spi_t spi, qm_spi_transfer_t *const xfer)
DECL|read_frame|function|static void read_frame(const qm_spi_t spi, uint8_t *const rx_buffer)
DECL|rx_counter|variable|rx_counter
DECL|spi_async_transfer|variable|spi_async_transfer
DECL|tmode|variable|tmode
DECL|tx_counter|variable|tx_counter
DECL|tx_dummy_frame|variable|tx_dummy_frame
DECL|wait_for_controller|function|static void wait_for_controller(const qm_spi_reg_t *const controller)
DECL|write_frame|function|static void write_frame(const qm_spi_t spi, uint8_t *const tx_buffer)
