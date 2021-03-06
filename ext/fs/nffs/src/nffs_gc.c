DECL|nffs_gc_block_chain_collate|function|nffs_gc_block_chain_collate(struct nffs_hash_entry *last_entry, uint32_t data_len, uint8_t to_area_idx, struct nffs_hash_entry **inout_next)
DECL|nffs_gc_block_chain_copy|function|nffs_gc_block_chain_copy(struct nffs_hash_entry *last_entry, uint32_t data_len, uint8_t to_area_idx)
DECL|nffs_gc_block_chain|function|nffs_gc_block_chain(struct nffs_hash_entry *last_entry, int multiple_blocks, uint32_t data_len, uint8_t to_area_idx, struct nffs_hash_entry **inout_next)
DECL|nffs_gc_copy_inode|function|nffs_gc_copy_inode(struct nffs_inode_entry *inode_entry, uint8_t to_area_idx)
DECL|nffs_gc_copy_object|function|nffs_gc_copy_object(struct nffs_hash_entry *entry, uint16_t object_size, uint8_t to_area_idx)
DECL|nffs_gc_count|variable|nffs_gc_count
DECL|nffs_gc_inode_blocks|function|nffs_gc_inode_blocks(struct nffs_inode_entry *inode_entry, uint8_t from_area_idx, uint8_t to_area_idx, struct nffs_hash_entry **inout_next)
DECL|nffs_gc_select_area|function|nffs_gc_select_area(void)
DECL|nffs_gc_until|function|nffs_gc_until(uint32_t space, uint8_t *out_area_idx)
DECL|nffs_gc|function|nffs_gc(uint8_t *out_area_idx)
