DECL|APP_PROTO_LEN|macro|APP_PROTO_LEN
DECL|APP_PROTO_LEN|macro|APP_PROTO_LEN
DECL|APP_PROTO_LEN|macro|APP_PROTO_LEN
DECL|EXTRA_PROTO_LEN|macro|EXTRA_PROTO_LEN
DECL|IP_PROTO_LEN|macro|IP_PROTO_LEN
DECL|IP_PROTO_LEN|macro|IP_PROTO_LEN
DECL|MAX_NBUF_ALLOCS|macro|MAX_NBUF_ALLOCS
DECL|NBUF_DATA_LEN|macro|NBUF_DATA_LEN
DECL|NBUF_RX_COUNT|macro|NBUF_RX_COUNT
DECL|NBUF_RX_DATA_COUNT|macro|NBUF_RX_DATA_COUNT
DECL|NBUF_TX_COUNT|macro|NBUF_TX_COUNT
DECL|NBUF_TX_DATA_COUNT|macro|NBUF_TX_DATA_COUNT
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
DECL|buf|member|struct net_buf *buf;
DECL|check_and_create_data|function|static inline struct net_buf *check_and_create_data(struct net_buf *buf, struct net_buf *data, int32_t timeout)
DECL|func_alloc|member|const char *func_alloc;
DECL|func_free|member|const char *func_free;
DECL|get_data_pool|function|static inline struct net_buf_pool *get_data_pool(struct net_context *context)
DECL|get_data_pool|macro|get_data_pool
DECL|get_frees|function|static inline int16_t get_frees(struct net_buf_pool *pool)
DECL|get_tx_pool|function|static inline struct net_buf_pool *get_tx_pool(struct net_context *context)
DECL|get_tx_pool|macro|get_tx_pool
DECL|in_use|member|uint8_t in_use;
DECL|insert_data|function|static inline bool insert_data(struct net_buf *buf, struct net_buf *frag, struct net_buf *temp, uint16_t offset, uint16_t len, uint8_t *data, int32_t timeout)
DECL|is_data_pool|function|static inline bool is_data_pool(struct net_buf_pool *pool)
DECL|is_external_pool|function|static inline bool is_external_pool(struct net_buf_pool *pool)
DECL|is_from_data_pool|function|static inline bool is_from_data_pool(struct net_buf *buf)
DECL|line_alloc|member|uint16_t line_alloc;
DECL|line_free|member|uint16_t line_free;
DECL|nbuf_alloc_add|function|static bool nbuf_alloc_add(struct net_buf *buf, const char *func, int line)
DECL|nbuf_alloc_del|function|static bool nbuf_alloc_del(struct net_buf *buf, const char *func, int line)
DECL|nbuf_alloc_find|function|static bool nbuf_alloc_find(struct net_buf *buf, const char **func_free, int *line_free)
DECL|nbuf_allocs|variable|nbuf_allocs
DECL|nbuf_alloc|struct|struct nbuf_alloc {
DECL|net_nbuf_allocs_foreach|function|void net_nbuf_allocs_foreach(net_nbuf_allocs_cb_t cb, void *user_data)
DECL|net_nbuf_append_bytes|function|static inline bool net_nbuf_append_bytes(struct net_buf *buf, const uint8_t *value, uint16_t len, int32_t timeout)
DECL|net_nbuf_append|function|bool net_nbuf_append(struct net_buf *buf, uint16_t len, const uint8_t *data, int32_t timeout)
DECL|net_nbuf_compact|function|bool net_nbuf_compact(struct net_buf *buf)
DECL|net_nbuf_copy|function|struct net_buf *net_nbuf_copy(struct net_buf *buf, size_t amount, size_t reserve, int32_t timeout)
DECL|net_nbuf_frag_del_debug|function|struct net_buf *net_nbuf_frag_del_debug(struct net_buf *parent,struct net_buf *frag, const char *caller, int line) #else struct net_buf *net_nbuf_frag_del(struct net_buf *parent,
DECL|net_nbuf_get_data_debug|function|struct net_buf *net_nbuf_get_data_debug(struct net_context *context,int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_data|function|struct net_buf *net_nbuf_get_data(struct net_context *context, int32_t timeout)
DECL|net_nbuf_get_debug|function|static struct net_buf *net_nbuf_get_debug(struct net_buf_pool *pool, struct net_context *context, int32_t timeout, const char *caller, int line) #else
DECL|net_nbuf_get_frag_debug|function|struct net_buf *net_nbuf_get_frag_debug(struct net_buf *buf,int32_t timeout, const char *caller, int line) #else struct net_buf *net_nbuf_get_frag(struct net_buf *buf,
DECL|net_nbuf_get_info|function|void net_nbuf_get_info(struct net_buf_pool **rx, struct net_buf_pool **tx, struct net_buf_pool **rx_data, struct net_buf_pool **tx_data)
DECL|net_nbuf_get_reserve_debug|function|struct net_buf *net_nbuf_get_reserve_debug(struct net_buf_pool *pool, uint16_t reserve_head, int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_reserve_rx_data_debug|function|struct net_buf *net_nbuf_get_reserve_rx_data_debug(uint16_t reserve_head, int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_reserve_rx_data|function|struct net_buf *net_nbuf_get_reserve_rx_data(uint16_t reserve_head, int32_t timeout)
DECL|net_nbuf_get_reserve_rx_debug|function|struct net_buf *net_nbuf_get_reserve_rx_debug(uint16_t reserve_head, int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_reserve_rx|function|struct net_buf *net_nbuf_get_reserve_rx(uint16_t reserve_head,int32_t timeout)
DECL|net_nbuf_get_reserve_tx_data_debug|function|struct net_buf *net_nbuf_get_reserve_tx_data_debug(uint16_t reserve_head, int32_t timeout, const char *caller, int line)
DECL|net_nbuf_get_reserve_tx_data|function|struct net_buf *net_nbuf_get_reserve_tx_data(uint16_t reserve_head, int32_t timeout)
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
DECL|net_nbuf_pool2str|function|const char *net_nbuf_pool2str(struct net_buf_pool *pool)
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
