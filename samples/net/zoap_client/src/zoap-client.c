DECL|ALL_NODES_LOCAL_COAP_MCAST|macro|ALL_NODES_LOCAL_COAP_MCAST
DECL|MY_COAP_PORT|macro|MY_COAP_PORT
DECL|NUM_PENDINGS|macro|NUM_PENDINGS
DECL|NUM_REPLIES|macro|NUM_REPLIES
DECL|cb|variable|cb
DECL|context|variable|context
DECL|event_iface_up|function|static void event_iface_up(struct net_mgmt_event_callback *cb, u32_t mgmt_event, struct net_if *iface)
DECL|main|function|void main(void)
DECL|mcast_addr|variable|mcast_addr
DECL|msg_dump|function|static void msg_dump(const char *s, u8_t *data, unsigned len)
DECL|pendings|variable|pendings
DECL|replies|variable|replies
DECL|resource_reply_cb|function|static int resource_reply_cb(const struct zoap_packet *response, struct zoap_reply *reply, const struct sockaddr *from)
DECL|retransmit_request|function|static void retransmit_request(struct k_work *work)
DECL|retransmit_work|variable|retransmit_work
DECL|test_path|variable|test_path
DECL|udp_receive|function|static void udp_receive(struct net_context *context,struct net_pkt *pkt, int status, void *user_data)
