DECL|CLIENT_EP_LEN|macro|CLIENT_EP_LEN
DECL|CLIENT_INSTANCE_COUNT|macro|CLIENT_INSTANCE_COUNT
DECL|ENGINE_BOOTSTRAP_DONE|enumerator|ENGINE_BOOTSTRAP_DONE,
DECL|ENGINE_BOOTSTRAP_SENT|enumerator|ENGINE_BOOTSTRAP_SENT,
DECL|ENGINE_DEREGISTERED|enumerator|ENGINE_DEREGISTERED
DECL|ENGINE_DEREGISTER_FAILED|enumerator|ENGINE_DEREGISTER_FAILED,
DECL|ENGINE_DEREGISTER_SENT|enumerator|ENGINE_DEREGISTER_SENT,
DECL|ENGINE_DEREGISTER|enumerator|ENGINE_DEREGISTER,
DECL|ENGINE_DO_BOOTSTRAP|enumerator|ENGINE_DO_BOOTSTRAP,
DECL|ENGINE_DO_REGISTRATION|enumerator|ENGINE_DO_REGISTRATION,
DECL|ENGINE_INIT|enumerator|ENGINE_INIT,
DECL|ENGINE_REGISTRATION_DONE|enumerator|ENGINE_REGISTRATION_DONE,
DECL|ENGINE_REGISTRATION_SENT|enumerator|ENGINE_REGISTRATION_SENT,
DECL|ENGINE_UPDATE_SENT|enumerator|ENGINE_UPDATE_SENT,
DECL|LWM2M_BOOTSTRAP_PORT|macro|LWM2M_BOOTSTRAP_PORT
DECL|LWM2M_PEER_PORT|macro|LWM2M_PEER_PORT
DECL|LWM2M_RD_CLIENT_URI|macro|LWM2M_RD_CLIENT_URI
DECL|NUM_PENDINGS|macro|NUM_PENDINGS
DECL|NUM_REPLIES|macro|NUM_REPLIES
DECL|SECONDS_TO_UPDATE_EARLY|macro|SECONDS_TO_UPDATE_EARLY
DECL|STATE_MACHINE_UPDATE_INTERVAL|macro|STATE_MACHINE_UPDATE_INTERVAL
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|bootstrapped|member|u8_t bootstrapped; /* bootstrap done */
DECL|bs_server|member|struct sockaddr bs_server;
DECL|client_count|variable|client_count
DECL|client_data|variable|client_data
DECL|clients|variable|clients
DECL|ctx|member|struct lwm2m_ctx *ctx;
DECL|do_bootstrap_reply_cb|function|static int do_bootstrap_reply_cb(const struct zoap_packet *response, struct zoap_reply *reply, const struct sockaddr *from)
DECL|do_deregister_reply_cb|function|static int do_deregister_reply_cb(const struct zoap_packet *response, struct zoap_reply *reply, const struct sockaddr *from)
DECL|do_registration_reply_cb|function|static int do_registration_reply_cb(const struct zoap_packet *response, struct zoap_reply *reply, const struct sockaddr *from)
DECL|do_update_reply_cb|function|static int do_update_reply_cb(const struct zoap_packet *response, struct zoap_reply *reply, const struct sockaddr *from)
DECL|engine_state|member|u8_t engine_state;
DECL|engine_trigger_update|function|void engine_trigger_update(void)
DECL|ep_name|member|char ep_name[CLIENT_EP_LEN];
DECL|find_clients_index|function|static int find_clients_index(const struct sockaddr *addr, bool check_bs_server)
DECL|get_sm_state|function|static u8_t get_sm_state(int index)
DECL|has_bs_server_info|member|u8_t has_bs_server_info;
DECL|has_registration_info|member|u8_t has_registration_info;
DECL|last_update|member|s64_t last_update;
DECL|lifetime|member|u16_t lifetime;
DECL|lwm2m_rd_client_info|struct|struct lwm2m_rd_client_info {
DECL|lwm2m_rd_client_init|function|static int lwm2m_rd_client_init(struct device *dev)
DECL|lwm2m_rd_client_service|function|static void lwm2m_rd_client_service(void)
DECL|lwm2m_rd_client_start|function|int lwm2m_rd_client_start(struct lwm2m_ctx *client_ctx, struct sockaddr *peer_addr, const char *ep_name)
DECL|lwm2m_rd_client_thread_data|variable|lwm2m_rd_client_thread_data
DECL|peer_addr_exist|function|static bool peer_addr_exist(struct sockaddr *peer_addr)
DECL|query_buffer|variable|query_buffer
DECL|reg_server|member|struct sockaddr reg_server;
DECL|registered|member|u8_t registered;
DECL|server_ep|member|char server_ep[CLIENT_EP_LEN];
DECL|set_ep_ports|function|static void set_ep_ports(int index)
DECL|set_sm_state|function|static void set_sm_state(int index, u8_t state)
DECL|sm_bootstrap_done|function|static int sm_bootstrap_done(int index)
DECL|sm_do_bootstrap|function|static int sm_do_bootstrap(int index)
DECL|sm_do_deregister|function|static int sm_do_deregister(int index)
DECL|sm_do_init|function|static int sm_do_init(int index)
DECL|sm_do_registration|function|static int sm_do_registration(int index)
DECL|sm_engine_state|enum|enum sm_engine_state {
DECL|sm_registration_done|function|static int sm_registration_done(int index)
DECL|sm_send_registration|function|static int sm_send_registration(int index, bool send_obj_support_data,zoap_reply_t reply_cb)
DECL|trigger_update|member|u8_t trigger_update;
DECL|use_bootstrap|member|u8_t use_bootstrap;
DECL|use_registration|member|u8_t use_registration;
