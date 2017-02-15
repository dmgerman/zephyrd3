DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|CMD_BUF_SIZE|macro|CMD_BUF_SIZE
DECL|CONN_UPDATE_TIMEOUT|macro|CONN_UPDATE_TIMEOUT
DECL|EIR_COMPLETE_NAME|macro|EIR_COMPLETE_NAME
DECL|EIR_SHORT_NAME|macro|EIR_SHORT_NAME
DECL|EV_COUNT|macro|EV_COUNT
DECL|EV_COUNT|macro|EV_COUNT
DECL|RPA_TIMEOUT|macro|RPA_TIMEOUT
DECL|__packed|variable|__packed
DECL|accept_conn|function|static int accept_conn(const bt_addr_t *bdaddr)
DECL|accept_sco_conn|function|static int accept_sco_conn(const bt_addr_t *bdaddr, struct bt_conn *sco_conn)
DECL|acl_data|struct|struct acl_data {
DECL|acl|macro|acl
DECL|auth_complete|function|static void auth_complete(struct net_buf *buf)
DECL|br_init|function|static int br_init(void)
DECL|br_init|function|static int br_init(void)
DECL|br_start_inquiry|function|static int br_start_inquiry(const struct bt_br_discovery_param *param)
DECL|bt_addr_le_create_nrpa|function|int bt_addr_le_create_nrpa(bt_addr_le_t *addr)
DECL|bt_addr_le_create_static|function|int bt_addr_le_create_static(bt_addr_le_t *addr)
DECL|bt_addr_le_is_bonded|function|bool bt_addr_le_is_bonded(const bt_addr_le_t *addr)
DECL|bt_addr_le_str|function|const char *bt_addr_le_str(const bt_addr_le_t *addr)
DECL|bt_addr_str|function|const char *bt_addr_str(const bt_addr_t *addr)
DECL|bt_br_discovery_start|function|int bt_br_discovery_start(const struct bt_br_discovery_param *param, struct bt_br_discovery_result *results, size_t cnt, bt_br_discovery_cb_t cb)
DECL|bt_br_discovery_stop|function|int bt_br_discovery_stop(void)
DECL|bt_br_oob_get_local|function|int bt_br_oob_get_local(struct bt_br_oob *oob)
DECL|bt_br_set_connectable|function|int bt_br_set_connectable(bool enable)
DECL|bt_br_set_discoverable|function|int bt_br_set_discoverable(bool enable)
DECL|bt_buf_get_cmd_complete|function|struct net_buf *bt_buf_get_cmd_complete(int32_t timeout)
DECL|bt_buf_get_rx|function|struct net_buf *bt_buf_get_rx(int32_t timeout)
DECL|bt_dev|variable|bt_dev
DECL|bt_dh_key_gen|function|int bt_dh_key_gen(const uint8_t remote_pk[64], bt_dh_key_cb_t cb)
DECL|bt_enable|function|int bt_enable(bt_ready_cb_t cb)
DECL|bt_esco_conn_req|function|static void bt_esco_conn_req(struct bt_hci_evt_conn_request *evt)
DECL|bt_hci_cmd_create|function|struct net_buf *bt_hci_cmd_create(uint16_t opcode, uint8_t param_len)
DECL|bt_hci_cmd_send_sync|function|int bt_hci_cmd_send_sync(uint16_t opcode, struct net_buf *buf, struct net_buf **rsp)
DECL|bt_hci_cmd_send|function|int bt_hci_cmd_send(uint16_t opcode, struct net_buf *buf)
DECL|bt_hci_driver_register|function|int bt_hci_driver_register(struct bt_hci_driver *drv)
DECL|bt_hci_get_cmd_opcode|function|uint16_t bt_hci_get_cmd_opcode(struct net_buf *buf)
DECL|bt_hci_stop_scanning|function|static int bt_hci_stop_scanning(void)
DECL|bt_init|function|static int bt_init(void)
DECL|bt_le_adv_start|function|int bt_le_adv_start(const struct bt_le_adv_param *param, const struct bt_data *ad, size_t ad_len, const struct bt_data *sd, size_t sd_len)
DECL|bt_le_adv_stop|function|int bt_le_adv_stop(void)
DECL|bt_le_conn_params_valid|function|bool bt_le_conn_params_valid(const struct bt_le_conn_param *param)
DECL|bt_le_oob_get_local|function|int bt_le_oob_get_local(struct bt_le_oob *oob)
DECL|bt_le_scan_start|function|int bt_le_scan_start(const struct bt_le_scan_param *param, bt_le_scan_cb_t cb)
DECL|bt_le_scan_stop|function|int bt_le_scan_stop(void)
DECL|bt_le_scan_update|function|int bt_le_scan_update(bool fast_scan)
DECL|bt_pub_key_gen|function|int bt_pub_key_gen(struct bt_pub_key_cb *new_cb)
DECL|bt_pub_key_get|function|const uint8_t *bt_pub_key_get(void)
DECL|bt_rand|function|int bt_rand(void *buf, size_t len)
DECL|bt_recv_prio|function|int bt_recv_prio(struct net_buf *buf)
DECL|bt_recv|function|int bt_recv(struct net_buf *buf)
DECL|bt_send|function|int bt_send(struct net_buf *buf)
DECL|bt_storage_clear_all|function|static int bt_storage_clear_all(void)
DECL|bt_storage_clear|function|int bt_storage_clear(const bt_addr_le_t *addr)
DECL|bt_storage_register|function|void bt_storage_register(const struct bt_storage *storage)
DECL|bt_storage|variable|bt_storage
DECL|check_pending_conn|function|static void check_pending_conn(const bt_addr_le_t *id_addr, const bt_addr_le_t *addr, uint8_t evtype)
DECL|clock_offset|member|uint16_t clock_offset;
DECL|cmd_data|struct|struct cmd_data {
DECL|cmd|macro|cmd
DECL|common_init|function|static int common_init(void)
DECL|conn_complete|function|static void conn_complete(struct net_buf *buf)
DECL|conn_req|function|static void conn_req(struct net_buf *buf)
DECL|create_random_addr|function|static inline int create_random_addr(bt_addr_le_t *addr)
DECL|device_supported_pkt_type|function|void device_supported_pkt_type(void)
DECL|dh_key_cb|variable|dh_key_cb
DECL|discovery_cb|variable|discovery_cb
DECL|discovery_priv|struct|struct discovery_priv {
DECL|discovery_results_count|variable|discovery_results_count
DECL|discovery_results_size|variable|discovery_results_size
DECL|discovery_results|variable|discovery_results
DECL|eir_has_name|function|static bool eir_has_name(const uint8_t *eir)
DECL|extended_inquiry_result|function|static void extended_inquiry_result(struct net_buf *buf)
DECL|find_id_addr|function|static const bt_addr_le_t *find_id_addr(const bt_addr_le_t *addr)
DECL|get_result_slot|function|static struct bt_br_discovery_result *get_result_slot(const bt_addr_t *addr, int8_t rssi)
DECL|handle|member|uint16_t handle;
DECL|hci_acl|function|static void hci_acl(struct net_buf *buf)
DECL|hci_cmd_complete|function|static void hci_cmd_complete(struct net_buf *buf)
DECL|hci_cmd_done|function|static void hci_cmd_done(uint16_t opcode, uint8_t status, struct net_buf *buf)
DECL|hci_cmd_status|function|static void hci_cmd_status(struct net_buf *buf)
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
DECL|hci_rx_thread|function|static void hci_rx_thread(void)
DECL|hci_tx_thread|function|static void hci_tx_thread(void *p1, void *p2, void *p3)
DECL|init_work|function|static void init_work(struct k_work *work)
DECL|inquiry_complete|function|static void inquiry_complete(struct net_buf *buf)
DECL|inquiry_result_with_rssi|function|static void inquiry_result_with_rssi(struct net_buf *buf)
DECL|io_capa_neg_reply|function|static void io_capa_neg_reply(const bt_addr_t *bdaddr, const uint8_t reason)
DECL|io_capa_req|function|static void io_capa_req(struct net_buf *buf)
DECL|io_capa_resp|function|static void io_capa_resp(struct net_buf *buf)
DECL|irk_init|function|static int irk_init(void)
DECL|le_adv_report|function|static void le_adv_report(struct net_buf *buf)
DECL|le_conn_complete|function|static void le_conn_complete(struct net_buf *buf)
DECL|le_conn_param_neg_reply|function|static int le_conn_param_neg_reply(uint16_t handle, uint8_t reason)
DECL|le_conn_param_req_reply|function|static int le_conn_param_req_reply(uint16_t handle, const struct bt_le_conn_param *param)
DECL|le_conn_param_req|function|static int le_conn_param_req(struct net_buf *buf)
DECL|le_conn_update_complete|function|static void le_conn_update_complete(struct net_buf *buf)
DECL|le_dhkey_complete|function|static void le_dhkey_complete(struct net_buf *buf)
DECL|le_init|function|static int le_init(void)
DECL|le_ltk_request|function|static void le_ltk_request(struct net_buf *buf)
DECL|le_pkey_complete|function|static void le_pkey_complete(struct net_buf *buf)
DECL|le_read_buffer_size_complete|function|static void le_read_buffer_size_complete(struct net_buf *buf)
DECL|le_read_supp_states_complete|function|static void le_read_supp_states_complete(struct net_buf *buf)
DECL|le_remote_feat_complete|function|static void le_remote_feat_complete(struct net_buf *buf)
DECL|le_set_private_addr|function|static int le_set_private_addr(void)
DECL|le_set_private_addr|function|static int le_set_private_addr(void)
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
DECL|process_events|function|static void process_events(struct k_poll_event *ev, int count)
DECL|pscan_rep_mode|member|uint8_t pscan_rep_mode;
DECL|pub_key_cb|variable|pub_key_cb
DECL|pub_key|variable|pub_key
DECL|read_bdaddr_complete|function|static void read_bdaddr_complete(struct net_buf *buf)
DECL|read_buffer_size_complete|function|static void read_buffer_size_complete(struct net_buf *buf)
DECL|read_buffer_size_complete|function|static void read_buffer_size_complete(struct net_buf *buf)
DECL|read_ext_features|function|static int read_ext_features(void)
DECL|read_le_features_complete|function|static void read_le_features_complete(struct net_buf *buf)
DECL|read_local_features_complete|function|static void read_local_features_complete(struct net_buf *buf)
DECL|read_local_ver_complete|function|static void read_local_ver_complete(struct net_buf *buf)
DECL|read_remote_ext_features_complete|function|static void read_remote_ext_features_complete(struct net_buf *buf)
DECL|read_remote_features_complete|function|static void read_remote_features_complete(struct net_buf *buf)
DECL|read_supported_commands_complete|function|static void read_supported_commands_complete(struct net_buf *buf)
DECL|ready_cb|variable|ready_cb
DECL|reject_conn|function|static int reject_conn(const bt_addr_t *bdaddr, uint8_t reason)
DECL|remote_name_request_complete|function|static void remote_name_request_complete(struct net_buf *buf)
DECL|report_discovery_results|function|static void report_discovery_results(void)
DECL|request_name|function|static int request_name(const bt_addr_t *addr, uint8_t pscan, uint16_t offset)
DECL|reset_pairing|function|static void reset_pairing(struct bt_conn *conn)
DECL|resolving|member|uint8_t resolving;
DECL|role_change|function|static void role_change(struct net_buf *buf)
DECL|rpa_timeout|function|static void rpa_timeout(struct k_work *work)
DECL|scan_dev_found_cb|variable|scan_dev_found_cb
DECL|send_cmd|function|static void send_cmd(void)
DECL|set_advertise_enable|function|static int set_advertise_enable(bool enable)
DECL|set_ad|function|static int set_ad(uint16_t hci_op, const struct bt_data *ad, size_t ad_len)
DECL|set_event_mask|function|static int set_event_mask(void)
DECL|set_random_address|function|static int set_random_address(const bt_addr_t *addr)
DECL|set_static_addr|function|static int set_static_addr(void)
DECL|show_dev_info|function|static inline void show_dev_info(void)
DECL|show_dev_info|function|static void show_dev_info(void)
DECL|ssp_complete|function|static void ssp_complete(struct net_buf *buf)
DECL|start_le_scan|function|static int start_le_scan(uint8_t scan_type, uint16_t interval, uint16_t window, uint8_t filter_dup)
DECL|status|member|uint8_t status;
DECL|synchronous_conn_complete|function|static void synchronous_conn_complete(struct net_buf *buf)
DECL|sync|member|struct k_sem *sync;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|update_conn_param|function|static void update_conn_param(struct bt_conn *conn)
DECL|update_sec_level_br|function|static void update_sec_level_br(struct bt_conn *conn)
DECL|update_sec_level|function|static void update_sec_level(struct bt_conn *conn)
DECL|user_confirm_req|function|static void user_confirm_req(struct net_buf *buf)
DECL|user_passkey_notify|function|static void user_passkey_notify(struct net_buf *buf)
DECL|user_passkey_req|function|static void user_passkey_req(struct net_buf *buf)
DECL|valid_adv_param|function|static bool valid_adv_param(const struct bt_le_adv_param *param)
DECL|valid_br_discov_param|function|static bool valid_br_discov_param(const struct bt_br_discovery_param *param, size_t num_results)
DECL|valid_le_scan_param|function|static bool valid_le_scan_param(const struct bt_le_scan_param *param)
DECL|ver_str|function|static const char *ver_str(uint8_t ver)
DECL|write_scan_enable|function|static int write_scan_enable(uint8_t scan)
