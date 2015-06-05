DECL|NET_NUM_BUFS|macro|NET_NUM_BUFS
DECL|NET_NUM_MAC_BUFS|macro|NET_NUM_MAC_BUFS
DECL|buffers|variable|buffers
DECL|free_bufs|variable|free_bufs
DECL|free_mbufs|variable|free_mbufs
DECL|mac_buffers|variable|mac_buffers
DECL|net_buf_add|function|uint8_t *net_buf_add(struct net_buf *buf, uint16_t len)
DECL|net_buf_get_debug|function|struct net_buf *net_buf_get_debug(struct net_context *context, const char *caller, int line)
DECL|net_buf_get_reserve_debug|function|struct net_buf *net_buf_get_reserve_debug(uint16_t reserve_head, const char *caller, int line)
DECL|net_buf_init|function|void net_buf_init(void)
DECL|net_buf_pull|function|uint8_t *net_buf_pull(struct net_buf *buf, uint16_t len)
DECL|net_buf_push|function|uint8_t *net_buf_push(struct net_buf *buf, uint16_t len)
DECL|net_buf_put_debug|function|void net_buf_put_debug(struct net_buf *buf, const char *caller, int line)
DECL|net_mbuf_add|function|uint8_t *net_mbuf_add(struct net_mbuf *buf, uint16_t len)
DECL|net_mbuf_get_reserve|function|struct net_mbuf *net_mbuf_get_reserve(uint16_t reserve_head)
DECL|net_mbuf_init|function|static void net_mbuf_init(void)
DECL|net_mbuf_pull|function|uint8_t *net_mbuf_pull(struct net_mbuf *buf, uint16_t len)
DECL|net_mbuf_push|function|uint8_t *net_mbuf_push(struct net_mbuf *buf, uint16_t len)
DECL|net_mbuf_put|function|void net_mbuf_put(struct net_mbuf *buf)
