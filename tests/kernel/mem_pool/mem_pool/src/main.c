DECL|NUM_BLOCKS|macro|NUM_BLOCKS
DECL|ONE_SECOND|macro|ONE_SECOND
DECL|STACKSIZE|macro|STACKSIZE
DECL|TENTH_SECOND|macro|TENTH_SECOND
DECL|TEST_CASE|struct|struct TEST_CASE {
DECL|alternate_task|function|void alternate_task(void)
DECL|block_list|variable|block_list
DECL|block|member|struct k_mem_block *block; /* pointer to block data */
DECL|evidence|variable|evidence
DECL|free_blocks|function|static void free_blocks(struct TEST_CASE *tests, int n_tests)
DECL|get_set2|variable|get_set2
DECL|get_set|variable|get_set
DECL|getwt_set|variable|getwt_set
DECL|helper_block|variable|helper_block
DECL|helper_task|function|void helper_task(void)
DECL|pool_block_get_func_t|typedef|typedef int (*pool_block_get_func_t)(struct k_mem_block *, struct k_mem_pool *,
DECL|pool_block_get_func|function|static int pool_block_get_func(struct k_mem_block *block, struct k_mem_pool *pool,int size, s32_t unused)
DECL|pool_block_get_work|function|static void pool_block_get_work(char *string, pool_block_get_func_t func, struct TEST_CASE *tests, int n_tests)
DECL|pool_block_get_wt_func|function|static int pool_block_get_wt_func(struct k_mem_block *block, struct k_mem_pool *pool, int size, s32_t timeout)
DECL|pool_id|member|struct k_mem_pool *pool_id; /* pool ID */
DECL|pool_move_block_func_t|typedef|typedef int (*pool_move_block_func_t)(struct k_mem_block *, struct k_mem_pool *);
DECL|rcode|member|int rcode; /* expected return code */
DECL|size|member|int size; /* request size in bytes */
DECL|test_main|function|void test_main(void)
DECL|test_pool_block_get_timeout|function|static void test_pool_block_get_timeout(void)
DECL|test_pool_block_get_wait|function|static void test_pool_block_get_wait(void)
DECL|test_pool_block_get|function|static void test_pool_block_get(void)
DECL|test_pool_malloc|function|static void test_pool_malloc(void)
DECL|timeout|member|s32_t timeout; /* # of ticks to wait */
