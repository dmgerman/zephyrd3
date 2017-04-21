DECL|spi_flash_api|variable|spi_flash_api
DECL|spi_flash_init|function|static int spi_flash_init(struct device *dev)
DECL|spi_flash_memory_data|variable|spi_flash_memory_data
DECL|spi_flash_wb_config|function|static int spi_flash_wb_config(struct device *dev)
DECL|spi_flash_wb_erase_internal|function|static inline int spi_flash_wb_erase_internal(struct device *dev, off_t offset, size_t size)
DECL|spi_flash_wb_erase|function|static int spi_flash_wb_erase(struct device *dev, off_t offset, size_t size)
DECL|spi_flash_wb_id|function|static inline int spi_flash_wb_id(struct device *dev)
DECL|spi_flash_wb_read|function|static int spi_flash_wb_read(struct device *dev, off_t offset, void *data, size_t len)
DECL|spi_flash_wb_reg_read|function|static int spi_flash_wb_reg_read(struct device *dev, u8_t *data)
DECL|spi_flash_wb_reg_write|function|static int spi_flash_wb_reg_write(struct device *dev, u8_t *data)
DECL|spi_flash_wb_write_protection_set|function|static int spi_flash_wb_write_protection_set(struct device *dev, bool enable)
DECL|spi_flash_wb_write|function|static int spi_flash_wb_write(struct device *dev, off_t offset, const void *data, size_t len)
DECL|wait_for_flash_idle|function|static inline void wait_for_flash_idle(struct device *dev)
