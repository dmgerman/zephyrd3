DECL|SPI_CONTEXT_INIT_LOCK|macro|SPI_CONTEXT_INIT_LOCK
DECL|__SPI_DRIVER_COMMON_H__|macro|__SPI_DRIVER_COMMON_H__
DECL|config|member|struct spi_config *config;
DECL|current_rx|member|struct spi_buf **current_rx;
DECL|current_tx|member|const struct spi_buf **current_tx;
DECL|lock|member|struct k_sem lock;
DECL|rx_buf|member|void *rx_buf;
DECL|rx_len|member|u32_t rx_len;
DECL|spi_context_buffers_setup|function|static inline void spi_context_buffers_setup(struct spi_context *ctx, const struct spi_buf **tx_bufs, struct spi_buf **rx_bufs, uint8_t dfs)
DECL|spi_context_configured|function|static inline bool spi_context_configured(struct spi_context *ctx, struct spi_config *config)
DECL|spi_context_cs_configure|function|static inline void spi_context_cs_configure(struct spi_context *ctx)
DECL|spi_context_cs_control|function|static inline void spi_context_cs_control(struct spi_context *ctx, bool on)
DECL|spi_context_lock|function|static inline void spi_context_lock(struct spi_context *ctx)
DECL|spi_context_release|function|static inline void spi_context_release(struct spi_context *ctx)
DECL|spi_context_rx_on|function|bool spi_context_rx_on(struct spi_context *ctx)
DECL|spi_context_tx_on|function|bool spi_context_tx_on(struct spi_context *ctx)
DECL|spi_context_update_rx|function|void spi_context_update_rx(struct spi_context *ctx, uint8_t dfs)
DECL|spi_context_update_tx|function|void spi_context_update_tx(struct spi_context *ctx, uint8_t dfs)
DECL|spi_context|struct|struct spi_context {
DECL|tx_buf|member|void *tx_buf;
DECL|tx_len|member|u32_t tx_len;
