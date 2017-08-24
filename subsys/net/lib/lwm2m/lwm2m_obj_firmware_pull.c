DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|NUM_PENDINGS|macro|NUM_PENDINGS
DECL|NUM_REPLIES|macro|NUM_REPLIES
DECL|PACKAGE_URI_LEN|macro|PACKAGE_URI_LEN
DECL|STATE_CONNECTING|macro|STATE_CONNECTING
DECL|STATE_IDLE|macro|STATE_IDLE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|default_block_size|function|static enum zoap_block_size default_block_size(void)
DECL|do_firmware_transfer_reply_cb|function|do_firmware_transfer_reply_cb(const struct zoap_packet *response, struct zoap_reply *reply, const struct sockaddr *from)
DECL|firmware_addr|variable|firmware_addr
DECL|firmware_block_ctx|variable|firmware_block_ctx
DECL|firmware_ctx|variable|firmware_ctx
DECL|firmware_transfer|function|static void firmware_transfer(struct k_work *work)
DECL|firmware_udp_receive|function|firmware_udp_receive(struct net_context *ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|firmware_uri|variable|firmware_uri
DECL|firmware_work|variable|firmware_work
DECL|lwm2m_firmware_cancel_transfer|function|int lwm2m_firmware_cancel_transfer(void)
DECL|lwm2m_firmware_start_transfer|function|int lwm2m_firmware_start_transfer(char *package_uri)
DECL|pendings|variable|pendings
DECL|replies|variable|replies
DECL|retransmit_request|function|static void retransmit_request(struct k_work *work)
DECL|transfer_request|function|static int transfer_request(struct zoap_block_context *ctx, const u8_t *token, u8_t tkl, zoap_reply_t reply_cb)
DECL|transfer_state|variable|transfer_state
