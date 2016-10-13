DECL|_HEAP_MEM_POOL|macro|_HEAP_MEM_POOL
DECL|_HEAP_MEM_POOL|macro|_HEAP_MEM_POOL
DECL|_QUAD_BLOCK_ALLOCATED|macro|_QUAD_BLOCK_ALLOCATED
DECL|_QUAD_BLOCK_AVAILABLE|macro|_QUAD_BLOCK_AVAILABLE
DECL|block_waiters_check|function|static void block_waiters_check(struct k_mem_pool *pool)
DECL|compute_block_set_index|function|static int compute_block_set_index(struct k_mem_pool *pool, int data_size)
DECL|defrag|function|static void defrag(struct k_mem_pool *pool, int start_block_set_index, int last_block_set_index)
DECL|free_existing_block|function|static void free_existing_block(char *ptr, struct k_mem_pool *pool, int index)
DECL|get_block_recursive|function|static char *get_block_recursive(struct k_mem_pool *pool, int index, int start_index)
DECL|get_existing_block|function|static char *get_existing_block(struct k_mem_pool_block_set *block_set,int *unused_block_index)
DECL|init_one_memory_pool|function|static void init_one_memory_pool(struct k_mem_pool *pool)
DECL|init_static_pools|function|static int init_static_pools(struct device *unused)
DECL|k_free|function|void k_free(void *ptr)
DECL|k_malloc|function|void *k_malloc(size_t size)
DECL|k_mem_pool_alloc|function|int k_mem_pool_alloc(struct k_mem_pool *pool, struct k_mem_block *block, size_t size, int32_t timeout)
DECL|k_mem_pool_defrag|function|void k_mem_pool_defrag(struct k_mem_pool *pool)
DECL|k_mem_pool_free|function|void k_mem_pool_free(struct k_mem_block *block)
