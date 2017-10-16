DECL|BIT_AT|macro|BIT_AT
DECL|IS_ALPHANUM|macro|IS_ALPHANUM
DECL|IS_ALPHA|macro|IS_ALPHA
DECL|IS_HEX|macro|IS_HEX
DECL|IS_HOST_CHAR|macro|IS_HOST_CHAR
DECL|IS_HOST_CHAR|macro|IS_HOST_CHAR
DECL|IS_MARK|macro|IS_MARK
DECL|IS_NUM|macro|IS_NUM
DECL|IS_URL_CHAR|macro|IS_URL_CHAR
DECL|IS_URL_CHAR|macro|IS_URL_CHAR
DECL|IS_USERINFO_CHAR|macro|IS_USERINFO_CHAR
DECL|LOWER|macro|LOWER
DECL|MARK|macro|MARK
DECL|T|macro|T
DECL|T|macro|T
DECL|T|macro|T
DECL|http_host_state|enum|enum http_host_state {
DECL|http_parse_host_char|function|http_parse_host_char(enum http_host_state s, const char ch)
DECL|http_parse_host|function|int http_parse_host(const char *buf, struct http_parser_url *u, int found_at)
DECL|http_parser_parse_url|function|http_parser_parse_url(const char *buf, size_t buflen, int is_connect, struct http_parser_url *u)
DECL|http_parser_url_init|function|http_parser_url_init(struct http_parser_url *u)
DECL|normal_url_char|variable|normal_url_char
DECL|parse_url_char|function|enum state parse_url_char(enum state s, const char ch)
DECL|s_http_host_dead|enumerator|s_http_host_dead = 1,
DECL|s_http_host_port_start|enumerator|s_http_host_port_start,
DECL|s_http_host_port|enumerator|s_http_host_port
DECL|s_http_host_start|enumerator|s_http_host_start,
DECL|s_http_host_v6_end|enumerator|s_http_host_v6_end,
DECL|s_http_host_v6_start|enumerator|s_http_host_v6_start,
DECL|s_http_host_v6_zone_start|enumerator|s_http_host_v6_zone_start,
DECL|s_http_host_v6_zone|enumerator|s_http_host_v6_zone,
DECL|s_http_host_v6|enumerator|s_http_host_v6,
DECL|s_http_host|enumerator|s_http_host,
DECL|s_http_userinfo_start|enumerator|s_http_userinfo_start,
DECL|s_http_userinfo|enumerator|s_http_userinfo,
