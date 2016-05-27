DECL|FLASH_CONTEXT|macro|FLASH_CONTEXT
DECL|FLASH_CONTEXT|macro|FLASH_CONTEXT
DECL|flash_critical_region_end|function|static void flash_critical_region_end(struct device *dev)
DECL|flash_critical_region_start|function|static void flash_critical_region_start(struct device *dev)
DECL|flash_qmsi_api|variable|flash_qmsi_api
DECL|flash_qmsi_erase|function|static int flash_qmsi_erase(struct device *dev, off_t addr, size_t size)
DECL|flash_qmsi_read|function|static int flash_qmsi_read(struct device *dev, off_t addr, void *data, size_t len)
DECL|flash_qmsi_write_protection|function|static int flash_qmsi_write_protection(struct device *dev, bool enable)
DECL|flash_qmsi_write|function|static int flash_qmsi_write(struct device *dev, off_t addr, const void *data, size_t len)
DECL|flash_reentrancy_init|function|static void flash_reentrancy_init(struct device *dev)
DECL|flash_region|function|static qm_flash_region_t flash_region(uint32_t addr)
DECL|get_page_num|function|static uint32_t get_page_num(uint32_t addr)
DECL|is_aligned_32|function|static inline bool is_aligned_32(uint32_t data)
DECL|quark_flash_init|function|static int quark_flash_init(struct device *dev)
DECL|reentrancy_protection|variable|reentrancy_protection
DECL|reentrancy_protection|variable|reentrancy_protection
DECL|sem|member|struct nano_sem sem;
DECL|soc_flash_context|variable|soc_flash_context
DECL|soc_flash_data|struct|struct soc_flash_data {
