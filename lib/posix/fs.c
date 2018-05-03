DECL|closedir|function|int closedir(DIR *dirp)
DECL|close|function|int close(int fd)
DECL|desc_array|variable|desc_array
DECL|desc|member|union file_desc desc;
DECL|dir|member|struct fs_dir_t dir;
DECL|fdirent|variable|fdirent
DECL|file_desc|union|union file_desc {
DECL|file|member|struct fs_file_t file;
DECL|is_dir|member|bool is_dir;
DECL|lseek|function|int lseek(int fd, int offset, int whence)
DECL|mkdir|function|int mkdir(const char *path, mode_t mode)
DECL|opendir|function|DIR *opendir(const char *dirname)
DECL|open|function|int open(const char *name, int flags)
DECL|pdirent|variable|pdirent
DECL|posix_fs_alloc_fd|function|static int posix_fs_alloc_fd(union file_desc **ptr, bool is_dir)
DECL|posix_fs_desc|struct|struct posix_fs_desc {
DECL|posix_fs_free_fd|function|static inline void posix_fs_free_fd(int fd)
DECL|posix_fs_free_ptr|function|static inline void posix_fs_free_ptr(struct posix_fs_desc *ptr)
DECL|posix_fs_get_ptr|function|static int posix_fs_get_ptr(int fd, union file_desc **ptr, bool is_dir)
DECL|readdir|function|struct dirent *readdir(DIR *dirp)
DECL|read|function|ssize_t read(int fd, char *buffer, unsigned int count)
DECL|rename|function|int rename(const char *old, const char *new)
DECL|stat|function|int stat(const char *path, struct stat *buf)
DECL|unlink|function|int unlink(const char *path)
DECL|used|member|bool used;
DECL|write|function|ssize_t write(int fd, char *buffer, unsigned int count)
