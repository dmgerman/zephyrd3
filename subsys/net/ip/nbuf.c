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
DECL|NBUF_USER_DATA_LEN|macro|NBUF_USER_DATA_LEN
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|STRING2|macro|STRING2
DECL|STRING2|macro|STRING2
DECL|STRING|macro|STRING
DECL|STRING|macro|STRING
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|adjust_insert_offset|function|static inline struct net_buf *adjust_insert_offset(struct net_buf *buf, uint16_t offset, uint16_t *pos)
DECL|adjust_offset|function|static inline struct net_buf *adjust_offset(struct net_buf *buf, uint16_t offset, uint16_t *pos)
DECL|adjust_write_offset|function|static inline struct net_buf *adjust_write_offset(struct net_buf *buf, struct net_buf *frag, uint16_t offset, uint16_t *pos, int32_t timeout)
DECL|check_and_create_data|function|static inline struct net_buf *check_and_create_data(struct net_buf *buf, struct net_buf *data, int32_t timeout)
DECL|get_frees|function|static inline int16_t get_frees(struct net_buf_pool *pool)
DECL|insert_data|function|static inline bool insert_data(struct net_buf *buf, struct net_buf *frag, struct net_buf *temp, uint16_t offset, uint16_t len, uint8_t *data, int32_t timeout)
DECL|is_from_data_pool|function|static inline bool is_from_data_pool(struct net_buf *buf)
DECL|net_nbuf_append_bytes|function|static inline bool net_nbuf_append_bytes(struct net_buf *buf, const uint8_t *value, uint16_t len, int32_t timeout)
DECL|net_nbuf_append|function|bool net_nbuf_append(struct net_buf *buf, uint16_t len, const uint8_t *data, int32_t timeout)
DECL|net_nbuf_compact|function|bool net_nbuf_compact(struct net_buf *buf)
DECL|net_nbuf_copy|function|struct net_buf *net_nbuf_copy(struct net_buf *orig, size_t amount, size_t reserve, int32_t timeout)
DECL|net_nbuf_get_data_debug|function|struct net_buf *net_nbuf_get_data_debug(struct net_context *context,int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_data|function|struct net_buf *net_nbuf_get_data(struct net_context *context, int32_t timeout)
DECL|net_nbuf_get_debug|function|static struct net_buf *net_nbuf_get_debug(struct net_buf_pool *pool, struct net_context *context, int32_t timeout, const char *caller, int line) #else
DECL|net_nbuf_get_info|function|void net_nbuf_get_info(size_t *tx_size, size_t *rx_size, size_t *data_size, int *tx, int *rx, int *data)
DECL|net_nbuf_get_reserve_data_debug|function|struct net_buf *net_nbuf_get_reserve_data_debug(uint16_t reserve_head,int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_reserve_data|function|struct net_buf *net_nbuf_get_reserve_data(uint16_t reserve_head, int32_t timeout)
DECL|net_nbuf_get_reserve_debug|function|static struct net_buf *net_nbuf_get_reserve_debug(struct net_buf_pool *pool, uint16_t reserve_head, int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_reserve_rx_debug|function|struct net_buf *net_nbuf_get_reserve_rx_debug(uint16_t reserve_head, int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_reserve_rx|function|struct net_buf *net_nbuf_get_reserve_rx(uint16_t reserve_head,int32_t timeout)
DECL|net_nbuf_get_reserve_tx_debug|function|struct net_buf *net_nbuf_get_reserve_tx_debug(uint16_t reserve_head, int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_reserve_tx|function|struct net_buf *net_nbuf_get_reserve_tx(uint16_t reserve_head,int32_t timeout)
DECL|net_nbuf_get_rx_debug|function|struct net_buf *net_nbuf_get_rx_debug(struct net_context *context, int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_rx|function|struct net_buf *net_nbuf_get_rx(struct net_context *context, int32_t timeout)
DECL|net_nbuf_get_tx_debug|function|struct net_buf *net_nbuf_get_tx_debug(struct net_context *context, int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_tx|function|struct net_buf *net_nbuf_get_tx(struct net_context *context, int32_t timeout)
DECL|net_nbuf_init|function|void net_nbuf_init(void)
DECL|net_nbuf_insert|function|bool net_nbuf_insert(struct net_buf *buf, struct net_buf *frag, uint16_t offset, uint16_t len, uint8_t *data, int32_t timeout)
DECL|net_nbuf_is_compact|function|bool net_nbuf_is_compact(struct net_buf *buf)
DECL|net_nbuf_linear_copy|function|int net_nbuf_linear_copy(struct net_buf *dst, struct net_buf *src, uint16_t offset, uint16_t len)
DECL|net_nbuf_print_frags|function|void net_nbuf_print_frags(struct net_buf *buf)
DECL|net_nbuf_print|function|void net_nbuf_print(void)
DECL|net_nbuf_pull|function|struct net_buf *net_nbuf_pull(struct net_buf *buf, size_t amount)
DECL|net_nbuf_read_be16|function|struct net_buf *net_nbuf_read_be16(struct net_buf *buf, uint16_t offset, uint16_t *pos, uint16_t *value)
DECL|net_nbuf_read_be32|function|struct net_buf *net_nbuf_read_be32(struct net_buf *buf, uint16_t offset, uint16_t *pos, uint32_t *value)
DECL|net_nbuf_read_byte|function|static inline struct net_buf *net_nbuf_read_byte(struct net_buf *buf, uint16_t offset, uint16_t *pos, uint8_t *data)
DECL|net_nbuf_read|function|struct net_buf *net_nbuf_read(struct net_buf *buf, uint16_t offset, uint16_t *pos, uint16_t len, uint8_t *data)
DECL|net_nbuf_ref_debug|function|struct net_buf *net_nbuf_ref_debug(struct net_buf *buf, const char *caller, int line) #else struct net_buf *net_nbuf_ref(struct net_buf *buf) #endif /* CONFIG_NET_DEBUG_NET_BUF */
DECL|net_nbuf_unref_debug|function|void net_nbuf_unref_debug(struct net_buf *buf, const char *caller, int line)
DECL|net_nbuf_write|function|struct net_buf *net_nbuf_write(struct net_buf *buf, struct net_buf *frag, uint16_t offset, uint16_t *pos, uint16_t len, uint8_t *data, int32_t timeout)
DECL|pool2str|function|static inline const char *pool2str(struct net_buf_pool *pool)
