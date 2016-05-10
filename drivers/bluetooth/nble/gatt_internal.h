DECL|BLE_GATTS_MAX_SERVICES|macro|BLE_GATTS_MAX_SERVICES
DECL|DISCOVER_FLAGS_UUID_PRESENT|macro|DISCOVER_FLAGS_UUID_PRESENT
DECL|NBLE_GATT_WR_FLAG_PREP|enumerator|NBLE_GATT_WR_FLAG_PREP = 2,
DECL|NBLE_GATT_WR_FLAG_REPLY|enumerator|NBLE_GATT_WR_FLAG_REPLY = 1,
DECL|attr_base|member|struct bt_gatt_attr *attr_base;
DECL|attr_base|member|struct bt_gatt_attr *attr_base;
DECL|attr_count|member|uint8_t attr_count;
DECL|attr_count|member|uint8_t attr_count;
DECL|attr|member|const struct bt_gatt_attr *attr;
DECL|attr|member|struct bt_gatt_attr *attr;
DECL|attr|member|struct bt_gatt_attr *attr;
DECL|attr|member|struct bt_gatt_attr *attr;
DECL|attr|member|struct bt_gatt_attr *attr;
DECL|bt_att_func_t|typedef|typedef void (*bt_att_func_t)(struct bt_conn *conn, uint8_t err,
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
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|data_size|member|uint16_t data_size;
DECL|data|member|uint8_t data[0];
DECL|end_handle|member|uint16_t end_handle;
DECL|flags|member|uint8_t flags;
DECL|flag|member|uint8_t flag;
DECL|flag|member|uint8_t flag; /* Cf. enum nble_gatt_wr_flag */
DECL|func|member|bt_att_func_t func;
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
DECL|handle|member|uint16_t handle;
DECL|len|member|uint16_t len;
DECL|nble_gatt_attr_handles|struct|struct nble_gatt_attr_handles {
DECL|nble_gatt_attr|struct|struct nble_gatt_attr {
DECL|nble_gatt_handle_range|struct|struct nble_gatt_handle_range {
DECL|nble_gatt_notif_ind_params|struct|struct nble_gatt_notif_ind_params {
DECL|nble_gatt_wr_flag|enum|enum nble_gatt_wr_flag {
DECL|nble_gatt_write_params|struct|struct nble_gatt_write_params {
DECL|nble_gattc_characteristic|struct|struct nble_gattc_characteristic {
DECL|nble_gattc_descriptor|struct|struct nble_gattc_descriptor {
DECL|nble_gattc_discover_req|struct|struct nble_gattc_discover_req {
DECL|nble_gattc_discover_rsp|struct|struct nble_gattc_discover_rsp {
DECL|nble_gattc_included|struct|struct nble_gattc_included {
DECL|nble_gattc_primary|struct|struct nble_gattc_primary {
DECL|nble_gattc_read_multi_req|struct|struct nble_gattc_read_multi_req {
DECL|nble_gattc_read_req|struct|struct nble_gattc_read_req {
DECL|nble_gattc_read_rsp|struct|struct nble_gattc_read_rsp {
DECL|nble_gattc_value_evt|struct|struct nble_gattc_value_evt {
DECL|nble_gattc_write_req|struct|struct nble_gattc_write_req {
DECL|nble_gattc_write_rsp|struct|struct nble_gattc_write_rsp {
DECL|nble_gatts_indicate_req|struct|struct nble_gatts_indicate_req {
DECL|nble_gatts_indicate_rsp|struct|struct nble_gatts_indicate_rsp {
DECL|nble_gatts_notify_req|struct|struct nble_gatts_notify_req {
DECL|nble_gatts_notify_tx_evt|struct|struct nble_gatts_notify_tx_evt {
DECL|nble_gatts_read_evt|struct|struct nble_gatts_read_evt {
DECL|nble_gatts_read_reply_req|struct|struct nble_gatts_read_reply_req {
DECL|nble_gatts_register_req|struct|struct nble_gatts_register_req {
DECL|nble_gatts_register_rsp|struct|struct nble_gatts_register_rsp {
DECL|nble_gatts_write_evt|struct|struct nble_gatts_write_evt {
DECL|nble_gatts_write_exec_evt|struct|struct nble_gatts_write_exec_evt {
DECL|nble_gatts_write_reply_req|struct|struct nble_gatts_write_reply_req {
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
DECL|start_handle|member|uint16_t start_handle;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int32_t status;
DECL|status|member|int32_t status;
DECL|status|member|int32_t status;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data;
DECL|user_data|member|void *user_data[2];
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|uuid|member|struct bt_uuid_128 uuid;
DECL|value_handle|member|uint16_t value_handle;
DECL|with_resp|member|uint8_t with_resp;
DECL|wr_params|member|struct nble_gatt_write_params wr_params;
DECL|wr_params|member|struct nble_gatt_write_params wr_params;
