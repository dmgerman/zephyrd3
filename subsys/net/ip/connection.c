DECL|NET_CONN_IN_USE|macro|NET_CONN_IN_USE
DECL|NET_CONN_LOCAL_ADDR_SET|macro|NET_CONN_LOCAL_ADDR_SET
DECL|NET_CONN_REMOTE_ADDR_SET|macro|NET_CONN_REMOTE_ADDR_SET
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_RANK_LOCAL_PORT|macro|NET_RANK_LOCAL_PORT
DECL|NET_RANK_LOCAL_SPEC_ADDR|macro|NET_RANK_LOCAL_SPEC_ADDR
DECL|NET_RANK_LOCAL_UNSPEC_ADDR|macro|NET_RANK_LOCAL_UNSPEC_ADDR
DECL|NET_RANK_REMOTE_PORT|macro|NET_RANK_REMOTE_PORT
DECL|NET_RANK_REMOTE_SPEC_ADDR|macro|NET_RANK_REMOTE_SPEC_ADDR
DECL|NET_RANK_REMOTE_UNSPEC_ADDR|macro|NET_RANK_REMOTE_UNSPEC_ADDR
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|TAKE_BIT|macro|TAKE_BIT
DECL|cache_add_neg|function|static inline void cache_add_neg(u32_t cache_value)
DECL|cache_add_neg|macro|cache_add_neg
DECL|cache_check_neg|function|static inline bool cache_check_neg(u32_t cache_value)
DECL|cache_check|function|static inline enum net_verdict cache_check(enum net_ip_protocol proto, struct net_pkt *pkt, u32_t *cache_value, s32_t *pos)
DECL|cache_check|macro|cache_check
DECL|cache_clear|function|static void cache_clear(void)
DECL|cache_clear|macro|cache_clear
DECL|cache_remove|function|static inline void cache_remove(struct net_conn *conn)
DECL|cache_remove|macro|cache_remove
DECL|check_addr|function|static bool check_addr(struct net_pkt *pkt, struct sockaddr *addr, bool is_remote)
DECL|check_hash|function|static s32_t check_hash(enum net_ip_protocol proto, sa_family_t family, void *remote_addr, void *local_addr, u16_t remote_port,
DECL|conn_cache_neg|variable|conn_cache_neg
DECL|conn_cache|variable|conn_cache
DECL|conn_hash_neg|struct|struct conn_hash_neg {
DECL|conn_hash|struct|struct conn_hash {
DECL|conns|variable|conns
DECL|find_conn_handler|function|static int find_conn_handler(enum net_ip_protocol proto, const struct sockaddr *remote_addr, const struct sockaddr *local_addr, u16_t remote_port, u16_t local_port)
DECL|get_conn|function|static inline s32_t get_conn(enum net_ip_protocol proto, sa_family_t family, struct net_pkt *pkt, u32_t *cache_value)
DECL|idx|member|s32_t idx;
DECL|ipv4_to_hash|function|static inline u16_t ipv4_to_hash(struct in_addr *addr)
DECL|ipv6_to_hash|function|static inline u16_t ipv6_to_hash(struct in6_addr *addr)
DECL|is_invalid_packet|function|static bool is_invalid_packet(struct net_pkt *pkt, u16_t src_port, u16_t dst_port)
DECL|net_conn_change_callback|function|int net_conn_change_callback(struct net_conn_handle *handle, net_conn_cb_t cb, void *user_data)
DECL|net_conn_foreach|function|void net_conn_foreach(net_conn_foreach_cb_t cb, void *user_data)
DECL|net_conn_init|function|void net_conn_init(void)
DECL|net_conn_input|function|enum net_verdict net_conn_input(enum net_ip_protocol proto, struct net_pkt *pkt)
DECL|net_conn_register|function|int net_conn_register(enum net_ip_protocol proto, const struct sockaddr *remote_addr, const struct sockaddr *local_addr, u16_t remote_port, u16_t local_port,
DECL|net_conn_unregister|function|int net_conn_unregister(struct net_conn_handle *handle)
DECL|ports_to_hash|function|static inline u8_t ports_to_hash(u16_t remote_port, u16_t local_port)
DECL|prepare_register_debug_print|function|void prepare_register_debug_print(char *dst, int dst_len, char *src, int src_len, const struct sockaddr *remote_addr, const struct sockaddr *local_addr)
DECL|send_icmp_error|function|static inline void send_icmp_error(struct net_pkt *pkt)
DECL|value|member|u32_t value;
DECL|value|member|u32_t value;
