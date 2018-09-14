DECL|SPI_CS_ACTIVE_HIGH|macro|SPI_CS_ACTIVE_HIGH
DECL|SPI_HOLD_ON_CS|macro|SPI_HOLD_ON_CS
DECL|SPI_LINES_DUAL|macro|SPI_LINES_DUAL
DECL|SPI_LINES_MASK|macro|SPI_LINES_MASK
DECL|SPI_LINES_OCTAL|macro|SPI_LINES_OCTAL
DECL|SPI_LINES_QUAD|macro|SPI_LINES_QUAD
DECL|SPI_LINES_SINGLE|macro|SPI_LINES_SINGLE
DECL|SPI_LOCK_ON|macro|SPI_LOCK_ON
DECL|SPI_MODE_CPHA|macro|SPI_MODE_CPHA
DECL|SPI_MODE_CPOL|macro|SPI_MODE_CPOL
DECL|SPI_MODE_GET|macro|SPI_MODE_GET
DECL|SPI_MODE_LOOP|macro|SPI_MODE_LOOP
DECL|SPI_MODE_MASK|macro|SPI_MODE_MASK
DECL|SPI_OP_MODE_GET|macro|SPI_OP_MODE_GET
DECL|SPI_OP_MODE_MASK|macro|SPI_OP_MODE_MASK
DECL|SPI_OP_MODE_MASTER|macro|SPI_OP_MODE_MASTER
DECL|SPI_OP_MODE_SLAVE|macro|SPI_OP_MODE_SLAVE
DECL|SPI_TRANSFER_LSB|macro|SPI_TRANSFER_LSB
DECL|SPI_TRANSFER_MSB|macro|SPI_TRANSFER_MSB
DECL|SPI_WORD_SET|macro|SPI_WORD_SET
DECL|SPI_WORD_SIZE_GET|macro|SPI_WORD_SIZE_GET
DECL|SPI_WORD_SIZE_MASK|macro|SPI_WORD_SIZE_MASK
DECL|SPI_WORD_SIZE_SHIFT|macro|SPI_WORD_SIZE_SHIFT
DECL|ZEPHYR_INCLUDE_SPI_H_|macro|ZEPHYR_INCLUDE_SPI_H_
DECL|_impl_spi_release|function|static inline int _impl_spi_release(struct device *dev, const struct spi_config *config)
DECL|_impl_spi_transceive|function|static inline int _impl_spi_transceive(struct device *dev, const struct spi_config *config, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs)
DECL|buffers|member|const struct spi_buf *buffers;
DECL|buf|member|void *buf;
DECL|count|member|size_t count;
DECL|cs|member|const struct spi_cs_control *cs;
DECL|delay|member|u32_t delay;
DECL|frequency|member|u32_t frequency;
DECL|gpio_dev|member|struct device *gpio_dev;
DECL|gpio_pin|member|u32_t gpio_pin;
DECL|len|member|size_t len;
DECL|operation|member|u16_t operation;
DECL|release|member|spi_api_release release;
DECL|slave|member|u16_t slave;
DECL|spi_api_io_async|typedef|typedef int (*spi_api_io_async)(struct device *dev,
DECL|spi_api_io|typedef|typedef int (*spi_api_io)(struct device *dev,
DECL|spi_api_release|typedef|typedef int (*spi_api_release)(struct device *dev,
DECL|spi_buf_set|struct|struct spi_buf_set {
DECL|spi_buf|struct|struct spi_buf {
DECL|spi_config|struct|struct spi_config {
DECL|spi_cs_control|struct|struct spi_cs_control {
DECL|spi_driver_api|struct|struct spi_driver_api {
DECL|spi_read_async|function|static inline int spi_read_async(struct device *dev, const struct spi_config *config, const struct spi_buf_set *rx_bufs, struct k_poll_signal *async)
DECL|spi_read|function|static inline int spi_read(struct device *dev, const struct spi_config *config, const struct spi_buf_set *rx_bufs)
DECL|spi_transceive_async|function|static inline int spi_transceive_async(struct device *dev, const struct spi_config *config, const struct spi_buf_set *tx_bufs, const struct spi_buf_set *rx_bufs, struct k_poll_signal *async)
DECL|spi_write_async|function|static inline int spi_write_async(struct device *dev, const struct spi_config *config, const struct spi_buf_set *tx_bufs, struct k_poll_signal *async)
DECL|spi_write|function|static inline int spi_write(struct device *dev, const struct spi_config *config, const struct spi_buf_set *tx_bufs)
DECL|transceive_async|member|spi_api_io_async transceive_async;
DECL|transceive|member|spi_api_io transceive;
