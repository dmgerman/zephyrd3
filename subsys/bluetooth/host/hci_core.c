DECL|ACL_IN_SIZE|macro|ACL_IN_SIZE
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|CMD_BUF_SIZE|macro|CMD_BUF_SIZE
DECL|CONN_UPDATE_TIMEOUT|macro|CONN_UPDATE_TIMEOUT
DECL|EIR_COMPLETE_NAME|macro|EIR_COMPLETE_NAME
DECL|EIR_SHORT_NAME|macro|EIR_SHORT_NAME
DECL|EV_COUNT|macro|EV_COUNT
DECL|EV_COUNT|macro|EV_COUNT
DECL|HCI_CMD_TIMEOUT|macro|HCI_CMD_TIMEOUT
DECL|RPA_TIMEOUT|macro|RPA_TIMEOUT
DECL|__packed|variable|__packed
DECL|accept_conn|function|static int accept_conn(const bt_addr_t *bdaddr)
DECL|accept_sco_conn|function|static int accept_sco_conn(const bt_addr_t *bdaddr, struct bt_conn *sco_conn)
DECL|acl_data|struct|struct acl_data {
DECL|acl|macro|acl
DECL|addr_res_enable|function|static int addr_res_enable(u8_t enable)
DECL|auth_complete|function|static void auth_complete(struct net_buf *buf)
DECL|br_init|function|static int br_init(void)
DECL|br_init|function|static int br_init(void)
DECL|br_start_inquiry|function|static int br_start_inquiry(const struct bt_br_discovery_param *param)
DECL|bt_addr_le_create_nrpa|function|int bt_addr_le_create_nrpa(bt_addr_le_t *addr)
DECL|bt_addr_le_create_static|function|int bt_addr_le_create_static(bt_addr_le_t *addr)
DECL|bt_addr_le_is_bonded|function|bool bt_addr_le_is_bonded(u8_t id, const bt_addr_le_t *addr)
DECL|bt_ad|struct|struct bt_ad {
DECL|bt_br_discovery_start|function|int bt_br_discovery_start(const struct bt_br_discovery_param *param, struct bt_br_discovery_result *results, size_t cnt, bt_br_discovery_cb_t cb)
DECL|bt_br_discovery_stop|function|int bt_br_discovery_stop(void)
DECL|bt_br_oob_get_local|function|int bt_br_oob_get_local(struct bt_br_oob *oob)
DECL|bt_br_set_connectable|function|int bt_br_set_connectable(bool enable)
DECL|bt_br_set_discoverable|function|int bt_br_set_discoverable(bool enable)
DECL|bt_buf_get_cmd_complete|function|struct net_buf *bt_buf_get_cmd_complete(s32_t timeout)
DECL|bt_buf_get_rx|function|struct net_buf *bt_buf_get_rx(enum bt_buf_type type, s32_t timeout)
DECL|bt_clear_all_pairings|function|static int bt_clear_all_pairings(u8_t id)
DECL|bt_data_parse|function|void bt_data_parse(struct net_buf_simple *ad, bool (*func)(struct bt_data *data, void *user_data), void *user_data)
DECL|bt_dev_show_info|function|void bt_dev_show_info(void)
DECL|bt_dev_show_info|function|void bt_dev_show_info(void)
DECL|bt_dev|variable|bt_dev
DECL|bt_dh_key_gen|function|int bt_dh_key_gen(const u8_t remote_pk[64], bt_dh_key_cb_t cb)
DECL|bt_enable|function|int bt_enable(bt_ready_cb_t cb)
DECL|bt_esco_conn_req|function|static void bt_esco_conn_req(struct bt_hci_evt_conn_request *evt)
DECL|bt_get_name|function|const char *bt_get_name(void)
DECL|bt_hci_cmd_create|function|struct net_buf *bt_hci_cmd_create(u16_t opcode, u8_t param_len)
DECL|bt_hci_cmd_send_sync|function|int bt_hci_cmd_send_sync(u16_t opcode, struct net_buf *buf, struct net_buf **rsp)
DECL|bt_hci_cmd_send|function|int bt_hci_cmd_send(u16_t opcode, struct net_buf *buf)
DECL|bt_hci_driver_register|function|int bt_hci_driver_register(const struct bt_hci_driver *drv)
DECL|bt_hci_get_cmd_opcode|function|u16_t bt_hci_get_cmd_opcode(struct net_buf *buf)
DECL|bt_id_add|function|void bt_id_add(struct bt_keys *keys)
DECL|bt_id_create|function|int bt_id_create(bt_addr_le_t *addr, u8_t *irk)
DECL|bt_id_delete|function|int bt_id_delete(u8_t id)
DECL|bt_id_del|function|void bt_id_del(struct bt_keys *keys)
DECL|bt_id_get|function|void bt_id_get(bt_addr_le_t *addrs, size_t *count)
DECL|bt_id_reset|function|int bt_id_reset(u8_t id, bt_addr_le_t *addr, u8_t *irk)
DECL|bt_init|function|static int bt_init(void)
DECL|bt_le_adv_start|function|int bt_le_adv_start(const struct bt_le_adv_param *param, const struct bt_data *ad, size_t ad_len, const struct bt_data *sd, size_t sd_len)
DECL|bt_le_adv_stop|function|int bt_le_adv_stop(void)
DECL|bt_le_conn_params_valid|function|bool bt_le_conn_params_valid(const struct bt_le_conn_param *param)
DECL|bt_le_oob_get_local|function|int bt_le_oob_get_local(u8_t id, struct bt_le_oob *oob)
DECL|bt_le_scan_start|function|int bt_le_scan_start(const struct bt_le_scan_param *param, bt_le_scan_cb_t cb)
DECL|bt_le_scan_stop|function|int bt_le_scan_stop(void)
DECL|bt_le_scan_update|function|int bt_le_scan_update(bool fast_scan)
DECL|bt_pub_key_gen|function|int bt_pub_key_gen(struct bt_pub_key_cb *new_cb)
DECL|bt_pub_key_get|function|const u8_t *bt_pub_key_get(void)
DECL|bt_recv_prio|function|int bt_recv_prio(struct net_buf *buf)
DECL|bt_recv|function|int bt_recv(struct net_buf *buf)
DECL|bt_send|function|int bt_send(struct net_buf *buf)
DECL|bt_set_id_addr|function|int bt_set_id_addr(const bt_addr_le_t *addr)
DECL|bt_set_name|function|int bt_set_name(const char *name)
DECL|bt_setup_id_addr|function|int bt_setup_id_addr(void)
DECL|bt_unpair|function|int bt_unpair(u8_t id, const bt_addr_le_t *addr)
DECL|check_pending_conn|function|static void check_pending_conn(const bt_addr_le_t *id_addr, const bt_addr_le_t *addr, u8_t evtype)
DECL|clock_offset|member|u16_t clock_offset;
DECL|cmd_data|struct|struct cmd_data {
DECL|cmd_data|variable|cmd_data
DECL|cmd|macro|cmd
DECL|common_init|function|static int common_init(void)
DECL|conn_complete|function|static void conn_complete(struct net_buf *buf)
DECL|conn_req|function|static void conn_req(struct net_buf *buf)
DECL|create_random_addr|function|static inline int create_random_addr(bt_addr_le_t *addr)
DECL|data|member|const struct bt_data *data;
DECL|device_supported_pkt_type|function|void device_supported_pkt_type(void)
DECL|dh_key_cb|variable|dh_key_cb
DECL|discovery_cb|variable|discovery_cb
DECL|discovery_priv|struct|struct discovery_priv {
DECL|discovery_results_count|variable|discovery_results_count
DECL|discovery_results_size|variable|discovery_results_size
DECL|discovery_results|variable|discovery_results
DECL|eir_has_name|function|static bool eir_has_name(const u8_t *eir)
DECL|extended_inquiry_result|function|static void extended_inquiry_result(struct net_buf *buf)
DECL|find_id_addr|function|static const bt_addr_le_t *find_id_addr(u8_t id, const bt_addr_le_t *addr)
DECL|get_result_slot|function|static struct bt_br_discovery_result *get_result_slot(const bt_addr_t *addr, s8_t rssi)
DECL|handle|member|u16_t handle;
DECL|hci_acl|function|static void hci_acl(struct net_buf *buf)
DECL|hci_cmd_complete|function|static void hci_cmd_complete(struct net_buf *buf)
DECL|hci_cmd_done|function|static void hci_cmd_done(u16_t opcode, u8_t status, struct net_buf *buf)
DECL|hci_cmd_status|function|static void hci_cmd_status(struct net_buf *buf)
DECL|hci_disconn_complete|function|static void hci_disconn_complete(struct net_buf *buf)
DECL|hci_encrypt_change|function|static void hci_encrypt_change(struct net_buf *buf)
DECL|hci_encrypt_key_refresh_complete|function|static void hci_encrypt_key_refresh_complete(struct net_buf *buf)
DECL|hci_event|function|static void hci_event(struct net_buf *buf)
DECL|hci_id_add|function|static int hci_id_add(const bt_addr_le_t *addr, u8_t val[16])
DECL|hci_init|function|static int hci_init(void)
DECL|hci_le_create_conn|function|static int hci_le_create_conn(const struct bt_conn *conn)
DECL|hci_le_meta_event|function|static void hci_le_meta_event(struct net_buf *buf)
DECL|hci_le_read_remote_features|function|static int hci_le_read_remote_features(struct bt_conn *conn)
DECL|hci_le_set_data_len|function|static int hci_le_set_data_len(struct bt_conn *conn)
DECL|hci_le_set_phy|function|static int hci_le_set_phy(struct bt_conn *conn)
DECL|hci_num_completed_packets|function|static void hci_num_completed_packets(struct net_buf *buf)
DECL|hci_reset_complete|function|static void hci_reset_complete(struct net_buf *buf)
DECL|hci_rx_thread|function|static void hci_rx_thread(void)
DECL|hci_stack_dump|function|static void hci_stack_dump(const struct k_thread *thread, void *user_data)
DECL|hci_tx_thread|function|static void hci_tx_thread(void *p1, void *p2, void *p3)
DECL|hci_vs_init|function|static void hci_vs_init(void)
DECL|id_create|function|static void id_create(u8_t id, bt_addr_le_t *addr, u8_t *irk)
DECL|id_find|function|static int id_find(const bt_addr_le_t *addr)
DECL|id|member|u8_t id;
DECL|init_work|function|static void init_work(struct k_work *work)
DECL|inquiry_complete|function|static void inquiry_complete(struct net_buf *buf)
DECL|inquiry_result_with_rssi|function|static void inquiry_result_with_rssi(struct net_buf *buf)
DECL|io_capa_neg_reply|function|static void io_capa_neg_reply(const bt_addr_t *bdaddr, const u8_t reason)
DECL|io_capa_req|function|static void io_capa_req(struct net_buf *buf)
DECL|io_capa_resp|function|static void io_capa_resp(struct net_buf *buf)
DECL|irk_init|function|static int irk_init(void)
DECL|keys_add_id|function|static void keys_add_id(struct bt_keys *keys, void *data)
DECL|le_adv_report|function|static void le_adv_report(struct net_buf *buf)
DECL|le_conn_param_neg_reply|function|static int le_conn_param_neg_reply(u16_t handle, u8_t reason)
DECL|le_conn_param_req_reply|function|static int le_conn_param_req_reply(u16_t handle, const struct bt_le_conn_param *param)
DECL|le_conn_param_req|function|static int le_conn_param_req(struct net_buf *buf)
DECL|le_conn_update_complete|function|static void le_conn_update_complete(struct net_buf *buf)
DECL|le_data_len_change|function|static void le_data_len_change(struct net_buf *buf)
DECL|le_dhkey_complete|function|static void le_dhkey_complete(struct net_buf *buf)
DECL|le_enh_conn_complete|function|static void le_enh_conn_complete(struct bt_hci_evt_le_enh_conn_complete *evt)
DECL|le_init|function|static int le_init(void)
DECL|le_legacy_conn_complete|function|static void le_legacy_conn_complete(struct net_buf *buf)
DECL|le_ltk_neg_reply|function|static void le_ltk_neg_reply(u16_t handle)
DECL|le_ltk_request|function|static void le_ltk_request(struct net_buf *buf)
DECL|le_phy_update_complete|function|static void le_phy_update_complete(struct net_buf *buf)
DECL|le_pkey_complete|function|static void le_pkey_complete(struct net_buf *buf)
DECL|le_read_buffer_size_complete|function|static void le_read_buffer_size_complete(struct net_buf *buf)
DECL|le_read_supp_states_complete|function|static void le_read_supp_states_complete(struct net_buf *buf)
DECL|le_remote_feat_complete|function|static void le_remote_feat_complete(struct net_buf *buf)
DECL|le_set_event_mask|function|static int le_set_event_mask(void)
DECL|le_set_privacy_mode|function|static int le_set_privacy_mode(const bt_addr_le_t *addr, u8_t mode)
DECL|le_set_private_addr|function|static int le_set_private_addr(u8_t id)
DECL|le_set_private_addr|function|static int le_set_private_addr(u8_t id)
DECL|len|member|size_t len;
DECL|link_encr|function|static void link_encr(const u16_t handle)
DECL|link_key_neg_reply|function|static void link_key_neg_reply(const bt_addr_t *bdaddr)
DECL|link_key_notify|function|static void link_key_notify(struct net_buf *buf)
DECL|link_key_reply|function|static void link_key_reply(const bt_addr_t *bdaddr, const u8_t *lk)
DECL|link_key_req|function|static void link_key_req(struct net_buf *buf)
DECL|opcode|member|u16_t opcode;
DECL|pin_code_req|function|static void pin_code_req(struct net_buf *buf)
DECL|process_events|function|static void process_events(struct k_poll_event *ev, int count)
DECL|pscan_rep_mode|member|u8_t pscan_rep_mode;
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
DECL|reject_conn|function|static int reject_conn(const bt_addr_t *bdaddr, u8_t reason)
DECL|remote_name_request_complete|function|static void remote_name_request_complete(struct net_buf *buf)
DECL|report_completed_packet|function|static void report_completed_packet(struct net_buf *buf)
DECL|report_discovery_results|function|static void report_discovery_results(void)
DECL|request_name|function|static int request_name(const bt_addr_t *addr, u8_t pscan, u16_t offset)
DECL|reset_pairing|function|static void reset_pairing(struct bt_conn *conn)
DECL|resolving|member|u8_t resolving;
DECL|role_change|function|static void role_change(struct net_buf *buf)
DECL|rpa_timeout|function|static void rpa_timeout(struct k_work *work)
DECL|rx_thread_data|variable|rx_thread_data
DECL|scan_dev_found_cb|variable|scan_dev_found_cb
DECL|send_cmd|function|static void send_cmd(void)
DECL|set_advertise_enable|function|static int set_advertise_enable(bool enable)
DECL|set_ad|function|static int set_ad(u16_t hci_op, const struct bt_ad *ad, size_t ad_len)
DECL|set_event_mask|function|static int set_event_mask(void)
DECL|set_flow_control|function|static int set_flow_control(void)
DECL|set_le_scan_enable|function|static int set_le_scan_enable(u8_t enable)
DECL|set_random_address|function|static int set_random_address(const bt_addr_t *addr)
DECL|ssp_complete|function|static void ssp_complete(struct net_buf *buf)
DECL|start_le_scan|function|static int start_le_scan(u8_t scan_type, u16_t interval, u16_t window)
DECL|status|member|u8_t status;
DECL|synchronous_conn_complete|function|static void synchronous_conn_complete(struct net_buf *buf)
DECL|sync|member|struct k_sem *sync;
DECL|tx_thread_data|variable|tx_thread_data
DECL|type|member|u8_t type;
DECL|update_conn_param|function|static void update_conn_param(struct bt_conn *conn)
DECL|update_pending_id|function|static void update_pending_id(struct bt_keys *keys, void *data)
DECL|update_sec_level_br|function|static void update_sec_level_br(struct bt_conn *conn)
DECL|update_sec_level|function|static void update_sec_level(struct bt_conn *conn)
DECL|user_confirm_req|function|static void user_confirm_req(struct net_buf *buf)
DECL|user_passkey_notify|function|static void user_passkey_notify(struct net_buf *buf)
DECL|user_passkey_req|function|static void user_passkey_req(struct net_buf *buf)
DECL|valid_adv_param|function|static bool valid_adv_param(const struct bt_le_adv_param *param)
DECL|valid_br_discov_param|function|static bool valid_br_discov_param(const struct bt_br_discovery_param *param, size_t num_results)
DECL|valid_le_scan_param|function|static bool valid_le_scan_param(const struct bt_le_scan_param *param)
DECL|ver_str|function|static const char *ver_str(u8_t ver)
DECL|vs_fw_variant|function|static const char *vs_fw_variant(u8_t variant)
DECL|vs_hw_platform|function|static const char *vs_hw_platform(u16_t platform)
DECL|vs_hw_variant|function|static const char *vs_hw_variant(u16_t platform, u16_t variant)
DECL|write_scan_enable|function|static int write_scan_enable(u8_t scan)
