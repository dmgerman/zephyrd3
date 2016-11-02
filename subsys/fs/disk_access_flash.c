DECL|GET_NUM_BLOCK|macro|GET_NUM_BLOCK
DECL|GET_SIZE_TO_BOUNDARY|macro|GET_SIZE_TO_BOUNDARY
DECL|SECTOR_SIZE|macro|SECTOR_SIZE
DECL|disk_access_init|function|int disk_access_init(void)
DECL|disk_access_ioctl|function|int disk_access_ioctl(uint8_t cmd, void *buff)
DECL|disk_access_read|function|int disk_access_read(uint8_t *buff, uint32_t start_sector, uint32_t sector_count)
DECL|disk_access_status|function|int disk_access_status(void)
DECL|disk_access_write|function|int disk_access_write(const uint8_t *buff, uint32_t start_sector, uint32_t sector_count)
DECL|flash_dev|variable|flash_dev
DECL|fs_buff|variable|fs_buff
DECL|lba_to_address|function|static off_t lba_to_address(uint32_t sector_num)
DECL|read_copy_buf|variable|read_copy_buf
DECL|read_copy_flash_block|function|static int read_copy_flash_block(off_t start_addr, uint32_t size, const void *src_buff, uint8_t *dest_buff)
DECL|update_flash_block|function|static int update_flash_block(off_t start_addr, uint32_t size, const void *buff)
