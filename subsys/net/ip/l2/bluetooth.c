DECL|CHAN_CTXT|macro|CHAN_CTXT
DECL|L2CAP_IPSP_MTU|macro|L2CAP_IPSP_MTU
DECL|L2CAP_IPSP_PSM|macro|L2CAP_IPSP_PSM
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|ad_parse|function|static bool ad_parse(struct net_buf_simple *ad, bool (*func)(uint8_t type, const uint8_t *data, uint8_t data_len, void *user_data), void *user_data)
DECL|bt_active_scan|function|static void bt_active_scan(void)
DECL|bt_connect|function|static int bt_connect(uint32_t mgmt_request, struct net_if *iface, void *data, size_t len)
DECL|bt_context_data|variable|bt_context_data
DECL|bt_context|struct|struct bt_context {
DECL|bt_if_api|variable|bt_if_api
DECL|bt_iface_init|function|static void bt_iface_init(struct net_if *iface)
DECL|bt_iface_send|function|static int bt_iface_send(struct net_if *iface, struct net_buf *buf)
DECL|bt_passive_scan|function|static void bt_passive_scan(void)
DECL|bt_scan_off|function|static void bt_scan_off(void)
DECL|bt_scan|function|static int bt_scan(uint32_t mgmt_request, struct net_if *iface, void *data, size_t len)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, uint8_t err)
DECL|default_conn|variable|default_conn
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, int8_t rssi, uint8_t type, struct net_buf_simple *ad)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, uint8_t reason)
DECL|dst|member|bt_addr_t dst;
DECL|eir_found|function|static bool eir_found(uint8_t type, const uint8_t *data, uint8_t data_len, void *user_data)
DECL|iface|member|struct net_if *iface;
DECL|ipsp_accept|function|static int ipsp_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|ipsp_alloc_buf|function|static struct net_buf *ipsp_alloc_buf(struct bt_l2cap_chan *chan)
DECL|ipsp_chan|member|struct bt_l2cap_le_chan ipsp_chan;
DECL|ipsp_connected|function|static void ipsp_connected(struct bt_l2cap_chan *chan)
DECL|ipsp_disconnected|function|static void ipsp_disconnected(struct bt_l2cap_chan *chan)
DECL|ipsp_ops|variable|ipsp_ops
DECL|ipsp_recv|function|static void ipsp_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|net_bt_enable|function|static int net_bt_enable(struct net_if *iface, bool state)
DECL|net_bt_init|function|static int net_bt_init(struct device *dev)
DECL|net_bt_recv|function|static enum net_verdict net_bt_recv(struct net_if *iface, struct net_buf *buf)
DECL|net_bt_reserve|function|static inline uint16_t net_bt_reserve(struct net_if *iface, void *unused)
DECL|net_bt_send|function|static enum net_verdict net_bt_send(struct net_if *iface, struct net_buf *buf)
DECL|server|variable|server
DECL|src|member|bt_addr_t src;
