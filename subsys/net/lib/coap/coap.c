DECL|BASIC_HEADER_SIZE|macro|BASIC_HEADER_SIZE
DECL|COAP_MARKER|macro|COAP_MARKER
DECL|COAP_OPTION_EXT_13|macro|COAP_OPTION_EXT_13
DECL|COAP_OPTION_EXT_14|macro|COAP_OPTION_EXT_14
DECL|COAP_OPTION_EXT_15|macro|COAP_OPTION_EXT_15
DECL|COAP_OPTION_EXT_269|macro|COAP_OPTION_EXT_269
DECL|COAP_OPTION_NO_EXT|macro|COAP_OPTION_NO_EXT
DECL|COAP_VERSION|macro|COAP_VERSION
DECL|GET_BLOCK_SIZE|macro|GET_BLOCK_SIZE
DECL|GET_MORE|macro|GET_MORE
DECL|GET_NUM|macro|GET_NUM
DECL|INIT_ACK_TIMEOUT|macro|INIT_ACK_TIMEOUT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|SET_BLOCK_SIZE|macro|SET_BLOCK_SIZE
DECL|SET_MORE|macro|SET_MORE
DECL|SET_NUM|macro|SET_NUM
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|__coap_header_get_code|function|static u8_t __coap_header_get_code(const struct coap_packet *cpkt)
DECL|append_all|macro|append_all
DECL|append|macro|append
DECL|check_frag_read_status|function|static int check_frag_read_status(const struct net_buf *frag, u16_t offset)
DECL|coap_append_block1_option|function|int coap_append_block1_option(struct coap_packet *cpkt, struct coap_block_context *ctx)
DECL|coap_append_block2_option|function|int coap_append_block2_option(struct coap_packet *cpkt, struct coap_block_context *ctx)
DECL|coap_append_option_int|function|int coap_append_option_int(struct coap_packet *cpkt, u16_t code, unsigned int val)
DECL|coap_append_size1_option|function|int coap_append_size1_option(struct coap_packet *cpkt, struct coap_block_context *ctx)
DECL|coap_append_size2_option|function|int coap_append_size2_option(struct coap_packet *cpkt, struct coap_block_context *ctx)
DECL|coap_block_transfer_init|function|int coap_block_transfer_init(struct coap_block_context *ctx, enum coap_block_size block_size, size_t total_size)
DECL|coap_find_observer_by_addr|function|struct coap_observer *coap_find_observer_by_addr(struct coap_observer *observers, size_t len, const struct sockaddr *addr)
DECL|coap_find_options|function|int coap_find_options(const struct coap_packet *cpkt, u16_t code, struct coap_option *options, u16_t veclen)
DECL|coap_handle_request|function|int coap_handle_request(struct coap_packet *cpkt,struct coap_resource *resources, struct coap_option *options, u8_t opt_num)
DECL|coap_header_get_code|function|u8_t coap_header_get_code(const struct coap_packet *cpkt)
DECL|coap_header_get_id|function|u16_t coap_header_get_id(const struct coap_packet *cpkt)
DECL|coap_header_get_token|function|u8_t coap_header_get_token(const struct coap_packet *cpkt, u8_t *token)
DECL|coap_header_get_type|function|u8_t coap_header_get_type(const struct coap_packet *cpkt)
DECL|coap_header_get_version|function|u8_t coap_header_get_version(const struct coap_packet *cpkt)
DECL|coap_next_block|function|size_t coap_next_block(const struct coap_packet *cpkt, struct coap_block_context *ctx)
DECL|coap_next_token|function|u8_t *coap_next_token(void)
DECL|coap_observer_init|function|void coap_observer_init(struct coap_observer *observer,const struct coap_packet *request, const struct sockaddr *addr)
DECL|coap_observer_next_unused|function|struct coap_observer *coap_observer_next_unused(struct coap_observer *observers, size_t len)
DECL|coap_option_value_to_int|function|unsigned int coap_option_value_to_int(const struct coap_option *option)
DECL|coap_packet_append_option|function|int coap_packet_append_option(struct coap_packet *cpkt, u16_t code, const u8_t *value, u16_t len)
DECL|coap_packet_append_payload_marker|function|int coap_packet_append_payload_marker(struct coap_packet *cpkt)
DECL|coap_packet_append_payload|function|int coap_packet_append_payload(struct coap_packet *cpkt, u8_t *payload, u16_t payload_len)
DECL|coap_packet_get_payload|function|struct net_buf *coap_packet_get_payload(const struct coap_packet *cpkt,u16_t *offset, u16_t *len)
DECL|coap_packet_init|function|int coap_packet_init(struct coap_packet *cpkt, struct net_pkt *pkt, u8_t ver, u8_t type, u8_t tokenlen, u8_t *token, u8_t code, u16_t id)
DECL|coap_packet_parse|function|int coap_packet_parse(struct coap_packet *cpkt, struct net_pkt *pkt, struct coap_option *options, u8_t opt_num)
DECL|coap_pending_clear|function|void coap_pending_clear(struct coap_pending *pending)
DECL|coap_pending_cycle|function|bool coap_pending_cycle(struct coap_pending *pending)
DECL|coap_pending_init|function|int coap_pending_init(struct coap_pending *pending, const struct coap_packet *request, const struct sockaddr *addr)
DECL|coap_pending_next_to_expire|function|struct coap_pending *coap_pending_next_to_expire(struct coap_pending *pendings, size_t len)
DECL|coap_pending_next_unused|function|struct coap_pending *coap_pending_next_unused(struct coap_pending *pendings, size_t len)
DECL|coap_pending_received|function|struct coap_pending *coap_pending_received(const struct coap_packet *response, struct coap_pending *pendings, size_t len)
DECL|coap_register_observer|function|bool coap_register_observer(struct coap_resource *resource, struct coap_observer *observer)
DECL|coap_remove_observer|function|void coap_remove_observer(struct coap_resource *resource, struct coap_observer *observer)
DECL|coap_reply_clear|function|void coap_reply_clear(struct coap_reply *reply)
DECL|coap_reply_init|function|void coap_reply_init(struct coap_reply *reply, const struct coap_packet *request)
DECL|coap_reply_next_unused|function|struct coap_reply *coap_reply_next_unused(struct coap_reply *replies, size_t len)
DECL|coap_request_is_observe|function|bool coap_request_is_observe(const struct coap_packet *request)
DECL|coap_resource_notify|function|int coap_resource_notify(struct coap_resource *resource)
DECL|coap_response_received|function|struct coap_reply *coap_response_received(const struct coap_packet *response, const struct sockaddr *from, struct coap_reply *replies, size_t len)
DECL|coap_update_from_block|function|int coap_update_from_block(const struct coap_packet *cpkt, struct coap_block_context *ctx)
DECL|decode_delta|function|static int decode_delta(struct option_context *context, u16_t opt,u16_t *opt_ext, u16_t *hdr_len)
DECL|delta|member|u16_t delta;
DECL|encode_extended_option|function|static u8_t encode_extended_option(u16_t num, u8_t *opt, u16_t *ext)
DECL|encode_option|function|static int encode_option(struct coap_packet *cpkt, u16_t code, const u8_t *value, u16_t len)
DECL|frag|member|struct net_buf *frag;
DECL|get_block_option|function|static int get_block_option(const struct coap_packet *cpkt, u16_t code)
DECL|get_coap_packet_len|function|static u16_t get_coap_packet_len(struct net_pkt *pkt)
DECL|get_header_len|function|static int get_header_len(struct coap_packet *cpkt)
DECL|get_header_tkl|function|static u8_t get_header_tkl(const struct coap_packet *cpkt)
DECL|get_observe_option|function|static int get_observe_option(const struct coap_packet *cpkt)
DECL|get_pkt_len|function|static u16_t get_pkt_len(const struct coap_packet *cpkt)
DECL|is_addr_unspecified|function|static inline bool is_addr_unspecified(const struct sockaddr *addr)
DECL|is_request|function|static bool is_request(const struct coap_packet *cpkt)
DECL|method_from_code|function|static coap_method_t method_from_code(const struct coap_resource *resource, u8_t code)
DECL|next_timeout|function|static s32_t next_timeout(s32_t previous)
DECL|offset|member|u16_t offset;
DECL|option_context|struct|struct option_context {
DECL|option_header_get_delta|function|static u8_t option_header_get_delta(u8_t opt)
DECL|option_header_get_len|function|static u8_t option_header_get_len(u8_t opt)
DECL|option_header_set_delta|function|static void option_header_set_delta(u8_t *opt, u8_t delta)
DECL|option_header_set_len|function|static void option_header_set_len(u8_t *opt, u8_t len)
DECL|parse_options|function|static int parse_options(const struct coap_packet *cpkt, struct coap_option *options, u8_t opt_num)
DECL|parse_option|function|static int parse_option(const struct coap_packet *cpkt,struct option_context *context, struct coap_option *option, u16_t *opt_len)
DECL|sockaddr_equal|function|static bool sockaddr_equal(const struct sockaddr *a, const struct sockaddr *b)
DECL|update_control_block1|function|static int update_control_block1(struct coap_block_context *ctx, int block, int size)
DECL|update_control_block2|function|static int update_control_block2(struct coap_block_context *ctx, int block, int size)
DECL|update_descriptive_block|function|static int update_descriptive_block(struct coap_block_context *ctx, int block, int size)
DECL|uri_path_eq|function|static bool uri_path_eq(const struct coap_packet *cpkt,const char * const *path, struct coap_option *options, u8_t opt_num)
