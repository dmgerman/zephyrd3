DECL|APP_PROTO_LEN|macro|APP_PROTO_LEN
DECL|APP_PROTO_LEN|macro|APP_PROTO_LEN
DECL|APP_PROTO_LEN|macro|APP_PROTO_LEN
DECL|EXTRA_PROTO_LEN|macro|EXTRA_PROTO_LEN
DECL|IP_PROTO_LEN|macro|IP_PROTO_LEN
DECL|IP_PROTO_LEN|macro|IP_PROTO_LEN
DECL|NBUF_DATA_COUNT|macro|NBUF_DATA_COUNT
DECL|NBUF_DATA_LEN|macro|NBUF_DATA_LEN
DECL|NBUF_RX_COUNT|macro|NBUF_RX_COUNT
DECL|NBUF_TX_COUNT|macro|NBUF_TX_COUNT
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|PRINT_CYCLE|macro|PRINT_CYCLE
DECL|STRING2|macro|STRING2
DECL|STRING2|macro|STRING2
DECL|STRING|macro|STRING
DECL|STRING|macro|STRING
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|dec_free_data_bufs|function|static inline void dec_free_data_bufs(struct net_buf *buf)
DECL|dec_free_data_bufs|macro|dec_free_data_bufs
DECL|dec_free_rx_bufs|function|static inline void dec_free_rx_bufs(struct net_buf *buf)
DECL|dec_free_rx_bufs|macro|dec_free_rx_bufs
DECL|dec_free_tx_bufs|function|static inline void dec_free_tx_bufs(struct net_buf *buf)
DECL|dec_free_tx_bufs|macro|dec_free_tx_bufs
DECL|free_data_bufs_func|function|static inline void free_data_bufs_func(struct net_buf *buf)
DECL|free_data_bufs|variable|free_data_bufs
DECL|free_rx_bufs_func|function|static inline void free_rx_bufs_func(struct net_buf *buf)
DECL|free_rx_bufs|variable|free_rx_bufs
DECL|free_tx_bufs_func|function|static inline void free_tx_bufs_func(struct net_buf *buf)
DECL|free_tx_bufs|variable|free_tx_bufs
DECL|get_frees|function|static inline int get_frees(enum net_nbuf_type type)
DECL|inc_free_data_bufs_func|macro|inc_free_data_bufs_func
DECL|inc_free_data_bufs_func|macro|inc_free_data_bufs_func
DECL|inc_free_data_bufs|function|static inline void inc_free_data_bufs(struct net_buf *buf)
DECL|inc_free_data_bufs|macro|inc_free_data_bufs
DECL|inc_free_rx_bufs_func|macro|inc_free_rx_bufs_func
DECL|inc_free_rx_bufs_func|macro|inc_free_rx_bufs_func
DECL|inc_free_rx_bufs|function|static inline void inc_free_rx_bufs(struct net_buf *buf)
DECL|inc_free_rx_bufs|macro|inc_free_rx_bufs
DECL|inc_free_tx_bufs_func|macro|inc_free_tx_bufs_func
DECL|inc_free_tx_bufs_func|macro|inc_free_tx_bufs_func
DECL|inc_free_tx_bufs|function|static inline void inc_free_tx_bufs(struct net_buf *buf)
DECL|inc_free_tx_bufs|macro|inc_free_tx_bufs
DECL|is_from_data_pool|function|static inline bool is_from_data_pool(struct net_buf *buf)
DECL|net_nbuf_compact|function|struct net_buf *net_nbuf_compact(struct net_buf *buf)
DECL|net_nbuf_copy|function|struct net_buf *net_nbuf_copy(struct net_buf *orig, size_t amount, size_t reserve)
DECL|net_nbuf_get_data_debug|function|struct net_buf *net_nbuf_get_data_debug(struct net_context *context,const char *caller, int line)
DECL|net_nbuf_get_data|function|struct net_buf *net_nbuf_get_data(struct net_context *context)
DECL|net_nbuf_get_debug|function|static struct net_buf *net_nbuf_get_debug(enum net_nbuf_type type, struct net_context *context, const char *caller, int line) #else static struct net_buf *net_nbuf_get(enum net_nbuf_type type,
DECL|net_nbuf_get_reserve_data_debug|function|struct net_buf *net_nbuf_get_reserve_data_debug(uint16_t reserve_head,const char *caller, int line)
DECL|net_nbuf_get_reserve_data|function|struct net_buf *net_nbuf_get_reserve_data(uint16_t reserve_head)
DECL|net_nbuf_get_reserve_debug|function|static struct net_buf *net_nbuf_get_reserve_debug(enum net_nbuf_type type, uint16_t reserve_head, const char *caller, int line) #else
DECL|net_nbuf_get_reserve_rx_debug|function|struct net_buf *net_nbuf_get_reserve_rx_debug(uint16_t reserve_head, const char *caller, int line)
DECL|net_nbuf_get_reserve_rx|function|struct net_buf *net_nbuf_get_reserve_rx(uint16_t reserve_head)
DECL|net_nbuf_get_reserve_tx_debug|function|struct net_buf *net_nbuf_get_reserve_tx_debug(uint16_t reserve_head, const char *caller, int line)
DECL|net_nbuf_get_reserve_tx|function|struct net_buf *net_nbuf_get_reserve_tx(uint16_t reserve_head)
DECL|net_nbuf_get_rx_debug|function|struct net_buf *net_nbuf_get_rx_debug(struct net_context *context, const char *caller, int line)
DECL|net_nbuf_get_rx|function|struct net_buf *net_nbuf_get_rx(struct net_context *context)
DECL|net_nbuf_get_tx_debug|function|struct net_buf *net_nbuf_get_tx_debug(struct net_context *context, const char *caller, int line)
DECL|net_nbuf_get_tx|function|struct net_buf *net_nbuf_get_tx(struct net_context *context)
DECL|net_nbuf_init|function|void net_nbuf_init(void)
DECL|net_nbuf_is_compact|function|bool net_nbuf_is_compact(struct net_buf *buf)
DECL|net_nbuf_print_frags|function|void net_nbuf_print_frags(struct net_buf *buf)
DECL|net_nbuf_print|function|void net_nbuf_print(void)
DECL|net_nbuf_pull|function|struct net_buf *net_nbuf_pull(struct net_buf *buf, size_t amount)
DECL|net_nbuf_push|function|struct net_buf *net_nbuf_push(struct net_buf *parent, struct net_buf *buf, size_t amount)
DECL|net_nbuf_read_be16|function|struct net_buf *net_nbuf_read_be16(struct net_buf *buf, uint16_t offset, uint16_t *pos, uint16_t *value)
DECL|net_nbuf_read_be32|function|struct net_buf *net_nbuf_read_be32(struct net_buf *buf, uint16_t offset, uint16_t *pos, uint32_t *value)
DECL|net_nbuf_read_byte|function|static inline struct net_buf *net_nbuf_read_byte(struct net_buf *buf, uint16_t offset, uint16_t *pos, uint8_t *data)
DECL|net_nbuf_read|function|struct net_buf *net_nbuf_read(struct net_buf *buf, uint16_t offset, uint16_t *pos, uint16_t len, uint8_t *data)
DECL|net_nbuf_ref_debug|function|struct net_buf *net_nbuf_ref_debug(struct net_buf *buf, const char *caller, int line) #else struct net_buf *net_nbuf_ref(struct net_buf *buf) #endif
DECL|net_nbuf_unref_debug|function|void net_nbuf_unref_debug(struct net_buf *buf, const char *caller, int line)
DECL|net_nbuf_write_byte|function|static inline bool net_nbuf_write_byte(struct net_buf *buf, uint8_t value, struct net_buf **last)
DECL|net_nbuf_write|function|bool net_nbuf_write(struct net_buf *buf, uint16_t len, uint8_t *data)
DECL|num_free_data_bufs|variable|num_free_data_bufs
DECL|num_free_rx_bufs|variable|num_free_rx_bufs
DECL|num_free_tx_bufs|variable|num_free_tx_bufs
DECL|type2str|function|static inline const char *type2str(enum net_nbuf_type type)
