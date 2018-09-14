DECL|F_CHUNKED|enumerator|F_CHUNKED = 1 << 0,
DECL|F_CONNECTION_CLOSE|enumerator|F_CONNECTION_CLOSE = 1 << 2,
DECL|F_CONNECTION_KEEP_ALIVE|enumerator|F_CONNECTION_KEEP_ALIVE = 1 << 1,
DECL|F_CONNECTION_UPGRADE|enumerator|F_CONNECTION_UPGRADE = 1 << 3,
DECL|F_CONTENTLENGTH|enumerator|F_CONTENTLENGTH = 1 << 7
DECL|F_SKIPBODY|enumerator|F_SKIPBODY = 1 << 6,
DECL|F_TRAILING|enumerator|F_TRAILING = 1 << 4,
DECL|F_UPGRADE|enumerator|F_UPGRADE = 1 << 5,
DECL|HPE_CB_body|enumerator|HPE_CB_body,
DECL|HPE_CB_chunk_complete|enumerator|HPE_CB_chunk_complete,
DECL|HPE_CB_chunk_header|enumerator|HPE_CB_chunk_header,
DECL|HPE_CB_header_field|enumerator|HPE_CB_header_field,
DECL|HPE_CB_header_value|enumerator|HPE_CB_header_value,
DECL|HPE_CB_headers_complete|enumerator|HPE_CB_headers_complete,
DECL|HPE_CB_message_begin|enumerator|HPE_CB_message_begin,
DECL|HPE_CB_message_complete|enumerator|HPE_CB_message_complete,
DECL|HPE_CB_status|enumerator|HPE_CB_status,
DECL|HPE_CB_url|enumerator|HPE_CB_url,
DECL|HPE_CLOSED_CONNECTION|enumerator|HPE_CLOSED_CONNECTION,
DECL|HPE_HEADER_OVERFLOW|enumerator|HPE_HEADER_OVERFLOW,
DECL|HPE_INVALID_CHUNK_SIZE|enumerator|HPE_INVALID_CHUNK_SIZE,
DECL|HPE_INVALID_CONSTANT|enumerator|HPE_INVALID_CONSTANT,
DECL|HPE_INVALID_CONTENT_LENGTH|enumerator|HPE_INVALID_CONTENT_LENGTH,
DECL|HPE_INVALID_EOF_STATE|enumerator|HPE_INVALID_EOF_STATE,
DECL|HPE_INVALID_FRAGMENT|enumerator|HPE_INVALID_FRAGMENT,
DECL|HPE_INVALID_HEADER_TOKEN|enumerator|HPE_INVALID_HEADER_TOKEN,
DECL|HPE_INVALID_HOST|enumerator|HPE_INVALID_HOST,
DECL|HPE_INVALID_INTERNAL_STATE|enumerator|HPE_INVALID_INTERNAL_STATE,
DECL|HPE_INVALID_METHOD|enumerator|HPE_INVALID_METHOD,
DECL|HPE_INVALID_PATH|enumerator|HPE_INVALID_PATH,
DECL|HPE_INVALID_PORT|enumerator|HPE_INVALID_PORT,
DECL|HPE_INVALID_QUERY_STRING|enumerator|HPE_INVALID_QUERY_STRING,
DECL|HPE_INVALID_STATUS|enumerator|HPE_INVALID_STATUS,
DECL|HPE_INVALID_URL|enumerator|HPE_INVALID_URL,
DECL|HPE_INVALID_VERSION|enumerator|HPE_INVALID_VERSION,
DECL|HPE_LF_EXPECTED|enumerator|HPE_LF_EXPECTED,
DECL|HPE_OK|enumerator|HPE_OK,
DECL|HPE_PAUSED|enumerator|HPE_PAUSED,
DECL|HPE_STRICT|enumerator|HPE_STRICT,
DECL|HPE_UNEXPECTED_CONTENT_LENGTH|enumerator|HPE_UNEXPECTED_CONTENT_LENGTH,
DECL|HPE_UNKNOWN|enumerator|HPE_UNKNOWN
DECL|HTTP_ACL|enumerator|HTTP_ACL = 19,
DECL|HTTP_BIND|enumerator|HTTP_BIND = 16,
DECL|HTTP_BOTH|enumerator|enum http_parser_type { HTTP_REQUEST, HTTP_RESPONSE, HTTP_BOTH };
DECL|HTTP_CHECKOUT|enumerator|HTTP_CHECKOUT = 22,
DECL|HTTP_CONNECT|enumerator|HTTP_CONNECT = 5,
DECL|HTTP_COPY|enumerator|HTTP_COPY = 8,
DECL|HTTP_DELETE|enumerator|HTTP_DELETE = 0,
DECL|HTTP_GET|enumerator|HTTP_GET = 1,
DECL|HTTP_HEAD|enumerator|HTTP_HEAD = 2,
DECL|HTTP_LINK|enumerator|HTTP_LINK = 31,
DECL|HTTP_LOCK|enumerator|HTTP_LOCK = 9,
DECL|HTTP_MAX_HEADER_SIZE|macro|HTTP_MAX_HEADER_SIZE
DECL|HTTP_MERGE|enumerator|HTTP_MERGE = 23,
DECL|HTTP_MKACTIVITY|enumerator|HTTP_MKACTIVITY = 21,
DECL|HTTP_MKCALENDAR|enumerator|HTTP_MKCALENDAR = 30,
DECL|HTTP_MKCOL|enumerator|HTTP_MKCOL = 10,
DECL|HTTP_MOVE|enumerator|HTTP_MOVE = 11,
DECL|HTTP_MSEARCH|enumerator|HTTP_MSEARCH = 24,
DECL|HTTP_NOTIFY|enumerator|HTTP_NOTIFY = 25,
DECL|HTTP_OPTIONS|enumerator|HTTP_OPTIONS = 6,
DECL|HTTP_PARSER_ERRNO|macro|HTTP_PARSER_ERRNO
DECL|HTTP_PARSER_VERSION_MAJOR|macro|HTTP_PARSER_VERSION_MAJOR
DECL|HTTP_PARSER_VERSION_MINOR|macro|HTTP_PARSER_VERSION_MINOR
DECL|HTTP_PARSER_VERSION_PATCH|macro|HTTP_PARSER_VERSION_PATCH
DECL|HTTP_PATCH|enumerator|HTTP_PATCH = 28,
DECL|HTTP_POST|enumerator|HTTP_POST = 3,
DECL|HTTP_PROPFIND|enumerator|HTTP_PROPFIND = 12,
DECL|HTTP_PROPPATCH|enumerator|HTTP_PROPPATCH = 13,
DECL|HTTP_PURGE|enumerator|HTTP_PURGE = 29,
DECL|HTTP_PUT|enumerator|HTTP_PUT = 4,
DECL|HTTP_REBIND|enumerator|HTTP_REBIND = 17,
DECL|HTTP_REPORT|enumerator|HTTP_REPORT = 20,
DECL|HTTP_REQUEST|enumerator|enum http_parser_type { HTTP_REQUEST, HTTP_RESPONSE, HTTP_BOTH };
DECL|HTTP_RESPONSE|enumerator|enum http_parser_type { HTTP_REQUEST, HTTP_RESPONSE, HTTP_BOTH };
DECL|HTTP_SEARCH|enumerator|HTTP_SEARCH = 14,
DECL|HTTP_SUBSCRIBE|enumerator|HTTP_SUBSCRIBE = 26,
DECL|HTTP_TRACE|enumerator|HTTP_TRACE = 7,
DECL|HTTP_UNBIND|enumerator|HTTP_UNBIND = 18,
DECL|HTTP_UNLINK|enumerator|HTTP_UNLINK = 32
DECL|HTTP_UNLOCK|enumerator|HTTP_UNLOCK = 15,
DECL|HTTP_UNSUBSCRIBE|enumerator|HTTP_UNSUBSCRIBE = 27,
DECL|ZEPHYR_INCLUDE_NET_HTTP_PARSER_H_|macro|ZEPHYR_INCLUDE_NET_HTTP_PARSER_H_
DECL|addr|member|const struct sockaddr *addr;
DECL|content_length|member|u64_t content_length; /* # bytes in body (0 if no Content-Length
DECL|data|member|void *data; /* A pointer to get hook to the "connection" or "socket"
DECL|flags|enum|enum flags {
DECL|flags|member|unsigned int flags : 8; /* F_xxx values from 'flags' enum;
DECL|header_state|member|unsigned int header_state : 7; /* enum header_state from http_parser.c
DECL|http_cb|typedef|typedef int (*http_cb)(struct http_parser *);
DECL|http_data_cb|typedef|typedef int (*http_data_cb)(struct http_parser *, const char *at,
DECL|http_errno|enum|enum http_errno {
DECL|http_errno|member|unsigned int http_errno : 7;
DECL|http_major|member|unsigned short http_major;
DECL|http_method|enum|enum http_method {
DECL|http_minor|member|unsigned short http_minor;
DECL|http_parser_settings|struct|struct http_parser_settings {
DECL|http_parser_type|enum|enum http_parser_type { HTTP_REQUEST, HTTP_RESPONSE, HTTP_BOTH };
DECL|http_parser|struct|struct http_parser {
DECL|index|member|unsigned int index : 7; /* index into current matcher */
DECL|lenient_http_headers|member|unsigned int lenient_http_headers : 1;
DECL|method|member|unsigned int method : 8; /* requests only */
DECL|nread|member|u32_t nread; /* # bytes read in various scenarios */
DECL|on_body|member|http_data_cb on_body;
DECL|on_chunk_complete|member|http_cb on_chunk_complete;
DECL|on_chunk_header|member|http_cb on_chunk_header;
DECL|on_header_field|member|http_data_cb on_header_field;
DECL|on_header_value|member|http_data_cb on_header_value;
DECL|on_headers_complete|member|http_cb on_headers_complete;
DECL|on_message_begin|member|http_cb on_message_begin;
DECL|on_message_complete|member|http_cb on_message_complete;
DECL|on_status|member|http_data_cb on_status;
DECL|on_url|member|http_data_cb on_url;
DECL|s16_t|typedef|typedef __int16 s16_t;
DECL|s32_t|typedef|typedef __int32 s32_t;
DECL|s64_t|typedef|typedef __int64 s64_t;
DECL|s8_t|typedef|typedef __int8 s8_t;
DECL|state|member|unsigned int state : 7; /* enum state from http_parser.c */
DECL|status_code|member|unsigned int status_code : 16; /* responses only */
DECL|type|member|unsigned int type : 2; /* enum http_parser_type */
DECL|u16_t|typedef|typedef unsigned __int16 u16_t;
DECL|u32_t|typedef|typedef unsigned __int32 u32_t;
DECL|u64_t|typedef|typedef unsigned __int64 u64_t;
DECL|u8_t|typedef|typedef unsigned __int8 u8_t;
DECL|upgrade|member|unsigned int upgrade : 1;
