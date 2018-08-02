DECL|NET_BUF_EXTERNAL_DATA|macro|NET_BUF_EXTERNAL_DATA
DECL|NET_BUF_FRAGS|macro|NET_BUF_FRAGS
DECL|NET_BUF_POOL_DEFINE|macro|NET_BUF_POOL_DEFINE
DECL|NET_BUF_POOL_FIXED_DEFINE|macro|NET_BUF_POOL_FIXED_DEFINE
DECL|NET_BUF_POOL_HEAP_DEFINE|macro|NET_BUF_POOL_HEAP_DEFINE
DECL|NET_BUF_POOL_INITIALIZER|macro|NET_BUF_POOL_INITIALIZER
DECL|NET_BUF_POOL_INITIALIZER|macro|NET_BUF_POOL_INITIALIZER
DECL|NET_BUF_POOL_VAR_DEFINE|macro|NET_BUF_POOL_VAR_DEFINE
DECL|NET_BUF_SIMPLE_DEFINE_STATIC|macro|NET_BUF_SIMPLE_DEFINE_STATIC
DECL|NET_BUF_SIMPLE_DEFINE|macro|NET_BUF_SIMPLE_DEFINE
DECL|NET_BUF_SIMPLE|macro|NET_BUF_SIMPLE
DECL|__NET_BUF_H|macro|__NET_BUF_H
DECL|__bufs|member|struct net_buf * const __bufs;
DECL|__buf|member|u8_t *__buf;
DECL|__buf|member|u8_t *__buf;
DECL|__net_buf_align|macro|__net_buf_align
DECL|__net_buf_align|member|u8_t user_data[CONFIG_NET_BUF_USER_DATA_SIZE] __net_buf_align;
DECL|alloc_data|member|void *alloc_data;
DECL|alloc|member|const struct net_buf_data_alloc *alloc;
DECL|alloc|member|u8_t * (*alloc)(struct net_buf *buf, size_t *size, s32_t timeout);
DECL|avail_count|member|s16_t avail_count;
DECL|buf_count|member|const u16_t buf_count;
DECL|b|member|struct net_buf_simple b;
DECL|cb|member|const struct net_buf_data_cb *cb;
DECL|data_pool|member|u8_t *data_pool;
DECL|data_size|member|size_t data_size;
DECL|data|member|u8_t *data;
DECL|data|member|u8_t *data;
DECL|destroy|member|void (*const destroy)(struct net_buf *buf);
DECL|flags|member|u8_t flags;
DECL|frags|member|struct net_buf *frags;
DECL|free|member|struct k_lifo free;
DECL|len|member|u16_t len;
DECL|len|member|u16_t len;
DECL|len|member|u16_t len;
DECL|name|member|const char *name;
DECL|net_buf_add_be16|macro|net_buf_add_be16
DECL|net_buf_add_be32|macro|net_buf_add_be32
DECL|net_buf_add_le16|macro|net_buf_add_le16
DECL|net_buf_add_le32|macro|net_buf_add_le32
DECL|net_buf_add_mem|macro|net_buf_add_mem
DECL|net_buf_add_u8|macro|net_buf_add_u8
DECL|net_buf_add|macro|net_buf_add
DECL|net_buf_alloc_fixed|macro|net_buf_alloc_fixed
DECL|net_buf_alloc_len|macro|net_buf_alloc_len
DECL|net_buf_alloc_with_data|macro|net_buf_alloc_with_data
DECL|net_buf_allocator_cb|typedef|typedef struct net_buf *(*net_buf_allocator_cb)(s32_t timeout, void *user_data);
DECL|net_buf_alloc|macro|net_buf_alloc
DECL|net_buf_data_alloc|struct|struct net_buf_data_alloc {
DECL|net_buf_data_cb|struct|struct net_buf_data_cb {
DECL|net_buf_destroy|function|static inline void net_buf_destroy(struct net_buf *buf)
DECL|net_buf_frag_del|macro|net_buf_frag_del
DECL|net_buf_frags_len|function|static inline size_t net_buf_frags_len(struct net_buf *buf)
DECL|net_buf_get|macro|net_buf_get
DECL|net_buf_headroom|macro|net_buf_headroom
DECL|net_buf_pool_fixed|struct|struct net_buf_pool_fixed {
DECL|net_buf_pool|struct|struct net_buf_pool {
DECL|net_buf_pull_be16|macro|net_buf_pull_be16
DECL|net_buf_pull_be32|macro|net_buf_pull_be32
DECL|net_buf_pull_le16|macro|net_buf_pull_le16
DECL|net_buf_pull_le32|macro|net_buf_pull_le32
DECL|net_buf_pull_u8|macro|net_buf_pull_u8
DECL|net_buf_pull|macro|net_buf_pull
DECL|net_buf_push_be16|macro|net_buf_push_be16
DECL|net_buf_push_le16|macro|net_buf_push_le16
DECL|net_buf_push_u8|macro|net_buf_push_u8
DECL|net_buf_push|macro|net_buf_push
DECL|net_buf_reserve|macro|net_buf_reserve
DECL|net_buf_simple_init|function|static inline void net_buf_simple_init(struct net_buf_simple *buf, size_t reserve_head)
DECL|net_buf_simple_reset|function|static inline void net_buf_simple_reset(struct net_buf_simple *buf)
DECL|net_buf_simple_restore|function|static inline void net_buf_simple_restore(struct net_buf_simple *buf, struct net_buf_simple_state *state)
DECL|net_buf_simple_save|function|static inline void net_buf_simple_save(struct net_buf_simple *buf, struct net_buf_simple_state *state)
DECL|net_buf_simple_state|struct|struct net_buf_simple_state {
DECL|net_buf_simple_tail|function|static inline u8_t *net_buf_simple_tail(struct net_buf_simple *buf)
DECL|net_buf_simple|struct|struct net_buf_simple {
DECL|net_buf_skip|function|static inline struct net_buf *net_buf_skip(struct net_buf *buf, u16_t len)
DECL|net_buf_tailroom|macro|net_buf_tailroom
DECL|net_buf_tail|macro|net_buf_tail
DECL|net_buf_unref|macro|net_buf_unref
DECL|net_buf_user_data|function|static inline void *net_buf_user_data(const struct net_buf *buf)
DECL|net_buf|struct|struct net_buf {
DECL|node|member|sys_snode_t node;
DECL|offset|member|u16_t offset;
DECL|pool_id|member|u8_t pool_id;
DECL|pool_size|member|const u16_t pool_size;
DECL|ref|member|u8_t * (*ref)(struct net_buf *buf, u8_t *data);
DECL|ref|member|u8_t ref;
DECL|size|member|u16_t size;
DECL|size|member|u16_t size;
DECL|uninit_count|member|u16_t uninit_count;
DECL|unref|member|void (*unref)(struct net_buf *buf, u8_t *data);
