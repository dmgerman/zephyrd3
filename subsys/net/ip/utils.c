DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NBUFS|macro|NBUFS
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|calc_chksum_pkt|function|static inline u16_t calc_chksum_pkt(u16_t sum, struct net_pkt *pkt, u16_t upper_layer_len)
DECL|calc_chksum|function|static u16_t calc_chksum(u16_t sum, const u8_t *ptr, u16_t len)
DECL|convert_port|function|static bool convert_port(const char *buf, u16_t *port)
DECL|net_addr_ntop|function|char *net_addr_ntop(sa_family_t family, const void *src, char *dst, size_t size)
DECL|net_addr_pton|function|int net_addr_pton(sa_family_t family, const char *src, void *dst)
DECL|net_byte_to_hex|function|char *net_byte_to_hex(char *ptr, u8_t byte, char base, bool pad)
DECL|net_bytes_from_str|function|int net_bytes_from_str(u8_t *buf, int buf_len, const char *src)
DECL|net_calc_chksum_ipv4|function|u16_t net_calc_chksum_ipv4(struct net_pkt *pkt)
DECL|net_calc_chksum|function|u16_t net_calc_chksum(struct net_pkt *pkt, u8_t proto)
DECL|net_header_fits|function|bool net_header_fits(struct net_pkt *pkt, u8_t *hdr, size_t hdr_size)
DECL|net_ipaddr_parse|function|bool net_ipaddr_parse(const char *str, size_t str_len, struct sockaddr *addr)
DECL|net_proto2str|function|const char *net_proto2str(enum net_ip_protocol proto)
DECL|net_sprint_addr|function|char *net_sprint_addr(sa_family_t af, const void *addr)
DECL|net_sprint_ll_addr_buf|function|char *net_sprint_ll_addr_buf(const u8_t *ll, u8_t ll_len, char *buf, int buflen)
DECL|net_value_to_udec|function|static int net_value_to_udec(char *buf, u32_t value, int precision)
DECL|parse_ipv4|function|static bool parse_ipv4(const char *str, size_t str_len, struct sockaddr *addr, bool has_port)
DECL|parse_ipv6|function|static bool parse_ipv6(const char *str, size_t str_len, struct sockaddr *addr, bool has_port)
