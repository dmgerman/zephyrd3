DECL|IP_BUF_RX_SIZE|macro|IP_BUF_RX_SIZE
DECL|IP_BUF_RX_SIZE|macro|IP_BUF_RX_SIZE
DECL|IP_BUF_TX_SIZE|macro|IP_BUF_TX_SIZE
DECL|IP_BUF_TX_SIZE|macro|IP_BUF_TX_SIZE
DECL|dec_free_rx_bufs|function|static inline void dec_free_rx_bufs(struct net_buf *buf)
DECL|dec_free_rx_bufs|macro|dec_free_rx_bufs
DECL|dec_free_tx_bufs|function|static inline void dec_free_tx_bufs(struct net_buf *buf)
DECL|dec_free_tx_bufs|macro|dec_free_tx_bufs
DECL|free_rx_bufs_func|function|static inline void free_rx_bufs_func(struct net_buf *buf)
DECL|free_rx_bufs|variable|free_rx_bufs
DECL|free_tx_bufs_func|function|static inline void free_tx_bufs_func(struct net_buf *buf)
DECL|free_tx_bufs|variable|free_tx_bufs
DECL|get_frees|function|static inline int get_frees(enum ip_buf_type type)
DECL|inc_free_rx_bufs_func|macro|inc_free_rx_bufs_func
DECL|inc_free_rx_bufs_func|macro|inc_free_rx_bufs_func
DECL|inc_free_rx_bufs|function|static inline void inc_free_rx_bufs(struct net_buf *buf)
DECL|inc_free_rx_bufs|macro|inc_free_rx_bufs
DECL|inc_free_tx_bufs_func|macro|inc_free_tx_bufs_func
DECL|inc_free_tx_bufs_func|macro|inc_free_tx_bufs_func
DECL|inc_free_tx_bufs|function|static inline void inc_free_tx_bufs(struct net_buf *buf)
DECL|inc_free_tx_bufs|macro|inc_free_tx_bufs
DECL|ip_buf_get_debug|function|static struct net_buf *ip_buf_get_debug(enum ip_buf_type type,struct net_context *context, const char *caller, int line) #else static struct net_buf *ip_buf_get(enum ip_buf_type type,
DECL|ip_buf_get_reserve_debug|function|static struct net_buf *ip_buf_get_reserve_debug(enum ip_buf_type type,uint16_t reserve_head, const char *caller, int line) #else
DECL|ip_buf_get_reserve_rx_debug|function|struct net_buf *ip_buf_get_reserve_rx_debug(uint16_t reserve_head, const char *caller, int line)
DECL|ip_buf_get_reserve_tx_debug|function|struct net_buf *ip_buf_get_reserve_tx_debug(uint16_t reserve_head, const char *caller, int line)
DECL|ip_buf_get_rx_debug|function|struct net_buf *ip_buf_get_rx_debug(struct net_context *context, const char *caller, int line) #else struct net_buf *ip_buf_get_rx(struct net_context *context) #endif
DECL|ip_buf_get_tx_debug|function|struct net_buf *ip_buf_get_tx_debug(struct net_context *context, const char *caller, int line) #else struct net_buf *ip_buf_get_tx(struct net_context *context) #endif
DECL|ip_buf_init|function|void ip_buf_init(void)
DECL|ip_buf_unref_debug|function|void ip_buf_unref_debug(struct net_buf *buf, const char *caller, int line)
DECL|num_free_rx_bufs|variable|num_free_rx_bufs
DECL|num_free_tx_bufs|variable|num_free_tx_bufs
DECL|type2str|function|static inline const char *type2str(enum ip_buf_type type)
