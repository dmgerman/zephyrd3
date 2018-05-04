DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(spi_release, dev, config_p)
DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(spi_transceive, dev, config_p, tx_bufs, rx_bufs)
DECL|copy_and_check|function|static void copy_and_check(struct spi_buf_set *bufs, struct spi_buf *buf_copy, int writable, void *ssf)
DECL|copy_bufs_and_transceive|function|static u32_t copy_bufs_and_transceive(struct device *dev, const struct spi_config *config, struct spi_buf_set *tx_bufs, struct spi_buf_set *rx_bufs, void *ssf)
