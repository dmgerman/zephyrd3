DECL|BLE_GATTS_MAX_SERVICES|macro|BLE_GATTS_MAX_SERVICES
DECL|BLE_GATT_IND_TYPES|enum|enum BLE_GATT_IND_TYPES {
DECL|BLE_GATT_IND_TYPE_INDICATION|enumerator|BLE_GATT_IND_TYPE_INDICATION,
DECL|BLE_GATT_IND_TYPE_NONE|enumerator|BLE_GATT_IND_TYPE_NONE = 0,
DECL|BLE_GATT_IND_TYPE_NOTIFICATION|enumerator|BLE_GATT_IND_TYPE_NOTIFICATION,
DECL|DISCOVER_FLAGS_UUID_PRESENT|macro|DISCOVER_FLAGS_UUID_PRESENT
DECL|attr_base|member|struct bt_gatt_attr *attr_base;
DECL|attr_base|member|struct bt_gatt_attr *attr_base;
DECL|attr_count|member|uint8_t attr_count;
DECL|attr_count|member|uint8_t attr_count;
DECL|attr_handle|member|uint16_t attr_handle;
DECL|attr_handle|member|uint16_t attr_handle;
DECL|attr|member|struct bt_gatt_attr *attr;
DECL|attr|member|struct bt_gatt_attr *attr;
DECL|attr|member|struct bt_gatt_attr *attr;
DECL|attr|member|struct bt_gatt_attr *attr;
DECL|attr|member|struct bt_gatt_attr *attr;
DECL|cback|member|bt_gatt_indicate_func_t cback;
DECL|cback|member|bt_gatt_indicate_func_t cback;
DECL|cback|member|bt_gatt_notify_func_t cback;
DECL|cback|member|bt_gatt_notify_func_t cback;
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
DECL|conn_handle|member|uint16_t conn_handle;
DECL|data_size|member|uint16_t data_size;
DECL|data|member|uint8_t data[0];
DECL|end_handle|member|uint16_t end_handle;
DECL|end_handle|member|uint16_t end_handle;
DECL|flags|member|uint8_t flags;
DECL|handle_range|member|struct nble_gatt_handle_range handle_range;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle; /* handle from ble controller should be sufficient */
DECL|len|member|uint16_t len;
DECL|nble_discover_params|struct|struct nble_discover_params {
DECL|nble_gatt_attr_handles|struct|struct nble_gatt_attr_handles {
DECL|nble_gatt_attr|struct|struct nble_gatt_attr {
DECL|nble_gatt_handle_range|struct|struct nble_gatt_handle_range {
DECL|nble_gatt_ind_rsp|struct|struct nble_gatt_ind_rsp {
DECL|nble_gatt_notif_ind_params|struct|struct nble_gatt_notif_ind_params {
DECL|nble_gatt_notif_rsp|struct|struct nble_gatt_notif_rsp {
DECL|nble_gatt_rd_evt|struct|struct nble_gatt_rd_evt {
DECL|nble_gatt_register_req|struct|struct nble_gatt_register_req {
DECL|nble_gatt_register_rsp|struct|struct nble_gatt_register_rsp {
DECL|nble_gatt_send_ind_params|struct|struct nble_gatt_send_ind_params {
DECL|nble_gatt_send_notif_params|struct|struct nble_gatt_send_notif_params {
DECL|nble_gatt_wr_evt|struct|struct nble_gatt_wr_evt {
DECL|nble_gattc_characteristic|struct|struct nble_gattc_characteristic {
DECL|nble_gattc_descriptor|struct|struct nble_gattc_descriptor {
DECL|nble_gattc_discover_rsp|struct|struct nble_gattc_discover_rsp {
DECL|nble_gattc_included|struct|struct nble_gattc_included {
DECL|nble_gattc_primary|struct|struct nble_gattc_primary {
DECL|nble_gattc_read_params|struct|struct nble_gattc_read_params {
DECL|nble_gattc_read_rsp|struct|struct nble_gattc_read_rsp {
DECL|nble_gattc_value_evt|struct|struct nble_gattc_value_evt {
DECL|nble_gattc_write_params|struct|struct nble_gattc_write_params {
DECL|nble_gattc_write_rsp|struct|struct nble_gattc_write_rsp {
DECL|nble_gatts_rw_reply_params|struct|struct nble_gatts_rw_reply_params {
DECL|nble_gatts_svc_changed_params|struct|struct nble_gatts_svc_changed_params {
DECL|offset|member|uint16_t offset;
DECL|offset|member|uint16_t offset;
DECL|offset|member|uint16_t offset;
DECL|offset|member|uint16_t offset;
DECL|offset|member|uint16_t offset;
DECL|offset|member|uint16_t offset;
DECL|offset|member|uint16_t offset;
DECL|params|member|struct nble_gatt_notif_ind_params params;
DECL|params|member|struct nble_gatt_notif_ind_params params;
DECL|perm|member|uint16_t perm;
DECL|prop|member|uint8_t prop;
DECL|range|member|struct nble_gatt_handle_range range;
DECL|range|member|struct nble_gatt_handle_range range;
DECL|reply|member|uint8_t reply;
DECL|start_handle|member|uint16_t start_handle;
DECL|start_handle|member|uint16_t start_handle;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|value_handle|member|uint16_t value_handle;
DECL|with_resp|member|uint8_t with_resp;
DECL|write_reply|member|uint8_t write_reply;
