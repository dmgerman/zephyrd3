DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|DEFAULT_EVENT_MASK_PAGE_2|macro|DEFAULT_EVENT_MASK_PAGE_2
DECL|DEFAULT_EVENT_MASK|macro|DEFAULT_EVENT_MASK
DECL|DEFAULT_LE_EVENT_MASK|macro|DEFAULT_LE_EVENT_MASK
DECL|ST_ADV|macro|ST_ADV
DECL|ST_MAS|macro|ST_MAS
DECL|ST_SCA|macro|ST_SCA
DECL|ST_SLA|macro|ST_SLA
DECL|_opcode|variable|_opcode
DECL|addr|member|bt_addr_le_t addr;
DECL|auth_payload_timeout_exp|function|static void auth_payload_timeout_exp(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|cmd_complete|function|static void *cmd_complete(struct net_buf **buf, u8_t plen)
DECL|cmd_status|function|static struct net_buf *cmd_status(u8_t status)
DECL|conn_count|variable|conn_count
DECL|controller_cmd_handle|function|static int controller_cmd_handle(u16_t ocf, struct net_buf *cmd, struct net_buf **evt)
DECL|ctrl_bb_cmd_handle|function|static int ctrl_bb_cmd_handle(u16_t ocf, struct net_buf *cmd, struct net_buf **evt)
DECL|disconn_complete|function|static void disconn_complete(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|disconnect|function|static void disconnect(struct net_buf *buf, struct net_buf **evt)
DECL|dup_count|variable|dup_count
DECL|dup_curr|variable|dup_curr
DECL|dup_filter|variable|dup_filter
DECL|dup_found|function|static inline bool dup_found(struct pdu_adv *adv)
DECL|dup|struct|struct dup {
DECL|enc_refresh_complete|function|static void enc_refresh_complete(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|encode_control|function|static void encode_control(struct radio_pdu_node_rx *node_rx, struct pdu_data *pdu_data, struct net_buf *buf)
DECL|encode_data_ctrl|function|static void encode_data_ctrl(struct radio_pdu_node_rx *node_rx, struct pdu_data *pdu_data, struct net_buf *buf)
DECL|encrypt_change|function|static void encrypt_change(u8_t err, u16_t handle, struct net_buf *buf)
DECL|event_mask_page_2|variable|event_mask_page_2
DECL|event_mask|variable|event_mask
DECL|evt_create|function|static void evt_create(struct net_buf *buf, u8_t evt, u8_t len)
DECL|hbuf_signal|variable|hbuf_signal
DECL|hci_acl_encode|function|void hci_acl_encode(struct radio_pdu_node_rx *node_rx, struct net_buf *buf)
DECL|hci_acl_handle|function|int hci_acl_handle(struct net_buf *buf)
DECL|hci_cmd_handle|function|struct net_buf *hci_cmd_handle(struct net_buf *cmd)
DECL|hci_evt_encode|function|void hci_evt_encode(struct radio_pdu_node_rx *node_rx, struct net_buf *buf)
DECL|hci_get_class|function|s8_t hci_get_class(struct radio_pdu_node_rx *node_rx)
DECL|hci_hbuf_acked|variable|hci_hbuf_acked
DECL|hci_hbuf_sent|variable|hci_hbuf_sent
DECL|hci_hbuf_total|variable|hci_hbuf_total
DECL|hci_init|function|void hci_init(struct k_poll_signal *signal_host_buf)
DECL|hci_num_cmplt_encode|function|void hci_num_cmplt_encode(struct net_buf *buf, u16_t handle, u8_t num)
DECL|hci_state_mask|variable|hci_state_mask
DECL|host_buffer_size|function|static void host_buffer_size(struct net_buf *buf, struct net_buf **evt)
DECL|host_num_completed_packets|function|static void host_num_completed_packets(struct net_buf *buf, struct net_buf **evt)
DECL|info_cmd_handle|function|static int info_cmd_handle(u16_t ocf, struct net_buf *cmd, struct net_buf **evt)
DECL|le_add_dev_to_rl|function|static void le_add_dev_to_rl(struct net_buf *buf, struct net_buf **evt)
DECL|le_add_dev_to_wl|function|static void le_add_dev_to_wl(struct net_buf *buf, struct net_buf **evt)
DECL|le_adv_ext_1M_report|function|static void le_adv_ext_1M_report(struct pdu_data *pdu_data, u8_t *b, struct net_buf *buf)
DECL|le_adv_ext_coded_report|function|static void le_adv_ext_coded_report(struct pdu_data *pdu_data, u8_t *b, struct net_buf *buf)
DECL|le_adv_ext_report|function|static void le_adv_ext_report(struct pdu_data *pdu_data, u8_t *b, struct net_buf *buf, u8_t phy)
DECL|le_advertising_report|function|static void le_advertising_report(struct pdu_data *pdu_data, u8_t *b, struct net_buf *buf)
DECL|le_chan_sel_algo|function|static void le_chan_sel_algo(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|le_clear_rl|function|static void le_clear_rl(struct net_buf *buf, struct net_buf **evt)
DECL|le_clear_wl|function|static void le_clear_wl(struct net_buf *buf, struct net_buf **evt)
DECL|le_conn_complete|function|static void le_conn_complete(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|le_conn_param_req_neg_reply|function|static void le_conn_param_req_neg_reply(struct net_buf *buf,struct net_buf **evt)
DECL|le_conn_param_req_reply|function|static void le_conn_param_req_reply(struct net_buf *buf, struct net_buf **evt)
DECL|le_conn_param_req|function|static void le_conn_param_req(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|le_conn_update_complete|function|static void le_conn_update_complete(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|le_conn_update|function|static void le_conn_update(struct net_buf *buf, struct net_buf **evt)
DECL|le_create_conn_cancel|function|static void le_create_conn_cancel(struct net_buf *buf, struct net_buf **evt)
DECL|le_create_connection|function|static void le_create_connection(struct net_buf *buf, struct net_buf **evt)
DECL|le_data_len_change|function|static void le_data_len_change(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|le_encrypt|function|static void le_encrypt(struct net_buf *buf, struct net_buf **evt)
DECL|le_event_mask|variable|le_event_mask
DECL|le_ltk_req_neg_reply|function|static void le_ltk_req_neg_reply(struct net_buf *buf, struct net_buf **evt)
DECL|le_ltk_req_reply|function|static void le_ltk_req_reply(struct net_buf *buf, struct net_buf **evt)
DECL|le_ltk_request|function|static void le_ltk_request(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|le_phy_upd_complete|function|static void le_phy_upd_complete(struct pdu_data *pdu_data, u16_t handle,struct net_buf *buf)
DECL|le_rand|function|static void le_rand(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_adv_chan_tx_power|function|static void le_read_adv_chan_tx_power(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_buffer_size|function|static void le_read_buffer_size(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_default_data_len|function|static void le_read_default_data_len(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_local_features|function|static void le_read_local_features(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_local_rpa|function|static void le_read_local_rpa(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_max_data_len|function|static void le_read_max_data_len(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_peer_rpa|function|static void le_read_peer_rpa(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_phy|function|static void le_read_phy(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_remote_features|function|static void le_read_remote_features(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_rl_size|function|static void le_read_rl_size(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_supp_states|function|static void le_read_supp_states(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_tx_power|function|static void le_read_tx_power(struct net_buf *buf, struct net_buf **evt)
DECL|le_read_wl_size|function|static void le_read_wl_size(struct net_buf *buf, struct net_buf **evt)
DECL|le_rem_dev_from_rl|function|static void le_rem_dev_from_rl(struct net_buf *buf, struct net_buf **evt)
DECL|le_rem_dev_from_wl|function|static void le_rem_dev_from_wl(struct net_buf *buf, struct net_buf **evt)
DECL|le_remote_feat_complete|function|static void le_remote_feat_complete(u8_t status, struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|le_scan_req_received|function|static void le_scan_req_received(struct pdu_data *pdu_data, u8_t *b, struct net_buf *buf)
DECL|le_set_addr_res_enable|function|static void le_set_addr_res_enable(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_adv_data|function|static void le_set_adv_data(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_adv_enable|function|static void le_set_adv_enable(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_adv_param|function|static void le_set_adv_param(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_data_len|function|static void le_set_data_len(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_default_phy|function|static void le_set_default_phy(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_event_mask|function|static void le_set_event_mask(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_host_chan_classif|function|static void le_set_host_chan_classif(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_phy|function|static void le_set_phy(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_privacy_mode|function|static void le_set_privacy_mode(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_random_address|function|static void le_set_random_address(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_rpa_timeout|function|static void le_set_rpa_timeout(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_scan_enable|function|static void le_set_scan_enable(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_scan_param|function|static void le_set_scan_param(struct net_buf *buf, struct net_buf **evt)
DECL|le_set_scan_rsp_data|function|static void le_set_scan_rsp_data(struct net_buf *buf, struct net_buf **evt)
DECL|le_start_encryption|function|static void le_start_encryption(struct net_buf *buf, struct net_buf **evt)
DECL|le_unknown_rsp|function|static void le_unknown_rsp(struct pdu_data *pdu_data, u16_t handle, struct net_buf *buf)
DECL|le_write_default_data_len|function|static void le_write_default_data_len(struct net_buf *buf, struct net_buf **evt)
DECL|link_control_cmd_handle|function|static int link_control_cmd_handle(u16_t ocf, struct net_buf *cmd, struct net_buf **evt)
DECL|mask|member|u8_t mask;
DECL|meta_evt|function|static void *meta_evt(struct net_buf *buf, u8_t subevt, u8_t melen)
DECL|read_auth_payload_timeout|function|static void read_auth_payload_timeout(struct net_buf *buf, struct net_buf **evt)
DECL|read_bd_addr|function|static void read_bd_addr(struct net_buf *buf, struct net_buf **evt)
DECL|read_local_features|function|static void read_local_features(struct net_buf *buf, struct net_buf **evt)
DECL|read_local_version_info|function|static void read_local_version_info(struct net_buf *buf, struct net_buf **evt)
DECL|read_remote_ver_info|function|static void read_remote_ver_info(struct net_buf *buf, struct net_buf **evt)
DECL|read_rssi|function|static void read_rssi(struct net_buf *buf, struct net_buf **evt)
DECL|read_supported_commands|function|static void read_supported_commands(struct net_buf *buf, struct net_buf **evt)
DECL|read_tx_power_level|function|static void read_tx_power_level(struct net_buf *buf, struct net_buf **evt)
DECL|remote_version_info|function|static void remote_version_info(struct pdu_data *pdu_data, u16_t handle,struct net_buf *buf)
DECL|reset|function|static void reset(struct net_buf *buf, struct net_buf **evt)
DECL|set_ctl_to_host_flow|function|static void set_ctl_to_host_flow(struct net_buf *buf, struct net_buf **evt)
DECL|set_event_mask_page_2|function|static void set_event_mask_page_2(struct net_buf *buf, struct net_buf **evt)
DECL|set_event_mask|function|static void set_event_mask(struct net_buf *buf, struct net_buf **evt)
DECL|status_cmd_handle|function|static int status_cmd_handle(u16_t ocf, struct net_buf *cmd, struct net_buf **evt)
DECL|vendor_cmd_handle|function|static int vendor_cmd_handle(u16_t ocf, struct net_buf *cmd, struct net_buf **evt)
DECL|vs_read_supported_commands|function|static void vs_read_supported_commands(struct net_buf *buf, struct net_buf **evt)
DECL|vs_read_supported_features|function|static void vs_read_supported_features(struct net_buf *buf, struct net_buf **evt)
DECL|vs_read_version_info|function|static void vs_read_version_info(struct net_buf *buf, struct net_buf **evt)
DECL|write_auth_payload_timeout|function|static void write_auth_payload_timeout(struct net_buf *buf, struct net_buf **evt)
