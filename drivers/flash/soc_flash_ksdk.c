DECL|config|member|flash_config_t config;
DECL|flash_data|variable|flash_data
DECL|flash_ksdk_api|variable|flash_ksdk_api
DECL|flash_ksdk_erase|function|static int flash_ksdk_erase(struct device *dev, off_t offset, size_t len)
DECL|flash_ksdk_init|function|static int flash_ksdk_init(struct device *dev)
DECL|flash_ksdk_read|function|static int flash_ksdk_read(struct device *dev, off_t offset,void *data, size_t len)
DECL|flash_ksdk_write_protection|function|static int flash_ksdk_write_protection(struct device *dev, bool enable)
DECL|flash_ksdk_write|function|static int flash_ksdk_write(struct device *dev, off_t offset,const void *data, size_t len)
DECL|flash_priv|struct|struct flash_priv {
