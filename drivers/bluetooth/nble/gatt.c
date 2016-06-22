DECL|BLE_GATT_MTU_SIZE|macro|BLE_GATT_MTU_SIZE
DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|NBLE_BUF_SIZE|macro|NBLE_BUF_SIZE
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|__packed|variable|__packed
DECL|attr_count|member|uint16_t attr_count;
DECL|attr_read|function|static int attr_read(struct bt_gatt_attr *attr, uint8_t *data, size_t len)
DECL|attrs|member|const struct bt_gatt_attr *attrs;
DECL|attr|member|const struct bt_gatt_attr *attr;
DECL|bt_gatt_attr_next|function|struct bt_gatt_attr *bt_gatt_attr_next(const struct bt_gatt_attr *attr)
DECL|bt_gatt_attr_read_ccc|function|ssize_t bt_gatt_attr_read_ccc(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|bt_gatt_attr_read_cep|function|ssize_t bt_gatt_attr_read_cep(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|bt_gatt_attr_read_chrc|function|ssize_t bt_gatt_attr_read_chrc(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|bt_gatt_attr_read_cpf|function|ssize_t bt_gatt_attr_read_cpf(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|bt_gatt_attr_read_cud|function|ssize_t bt_gatt_attr_read_cud(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|bt_gatt_attr_read_included|function|ssize_t bt_gatt_attr_read_included(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|bt_gatt_attr_read_service|function|ssize_t bt_gatt_attr_read_service(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|bt_gatt_attr_read|function|ssize_t bt_gatt_attr_read(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t buf_len, uint16_t offset, const void *value, uint16_t value_len)
DECL|bt_gatt_attr_write_ccc|function|ssize_t bt_gatt_attr_write_ccc(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
DECL|bt_gatt_cancel|function|void bt_gatt_cancel(struct bt_conn *conn)
DECL|bt_gatt_disconnected|function|void bt_gatt_disconnected(struct bt_conn *conn)
DECL|bt_gatt_discover|function|int bt_gatt_discover(struct bt_conn *conn, struct bt_gatt_discover_params *params)
DECL|bt_gatt_exchange_mtu|function|int bt_gatt_exchange_mtu(struct bt_conn *conn, bt_gatt_rsp_func_t func)
DECL|bt_gatt_foreach_attr|function|void bt_gatt_foreach_attr(uint16_t start_handle, uint16_t end_handle, bt_gatt_attr_func_t func, void *user_data)
DECL|bt_gatt_indicate|function|int bt_gatt_indicate(struct bt_conn *conn, struct bt_gatt_indicate_params *params)
DECL|bt_gatt_init|function|void bt_gatt_init(void)
DECL|bt_gatt_notify|function|int bt_gatt_notify(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *data, uint16_t len)
DECL|bt_gatt_read|function|int bt_gatt_read(struct bt_conn *conn, struct bt_gatt_read_params *params)
DECL|bt_gatt_register|function|int bt_gatt_register(struct bt_gatt_attr *attrs, size_t count)
DECL|bt_gatt_subscribe|function|int bt_gatt_subscribe(struct bt_conn *conn, struct bt_gatt_subscribe_params *params)
DECL|bt_gatt_unsubscribe|function|int bt_gatt_unsubscribe(struct bt_conn *conn,struct bt_gatt_subscribe_params *params)
DECL|bt_gatt_uuid_memcpy|function|static uint8_t bt_gatt_uuid_memcpy(uint8_t *buf, const struct bt_uuid *uuid)
DECL|bt_gatt_write_without_response|function|int bt_gatt_write_without_response(struct bt_conn *conn, uint16_t handle, const void *data, uint16_t length, bool sign)
DECL|bt_gatt_write|function|int bt_gatt_write(struct bt_conn *conn, struct bt_gatt_write_params *params)
DECL|data|member|const void *data;
DECL|gatt_ccc_changed|function|static void gatt_ccc_changed(struct _bt_gatt_ccc *ccc)
DECL|gatt_chrc|struct|struct gatt_chrc {
DECL|gatt_get_private|function|static void *gatt_get_private(struct bt_conn *conn)
DECL|gatt_read_multiple|function|static int gatt_read_multiple(struct bt_conn *conn, struct bt_gatt_read_params *params)
DECL|gatt_subscription_add|function|static void gatt_subscription_add(struct bt_conn *conn, struct bt_gatt_subscribe_params *params)
DECL|gatt_subscription_remove|function|static void gatt_subscription_remove(struct bt_conn *conn, struct bt_gatt_subscribe_params *prev, struct bt_gatt_subscribe_params *params)
DECL|gatt_write_ccc_rsp|function|static void gatt_write_ccc_rsp(struct bt_conn *conn, uint8_t err)
DECL|gatt_write_ccc|function|static int gatt_write_ccc(struct bt_conn *conn, struct bt_gatt_subscribe_params *params)
DECL|indicate|function|static int indicate(struct bt_conn *conn, struct bt_gatt_indicate_params *params)
DECL|len|member|uint16_t len;
DECL|nble_gatt_service|struct|struct nble_gatt_service {
DECL|notify_cb|function|static uint8_t notify_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|notify_data|struct|struct notify_data {
DECL|notify|function|static int notify(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *data, size_t len)
DECL|on_nble_gattc_discover_rsp|function|void on_nble_gattc_discover_rsp(const struct nble_gattc_discover_rsp *rsp,const uint8_t *data, uint8_t data_len)
DECL|on_nble_gattc_read_multi_rsp|function|void on_nble_gattc_read_multi_rsp(const struct nble_gattc_read_rsp *rsp, uint8_t *data, uint8_t len)
DECL|on_nble_gattc_read_rsp|function|void on_nble_gattc_read_rsp(const struct nble_gattc_read_rsp *rsp, uint8_t *data, uint8_t len)
DECL|on_nble_gattc_value_evt|function|void on_nble_gattc_value_evt(const struct nble_gattc_value_evt *ev, uint8_t *data, uint8_t length)
DECL|on_nble_gattc_write_rsp|function|void on_nble_gattc_write_rsp(const struct nble_gattc_write_rsp *rsp)
DECL|on_nble_gatts_indicate_rsp|function|void on_nble_gatts_indicate_rsp(const struct nble_gatts_indicate_rsp *rsp)
DECL|on_nble_gatts_notify_tx_evt|function|void on_nble_gatts_notify_tx_evt(const struct nble_gatts_notify_tx_evt *evt)
DECL|on_nble_gatts_read_evt|function|void on_nble_gatts_read_evt(const struct nble_gatts_read_evt *ev)
DECL|on_nble_gatts_register_rsp|function|void on_nble_gatts_register_rsp(const struct nble_gatts_register_rsp *rsp, const struct nble_gatt_attr_handles *handles, uint8_t len)
DECL|on_nble_gatts_write_evt|function|void on_nble_gatts_write_evt(const struct nble_gatts_write_evt *ev, const uint8_t *buf, uint8_t buflen)
DECL|on_nble_gatts_write_exec_evt|function|void on_nble_gatts_write_exec_evt(const struct nble_gatts_write_exec_evt *evt)
DECL|params|member|struct bt_gatt_indicate_params *params;
DECL|parse_characteristic|function|static uint16_t parse_characteristic(struct bt_conn *conn, struct bt_gatt_discover_params *params, const uint8_t *data, uint8_t len)
DECL|parse_descriptor|function|static uint16_t parse_descriptor(struct bt_conn *conn, struct bt_gatt_discover_params *params, const uint8_t *data, uint8_t len)
DECL|parse_include|function|static uint16_t parse_include(struct bt_conn *conn, struct bt_gatt_discover_params *params, const uint8_t *data, uint8_t len)
DECL|parse_service|function|static uint16_t parse_service(struct bt_conn *conn, struct bt_gatt_discover_params *params, const uint8_t *data, uint8_t len)
DECL|prep_data|variable|prep_data
DECL|prep_write_evt|function|static int32_t prep_write_evt(const struct nble_gatts_write_evt *ev, const uint8_t *data, uint8_t len)
DECL|properties|member|uint8_t properties;
DECL|queue|variable|queue
DECL|remove_subscriptions|function|static void remove_subscriptions(struct bt_conn *conn)
DECL|subscriptions|variable|subscriptions
DECL|svc_count|variable|svc_count
DECL|svc_db|variable|svc_db
DECL|type|member|uint16_t type;
DECL|uuid16|member|uint16_t uuid16;
DECL|uuid|member|uint8_t uuid[16];
DECL|value_handle|member|uint16_t value_handle;
DECL|whitelist|variable|whitelist
DECL|write_evt|function|static int32_t write_evt(struct bt_conn *conn, const struct bt_gatt_attr *attr, uint16_t offset, const uint8_t *data, uint8_t len)
