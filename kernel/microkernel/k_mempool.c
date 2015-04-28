DECL|AD_AFTER_SEARCH4BIGGERBLOCK|macro|AD_AFTER_SEARCH4BIGGERBLOCK
DECL|AD_BEFORE_SEARCH4BIGGERBLOCK|macro|AD_BEFORE_SEARCH4BIGGERBLOCK
DECL|AD_NONE|macro|AD_NONE
DECL|AUTODEFRAG|macro|AUTODEFRAG
DECL|K_GetBlock|function|void K_GetBlock(struct k_args *A)
DECL|K_RelBlock|function|void K_RelBlock(struct k_args *A)
DECL|K_gtbltmo|function|void K_gtbltmo(struct k_args *A)
DECL|_k_block_waiters_get|function|void _k_block_waiters_get(struct k_args *A)
DECL|_k_defrag|function|void _k_defrag(struct k_args *A)
DECL|_mem_pools_init|function|void _mem_pools_init(void)
DECL|_task_mem_pool_alloc|function|int _task_mem_pool_alloc(struct k_block *blockptr, /* ptr to requested block */ kmemory_pool_t poolid, /* pool from which to get block */ int reqsize, /* requested block size */ int32_t time /* maximum number of ticks to wait */ )
DECL|defrag|function|static void defrag(struct pool_struct *P, int ifraglevel_start, int ifraglevel_stop)
DECL|get_block_recusive|function|static char *get_block_recusive(struct pool_struct *P, int index, int startindex)
DECL|search_block_on_frag_level|function|static char *search_block_on_frag_level(struct pool_block *pfraglevelinfo, int *piblockindex)
DECL|search_bp|function|static void search_bp(char *ptr, struct pool_struct *P, int index)
DECL|task_mem_pool_defragment|function|void task_mem_pool_defragment(kmemory_pool_t Pid /* pool to defragment */ )
DECL|task_mem_pool_free|function|void task_mem_pool_free(struct k_block *blockptr /* pointer to block to free */ )
