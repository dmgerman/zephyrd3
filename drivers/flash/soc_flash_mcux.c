DECL|config|member|flash_config_t config;
DECL|flash_data|variable|flash_data
DECL|flash_mcux_api|variable|flash_mcux_api
DECL|flash_mcux_erase|function|static int flash_mcux_erase(struct device *dev, off_t offset, size_t len)
DECL|flash_mcux_init|function|static int flash_mcux_init(struct device *dev)
DECL|flash_mcux_read|function|static int flash_mcux_read(struct device *dev, off_t offset,void *data, size_t len)
DECL|flash_mcux_write_protection|function|static int flash_mcux_write_protection(struct device *dev, bool enable)
DECL|flash_mcux_write|function|static int flash_mcux_write(struct device *dev, off_t offset,const void *data, size_t len)
DECL|flash_priv|struct|struct flash_priv {
