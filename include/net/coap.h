DECL|COAP_BLOCK_1024|enumerator|COAP_BLOCK_1024,
DECL|COAP_BLOCK_128|enumerator|COAP_BLOCK_128,
DECL|COAP_BLOCK_16|enumerator|COAP_BLOCK_16,
DECL|COAP_BLOCK_256|enumerator|COAP_BLOCK_256,
DECL|COAP_BLOCK_32|enumerator|COAP_BLOCK_32,
DECL|COAP_BLOCK_512|enumerator|COAP_BLOCK_512,
DECL|COAP_BLOCK_64|enumerator|COAP_BLOCK_64,
DECL|COAP_CODE_EMPTY|macro|COAP_CODE_EMPTY
DECL|COAP_METHOD_DELETE|enumerator|COAP_METHOD_DELETE = 4,
DECL|COAP_METHOD_GET|enumerator|COAP_METHOD_GET = 1,
DECL|COAP_METHOD_POST|enumerator|COAP_METHOD_POST = 2,
DECL|COAP_METHOD_PUT|enumerator|COAP_METHOD_PUT = 3,
DECL|COAP_OPTION_ACCEPT|enumerator|COAP_OPTION_ACCEPT = 17,
DECL|COAP_OPTION_BLOCK1|enumerator|COAP_OPTION_BLOCK1 = 27,
DECL|COAP_OPTION_BLOCK2|enumerator|COAP_OPTION_BLOCK2 = 23,
DECL|COAP_OPTION_CONTENT_FORMAT|enumerator|COAP_OPTION_CONTENT_FORMAT = 12,
DECL|COAP_OPTION_ETAG|enumerator|COAP_OPTION_ETAG = 4,
DECL|COAP_OPTION_IF_MATCH|enumerator|COAP_OPTION_IF_MATCH = 1,
DECL|COAP_OPTION_IF_NONE_MATCH|enumerator|COAP_OPTION_IF_NONE_MATCH = 5,
DECL|COAP_OPTION_LOCATION_PATH|enumerator|COAP_OPTION_LOCATION_PATH = 8,
DECL|COAP_OPTION_LOCATION_QUERY|enumerator|COAP_OPTION_LOCATION_QUERY = 20,
DECL|COAP_OPTION_MAX_AGE|enumerator|COAP_OPTION_MAX_AGE = 14,
DECL|COAP_OPTION_OBSERVE|enumerator|COAP_OPTION_OBSERVE = 6,
DECL|COAP_OPTION_PROXY_SCHEME|enumerator|COAP_OPTION_PROXY_SCHEME = 39,
DECL|COAP_OPTION_PROXY_URI|enumerator|COAP_OPTION_PROXY_URI = 35,
DECL|COAP_OPTION_SIZE1|enumerator|COAP_OPTION_SIZE1 = 60,
DECL|COAP_OPTION_SIZE2|enumerator|COAP_OPTION_SIZE2 = 28,
DECL|COAP_OPTION_URI_HOST|enumerator|COAP_OPTION_URI_HOST = 3,
DECL|COAP_OPTION_URI_PATH|enumerator|COAP_OPTION_URI_PATH = 11,
DECL|COAP_OPTION_URI_PORT|enumerator|COAP_OPTION_URI_PORT = 7,
DECL|COAP_OPTION_URI_QUERY|enumerator|COAP_OPTION_URI_QUERY = 15,
DECL|COAP_REQUEST_MASK|macro|COAP_REQUEST_MASK
DECL|COAP_RESPONSE_CODE_BAD_GATEWAY|enumerator|COAP_RESPONSE_CODE_BAD_GATEWAY = coap_make_response_code(5, 2),
DECL|COAP_RESPONSE_CODE_BAD_OPTION|enumerator|COAP_RESPONSE_CODE_BAD_OPTION = coap_make_response_code(4, 2),
DECL|COAP_RESPONSE_CODE_BAD_REQUEST|enumerator|COAP_RESPONSE_CODE_BAD_REQUEST = coap_make_response_code(4, 0),
DECL|COAP_RESPONSE_CODE_CHANGED|enumerator|COAP_RESPONSE_CODE_CHANGED = coap_make_response_code(2, 4),
DECL|COAP_RESPONSE_CODE_CONTENT|enumerator|COAP_RESPONSE_CODE_CONTENT = coap_make_response_code(2, 5),
DECL|COAP_RESPONSE_CODE_CONTINUE|enumerator|COAP_RESPONSE_CODE_CONTINUE = coap_make_response_code(2, 31),
DECL|COAP_RESPONSE_CODE_CREATED|enumerator|COAP_RESPONSE_CODE_CREATED = coap_make_response_code(2, 1),
DECL|COAP_RESPONSE_CODE_DELETED|enumerator|COAP_RESPONSE_CODE_DELETED = coap_make_response_code(2, 2),
DECL|COAP_RESPONSE_CODE_FORBIDDEN|enumerator|COAP_RESPONSE_CODE_FORBIDDEN = coap_make_response_code(4, 3),
DECL|COAP_RESPONSE_CODE_GATEWAY_TIMEOUT|enumerator|COAP_RESPONSE_CODE_GATEWAY_TIMEOUT = coap_make_response_code(5, 4),
DECL|COAP_RESPONSE_CODE_INCOMPLETE|enumerator|COAP_RESPONSE_CODE_INCOMPLETE = coap_make_response_code(4, 8),
DECL|COAP_RESPONSE_CODE_INTERNAL_ERROR|enumerator|COAP_RESPONSE_CODE_INTERNAL_ERROR = coap_make_response_code(5, 0),
DECL|COAP_RESPONSE_CODE_NOT_ACCEPTABLE|enumerator|COAP_RESPONSE_CODE_NOT_ACCEPTABLE = coap_make_response_code(4, 6),
DECL|COAP_RESPONSE_CODE_NOT_ALLOWED|enumerator|COAP_RESPONSE_CODE_NOT_ALLOWED = coap_make_response_code(4, 5),
DECL|COAP_RESPONSE_CODE_NOT_FOUND|enumerator|COAP_RESPONSE_CODE_NOT_FOUND = coap_make_response_code(4, 4),
DECL|COAP_RESPONSE_CODE_NOT_IMPLEMENTED|enumerator|COAP_RESPONSE_CODE_NOT_IMPLEMENTED = coap_make_response_code(5, 1),
DECL|COAP_RESPONSE_CODE_OK|enumerator|COAP_RESPONSE_CODE_OK = coap_make_response_code(2, 0),
DECL|COAP_RESPONSE_CODE_PRECONDITION_FAILED|enumerator|COAP_RESPONSE_CODE_PRECONDITION_FAILED = coap_make_response_code(4, 12),
DECL|COAP_RESPONSE_CODE_PROXYING_NOT_SUPPORTED|enumerator|COAP_RESPONSE_CODE_PROXYING_NOT_SUPPORTED =
DECL|COAP_RESPONSE_CODE_REQUEST_TOO_LARGE|enumerator|COAP_RESPONSE_CODE_REQUEST_TOO_LARGE = coap_make_response_code(4, 13),
DECL|COAP_RESPONSE_CODE_SERVICE_UNAVAILABLE|enumerator|COAP_RESPONSE_CODE_SERVICE_UNAVAILABLE = coap_make_response_code(5, 3),
DECL|COAP_RESPONSE_CODE_UNAUTHORIZED|enumerator|COAP_RESPONSE_CODE_UNAUTHORIZED = coap_make_response_code(4, 1),
DECL|COAP_RESPONSE_CODE_UNSUPPORTED_CONTENT_FORMAT|enumerator|COAP_RESPONSE_CODE_UNSUPPORTED_CONTENT_FORMAT =
DECL|COAP_RESPONSE_CODE_VALID|enumerator|COAP_RESPONSE_CODE_VALID = coap_make_response_code(2, 3),
DECL|COAP_TYPE_ACK|enumerator|COAP_TYPE_ACK = 2,
DECL|COAP_TYPE_CON|enumerator|COAP_TYPE_CON = 0,
DECL|COAP_TYPE_NON_CON|enumerator|COAP_TYPE_NON_CON = 1,
DECL|COAP_TYPE_RESET|enumerator|COAP_TYPE_RESET = 3
DECL|ZEPHYR_INCLUDE_NET_COAP_H_|macro|ZEPHYR_INCLUDE_NET_COAP_H_
DECL|addr|member|struct sockaddr addr;
DECL|addr|member|struct sockaddr addr;
DECL|age|member|int age;
DECL|age|member|int age;
DECL|block_size|member|enum coap_block_size block_size;
DECL|coap_block_context|struct|struct coap_block_context {
DECL|coap_block_size_to_bytes|function|static inline u16_t coap_block_size_to_bytes(enum coap_block_size block_size)
DECL|coap_block_size|enum|enum coap_block_size {
DECL|coap_make_response_code|macro|coap_make_response_code
DECL|coap_method_t|typedef|typedef int (*coap_method_t)(struct coap_resource *resource,
DECL|coap_method|enum|enum coap_method {
DECL|coap_msgtype|enum|enum coap_msgtype {
DECL|coap_next_id|function|static inline u16_t coap_next_id(void)
DECL|coap_notify_t|typedef|typedef void (*coap_notify_t)(struct coap_resource *resource,
DECL|coap_observer|struct|struct coap_observer {
DECL|coap_option_num|enum|enum coap_option_num {
DECL|coap_option|struct|struct coap_option {
DECL|coap_packet|struct|struct coap_packet {
DECL|coap_pending|struct|struct coap_pending {
DECL|coap_reply_t|typedef|typedef int (*coap_reply_t)(const struct coap_packet *response,
DECL|coap_reply|struct|struct coap_reply {
DECL|coap_resource|struct|struct coap_resource {
DECL|coap_response_code|enum|enum coap_response_code {
DECL|current|member|size_t current;
DECL|delta|member|u16_t delta;
DECL|del|member|coap_method_t get, post, put, del;
DECL|frag|member|struct net_buf *frag; /* Where CoAP header resides */
DECL|get|member|coap_method_t get, post, put, del;
DECL|hdr_len|member|u8_t hdr_len; /* CoAP header length */
DECL|id|member|u16_t id;
DECL|id|member|u16_t id;
DECL|last_delta|member|u16_t last_delta; /* Used only when preparing CoAP packet */
DECL|len|member|u16_t len;
DECL|len|member|u8_t len;
DECL|list|member|sys_snode_t list;
DECL|notify|member|coap_notify_t notify;
DECL|observers|member|sys_slist_t observers;
DECL|offset|member|u16_t offset; /* Where CoAP header starts.*/
DECL|opt_len|member|u8_t opt_len; /* Total options length (delta + len + value) */
DECL|path|member|const char * const *path;
DECL|pkt|member|struct net_pkt *pkt;
DECL|pkt|member|struct net_pkt *pkt;
DECL|post|member|coap_method_t get, post, put, del;
DECL|put|member|coap_method_t get, post, put, del;
DECL|reply|member|coap_reply_t reply;
DECL|timeout|member|s32_t timeout;
DECL|tkl|member|u8_t tkl;
DECL|tkl|member|u8_t tkl;
DECL|token|member|u8_t token[8];
DECL|token|member|u8_t token[8];
DECL|total_size|member|size_t total_size;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|value|member|u8_t value[12];
DECL|value|member|u8_t value[CONFIG_COAP_EXTENDED_OPTIONS_LEN_VALUE];
