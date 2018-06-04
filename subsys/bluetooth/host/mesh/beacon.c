DECL|BEACON_THRESHOLD|macro|BEACON_THRESHOLD
DECL|BEACON_TYPE_SECURE|macro|BEACON_TYPE_SECURE
DECL|BEACON_TYPE_UNPROVISIONED|macro|BEACON_TYPE_UNPROVISIONED
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|PROVISIONED_INTERVAL|macro|PROVISIONED_INTERVAL
DECL|PROV_XMIT|macro|PROV_XMIT
DECL|UNPROVISIONED_INTERVAL|macro|UNPROVISIONED_INTERVAL
DECL|UNPROV_XMIT|macro|UNPROV_XMIT
DECL|beacon_complete|function|static void beacon_complete(int err, void *user_data)
DECL|beacon_send|function|static void beacon_send(struct k_work *work)
DECL|beacon_timer|variable|beacon_timer
DECL|bt_mesh_beacon_create|function|void bt_mesh_beacon_create(struct bt_mesh_subnet *sub, struct net_buf_simple *buf)
DECL|bt_mesh_beacon_disable|function|void bt_mesh_beacon_disable(void)
DECL|bt_mesh_beacon_enable|function|void bt_mesh_beacon_enable(void)
DECL|bt_mesh_beacon_init|function|void bt_mesh_beacon_init(void)
DECL|bt_mesh_beacon_ivu_initiator|function|void bt_mesh_beacon_ivu_initiator(bool enable)
DECL|bt_mesh_beacon_recv|function|void bt_mesh_beacon_recv(struct net_buf_simple *buf)
DECL|cache_add|function|static void cache_add(u8_t data[21], struct bt_mesh_subnet *sub)
DECL|cache_check|function|static struct bt_mesh_subnet *cache_check(u8_t data[21])
DECL|secure_beacon_recv|function|static void secure_beacon_recv(struct net_buf_simple *buf)
DECL|secure_beacon_send|function|static int secure_beacon_send(void)
DECL|unprovisioned_beacon_send|function|static int unprovisioned_beacon_send(void)
DECL|update_beacon_observation|function|static void update_beacon_observation(void)
