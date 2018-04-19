DECL|NO_ATOMIC_64_SUPPORT|macro|NO_ATOMIC_64_SUPPORT
DECL|__METAL_IO__H__|macro|__METAL_IO__H__
DECL|block_read|member|int (*block_read)(struct metal_io_region *io,
DECL|block_set|member|void (*block_set)(struct metal_io_region *io,
DECL|block_write|member|int (*block_write)(struct metal_io_region *io,
DECL|close|member|void (*close)(struct metal_io_region *io);
DECL|mem_flags|member|unsigned int mem_flags; /**< memory attribute of the
DECL|metal_io_finish|function|static inline void metal_io_finish(struct metal_io_region *io)
DECL|metal_io_ops|struct|struct metal_io_ops {
DECL|metal_io_phys_to_offset|function|metal_io_phys_to_offset(struct metal_io_region *io, metal_phys_addr_t phys)
DECL|metal_io_phys_to_virt|function|metal_io_phys_to_virt(struct metal_io_region *io, metal_phys_addr_t phys)
DECL|metal_io_phys|function|metal_io_phys(struct metal_io_region *io, unsigned long offset)
DECL|metal_io_read16_explicit|macro|metal_io_read16_explicit
DECL|metal_io_read16|macro|metal_io_read16
DECL|metal_io_read32_explicit|macro|metal_io_read32_explicit
DECL|metal_io_read32|macro|metal_io_read32
DECL|metal_io_read64_explicit|macro|metal_io_read64_explicit
DECL|metal_io_read64|macro|metal_io_read64
DECL|metal_io_read8_explicit|macro|metal_io_read8_explicit
DECL|metal_io_read8|macro|metal_io_read8
DECL|metal_io_read|function|metal_io_read(struct metal_io_region *io, unsigned long offset, memory_order order, int width)
DECL|metal_io_region_size|function|static inline size_t metal_io_region_size(struct metal_io_region *io)
DECL|metal_io_region|struct|struct metal_io_region {
DECL|metal_io_virt_to_offset|function|metal_io_virt_to_offset(struct metal_io_region *io, void *virt)
DECL|metal_io_virt_to_phys|function|metal_io_virt_to_phys(struct metal_io_region *io, void *virt)
DECL|metal_io_virt|function|metal_io_virt(struct metal_io_region *io, unsigned long offset)
DECL|metal_io_write16_explicit|macro|metal_io_write16_explicit
DECL|metal_io_write16|macro|metal_io_write16
DECL|metal_io_write32_explicit|macro|metal_io_write32_explicit
DECL|metal_io_write32|macro|metal_io_write32
DECL|metal_io_write64_explicit|macro|metal_io_write64_explicit
DECL|metal_io_write64|macro|metal_io_write64
DECL|metal_io_write8_explicit|macro|metal_io_write8_explicit
DECL|metal_io_write8|macro|metal_io_write8
DECL|metal_io_write|function|metal_io_write(struct metal_io_region *io, unsigned long offset, uint64_t value, memory_order order, int width)
DECL|ops|member|struct metal_io_ops ops; /**< I/O region operations */
DECL|page_mask|member|metal_phys_addr_t page_mask; /**< page mask of I/O region */
DECL|page_shift|member|unsigned long page_shift; /**< page shift of I/O region */
DECL|physmap|member|const metal_phys_addr_t *physmap; /**< table of base physical address
DECL|read|member|uint64_t (*read)(struct metal_io_region *io,
DECL|size|member|size_t size; /**< size of the I/O region */
DECL|virt|member|void *virt; /**< base virtual address */
DECL|write|member|void (*write)(struct metal_io_region *io,
