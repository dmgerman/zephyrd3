DECL|AD_AFTER_SEARCH4BIGGERBLOCK|macro|AD_AFTER_SEARCH4BIGGERBLOCK
DECL|AD_BEFORE_SEARCH4BIGGERBLOCK|macro|AD_BEFORE_SEARCH4BIGGERBLOCK
DECL|AD_NONE|macro|AD_NONE
DECL|AUTODEFRAG|macro|AUTODEFRAG
DECL|MALLOC_ALIGN|macro|MALLOC_ALIGN
DECL|_do_task_mem_pool_alloc|function|int _do_task_mem_pool_alloc(kmemory_pool_t pool_id, int reqsize, int32_t timeout, void **alloc_mem)
DECL|_k_block_waiters_get|function|void _k_block_waiters_get(struct k_args *A)
DECL|_k_defrag|function|void _k_defrag(struct k_args *A)
DECL|_k_mem_pool_block_get_timeout_handle|function|void _k_mem_pool_block_get_timeout_handle(struct k_args *A)
DECL|_k_mem_pool_block_get|function|void _k_mem_pool_block_get(struct k_args *A)
DECL|_k_mem_pool_block_release|function|void _k_mem_pool_block_release(struct k_args *A)
DECL|_k_mem_pool_init|function|void _k_mem_pool_init(void)
DECL|compute_block_set_index|function|static int compute_block_set_index(struct pool_struct *P, int data_size)
DECL|defrag|function|static void defrag(struct pool_struct *P, int ifraglevel_start, int ifraglevel_stop)
DECL|free_existing_block|function|static void free_existing_block(char *ptr, struct pool_struct *P, int index)
DECL|get_block_recursive|function|static char *get_block_recursive(struct pool_struct *P, int index, int startindex)
DECL|get_existing_block|function|static char *get_existing_block(struct pool_block *pfraglevelinfo,int *piblockindex)
DECL|task_free|function|void task_free(void *ptr)
DECL|task_malloc|function|void *task_malloc(uint32_t size)
DECL|task_mem_pool_alloc|function|int task_mem_pool_alloc(struct k_block *blockptr, kmemory_pool_t pool_id, int reqsize, int32_t timeout)
DECL|task_mem_pool_defragment|function|void task_mem_pool_defragment(kmemory_pool_t Pid)
DECL|task_mem_pool_free|function|void task_mem_pool_free(struct k_block *blockptr)
