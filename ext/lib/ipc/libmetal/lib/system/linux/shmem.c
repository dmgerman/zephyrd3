DECL|io|member|struct metal_io_region io;
DECL|metal_shmem_io_close|function|static void metal_shmem_io_close(struct metal_io_region *io)
DECL|metal_shmem_io_ops|variable|metal_shmem_io_ops
DECL|metal_shmem_open|function|int metal_shmem_open(const char *name, size_t size, struct metal_io_region **result)
DECL|metal_shmem_try_map|function|static int metal_shmem_try_map(struct metal_page_size *ps, int fd, size_t size, struct metal_io_region **result)
DECL|metal_shmem|struct|struct metal_shmem {
DECL|phys|member|metal_phys_addr_t *phys;
