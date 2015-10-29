DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|avail_acl_in|variable|avail_acl_in
DECL|avail_hci_cmd|variable|avail_hci_cmd
DECL|avail_hci_evt|variable|avail_hci_evt
DECL|bt_acl_data|struct|struct bt_acl_data {
DECL|bt_acl|macro|bt_acl
DECL|bt_addr_le_str|function|const char *bt_addr_le_str(const bt_addr_le_t *addr)
DECL|bt_addr_str|function|const char *bt_addr_str(const bt_addr_t *addr)
DECL|bt_buf_get_acl|function|struct net_buf *bt_buf_get_acl(void)
DECL|bt_buf_get_evt|function|struct net_buf *bt_buf_get_evt(void)
DECL|bt_dev|variable|bt_dev
DECL|bt_driver_register|function|int bt_driver_register(struct bt_driver *drv)
DECL|bt_driver_unregister|function|void bt_driver_unregister(struct bt_driver *drv)
DECL|bt_enable|function|int bt_enable(bt_ready_cb_t cb)
DECL|bt_hci_cmd_create|function|struct net_buf *bt_hci_cmd_create(uint16_t opcode, uint8_t param_len)
DECL|bt_hci_cmd_send_sync|function|int bt_hci_cmd_send_sync(uint16_t opcode, struct net_buf *buf, struct net_buf **rsp)
DECL|bt_hci_cmd_send|function|int bt_hci_cmd_send(uint16_t opcode, struct net_buf *buf)
DECL|bt_hci_data|struct|struct bt_hci_data {
DECL|bt_hci_start_scanning|function|static int bt_hci_start_scanning(uint8_t scan_type)
DECL|bt_hci_stop_scanning|function|static int bt_hci_stop_scanning(void)
DECL|bt_hci|macro|bt_hci
DECL|bt_init|function|static int bt_init(void)
DECL|bt_le_scan_update|function|int bt_le_scan_update(void)
DECL|bt_recv|function|void bt_recv(struct net_buf *buf)
DECL|bt_start_advertising|function|int bt_start_advertising(uint8_t type, const struct bt_eir *ad, const struct bt_eir *sd)
DECL|bt_start_scanning|function|int bt_start_scanning(bt_scan_filter_dup_t filter, bt_le_scan_cb_t cb)
DECL|bt_stop_advertising|function|int bt_stop_advertising(void)
DECL|bt_stop_scanning|function|int bt_stop_scanning(void)
DECL|bt_type|function|static enum bt_buf_type bt_type(struct net_buf *buf)
DECL|check_pending_conn|function|static void check_pending_conn(const bt_addr_le_t *id_addr, const bt_addr_le_t *addr, uint8_t evtype)
DECL|find_id_addr|function|static const bt_addr_le_t *find_id_addr(const bt_addr_le_t *addr)
DECL|handle|member|uint16_t handle;
DECL|hci_acl|function|static void hci_acl(struct net_buf *buf)
DECL|hci_cmd_complete|function|static void hci_cmd_complete(struct net_buf *buf)
DECL|hci_cmd_done|function|static void hci_cmd_done(uint16_t opcode, uint8_t status, struct net_buf *buf)
DECL|hci_cmd_status|function|static void hci_cmd_status(struct net_buf *buf)
DECL|hci_cmd_tx_fiber|function|static void hci_cmd_tx_fiber(void)
DECL|hci_disconn_complete|function|static void hci_disconn_complete(struct net_buf *buf)
DECL|hci_encrypt_change|function|static void hci_encrypt_change(struct net_buf *buf)
DECL|hci_encrypt_key_refresh_complete|function|static void hci_encrypt_key_refresh_complete(struct net_buf *buf)
DECL|hci_event|function|static void hci_event(struct net_buf *buf)
DECL|hci_init|function|static int hci_init(void)
DECL|hci_le_create_conn|function|static int hci_le_create_conn(const bt_addr_le_t *addr)
DECL|hci_le_meta_event|function|static void hci_le_meta_event(struct net_buf *buf)
DECL|hci_le_read_remote_features|function|static int hci_le_read_remote_features(struct bt_conn *conn)
DECL|hci_num_completed_packets|function|static void hci_num_completed_packets(struct net_buf *buf)
DECL|hci_reset_complete|function|static void hci_reset_complete(struct net_buf *buf)
DECL|hci_rx_fiber|function|static void hci_rx_fiber(bt_ready_cb_t ready_cb)
DECL|le_adv_report|function|static void le_adv_report(struct net_buf *buf)
DECL|le_conn_complete|function|static void le_conn_complete(struct net_buf *buf)
DECL|le_conn_param_neg_reply|function|static int le_conn_param_neg_reply(uint16_t handle, uint8_t reason)
DECL|le_conn_param_req_reply|function|static int le_conn_param_req_reply(uint16_t handle, uint16_t min, uint16_t max, uint16_t latency, uint16_t timeout)
DECL|le_conn_param_req|function|static int le_conn_param_req(struct net_buf *buf)
DECL|le_conn_update_complete|function|static void le_conn_update_complete(struct net_buf *buf)
DECL|le_ltk_request|function|static void le_ltk_request(struct net_buf *buf)
DECL|le_read_buffer_size_complete|function|static void le_read_buffer_size_complete(struct net_buf *buf)
DECL|le_remote_feat_complete|function|static void le_remote_feat_complete(struct net_buf *buf)
DECL|opcode|member|uint16_t opcode;
DECL|read_bdaddr_complete|function|static void read_bdaddr_complete(struct net_buf *buf)
DECL|read_buffer_size_complete|function|static void read_buffer_size_complete(struct net_buf *buf)
DECL|read_le_features_complete|function|static void read_le_features_complete(struct net_buf *buf)
DECL|read_local_features_complete|function|static void read_local_features_complete(struct net_buf *buf)
DECL|read_local_ver_complete|function|static void read_local_ver_complete(struct net_buf *buf)
DECL|report_completed_packet|function|static void report_completed_packet(struct net_buf *buf)
DECL|rx_prio_fiber|function|static void rx_prio_fiber(void)
DECL|scan_dev_found_cb|variable|scan_dev_found_cb
DECL|set_flow_control|function|static int set_flow_control(void)
DECL|sync|member|void *sync;
DECL|update_conn_params|function|static int update_conn_params(struct bt_conn *conn)
DECL|update_sec_level|function|static void update_sec_level(struct bt_conn *conn)
