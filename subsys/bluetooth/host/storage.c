DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|STORAGE_FILE_NAME_LEN|macro|STORAGE_FILE_NAME_LEN
DECL|STORAGE_PATH_MAX|macro|STORAGE_PATH_MAX
DECL|STORAGE_PATH_MAX|macro|STORAGE_PATH_MAX
DECL|STORAGE_READ|enumerator|STORAGE_READ,
DECL|STORAGE_ROOT|macro|STORAGE_ROOT
DECL|STORAGE_WRITE|enumerator|STORAGE_WRITE
DECL|storage_access|enum|enum storage_access {
DECL|storage_clear|function|static int storage_clear(const bt_addr_le_t *addr)
DECL|storage_init|function|static int storage_init(struct device *unused)
DECL|storage_open|function|static int storage_open(const bt_addr_le_t *addr, u16_t key,enum storage_access access, struct fs_file_t *file)
DECL|storage_read|function|static ssize_t storage_read(const bt_addr_le_t *addr, u16_t key, void *data, size_t length)
DECL|storage_write|function|static ssize_t storage_write(const bt_addr_le_t *addr, u16_t key, const void *data, size_t length)
DECL|unlink_recursive|function|static int unlink_recursive(char path[STORAGE_PATH_MAX])
