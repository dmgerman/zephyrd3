DECL|GET_NUM_BLOCK|macro|GET_NUM_BLOCK
DECL|GET_SIZE_TO_BOUNDARY|macro|GET_SIZE_TO_BOUNDARY
DECL|SECTOR_SIZE|macro|SECTOR_SIZE
DECL|disk_flash_access_init|function|static int disk_flash_access_init(struct disk_info *disk)
DECL|disk_flash_access_ioctl|function|static int disk_flash_access_ioctl(struct disk_info *disk, u8_t cmd, void *buff)
DECL|disk_flash_access_read|function|static int disk_flash_access_read(struct disk_info *disk, u8_t *buff,u32_t start_sector, u32_t sector_count)
DECL|disk_flash_access_status|function|static int disk_flash_access_status(struct disk_info *disk)
DECL|disk_flash_access_write|function|static int disk_flash_access_write(struct disk_info *disk, const u8_t *buff, u32_t start_sector, u32_t sector_count)
DECL|disk_flash_init|function|static int disk_flash_init(struct device *dev)
DECL|flash_dev|variable|flash_dev
DECL|flash_disk_ops|variable|flash_disk_ops
DECL|flash_disk|variable|flash_disk
DECL|fs_buff|variable|fs_buff
DECL|lba_to_address|function|static off_t lba_to_address(u32_t sector_num)
DECL|read_copy_buf|variable|read_copy_buf
DECL|read_copy_flash_block|function|static int read_copy_flash_block(off_t start_addr, u32_t size, const void *src_buff, u8_t *dest_buff)
DECL|update_flash_block|function|static int update_flash_block(off_t start_addr, u32_t size, const void *buff)
