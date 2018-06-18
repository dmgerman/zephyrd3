DECL|SYNC_INIT|macro|SYNC_INIT
DECL|SYNC_INIT|macro|SYNC_INIT
DECL|SYNC_LOCK|macro|SYNC_LOCK
DECL|SYNC_LOCK|macro|SYNC_LOCK
DECL|SYNC_UNLOCK|macro|SYNC_UNLOCK
DECL|SYNC_UNLOCK|macro|SYNC_UNLOCK
DECL|spi_flash_api|variable|spi_flash_api
DECL|spi_flash_init|function|static int spi_flash_init(struct device *dev)
DECL|spi_flash_memory_data|variable|spi_flash_memory_data
DECL|spi_flash_wb_access|function|static int spi_flash_wb_access(struct spi_flash_data *ctx, u8_t cmd, bool addressed, off_t offset, void *data, size_t length, bool write)
DECL|spi_flash_wb_configure|function|static int spi_flash_wb_configure(struct device *dev)
DECL|spi_flash_wb_erase_internal|function|static inline int spi_flash_wb_erase_internal(struct device *dev, off_t offset, size_t size)
DECL|spi_flash_wb_erase|function|static int spi_flash_wb_erase(struct device *dev, off_t offset, size_t size)
DECL|spi_flash_wb_id|function|static inline int spi_flash_wb_id(struct device *dev)
DECL|spi_flash_wb_read|function|static int spi_flash_wb_read(struct device *dev, off_t offset, void *data, size_t len)
DECL|spi_flash_wb_reg_read|function|static u8_t spi_flash_wb_reg_read(struct device *dev, u8_t reg)
DECL|spi_flash_wb_reg_write|function|static int spi_flash_wb_reg_write(struct device *dev, u8_t reg)
DECL|spi_flash_wb_write_protection_set|function|static int spi_flash_wb_write_protection_set(struct device *dev, bool enable)
DECL|spi_flash_wb_write|function|static int spi_flash_wb_write(struct device *dev, off_t offset, const void *data, size_t len)
DECL|wait_for_flash_idle|function|static inline void wait_for_flash_idle(struct device *dev)
