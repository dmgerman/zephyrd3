DECL|ALT_IRQ_NOT_CONNECTED|macro|ALT_IRQ_NOT_CONNECTED
DECL|__ALT_DEV_H__|macro|__ALT_DEV_H__
DECL|alt_dev_reg|function|static ALT_INLINE int alt_dev_reg (alt_dev* dev)
DECL|alt_dev_s|struct|struct alt_dev_s {
DECL|alt_dev|typedef|typedef struct alt_dev_s alt_dev;
DECL|alt_fd_s|struct|typedef struct alt_fd_s
DECL|alt_fd|typedef|} alt_fd;
DECL|close|member|int (*close) (alt_fd* fd);
DECL|dev|member|alt_dev* dev;
DECL|fd_flags|member|int fd_flags;
DECL|fstat|member|int (*fstat) (alt_fd* fd, struct stat* buf);
DECL|ioctl|member|int (*ioctl) (alt_fd* fd, int req, void* arg);
DECL|llist|member|alt_llist llist; /* for internal use */
DECL|lseek|member|int (*lseek) (alt_fd* fd, int ptr, int dir);
DECL|name|member|const char* name;
DECL|open|member|int (*open) (alt_fd* fd, const char* name, int flags, int mode);
DECL|priv|member|alt_u8* priv;
DECL|read|member|int (*read) (alt_fd* fd, char* ptr, int len);
DECL|write|member|int (*write) (alt_fd* fd, const char* ptr, int len);
