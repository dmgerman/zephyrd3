DECL|DNS_ANCOUNT_LEN|macro|DNS_ANCOUNT_LEN
DECL|DNS_ANSWER_MIN_SIZE|macro|DNS_ANSWER_MIN_SIZE
DECL|DNS_ARCOUNT_LEN|macro|DNS_ARCOUNT_LEN
DECL|DNS_COMMON_UINT_SIZE|macro|DNS_COMMON_UINT_SIZE
DECL|DNS_FLAGS1|macro|DNS_FLAGS1
DECL|DNS_FLAGS2|macro|DNS_FLAGS2
DECL|DNS_HEADER_FLAGS_LEN|macro|DNS_HEADER_FLAGS_LEN
DECL|DNS_HEADER_ID_LEN|macro|DNS_HEADER_ID_LEN
DECL|DNS_LABEL_LEN_SIZE|macro|DNS_LABEL_LEN_SIZE
DECL|DNS_LABEL_MAX_SIZE|macro|DNS_LABEL_MAX_SIZE
DECL|DNS_NSCOUNT_LEN|macro|DNS_NSCOUNT_LEN
DECL|DNS_QCLASS_LEN|macro|DNS_QCLASS_LEN
DECL|DNS_QDCOUNT_LEN|macro|DNS_QDCOUNT_LEN
DECL|DNS_QTYPE_LEN|macro|DNS_QTYPE_LEN
DECL|DNS_RECURSION|macro|DNS_RECURSION
DECL|NS_CMPRSFLGS|macro|NS_CMPRSFLGS
DECL|dns_copy_qname|function|int dns_copy_qname(u8_t *buf, u16_t *len, u16_t size, struct dns_msg_t *dns_msg, u16_t pos)
DECL|dns_find_null|function|static int dns_find_null(int *qname_size, u8_t *buf, u16_t size)
DECL|dns_msg_pack_qname|function|int dns_msg_pack_qname(u16_t *len, u8_t *buf, u16_t size, const char *domain_name)
DECL|dns_msg_pack_query_header|function|static int dns_msg_pack_query_header(u8_t *buf, u16_t size, u16_t id)
DECL|dns_msg_pack_query|function|int dns_msg_pack_query(u8_t *buf, u16_t *len, u16_t size, u8_t *qname, u16_t qname_len, u16_t id, enum dns_rr_type qtype)
DECL|dns_strlen|function|static inline u16_t dns_strlen(const char *str)
DECL|dns_unpack_answer|function|int dns_unpack_answer(struct dns_msg_t *dns_msg, int dname_ptr, u32_t *ttl)
DECL|dns_unpack_name|function|static int dns_unpack_name(const u8_t *msg, int maxlen, const u8_t *src, struct net_buf *buf, const u8_t **eol)
DECL|dns_unpack_query|function|int dns_unpack_query(struct dns_msg_t *dns_msg, struct net_buf *buf, enum dns_rr_type *qtype, enum dns_class *qclass)
DECL|dns_unpack_response_header|function|int dns_unpack_response_header(struct dns_msg_t *msg, int src_id)
DECL|dns_unpack_response_query|function|int dns_unpack_response_query(struct dns_msg_t *dns_msg)
DECL|mdns_unpack_query_header|function|int mdns_unpack_query_header(struct dns_msg_t *msg, u16_t *src_id)
DECL|set_dns_msg_response|function|static inline void set_dns_msg_response(struct dns_msg_t *dns_msg, int type,u16_t pos, u16_t len)
