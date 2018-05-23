DECL|metal_io_block_read|function|int metal_io_block_read(struct metal_io_region *io, unsigned long offset, void *restrict dst, int len)
DECL|metal_io_block_set|function|int metal_io_block_set(struct metal_io_region *io, unsigned long offset, unsigned char value, int len)
DECL|metal_io_block_write|function|int metal_io_block_write(struct metal_io_region *io, unsigned long offset, const void *restrict src, int len)
DECL|metal_io_init|function|void metal_io_init(struct metal_io_region *io, void *virt, const metal_phys_addr_t *physmap, size_t size, unsigned page_shift, unsigned int mem_flags, const struct metal_io_ops *ops)
