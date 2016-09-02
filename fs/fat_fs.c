DECL|fat_fs|variable|fat_fs
DECL|fs_closedir|function|int fs_closedir(ZDIR *zdp)
DECL|fs_close|function|int fs_close(ZFILE *zfp)
DECL|fs_init|function|static int fs_init(struct device *dev)
DECL|fs_mkdir|function|int fs_mkdir(const char *path)
DECL|fs_opendir|function|int fs_opendir(ZDIR *zdp, const char *path)
DECL|fs_open|function|int fs_open(ZFILE *zfp, const char *file_name)
DECL|fs_readdir|function|int fs_readdir(ZDIR *zdp, struct zfs_dirent *entry)
DECL|fs_read|function|ssize_t fs_read(ZFILE *zfp, void *ptr, size_t size)
DECL|fs_seek|function|int fs_seek(ZFILE *zfp, off_t offset, int whence)
DECL|fs_statvfs|function|int fs_statvfs(struct zfs_statvfs *stat)
DECL|fs_stat|function|int fs_stat(const char *path, struct zfs_dirent *entry)
DECL|fs_truncate|function|int fs_truncate(ZFILE *zfp, off_t length)
DECL|fs_unlink|function|int fs_unlink(const char *path)
DECL|fs_write|function|ssize_t fs_write(ZFILE *zfp, const void *ptr, size_t size)
DECL|translate_error|function|static int translate_error(int error)
