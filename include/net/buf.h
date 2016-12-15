DECL|NET_BUF_FRAGS|macro|NET_BUF_FRAGS
DECL|NET_BUF_POOL_DEFINE|macro|NET_BUF_POOL_DEFINE
DECL|NET_BUF_POOL_INITIALIZER|macro|NET_BUF_POOL_INITIALIZER
DECL|NET_BUF_SIMPLE|macro|NET_BUF_SIMPLE
DECL|__NET_BUF_H|macro|__NET_BUF_H
DECL|__bufs|member|struct net_buf * const __bufs;
DECL|__net_buf_align|macro|__net_buf_align
DECL|__net_buf_align|member|uint8_t __buf[0] __net_buf_align;
DECL|__net_buf_align|member|uint8_t __buf[0] __net_buf_align;
DECL|_unused|member|int _unused;
DECL|buf_count|member|const uint16_t buf_count;
DECL|buf_size|member|const uint16_t buf_size;
DECL|b|member|struct net_buf_simple b;
DECL|data|member|uint8_t *data;
DECL|data|member|uint8_t *data;
DECL|destroy|member|void (*const destroy)(struct net_buf *buf);
DECL|flags|member|uint8_t flags;
DECL|frags|member|struct net_buf *frags;
DECL|free|member|struct k_fifo free;
DECL|len|member|uint16_t len;
DECL|len|member|uint16_t len;
DECL|len|member|uint16_t len;
DECL|net_buf_add_be16|macro|net_buf_add_be16
DECL|net_buf_add_be32|macro|net_buf_add_be32
DECL|net_buf_add_le16|macro|net_buf_add_le16
DECL|net_buf_add_le32|macro|net_buf_add_le32
DECL|net_buf_add_u8|macro|net_buf_add_u8
DECL|net_buf_add|macro|net_buf_add
DECL|net_buf_alloc|macro|net_buf_alloc
DECL|net_buf_destroy|function|static inline void net_buf_destroy(struct net_buf *buf)
DECL|net_buf_frags_len|function|static inline size_t net_buf_frags_len(struct net_buf *buf)
DECL|net_buf_get|macro|net_buf_get
DECL|net_buf_headroom|macro|net_buf_headroom
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
DECL|net_buf_simple_init|function|static inline void net_buf_simple_init(struct net_buf_simple *buf, size_t reserve_head)
DECL|net_buf_simple_restore|function|static inline void net_buf_simple_restore(struct net_buf_simple *buf, struct net_buf_simple_state *state)
DECL|net_buf_simple_save|function|static inline void net_buf_simple_save(struct net_buf_simple *buf, struct net_buf_simple_state *state)
DECL|net_buf_simple_state|struct|struct net_buf_simple_state {
DECL|net_buf_simple_tail|function|static inline uint8_t *net_buf_simple_tail(struct net_buf_simple *buf)
DECL|net_buf_simple|struct|struct net_buf_simple {
DECL|net_buf_tailroom|macro|net_buf_tailroom
DECL|net_buf_tail|macro|net_buf_tail
DECL|net_buf_unref|macro|net_buf_unref
DECL|net_buf_user_data|function|static inline void *net_buf_user_data(struct net_buf *buf)
DECL|net_buf|struct|struct net_buf {
DECL|offset|member|uint16_t offset;
DECL|pool|member|struct net_buf_pool *pool;
DECL|ref|member|uint8_t ref;
DECL|sent_list|member|sys_snode_t sent_list;
DECL|size|member|uint16_t size;
DECL|size|member|uint16_t size;
DECL|uninit_count|member|uint16_t uninit_count;
DECL|user_data_size|member|const uint16_t user_data_size;
