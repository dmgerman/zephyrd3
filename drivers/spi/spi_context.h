DECL|SPI_CONTEXT_INIT_LOCK|macro|SPI_CONTEXT_INIT_LOCK
DECL|SPI_CONTEXT_INIT_SYNC|macro|SPI_CONTEXT_INIT_SYNC
DECL|SPI_CTX_RUNTIME_OP_MODE_MASTER|enumerator|SPI_CTX_RUNTIME_OP_MODE_MASTER = BIT(0),
DECL|SPI_CTX_RUNTIME_OP_MODE_SLAVE|enumerator|SPI_CTX_RUNTIME_OP_MODE_SLAVE = BIT(1),
DECL|ZEPHYR_DRIVERS_SPI_SPI_CONTEXT_H_|macro|ZEPHYR_DRIVERS_SPI_SPI_CONTEXT_H_
DECL|asynchronous|member|bool asynchronous;
DECL|config|member|const struct spi_config *config;
DECL|current_rx|member|const struct spi_buf *current_rx;
DECL|current_tx|member|const struct spi_buf *current_tx;
DECL|lock|member|struct k_sem lock;
DECL|recv_frames|member|int recv_frames;
DECL|rx_buf|member|u8_t *rx_buf;
DECL|rx_count|member|size_t rx_count;
DECL|rx_len|member|size_t rx_len;
DECL|signal|member|struct k_poll_signal *signal;
DECL|spi_context_buffers_setup|function|void spi_context_buffers_setup(struct spi_context *ctx, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, u8_t dfs)
DECL|spi_context_complete|function|static inline void spi_context_complete(struct spi_context *ctx, int status)
DECL|spi_context_configured|function|static inline bool spi_context_configured(struct spi_context *ctx, const struct spi_config *config)
DECL|spi_context_cs_active_value|function|static inline int spi_context_cs_active_value(struct spi_context *ctx)
DECL|spi_context_cs_configure|function|static inline void spi_context_cs_configure(struct spi_context *ctx)
DECL|spi_context_cs_control|function|static inline void spi_context_cs_control(struct spi_context *ctx, bool on)
DECL|spi_context_cs_inactive_value|function|static inline int spi_context_cs_inactive_value(struct spi_context *ctx)
DECL|spi_context_is_slave|function|static inline bool spi_context_is_slave(struct spi_context *ctx)
DECL|spi_context_lock|function|static inline void spi_context_lock(struct spi_context *ctx, bool asynchronous, struct k_poll_signal *signal)
DECL|spi_context_longest_current_buf|function|static inline size_t spi_context_longest_current_buf(struct spi_context *ctx)
DECL|spi_context_release|function|static inline void spi_context_release(struct spi_context *ctx, int status)
DECL|spi_context_rx_buf_on|function|bool spi_context_rx_buf_on(struct spi_context *ctx)
DECL|spi_context_rx_on|function|bool spi_context_rx_on(struct spi_context *ctx)
DECL|spi_context_tx_buf_on|function|bool spi_context_tx_buf_on(struct spi_context *ctx)
DECL|spi_context_tx_on|function|bool spi_context_tx_on(struct spi_context *ctx)
DECL|spi_context_unlock_unconditionally|function|static inline void spi_context_unlock_unconditionally(struct spi_context *ctx)
DECL|spi_context_update_rx|function|void spi_context_update_rx(struct spi_context *ctx, u8_t dfs, u32_t len)
DECL|spi_context_update_tx|function|void spi_context_update_tx(struct spi_context *ctx, u8_t dfs, u32_t len)
DECL|spi_context_wait_for_completion|function|static inline int spi_context_wait_for_completion(struct spi_context *ctx)
DECL|spi_context|struct|struct spi_context {
DECL|spi_ctx_runtime_op_mode|enum|enum spi_ctx_runtime_op_mode {
DECL|sync_status|member|int sync_status;
DECL|sync|member|struct k_sem sync;
DECL|tx_buf|member|const u8_t *tx_buf;
DECL|tx_count|member|size_t tx_count;
DECL|tx_len|member|size_t tx_len;
