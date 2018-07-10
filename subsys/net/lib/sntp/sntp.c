DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|OFFSET_1970_JAN_1|macro|OFFSET_1970_JAN_1
DECL|SNTP_CTX_SRV_SOCKADDR|macro|SNTP_CTX_SRV_SOCKADDR
DECL|SNTP_LI_MAX|macro|SNTP_LI_MAX
DECL|SNTP_MODE_CLIENT|macro|SNTP_MODE_CLIENT
DECL|SNTP_MODE_SERVER|macro|SNTP_MODE_SERVER
DECL|SNTP_STRATUM_KOD|macro|SNTP_STRATUM_KOD
DECL|SNTP_VERSION_NUMBER|macro|SNTP_VERSION_NUMBER
DECL|get_uptime_in_sec|function|static u32_t get_uptime_in_sec(void)
DECL|parse_response|function|static s32_t parse_response(u8_t *data, u16_t len, u32_t orig_ts,u64_t *epoch_time)
DECL|sntp_close|function|void sntp_close(struct sntp_ctx *ctx)
DECL|sntp_init|function|int sntp_init(struct sntp_ctx *ctx, const char *srv_addr, u16_t srv_port, u32_t timeout)
DECL|sntp_pkt_dump|function|static void sntp_pkt_dump(struct sntp_pkt *pkt)
DECL|sntp_recv_cb|function|static void sntp_recv_cb(struct net_app_ctx *ctx, struct net_pkt *pkt,int status, void *user_data)
DECL|sntp_request|function|int sntp_request(struct sntp_ctx *ctx, u32_t timeout, sntp_resp_cb_t callback, void *user_data)
