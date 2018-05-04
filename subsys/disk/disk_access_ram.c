DECL|RAMDISK_SECTOR_SIZE|macro|RAMDISK_SECTOR_SIZE
DECL|RAMDISK_VOLUME_SIZE|macro|RAMDISK_VOLUME_SIZE
DECL|disk_ram_access_init|function|static int disk_ram_access_init(struct disk_info *disk)
DECL|disk_ram_access_ioctl|function|static int disk_ram_access_ioctl(struct disk_info *disk, u8_t cmd, void *buff)
DECL|disk_ram_access_read|function|static int disk_ram_access_read(struct disk_info *disk, u8_t *buff,u32_t sector, u32_t count)
DECL|disk_ram_access_status|function|static int disk_ram_access_status(struct disk_info *disk)
DECL|disk_ram_access_write|function|static int disk_ram_access_write(struct disk_info *disk, const u8_t *buff, u32_t sector, u32_t count)
DECL|disk_ram_init|function|static int disk_ram_init(struct device *dev)
DECL|lba_to_address|function|static void *lba_to_address(u32_t lba)
DECL|ram_disk_ops|variable|ram_disk_ops
DECL|ram_disk|variable|ram_disk
DECL|ramdisk_buf|variable|ramdisk_buf
