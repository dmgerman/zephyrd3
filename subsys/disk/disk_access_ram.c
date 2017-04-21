DECL|RAMDISK_SECTOR_SIZE|macro|RAMDISK_SECTOR_SIZE
DECL|RAMDISK_VOLUME_SIZE|macro|RAMDISK_VOLUME_SIZE
DECL|disk_access_init|function|int disk_access_init(void)
DECL|disk_access_ioctl|function|int disk_access_ioctl(u8_t cmd, void *buff)
DECL|disk_access_read|function|int disk_access_read(u8_t *buff, u32_t sector, u32_t count)
DECL|disk_access_status|function|int disk_access_status(void)
DECL|disk_access_write|function|int disk_access_write(const u8_t *buff, u32_t sector, u32_t count)
DECL|lba_to_address|function|static void *lba_to_address(u32_t lba)
DECL|ramdisk_buf|variable|ramdisk_buf
