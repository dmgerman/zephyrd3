DECL|nffs_file_alloc|function|nffs_file_alloc(void)
DECL|nffs_file_close|function|nffs_file_close(struct nffs_file *file)
DECL|nffs_file_free|function|nffs_file_free(struct nffs_file *file)
DECL|nffs_file_new|function|nffs_file_new(struct nffs_inode_entry *parent, const char *filename, uint8_t filename_len, int is_dir, struct nffs_inode_entry **out_inode_entry)
DECL|nffs_file_open|function|nffs_file_open(struct nffs_file **out_file, const char *path, uint8_t access_flags)
DECL|nffs_file_read|function|nffs_file_read(struct nffs_file *file, uint32_t len, void *out_data, uint32_t *out_len)
DECL|nffs_file_seek|function|nffs_file_seek(struct nffs_file *file, uint32_t offset)
