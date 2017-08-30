DECL|DRIVERS_FLASH_STM32_H|macro|DRIVERS_FLASH_STM32_H
DECL|FLASH_STM32_PRIV|macro|FLASH_STM32_PRIV
DECL|FLASH_STM32_REGS|macro|FLASH_STM32_REGS
DECL|flash_stm32_priv|struct|struct flash_stm32_priv {
DECL|flash_stm32_range_exists|function|static inline bool flash_stm32_range_exists(struct device *dev, off_t offset, u32_t len)
DECL|regs|member|struct stm32f4x_flash *regs;
DECL|sem|member|struct k_sem sem;
