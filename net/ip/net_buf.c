DECL|NET_BUF_RX_SIZE|macro|NET_BUF_RX_SIZE
DECL|NET_BUF_RX_SIZE|macro|NET_BUF_RX_SIZE
DECL|NET_BUF_TX_SIZE|macro|NET_BUF_TX_SIZE
DECL|NET_BUF_TX_SIZE|macro|NET_BUF_TX_SIZE
DECL|NET_NUM_MAC_BUFS|macro|NET_NUM_MAC_BUFS
DECL|dec_free_rx_bufs|function|static inline void dec_free_rx_bufs(struct net_buf *buf)
DECL|dec_free_rx_bufs|macro|dec_free_rx_bufs
DECL|dec_free_tx_bufs|function|static inline void dec_free_tx_bufs(struct net_buf *buf)
DECL|dec_free_tx_bufs|macro|dec_free_tx_bufs
DECL|free_mbufs|variable|free_mbufs
DECL|free_rx_bufs|variable|free_rx_bufs
DECL|free_tx_bufs|variable|free_tx_bufs
DECL|get_frees|function|static inline int get_frees(enum net_buf_type type)
DECL|inc_free_rx_bufs|function|static inline void inc_free_rx_bufs(struct net_buf *buf)
DECL|inc_free_rx_bufs|macro|inc_free_rx_bufs
DECL|inc_free_tx_bufs|function|static inline void inc_free_tx_bufs(struct net_buf *buf)
DECL|inc_free_tx_bufs|macro|inc_free_tx_bufs
DECL|mac_buffers|variable|mac_buffers
DECL|net_buf_add|function|uint8_t *net_buf_add(struct net_buf *buf, uint16_t len)
DECL|net_buf_get_debug|function|static struct net_buf *net_buf_get_debug(enum net_buf_type type, struct net_context *context, const char *caller, int line) #else static struct net_buf *net_buf_get(enum net_buf_type type,
DECL|net_buf_get_reserve_debug|function|static struct net_buf *net_buf_get_reserve_debug(enum net_buf_type type, uint16_t reserve_head, const char *caller, int line) #else
DECL|net_buf_get_reserve_rx_debug|function|struct net_buf *net_buf_get_reserve_rx_debug(uint16_t reserve_head, const char *caller, int line)
DECL|net_buf_get_reserve_tx_debug|function|struct net_buf *net_buf_get_reserve_tx_debug(uint16_t reserve_head, const char *caller, int line)
DECL|net_buf_get_rx_debug|function|struct net_buf *net_buf_get_rx_debug(struct net_context *context, const char *caller, int line) #else struct net_buf *net_buf_get_rx(struct net_context *context) #endif
DECL|net_buf_get_tx_debug|function|struct net_buf *net_buf_get_tx_debug(struct net_context *context, const char *caller, int line) #else struct net_buf *net_buf_get_tx(struct net_context *context) #endif
DECL|net_buf_init|function|void net_buf_init(void)
DECL|net_buf_pull|function|uint8_t *net_buf_pull(struct net_buf *buf, uint16_t len)
DECL|net_buf_push|function|uint8_t *net_buf_push(struct net_buf *buf, uint16_t len)
DECL|net_buf_put_debug|function|void net_buf_put_debug(struct net_buf *buf, const char *caller, int line)
DECL|net_mbuf_get_reserve_debug|function|struct net_mbuf *net_mbuf_get_reserve_debug(uint16_t reserve_head, const char *caller, int line)
DECL|net_mbuf_init|function|static void net_mbuf_init(void)
DECL|net_mbuf_put_debug|function|void net_mbuf_put_debug(struct net_mbuf *buf, const char *caller, int line)
DECL|num_free_rx_bufs|variable|num_free_rx_bufs
DECL|num_free_tx_bufs|variable|num_free_tx_bufs
DECL|rx_buffers|variable|rx_buffers
DECL|tx_buffers|variable|tx_buffers
DECL|type2str|function|static inline const char *type2str(enum net_buf_type type)
