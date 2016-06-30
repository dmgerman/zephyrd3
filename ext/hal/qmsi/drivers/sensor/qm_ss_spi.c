DECL|BYTES_PER_FRAME|macro|BYTES_PER_FRAME
DECL|FIFO_RX_W_MARK|macro|FIFO_RX_W_MARK
DECL|FIFO_SIZE|macro|FIFO_SIZE
DECL|FIFO_TX_W_MARK|macro|FIFO_TX_W_MARK
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_spi_0_err_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_spi_0_rx_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_spi_0_tx_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_spi_1_err_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_spi_1_rx_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_spi_1_tx_isr)
DECL|base|variable|base
DECL|dummy_frame|variable|dummy_frame
DECL|fifo_read|function|static __inline__ void fifo_read(const qm_ss_spi_t spi, void *data, uint8_t size)
DECL|fifo_write|function|static __inline__ void fifo_write(const qm_ss_spi_t spi, const void *data, uint8_t size)
DECL|handle_spi_err_interrupt|function|static void handle_spi_err_interrupt(const qm_ss_spi_t spi)
DECL|handle_spi_rx_interrupt|function|static void handle_spi_rx_interrupt(const qm_ss_spi_t spi)
DECL|handle_spi_tx_interrupt|function|static void handle_spi_tx_interrupt(const qm_ss_spi_t spi)
DECL|qm_ss_spi_get_status|function|int qm_ss_spi_get_status(const qm_ss_spi_t spi, qm_ss_spi_status_t *const status)
DECL|qm_ss_spi_irq_transfer|function|int qm_ss_spi_irq_transfer(const qm_ss_spi_t spi, const qm_ss_spi_async_transfer_t *const xfer)
DECL|qm_ss_spi_set_config|function|int qm_ss_spi_set_config(const qm_ss_spi_t spi, const qm_ss_spi_config_t *const cfg)
DECL|qm_ss_spi_slave_select|function|int qm_ss_spi_slave_select(const qm_ss_spi_t spi, const qm_ss_spi_slave_select_t ss)
DECL|qm_ss_spi_transfer_terminate|function|int qm_ss_spi_transfer_terminate(const qm_ss_spi_t spi)
DECL|qm_ss_spi_transfer|function|int qm_ss_spi_transfer(const qm_ss_spi_t spi, const qm_ss_spi_transfer_t *const xfer, qm_ss_spi_status_t *const status)
DECL|rx_c|variable|rx_c
DECL|spi_async_transfer|variable|spi_async_transfer
DECL|spi_disable|function|static void spi_disable(const qm_ss_spi_t spi)
DECL|tx_c|variable|tx_c
