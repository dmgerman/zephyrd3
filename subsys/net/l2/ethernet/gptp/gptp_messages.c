DECL|NET_BUF_TIMEOUT|macro|NET_BUF_TIMEOUT
DECL|NET_GPTP_INFO|macro|NET_GPTP_INFO
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|gptp_handle_follow_up|function|int gptp_handle_follow_up(int port, struct net_pkt *pkt)
DECL|gptp_handle_pdelay_follow_up|function|int gptp_handle_pdelay_follow_up(int port, struct net_pkt *pkt)
DECL|gptp_handle_pdelay_req|function|void gptp_handle_pdelay_req(int port, struct net_pkt *pkt)
DECL|gptp_handle_pdelay_resp|function|int gptp_handle_pdelay_resp(int port, struct net_pkt *pkt)
DECL|gptp_handle_signaling|function|void gptp_handle_signaling(int port, struct net_pkt *pkt)
DECL|gptp_handle_sync|function|void gptp_handle_sync(int port, struct net_pkt *pkt)
DECL|gptp_multicast_eth_addr|variable|gptp_multicast_eth_addr
DECL|gptp_pdelay_response_timestamp_callback|function|static void gptp_pdelay_response_timestamp_callback(struct net_pkt *pkt)
DECL|gptp_prepare_announce|function|struct net_pkt *gptp_prepare_announce(int port)
DECL|gptp_prepare_follow_up|function|struct net_pkt *gptp_prepare_follow_up(int port, struct net_pkt *sync)
DECL|gptp_prepare_pdelay_follow_up|function|struct net_pkt *gptp_prepare_pdelay_follow_up(int port, struct net_pkt *resp)
DECL|gptp_prepare_pdelay_req|function|struct net_pkt *gptp_prepare_pdelay_req(int port)
DECL|gptp_prepare_pdelay_resp|function|struct net_pkt *gptp_prepare_pdelay_resp(int port, struct net_pkt *req)
DECL|gptp_prepare_sync|function|struct net_pkt *gptp_prepare_sync(int port)
DECL|gptp_send_announce|function|void gptp_send_announce(int port, struct net_pkt *pkt)
DECL|gptp_send_follow_up|function|void gptp_send_follow_up(int port, struct net_pkt *pkt)
DECL|gptp_send_pdelay_follow_up|function|void gptp_send_pdelay_follow_up(int port, struct net_pkt *pkt,struct net_ptp_time *tresp)
DECL|gptp_send_pdelay_req|function|void gptp_send_pdelay_req(int port)
DECL|gptp_send_pdelay_resp|function|void gptp_send_pdelay_resp(int port, struct net_pkt *pkt, struct net_ptp_time *treq)
DECL|gptp_send_sync|function|void gptp_send_sync(int port, struct net_pkt *pkt)
DECL|gptp_sync_timestamp_callback|function|static void gptp_sync_timestamp_callback(struct net_pkt *pkt)
DECL|pdelay_response_timestamp_cb|variable|pdelay_response_timestamp_cb
DECL|sync_cb_registered|variable|sync_cb_registered
DECL|sync_timestamp_cb|variable|sync_timestamp_cb
DECL|ts_cb_registered|variable|ts_cb_registered
