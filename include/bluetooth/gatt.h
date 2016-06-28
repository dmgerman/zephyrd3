DECL|BT_GATT_CCC_INDICATE|macro|BT_GATT_CCC_INDICATE
DECL|BT_GATT_CCC_NOTIFY|macro|BT_GATT_CCC_NOTIFY
DECL|BT_GATT_CCC|macro|BT_GATT_CCC
DECL|BT_GATT_CEP_RELIABLE_WRITE|macro|BT_GATT_CEP_RELIABLE_WRITE
DECL|BT_GATT_CEP_WRITABLE_AUX|macro|BT_GATT_CEP_WRITABLE_AUX
DECL|BT_GATT_CEP|macro|BT_GATT_CEP
DECL|BT_GATT_CHARACTERISTIC|macro|BT_GATT_CHARACTERISTIC
DECL|BT_GATT_CHRC_AUTH|macro|BT_GATT_CHRC_AUTH
DECL|BT_GATT_CHRC_BROADCAST|macro|BT_GATT_CHRC_BROADCAST
DECL|BT_GATT_CHRC_EXT_PROP|macro|BT_GATT_CHRC_EXT_PROP
DECL|BT_GATT_CHRC_INDICATE|macro|BT_GATT_CHRC_INDICATE
DECL|BT_GATT_CHRC_NOTIFY|macro|BT_GATT_CHRC_NOTIFY
DECL|BT_GATT_CHRC_READ|macro|BT_GATT_CHRC_READ
DECL|BT_GATT_CHRC_WRITE_WITHOUT_RESP|macro|BT_GATT_CHRC_WRITE_WITHOUT_RESP
DECL|BT_GATT_CHRC_WRITE|macro|BT_GATT_CHRC_WRITE
DECL|BT_GATT_CPF|macro|BT_GATT_CPF
DECL|BT_GATT_CUD|macro|BT_GATT_CUD
DECL|BT_GATT_DESCRIPTOR|macro|BT_GATT_DESCRIPTOR
DECL|BT_GATT_DISCOVER_CHARACTERISTIC|enumerator|BT_GATT_DISCOVER_CHARACTERISTIC,
DECL|BT_GATT_DISCOVER_DESCRIPTOR|enumerator|BT_GATT_DISCOVER_DESCRIPTOR,
DECL|BT_GATT_DISCOVER_INCLUDE|enumerator|BT_GATT_DISCOVER_INCLUDE,
DECL|BT_GATT_DISCOVER_PRIMARY|enumerator|BT_GATT_DISCOVER_PRIMARY,
DECL|BT_GATT_DISCOVER_SECONDARY|enumerator|BT_GATT_DISCOVER_SECONDARY,
DECL|BT_GATT_ERR|macro|BT_GATT_ERR
DECL|BT_GATT_INCLUDE_SERVICE|macro|BT_GATT_INCLUDE_SERVICE
DECL|BT_GATT_ITER_CONTINUE|enumerator|BT_GATT_ITER_CONTINUE,
DECL|BT_GATT_ITER_STOP|enumerator|BT_GATT_ITER_STOP = 0,
DECL|BT_GATT_PERM_READ_AUTHEN|enumerator|BT_GATT_PERM_READ_AUTHEN = BIT(4),
DECL|BT_GATT_PERM_READ_ENCRYPT|enumerator|BT_GATT_PERM_READ_ENCRYPT = BIT(2),
DECL|BT_GATT_PERM_READ|enumerator|BT_GATT_PERM_READ = BIT(0),
DECL|BT_GATT_PERM_WRITE_AUTHEN|enumerator|BT_GATT_PERM_WRITE_AUTHEN = BIT(5),
DECL|BT_GATT_PERM_WRITE_ENCRYPT|enumerator|BT_GATT_PERM_WRITE_ENCRYPT = BIT(3),
DECL|BT_GATT_PERM_WRITE|enumerator|BT_GATT_PERM_WRITE = BIT(1),
DECL|BT_GATT_PRIMARY_SERVICE|macro|BT_GATT_PRIMARY_SERVICE
DECL|BT_GATT_SECONDARY_SERVICE|macro|BT_GATT_SECONDARY_SERVICE
DECL|BT_GATT_SERVICE|macro|BT_GATT_SERVICE
DECL|__BT_GATT_H|macro|__BT_GATT_H
DECL|__packed|variable|__packed
DECL|__single|struct|struct __single {
DECL|__unnamed_workaround__|union|union __unnamed_workaround__ {
DECL|_bt_gatt_ccc|struct|struct _bt_gatt_ccc {
DECL|_next|member|struct bt_gatt_attr *_next;
DECL|_next|member|struct bt_gatt_subscribe_params *_next;
DECL|_peer|member|bt_addr_le_t _peer;
DECL|attr|member|const struct bt_gatt_attr *attr;
DECL|bt_gatt_attr_func_t|typedef|typedef uint8_t (*bt_gatt_attr_func_t)(const struct bt_gatt_attr *attr,
DECL|bt_gatt_attr|struct|struct bt_gatt_attr {
DECL|bt_gatt_ccc_cfg|struct|struct bt_gatt_ccc_cfg {
DECL|bt_gatt_ccc|struct|struct bt_gatt_ccc {
DECL|bt_gatt_cep|struct|struct bt_gatt_cep {
DECL|bt_gatt_chrc|struct|struct bt_gatt_chrc {
DECL|bt_gatt_cpf|struct|struct bt_gatt_cpf {
DECL|bt_gatt_discover_func_t|typedef|typedef uint8_t (*bt_gatt_discover_func_t)(struct bt_conn *conn,
DECL|bt_gatt_discover_params|struct|struct bt_gatt_discover_params {
DECL|bt_gatt_include|struct|struct bt_gatt_include {
DECL|bt_gatt_indicate_func_t|typedef|typedef void (*bt_gatt_indicate_func_t)(struct bt_conn *conn,
DECL|bt_gatt_indicate_params|struct|struct bt_gatt_indicate_params {
DECL|bt_gatt_notify_func_t|typedef|typedef uint8_t (*bt_gatt_notify_func_t)(struct bt_conn *conn,
DECL|bt_gatt_read_func_t|typedef|typedef uint8_t (*bt_gatt_read_func_t)(struct bt_conn *conn, uint8_t err,
DECL|bt_gatt_read_params|struct|struct bt_gatt_read_params {
DECL|bt_gatt_rsp_func_t|typedef|typedef void (*bt_gatt_rsp_func_t)(struct bt_conn *conn, uint8_t err);
DECL|bt_gatt_service|struct|struct bt_gatt_service {
DECL|bt_gatt_subscribe_params|struct|struct bt_gatt_subscribe_params {
DECL|bt_gatt_write_params|struct|struct bt_gatt_write_params {
DECL|ccc_handle|member|uint16_t ccc_handle;
DECL|cfg_changed|member|void (*cfg_changed)(uint16_t value);
DECL|cfg_len|member|size_t cfg_len;
DECL|cfg|member|struct bt_gatt_ccc_cfg *cfg;
DECL|data|member|const void *data;
DECL|data|member|const void *data;
DECL|description|member|uint16_t description;
DECL|end_handle|member|uint16_t end_handle;
DECL|end_handle|member|uint16_t end_handle;
DECL|end_handle|member|uint16_t end_handle;
DECL|exponent|member|int8_t exponent;
DECL|flags|member|uint16_t flags;
DECL|format|member|uint8_t format;
DECL|func|member|bt_gatt_discover_func_t func;
DECL|func|member|bt_gatt_indicate_func_t func;
DECL|func|member|bt_gatt_read_func_t func;
DECL|func|member|bt_gatt_rsp_func_t func;
DECL|handle_count|member|size_t handle_count;
DECL|handles|member|uint16_t *handles;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|length|member|uint16_t length;
DECL|len|member|uint16_t len;
DECL|name_space|member|uint8_t name_space;
DECL|notify|member|bt_gatt_notify_func_t notify;
DECL|offset|member|uint16_t offset;
DECL|offset|member|uint16_t offset;
DECL|peer|member|bt_addr_le_t peer;
DECL|perm|member|uint8_t perm;
DECL|properties|member|uint16_t properties;
DECL|properties|member|uint8_t properties;
DECL|read|member|ssize_t (*read)(struct bt_conn *conn,
DECL|single|member|} single;
DECL|start_handle|member|uint16_t start_handle;
DECL|start_handle|member|uint16_t start_handle;
DECL|type|member|uint8_t type;
DECL|unit|member|uint16_t unit;
DECL|user_data|member|void *user_data;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|uuid|member|struct bt_uuid *uuid;
DECL|valid|member|uint8_t valid;
DECL|value_handle|member|uint16_t value_handle;
DECL|value|member|uint16_t value;
DECL|value|member|uint16_t value;
DECL|value|member|uint16_t value;
DECL|write|member|ssize_t (*write)(struct bt_conn *conn,
