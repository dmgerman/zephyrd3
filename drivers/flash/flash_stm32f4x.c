DECL|STM32F4X_SECTOR_MASK|macro|STM32F4X_SECTOR_MASK
DECL|erase_sector|function|static int erase_sector(struct device *dev, u32_t sector)
DECL|flash_stm32_block_erase_loop|function|int flash_stm32_block_erase_loop(struct device *dev, unsigned int offset, unsigned int len)
DECL|flash_stm32_page_layout|function|void flash_stm32_page_layout(struct device *dev, const struct flash_pages_layout **layout, size_t *layout_size)
DECL|flash_stm32_valid_range|function|bool flash_stm32_valid_range(struct device *dev, off_t offset, u32_t len, bool write)
DECL|flash_stm32_write_range|function|int flash_stm32_write_range(struct device *dev, unsigned int offset, const void *data, unsigned int len)
DECL|stm32f4_flash_layout|variable|stm32f4_flash_layout
DECL|stm32f4_flash_layout|variable|stm32f4_flash_layout
DECL|stm32f4_flash_layout|variable|stm32f4_flash_layout
DECL|stm32f4_flash_layout|variable|stm32f4_flash_layout
DECL|stm32f4_flash_layout|variable|stm32f4_flash_layout
DECL|stm32f4_flash_layout|variable|stm32f4_flash_layout
DECL|write_byte|function|static int write_byte(struct device *dev, off_t offset, u8_t val)
