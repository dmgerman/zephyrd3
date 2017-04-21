DECL|BASIC_HEADER_SIZE|macro|BASIC_HEADER_SIZE
DECL|COAP_MARKER|macro|COAP_MARKER
DECL|COAP_VERSION|macro|COAP_VERSION
DECL|GET_BLOCK_SIZE|macro|GET_BLOCK_SIZE
DECL|GET_MORE|macro|GET_MORE
DECL|GET_NUM|macro|GET_NUM
DECL|LAST_TIMEOUT|macro|LAST_TIMEOUT
DECL|SET_BLOCK_SIZE|macro|SET_BLOCK_SIZE
DECL|SET_MORE|macro|SET_MORE
DECL|SET_NUM|macro|SET_NUM
DECL|block_size|member|int block_size;
DECL|block_transfer|struct|struct block_transfer {
DECL|buflen|member|int buflen;
DECL|buf|member|uint8_t *buf;
DECL|coap_get_header_len|function|static int coap_get_header_len(const struct zoap_packet *pkt)
DECL|coap_header_get_code|function|uint8_t coap_header_get_code(const struct zoap_packet *pkt)
DECL|coap_header_get_tkl|function|static uint8_t coap_header_get_tkl(const struct zoap_packet *pkt)
DECL|coap_option_encode|function|static int coap_option_encode(struct option_context *context, uint16_t code, const void *value, uint16_t len)
DECL|coap_option_header_get_delta|function|static uint8_t coap_option_header_get_delta(uint8_t buf)
DECL|coap_option_header_get_len|function|static uint8_t coap_option_header_get_len(uint8_t buf)
DECL|coap_option_header_set_delta|function|static void coap_option_header_set_delta(uint8_t *buf, uint8_t delta)
DECL|coap_option_header_set_len|function|static void coap_option_header_set_len(uint8_t *buf, uint8_t len)
DECL|coap_parse_options|function|static int coap_parse_options(struct zoap_packet *pkt, unsigned int offset)
DECL|coap_parse_option|function|static int coap_parse_option(const struct zoap_packet *pkt, struct option_context *context, uint8_t **value, uint16_t *vlen)
DECL|decode_delta|function|static int decode_delta(int num, const uint8_t *buf, int16_t buflen,uint16_t *decoded)
DECL|delta_encode|function|static int delta_encode(int num, uint8_t *value, uint8_t *buf, size_t buflen)
DECL|delta|member|int delta;
DECL|get_block_option|function|static int get_block_option(const struct zoap_packet *pkt, uint16_t code)
DECL|get_observe_option|function|static int get_observe_option(const struct zoap_packet *pkt)
DECL|is_addr_unspecified|function|static inline bool is_addr_unspecified(const struct sockaddr *addr)
DECL|is_request|function|static bool is_request(const struct zoap_packet *pkt)
DECL|method_from_code|function|static zoap_method_t method_from_code(const struct zoap_resource *resource, uint8_t code)
DECL|more|member|bool more;
DECL|next_timeout|function|static int32_t next_timeout(int32_t previous)
DECL|num|member|int num;
DECL|option_context|struct|struct option_context {
DECL|sockaddr_equal|function|static bool sockaddr_equal(const struct sockaddr *a, const struct sockaddr *b)
DECL|update_control_block1|function|static int update_control_block1(struct zoap_block_context *ctx, int block, int size)
DECL|update_control_block2|function|static int update_control_block2(struct zoap_block_context *ctx, int block, int size)
DECL|update_descriptive_block|function|static int update_descriptive_block(struct zoap_block_context *ctx, int block, int size)
DECL|uri_path_eq|function|static bool uri_path_eq(const struct zoap_packet *pkt,const char * const *path)
DECL|used|member|int used; /* size used of options */
DECL|zoap_add_block1_option|function|int zoap_add_block1_option(struct zoap_packet *pkt, struct zoap_block_context *ctx)
DECL|zoap_add_block2_option|function|int zoap_add_block2_option(struct zoap_packet *pkt, struct zoap_block_context *ctx)
DECL|zoap_add_option_int|function|int zoap_add_option_int(struct zoap_packet *pkt, uint16_t code,unsigned int val)
DECL|zoap_add_option|function|int zoap_add_option(struct zoap_packet *pkt, uint16_t code, const void *value, uint16_t len)
DECL|zoap_add_size1_option|function|int zoap_add_size1_option(struct zoap_packet *pkt, struct zoap_block_context *ctx)
DECL|zoap_add_size2_option|function|int zoap_add_size2_option(struct zoap_packet *pkt, struct zoap_block_context *ctx)
DECL|zoap_block_transfer_init|function|int zoap_block_transfer_init(struct zoap_block_context *ctx, enum zoap_block_size block_size, size_t total_size)
DECL|zoap_find_observer_by_addr|function|struct zoap_observer *zoap_find_observer_by_addr(struct zoap_observer *observers, size_t len, const struct sockaddr *addr)
DECL|zoap_find_options|function|int zoap_find_options(const struct zoap_packet *pkt, uint16_t code, struct zoap_option *options, uint16_t veclen)
DECL|zoap_handle_request|function|int zoap_handle_request(struct zoap_packet *pkt,struct zoap_resource *resources, const struct sockaddr *from)
DECL|zoap_header_get_code|function|uint8_t zoap_header_get_code(const struct zoap_packet *pkt)
DECL|zoap_header_get_id|function|uint16_t zoap_header_get_id(const struct zoap_packet *pkt)
DECL|zoap_header_get_token|function|const uint8_t *zoap_header_get_token(const struct zoap_packet *pkt, uint8_t *len)
DECL|zoap_header_get_type|function|uint8_t zoap_header_get_type(const struct zoap_packet *pkt)
DECL|zoap_header_get_version|function|uint8_t zoap_header_get_version(const struct zoap_packet *pkt)
DECL|zoap_header_set_code|function|void zoap_header_set_code(struct zoap_packet *pkt, uint8_t code)
DECL|zoap_header_set_id|function|void zoap_header_set_id(struct zoap_packet *pkt, uint16_t id)
DECL|zoap_header_set_token|function|int zoap_header_set_token(struct zoap_packet *pkt, const uint8_t *token, uint8_t tokenlen)
DECL|zoap_header_set_type|function|void zoap_header_set_type(struct zoap_packet *pkt, uint8_t type)
DECL|zoap_header_set_version|function|void zoap_header_set_version(struct zoap_packet *pkt, uint8_t ver)
DECL|zoap_next_block|function|size_t zoap_next_block(struct zoap_block_context *ctx)
DECL|zoap_next_token|function|uint8_t *zoap_next_token(void)
DECL|zoap_observer_init|function|void zoap_observer_init(struct zoap_observer *observer,const struct zoap_packet *request, const struct sockaddr *addr)
DECL|zoap_observer_next_unused|function|struct zoap_observer *zoap_observer_next_unused(struct zoap_observer *observers, size_t len)
DECL|zoap_option_value_to_int|function|unsigned int zoap_option_value_to_int(const struct zoap_option *option)
DECL|zoap_packet_get_payload|function|uint8_t *zoap_packet_get_payload(struct zoap_packet *pkt, uint16_t *len)
DECL|zoap_packet_init|function|int zoap_packet_init(struct zoap_packet *pkt, struct net_buf *buf)
DECL|zoap_packet_parse|function|int zoap_packet_parse(struct zoap_packet *pkt, struct net_buf *buf)
DECL|zoap_packet_set_used|function|int zoap_packet_set_used(struct zoap_packet *pkt, uint16_t len)
DECL|zoap_pending_clear|function|void zoap_pending_clear(struct zoap_pending *pending)
DECL|zoap_pending_cycle|function|bool zoap_pending_cycle(struct zoap_pending *pending)
DECL|zoap_pending_init|function|int zoap_pending_init(struct zoap_pending *pending, const struct zoap_packet *request, const struct sockaddr *addr)
DECL|zoap_pending_next_to_expire|function|struct zoap_pending *zoap_pending_next_to_expire(struct zoap_pending *pendings, size_t len)
DECL|zoap_pending_next_unused|function|struct zoap_pending *zoap_pending_next_unused(struct zoap_pending *pendings, size_t len)
DECL|zoap_pending_received|function|struct zoap_pending *zoap_pending_received(const struct zoap_packet *response, struct zoap_pending *pendings, size_t len)
DECL|zoap_register_observer|function|bool zoap_register_observer(struct zoap_resource *resource, struct zoap_observer *observer)
DECL|zoap_remove_observer|function|void zoap_remove_observer(struct zoap_resource *resource, struct zoap_observer *observer)
DECL|zoap_reply_clear|function|void zoap_reply_clear(struct zoap_reply *reply)
DECL|zoap_reply_init|function|void zoap_reply_init(struct zoap_reply *reply, const struct zoap_packet *request)
DECL|zoap_reply_next_unused|function|struct zoap_reply *zoap_reply_next_unused(struct zoap_reply *replies, size_t len)
DECL|zoap_request_is_observe|function|bool zoap_request_is_observe(const struct zoap_packet *request)
DECL|zoap_resource_notify|function|int zoap_resource_notify(struct zoap_resource *resource)
DECL|zoap_response_received|function|struct zoap_reply *zoap_response_received(const struct zoap_packet *response, const struct sockaddr *from, struct zoap_reply *replies, size_t len)
DECL|zoap_update_from_block|function|int zoap_update_from_block(const struct zoap_packet *pkt, struct zoap_block_context *ctx)
