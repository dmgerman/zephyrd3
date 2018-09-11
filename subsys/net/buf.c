DECL|NET_BUF_ASSERT|macro|NET_BUF_ASSERT
DECL|NET_BUF_ASSERT|macro|NET_BUF_ASSERT
DECL|NET_BUF_DBG|macro|NET_BUF_DBG
DECL|NET_BUF_DBG|macro|NET_BUF_DBG
DECL|NET_BUF_ERR|macro|NET_BUF_ERR
DECL|NET_BUF_ERR|macro|NET_BUF_ERR
DECL|NET_BUF_INFO|macro|NET_BUF_INFO
DECL|NET_BUF_INFO|macro|NET_BUF_INFO
DECL|NET_BUF_SIMPLE_ASSERT|macro|NET_BUF_SIMPLE_ASSERT
DECL|NET_BUF_SIMPLE_ASSERT|macro|NET_BUF_SIMPLE_ASSERT
DECL|NET_BUF_SIMPLE_DBG|macro|NET_BUF_SIMPLE_DBG
DECL|NET_BUF_SIMPLE_DBG|macro|NET_BUF_SIMPLE_DBG
DECL|NET_BUF_SIMPLE_ERR|macro|NET_BUF_SIMPLE_ERR
DECL|NET_BUF_SIMPLE_ERR|macro|NET_BUF_SIMPLE_ERR
DECL|NET_BUF_SIMPLE_INFO|macro|NET_BUF_SIMPLE_INFO
DECL|NET_BUF_SIMPLE_INFO|macro|NET_BUF_SIMPLE_INFO
DECL|NET_BUF_SIMPLE_WARN|macro|NET_BUF_SIMPLE_WARN
DECL|NET_BUF_SIMPLE_WARN|macro|NET_BUF_SIMPLE_WARN
DECL|NET_BUF_WARN|macro|NET_BUF_WARN
DECL|NET_BUF_WARN|macro|NET_BUF_WARN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WARN_ALLOC_INTERVAL|macro|WARN_ALLOC_INTERVAL
DECL|WARN_ALLOC_INTERVAL|macro|WARN_ALLOC_INTERVAL
DECL|data_alloc|function|static u8_t *data_alloc(struct net_buf *buf, size_t *size, s32_t timeout)
DECL|data_ref|function|static u8_t *data_ref(struct net_buf *buf, u8_t *data)
DECL|data_unref|function|static void data_unref(struct net_buf *buf, u8_t *data)
DECL|fixed_data_alloc|function|static u8_t *fixed_data_alloc(struct net_buf *buf, size_t *size, s32_t timeout)
DECL|fixed_data_unref|function|static void fixed_data_unref(struct net_buf *buf, u8_t *data)
DECL|generic_data_ref|function|static u8_t *generic_data_ref(struct net_buf *buf, u8_t *data)
DECL|heap_data_alloc|function|static u8_t *heap_data_alloc(struct net_buf *buf, size_t *size, s32_t timeout)
DECL|heap_data_unref|function|static void heap_data_unref(struct net_buf *buf, u8_t *data)
DECL|mem_pool_data_alloc|function|static u8_t *mem_pool_data_alloc(struct net_buf *buf, size_t *size, s32_t timeout)
DECL|mem_pool_data_unref|function|static void mem_pool_data_unref(struct net_buf *buf, u8_t *data)
DECL|net_buf_alloc_fixed_debug|function|struct net_buf *net_buf_alloc_fixed_debug(struct net_buf_pool *pool, s32_t timeout, const char *func, int line)
DECL|net_buf_alloc_fixed|function|struct net_buf *net_buf_alloc_fixed(struct net_buf_pool *pool, s32_t timeout)
DECL|net_buf_alloc_len_debug|function|struct net_buf *net_buf_alloc_len_debug(struct net_buf_pool *pool, size_t size,s32_t timeout, const char *func, int line) #else struct net_buf *net_buf_alloc_len(struct net_buf_pool *pool, size_t size,
DECL|net_buf_alloc_with_data_debug|function|struct net_buf *net_buf_alloc_with_data_debug(struct net_buf_pool *pool, void *data, size_t size, s32_t timeout, const char *func, int line) #else
DECL|net_buf_append_bytes|function|u16_t net_buf_append_bytes(struct net_buf *buf, u16_t len, const void *value, s32_t timeout, net_buf_allocator_cb allocate_cb, void *user_data)
DECL|net_buf_clone|function|struct net_buf *net_buf_clone(struct net_buf *buf, s32_t timeout)
DECL|net_buf_fixed_cb|variable|net_buf_fixed_cb
DECL|net_buf_frag_add|function|struct net_buf *net_buf_frag_add(struct net_buf *head, struct net_buf *frag)
DECL|net_buf_frag_del_debug|function|struct net_buf *net_buf_frag_del_debug(struct net_buf *parent, struct net_buf *frag, const char *func, int line) #else struct net_buf *net_buf_frag_del(struct net_buf *parent, struct net_buf *frag)
DECL|net_buf_frag_insert|function|void net_buf_frag_insert(struct net_buf *parent, struct net_buf *frag)
DECL|net_buf_frag_last|function|struct net_buf *net_buf_frag_last(struct net_buf *buf)
DECL|net_buf_get_debug|function|struct net_buf *net_buf_get_debug(struct k_fifo *fifo, s32_t timeout, const char *func, int line) #else struct net_buf *net_buf_get(struct k_fifo *fifo, s32_t timeout) #endif
DECL|net_buf_heap_alloc|variable|net_buf_heap_alloc
DECL|net_buf_heap_cb|variable|net_buf_heap_cb
DECL|net_buf_id|function|int net_buf_id(struct net_buf *buf)
DECL|net_buf_linearize|function|int net_buf_linearize(void *dst, size_t dst_len, struct net_buf *src, u16_t offset, u16_t len)
DECL|net_buf_pool_get|function|struct net_buf_pool *net_buf_pool_get(int id)
DECL|net_buf_put|function|void net_buf_put(struct k_fifo *fifo, struct net_buf *buf)
DECL|net_buf_ref|function|struct net_buf *net_buf_ref(struct net_buf *buf)
DECL|net_buf_reset|function|void net_buf_reset(struct net_buf *buf)
DECL|net_buf_simple_add_be16|function|void net_buf_simple_add_be16(struct net_buf_simple *buf, u16_t val)
DECL|net_buf_simple_add_be32|function|void net_buf_simple_add_be32(struct net_buf_simple *buf, u32_t val)
DECL|net_buf_simple_add_le16|function|void net_buf_simple_add_le16(struct net_buf_simple *buf, u16_t val)
DECL|net_buf_simple_add_le32|function|void net_buf_simple_add_le32(struct net_buf_simple *buf, u32_t val)
DECL|net_buf_simple_add_mem|function|void *net_buf_simple_add_mem(struct net_buf_simple *buf, const void *mem, size_t len)
DECL|net_buf_simple_add_u8|function|u8_t *net_buf_simple_add_u8(struct net_buf_simple *buf, u8_t val)
DECL|net_buf_simple_add|function|void *net_buf_simple_add(struct net_buf_simple *buf, size_t len)
DECL|net_buf_simple_headroom|function|size_t net_buf_simple_headroom(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_be16|function|u16_t net_buf_simple_pull_be16(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_be32|function|u32_t net_buf_simple_pull_be32(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_le16|function|u16_t net_buf_simple_pull_le16(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_le32|function|u32_t net_buf_simple_pull_le32(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_u8|function|u8_t net_buf_simple_pull_u8(struct net_buf_simple *buf)
DECL|net_buf_simple_pull|function|void *net_buf_simple_pull(struct net_buf_simple *buf, size_t len)
DECL|net_buf_simple_push_be16|function|void net_buf_simple_push_be16(struct net_buf_simple *buf, u16_t val)
DECL|net_buf_simple_push_le16|function|void net_buf_simple_push_le16(struct net_buf_simple *buf, u16_t val)
DECL|net_buf_simple_push_u8|function|void net_buf_simple_push_u8(struct net_buf_simple *buf, u8_t val)
DECL|net_buf_simple_push|function|void *net_buf_simple_push(struct net_buf_simple *buf, size_t len)
DECL|net_buf_simple_reserve|function|void net_buf_simple_reserve(struct net_buf_simple *buf, size_t reserve)
DECL|net_buf_simple_tailroom|function|size_t net_buf_simple_tailroom(struct net_buf_simple *buf)
DECL|net_buf_slist_get|function|struct net_buf *net_buf_slist_get(sys_slist_t *list)
DECL|net_buf_slist_put|function|void net_buf_slist_put(sys_slist_t *list, struct net_buf *buf)
DECL|net_buf_unref_debug|function|void net_buf_unref_debug(struct net_buf *buf, const char *func, int line)
DECL|net_buf_var_cb|variable|net_buf_var_cb
DECL|pool_get_uninit|function|static inline struct net_buf *pool_get_uninit(struct net_buf_pool *pool, u16_t uninit_count)
DECL|pool_id|function|static int pool_id(struct net_buf_pool *pool)
