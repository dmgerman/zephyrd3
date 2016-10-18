DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_uart_0_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_uart_1_isr)
DECL|context|member|void *context; /**< Pointer to dma_context_t struct. */
DECL|dma_callback_par_t|typedef|} dma_callback_par_t;
DECL|dma_channel_id|member|qm_dma_channel_id_t dma_channel_id; /**< DMA channel. */
DECL|dma_context_rx|variable|dma_context_rx
DECL|dma_context_tx|variable|dma_context_tx
DECL|dma_context_t|typedef|} dma_context_t;
DECL|dma_core|variable|dma_core
DECL|dma_delayed_callback_par|variable|dma_delayed_callback_par
DECL|error_code|member|int error_code; /**< Error code of failed transfer. */
DECL|is_read_xfer_complete|function|static bool is_read_xfer_complete(const qm_uart_t uart)
DECL|is_write_xfer_complete|function|static bool is_write_xfer_complete(const qm_uart_t uart)
DECL|len|member|uint32_t len; /**< Amount of data successfully transferred. */
DECL|qm_uart_dma_channel_config|function|int qm_uart_dma_channel_config( const qm_uart_t uart, const qm_dma_t dma_ctrl_id, const qm_dma_channel_id_t dma_channel_id, const qm_dma_channel_direction_t dma_channel_direction)
DECL|qm_uart_dma_read_terminate|function|int qm_uart_dma_read_terminate(const qm_uart_t uart)
DECL|qm_uart_dma_read|function|int qm_uart_dma_read(const qm_uart_t uart, const qm_uart_transfer_t *const xfer)
DECL|qm_uart_dma_write_terminate|function|int qm_uart_dma_write_terminate(const qm_uart_t uart)
DECL|qm_uart_dma_write|function|int qm_uart_dma_write(const qm_uart_t uart, const qm_uart_transfer_t *const xfer)
DECL|qm_uart_get_status|function|int qm_uart_get_status(const qm_uart_t uart, qm_uart_status_t *const status)
DECL|qm_uart_irq_read_terminate|function|int qm_uart_irq_read_terminate(const qm_uart_t uart)
DECL|qm_uart_irq_read|function|int qm_uart_irq_read(const qm_uart_t uart, const qm_uart_transfer_t *const xfer)
DECL|qm_uart_irq_write_terminate|function|int qm_uart_irq_write_terminate(const qm_uart_t uart)
DECL|qm_uart_irq_write|function|int qm_uart_irq_write(const qm_uart_t uart, const qm_uart_transfer_t *const xfer)
DECL|qm_uart_isr_handler|function|static void qm_uart_isr_handler(const qm_uart_t uart)
DECL|qm_uart_read_non_block|function|int qm_uart_read_non_block(const qm_uart_t uart, uint8_t *const data)
DECL|qm_uart_read|function|int qm_uart_read(const qm_uart_t uart, uint8_t *const data, qm_uart_status_t *status)
DECL|qm_uart_restore_context|function|int qm_uart_restore_context(const qm_uart_t uart, const qm_uart_context_t *const ctx)
DECL|qm_uart_save_context|function|int qm_uart_save_context(const qm_uart_t uart, qm_uart_context_t *const ctx)
DECL|qm_uart_set_config|function|int qm_uart_set_config(const qm_uart_t uart, const qm_uart_config_t *cfg)
DECL|qm_uart_write_buffer|function|int qm_uart_write_buffer(const qm_uart_t uart, const uint8_t *const data, uint32_t len)
DECL|qm_uart_write_non_block|function|int qm_uart_write_non_block(const qm_uart_t uart, const uint8_t data)
DECL|qm_uart_write|function|int qm_uart_write(const qm_uart_t uart, const uint8_t data)
DECL|qm_uart|variable|qm_uart
DECL|read_pos|variable|read_pos
DECL|uart_client_callback_t|typedef|typedef void (*uart_client_callback_t)(void *data, int error,
DECL|uart_client_callback|function|static void uart_client_callback(qm_uart_t uart, void *data, int error, uint32_t len)
DECL|uart_dma_callback|function|static void uart_dma_callback(void *callback_context, uint32_t len, int error_code)
DECL|uart_read_transfer|variable|uart_read_transfer
DECL|uart_write_transfer|variable|uart_write_transfer
DECL|write_pos|variable|write_pos
DECL|xfer|member|const qm_uart_transfer_t *xfer; /**< User transfer structure. */
