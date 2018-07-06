DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|cb|variable|cb
DECL|iface_cb|function|static void iface_cb(struct net_if *iface, void *user_data)
DECL|iface_event_handler|function|static void iface_event_handler(struct net_mgmt_event_callback *cb,u32_t mgmt_event, struct net_if *iface)
DECL|lldp_check_iface|function|static int lldp_check_iface(struct net_if *iface)
DECL|lldp_check_timeout|function|static bool lldp_check_timeout(s64_t start, u32_t time, s64_t timeout)
DECL|lldp_find|function|static int lldp_find(struct ethernet_context *ctx, struct net_if *iface)
DECL|lldp_ifaces|variable|lldp_ifaces
DECL|lldp_manage_timeouts|function|static u32_t lldp_manage_timeouts(struct ethernet_lldp *lldp, s64_t timeout)
DECL|lldp_send|function|static int lldp_send(struct ethernet_lldp *lldp)
DECL|lldp_start_timer|function|static void lldp_start_timer(struct ethernet_context *ctx, struct net_if *iface, int slot)
DECL|lldp_start|function|static int lldp_start(struct net_if *iface, u32_t mgmt_event)
DECL|lldp_submit_work|function|static void lldp_submit_work(u32_t timeout)
DECL|lldp_timedout|function|static bool lldp_timedout(struct ethernet_lldp *lldp, s64_t timeout)
DECL|lldp_tx_timeout|function|static void lldp_tx_timeout(struct k_work *work)
DECL|lldp_tx_timer|variable|lldp_tx_timer
DECL|net_lldp_config|function|int net_lldp_config(struct net_if *iface, const struct net_lldpdu *lldpdu)
DECL|net_lldp_init|function|void net_lldp_init(void)
DECL|net_lldp_recv|function|enum net_verdict net_lldp_recv(struct net_if *iface, struct net_pkt *pkt)
DECL|net_lldp_register_callback|function|int net_lldp_register_callback(struct net_if *iface, net_lldp_recv_cb_t cb)
