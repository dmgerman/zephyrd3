DECL|check_status|function|static int check_status(struct stm32f4x_flash *regs)
DECL|erase_sector|function|static int erase_sector(u16_t sector, struct stm32f4x_flash *regs)
DECL|flash_data|variable|flash_data
DECL|flash_priv|struct|struct flash_priv {
DECL|flash_stm32f4x_api|variable|flash_stm32f4x_api
DECL|flash_stm32f4x_erase|function|static int flash_stm32f4x_erase(struct device *dev, off_t offset, size_t len)
DECL|flash_stm32f4x_read|function|static int flash_stm32f4x_read(struct device *dev, off_t offset, void *data,size_t len)
DECL|flash_stm32f4x_write_protection|function|static int flash_stm32f4x_write_protection(struct device *dev, bool enable)
DECL|flash_stm32f4x_write|function|static int flash_stm32f4x_write(struct device *dev, off_t offset,const void *data, size_t len)
DECL|flush_caches|function|static void flush_caches(struct stm32f4x_flash *regs)
DECL|regs|member|struct stm32f4x_flash *regs;
DECL|sem|member|struct k_sem sem;
DECL|stm32f4x_flash_init|function|static int stm32f4x_flash_init(struct device *dev)
DECL|valid_range|function|static bool valid_range(off_t offset, u32_t len)
DECL|wait_flash_idle|function|static int wait_flash_idle(struct stm32f4x_flash *regs)
DECL|write_byte|function|static int write_byte(off_t offset, u8_t val, struct stm32f4x_flash *regs)
