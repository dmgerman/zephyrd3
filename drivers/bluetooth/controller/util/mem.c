DECL|BLOCK_COUNT|macro|BLOCK_COUNT
DECL|BLOCK_SIZE|macro|BLOCK_SIZE
DECL|mem_acquire|function|void *mem_acquire(void **mem_head)
DECL|mem_free_count_get|function|uint16_t mem_free_count_get(void *mem_head)
DECL|mem_get|function|void *mem_get(void *mem_pool, uint16_t mem_size, uint16_t index)
DECL|mem_index_get|function|uint16_t mem_index_get(void *mem, void *mem_pool, uint16_t mem_size)
DECL|mem_init|function|void mem_init(void *mem_pool, uint16_t mem_size, uint16_t mem_count, void **mem_head)
DECL|mem_is_zero|function|uint8_t mem_is_zero(uint8_t *src, uint16_t len)
DECL|mem_rcopy|function|void mem_rcopy(uint8_t *dst, uint8_t const *src, uint16_t len)
DECL|mem_release|function|void mem_release(void *mem, void **mem_head)
DECL|mem_ut|function|uint32_t mem_ut(void)
