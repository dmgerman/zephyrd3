DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|CMD_BUF_SIZE|macro|CMD_BUF_SIZE
DECL|EIR_COMPLETE_NAME|macro|EIR_COMPLETE_NAME
DECL|EIR_SHORT_NAME|macro|EIR_SHORT_NAME
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|__packed|variable|__packed
DECL|accept_conn|function|static int accept_conn(const bt_addr_t *bdaddr)
DECL|acl_data|struct|struct acl_data {
DECL|acl|macro|acl
DECL|auth_complete|function|static void auth_complete(struct net_buf *buf)
DECL|avail_acl_in|variable|avail_acl_in
DECL|avail_hci_cmd|variable|avail_hci_cmd
DECL|avail_hci_evt|variable|avail_hci_evt
DECL|br_init|function|static int br_init(void)
DECL|br_init|function|static int br_init(void)
DECL|br_start_inquiry|function|static int br_start_inquiry(bool limited)
DECL|bt_addr_le_is_bonded|function|bool bt_addr_le_is_bonded(const bt_addr_le_t *addr)
DECL|bt_addr_le_str|function|const char *bt_addr_le_str(const bt_addr_le_t *addr)
DECL|bt_addr_str|function|const char *bt_addr_str(const bt_addr_t *addr)
DECL|bt_br_discovery_start|function|int bt_br_discovery_start(const struct bt_br_discovery_param *param, struct bt_br_discovery_result *results, size_t cnt, bt_br_discovery_cb_t cb)
DECL|bt_br_discovery_stop|function|int bt_br_discovery_stop(void)
DECL|bt_br_set_connectable|function|int bt_br_set_connectable(bool enable)
DECL|bt_br_set_discoverable|function|int bt_br_set_discoverable(bool enable)
DECL|bt_buf_get_acl|function|struct net_buf *bt_buf_get_acl(void)
DECL|bt_buf_get_evt|function|struct net_buf *bt_buf_get_evt(void)
DECL|bt_conn_set_param_le|function|void bt_conn_set_param_le(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_conn_update_param_le|function|int bt_conn_update_param_le(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_dev|variable|bt_dev
DECL|bt_driver_register|function|int bt_driver_register(struct bt_driver *drv)
DECL|bt_driver_unregister|function|void bt_driver_unregister(struct bt_driver *drv)
DECL|bt_enable|function|int bt_enable(bt_ready_cb_t cb)
DECL|bt_hci_cmd_create|function|struct net_buf *bt_hci_cmd_create(uint16_t opcode, uint8_t param_len)
DECL|bt_hci_cmd_send_sync|function|int bt_hci_cmd_send_sync(uint16_t opcode, struct net_buf *buf, struct net_buf **rsp)
DECL|bt_hci_cmd_send|function|int bt_hci_cmd_send(uint16_t opcode, struct net_buf *buf)
DECL|bt_hci_stop_scanning|function|static int bt_hci_stop_scanning(void)
DECL|bt_init|function|static int bt_init(void)
DECL|bt_le_adv_start|function|int bt_le_adv_start(const struct bt_le_adv_param *param, const struct bt_data *ad, size_t ad_len, const struct bt_data *sd, size_t sd_len)
DECL|bt_le_adv_stop|function|int bt_le_adv_stop(void)
DECL|bt_le_scan_start|function|int bt_le_scan_start(const struct bt_le_scan_param *param, bt_le_scan_cb_t cb)
DECL|bt_le_scan_stop|function|int bt_le_scan_stop(void)
DECL|bt_le_scan_update|function|int bt_le_scan_update(bool fast_scan)
DECL|bt_rand|function|int bt_rand(void *buf, size_t len)
DECL|bt_recv|function|int bt_recv(struct net_buf *buf)
DECL|bt_storage_clear|function|int bt_storage_clear(bt_addr_le_t *addr)
DECL|bt_storage_register|function|void bt_storage_register(struct bt_storage *storage)
DECL|bt_storage|variable|bt_storage
DECL|check_pending_conn|function|static void check_pending_conn(const bt_addr_le_t *id_addr, const bt_addr_le_t *addr, uint8_t evtype)
DECL|clock_offset|member|uint16_t clock_offset;
DECL|cmd_data|struct|struct cmd_data {
DECL|cmd|macro|cmd
DECL|common_init|function|static int common_init(void)
DECL|conn_complete|function|static void conn_complete(struct net_buf *buf)
DECL|conn_req|function|static void conn_req(struct net_buf *buf)
DECL|discovery_cb|variable|discovery_cb
DECL|discovery_priv|struct|struct discovery_priv {
DECL|discovery_results_count|variable|discovery_results_count
DECL|discovery_results_full|function|static void discovery_results_full(void)
DECL|discovery_results_size|variable|discovery_results_size
DECL|discovery_results|variable|discovery_results
DECL|eir_has_name|function|static bool eir_has_name(const uint8_t *eir)
DECL|extended_inquiry_result|function|static void extended_inquiry_result(struct net_buf *buf)
DECL|find_id_addr|function|static const bt_addr_le_t *find_id_addr(const bt_addr_le_t *addr)
DECL|get_result_slot|function|static struct bt_br_discovery_result *get_result_slot(const bt_addr_t *addr)
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
DECL|hci_le_create_conn|function|static int hci_le_create_conn(const struct bt_conn *conn)
DECL|hci_le_meta_event|function|static void hci_le_meta_event(struct net_buf *buf)
DECL|hci_le_read_remote_features|function|static int hci_le_read_remote_features(struct bt_conn *conn)
DECL|hci_num_completed_packets|function|static void hci_num_completed_packets(struct net_buf *buf)
DECL|hci_reset_complete|function|static void hci_reset_complete(struct net_buf *buf)
DECL|hci_rx_fiber|function|static void hci_rx_fiber(bt_ready_cb_t ready_cb)
DECL|init_sem|function|static void init_sem(struct nano_sem *sem, size_t count)
DECL|inquiry_complete|function|static void inquiry_complete(struct net_buf *buf)
DECL|inquiry_result_with_rssi|function|static void inquiry_result_with_rssi(struct net_buf *buf)
DECL|io_capa_neg_reply|function|static void io_capa_neg_reply(const bt_addr_t *bdaddr, const uint8_t reason)
DECL|io_capa_req|function|static void io_capa_req(struct net_buf *buf)
DECL|io_capa_resp|function|static void io_capa_resp(struct net_buf *buf)
DECL|irk_init|function|static int irk_init(void)
DECL|le_adv_report|function|static void le_adv_report(struct net_buf *buf)
DECL|le_conn_complete|function|static void le_conn_complete(struct net_buf *buf)
DECL|le_conn_param_neg_reply|function|static int le_conn_param_neg_reply(uint16_t handle, uint8_t reason)
DECL|le_conn_param_req_reply|function|static int le_conn_param_req_reply(uint16_t handle, uint16_t min, uint16_t max, uint16_t latency, uint16_t timeout)
DECL|le_conn_param_req|function|static int le_conn_param_req(struct net_buf *buf)
DECL|le_conn_update_complete|function|static void le_conn_update_complete(struct net_buf *buf)
DECL|le_create_conn_status|function|static void le_create_conn_status(uint8_t status)
DECL|le_dhkey_complete|function|static void le_dhkey_complete(struct net_buf *buf)
DECL|le_init|function|static int le_init(void)
DECL|le_ltk_request|function|static void le_ltk_request(struct net_buf *buf)
DECL|le_pkey_complete|function|static void le_pkey_complete(struct net_buf *buf)
DECL|le_read_buffer_size_complete|function|static void le_read_buffer_size_complete(struct net_buf *buf)
DECL|le_remote_feat_complete|function|static void le_remote_feat_complete(struct net_buf *buf)
DECL|le_set_nrpa|function|static int le_set_nrpa(void)
DECL|le_set_rpa|function|static int le_set_rpa(void)
DECL|link_encr|function|static void link_encr(const uint16_t handle)
DECL|link_key_neg_reply|function|static void link_key_neg_reply(const bt_addr_t *bdaddr)
DECL|link_key_notify|function|static void link_key_notify(struct net_buf *buf)
DECL|link_key_reply|function|static void link_key_reply(const bt_addr_t *bdaddr, const uint8_t *lk)
DECL|link_key_req|function|static void link_key_req(struct net_buf *buf)
DECL|opcode|member|uint16_t opcode;
DECL|pin_code_req|function|static void pin_code_req(struct net_buf *buf)
DECL|prng_init|function|static int prng_init(struct tc_hmac_prng_struct *h)
DECL|prng_reseed|function|static int prng_reseed(struct tc_hmac_prng_struct *h)
DECL|prng|variable|prng
DECL|pscan_rep_mode|member|uint8_t pscan_rep_mode;
DECL|read_bdaddr_complete|function|static void read_bdaddr_complete(struct net_buf *buf)
DECL|read_buffer_size_complete|function|static void read_buffer_size_complete(struct net_buf *buf)
DECL|read_buffer_size_complete|function|static void read_buffer_size_complete(struct net_buf *buf)
DECL|read_le_features_complete|function|static void read_le_features_complete(struct net_buf *buf)
DECL|read_local_features_complete|function|static void read_local_features_complete(struct net_buf *buf)
DECL|read_local_ver_complete|function|static void read_local_ver_complete(struct net_buf *buf)
DECL|read_supported_commands_complete|function|static void read_supported_commands_complete(struct net_buf *buf)
DECL|reject_conn|function|static int reject_conn(const bt_addr_t *bdaddr, uint8_t reason)
DECL|remote_name_request_complete|function|static void remote_name_request_complete(struct net_buf *buf)
DECL|report_completed_packet|function|static void report_completed_packet(struct net_buf *buf)
DECL|report_discovery_results|function|static void report_discovery_results(void)
DECL|request_name|function|static int request_name(const bt_addr_t *addr, uint8_t pscan, uint16_t offset)
DECL|resolving|member|uint8_t resolving;
DECL|rx_prio_fiber|function|static void rx_prio_fiber(void)
DECL|scan_dev_found_cb|variable|scan_dev_found_cb
DECL|set_adv_param_complete|function|static void set_adv_param_complete(struct net_buf *buf)
DECL|set_advertise_disable|function|static int set_advertise_disable(void)
DECL|set_advertise_enable|function|static int set_advertise_enable(void)
DECL|set_ad|function|static int set_ad(uint16_t hci_op, const struct bt_data *ad, size_t ad_len)
DECL|set_event_mask|function|static int set_event_mask(void)
DECL|set_flow_control|function|static int set_flow_control(void)
DECL|set_random_address_complete|function|static void set_random_address_complete(struct net_buf *buf)
DECL|set_random_address|function|static int set_random_address(const bt_addr_t *addr)
DECL|set_static_addr|function|static int set_static_addr(void)
DECL|ssp_complete|function|static void ssp_complete(struct net_buf *buf)
DECL|start_le_scan|function|static int start_le_scan(uint8_t scan_type, uint16_t interval, uint16_t window, uint8_t filter_dup)
DECL|sync|member|void *sync;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|update_conn_param|function|static int update_conn_param(struct bt_conn *conn)
DECL|update_sec_level_br|function|static void update_sec_level_br(struct bt_conn *conn)
DECL|update_sec_level|function|static void update_sec_level(struct bt_conn *conn)
DECL|user_confirm_req|function|static void user_confirm_req(struct net_buf *buf)
DECL|user_passkey_notify|function|static void user_passkey_notify(struct net_buf *buf)
DECL|user_passkey_req|function|static void user_passkey_req(struct net_buf *buf)
DECL|valid_adv_param|function|static bool valid_adv_param(const struct bt_le_adv_param *param)
DECL|valid_le_scan_param|function|static bool valid_le_scan_param(const struct bt_le_scan_param *param)
DECL|write_scan_enable|function|static int write_scan_enable(uint8_t scan)
