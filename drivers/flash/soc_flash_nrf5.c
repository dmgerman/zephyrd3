DECL|flash_nrf5_api|variable|flash_nrf5_api
DECL|flash_nrf5_erase|function|static int flash_nrf5_erase(struct device *dev, off_t addr, size_t size)
DECL|flash_nrf5_read|function|static int flash_nrf5_read(struct device *dev, off_t addr, void *data, size_t len)
DECL|flash_nrf5_write_protection|function|static int flash_nrf5_write_protection(struct device *dev, bool enable)
DECL|flash_nrf5_write|function|static int flash_nrf5_write(struct device *dev, off_t addr, const void *data, size_t len)
DECL|is_addr_valid|function|static inline bool is_addr_valid(off_t addr, size_t len)
DECL|is_aligned_32|function|static inline bool is_aligned_32(uint32_t data)
DECL|nrf5_flash_init|function|static int nrf5_flash_init(struct device *dev)
DECL|nvmc_wait_ready|function|static void nvmc_wait_ready(void)
