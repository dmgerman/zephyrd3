DECL|HCI_CC_LEN|macro|HCI_CC_LEN
DECL|HCI_CC_RP|macro|HCI_CC_RP
DECL|HCI_CC_ST|macro|HCI_CC_ST
DECL|HCI_CC|macro|HCI_CC
DECL|HCI_CMD|enumerator|HCI_CMD = 0x01,
DECL|HCI_CS|macro|HCI_CS
DECL|HCI_DATA_LEN|macro|HCI_DATA_LEN
DECL|HCI_DATA|enumerator|HCI_DATA = 0x02,
DECL|HCI_EVTP|macro|HCI_EVTP
DECL|HCI_EVT_LEN|macro|HCI_EVT_LEN
DECL|HCI_EVT|enumerator|HCI_EVT = 0x04,
DECL|HCI_ME|macro|HCI_ME
DECL|HCI_PACKET_SIZE_MAX|macro|HCI_PACKET_SIZE_MAX
DECL|HCI_SE|macro|HCI_SE
DECL|_HCI_CC_LEN|macro|_HCI_CC_LEN
DECL|_HCI_ME_LEN|macro|_HCI_ME_LEN
DECL|auth_payload_timeout_exp|function|static void auth_payload_timeout_exp(struct pdu_data *pdu_data, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|bc|member|uint16_t bc:2;
DECL|controller_cmd_handle|function|static int controller_cmd_handle(uint8_t ocf, uint8_t *cp, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|ctrl_bb_cmd_handle|function|static int ctrl_bb_cmd_handle(uint8_t ocf, uint8_t *cp, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|data|member|uint8_t data[1];
DECL|disconn_complete|function|static void disconn_complete(struct pdu_data *pdu_data, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|disconnect|function|static void disconnect(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|enc_refresh_complete|function|static void enc_refresh_complete(struct pdu_data *pdu_data, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|encode_control|function|static void encode_control(struct radio_pdu_node_rx *radio_pdu_node_rx, struct pdu_data *pdu_data, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|encode_data_ctrl|function|static void encode_data_ctrl(struct radio_pdu_node_rx *radio_pdu_node_rx, struct pdu_data *pdu_data, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|encode_data|function|static void encode_data(uint8_t *buf, uint8_t *len, uint8_t **out)
DECL|encrypt_change|function|static void encrypt_change(uint8_t err, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|handle|member|uint16_t handle:12;
DECL|hci_cmd_handle|function|static void hci_cmd_handle(struct bt_hci_cmd_hdr *cmd, uint8_t *len, uint8_t **out)
DECL|hci_context|variable|hci_context
DECL|hci_data_handle|function|static void hci_data_handle(void)
DECL|hci_data|struct|struct __packed hci_data {
DECL|hci_encode_num_cmplt|function|void hci_encode_num_cmplt(uint16_t handle, uint8_t num, uint8_t *len, uint8_t **out)
DECL|hci_encode|function|void hci_encode(uint8_t *buf, uint8_t *len, uint8_t **out)
DECL|hci_handle|function|void hci_handle(uint8_t x, uint8_t *len, uint8_t **out)
DECL|info_cmd_handle|function|static int info_cmd_handle(uint8_t ocf, uint8_t *cp, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|le_add_dev_to_wl|function|static void le_add_dev_to_wl(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_advertising_report|function|static void le_advertising_report(struct pdu_data *pdu_data, uint8_t *buf, struct bt_hci_evt_hdr *evt)
DECL|le_clear_wl|function|static void le_clear_wl(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_conn_complete|function|static void le_conn_complete(struct pdu_data *pdu_data, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|le_conn_param_req_neg_reply|function|static void le_conn_param_req_neg_reply(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_conn_param_req_reply|function|static void le_conn_param_req_reply(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_conn_param_req|function|static void le_conn_param_req(struct pdu_data *pdu_data, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|le_conn_update_complete|function|static void le_conn_update_complete(struct pdu_data *pdu_data, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|le_conn_update|function|static void le_conn_update(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_create_conn_cancel|function|static void le_create_conn_cancel(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_create_connection|function|static void le_create_connection(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_data_len_change|function|static void le_data_len_change(struct pdu_data *pdu_data, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|le_encrypt|function|static void le_encrypt(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_ltk_req_neg_reply|function|static void le_ltk_req_neg_reply(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_ltk_req_reply|function|static void le_ltk_req_reply(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_ltk_request|function|static void le_ltk_request(struct pdu_data *pdu_data, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|le_rand|function|static void le_rand(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_adv_ch_tx_power|function|static void le_read_adv_ch_tx_power(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_buffer_size|function|static void le_read_buffer_size(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_local_features|function|static void le_read_local_features(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_remote_features|function|static void le_read_remote_features(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_supp_states|function|static void le_read_supp_states(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_wl_size|function|static void le_read_wl_size(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_remote_feat_complete|function|static void le_remote_feat_complete(struct pdu_data *pdu_data, uint16_t handle, struct bt_hci_evt_hdr *evt)
DECL|le_set_adv_data|function|static void le_set_adv_data(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_set_adv_enable|function|static void le_set_adv_enable(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_set_adv_param|function|static void le_set_adv_param(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_set_data_len|function|static void le_set_data_len(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_set_event_mask|function|static void le_set_event_mask(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_set_host_ch_classif|function|static void le_set_host_ch_classif(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_set_random_address|function|static void le_set_random_address(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_set_scan_enable|function|static void le_set_scan_enable(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_set_scan_params|function|static void le_set_scan_params(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_set_scan_rsp_data|function|static void le_set_scan_rsp_data(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_start_encryption|function|static void le_start_encryption(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|len|member|uint16_t len;
DECL|link_control_cmd_handle|function|static int link_control_cmd_handle(uint8_t ocf, uint8_t *cp, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|pb|member|uint16_t pb:2;
DECL|read_bd_addr|function|static void read_bd_addr(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|read_local_features|function|static void read_local_features(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|read_local_version_info|function|static void read_local_version_info(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|read_remote_ver_info|function|static void read_remote_ver_info(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|read_supported_commands|function|static void read_supported_commands(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|remote_version_info|function|static void remote_version_info(struct pdu_data *pdu_data, uint16_t handle,struct bt_hci_evt_hdr *evt)
DECL|reset|function|static void reset(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|rx_len|member|uint16_t rx_len;
DECL|rx|member|uint8_t rx[HCI_PACKET_SIZE_MAX];
DECL|set_event_mask|function|static void set_event_mask(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|tx|member|uint8_t tx[HCI_PACKET_SIZE_MAX];
