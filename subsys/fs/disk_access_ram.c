DECL|RAMDISK_SECTOR_SIZE|macro|RAMDISK_SECTOR_SIZE
DECL|RAMDISK_VOLUME_SIZE|macro|RAMDISK_VOLUME_SIZE
DECL|disk_access_init|function|int disk_access_init(void)
DECL|disk_access_ioctl|function|int disk_access_ioctl(uint8_t cmd, void *buff)
DECL|disk_access_read|function|int disk_access_read(uint8_t *buff, uint32_t sector, uint32_t count)
DECL|disk_access_status|function|int disk_access_status(void)
DECL|disk_access_write|function|int disk_access_write(const uint8_t *buff, uint32_t sector, uint32_t count)
DECL|lba_to_address|function|static void *lba_to_address(uint32_t lba)
DECL|ramdisk_buf|variable|ramdisk_buf
