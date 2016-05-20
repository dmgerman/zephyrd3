DECL|qm_flash_mass_erase|function|int qm_flash_mass_erase(const qm_flash_t flash, const uint8_t include_rom)
DECL|qm_flash_page_erase|function|int qm_flash_page_erase(const qm_flash_t flash, const qm_flash_region_t region,uint32_t page_num)
DECL|qm_flash_page_update|function|int qm_flash_page_update(const qm_flash_t flash, const qm_flash_region_t region, uint32_t f_addr, uint32_t *const page_buffer, const uint32_t *const data_buffer, uint32_t len)
DECL|qm_flash_page_write|function|int qm_flash_page_write(const qm_flash_t flash, const qm_flash_region_t region,uint32_t page_num, const uint32_t *const data, uint32_t len)
DECL|qm_flash_set_config|function|int qm_flash_set_config(const qm_flash_t flash, const qm_flash_config_t *cfg)
DECL|qm_flash_word_write|function|int qm_flash_word_write(const qm_flash_t flash, const qm_flash_region_t region,uint32_t f_addr, const uint32_t data)
DECL|qm_flash|variable|qm_flash
DECL|qm_flash|variable|qm_flash
