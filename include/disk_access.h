DECL|DISK_IOCTL_CTRL_SYNC|macro|DISK_IOCTL_CTRL_SYNC
DECL|DISK_IOCTL_GET_ERASE_BLOCK_SZ|macro|DISK_IOCTL_GET_ERASE_BLOCK_SZ
DECL|DISK_IOCTL_GET_SECTOR_COUNT|macro|DISK_IOCTL_GET_SECTOR_COUNT
DECL|DISK_IOCTL_GET_SECTOR_SIZE|macro|DISK_IOCTL_GET_SECTOR_SIZE
DECL|DISK_STATUS_NOMEDIA|macro|DISK_STATUS_NOMEDIA
DECL|DISK_STATUS_OK|macro|DISK_STATUS_OK
DECL|DISK_STATUS_UNINIT|macro|DISK_STATUS_UNINIT
DECL|DISK_STATUS_WR_PROTECT|macro|DISK_STATUS_WR_PROTECT
DECL|ZEPHYR_INCLUDE_DISK_ACCESS_H_|macro|ZEPHYR_INCLUDE_DISK_ACCESS_H_
DECL|disk_info|struct|struct disk_info {
DECL|disk_operations|struct|struct disk_operations {
DECL|init|member|int (*init)(struct disk_info *disk);
DECL|ioctl|member|int (*ioctl)(struct disk_info *disk, u8_t cmd, void *buff);
DECL|name|member|char *name;
DECL|node|member|sys_dnode_t node;
DECL|ops|member|const struct disk_operations *ops;
DECL|read|member|int (*read)(struct disk_info *disk, u8_t *data_buf,
DECL|status|member|int (*status)(struct disk_info *disk);
DECL|write|member|int (*write)(struct disk_info *disk, const u8_t *data_buf,
