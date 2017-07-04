DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|flash_block_write|function|static int flash_block_write(struct flash_img_context *ctx, off_t offset, u8_t *data, size_t len, bool finished)
DECL|flash_img_buffered_write|function|int flash_img_buffered_write(struct flash_img_context *ctx, u8_t *data, size_t len, bool flush)
DECL|flash_img_bytes_written|function|size_t flash_img_bytes_written(struct flash_img_context *ctx)
DECL|flash_img_init|function|void flash_img_init(struct flash_img_context *ctx, struct device *dev)
DECL|flash_verify|function|static bool flash_verify(struct device *dev, off_t offset, u8_t *data, size_t len)
