DECL|BEACON_INTERVAL|macro|BEACON_INTERVAL
DECL|BEACON_TYPE_SECURE|macro|BEACON_TYPE_SECURE
DECL|BEACON_TYPE_UNPROVISIONED|macro|BEACON_TYPE_UNPROVISIONED
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|PROVISIONED_INTERVAL|macro|PROVISIONED_INTERVAL
DECL|PROV_XMIT_COUNT|macro|PROV_XMIT_COUNT
DECL|PROV_XMIT_INT|macro|PROV_XMIT_INT
DECL|UNPROVISIONED_INTERVAL|macro|UNPROVISIONED_INTERVAL
DECL|UNPROV_XMIT_COUNT|macro|UNPROV_XMIT_COUNT
DECL|UNPROV_XMIT_INT|macro|UNPROV_XMIT_INT
DECL|beacon_cache|variable|beacon_cache
DECL|beacon_complete|function|static void beacon_complete(struct net_buf *buf, int err)
DECL|beacon_send|function|static void beacon_send(struct k_work *work)
DECL|beacon_timer|variable|beacon_timer
DECL|bt_mesh_beacon_create|function|void bt_mesh_beacon_create(struct bt_mesh_subnet *sub, struct net_buf_simple *buf)
DECL|bt_mesh_beacon_disable|function|void bt_mesh_beacon_disable(void)
DECL|bt_mesh_beacon_enable|function|void bt_mesh_beacon_enable(void)
DECL|bt_mesh_beacon_init|function|void bt_mesh_beacon_init(void)
DECL|bt_mesh_beacon_ivu_initiator|function|void bt_mesh_beacon_ivu_initiator(bool enable)
DECL|bt_mesh_beacon_recv|function|void bt_mesh_beacon_recv(struct net_buf_simple *buf)
DECL|cache_add|function|static void cache_add(u8_t data[21], u16_t net_idx)
DECL|cache_check|function|static struct bt_mesh_subnet *cache_check(u8_t data[21])
DECL|data|member|u8_t data[21];
DECL|net_idx|member|u16_t net_idx;
DECL|secure_beacon_recv|function|static void secure_beacon_recv(struct net_buf_simple *buf)
DECL|secure_beacon_send|function|static int secure_beacon_send(void)
DECL|unprovisioned_beacon_send|function|static int unprovisioned_beacon_send(void)
DECL|update_beacon_observation|function|static void update_beacon_observation(void)
