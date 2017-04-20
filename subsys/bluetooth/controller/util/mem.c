DECL|BLOCK_COUNT|macro|BLOCK_COUNT
DECL|BLOCK_SIZE|macro|BLOCK_SIZE
DECL|mem_acquire|function|void *mem_acquire(void **mem_head)
DECL|mem_free_count_get|function|u16_t mem_free_count_get(void *mem_head)
DECL|mem_get|function|void *mem_get(void *mem_pool, u16_t mem_size, u16_t index)
DECL|mem_index_get|function|u16_t mem_index_get(void *mem, void *mem_pool, u16_t mem_size)
DECL|mem_init|function|void mem_init(void *mem_pool, u16_t mem_size, u16_t mem_count, void **mem_head)
DECL|mem_is_zero|function|u8_t mem_is_zero(u8_t *src, u16_t len)
DECL|mem_rcopy|function|void mem_rcopy(u8_t *dst, u8_t const *src, u16_t len)
DECL|mem_release|function|void mem_release(void *mem, void **mem_head)
DECL|mem_ut|function|u32_t mem_ut(void)
