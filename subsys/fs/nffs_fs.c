DECL|NFFS_MAX_FILE_NAME|macro|NFFS_MAX_FILE_NAME
DECL|descs|variable|descs
DECL|flash_dev|variable|flash_dev
DECL|inode_to_dirent|function|static int inode_to_dirent(struct nffs_inode_entry *inode, struct fs_dirent *entry)
DECL|nffs_closedir|function|static int nffs_closedir(struct fs_dir_t *zdp)
DECL|nffs_close|function|static int nffs_close(struct fs_file_t *zfp)
DECL|nffs_fs|variable|nffs_fs
DECL|nffs_init|function|static int nffs_init(struct device *dev)
DECL|nffs_lock|variable|nffs_lock
DECL|nffs_mkdir|function|static int nffs_mkdir(struct fs_mount_t *mountp, const char *path)
DECL|nffs_mount|function|static int nffs_mount(struct fs_mount_t *mountp)
DECL|nffs_opendir|function|static int nffs_opendir(struct fs_dir_t *zdp, const char *path)
DECL|nffs_open|function|static int nffs_open(struct fs_file_t *zfp, const char *file_name)
DECL|nffs_os_crc16_ccitt|function|uint16_t nffs_os_crc16_ccitt(uint16_t initial_crc, const void *buf, int len,int final)
DECL|nffs_os_flash_erase|function|int nffs_os_flash_erase(uint8_t id, uint32_t address, uint32_t num_bytes)
DECL|nffs_os_flash_info|function|int nffs_os_flash_info(uint8_t id, uint32_t sector, uint32_t *address,uint32_t *size)
DECL|nffs_os_flash_read|function|int nffs_os_flash_read(uint8_t id, uint32_t address, void *dst,uint32_t num_bytes)
DECL|nffs_os_flash_write|function|int nffs_os_flash_write(uint8_t id, uint32_t address, const void *src,uint32_t num_bytes)
DECL|nffs_os_mempool_free|function|int nffs_os_mempool_free(nffs_os_mempool_t *pool, void *block)
DECL|nffs_os_mempool_get|function|void *nffs_os_mempool_get(nffs_os_mempool_t *pool)
DECL|nffs_os_mempool_init|function|int nffs_os_mempool_init(void)
DECL|nffs_readdir|function|static int nffs_readdir(struct fs_dir_t *zdp, struct fs_dirent *entry)
DECL|nffs_read|function|static ssize_t nffs_read(struct fs_file_t *zfp, void *ptr, size_t size)
DECL|nffs_rename|function|static int nffs_rename(struct fs_mount_t *mountp, const char *from, const char *to)
DECL|nffs_seek|function|static int nffs_seek(struct fs_file_t *zfp, off_t offset, int whence)
DECL|nffs_statvfs|function|static int nffs_statvfs(struct fs_mount_t *mountp,const char *path, struct fs_statvfs *stat)
DECL|nffs_stat|function|static int nffs_stat(struct fs_mount_t *mountp, const char *path, struct fs_dirent *entry)
DECL|nffs_sync|function|static int nffs_sync(struct fs_file_t *zfp)
DECL|nffs_tell|function|static off_t nffs_tell(struct fs_file_t *zfp)
DECL|nffs_truncate|function|static int nffs_truncate(struct fs_file_t *zfp, off_t length)
DECL|nffs_unlink|function|static int nffs_unlink(struct fs_mount_t *mountp, const char *path)
DECL|nffs_write|function|static ssize_t nffs_write(struct fs_file_t *zfp, const void *ptr, size_t size)
DECL|translate_error|function|static int translate_error(int error)
