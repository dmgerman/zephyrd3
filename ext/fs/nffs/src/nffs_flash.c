DECL|nffs_flash_buf|variable|nffs_flash_buf
DECL|nffs_flash_copy|function|nffs_flash_copy(uint8_t area_idx_from, uint32_t area_offset_from, uint8_t area_idx_to, uint32_t area_offset_to, uint32_t len)
DECL|nffs_flash_loc_expand|function|nffs_flash_loc_expand(uint32_t flash_loc, uint8_t *out_area_idx, uint32_t *out_area_offset)
DECL|nffs_flash_loc|function|nffs_flash_loc(uint8_t area_idx, uint32_t area_offset)
DECL|nffs_flash_read|function|nffs_flash_read(uint8_t area_idx, uint32_t area_offset, void *data, uint32_t len)
DECL|nffs_flash_write|function|nffs_flash_write(uint8_t area_idx, uint32_t area_offset, const void *data, uint32_t len)
