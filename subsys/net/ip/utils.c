DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|calc_chksum_buf|function|static inline uint16_t calc_chksum_buf(uint16_t sum, struct net_buf *buf, uint16_t upper_layer_len)
DECL|calc_chksum|function|static uint16_t calc_chksum(uint16_t sum, const uint8_t *ptr, uint16_t len)
DECL|net_addr_pton|function|int net_addr_pton(sa_family_t family, const char *src, struct sockaddr *dst)
DECL|net_byte_to_hex|function|char *net_byte_to_hex(uint8_t *ptr, uint8_t byte, char base, bool pad)
DECL|net_calc_chksum_ipv4|function|uint16_t net_calc_chksum_ipv4(struct net_buf *buf)
DECL|net_calc_chksum|function|uint16_t net_calc_chksum(struct net_buf *buf, uint8_t proto)
DECL|net_sprint_ip_addr_buf|function|char *net_sprint_ip_addr_buf(const uint8_t *ip, int ip_len, char *buf, int buflen)
DECL|net_sprint_ll_addr_buf|function|char *net_sprint_ll_addr_buf(const uint8_t *ll, uint8_t ll_len, char *buf, int buflen)
DECL|net_value_to_udec|function|static int net_value_to_udec(char *buf, uint32_t value, int precision)
