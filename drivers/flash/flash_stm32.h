DECL|FLASH_STM32_PRIV|macro|FLASH_STM32_PRIV
DECL|FLASH_STM32_REGS|macro|FLASH_STM32_REGS
DECL|ZEPHYR_DRIVERS_FLASH_FLASH_STM32_H_|macro|ZEPHYR_DRIVERS_FLASH_FLASH_STM32_H_
DECL|flash_stm32_priv|struct|struct flash_stm32_priv {
DECL|flash_stm32_range_exists|function|static inline bool flash_stm32_range_exists(struct device *dev, off_t offset, u32_t len)
DECL|pclken|member|struct stm32_pclken pclken;
DECL|regs|member|struct stm32f0x_flash *regs;
DECL|sem|member|struct k_sem sem;
