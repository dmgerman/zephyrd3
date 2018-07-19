DECL|APP_PROTO_LEN|macro|APP_PROTO_LEN
DECL|APP_PROTO_LEN|macro|APP_PROTO_LEN
DECL|APP_PROTO_LEN|macro|APP_PROTO_LEN
DECL|EXTRA_PROTO_LEN|macro|EXTRA_PROTO_LEN
DECL|IP_PROTO_LEN|macro|IP_PROTO_LEN
DECL|IP_PROTO_LEN|macro|IP_PROTO_LEN
DECL|MAX_NET_PKT_ALLOCS|macro|MAX_NET_PKT_ALLOCS
DECL|NET_FRAG_CHECK_IF_NOT_IN_USE|macro|NET_FRAG_CHECK_IF_NOT_IN_USE
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|STRING2|macro|STRING2
DECL|STRING2|macro|STRING2
DECL|STRING|macro|STRING
DECL|STRING|macro|STRING
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|_pkt_get_data_debug|function|static struct net_buf *_pkt_get_data_debug(struct net_buf_pool *pool, struct net_context *context, s32_t timeout, const char *caller, int line) #else
DECL|adjust_insert_offset|function|static inline struct net_buf *adjust_insert_offset(struct net_buf *frag, u16_t offset, u16_t *pos)
DECL|adjust_offset|function|static inline struct net_buf *adjust_offset(struct net_buf *frag, u16_t offset, u16_t *pos)
DECL|adjust_write_offset|function|static inline struct net_buf *adjust_write_offset(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, u16_t *pos, s32_t timeout)
DECL|alloc_data|member|void *alloc_data;
DECL|buf|member|struct net_buf *buf;
DECL|check_and_create_data|function|static inline struct net_buf *check_and_create_data(struct net_pkt *pkt, struct net_buf *data, s32_t timeout)
DECL|func_alloc|member|const char *func_alloc;
DECL|func_free|member|const char *func_free;
DECL|get_data_pool|function|static inline struct net_buf_pool *get_data_pool(struct net_context *context)
DECL|get_data_pool|macro|get_data_pool
DECL|get_frees|function|static inline s16_t get_frees(struct net_buf_pool *pool)
DECL|get_tx_slab|function|static inline struct k_mem_slab *get_tx_slab(struct net_context *context)
DECL|get_tx_slab|macro|get_tx_slab
DECL|in_use|member|u8_t in_use;
DECL|insert_data|function|static inline bool insert_data(struct net_pkt *pkt, struct net_buf *frag, struct net_buf *temp, u16_t offset, u16_t len, u8_t *data, s32_t timeout)
DECL|is_pkt|member|bool is_pkt;
DECL|line_alloc|member|u16_t line_alloc;
DECL|line_free|member|u16_t line_free;
DECL|net_frag_get_pos|function|struct net_buf *net_frag_get_pos(struct net_pkt *pkt, u16_t offset, u16_t *pos)
DECL|net_frag_linear_copy|function|int net_frag_linear_copy(struct net_buf *dst, struct net_buf *src, u16_t offset, u16_t len)
DECL|net_frag_linearize|function|int net_frag_linearize(u8_t *dst, size_t dst_len, struct net_pkt *src, u16_t offset, u16_t len)
DECL|net_frag_read_be16|function|struct net_buf *net_frag_read_be16(struct net_buf *frag, u16_t offset, u16_t *pos, u16_t *value)
DECL|net_frag_read_be32|function|struct net_buf *net_frag_read_be32(struct net_buf *frag, u16_t offset, u16_t *pos, u32_t *value)
DECL|net_frag_read_byte|function|static inline struct net_buf *net_frag_read_byte(struct net_buf *frag, u16_t offset, u16_t *pos, u8_t *data)
DECL|net_frag_read|function|struct net_buf *net_frag_read(struct net_buf *frag, u16_t offset, u16_t *pos, u16_t len, u8_t *data)
DECL|net_pkt_alloc_add|function|static bool net_pkt_alloc_add(void *alloc_data, bool is_pkt, const char *func, int line)
DECL|net_pkt_alloc_del|function|static bool net_pkt_alloc_del(void *alloc_data, const char *func, int line)
DECL|net_pkt_alloc_find|function|static bool net_pkt_alloc_find(void *alloc_data, const char **func_free, int *line_free)
DECL|net_pkt_allocs_foreach|function|void net_pkt_allocs_foreach(net_pkt_allocs_cb_t cb, void *user_data)
DECL|net_pkt_allocs|variable|net_pkt_allocs
DECL|net_pkt_alloc|struct|struct net_pkt_alloc {
DECL|net_pkt_append_bytes|function|static inline u16_t net_pkt_append_bytes(struct net_pkt *pkt, const u8_t *value, u16_t len, s32_t timeout)
DECL|net_pkt_append|function|u16_t net_pkt_append(struct net_pkt *pkt, u16_t len, const u8_t *data, s32_t timeout)
DECL|net_pkt_clone|function|struct net_pkt *net_pkt_clone(struct net_pkt *pkt, s32_t timeout)
DECL|net_pkt_compact|function|bool net_pkt_compact(struct net_pkt *pkt)
DECL|net_pkt_copy|function|struct net_buf *net_pkt_copy(struct net_pkt *pkt, size_t amount, size_t reserve, s32_t timeout)
DECL|net_pkt_frag_add_debug|function|void net_pkt_frag_add_debug(struct net_pkt *pkt, struct net_buf *frag, const char *caller, int line) #else void net_pkt_frag_add(struct net_pkt *pkt, struct net_buf *frag) #endif
DECL|net_pkt_frag_del_debug|function|struct net_buf *net_pkt_frag_del_debug(struct net_pkt *pkt, struct net_buf *parent, struct net_buf *frag, const char *caller, int line) #else
DECL|net_pkt_frag_insert_debug|function|void net_pkt_frag_insert_debug(struct net_pkt *pkt, struct net_buf *frag, const char *caller, int line) #else void net_pkt_frag_insert(struct net_pkt *pkt, struct net_buf *frag) #endif
DECL|net_pkt_frag_ref_debug|function|struct net_buf *net_pkt_frag_ref_debug(struct net_buf *frag, const char *caller, int line) #else struct net_buf *net_pkt_frag_ref(struct net_buf *frag) #endif /* CONFIG_NET_DEBUG_NET_PKT */
DECL|net_pkt_frag_unref_debug|function|void net_pkt_frag_unref_debug(struct net_buf *frag, const char *caller, int line) #else void net_pkt_frag_unref(struct net_buf *frag) #endif /* CONFIG_NET_DEBUG_NET_PKT */
DECL|net_pkt_get_addr|function|static int net_pkt_get_addr(struct net_pkt *pkt, bool is_src, struct sockaddr *addr, socklen_t addrlen)
DECL|net_pkt_get_data_debug|function|struct net_buf *net_pkt_get_data_debug(struct net_context *context, s32_t timeout, const char *caller, int line)
DECL|net_pkt_get_data|function|struct net_buf *net_pkt_get_data(struct net_context *context, s32_t timeout)
DECL|net_pkt_get_debug|function|static struct net_pkt *net_pkt_get_debug(struct k_mem_slab *slab, struct net_context *context, s32_t timeout, const char *caller, int line) #else
DECL|net_pkt_get_dst_addr|function|int net_pkt_get_dst_addr(struct net_pkt *pkt, struct sockaddr *addr, socklen_t addrlen)
DECL|net_pkt_get_frag_debug|function|struct net_buf *net_pkt_get_frag_debug(struct net_pkt *pkt, s32_t timeout, const char *caller, int line) #else struct net_buf *net_pkt_get_frag(struct net_pkt *pkt,
DECL|net_pkt_get_info|function|void net_pkt_get_info(struct k_mem_slab **rx, struct k_mem_slab **tx, struct net_buf_pool **rx_data, struct net_buf_pool **tx_data)
DECL|net_pkt_get_reserve_data_debug|function|struct net_buf *net_pkt_get_reserve_data_debug(struct net_buf_pool *pool, u16_t reserve_head, s32_t timeout, const char *caller, int line)
DECL|net_pkt_get_reserve_debug|function|struct net_pkt *net_pkt_get_reserve_debug(struct k_mem_slab *slab, u16_t reserve_head, s32_t timeout, const char *caller, int line)
DECL|net_pkt_get_reserve_rx_data_debug|function|struct net_buf *net_pkt_get_reserve_rx_data_debug(u16_t reserve_head, s32_t timeout, const char *caller, int line)
DECL|net_pkt_get_reserve_rx_data|function|struct net_buf *net_pkt_get_reserve_rx_data(u16_t reserve_head, s32_t timeout)
DECL|net_pkt_get_reserve_rx_debug|function|struct net_pkt *net_pkt_get_reserve_rx_debug(u16_t reserve_head, s32_t timeout, const char *caller, int line)
DECL|net_pkt_get_reserve_rx|function|struct net_pkt *net_pkt_get_reserve_rx(u16_t reserve_head, s32_t timeout)
DECL|net_pkt_get_reserve_tx_data_debug|function|struct net_buf *net_pkt_get_reserve_tx_data_debug(u16_t reserve_head, s32_t timeout, const char *caller, int line)
DECL|net_pkt_get_reserve_tx_data|function|struct net_buf *net_pkt_get_reserve_tx_data(u16_t reserve_head, s32_t timeout)
DECL|net_pkt_get_reserve_tx_debug|function|struct net_pkt *net_pkt_get_reserve_tx_debug(u16_t reserve_head, s32_t timeout, const char *caller, int line)
DECL|net_pkt_get_reserve_tx|function|struct net_pkt *net_pkt_get_reserve_tx(u16_t reserve_head, s32_t timeout)
DECL|net_pkt_get_rx_debug|function|struct net_pkt *net_pkt_get_rx_debug(struct net_context *context, s32_t timeout, const char *caller, int line)
DECL|net_pkt_get_rx|function|struct net_pkt *net_pkt_get_rx(struct net_context *context, s32_t timeout)
DECL|net_pkt_get_src_addr|function|int net_pkt_get_src_addr(struct net_pkt *pkt, struct sockaddr *addr, socklen_t addrlen)
DECL|net_pkt_get_tx_debug|function|struct net_pkt *net_pkt_get_tx_debug(struct net_context *context, s32_t timeout, const char *caller, int line)
DECL|net_pkt_get_tx|function|struct net_pkt *net_pkt_get_tx(struct net_context *context, s32_t timeout)
DECL|net_pkt_icmp_data|function|struct net_icmp_hdr *net_pkt_icmp_data(struct net_pkt *pkt)
DECL|net_pkt_icmp_opt_data|function|u8_t *net_pkt_icmp_opt_data(struct net_pkt *pkt, size_t opt_len)
DECL|net_pkt_init|function|void net_pkt_init(void)
DECL|net_pkt_insert|function|bool net_pkt_insert(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, u16_t len, u8_t *data, s32_t timeout)
DECL|net_pkt_pool2str|function|const char *net_pkt_pool2str(struct net_buf_pool *pool)
DECL|net_pkt_print_frags|function|void net_pkt_print_frags(struct net_pkt *pkt)
DECL|net_pkt_print|function|void net_pkt_print(void)
DECL|net_pkt_pull|function|int net_pkt_pull(struct net_pkt *pkt, u16_t offset, u16_t len)
DECL|net_pkt_ref_debug|function|struct net_pkt *net_pkt_ref_debug(struct net_pkt *pkt, const char *caller, int line) #else struct net_pkt *net_pkt_ref(struct net_pkt *pkt) #endif /* CONFIG_NET_DEBUG_NET_PKT */
DECL|net_pkt_slab2str|function|const char *net_pkt_slab2str(struct k_mem_slab *slab)
DECL|net_pkt_split|function|int net_pkt_split(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, struct net_buf **rest, s32_t timeout)
DECL|net_pkt_tcp_data|function|struct net_tcp_hdr *net_pkt_tcp_data(struct net_pkt *pkt)
DECL|net_pkt_udp_data|function|struct net_udp_hdr *net_pkt_udp_data(struct net_pkt *pkt)
DECL|net_pkt_unref_debug|function|void net_pkt_unref_debug(struct net_pkt *pkt, const char *caller, int line)
DECL|net_pkt_write|function|struct net_buf *net_pkt_write(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, u16_t *pos, u16_t len, u8_t *data, s32_t timeout)
DECL|pkt|member|struct net_pkt *pkt;
DECL|pool2str|function|static inline const char *pool2str(struct net_buf_pool *pool)
DECL|slab2str|function|static inline const char *slab2str(struct k_mem_slab *slab)
DECL|too_short_msg|function|static void too_short_msg(char *msg, struct net_pkt *pkt, u16_t offset, size_t extra_len)
DECL|too_short_msg|macro|too_short_msg
