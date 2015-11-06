DECL|COAP_MAX_BLOCK_SIZE|macro|COAP_MAX_BLOCK_SIZE
DECL|COAP_MAX_PACKET_SIZE|macro|COAP_MAX_PACKET_SIZE
DECL|COAP_SERIALIZE_BLOCK_OPTION|macro|COAP_SERIALIZE_BLOCK_OPTION
DECL|COAP_SERIALIZE_BYTE_OPTION|macro|COAP_SERIALIZE_BYTE_OPTION
DECL|COAP_SERIALIZE_INT_OPTION|macro|COAP_SERIALIZE_INT_OPTION
DECL|COAP_SERIALIZE_STRING_OPTION|macro|COAP_SERIALIZE_STRING_OPTION
DECL|ER_COAP_H_|macro|ER_COAP_H_
DECL|IS_OPTION|macro|IS_OPTION
DECL|OPTION_MAP_SIZE|enumerator|enum { OPTION_MAP_SIZE = sizeof(uint8_t) * 8 };
DECL|REST|macro|REST
DECL|SET_OPTION|macro|SET_OPTION
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|UIP_UDP_BUF|macro|UIP_UDP_BUF
DECL|UIP_UDP_BUF|macro|UIP_UDP_BUF
DECL|accept|member|uint16_t accept;
DECL|block1_more|member|uint8_t block1_more;
DECL|block1_num|member|uint32_t block1_num;
DECL|block1_offset|member|uint32_t block1_offset;
DECL|block1_size|member|uint16_t block1_size;
DECL|block2_more|member|uint8_t block2_more;
DECL|block2_num|member|uint32_t block2_num;
DECL|block2_offset|member|uint32_t block2_offset;
DECL|block2_size|member|uint16_t block2_size;
DECL|buffer|member|uint8_t *buffer; /* pointer to CoAP header / incoming packet buffer / memory to serialize packet */
DECL|coap_ctx|member|coap_context_t *coap_ctx;
DECL|coap_packet_t|typedef|} coap_packet_t;
DECL|code|member|uint8_t code;
DECL|content_format|member|uint16_t content_format; /* parse options once and store; allows setting options in random order */
DECL|etag_len|member|uint8_t etag_len;
DECL|etag|member|uint8_t etag[COAP_ETAG_LEN];
DECL|if_match_len|member|uint8_t if_match_len;
DECL|if_match|member|uint8_t if_match[COAP_ETAG_LEN];
DECL|if_none_match|member|uint8_t if_none_match;
DECL|location_path_len|member|size_t location_path_len;
DECL|location_path|member|const char *location_path;
DECL|location_query_len|member|size_t location_query_len;
DECL|location_query|member|const char *location_query;
DECL|max_age|member|uint32_t max_age;
DECL|mid|member|uint16_t mid;
DECL|net_coap_stats_t|typedef|} net_coap_stats_t;
DECL|net_coap_stats|struct|typedef struct net_coap_stats {
DECL|observe|member|int32_t observe;
DECL|options|member|uint8_t options[COAP_OPTION_SIZE1 / OPTION_MAP_SIZE + 1]; /* bitmap to check if option is set */
DECL|payload_len|member|uint16_t payload_len;
DECL|payload|member|uint8_t *payload;
DECL|proxy_scheme_len|member|size_t proxy_scheme_len;
DECL|proxy_scheme|member|const char *proxy_scheme;
DECL|proxy_uri_len|member|size_t proxy_uri_len;
DECL|proxy_uri|member|const char *proxy_uri;
DECL|re_sent|member|uint32_t re_sent;
DECL|recv_err|member|uint32_t recv_err;
DECL|recv|member|uint32_t recv;
DECL|sent|member|uint32_t sent;
DECL|size1|member|uint32_t size1;
DECL|size2|member|uint32_t size2;
DECL|token_len|member|uint8_t token_len;
DECL|token|member|uint8_t token[COAP_TOKEN_LEN];
DECL|type|member|coap_message_type_t type;
DECL|uri_host_len|member|size_t uri_host_len;
DECL|uri_host|member|const char *uri_host;
DECL|uri_path_len|member|size_t uri_path_len;
DECL|uri_path|member|const char *uri_path;
DECL|uri_port|member|uint16_t uri_port;
DECL|uri_query_len|member|size_t uri_query_len;
DECL|uri_query|member|const char *uri_query;
DECL|version|member|uint8_t version;
