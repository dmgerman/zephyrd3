DECL|SYS_MEM_POOL_KERNEL|macro|SYS_MEM_POOL_KERNEL
DECL|SYS_MEM_POOL_USER|macro|SYS_MEM_POOL_USER
DECL|ZEPHYR_INCLUDE_MISC_MEMPOOL_BASE_H_|macro|ZEPHYR_INCLUDE_MISC_MEMPOOL_BASE_H_
DECL|_ALIGN4|macro|_ALIGN4
DECL|_MPOOL_BITS_SIZE|macro|_MPOOL_BITS_SIZE
DECL|_MPOOL_HAVE_LVL|macro|_MPOOL_HAVE_LVL
DECL|_MPOOL_LBIT_BYTES|macro|_MPOOL_LBIT_BYTES
DECL|_MPOOL_LBIT_WORDS_UNCLAMPED|macro|_MPOOL_LBIT_WORDS_UNCLAMPED
DECL|_MPOOL_LBIT_WORDS|macro|_MPOOL_LBIT_WORDS
DECL|_MPOOL_LVLS|macro|_MPOOL_LVLS
DECL|_MPOOL_MINBLK|macro|_MPOOL_MINBLK
DECL|__MPOOL_LVLS|macro|__MPOOL_LVLS
DECL|bits_p|member|u32_t *bits_p;
DECL|bits|member|u32_t bits;
DECL|buf|member|void *buf;
DECL|flags|member|u8_t flags;
DECL|free_list|member|sys_dlist_t free_list;
DECL|levels|member|struct sys_mem_pool_lvl *levels;
DECL|max_inline_level|member|s8_t max_inline_level;
DECL|max_sz|member|size_t max_sz;
DECL|n_levels|member|u8_t n_levels;
DECL|n_max|member|u16_t n_max;
DECL|sys_mem_pool_base|struct|struct sys_mem_pool_base {
DECL|sys_mem_pool_lvl|struct|struct sys_mem_pool_lvl {
