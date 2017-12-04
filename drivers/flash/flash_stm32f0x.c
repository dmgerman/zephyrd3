DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|erase_page|function|static int erase_page(struct device *dev, unsigned int page)
DECL|flash_stm32_block_erase_loop|function|int flash_stm32_block_erase_loop(struct device *dev, unsigned int offset, unsigned int len)
DECL|flash_stm32_page_layout|function|void flash_stm32_page_layout(struct device *dev, const struct flash_pages_layout **layout, size_t *layout_size)
DECL|flash_stm32_valid_range|function|bool flash_stm32_valid_range(struct device *dev, off_t offset, u32_t len, bool write)
DECL|flash_stm32_write_range|function|int flash_stm32_write_range(struct device *dev, unsigned int offset, const void *data, unsigned int len)
DECL|get_page|function|static unsigned int get_page(off_t offset)
DECL|write_hword|function|static int write_hword(struct device *dev, off_t offset, u16_t val)
