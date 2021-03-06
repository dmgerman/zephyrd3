DECL|nffs_cache_block_acquire|function|nffs_cache_block_acquire(void)
DECL|nffs_cache_block_alloc|function|nffs_cache_block_alloc(void)
DECL|nffs_cache_block_free|function|nffs_cache_block_free(struct nffs_cache_block *entry)
DECL|nffs_cache_block_populate|function|nffs_cache_block_populate(struct nffs_cache_block *cache_block, struct nffs_hash_entry *block_entry, uint32_t end_offset)
DECL|nffs_cache_clear|function|nffs_cache_clear(void)
DECL|nffs_cache_inode_acquire|function|nffs_cache_inode_acquire(void)
DECL|nffs_cache_inode_alloc|function|nffs_cache_inode_alloc(void)
DECL|nffs_cache_inode_delete|function|nffs_cache_inode_delete(const struct nffs_inode_entry *inode_entry)
DECL|nffs_cache_inode_ensure|function|nffs_cache_inode_ensure(struct nffs_cache_inode **out_cache_inode, struct nffs_inode_entry *inode_entry)
DECL|nffs_cache_inode_find|function|nffs_cache_inode_find(const struct nffs_inode_entry *inode_entry)
DECL|nffs_cache_inode_free_blocks|function|nffs_cache_inode_free_blocks(struct nffs_cache_inode *cache_inode)
DECL|nffs_cache_inode_free|function|nffs_cache_inode_free(struct nffs_cache_inode *entry)
DECL|nffs_cache_inode_last_entry|function|nffs_cache_inode_last_entry(struct nffs_cache_inode *cache_inode)
DECL|nffs_cache_inode_list|variable|nffs_cache_inode_list
DECL|nffs_cache_inode_populate|function|nffs_cache_inode_populate(struct nffs_cache_inode *cache_inode, struct nffs_inode_entry *inode_entry)
DECL|nffs_cache_inode_range|function|nffs_cache_inode_range(const struct nffs_cache_inode *cache_inode, uint32_t *out_start, uint32_t *out_end)
DECL|nffs_cache_inode_refresh|function|nffs_cache_inode_refresh(void)
DECL|nffs_cache_insert_block|function|nffs_cache_insert_block(struct nffs_cache_inode *cache_inode, struct nffs_cache_block *cache_block, int tail)
DECL|nffs_cache_log_block|function|nffs_cache_log_block(struct nffs_cache_inode *cache_inode, struct nffs_cache_block *cache_block)
DECL|nffs_cache_log_insert_block|function|nffs_cache_log_insert_block(struct nffs_cache_inode *cache_inode, struct nffs_cache_block *cache_block, int tail)
DECL|nffs_cache_reclaim_blocks|function|nffs_cache_reclaim_blocks(void)
DECL|nffs_cache_seek|function|nffs_cache_seek(struct nffs_cache_inode *cache_inode, uint32_t seek_offset, struct nffs_cache_block **out_cache_block)
