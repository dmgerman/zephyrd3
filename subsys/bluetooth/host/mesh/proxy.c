DECL|ADV_OPT|macro|ADV_OPT
DECL|ADV_OPT|macro|ADV_OPT
DECL|ATTR_IS_PROV|macro|ATTR_IS_PROV
DECL|BLACKLIST|enumerator|BLACKLIST,
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|CFG_FILTER_ADD|macro|CFG_FILTER_ADD
DECL|CFG_FILTER_REMOVE|macro|CFG_FILTER_REMOVE
DECL|CFG_FILTER_SET|macro|CFG_FILTER_SET
DECL|CFG_FILTER_STATUS|macro|CFG_FILTER_STATUS
DECL|CLIENT_BUF_SIZE|macro|CLIENT_BUF_SIZE
DECL|ID_TYPE_NET|macro|ID_TYPE_NET
DECL|ID_TYPE_NODE|macro|ID_TYPE_NODE
DECL|MESH_GATT_NONE|enumerator|MESH_GATT_NONE,
DECL|MESH_GATT_PROV|enumerator|MESH_GATT_PROV,
DECL|MESH_GATT_PROXY|enumerator|MESH_GATT_PROXY,
DECL|NET_ID_LEN|macro|NET_ID_LEN
DECL|NODE_ID_LEN|macro|NODE_ID_LEN
DECL|NODE_ID_TIMEOUT|macro|NODE_ID_TIMEOUT
DECL|NONE|enumerator|NONE,
DECL|PDU_HDR|macro|PDU_HDR
DECL|PDU_SAR|macro|PDU_SAR
DECL|PDU_TYPE|macro|PDU_TYPE
DECL|PROV|enumerator|PROV,
DECL|SAR_COMPLETE|macro|SAR_COMPLETE
DECL|SAR_CONT|macro|SAR_CONT
DECL|SAR_FIRST|macro|SAR_FIRST
DECL|SAR_LAST|macro|SAR_LAST
DECL|WHITELIST|enumerator|WHITELIST,
DECL|__packed|enum|enum __packed {
DECL|advertise_subnet|function|static bool advertise_subnet(struct bt_mesh_subnet *sub)
DECL|beacon_send|function|static int beacon_send(struct bt_conn *conn, struct bt_mesh_subnet *sub)
DECL|bt_mesh_proxy_addr_add|function|void bt_mesh_proxy_addr_add(struct net_buf_simple *buf, u16_t addr)
DECL|bt_mesh_proxy_adv_start|function|s32_t bt_mesh_proxy_adv_start(void)
DECL|bt_mesh_proxy_adv_stop|function|void bt_mesh_proxy_adv_stop(void)
DECL|bt_mesh_proxy_beacon_send|function|void bt_mesh_proxy_beacon_send(struct bt_mesh_subnet *sub)
DECL|bt_mesh_proxy_client|struct|static struct bt_mesh_proxy_client {
DECL|bt_mesh_proxy_gatt_disable|function|int bt_mesh_proxy_gatt_disable(void)
DECL|bt_mesh_proxy_gatt_disconnect|function|void bt_mesh_proxy_gatt_disconnect(void)
DECL|bt_mesh_proxy_gatt_enable|function|int bt_mesh_proxy_gatt_enable(void)
DECL|bt_mesh_proxy_get_buf|function|struct net_buf_simple *bt_mesh_proxy_get_buf(void)
DECL|bt_mesh_proxy_identity_enable|function|int bt_mesh_proxy_identity_enable(void)
DECL|bt_mesh_proxy_identity_start|function|void bt_mesh_proxy_identity_start(struct bt_mesh_subnet *sub)
DECL|bt_mesh_proxy_identity_stop|function|void bt_mesh_proxy_identity_stop(struct bt_mesh_subnet *sub)
DECL|bt_mesh_proxy_init|function|int bt_mesh_proxy_init(void)
DECL|bt_mesh_proxy_prov_disable|function|int bt_mesh_proxy_prov_disable(void)
DECL|bt_mesh_proxy_prov_enable|function|int bt_mesh_proxy_prov_enable(void)
DECL|bt_mesh_proxy_relay|function|bool bt_mesh_proxy_relay(struct net_buf_simple *buf, u16_t dst)
DECL|bt_mesh_proxy_send|function|int bt_mesh_proxy_send(struct bt_conn *conn, u8_t type, struct net_buf_simple *msg)
DECL|buf|member|struct net_buf_simple buf;
DECL|client_buf_data|variable|client_buf_data
DECL|client_filter_match|function|static bool client_filter_match(struct bt_mesh_proxy_client *client,u16_t addr)
DECL|clients|variable|clients
DECL|conn_callbacks|variable|conn_callbacks
DECL|conn_count|variable|conn_count
DECL|conn|member|struct bt_conn *conn;
DECL|fast_adv_param|variable|fast_adv_param
DECL|filter_add|function|static void filter_add(struct bt_mesh_proxy_client *client, u16_t addr)
DECL|filter_remove|function|static void filter_remove(struct bt_mesh_proxy_client *client, u16_t addr)
DECL|filter_set|function|static int filter_set(struct bt_mesh_proxy_client *client, struct net_buf_simple *buf)
DECL|filter_type|member|} filter_type;
DECL|filter|member|u16_t filter[CONFIG_BT_MESH_PROXY_FILTER_SIZE];
DECL|find_client|function|static struct bt_mesh_proxy_client *find_client(struct bt_conn *conn)
DECL|gatt_prov_adv_create|function|static size_t gatt_prov_adv_create(struct bt_data prov_sd[2])
DECL|gatt_proxy_advertise|function|static s32_t gatt_proxy_advertise(struct bt_mesh_subnet *sub)
DECL|gatt_svc|variable|gatt_svc
DECL|msg_type|member|u8_t msg_type;
DECL|net_id_adv|function|static int net_id_adv(struct bt_mesh_subnet *sub)
DECL|net_id_ad|variable|net_id_ad
DECL|next_idx|variable|next_idx
DECL|next_sub|function|static struct bt_mesh_subnet *next_sub(void)
DECL|node_id_adv|function|static int node_id_adv(struct bt_mesh_subnet *sub)
DECL|node_id_ad|variable|node_id_ad
DECL|prov_ad|variable|prov_ad
DECL|prov_attrs|variable|prov_attrs
DECL|prov_ccc_read|function|static ssize_t prov_ccc_read(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|prov_ccc_val|variable|prov_ccc_val
DECL|prov_ccc_write|function|static ssize_t prov_ccc_write(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|prov_fast_adv|variable|prov_fast_adv
DECL|prov_svc_data|variable|prov_svc_data
DECL|prov_svc|variable|prov_svc
DECL|proxy_adv_enabled|variable|proxy_adv_enabled
DECL|proxy_attrs|variable|proxy_attrs
DECL|proxy_ccc_read|function|static ssize_t proxy_ccc_read(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|proxy_ccc_val|variable|proxy_ccc_val
DECL|proxy_ccc_write|function|static ssize_t proxy_ccc_write(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|proxy_cfg|function|static void proxy_cfg(struct bt_mesh_proxy_client *client)
DECL|proxy_complete_pdu|function|static void proxy_complete_pdu(struct bt_mesh_proxy_client *client)
DECL|proxy_connected|function|static void proxy_connected(struct bt_conn *conn, u8_t err)
DECL|proxy_disconnected|function|static void proxy_disconnected(struct bt_conn *conn, u8_t reason)
DECL|proxy_recv|function|static ssize_t proxy_recv(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|proxy_segment_and_send|function|static int proxy_segment_and_send(struct bt_conn *conn, u8_t type, struct net_buf_simple *msg)
DECL|proxy_send_beacons|function|static void proxy_send_beacons(struct k_work *work)
DECL|proxy_send|function|static int proxy_send(struct bt_conn *conn, const void *data, u16_t len)
DECL|proxy_svc_data|variable|proxy_svc_data
DECL|proxy_svc|variable|proxy_svc
DECL|send_beacons|member|struct k_work send_beacons;
DECL|send_filter_status|function|static void send_filter_status(struct bt_mesh_proxy_client *client, struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|slow_adv_param|variable|slow_adv_param
DECL|sub_count|function|static int sub_count(void)
