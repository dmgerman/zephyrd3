DECL|UF_FRAGMENT|enumerator|, UF_FRAGMENT = 5
DECL|UF_HOST|enumerator|, UF_HOST = 1
DECL|UF_MAX|enumerator|, UF_MAX = 7
DECL|UF_PATH|enumerator|, UF_PATH = 3
DECL|UF_PORT|enumerator|, UF_PORT = 2
DECL|UF_QUERY|enumerator|, UF_QUERY = 4
DECL|UF_SCHEMA|enumerator|UF_SCHEMA = 0
DECL|UF_USERINFO|enumerator|, UF_USERINFO = 6
DECL|ZEPHYR_INCLUDE_NET_HTTP_PARSER_URL_H_|macro|ZEPHYR_INCLUDE_NET_HTTP_PARSER_URL_H_
DECL|field_data|member|} field_data[UF_MAX];
DECL|field_set|member|u16_t field_set; /* Bitmask of (1 << UF_*) values */
DECL|http_parser_url_fields|enum|enum http_parser_url_fields {
DECL|http_parser_url|struct|struct http_parser_url {
DECL|len|member|u16_t len; /* Length of run in buffer */
DECL|off|member|u16_t off; /* Offset into buffer in which field
DECL|port|member|u16_t port; /* Converted UF_PORT string */
