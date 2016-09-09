DECL|HCI_CC_LEN|macro|HCI_CC_LEN
DECL|HCI_CC_RP|macro|HCI_CC_RP
DECL|HCI_CC_ST|macro|HCI_CC_ST
DECL|HCI_CC|macro|HCI_CC
DECL|HCI_CMD|enumerator|HCI_CMD = 0x01,
DECL|HCI_CS|macro|HCI_CS
DECL|HCI_DATA_LEN|macro|HCI_DATA_LEN
DECL|HCI_DATA|enumerator|HCI_DATA = 0x02,
DECL|HCI_EVTP|macro|HCI_EVTP
DECL|HCI_EVT_CODE_APTO_EXPIRED|enumerator|HCI_EVT_CODE_APTO_EXPIRED = 0x57,
DECL|HCI_EVT_CODE_COMMAND_COMPLETE|enumerator|HCI_EVT_CODE_COMMAND_COMPLETE = 0x0E,
DECL|HCI_EVT_CODE_COMMAND_STATUS|enumerator|HCI_EVT_CODE_COMMAND_STATUS = 0x0F,
DECL|HCI_EVT_CODE_DISCONNECTION_COMPLETE|enumerator|HCI_EVT_CODE_DISCONNECTION_COMPLETE = 0x05,
DECL|HCI_EVT_CODE_ENCRYPTION_CHANGE|enumerator|HCI_EVT_CODE_ENCRYPTION_CHANGE = 0x08,
DECL|HCI_EVT_CODE_ENCRYPTION_KEY_REFRESH_COMPLETE|enumerator|HCI_EVT_CODE_ENCRYPTION_KEY_REFRESH_COMPLETE = 0x30,
DECL|HCI_EVT_CODE_LE_META|enumerator|HCI_EVT_CODE_LE_META = 0x3E,
DECL|HCI_EVT_CODE_NUM_COMPLETE|enumerator|HCI_EVT_CODE_NUM_COMPLETE = 0x13,
DECL|HCI_EVT_CODE_READ_REMOTE_VERSION_INFO_COMPLETE|enumerator|HCI_EVT_CODE_READ_REMOTE_VERSION_INFO_COMPLETE = 0x0C,
DECL|HCI_EVT_ERROR_CODE_COMMAND_DISALLOWED|enumerator|HCI_EVT_ERROR_CODE_COMMAND_DISALLOWED = 0x0C,
DECL|HCI_EVT_ERROR_CODE_MEM_CAPACITY_EXCEEDED|enumerator|HCI_EVT_ERROR_CODE_MEM_CAPACITY_EXCEEDED = 0x07,
DECL|HCI_EVT_ERROR_CODE_PIN_OR_KEY_MISSING|enumerator|HCI_EVT_ERROR_CODE_PIN_OR_KEY_MISSING = 0x06,
DECL|HCI_EVT_ERROR_CODE_SUCCESS|enumerator|HCI_EVT_ERROR_CODE_SUCCESS = 0x00,
DECL|HCI_EVT_ERROR_CODE_UNKNOWN_HCI_COMMAND|enumerator|HCI_EVT_ERROR_CODE_UNKNOWN_HCI_COMMAND = 0x01,
DECL|HCI_EVT_LEN|macro|HCI_EVT_LEN
DECL|HCI_EVT_LE_META_ADV_REPORT|enumerator|HCI_EVT_LE_META_ADV_REPORT,
DECL|HCI_EVT_LE_META_CONNECTION_COMPLETE|enumerator|HCI_EVT_LE_META_CONNECTION_COMPLETE = 0x01,
DECL|HCI_EVT_LE_META_CONNECTION_UPDATE_COMPLETE|enumerator|HCI_EVT_LE_META_CONNECTION_UPDATE_COMPLETE,
DECL|HCI_EVT_LE_META_LENGTH_CHANGE|enumerator|HCI_EVT_LE_META_LENGTH_CHANGE,
DECL|HCI_EVT_LE_META_LONG_TERM_KEY_REQUEST|enumerator|HCI_EVT_LE_META_LONG_TERM_KEY_REQUEST,
DECL|HCI_EVT_LE_META_READ_REMOTE_USED_FEATURE_COMPLETE|enumerator|HCI_EVT_LE_META_READ_REMOTE_USED_FEATURE_COMPLETE,
DECL|HCI_EVT_LE_META_REMOTE_CONNECTION_PARAMETER_REQUEST|enumerator|HCI_EVT_LE_META_REMOTE_CONNECTION_PARAMETER_REQUEST,
DECL|HCI_EVT|enumerator|HCI_EVT = 0x04,
DECL|HCI_PACKET_SIZE_MAX|macro|HCI_PACKET_SIZE_MAX
DECL|_HCI_CC_LEN|macro|_HCI_CC_LEN
DECL|__packed|union|union __packed {
DECL|__packed|union|union __packed {
DECL|addr_type|member|uint8_t addr_type;
DECL|addr|member|uint8_t addr[BDADDR_SIZE];
DECL|adv_report|member|struct hci_evt_le_meta_adv_report adv_report;
DECL|apto_expired|member|struct hci_evt_apto_expired apto_expired;
DECL|bc|member|uint16_t bc:2;
DECL|code|member|uint8_t code;
DECL|company_id|member|uint16_t company_id;
DECL|conn_cmplt|member|struct hci_evt_le_meta_conn_complete conn_cmplt;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_update_cmplt|member|struct hci_evt_le_meta_conn_update_complete conn_update_cmplt;
DECL|controller_cmd_handle|function|static int controller_cmd_handle(uint8_t ocf, uint8_t *cp, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|ctrl_bb_cmd_handle|function|static int ctrl_bb_cmd_handle(uint8_t ocf, uint8_t *cp, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|data|member|uint8_t data[1];
DECL|disconnect_cmplt|member|struct hci_evt_disconnect_cmplt disconnect_cmplt;
DECL|disconnect|function|static void disconnect(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|ediv|member|uint8_t ediv[2];
DECL|enabled|member|uint8_t enabled;
DECL|encode_control|function|static void encode_control(uint8_t *buf, uint8_t *len, uint8_t **out)
DECL|encode_data_ctrl|function|static void encode_data_ctrl(struct radio_pdu_node_rx *radio_pdu_node_rx,uint8_t *len, uint8_t **out)
DECL|encode_data|function|static void encode_data(uint8_t *buf, uint8_t *len, uint8_t **out)
DECL|encryption_change|member|struct hci_evt_encryption_change encryption_change;
DECL|encryption_key_refresh_cmplt|member|encryption_key_refresh_cmplt;
DECL|features|member|uint8_t features[8];
DECL|handles_nums|member|uint8_t handles_nums[1];
DECL|handle|member|uint16_t handle:12;
DECL|hci_cmd_handle|function|static void hci_cmd_handle(struct bt_hci_cmd_hdr *cmd, uint8_t *len, uint8_t **out)
DECL|hci_context|variable|hci_context
DECL|hci_data_handle|function|static void hci_data_handle(void)
DECL|hci_data|struct|struct __packed hci_data {
DECL|hci_encode_num_cmplt|function|void hci_encode_num_cmplt(uint16_t instance, uint8_t num, uint8_t *len, uint8_t **out)
DECL|hci_encode|function|void hci_encode(uint8_t *buf, uint8_t *len, uint8_t **out)
DECL|hci_evt_apto_expired|struct|struct __packed hci_evt_apto_expired {
DECL|hci_evt_cmd_cmplt_unknown_hci_command|struct|struct __packed hci_evt_cmd_cmplt_unknown_hci_command {
DECL|hci_evt_disconnect_cmplt|struct|struct __packed hci_evt_disconnect_cmplt {
DECL|hci_evt_encryption_change|struct|struct __packed hci_evt_encryption_change {
DECL|hci_evt_encryption_key_refresh_cmplt|struct|struct __packed hci_evt_encryption_key_refresh_cmplt {
DECL|hci_evt_le_meta_adv_report|struct|struct __packed hci_evt_le_meta_adv_report {
DECL|hci_evt_le_meta_conn_complete|struct|struct __packed hci_evt_le_meta_conn_complete {
DECL|hci_evt_le_meta_conn_update_complete|struct|struct __packed hci_evt_le_meta_conn_update_complete {
DECL|hci_evt_le_meta_length_change|struct|struct __packed hci_evt_le_meta_length_change {
DECL|hci_evt_le_meta_long_term_key_request|struct|struct __packed hci_evt_le_meta_long_term_key_request {
DECL|hci_evt_le_meta_read_remote_used_features|struct|struct __packed hci_evt_le_meta_read_remote_used_features {
DECL|hci_evt_le_meta_remote_conn_param_request|struct|struct __packed hci_evt_le_meta_remote_conn_param_request {
DECL|hci_evt_le_meta|struct|struct __packed hci_evt_le_meta {
DECL|hci_evt_num_cmplt|struct|struct __packed hci_evt_num_cmplt {
DECL|hci_evt_read_remote_version_info_cmplt|struct|struct __packed hci_evt_read_remote_version_info_cmplt {
DECL|hci_evt|struct|struct __packed hci_evt {
DECL|hci_handle|function|void hci_handle(uint8_t x, uint8_t *len, uint8_t **out)
DECL|info_cmd_handle|function|static int info_cmd_handle(uint8_t ocf, uint8_t *cp, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_min|member|uint16_t interval_min;
DECL|interval|member|uint16_t interval;
DECL|interval|member|uint16_t interval;
DECL|latency|member|uint16_t latency;
DECL|latency|member|uint16_t latency;
DECL|latency|member|uint16_t latency;
DECL|le_add_dev_to_wl|function|static void le_add_dev_to_wl(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_clear_wl|function|static void le_clear_wl(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_conn_param_req_neg_reply|function|static void le_conn_param_req_neg_reply(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_conn_param_req_reply|function|static void le_conn_param_req_reply(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_conn_update|function|static void le_conn_update(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_create_conn_cancel|function|static void le_create_conn_cancel(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_create_connection|function|static void le_create_connection(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_encrypt|function|static void le_encrypt(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_ltk_req_neg_reply|function|static void le_ltk_req_neg_reply(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_ltk_req_reply|function|static void le_ltk_req_reply(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_meta|member|struct hci_evt_le_meta le_meta;
DECL|le_rand|function|static void le_rand(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_adv_ch_tx_power|function|static void le_read_adv_ch_tx_power(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_buffer_size|function|static void le_read_buffer_size(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_local_features|function|static void le_read_local_features(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_remote_features|function|static void le_read_remote_features(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_supp_states|function|static void le_read_supp_states(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|le_read_wl_size|function|static void le_read_wl_size(uint8_t *cp, struct bt_hci_evt_hdr *evt)
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
DECL|length_change|member|struct hci_evt_le_meta_length_change length_change;
DECL|len|member|uint16_t len;
DECL|len|member|uint8_t len;
DECL|link_control_cmd_handle|function|static int link_control_cmd_handle(uint8_t ocf, uint8_t *cp, uint8_t *len, struct bt_hci_evt_hdr *evt)
DECL|long_term_key_request|member|long_term_key_request;
DECL|max_rx_octets|member|uint16_t max_rx_octets;
DECL|max_rx_time|member|uint16_t max_rx_time;
DECL|max_tx_octets|member|uint16_t max_tx_octets;
DECL|max_tx_time|member|uint16_t max_tx_time;
DECL|mca|member|uint8_t mca;
DECL|num_cmplt|member|struct hci_evt_num_cmplt num_cmplt;
DECL|num_handles|member|uint8_t num_handles;
DECL|num_reports|member|uint8_t num_reports;
DECL|params|member|} params;
DECL|pb|member|uint16_t pb:2;
DECL|rand|member|uint8_t rand[8];
DECL|read_bd_addr|function|static void read_bd_addr(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|read_local_features|function|static void read_local_features(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|read_local_version_info|function|static void read_local_version_info(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|read_remote_ver_info|function|static void read_remote_ver_info(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|read_remote_version_info_cmplt|member|read_remote_version_info_cmplt;
DECL|read_supported_commands|function|static void read_supported_commands(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|reason|member|uint8_t reason;
DECL|remote_conn_param_request|member|remote_conn_param_request;
DECL|remote_used_features|member|remote_used_features;
DECL|reports|member|uint8_t reports[1];
DECL|reset|function|static void reset(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|role|member|uint8_t role;
DECL|rx_len|member|uint16_t rx_len;
DECL|rx|member|uint8_t rx[HCI_PACKET_SIZE_MAX];
DECL|set_event_mask|function|static void set_event_mask(uint8_t *cp, struct bt_hci_evt_hdr *evt)
DECL|status|member|uint8_t status;
DECL|status|member|uint8_t status;
DECL|status|member|uint8_t status;
DECL|status|member|uint8_t status;
DECL|status|member|uint8_t status;
DECL|status|member|uint8_t status;
DECL|status|member|uint8_t status;
DECL|status|member|uint8_t status;
DECL|sub_version_number|member|uint16_t sub_version_number;
DECL|subevent_code|member|uint8_t subevent_code;
DECL|subevent|member|} subevent;
DECL|timeout|member|uint16_t timeout;
DECL|timeout|member|uint16_t timeout;
DECL|timeout|member|uint16_t timeout;
DECL|tx|member|uint8_t tx[HCI_PACKET_SIZE_MAX];
DECL|version_number|member|uint8_t version_number;
