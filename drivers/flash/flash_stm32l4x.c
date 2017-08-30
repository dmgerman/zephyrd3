DECL|STM32L4X_BANK_SIZE_MAX|macro|STM32L4X_BANK_SIZE_MAX
DECL|STM32L4X_FLASH_END|macro|STM32L4X_FLASH_END
DECL|STM32L4X_PAGE_SHIFT|macro|STM32L4X_PAGE_SHIFT
DECL|erase_page|function|static int erase_page(struct device *dev, unsigned int page)
DECL|flash_stm32_block_erase_loop|function|int flash_stm32_block_erase_loop(struct device *dev, unsigned int offset, unsigned int len)
DECL|flash_stm32_valid_range|function|bool flash_stm32_valid_range(struct device *dev, off_t offset, u32_t len, bool write)
DECL|flash_stm32_write_range|function|int flash_stm32_write_range(struct device *dev, unsigned int offset, const void *data, unsigned int len)
DECL|get_page|function|static unsigned int get_page(off_t offset)
DECL|write_dword|function|static int write_dword(struct device *dev, off_t offset, u64_t val)
