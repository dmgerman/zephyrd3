DECL|NET_BUF_FRAGS|macro|NET_BUF_FRAGS
DECL|NET_BUF_POOL|macro|NET_BUF_POOL
DECL|__NET_BUF_H|macro|__NET_BUF_H
DECL|__net_buf_align|macro|__net_buf_align
DECL|__net_buf_align|member|uint8_t __buf[0] __net_buf_align;
DECL|_unused|member|int _unused;
DECL|data|member|uint8_t *data;
DECL|destroy|member|void (*const destroy)(struct net_buf *buf);
DECL|flags|member|uint8_t flags;
DECL|frags|member|struct net_buf *frags;
DECL|free|member|struct nano_fifo * const free;
DECL|len|member|uint16_t len;
DECL|net_buf_frag_add|macro|net_buf_frag_add
DECL|net_buf_pool_init|macro|net_buf_pool_init
DECL|net_buf_tail|function|static inline uint8_t *net_buf_tail(struct net_buf *buf)
DECL|net_buf_user_data|function|static inline void *net_buf_user_data(struct net_buf *buf)
DECL|net_buf|struct|struct net_buf {
DECL|ref|member|uint8_t ref;
DECL|size|member|const uint16_t size;
DECL|user_data_size|member|const uint16_t user_data_size;
