DECL|AlternateTask|function|void AlternateTask(void)
DECL|DEFRAG_BLK_TEST|macro|DEFRAG_BLK_TEST
DECL|DefragTask|function|void DefragTask(void)
DECL|HelperTask|function|void HelperTask(void)
DECL|NUM_BLOCKS|macro|NUM_BLOCKS
DECL|ONE_SECOND|macro|ONE_SECOND
DECL|RegressionTask|function|void RegressionTask(void)
DECL|TENTH_SECOND|macro|TENTH_SECOND
DECL|TEST_CASE|typedef|} TEST_CASE;
DECL|blockCompare|function|int blockCompare(struct k_block *b1, struct k_block *b2)
DECL|blockList|variable|blockList
DECL|block|member|struct k_block *block; /* pointer to block data */
DECL|defrag|variable|defrag
DECL|evidence|variable|evidence
DECL|freeBlocks|function|void freeBlocks(TEST_CASE *tests, int nTests)
DECL|getSet2|variable|getSet2
DECL|getSet|variable|getSet
DECL|getwtSet|variable|getwtSet
DECL|helperBlock|variable|helperBlock
DECL|poolBlockGetFunc_t|typedef|typedef int (*poolBlockGetFunc_t)(struct k_block *, kmemory_pool_t, int, int32_t);
DECL|poolBlockGetFunc|function|int poolBlockGetFunc(struct k_block *block, kmemory_pool_t pool, int size, int32_t unused)
DECL|poolBlockGetTest|function|int poolBlockGetTest(void)
DECL|poolBlockGetTimeoutTest|function|int poolBlockGetTimeoutTest(void)
DECL|poolBlockGetWFunc|function|int poolBlockGetWFunc(struct k_block *block, kmemory_pool_t pool, int size, int32_t unused)
DECL|poolBlockGetWTFunc|function|int poolBlockGetWTFunc(struct k_block *block, kmemory_pool_t pool, int size, int32_t timeout)
DECL|poolBlockGetWaitTest|function|int poolBlockGetWaitTest(void)
DECL|poolBlockGetWork|function|int poolBlockGetWork(char *string, poolBlockGetFunc_t func, TEST_CASE *tests, int nTests)
DECL|poolDefragTest|function|int poolDefragTest(void)
DECL|poolId|member|kmemory_pool_t poolId; /* pool ID */
DECL|poolMoveBlockFunc_t|typedef|typedef int (*poolMoveBlockFunc_t)(struct k_block *, kmemory_pool_t);
DECL|rcode|member|int rcode; /* expected return code */
DECL|size|member|int size; /* request size in bytes */
DECL|timeout|member|int32_t timeout; /* # of ticks to wait */
