DECL|DNS_CLASS_INVALID|enumerator|DNS_CLASS_INVALID = 0,
DECL|DNS_CLASS_IN|enumerator|DNS_CLASS_IN,
DECL|DNS_HEADER_FORMATERROR|enumerator|DNS_HEADER_FORMATERROR,
DECL|DNS_HEADER_NAMEERROR|enumerator|DNS_HEADER_NAMEERROR,
DECL|DNS_HEADER_NOERROR|enumerator|DNS_HEADER_NOERROR = 0,
DECL|DNS_HEADER_NOTIMPLEMENTED|enumerator|DNS_HEADER_NOTIMPLEMENTED,
DECL|DNS_HEADER_REFUSED|enumerator|DNS_HEADER_REFUSED
DECL|DNS_HEADER_SERVERFAILURE|enumerator|DNS_HEADER_SERVERFAILURE,
DECL|DNS_MSG_HEADER_SIZE|macro|DNS_MSG_HEADER_SIZE
DECL|DNS_MSG_INIT|macro|DNS_MSG_INIT
DECL|DNS_QUERY|enumerator|DNS_QUERY = 0,
DECL|DNS_RESPONSE_CNAME_NO_IP|enumerator|DNS_RESPONSE_CNAME_NO_IP
DECL|DNS_RESPONSE_CNAME_WITH_IP|enumerator|DNS_RESPONSE_CNAME_WITH_IP,
DECL|DNS_RESPONSE_INVALID|enumerator|DNS_RESPONSE_INVALID = -EINVAL,
DECL|DNS_RESPONSE_IP|enumerator|DNS_RESPONSE_IP,
DECL|DNS_RESPONSE|enumerator|DNS_RESPONSE
DECL|DNS_RR_TYPE_AAAA|enumerator|DNS_RR_TYPE_AAAA = 28 /* IPv6 */
DECL|DNS_RR_TYPE_A|enumerator|DNS_RR_TYPE_A = 1, /* IPv4 */
DECL|DNS_RR_TYPE_CNAME|enumerator|DNS_RR_TYPE_CNAME = 5, /* CNAME */
DECL|DNS_RR_TYPE_INVALID|enumerator|DNS_RR_TYPE_INVALID = 0,
DECL|_DNS_PACK_H_|macro|_DNS_PACK_H_
DECL|answer_offset|member|int answer_offset;
DECL|cname_offset|member|int cname_offset;
DECL|dns_answer_class|function|static inline int dns_answer_class(int dname_size, uint8_t *answer)
DECL|dns_answer_rdlength|function|static inline int dns_answer_rdlength(int dname_size, uint8_t *answer)
DECL|dns_answer_ttl|function|static inline int dns_answer_ttl(int dname_size, uint8_t *answer)
DECL|dns_class|enum|enum dns_class {
DECL|dns_header_aa|function|static inline int dns_header_aa(uint8_t *header)
DECL|dns_header_ancount|function|static inline int dns_header_ancount(uint8_t *header)
DECL|dns_header_arcount|function|static inline int dns_header_arcount(uint8_t *header)
DECL|dns_header_id|function|static inline int dns_header_id(uint8_t *header)
DECL|dns_header_nscount|function|static inline int dns_header_nscount(uint8_t *header)
DECL|dns_header_opcode|function|static inline int dns_header_opcode(uint8_t *header)
DECL|dns_header_qdcount|function|static inline int dns_header_qdcount(uint8_t *header)
DECL|dns_header_qr|function|static inline int dns_header_qr(uint8_t *header)
DECL|dns_header_ra|function|static inline int dns_header_ra(uint8_t *header)
DECL|dns_header_rcode|enum|enum dns_header_rcode {
DECL|dns_header_rcode|function|static inline int dns_header_rcode(uint8_t *header)
DECL|dns_header_rd|function|static inline int dns_header_rd(uint8_t *header)
DECL|dns_header_tc|function|static inline int dns_header_tc(uint8_t *header)
DECL|dns_header_z|function|static inline int dns_header_z(uint8_t *header)
DECL|dns_msg_type|enum|enum dns_msg_type {
DECL|dns_msg_t|struct|struct dns_msg_t {
DECL|dns_query_qclass|function|static inline int dns_query_qclass(uint8_t *question)
DECL|dns_query_qtype|function|static inline int dns_query_qtype(uint8_t *question)
DECL|dns_response_type|enum|enum dns_response_type {
DECL|dns_response_type|function|static inline int dns_response_type(int dname_size, uint8_t *answer)
DECL|dns_rr_type|enum|enum dns_rr_type {
DECL|dns_unpack_answer_rdlength|function|static inline int dns_unpack_answer_rdlength(int dname_size, uint8_t *answer)
DECL|dns_unpack_header_ancount|function|static inline int dns_unpack_header_ancount(uint8_t *header)
DECL|dns_unpack_header_id|function|static inline int dns_unpack_header_id(uint8_t *header)
DECL|dns_unpack_header_qdcount|function|static inline int dns_unpack_header_qdcount(uint8_t *header)
DECL|dns_unpack_query_qclass|function|static inline int dns_unpack_query_qclass(uint8_t *question)
DECL|dns_unpack_query_qtype|function|static inline int dns_unpack_query_qtype(uint8_t *question)
DECL|msg_size|member|size_t msg_size;
DECL|msg|member|uint8_t *msg;
DECL|query_offset|member|int query_offset;
DECL|response_length|member|int response_length;
DECL|response_position|member|int response_position;
DECL|response_type|member|int response_type;
