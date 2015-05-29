DECL|BT_GATT_CCC_INDICATE|macro|BT_GATT_CCC_INDICATE
DECL|BT_GATT_CCC_NOTIFY|macro|BT_GATT_CCC_NOTIFY
DECL|BT_GATT_CCC|macro|BT_GATT_CCC
DECL|BT_GATT_CEP_RELIABLE_WRITE|macro|BT_GATT_CEP_RELIABLE_WRITE
DECL|BT_GATT_CEP_WRITABLE_AUX|macro|BT_GATT_CEP_WRITABLE_AUX
DECL|BT_GATT_CHARACTERISTIC|macro|BT_GATT_CHARACTERISTIC
DECL|BT_GATT_CHRC_AUTH|macro|BT_GATT_CHRC_AUTH
DECL|BT_GATT_CHRC_BROADCAST|macro|BT_GATT_CHRC_BROADCAST
DECL|BT_GATT_CHRC_EXT_PROP|macro|BT_GATT_CHRC_EXT_PROP
DECL|BT_GATT_CHRC_INDICATE|macro|BT_GATT_CHRC_INDICATE
DECL|BT_GATT_CHRC_NOTIFY|macro|BT_GATT_CHRC_NOTIFY
DECL|BT_GATT_CHRC_READ|macro|BT_GATT_CHRC_READ
DECL|BT_GATT_CHRC_WRITE_WITHOUT_RESP|macro|BT_GATT_CHRC_WRITE_WITHOUT_RESP
DECL|BT_GATT_CHRC_WRITE|macro|BT_GATT_CHRC_WRITE
DECL|BT_GATT_DESCRIPTOR|macro|BT_GATT_DESCRIPTOR
DECL|BT_GATT_INCLUDE_SERVICE|macro|BT_GATT_INCLUDE_SERVICE
DECL|BT_GATT_ITER_CONTINUE|enumerator|BT_GATT_ITER_CONTINUE,
DECL|BT_GATT_ITER_STOP|enumerator|BT_GATT_ITER_STOP = 0,
DECL|BT_GATT_PRIMARY_SERVICE|macro|BT_GATT_PRIMARY_SERVICE
DECL|BT_GATT_SECONDARY_SERVICE|macro|BT_GATT_SECONDARY_SERVICE
DECL|BT_GATT_SERVICE|macro|BT_GATT_SERVICE
DECL|__BT_GATT_H|macro|__BT_GATT_H
DECL|_bt_gatt_ccc|struct|struct _bt_gatt_ccc {
DECL|bt_gatt_attr_func_t|typedef|typedef uint8_t (*bt_gatt_attr_func_t)(const struct bt_gatt_attr *attr,
DECL|bt_gatt_attr|struct|struct bt_gatt_attr {
DECL|bt_gatt_ccc_cfg|struct|struct bt_gatt_ccc_cfg {
DECL|bt_gatt_ccc|struct|struct bt_gatt_ccc {
DECL|bt_gatt_cep|struct|struct bt_gatt_cep {
DECL|bt_gatt_chrc|struct|struct bt_gatt_chrc {
DECL|bt_gatt_cud|struct|struct bt_gatt_cud {
DECL|bt_gatt_include|struct|struct bt_gatt_include {
DECL|bt_gatt_service|struct|struct bt_gatt_service {
DECL|cfg_changed|member|void (*cfg_changed)(uint16_t value);
DECL|cfg_len|member|size_t cfg_len;
DECL|cfg|member|struct bt_gatt_ccc_cfg *cfg;
DECL|end_handle|member|uint16_t end_handle;
DECL|flags|member|uint16_t flags;
DECL|handle|member|uint16_t handle;
DECL|peer|member|bt_addr_le_t peer;
DECL|properties|member|uint8_t properties;
DECL|properties|member|uint8_t properties;
DECL|read|member|int (*read)(const bt_addr_le_t *peer,
DECL|start_handle|member|uint16_t start_handle;
DECL|string|member|char *string;
DECL|user_data|member|void *user_data;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|value_handle|member|uint16_t value_handle;
DECL|value_handle|member|uint16_t value_handle;
DECL|value|member|uint16_t value;
DECL|value|member|uint16_t value;
DECL|write|member|int (*write)(const bt_addr_le_t *peer,
