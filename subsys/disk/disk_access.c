DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|disk_access_get_di|function|struct disk_info *disk_access_get_di(const char *name)
DECL|disk_access_init|function|int disk_access_init(const char *pdrv)
DECL|disk_access_ioctl|function|int disk_access_ioctl(const char *pdrv, u8_t cmd, void *buf)
DECL|disk_access_list|variable|disk_access_list
DECL|disk_access_read|function|int disk_access_read(const char *pdrv, u8_t *data_buf, u32_t start_sector, u32_t num_sector)
DECL|disk_access_register|function|int disk_access_register(struct disk_info *disk)
DECL|disk_access_status|function|int disk_access_status(const char *pdrv)
DECL|disk_access_unregister|function|int disk_access_unregister(struct disk_info *disk)
DECL|disk_access_write|function|int disk_access_write(const char *pdrv, const u8_t *data_buf, u32_t start_sector, u32_t num_sector)
DECL|disk_init|function|static int disk_init(struct device *dev)
DECL|mutex|variable|mutex
