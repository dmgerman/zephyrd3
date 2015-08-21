DECL|SPI_CB_READ|enumerator|SPI_CB_READ = 2,
DECL|SPI_CB_TRANSCEIVE|enumerator|SPI_CB_TRANSCEIVE = 3
DECL|SPI_CB_WRITE|enumerator|SPI_CB_WRITE = 1,
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
DECL|__SPI_H__|macro|__SPI_H__
DECL|callback|member|spi_callback callback;
DECL|configure|member|spi_api_configure configure;
DECL|config|member|uint32_t config;
DECL|max_sys_freq|member|uint32_t max_sys_freq;
DECL|resume|member|spi_api_control resume;
DECL|slave_select|member|spi_api_slave_select slave_select;
DECL|spi_api_configure|typedef|typedef int (*spi_api_configure)(struct device *dev, struct spi_config *config);
DECL|spi_api_control|typedef|typedef int (*spi_api_control)(struct device *dev);
DECL|spi_api_io|typedef|typedef int (*spi_api_io)(struct device *dev,
DECL|spi_api_slave_select|typedef|typedef int (*spi_api_slave_select)(struct device *dev, uint32_t slave);
DECL|spi_callback|typedef|typedef void (*spi_callback)(struct device *dev, enum spi_cb_type cb_type);
DECL|spi_cb_type|enum|enum spi_cb_type {
DECL|spi_configure|function|inline int spi_configure(struct device *dev, struct spi_config *config)
DECL|spi_config|struct|struct spi_config {
DECL|spi_driver_api|struct|struct spi_driver_api {
DECL|spi_read|function|inline int spi_read(struct device *dev, uint8_t *buf, uint32_t len)
DECL|spi_resume|function|inline int spi_resume(struct device *dev)
DECL|spi_slave_select|function|inline int spi_slave_select(struct device *dev, uint32_t slave)
DECL|spi_suspend|function|inline int spi_suspend(struct device *dev)
DECL|spi_transceive|function|inline int spi_transceive(struct device *dev, uint8_t *tx_buf, uint32_t tx_buf_len, uint8_t *rx_buf, uint32_t rx_buf_len)
DECL|spi_write|function|inline int spi_write(struct device *dev, uint8_t *buf, uint32_t len)
DECL|suspend|member|spi_api_control suspend;
DECL|transceive|member|spi_api_io transceive;
