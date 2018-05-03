DECL|FS_DIR_ENTRY_DIR|enumerator|FS_DIR_ENTRY_DIR
DECL|FS_DIR_ENTRY_FILE|enumerator|FS_DIR_ENTRY_FILE = 0,
DECL|FS_FATFS|enumerator|FS_FATFS = 0,
DECL|FS_NFFS|enumerator|FS_NFFS,
DECL|FS_SEEK_CUR|macro|FS_SEEK_CUR
DECL|FS_SEEK_END|macro|FS_SEEK_END
DECL|FS_SEEK_SET|macro|FS_SEEK_SET
DECL|FS_TYPE_END|enumerator|FS_TYPE_END,
DECL|_FS_H_|macro|_FS_H_
DECL|__off_t_defined|macro|__off_t_defined
DECL|__ssize_t_defined|macro|__ssize_t_defined
DECL|closedir|member|int (*closedir)(struct fs_dir_t *dirp);
DECL|close|member|int (*close)(struct fs_file_t *filp);
DECL|f_bfree|member|unsigned long f_bfree;
DECL|f_blocks|member|unsigned long f_blocks;
DECL|f_bsize|member|unsigned long f_bsize;
DECL|f_frsize|member|unsigned long f_frsize;
DECL|fs_data|member|void *fs_data;
DECL|fs_dir_entry_type|enum|enum fs_dir_entry_type {
DECL|fs_dirent|struct|struct fs_dirent {
DECL|fs_file_system_t|struct|struct fs_file_system_t {
DECL|fs_mount_t|struct|struct fs_mount_t {
DECL|fs_statvfs|struct|struct fs_statvfs {
DECL|fs_type|enum|enum fs_type {
DECL|fs|member|const struct fs_file_system_t *fs;
DECL|lseek|member|int (*lseek)(struct fs_file_t *filp, off_t off, int whence);
DECL|mkdir|member|int (*mkdir)(struct fs_mount_t *mountp, const char *name);
DECL|mnt_point|member|const char *mnt_point;
DECL|mountp_len|member|size_t mountp_len;
DECL|mount|member|int (*mount)(struct fs_mount_t *mountp);
DECL|name|member|char name[MAX_FILE_NAME + 1];
DECL|node|member|sys_dnode_t node;
DECL|off_t|typedef|typedef long int off_t;
DECL|off_t|typedef|typedef long long int off_t;
DECL|opendir|member|int (*opendir)(struct fs_dir_t *dirp, const char *fs_path);
DECL|open|member|int (*open)(struct fs_file_t *filp, const char *fs_path);
DECL|readdir|member|int (*readdir)(struct fs_dir_t *dirp, struct fs_dirent *entry);
DECL|read|member|ssize_t (*read)(struct fs_file_t *filp, void *dest, size_t nbytes);
DECL|rename|member|int (*rename)(struct fs_mount_t *mountp, const char *from,
DECL|size|member|size_t size;
DECL|ssize_t|typedef|typedef __SIZE_TYPE__ ssize_t;
DECL|statvfs|member|int (*statvfs)(struct fs_mount_t *mountp, const char *path,
DECL|stat|member|int (*stat)(struct fs_mount_t *mountp, const char *path,
DECL|storage_dev|member|void *storage_dev;
DECL|sync|member|int (*sync)(struct fs_file_t *filp);
DECL|tell|member|off_t (*tell)(struct fs_file_t *filp);
DECL|truncate|member|int (*truncate)(struct fs_file_t *filp, off_t length);
DECL|type|member|enum fs_dir_entry_type type;
DECL|type|member|enum fs_type type;
DECL|unlink|member|int (*unlink)(struct fs_mount_t *mountp, const char *name);
DECL|unmount|member|int (*unmount)(struct fs_mount_t *mountp);
DECL|write|member|ssize_t (*write)(struct fs_file_t *filp,
