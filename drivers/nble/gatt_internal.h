DECL|BLE_GATTS_MAX_SERVICES|macro|BLE_GATTS_MAX_SERVICES
DECL|BLE_GATTS_OP_NONE|enumerator|BLE_GATTS_OP_NONE = 0,
DECL|BLE_GATTS_OP_WR_CMD_SIGNED|enumerator|BLE_GATTS_OP_WR_CMD_SIGNED,
DECL|BLE_GATTS_OP_WR_CMD|enumerator|BLE_GATTS_OP_WR_CMD,
DECL|BLE_GATTS_OP_WR_EXE_REQ_CANCEL|enumerator|BLE_GATTS_OP_WR_EXE_REQ_CANCEL,
DECL|BLE_GATTS_OP_WR_EXE_REQ_IMM|enumerator|BLE_GATTS_OP_WR_EXE_REQ_IMM
DECL|BLE_GATTS_OP_WR_PREP_REQ|enumerator|BLE_GATTS_OP_WR_PREP_REQ,
DECL|BLE_GATTS_OP_WR|enumerator|BLE_GATTS_OP_WR,
DECL|BLE_GATTS_WR_OPS|enum|enum BLE_GATTS_WR_OPS {
DECL|BLE_GATT_IND_TYPES|enum|enum BLE_GATT_IND_TYPES {
DECL|BLE_GATT_IND_TYPE_INDICATION|enumerator|BLE_GATT_IND_TYPE_INDICATION,
DECL|BLE_GATT_IND_TYPE_NONE|enumerator|BLE_GATT_IND_TYPE_NONE = 0,
DECL|BLE_GATT_IND_TYPE_NOTIFICATION|enumerator|BLE_GATT_IND_TYPE_NOTIFICATION,
DECL|MSG_ID_BLE_GATTS_SEND_IND_RSP|enumerator|MSG_ID_BLE_GATTS_SEND_IND_RSP, /**< Indication type */
DECL|MSG_ID_BLE_GATTS_SEND_NOTIF_RSP|enumerator|MSG_ID_BLE_GATTS_SEND_NOTIF_RSP, /**< Notification type */
DECL|attr_base|member|struct bt_gatt_attr *attr_base;
DECL|attr_base|member|struct bt_gatt_attr *attr_base; /**< Pointer to the registered table */
DECL|attr_count|member|uint8_t attr_count; /**< Number of attributes added */
DECL|attr_count|member|uint8_t attr_count; /**< Number of of attributes in this service */
DECL|attr_handle|member|uint16_t attr_handle; /**< handle of attribute to write */
DECL|attr_handle|member|uint16_t attr_handle; /**< handle of attribute to write */
DECL|attr_idx|member|uint8_t attr_idx; /**< Attribute index into service attribute table */
DECL|attr|member|struct ble_gatt_attr_handle_mapping attr;
DECL|attr|member|struct bt_gatt_attr *attr; /**< GATT Attribute */
DECL|ble_core_discover_params|struct|struct ble_core_discover_params {
DECL|ble_core_gatt_handle_range|struct|struct ble_core_gatt_handle_range {
DECL|ble_gatt_attr_handle_mapping|struct|struct ble_gatt_attr_handle_mapping {
DECL|ble_gatt_attr_handles|struct|struct ble_gatt_attr_handles {
DECL|ble_gatt_attr|struct|struct ble_gatt_attr {
DECL|ble_gatt_notif_ind_params|struct|struct ble_gatt_notif_ind_params {
DECL|ble_gatt_notif_ind_rsp|struct|struct ble_gatt_notif_ind_rsp {
DECL|ble_gatt_register_req|struct|struct ble_gatt_register_req {
DECL|ble_gatt_register_rsp|struct|struct ble_gatt_register_rsp {
DECL|ble_gatt_send_notif_ind_params|struct|struct ble_gatt_send_notif_ind_params {
DECL|ble_gatt_wr_evt|struct|struct ble_gatt_wr_evt {
DECL|ble_gattc_attr|struct|struct ble_gattc_attr {
DECL|ble_gattc_characteristic|struct|struct ble_gattc_characteristic {
DECL|ble_gattc_descriptor|struct|struct ble_gattc_descriptor {
DECL|ble_gattc_disc_rsp|struct|struct ble_gattc_disc_rsp {
DECL|ble_gattc_evt|struct|struct ble_gattc_evt {
DECL|ble_gattc_incl_svc|struct|struct ble_gattc_incl_svc {
DECL|ble_gattc_prim_svc|struct|struct ble_gattc_prim_svc {
DECL|ble_gattc_read_params|struct|struct ble_gattc_read_params {
DECL|ble_gattc_read_rsp|struct|struct ble_gattc_read_rsp {
DECL|ble_gattc_rsp|struct|struct ble_gattc_rsp {
DECL|ble_gattc_svc|struct|struct ble_gattc_svc {
DECL|ble_gattc_to_evt|struct|struct ble_gattc_to_evt {
DECL|ble_gattc_value_evt|struct|struct ble_gattc_value_evt {
DECL|ble_gattc_write_params|struct|struct ble_gattc_write_params {
DECL|ble_gattc_write_rsp|struct|struct ble_gattc_write_rsp {
DECL|ble_gatts_attribute_response|struct|struct ble_gatts_attribute_response {
DECL|ble_gatts_get_attribute_params|struct|struct ble_gatts_get_attribute_params {
DECL|ble_gatts_notif_ind_type|enum|enum ble_gatts_notif_ind_type {
DECL|ble_gatts_rw_reply_params|struct|struct ble_gatts_rw_reply_params {
DECL|ble_gatts_set_attribute_params|struct|struct ble_gatts_set_attribute_params {
DECL|ble_gatts_svc_changed_params|struct|struct ble_gatts_svc_changed_params {
DECL|char_handle|member|uint16_t char_handle;
DECL|char_handle|member|uint16_t char_handle; /**< Handle of the attribute to be read */
DECL|char_handle|member|uint16_t char_handle; /**< Handle of the attribute to be read */
DECL|chars|member|struct ble_gattc_characteristic chars;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle;
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle */
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle*/
DECL|conn_handle|member|uint16_t conn_handle; /**< Connection handle*/
DECL|conn_handle|member|uint16_t conn_handle; /**< GAP connection handle */
DECL|decl_handle|member|uint16_t decl_handle; /**< Charact declaration handle */
DECL|desc|member|struct ble_gattc_descriptor desc;
DECL|end_handle|member|uint16_t end_handle;
DECL|end_handle|member|uint16_t end_handle;
DECL|handle_range|member|struct ble_core_gatt_handle_range handle_range;
DECL|handle_range|member|struct ble_core_gatt_handle_range handle_range; /**< Discover range */
DECL|handle_range|member|struct ble_core_gatt_handle_range handle_range; /**< handle range */
DECL|handle_range|member|struct ble_core_gatt_handle_range handle_range; /**< handle range */
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle; /* handle from ble controller should be sufficient */
DECL|handle|member|uint16_t handle; /**< Attribute handle */
DECL|handle|member|uint16_t handle; /**< Characteristic value handle */
DECL|handle|member|uint16_t handle; /**< descriptor handle */
DECL|handle|member|uint16_t handle; /**< handle of char attr read */
DECL|incl_handle|member|uint16_t incl_handle; /**< Handle of included service */
DECL|incls|member|struct ble_gattc_incl_svc incls;
DECL|len|member|uint16_t len;
DECL|max_len|member|uint16_t max_len;
DECL|msg_type|member|uint8_t msg_type;
DECL|nble_gatt_rd_evt|struct|struct nble_gatt_rd_evt {
DECL|offset|member|uint16_t offset;
DECL|offset|member|uint16_t offset; /* by default 0 */
DECL|offset|member|uint16_t offset; /**< Offset in attribute buffer */
DECL|offset|member|uint16_t offset; /**< Offset into the attr value to be read */
DECL|offset|member|uint16_t offset; /**< Offset into the attr value to be write */
DECL|offset|member|uint16_t offset; /**< offset in attribute buffer */
DECL|offset|member|uint16_t offset; /**< offset in attribute buffer */
DECL|offset|member|uint16_t offset; /**< offset of data returned */
DECL|op|member|uint8_t op; /**< @ref BLE_GATTS_WR_OPS */
DECL|p_priv|member|void *p_priv;
DECL|params|member|struct ble_gatt_notif_ind_params params;
DECL|perm|member|uint16_t perm;
DECL|prim|member|struct ble_gattc_prim_svc prim;
DECL|prop|member|uint8_t prop; /**< Charact property */
DECL|reason|member|uint16_t reason; /**< GATT timeout reason */
DECL|start_handle|member|uint16_t start_handle;
DECL|start_handle|member|uint16_t start_handle;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status;
DECL|status|member|int status; /**< Reply status, from errno */
DECL|status|member|int status; /**< Status of the operation. */
DECL|status|member|int status; /**< Status of the operation. */
DECL|status|member|int status; /**< Status of the registration op */
DECL|svc_idx|member|uint8_t svc_idx; /**< Service index */
DECL|svc|member|struct ble_gattc_svc svc; /**< Included service */
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type; /**< @ref BLE_GATT_DISC_TYPES */
DECL|type|member|uint8_t type; /**< @ref BLE_GATT_DISC_TYPES */
DECL|type|member|uint8_t type; /**< Discover type @ref BLE_GATT_DISC_TYPES */
DECL|user_data_offset|member|uint16_t user_data_offset;
DECL|uuid_offset|member|uint16_t uuid_offset;
DECL|uuid|member|struct bt_uuid uuid; /**< Attribute UUID */
DECL|uuid|member|struct bt_uuid uuid; /**< Attribute's UUID */
DECL|uuid|member|struct bt_uuid uuid; /**< Charact UUID */
DECL|uuid|member|struct bt_uuid uuid; /**< service uuid */
DECL|uuid|member|struct bt_uuid uuid; /**< uuid of the descriptor */
DECL|val_handle|member|uint16_t val_handle;
DECL|value_handle|member|uint16_t value_handle; /* mandatory */
DECL|value_handle|member|uint16_t value_handle; /* mandatory */
DECL|value_handle|member|uint16_t value_handle; /* mandatory */
DECL|value_handle|member|uint16_t value_handle; /**< Charact value handle */
DECL|with_resp|member|bool with_resp; /**< Equal to true is response is needed */
DECL|write_reply|member|uint8_t write_reply; /**< 0 if read reply, otherwise rsp */
