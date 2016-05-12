DECL|BLE_GAP_RSSI_EVT_SIZE|macro|BLE_GAP_RSSI_EVT_SIZE
DECL|BLE_GAP_SEC_MAX_KEY_LEN|macro|BLE_GAP_SEC_MAX_KEY_LEN
DECL|BLE_GAP_SET_CH_MAP|enumerator|BLE_GAP_SET_CH_MAP = 0,
DECL|BLE_GAP_SET_OPTIONS|enum|enum BLE_GAP_SET_OPTIONS {
DECL|BT_SMP_AUTH_BONDING|macro|BT_SMP_AUTH_BONDING
DECL|BT_SMP_AUTH_MITM|macro|BT_SMP_AUTH_MITM
DECL|BT_SMP_AUTH_NONE|macro|BT_SMP_AUTH_NONE
DECL|BT_SMP_AUTH_SC|macro|BT_SMP_AUTH_SC
DECL|BT_SMP_ERR_AUTH_REQUIREMENTS|macro|BT_SMP_ERR_AUTH_REQUIREMENTS
DECL|BT_SMP_ERR_BREDR_PAIRING_IN_PROGRESS|macro|BT_SMP_ERR_BREDR_PAIRING_IN_PROGRESS
DECL|BT_SMP_ERR_CMD_NOTSUPP|macro|BT_SMP_ERR_CMD_NOTSUPP
DECL|BT_SMP_ERR_CONFIRM_FAILED|macro|BT_SMP_ERR_CONFIRM_FAILED
DECL|BT_SMP_ERR_CROSS_TRANSP_NOT_ALLOWED|macro|BT_SMP_ERR_CROSS_TRANSP_NOT_ALLOWED
DECL|BT_SMP_ERR_DHKEY_CHECK_FAILED|macro|BT_SMP_ERR_DHKEY_CHECK_FAILED
DECL|BT_SMP_ERR_ENC_KEY_SIZE|macro|BT_SMP_ERR_ENC_KEY_SIZE
DECL|BT_SMP_ERR_INVALID_PARAMS|macro|BT_SMP_ERR_INVALID_PARAMS
DECL|BT_SMP_ERR_NUMERIC_COMP_FAILED|macro|BT_SMP_ERR_NUMERIC_COMP_FAILED
DECL|BT_SMP_ERR_OOB_NOT_AVAIL|macro|BT_SMP_ERR_OOB_NOT_AVAIL
DECL|BT_SMP_ERR_PAIRING_NOTSUPP|macro|BT_SMP_ERR_PAIRING_NOTSUPP
DECL|BT_SMP_ERR_PASSKEY_ENTRY_FAILED|macro|BT_SMP_ERR_PASSKEY_ENTRY_FAILED
DECL|BT_SMP_ERR_REPEATED_ATTEMPTS|macro|BT_SMP_ERR_REPEATED_ATTEMPTS
DECL|BT_SMP_ERR_UNSPECIFIED|macro|BT_SMP_ERR_UNSPECIFIED
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
DECL|addr|member|bt_addr_le_t addr;
DECL|adv_type|member|uint8_t adv_type;
DECL|ad|member|struct bt_eir_data ad;
DECL|appearance|member|uint16_t appearance;
DECL|attr_type|member|uint16_t attr_type;
DECL|attr_type|member|uint16_t attr_type;
DECL|auth_level|member|uint8_t auth_level;
DECL|authorization|member|uint8_t authorization;
DECL|auth|member|const struct bt_conn_auth_cb *auth;
DECL|bda|member|bt_addr_le_t bda;
DECL|bda|member|bt_addr_le_t bda;
DECL|bd|member|bt_addr_le_t bd;
DECL|ble_bond_info_cb_t|typedef|typedef void (*ble_bond_info_cb_t)(const struct nble_gap_sm_bond_info *info,
DECL|ble_get_version_cb_t|typedef|typedef void (*ble_get_version_cb_t)(const struct nble_version *ver);
DECL|bt_eir_data|struct|struct bt_eir_data {
DECL|car|member|uint8_t car;
DECL|cb|member|ble_bond_info_cb_t cb;
DECL|cb|member|ble_bond_info_cb_t cb;
DECL|cb|member|ble_get_version_cb_t cb;
DECL|cb|member|nble_set_bda_cb_t cb;
DECL|cb|member|nble_set_bda_cb_t cb;
DECL|channel|member|uint8_t channel;
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
DECL|delta_dBm|member|uint8_t delta_dBm;
DECL|distance|member|float distance;
DECL|distance|member|uint8_t distance;
DECL|enc_link_sec|member|struct nble_link_sec enc_link_sec;
DECL|enc_size|member|uint8_t enc_size;
DECL|error|member|uint16_t error;
DECL|err|member|int err;
DECL|evt_type|member|uint8_t evt_type;
DECL|filter_policy|member|uint8_t filter_policy;
DECL|hash|member|uint8_t hash[4];
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
DECL|keep_adv|member|bool keep_adv;
DECL|key_size|member|uint8_t key_size;
DECL|key_type|member|uint8_t key_type;
DECL|latency|member|uint16_t latency;
DECL|len|member|uint8_t len;
DECL|len|member|uint8_t len;
DECL|link_sup_to|member|uint16_t link_sup_to;
DECL|major|member|uint8_t major;
DECL|map|member|uint8_t map[5];
DECL|min_count|member|uint8_t min_count;
DECL|minor|member|uint8_t minor;
DECL|name_array|member|uint8_t name_array[20];
DECL|name|member|struct nble_gap_device_name name;
DECL|nble_common_rsp|struct|struct nble_common_rsp {
DECL|nble_dbg_rsp|struct|struct nble_dbg_rsp {
DECL|nble_debug_params|struct|struct nble_debug_params {
DECL|nble_gap_adv_report_evt|struct|struct nble_gap_adv_report_evt {
DECL|nble_gap_channel_map|struct|struct nble_gap_channel_map {
DECL|nble_gap_conn_update_evt|struct|struct nble_gap_conn_update_evt {
DECL|nble_gap_conn_update_req|struct|struct nble_gap_conn_update_req {
DECL|nble_gap_connect_evt|struct|struct nble_gap_connect_evt {
DECL|nble_gap_connect_req|struct|struct nble_gap_connect_req {
DECL|nble_gap_connection_params|struct|struct nble_gap_connection_params {
DECL|nble_gap_connection_values|struct|struct nble_gap_connection_values {
DECL|nble_gap_device_name|struct|struct nble_gap_device_name {
DECL|nble_gap_dir_adv_timeout_evt|struct|struct nble_gap_dir_adv_timeout_evt {
DECL|nble_gap_disconnect_evt|struct|struct nble_gap_disconnect_evt {
DECL|nble_gap_disconnect_req|struct|struct nble_gap_disconnect_req {
DECL|nble_gap_get_version_param|struct|struct nble_gap_get_version_param {
DECL|nble_gap_irk_info|struct|struct nble_gap_irk_info {
DECL|nble_gap_rssi_evt|struct|struct nble_gap_rssi_evt {
DECL|nble_gap_scan_parameters|struct|struct nble_gap_scan_parameters {
DECL|nble_gap_service_req|struct|struct nble_gap_service_req {
DECL|nble_gap_set_adv_data_req|struct|struct nble_gap_set_adv_data_req {
DECL|nble_gap_set_adv_params_req|struct|struct nble_gap_set_adv_params_req {
DECL|nble_gap_set_rssi_report_req|struct|struct nble_gap_set_rssi_report_req {
DECL|nble_gap_set_tx_power_req|struct|struct nble_gap_set_tx_power_req {
DECL|nble_gap_sm_bond_info|struct|struct nble_gap_sm_bond_info {
DECL|nble_gap_sm_pairing_params|struct|struct nble_gap_sm_pairing_params {
DECL|nble_gap_sm_passkey|struct|struct nble_gap_sm_passkey {
DECL|nble_gap_start_scan_req|struct|struct nble_gap_start_scan_req {
DECL|nble_get_bda_rsp|struct|struct nble_get_bda_rsp {
DECL|nble_get_version_rsp|struct|struct nble_get_version_rsp {
DECL|nble_link_sec|struct|struct nble_link_sec {
DECL|nble_log_s|struct|struct nble_log_s {
DECL|nble_service_write_response|struct|struct nble_service_write_response {
DECL|nble_set_bda_cb_t|typedef|typedef void (*nble_set_bda_cb_t)(int status, void *user_data);
DECL|nble_set_bda_req|struct|struct nble_set_bda_req {
DECL|nble_set_bda_rsp|struct|struct nble_set_bda_rsp {
DECL|nble_sm_bond_info_req|struct|struct nble_sm_bond_info_req {
DECL|nble_sm_bond_info_rsp|struct|struct nble_sm_bond_info_rsp {
DECL|nble_sm_clear_bonds_req|struct|struct nble_sm_clear_bonds_req {
DECL|nble_sm_common_rsp|struct|struct nble_sm_common_rsp {
DECL|nble_sm_config_req|struct|struct nble_sm_config_req {
DECL|nble_sm_config_rsp|struct|struct nble_sm_config_rsp {
DECL|nble_sm_passkey_disp_evt|struct|struct nble_sm_passkey_disp_evt {
DECL|nble_sm_passkey_reply_req|struct|struct nble_sm_passkey_reply_req {
DECL|nble_sm_passkey_req_evt|struct|struct nble_sm_passkey_req_evt {
DECL|nble_sm_security_req|struct|struct nble_sm_security_req {
DECL|nble_sm_status_evt|struct|struct nble_sm_status_evt {
DECL|nble_uas_bucket_change|struct|struct nble_uas_bucket_change {
DECL|nble_uas_rssi_calibrate_req|struct|struct nble_uas_rssi_calibrate_req {
DECL|nble_version|struct|struct nble_version {
DECL|nble|struct|struct nble {
DECL|oob_present|member|uint8_t oob_present;
DECL|oob|member|uint8_t oob[16];
DECL|options|member|uint8_t options;
DECL|op|member|uint8_t op;
DECL|param0|member|uint8_t param0;
DECL|param1|member|uint8_t param1;
DECL|param2|member|uint8_t param2;
DECL|param3|member|uint8_t param3;
DECL|params|member|struct nble_gap_connection_params params;
DECL|params|member|struct nble_gap_get_version_param params;
DECL|params|member|struct nble_gap_sm_pairing_params params;
DECL|params|member|struct nble_gap_sm_passkey params;
DECL|passkey|member|uint32_t passkey;
DECL|passkey|member|uint32_t passkey;
DECL|patch|member|uint8_t patch;
DECL|peer_bda|member|bt_addr_le_t peer_bda;
DECL|peer_bda|member|bt_addr_le_t peer_bda;
DECL|reason|member|uint8_t reason;
DECL|reason|member|uint8_t reason;
DECL|role_slave|member|uint8_t role_slave;
DECL|rssi_data|member|int8_t rssi_data[BLE_GAP_RSSI_EVT_SIZE];
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
DECL|tx_power|member|int8_t tx_power;
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
DECL|version_string|member|char version_string[20];
DECL|version|member|uint8_t version;
DECL|ver|member|struct nble_version ver;
DECL|window|member|uint16_t window;
DECL|window|member|uint16_t window;
