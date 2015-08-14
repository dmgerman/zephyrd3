DECL|COAP_SEPARATE_H_|macro|COAP_SEPARATE_H_
DECL|addr|member|uip_ipaddr_t addr;
DECL|block1_num|member|uint32_t block1_num;
DECL|block1_size|member|uint16_t block1_size;
DECL|block2_num|member|uint32_t block2_num;
DECL|block2_size|member|uint16_t block2_size;
DECL|coap_separate_t|typedef|} coap_separate_t;
DECL|coap_separate|struct|typedef struct coap_separate {
DECL|mid|member|uint16_t mid;
DECL|port|member|uint16_t port;
DECL|token_len|member|uint8_t token_len;
DECL|token|member|uint8_t token[COAP_TOKEN_LEN];
DECL|type|member|coap_message_type_t type;
