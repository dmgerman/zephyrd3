DECL|STM32_FLASH_TIMEOUT|macro|STM32_FLASH_TIMEOUT
DECL|flash_data|variable|flash_data
DECL|flash_stm32_api|variable|flash_stm32_api
DECL|flash_stm32_check_status|function|static int flash_stm32_check_status(struct device *dev)
DECL|flash_stm32_erase|function|static int flash_stm32_erase(struct device *dev, off_t offset, size_t len)
DECL|flash_stm32_flush_caches|function|static void flash_stm32_flush_caches(struct device *dev)
DECL|flash_stm32_read|function|static int flash_stm32_read(struct device *dev, off_t offset, void *data, size_t len)
DECL|flash_stm32_sem_give|function|static inline void flash_stm32_sem_give(struct device *dev)
DECL|flash_stm32_sem_take|function|static inline void flash_stm32_sem_take(struct device *dev)
DECL|flash_stm32_wait_flash_idle|function|int flash_stm32_wait_flash_idle(struct device *dev)
DECL|flash_stm32_write_protection|function|static int flash_stm32_write_protection(struct device *dev, bool enable)
DECL|flash_stm32_write|function|static int flash_stm32_write(struct device *dev, off_t offset, const void *data, size_t len)
DECL|stm32_flash_init|function|static int stm32_flash_init(struct device *dev)
