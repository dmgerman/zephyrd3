DECL|BLE_CORE_GAP_BONDING|enumerator|BLE_CORE_GAP_BONDING = 0x01, /**< SMP supports bonding */
DECL|BLE_CORE_GAP_MITM|enumerator|BLE_CORE_GAP_MITM = 0x04,
DECL|BLE_CORE_GAP_OOB|enumerator|BLE_CORE_GAP_OOB = 0x08 /**< SMP supports Out Of Band data */
DECL|BLE_CORE_GAP_RSSI_DISABLE_REPORT|enumerator|BLE_CORE_GAP_RSSI_DISABLE_REPORT = 0,
DECL|BLE_CORE_GAP_RSSI_ENABLE_REPORT|enumerator|BLE_CORE_GAP_RSSI_ENABLE_REPORT
DECL|BLE_CORE_GAP_RSSI_OPS|enum|enum BLE_CORE_GAP_RSSI_OPS {
DECL|BLE_CORE_GAP_SM_OPTIONS|enum|enum BLE_CORE_GAP_SM_OPTIONS {
DECL|BLE_CORE_GAP_SM_PASSKEY_TYPE|enum|enum BLE_CORE_GAP_SM_PASSKEY_TYPE {
DECL|BLE_CORE_GAP_SM_PK_NONE|enumerator|BLE_CORE_GAP_SM_PK_NONE = 0, /**< No key (may be used to reject). */
DECL|BLE_CORE_GAP_SM_PK_OOB|enumerator|BLE_CORE_GAP_SM_PK_OOB, /**< Sec data is 16 bytes of OOB data */
DECL|BLE_CORE_GAP_SM_PK_PASSKEY|enumerator|BLE_CORE_GAP_SM_PK_PASSKEY, /**< Sec data is a 6-digit passkey. */
DECL|BLE_CORE_GAP_SM_STATUS|enum|enum BLE_CORE_GAP_SM_STATUS {
DECL|BLE_CORE_GAP_SM_ST_BONDING_COMPLETE|enumerator|BLE_CORE_GAP_SM_ST_BONDING_COMPLETE, /*< Bonding has completed */
DECL|BLE_CORE_GAP_SM_ST_LINK_ENCRYPTED|enumerator|BLE_CORE_GAP_SM_ST_LINK_ENCRYPTED, /*< Link is encrypted */
DECL|BLE_CORE_GAP_SM_ST_SECURITY_UPDATE|enumerator|BLE_CORE_GAP_SM_ST_SECURITY_UPDATE, /*< Link keys updated */
DECL|BLE_CORE_GAP_SM_ST_START_PAIRING|enumerator|BLE_CORE_GAP_SM_ST_START_PAIRING, /*< Pairing has started */
DECL|BLE_CORE_TEST_END_DTM|enumerator|BLE_CORE_TEST_END_DTM = 0x1f, /**< End LE DTM TEST */
DECL|BLE_CORE_TEST_INIT_DTM|enumerator|BLE_CORE_TEST_INIT_DTM = 0x01,
DECL|BLE_CORE_TEST_OPCODE|enum|enum BLE_CORE_TEST_OPCODE {
DECL|BLE_CORE_TEST_SET_TXPOWER|enumerator|BLE_CORE_TEST_SET_TXPOWER = 0x80,
DECL|BLE_CORE_TEST_START_DTM_RX|enumerator|BLE_CORE_TEST_START_DTM_RX = 0x1d, /**< LE rcv test HCI op */
DECL|BLE_CORE_TEST_START_DTM_TX|enumerator|BLE_CORE_TEST_START_DTM_TX = 0x1e, /**< LE trans test HCI op */
DECL|BLE_CORE_TEST_START_TX_CARRIER|enumerator|BLE_CORE_TEST_START_TX_CARRIER, /**< Start Tx Carrier Test */
DECL|BLE_GAP_GEN_OPS|enum|enum BLE_GAP_GEN_OPS {
DECL|BLE_GAP_SCAN_ACTIVE|enumerator|BLE_GAP_SCAN_ACTIVE = 0x01,
DECL|BLE_GAP_SCAN_DEFAULT|enumerator|BLE_GAP_SCAN_DEFAULT = 0,
DECL|BLE_GAP_SCAN_OPTIONS|enum|enum BLE_GAP_SCAN_OPTIONS {
DECL|BLE_GAP_SCAN_WHITE_LISTED|enumerator|BLE_GAP_SCAN_WHITE_LISTED = 0x02,
DECL|BLE_GAP_SEC_MAX_KEY_LEN|macro|BLE_GAP_SEC_MAX_KEY_LEN
DECL|BLE_GAP_SET_CH_MAP|enumerator|BLE_GAP_SET_CH_MAP = 0, /**< Set channel map */
DECL|BLE_GAP_SET_OPTIONS|enum|enum BLE_GAP_SET_OPTIONS {
DECL|BLE_GAP_SVC_ATTR_TYPE|enum|enum BLE_GAP_SVC_ATTR_TYPE {
DECL|BLE_PASSKEY_LEN|macro|BLE_PASSKEY_LEN
DECL|DUMMY_VALUE|enumerator|DUMMY_VALUE = 0, /**< Not used now. */
DECL|GAP_SVC_ATTR_APPEARANCE|enumerator|GAP_SVC_ATTR_APPEARANCE, /**< Appearance, UUID 0x2a01 */
DECL|GAP_SVC_ATTR_CAR|enumerator|GAP_SVC_ATTR_CAR = 0xa6,
DECL|GAP_SVC_ATTR_NAME|enumerator|GAP_SVC_ATTR_NAME = 0, /**< Device Name, UUID 0x2a00 */
DECL|GAP_SVC_ATTR_PPCP|enumerator|GAP_SVC_ATTR_PPCP = 4,
DECL|active|member|uint8_t active; /**< If 1, perform active scan (scan req) */
DECL|addr_count|member|uint8_t addr_count; /**< Count of device addr in array. */
DECL|addrs|member|bt_addr_le_t addrs[8];
DECL|ad|member|struct bt_eir_data ad; /**< Advertisement data, maybe 0 (length) */
DECL|appearance|member|uint16_t appearance; /**< Appearance UUID */
DECL|attr_type|member|uint16_t attr_type;
DECL|attr_type|member|uint16_t attr_type;
DECL|attr_type|member|uint16_t attr_type;
DECL|auth_level|member|uint8_t auth_level;
DECL|authorization|member|uint8_t authorization;
DECL|bda_present|member|uint8_t bda_present;
DECL|bda|member|bt_addr_le_t bda;
DECL|bda|member|bt_addr_le_t bda;
DECL|bd|member|bt_addr_le_t bd; /**< If @ref status ok */
DECL|bd|member|const bt_addr_le_t bd;
DECL|ble_core_bonded_devices|struct|struct ble_core_bonded_devices {
DECL|ble_core_gap_connection_params|struct|struct ble_core_gap_connection_params {
DECL|ble_core_gap_scan_params|struct|struct ble_core_gap_scan_params {
DECL|ble_core_gap_sm_config_params|struct|struct ble_core_gap_sm_config_params {
DECL|ble_core_gap_sm_pairing_params|struct|struct ble_core_gap_sm_pairing_params {
DECL|ble_core_gap_sm_pairing_req_params|struct|struct ble_core_gap_sm_pairing_req_params {
DECL|ble_core_gap_sm_passkey|struct|struct ble_core_gap_sm_passkey {
DECL|ble_core_response|struct|struct ble_core_response {
DECL|ble_core_rssi_report_params|struct|struct ble_core_rssi_report_params {
DECL|ble_gap_adv_params|struct|struct ble_gap_adv_params {
DECL|ble_gap_cancel_connect_params|struct|struct ble_gap_cancel_connect_params {
DECL|ble_gap_channel_map|struct|struct ble_gap_channel_map {
DECL|ble_gap_conn_update_evt|struct|struct ble_gap_conn_update_evt {
DECL|ble_gap_connect_evt|struct|struct ble_gap_connect_evt {
DECL|ble_gap_connect_req_params|struct|struct ble_gap_connect_req_params {
DECL|ble_gap_connect_update_params|struct|struct ble_gap_connect_update_params {
DECL|ble_gap_connection_values|struct|struct ble_gap_connection_values {
DECL|ble_gap_device_name|struct|struct ble_gap_device_name {
DECL|ble_gap_disconnect_evt|struct|struct ble_gap_disconnect_evt {
DECL|ble_gap_disconnect_req_params|struct|struct ble_gap_disconnect_req_params {
DECL|ble_gap_gen_cmd_params|struct|struct ble_gap_gen_cmd_params {
DECL|ble_gap_irk_info|struct|struct ble_gap_irk_info {
DECL|ble_gap_rssi_evt|struct|struct ble_gap_rssi_evt {
DECL|ble_gap_scan_params|struct|struct ble_gap_scan_params {
DECL|ble_gap_service_read_params|struct|struct ble_gap_service_read_params {
DECL|ble_gap_service_write_params|struct|struct ble_gap_service_write_params {
DECL|ble_gap_set_option_params|struct|struct ble_gap_set_option_params {
DECL|ble_gap_sm_config_rsp|struct|struct ble_gap_sm_config_rsp {
DECL|ble_gap_sm_key_reply_req_params|struct|struct ble_gap_sm_key_reply_req_params {
DECL|ble_gap_sm_passkey_disp_evt|struct|struct ble_gap_sm_passkey_disp_evt {
DECL|ble_gap_sm_passkey_req_evt|struct|struct ble_gap_sm_passkey_req_evt {
DECL|ble_gap_sm_status_evt|struct|struct ble_gap_sm_status_evt {
DECL|ble_gap_timout_evt|struct|struct ble_gap_timout_evt {
DECL|ble_get_bonded_device_list_rsp|struct|struct ble_get_bonded_device_list_rsp {
DECL|ble_log_s|struct|struct ble_log_s {
DECL|ble_service_read_bda_response|struct|struct ble_service_read_bda_response {
DECL|ble_service_write_response|struct|struct ble_service_write_response {
DECL|ble_version_response|struct|struct ble_version_response {
DECL|ble_wr_config_params|struct|struct ble_wr_config_params {
DECL|bonded_dev|member|struct ble_core_bonded_devices bonded_dev;
DECL|bt_eir_data|struct|struct bt_eir_data {
DECL|car|member|uint8_t car;
DECL|central_conn_params|member|struct ble_core_gap_connection_params central_conn_params;
DECL|ch_map|member|struct ble_gap_channel_map ch_map;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< conn on which to change channel map */
DECL|conn_params|member|struct ble_core_gap_connection_params conn_params;
DECL|conn_params|member|struct ble_core_gap_connection_params conn_params;
DECL|conn_values|member|struct ble_gap_connection_values conn_values;
DECL|conn_values|member|struct ble_gap_connection_values conn_values;
DECL|data|member|uint8_t data[31];
DECL|debug_params|struct|struct debug_params {
DECL|debug_response|struct|struct debug_response {
DECL|delta_dBm|member|uint8_t delta_dBm; /**< minimum RSSI dBm change to report a new RSSI value */
DECL|filter_policy|member|uint8_t filter_policy; /**< filter policy to apply with white list */
DECL|gap_status|member|uint8_t gap_status;
DECL|hci_reason|member|uint8_t hci_reason; /**< HCI disconnect reason */
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_max|member|uint16_t interval_max; /**< max interval 0xffff: use default 0x0800 */
DECL|interval_min|member|uint16_t interval_min;
DECL|interval_min|member|uint16_t interval_min; /**< min interval 0xffff: use default 0x0800 */
DECL|interval|member|uint16_t interval;
DECL|interval|member|uint16_t interval;
DECL|interval|member|uint16_t interval; /**< Conn interval (unit 1.25 ms) */
DECL|io_caps|member|uint8_t io_caps;
DECL|irk|member|uint8_t irk[BLE_GAP_SEC_MAX_KEY_LEN];
DECL|key_size|member|uint8_t key_size; /**< Maximum encryption key size (7-16) */
DECL|key_type|member|uint8_t key_type;
DECL|latency|member|uint16_t latency; /**< Conn latency (unit interval) */
DECL|len|member|uint8_t len;
DECL|len|member|uint8_t len; /**< Device name length (0-248) */
DECL|link_sup_to|member|uint16_t link_sup_to;
DECL|map|member|uint8_t map[5]; /**< 37 bits are used of the 40 bits (LSB) */
DECL|min_count|member|uint8_t min_count; /**< number of delta_dBm changes before sending a new RSSI report */
DECL|name_array|member|uint8_t name_array[20]; /**< Device */
DECL|name|member|struct ble_gap_device_name name;
DECL|oob|member|uint8_t oob[16]; /**< 16 bytes of OOB security data */
DECL|op_code|member|uint8_t op_code; /**< @ref BLE_GAP_GEN_OPS */
DECL|options|member|uint8_t options;
DECL|options|member|uint8_t options; /**< Sec options (@ref BLE_GAP_SM_OPTIONS) */
DECL|op|member|uint8_t op; /**< Option to set @ref BLE_GAP_SET_OPTIONS */
DECL|op|member|uint8_t op; /**< RSSI operation @ref BLE_GAP_RSSI_OPS */
DECL|param0|member|uint8_t param0;
DECL|param1|member|uint8_t param1;
DECL|param2|member|uint8_t param2;
DECL|param3|member|uint8_t param3;
DECL|params|member|struct ble_core_gap_connection_params params;
DECL|params|member|struct ble_core_gap_sm_pairing_params params;
DECL|params|member|struct ble_core_gap_sm_passkey params; /**< Bonding security reply */
DECL|passkey|member|uint8_t passkey[6]; /**< 6 digits (string) */
DECL|passkey|member|uint8_t passkey[BLE_PASSKEY_LEN]; /**< Passkey to be displayed */
DECL|peer_bda|member|bt_addr_le_t peer_bda;
DECL|peer_bda|member|bt_addr_le_t peer_bda;
DECL|priv|member|struct cfw_message *priv;
DECL|reason|member|int reason;
DECL|reason|member|uint8_t reason; /**< Reason of the disconnect */
DECL|role|member|uint8_t role;
DECL|rssi_lvl|member|int8_t rssi_lvl; /**< RSSI level (compared to 0 dBm) */
DECL|scan_params|member|struct ble_core_gap_scan_params scan_params;
DECL|sd|member|struct bt_eir_data sd; /**< Scan response data, maybe 0 (length) */
DECL|sec_mode|member|uint8_t sec_mode;
DECL|selective|member|uint8_t selective; /**< If 1, ignore unknown dev (non whitelist) */
DECL|slave_latency|member|uint16_t slave_latency;
DECL|state|member|uint32_t state; /**< State of bond DB */
DECL|status|member|int status; /**< Result of sec manager initialization */
DECL|status|member|int status; /**< Status of the operation */
DECL|status|member|int status; /**< Status of the operation */
DECL|status|member|int status; /**< Status of the operation */
DECL|status|member|int status; /**< Status of the operation */
DECL|status|member|int status; /**< Status of the operation */
DECL|status|member|uint8_t status;
DECL|supervision_to|member|uint16_t supervision_to; /**< Conn supervision timeout (10ms) */
DECL|timeout|member|uint16_t timeout;
DECL|timeout|member|uint16_t timeout;
DECL|timeout|member|uint16_t timeout; /**< scan timeout in s, 0 never */
DECL|tx_power|member|int8_t tx_power;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type; /**< advertisement types @ref GAP_ADV_TYPES */
DECL|u0|member|uint32_t u0; /** user parameter */
DECL|u0|member|uint32_t u0; /** user parameter */
DECL|u1|member|uint32_t u1; /** user parameter */
DECL|u1|member|uint32_t u1; /** user parameter */
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data; /**< Pointer to response data structure */
DECL|user_data|member|void *user_data; /**< Pointer to the user data of the request */
DECL|user_data|member|void *user_data; /**< Pointer to the user data of the request */
DECL|user_data|member|void *user_data; /**< Pointer to user data structure */
DECL|version|member|struct version_header version;
DECL|window|member|uint16_t window;
DECL|window|member|uint16_t window;
