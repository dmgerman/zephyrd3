DECL|BLE_CORE_GAP_BONDING|enumerator|BLE_CORE_GAP_BONDING = 0x01, /**< SMP supports bonding */
DECL|BLE_CORE_GAP_MITM|enumerator|BLE_CORE_GAP_MITM = 0x04,
DECL|BLE_CORE_GAP_OOB|enumerator|BLE_CORE_GAP_OOB = 0x08 /**< SMP supports Out Of Band data */
DECL|BLE_CORE_GAP_RSSI_DISABLE_REPORT|enumerator|BLE_CORE_GAP_RSSI_DISABLE_REPORT = 0,
DECL|BLE_CORE_GAP_RSSI_ENABLE_REPORT|enumerator|BLE_CORE_GAP_RSSI_ENABLE_REPORT
DECL|BLE_CORE_GAP_RSSI_OPS|enum|enum BLE_CORE_GAP_RSSI_OPS {
DECL|BLE_CORE_GAP_SM_OPTIONS|enum|enum BLE_CORE_GAP_SM_OPTIONS {
DECL|BLE_CORE_TEST_END_DTM|enumerator|BLE_CORE_TEST_END_DTM = 0x1f,
DECL|BLE_CORE_TEST_INIT_DTM|enumerator|BLE_CORE_TEST_INIT_DTM = 0x01,
DECL|BLE_CORE_TEST_OPCODE|enum|enum BLE_CORE_TEST_OPCODE {
DECL|BLE_CORE_TEST_SET_TXPOWER|enumerator|BLE_CORE_TEST_SET_TXPOWER = 0x80,
DECL|BLE_CORE_TEST_START_DTM_RX|enumerator|BLE_CORE_TEST_START_DTM_RX = 0x1d,
DECL|BLE_CORE_TEST_START_DTM_TX|enumerator|BLE_CORE_TEST_START_DTM_TX = 0x1e,
DECL|BLE_CORE_TEST_START_TX_CARRIER|enumerator|BLE_CORE_TEST_START_TX_CARRIER,
DECL|BLE_GAP_GEN_OPS|enum|enum BLE_GAP_GEN_OPS {
DECL|BLE_GAP_SCAN_ACTIVE|enumerator|BLE_GAP_SCAN_ACTIVE = 0x01,
DECL|BLE_GAP_SCAN_DEFAULT|enumerator|BLE_GAP_SCAN_DEFAULT = 0,
DECL|BLE_GAP_SCAN_OPTIONS|enum|enum BLE_GAP_SCAN_OPTIONS {
DECL|BLE_GAP_SCAN_WHITE_LISTED|enumerator|BLE_GAP_SCAN_WHITE_LISTED = 0x02,
DECL|BLE_GAP_SEC_MAX_KEY_LEN|macro|BLE_GAP_SEC_MAX_KEY_LEN
DECL|BLE_GAP_SET_CH_MAP|enumerator|BLE_GAP_SET_CH_MAP = 0,
DECL|BLE_GAP_SET_OPTIONS|enum|enum BLE_GAP_SET_OPTIONS {
DECL|BLE_GAP_SVC_ATTR_TYPE|enum|enum BLE_GAP_SVC_ATTR_TYPE {
DECL|DUMMY_VALUE|enumerator|DUMMY_VALUE = 0,
DECL|GAP_SVC_ATTR_APPEARANCE|enumerator|GAP_SVC_ATTR_APPEARANCE,
DECL|GAP_SVC_ATTR_CAR|enumerator|GAP_SVC_ATTR_CAR = 0xa6,
DECL|GAP_SVC_ATTR_NAME|enumerator|GAP_SVC_ATTR_NAME = 0,
DECL|GAP_SVC_ATTR_PPCP|enumerator|GAP_SVC_ATTR_PPCP = 4,
DECL|NBLE_GAP_SM_EVT_BONDING_COMPLETE|enumerator|NBLE_GAP_SM_EVT_BONDING_COMPLETE,
DECL|NBLE_GAP_SM_EVT_LINK_ENCRYPTED|enumerator|NBLE_GAP_SM_EVT_LINK_ENCRYPTED,
DECL|NBLE_GAP_SM_EVT_LINK_SECURITY_CHANGE|enumerator|NBLE_GAP_SM_EVT_LINK_SECURITY_CHANGE,
DECL|NBLE_GAP_SM_EVT_START_PAIRING|enumerator|NBLE_GAP_SM_EVT_START_PAIRING,
DECL|NBLE_GAP_SM_EVT|enum|enum NBLE_GAP_SM_EVT {
DECL|NBLE_GAP_SM_PASSKEY_TYPE|enum|enum NBLE_GAP_SM_PASSKEY_TYPE {
DECL|NBLE_GAP_SM_PK_OOB|enumerator|NBLE_GAP_SM_PK_OOB,
DECL|NBLE_GAP_SM_PK_PASSKEY|enumerator|NBLE_GAP_SM_PK_PASSKEY,
DECL|NBLE_GAP_SM_REJECT|enumerator|NBLE_GAP_SM_REJECT = 0,
DECL|active|member|uint8_t active;
DECL|addr_count|member|uint8_t addr_count;
DECL|addr|member|bt_addr_le_t addr;
DECL|addr|member|bt_addr_le_t addr;
DECL|adv_type|member|uint8_t adv_type;
DECL|ad|member|struct bt_eir_data ad;
DECL|appearance|member|uint16_t appearance;
DECL|attr_type|member|uint16_t attr_type;
DECL|attr_type|member|uint16_t attr_type;
DECL|attr_type|member|uint16_t attr_type;
DECL|auth_level|member|uint8_t auth_level;
DECL|authorization|member|uint8_t authorization;
DECL|bda|member|bt_addr_le_t bda;
DECL|bda|member|bt_addr_le_t bda;
DECL|bd|member|bt_addr_le_t bd;
DECL|bd|member|const bt_addr_le_t bd;
DECL|ble_bond_info_cb_t|typedef|typedef void (*ble_bond_info_cb_t)(const struct nble_gap_sm_bond_info *info,
DECL|bt_eir_data|struct|struct bt_eir_data {
DECL|car|member|uint8_t car;
DECL|cb|member|ble_bond_info_cb_t cb;
DECL|cb|member|ble_bond_info_cb_t cb;
DECL|cb|member|nble_set_bda_cb_t cb;
DECL|cb|member|nble_set_bda_cb_t cb;
DECL|ch_map|member|struct nble_gap_channel_map ch_map;
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
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_params|member|struct nble_gap_connection_params conn_params;
DECL|conn_params|member|struct nble_gap_connection_params conn_params;
DECL|conn_values|member|struct nble_gap_connection_values conn_values;
DECL|conn_values|member|struct nble_gap_connection_values conn_values;
DECL|conn|member|struct bt_conn *conn;
DECL|conn|member|struct bt_conn *conn;
DECL|conn|member|struct bt_conn *conn;
DECL|data|member|uint8_t data[31];
DECL|debug_params|struct|struct debug_params {
DECL|debug_response|struct|struct debug_response {
DECL|delta_dBm|member|uint8_t delta_dBm;
DECL|enc_link_sec|member|struct nble_link_sec enc_link_sec;
DECL|enc_size|member|uint8_t enc_size;
DECL|error|member|uint16_t error;
DECL|err|member|int err;
DECL|evt_type|member|uint8_t evt_type;
DECL|filter_policy|member|uint8_t filter_policy;
DECL|hci_reason|member|uint8_t hci_reason;
DECL|include_bonded_addrs|member|bool include_bonded_addrs;
DECL|info|member|struct nble_gap_sm_bond_info info;
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_min|member|uint16_t interval_min;
DECL|interval_min|member|uint16_t interval_min;
DECL|interval|member|uint16_t interval;
DECL|interval|member|uint16_t interval;
DECL|interval|member|uint16_t interval;
DECL|io_caps|member|uint8_t io_caps;
DECL|irk_count|member|uint8_t irk_count;
DECL|irk|member|uint8_t irk[BLE_GAP_SEC_MAX_KEY_LEN];
DECL|key_size|member|uint8_t key_size;
DECL|key_type|member|uint8_t key_type;
DECL|latency|member|uint16_t latency;
DECL|len|member|uint8_t len;
DECL|len|member|uint8_t len;
DECL|link_sup_to|member|uint16_t link_sup_to;
DECL|map|member|uint8_t map[5];
DECL|min_count|member|uint8_t min_count;
DECL|name_array|member|uint8_t name_array[20];
DECL|name|member|struct nble_gap_device_name name;
DECL|nble_gap_adv_params|struct|struct nble_gap_adv_params {
DECL|nble_gap_adv_report_evt|struct|struct nble_gap_adv_report_evt {
DECL|nble_gap_cancel_connect_params|struct|struct nble_gap_cancel_connect_params {
DECL|nble_gap_channel_map|struct|struct nble_gap_channel_map {
DECL|nble_gap_conn_update_evt|struct|struct nble_gap_conn_update_evt {
DECL|nble_gap_connect_evt|struct|struct nble_gap_connect_evt {
DECL|nble_gap_connect_req_params|struct|struct nble_gap_connect_req_params {
DECL|nble_gap_connect_update_params|struct|struct nble_gap_connect_update_params {
DECL|nble_gap_connection_params|struct|struct nble_gap_connection_params {
DECL|nble_gap_connection_values|struct|struct nble_gap_connection_values {
DECL|nble_gap_device_name|struct|struct nble_gap_device_name {
DECL|nble_gap_dir_adv_timeout_evt|struct|struct nble_gap_dir_adv_timeout_evt {
DECL|nble_gap_disconnect_evt|struct|struct nble_gap_disconnect_evt {
DECL|nble_gap_disconnect_req_params|struct|struct nble_gap_disconnect_req_params {
DECL|nble_gap_gen_cmd_params|struct|struct nble_gap_gen_cmd_params {
DECL|nble_gap_irk_info|struct|struct nble_gap_irk_info {
DECL|nble_gap_rssi_evt|struct|struct nble_gap_rssi_evt {
DECL|nble_gap_scan_parameters|struct|struct nble_gap_scan_parameters {
DECL|nble_gap_scan_params|struct|struct nble_gap_scan_params {
DECL|nble_gap_service_read_params|struct|struct nble_gap_service_read_params {
DECL|nble_gap_service_write_params|struct|struct nble_gap_service_write_params {
DECL|nble_gap_set_option_params|struct|struct nble_gap_set_option_params {
DECL|nble_gap_sm_bond_info_param|struct|struct nble_gap_sm_bond_info_param {
DECL|nble_gap_sm_bond_info_rsp|struct|struct nble_gap_sm_bond_info_rsp {
DECL|nble_gap_sm_bond_info|struct|struct nble_gap_sm_bond_info {
DECL|nble_gap_sm_clear_bond_req_params|struct|struct nble_gap_sm_clear_bond_req_params {
DECL|nble_gap_sm_config_params|struct|struct nble_gap_sm_config_params {
DECL|nble_gap_sm_config_rsp|struct|struct nble_gap_sm_config_rsp {
DECL|nble_gap_sm_key_reply_req_params|struct|struct nble_gap_sm_key_reply_req_params {
DECL|nble_gap_sm_pairing_params|struct|struct nble_gap_sm_pairing_params {
DECL|nble_gap_sm_passkey_disp_evt|struct|struct nble_gap_sm_passkey_disp_evt {
DECL|nble_gap_sm_passkey_req_evt|struct|struct nble_gap_sm_passkey_req_evt {
DECL|nble_gap_sm_passkey|struct|struct nble_gap_sm_passkey {
DECL|nble_gap_sm_response|struct|struct nble_gap_sm_response {
DECL|nble_gap_sm_security_params|struct|struct nble_gap_sm_security_params {
DECL|nble_gap_sm_status_evt|struct|struct nble_gap_sm_status_evt {
DECL|nble_link_sec|struct|struct nble_link_sec {
DECL|nble_log_s|struct|struct nble_log_s {
DECL|nble_response|struct|struct nble_response {
DECL|nble_rssi_report_params|struct|struct nble_rssi_report_params {
DECL|nble_service_read_bda_response|struct|struct nble_service_read_bda_response {
DECL|nble_service_write_response|struct|struct nble_service_write_response {
DECL|nble_set_bda_cb_t|typedef|typedef void (*nble_set_bda_cb_t)(int status, void *user_data);
DECL|nble_set_bda_params|struct|struct nble_set_bda_params {
DECL|nble_set_bda_rsp|struct|struct nble_set_bda_rsp {
DECL|nble_version_response|struct|struct nble_version_response {
DECL|oob_present|member|uint8_t oob_present;
DECL|oob|member|uint8_t oob[16];
DECL|op_code|member|uint8_t op_code;
DECL|options|member|uint8_t options;
DECL|op|member|uint8_t op;
DECL|op|member|uint8_t op;
DECL|param0|member|uint8_t param0;
DECL|param1|member|uint8_t param1;
DECL|param2|member|uint8_t param2;
DECL|param3|member|uint8_t param3;
DECL|params|member|struct nble_gap_connection_params params;
DECL|params|member|struct nble_gap_sm_pairing_params params;
DECL|params|member|struct nble_gap_sm_passkey params;
DECL|passkey|member|uint32_t passkey;
DECL|passkey|member|uint32_t passkey;
DECL|peer_bda|member|bt_addr_le_t peer_bda;
DECL|peer_bda|member|bt_addr_le_t peer_bda;
DECL|reason|member|uint8_t reason;
DECL|reason|member|uint8_t reason;
DECL|role_slave|member|uint8_t role_slave;
DECL|rssi_lvl|member|int8_t rssi_lvl;
DECL|rssi|member|int8_t rssi;
DECL|scan_params|member|struct nble_gap_scan_parameters scan_params;
DECL|scan_type|member|uint8_t scan_type;
DECL|sd|member|struct bt_eir_data sd;
DECL|sec_level|member|bt_security_t sec_level;
DECL|sec_mode|member|uint8_t sec_mode;
DECL|selective|member|uint8_t selective;
DECL|slave_latency|member|uint16_t slave_latency;
DECL|sm_bond_dev_avail|member|bool sm_bond_dev_avail;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|supervision_to|member|uint16_t supervision_to;
DECL|timeout|member|uint16_t timeout;
DECL|timeout|member|uint16_t timeout;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|u0|member|uint32_t u0;
DECL|u0|member|uint32_t u0;
DECL|u1|member|uint32_t u1;
DECL|u1|member|uint32_t u1;
DECL|use_whitelist|member|uint8_t use_whitelist;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|version|member|struct version_header version;
DECL|window|member|uint16_t window;
DECL|window|member|uint16_t window;
