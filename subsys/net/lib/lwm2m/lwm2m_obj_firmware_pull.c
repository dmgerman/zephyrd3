DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|NETWORK_CONNECT_TIMEOUT|macro|NETWORK_CONNECT_TIMEOUT
DECL|NETWORK_INIT_TIMEOUT|macro|NETWORK_INIT_TIMEOUT
DECL|PACKAGE_URI_LEN|macro|PACKAGE_URI_LEN
DECL|PACKET_TRANSFER_RETRY_MAX|macro|PACKET_TRANSFER_RETRY_MAX
DECL|PROXY_URI_LEN|macro|PROXY_URI_LEN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|do_firmware_transfer_reply_cb|function|do_firmware_transfer_reply_cb(const struct coap_packet *response, struct coap_reply *reply, const struct sockaddr *from)
DECL|do_transmit_timeout_cb|function|static void do_transmit_timeout_cb(struct lwm2m_message *msg)
DECL|firmware_block_ctx|variable|firmware_block_ctx
DECL|firmware_ctx|variable|firmware_ctx
DECL|firmware_retry|variable|firmware_retry
DECL|firmware_transfer|function|static void firmware_transfer(struct k_work *work)
DECL|firmware_udp_receive|function|firmware_udp_receive(struct net_app_ctx *app_ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|firmware_uri|variable|firmware_uri
DECL|firmware_work|variable|firmware_work
DECL|lwm2m_firmware_cancel_transfer|function|int lwm2m_firmware_cancel_transfer(void)
DECL|lwm2m_firmware_start_transfer|function|int lwm2m_firmware_start_transfer(char *package_uri)
DECL|parsed_uri|variable|parsed_uri
DECL|proxy_uri|variable|proxy_uri
DECL|transfer_empty_ack|function|static int transfer_empty_ack(u16_t mid)
DECL|transfer_request|function|static int transfer_request(struct coap_block_context *ctx, u8_t *token, u8_t tkl, coap_reply_t reply_cb)
