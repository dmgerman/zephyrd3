DECL|SPI_MODE_CPHA|macro|SPI_MODE_CPHA
DECL|SPI_MODE_CPOL|macro|SPI_MODE_CPOL
DECL|SPI_MODE_LOOP|macro|SPI_MODE_LOOP
DECL|SPI_MODE_MASK|macro|SPI_MODE_MASK
DECL|SPI_MODE|macro|SPI_MODE
DECL|SPI_TRANSFER_LSB|macro|SPI_TRANSFER_LSB
DECL|SPI_TRANSFER_MASK|macro|SPI_TRANSFER_MASK
DECL|SPI_TRANSFER_MSB|macro|SPI_TRANSFER_MSB
DECL|SPI_WORD_SIZE_GET|macro|SPI_WORD_SIZE_GET
DECL|SPI_WORD_SIZE_MASK|macro|SPI_WORD_SIZE_MASK
DECL|SPI_WORD|macro|SPI_WORD
DECL|__SPI_H__|macro|__SPI_H__
DECL|configure|member|spi_api_configure configure;
DECL|config|member|u32_t config;
DECL|max_sys_freq|member|u32_t max_sys_freq;
DECL|slave_select|member|spi_api_slave_select slave_select;
DECL|spi_api_configure|typedef|typedef int (*spi_api_configure)(struct device *dev,
DECL|spi_api_io|typedef|typedef int (*spi_api_io)(struct device *dev,
DECL|spi_api_slave_select|typedef|typedef int (*spi_api_slave_select)(struct device *dev, u32_t slave);
DECL|spi_configure|function|static inline int spi_configure(struct device *dev,struct spi_config *config)
DECL|spi_config|struct|struct spi_config {
DECL|spi_driver_api|struct|struct spi_driver_api {
DECL|spi_read|function|static inline int spi_read(struct device *dev, void *buf, u32_t len)
DECL|spi_slave_select|function|static inline int spi_slave_select(struct device *dev, u32_t slave)
DECL|spi_transceive|function|static inline int spi_transceive(struct device *dev, const void *tx_buf, u32_t tx_buf_len, void *rx_buf, u32_t rx_buf_len)
DECL|spi_write|function|static inline int spi_write(struct device *dev, const void *buf, u32_t len)
DECL|transceive|member|spi_api_io transceive;
