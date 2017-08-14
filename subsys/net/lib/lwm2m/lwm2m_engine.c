DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|DISCOVER_PREFACE|macro|DISCOVER_PREFACE
DECL|ENGINE_UPDATE_INTERVAL|macro|ENGINE_UPDATE_INTERVAL
DECL|MATCH_ALL|macro|MATCH_ALL
DECL|MATCH_NONE|macro|MATCH_NONE
DECL|MATCH_SINGLE|macro|MATCH_SINGLE
DECL|NUM_PENDINGS|macro|NUM_PENDINGS
DECL|NUM_REPLIES|macro|NUM_REPLIES
DECL|REG_PREFACE|macro|REG_PREFACE
DECL|REG_PREFACE|macro|REG_PREFACE
DECL|RESOURCE_TYPE|macro|RESOURCE_TYPE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|addr|member|struct sockaddr addr;
DECL|atou16|function|static u16_t atou16(u8_t *buf, u16_t buflen, u16_t *len)
DECL|counter|member|u32_t counter;
DECL|do_discover_op|function|static int do_discover_op(struct lwm2m_engine_context *context)
DECL|do_read_op|function|static int do_read_op(struct lwm2m_engine_obj *obj, struct lwm2m_engine_context *context)
DECL|do_write_op|function|static int do_write_op(struct lwm2m_engine_obj *obj, struct lwm2m_engine_context *context, u16_t format)
DECL|engine_add_observer|function|static int engine_add_observer(struct net_context *net_ctx, struct sockaddr *addr, const u8_t *token, u8_t tkl, struct lwm2m_obj_path *path, u16_t format)
DECL|engine_clear_context|function|static void engine_clear_context(struct lwm2m_engine_context *context)
DECL|engine_get_resource_from_pathstr|function|static int engine_get_resource_from_pathstr(char *pathstr, struct lwm2m_engine_res_inst **res)
DECL|engine_get_resource|function|static int engine_get_resource(struct lwm2m_obj_path *path, struct lwm2m_engine_res_inst **res)
DECL|engine_obj_inst_list|variable|engine_obj_inst_list
DECL|engine_obj_list|variable|engine_obj_list
DECL|engine_observer_list|variable|engine_observer_list
DECL|engine_register_obj_inst|function|static void engine_register_obj_inst(struct lwm2m_engine_obj_inst *obj_inst)
DECL|engine_remove_observer|function|static int engine_remove_observer(const u8_t *token, u8_t tkl)
DECL|engine_thread_data|variable|engine_thread_data
DECL|engine_unregister_obj_inst|function|static void engine_unregister_obj_inst(struct lwm2m_engine_obj_inst *obj_inst)
DECL|event_timestamp|member|s64_t event_timestamp;
DECL|format|member|u16_t format;
DECL|generate_notify_message|function|static int generate_notify_message(struct observe_node *obs, bool manual_trigger)
DECL|get_engine_obj_inst|function|static struct lwm2m_engine_obj_inst *get_engine_obj_inst(int obj_id, int obj_inst_id)
DECL|get_engine_obj|function|static struct lwm2m_engine_obj *get_engine_obj(int obj_id)
DECL|get_observe_option|function|static int get_observe_option(const struct zoap_packet *zpkt)
DECL|handle_request|function|static int handle_request(struct zoap_packet *request, struct zoap_packet *response, struct sockaddr *from_addr)
DECL|last_timestamp|member|s64_t last_timestamp;
DECL|lwm2m_create_obj_inst|function|int lwm2m_create_obj_inst(u16_t obj_id, u16_t obj_inst_id, struct lwm2m_engine_obj_inst **obj_inst)
DECL|lwm2m_delete_handler|function|static int lwm2m_delete_handler(struct lwm2m_engine_obj *obj,struct lwm2m_engine_context *context)
DECL|lwm2m_delete_obj_inst|function|int lwm2m_delete_obj_inst(u16_t obj_id, u16_t obj_inst_id)
DECL|lwm2m_engine_create_obj_inst|function|int lwm2m_engine_create_obj_inst(char *pathstr)
DECL|lwm2m_engine_get_bool|function|bool lwm2m_engine_get_bool(char *pathstr)
DECL|lwm2m_engine_get_float32|function|int lwm2m_engine_get_float32(char *pathstr, float32_value_t *buf)
DECL|lwm2m_engine_get_float64|function|int lwm2m_engine_get_float64(char *pathstr, float64_value_t *buf)
DECL|lwm2m_engine_get_s16|function|s16_t lwm2m_engine_get_s16(char *pathstr)
DECL|lwm2m_engine_get_s32|function|s32_t lwm2m_engine_get_s32(char *pathstr)
DECL|lwm2m_engine_get_s64|function|s64_t lwm2m_engine_get_s64(char *pathstr)
DECL|lwm2m_engine_get_s8|function|s8_t lwm2m_engine_get_s8(char *pathstr)
DECL|lwm2m_engine_get_string|function|int lwm2m_engine_get_string(char *pathstr, void *str, u16_t strlen)
DECL|lwm2m_engine_get_u16|function|u16_t lwm2m_engine_get_u16(char *pathstr)
DECL|lwm2m_engine_get_u32|function|u32_t lwm2m_engine_get_u32(char *pathstr)
DECL|lwm2m_engine_get_u64|function|u64_t lwm2m_engine_get_u64(char *pathstr)
DECL|lwm2m_engine_get_u8|function|u8_t lwm2m_engine_get_u8(char *pathstr)
DECL|lwm2m_engine_get|function|static int lwm2m_engine_get(char *pathstr, void *buf, u16_t buflen)
DECL|lwm2m_engine_init|function|static int lwm2m_engine_init(struct device *dev)
DECL|lwm2m_engine_register_exec_callback|function|int lwm2m_engine_register_exec_callback(char *pathstr,lwm2m_engine_exec_cb_t cb)
DECL|lwm2m_engine_register_post_write_callback|function|int lwm2m_engine_register_post_write_callback(char *pathstr, lwm2m_engine_set_data_cb_t cb)
DECL|lwm2m_engine_register_pre_write_callback|function|int lwm2m_engine_register_pre_write_callback(char *pathstr, lwm2m_engine_get_data_cb_t cb)
DECL|lwm2m_engine_register_read_callback|function|int lwm2m_engine_register_read_callback(char *pathstr,lwm2m_engine_get_data_cb_t cb)
DECL|lwm2m_engine_service|function|static void lwm2m_engine_service(void)
DECL|lwm2m_engine_set_bool|function|int lwm2m_engine_set_bool(char *pathstr, bool value)
DECL|lwm2m_engine_set_float32|function|int lwm2m_engine_set_float32(char *pathstr, float32_value_t *value)
DECL|lwm2m_engine_set_float64|function|int lwm2m_engine_set_float64(char *pathstr, float64_value_t *value)
DECL|lwm2m_engine_set_s16|function|int lwm2m_engine_set_s16(char *pathstr, s16_t value)
DECL|lwm2m_engine_set_s32|function|int lwm2m_engine_set_s32(char *pathstr, s32_t value)
DECL|lwm2m_engine_set_s64|function|int lwm2m_engine_set_s64(char *pathstr, s64_t value)
DECL|lwm2m_engine_set_s8|function|int lwm2m_engine_set_s8(char *pathstr, s8_t value)
DECL|lwm2m_engine_set_string|function|int lwm2m_engine_set_string(char *pathstr, char *data_ptr)
DECL|lwm2m_engine_set_u16|function|int lwm2m_engine_set_u16(char *pathstr, u16_t value)
DECL|lwm2m_engine_set_u32|function|int lwm2m_engine_set_u32(char *pathstr, u32_t value)
DECL|lwm2m_engine_set_u64|function|int lwm2m_engine_set_u64(char *pathstr, u64_t value)
DECL|lwm2m_engine_set_u8|function|int lwm2m_engine_set_u8(char *pathstr, u8_t value)
DECL|lwm2m_engine_set|function|static int lwm2m_engine_set(char *pathstr, void *value, u16_t len)
DECL|lwm2m_engine_start|function|int lwm2m_engine_start(struct net_context *net_ctx)
DECL|lwm2m_exec_handler|function|static int lwm2m_exec_handler(struct lwm2m_engine_obj *obj, struct lwm2m_engine_context *context)
DECL|lwm2m_get_engine_obj_field|function|lwm2m_get_engine_obj_field(struct lwm2m_engine_obj *obj, int res_id)
DECL|lwm2m_get_or_create_engine_obj|function|int lwm2m_get_or_create_engine_obj(struct lwm2m_engine_context *context, struct lwm2m_engine_obj_inst **obj_inst, u8_t *created)
DECL|lwm2m_get_rd_data|function|u16_t lwm2m_get_rd_data(u8_t *client_data, u16_t size)
DECL|lwm2m_init_message_cleanup|function|void lwm2m_init_message_cleanup(struct net_pkt *pkt,struct zoap_pending *pending, struct zoap_reply *reply)
DECL|lwm2m_init_message_pending|function|struct zoap_pending *lwm2m_init_message_pending(struct zoap_packet *zpkt,struct sockaddr *addr, struct zoap_pending *zpendings, int num_zpendings)
DECL|lwm2m_init_message|function|int lwm2m_init_message(struct net_context *net_ctx, struct zoap_packet *zpkt, struct net_pkt **pkt, u8_t type, u8_t code, u16_t mid, const u8_t *token, u8_t tkl)
DECL|lwm2m_notify_observer_path|function|int lwm2m_notify_observer_path(struct lwm2m_obj_path *path)
DECL|lwm2m_notify_observer|function|int lwm2m_notify_observer(u16_t obj_id, u16_t obj_inst_id, u16_t res_id)
DECL|lwm2m_read_handler|function|static int lwm2m_read_handler(struct lwm2m_engine_obj_inst *obj_inst, struct lwm2m_engine_res_inst *res, struct lwm2m_engine_obj_field *obj_field, struct lwm2m_engine_context *context)
DECL|lwm2m_register_obj|function|void lwm2m_register_obj(struct lwm2m_engine_obj *obj)
DECL|lwm2m_sprint_ip_addr|function|char *lwm2m_sprint_ip_addr(const struct sockaddr *addr)
DECL|lwm2m_udp_receive|function|void lwm2m_udp_receive(struct net_context *ctx, struct net_pkt *pkt, struct zoap_pending *zpendings, int num_zpendings, struct zoap_reply *zreplies, int num_zreplies, bool handle_separate_response, int (*udp_request_handler)(struct zoap_packet *,
DECL|lwm2m_udp_sendto|function|int lwm2m_udp_sendto(struct net_pkt *pkt, const struct sockaddr *dst_addr)
DECL|lwm2m_unregister_obj|function|void lwm2m_unregister_obj(struct lwm2m_engine_obj *obj)
DECL|lwm2m_write_attr_handler|function|static int lwm2m_write_attr_handler(struct lwm2m_engine_obj *obj, struct lwm2m_engine_context *context)
DECL|lwm2m_write_handler|function|int lwm2m_write_handler(struct lwm2m_engine_obj_inst *obj_inst,struct lwm2m_engine_res_inst *res, struct lwm2m_engine_obj_field *obj_field, struct lwm2m_engine_context *context)
DECL|max_period_sec|member|u32_t max_period_sec;
DECL|min_period_sec|member|u32_t min_period_sec;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|next_engine_obj_inst|function|next_engine_obj_inst(struct lwm2m_engine_obj_inst *last, int obj_id, int obj_inst_id)
DECL|node|member|sys_snode_t node;
DECL|notify_message_reply_cb|function|static int notify_message_reply_cb(const struct zoap_packet *response, struct zoap_reply *reply, const struct sockaddr *from)
DECL|observe_node_data|variable|observe_node_data
DECL|observe_node|struct|struct observe_node {
DECL|outbuf_init_check|function|static void outbuf_init_check(struct lwm2m_output_context *out)
DECL|path|member|struct lwm2m_obj_path path;
DECL|pendings|variable|pendings
DECL|replies|variable|replies
DECL|retransmit_request|function|static void retransmit_request(struct k_work *work)
DECL|retransmit_work|variable|retransmit_work
DECL|select_reader|function|static u16_t select_reader(struct lwm2m_input_context *in, u16_t format)
DECL|select_writer|function|static u16_t select_writer(struct lwm2m_output_context *out, u16_t accept)
DECL|sprint_token|function|static char *sprint_token(const u8_t *token, u8_t tkl)
DECL|string_to_path|function|static int string_to_path(char *pathstr, struct lwm2m_obj_path *path, char delim)
DECL|tkl|member|u8_t tkl;
DECL|token|member|u8_t token[8];
DECL|udp_receive|function|static void udp_receive(struct net_context *ctx, struct net_pkt *pkt,int status, void *user_data)
DECL|used|member|bool used;
DECL|zoap_options_to_path|function|static void zoap_options_to_path(struct zoap_option *opt, int options_count, struct lwm2m_obj_path *path)
