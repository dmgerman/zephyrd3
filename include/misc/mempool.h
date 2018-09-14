DECL|SYS_MEM_POOL_DEFINE|macro|SYS_MEM_POOL_DEFINE
DECL|ZEPHYR_INCLUDE_MISC_MEMPOOL_H_|macro|ZEPHYR_INCLUDE_MISC_MEMPOOL_H_
DECL|base|member|struct sys_mem_pool_base base;
DECL|block|member|u32_t block : 28;
DECL|level|member|u32_t level : 4;
DECL|mutex|member|struct k_mutex *mutex;
DECL|pool|member|struct sys_mem_pool *pool;
DECL|sys_mem_pool_block|struct|struct sys_mem_pool_block {
DECL|sys_mem_pool_init|function|static inline void sys_mem_pool_init(struct sys_mem_pool *p)
DECL|sys_mem_pool|struct|struct sys_mem_pool {
