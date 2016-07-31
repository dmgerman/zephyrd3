DECL|GET_NUM_BLOCK|macro|GET_NUM_BLOCK
DECL|GET_SIZE_TO_BOUNDARY|macro|GET_SIZE_TO_BOUNDARY
DECL|fat_disk_initialize|function|DSTATUS fat_disk_initialize(void)
DECL|fat_disk_ioctl|function|DRESULT fat_disk_ioctl(uint8_t cmd, void *buff)
DECL|fat_disk_read|function|DRESULT fat_disk_read(void *buff, uint32_t start_sector, uint32_t sector_count)
DECL|fat_disk_status|function|DSTATUS fat_disk_status(void)
DECL|fat_disk_write|function|DRESULT fat_disk_write(const void *buff, uint32_t start_sector, uint32_t sector_count)
DECL|flash_dev|variable|flash_dev
DECL|fs_buff|variable|fs_buff
DECL|lba_to_address|function|static off_t lba_to_address(uint32_t sector_num)
DECL|read_copy_buf|variable|read_copy_buf
DECL|read_copy_flash_block|function|static DRESULT read_copy_flash_block(off_t start_addr, uint32_t size, const void *src_buff, uint8_t *dest_buff)
DECL|update_flash_block|function|static DRESULT update_flash_block(off_t start_addr, uint32_t size, const void *buff)
