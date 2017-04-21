DECL|ANS_TTL_SIZE|macro|ANS_TTL_SIZE
DECL|DNAME1|macro|DNAME1
DECL|DNS_HEADER_SIZE|macro|DNS_HEADER_SIZE
DECL|INT_SIZE|macro|INT_SIZE
DECL|MAX_BUF_SIZE|macro|MAX_BUF_SIZE
DECL|NAME_PTR_SIZE|macro|NAME_PTR_SIZE
DECL|RESPONSE_MIN_SIZE|macro|RESPONSE_MIN_SIZE
DECL|ancount|member|u8_t ancount;
DECL|answer_type|member|u8_t answer_type;
DECL|buf_len|variable|buf_len
DECL|buf|variable|buf
DECL|dname|member|const char *dname;
DECL|dns_response_test|struct|struct dns_response_test {
DECL|eval_query|function|static int eval_query(const char *dname, u16_t tid, enum dns_rr_type type, u8_t *expected, u16_t expected_len)
DECL|eval_response1|function|static int eval_response1(struct dns_response_test *resp)
DECL|qname_len|variable|qname_len
DECL|qname|variable|qname
DECL|query_ipv4|variable|query_ipv4
DECL|ra|member|u8_t ra;
DECL|rdata|member|const u8_t *rdata;
DECL|rdlen|member|u8_t rdlen;
DECL|res_len|member|u16_t res_len;
DECL|resp_ipv4_addr|variable|resp_ipv4_addr
DECL|resp_ipv4|variable|resp_ipv4
DECL|res|member|u8_t *res;
DECL|test_dns_query|function|void test_dns_query(void)
DECL|test_dns_response|function|void test_dns_response(void)
DECL|test_main|function|void test_main(void)
DECL|tid1|variable|tid1
DECL|tid|member|u16_t tid;
DECL|ttl|member|u32_t ttl;
