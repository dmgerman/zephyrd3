DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|BT_GATT_CHRC|macro|BT_GATT_CHRC
DECL|CCC_STORE_MAX|macro|CCC_STORE_MAX
DECL|SC_INDICATE_PENDING|enumerator|SC_INDICATE_PENDING, /* SC indicate pending */
DECL|SC_NUM_FLAGS|enumerator|SC_NUM_FLAGS,
DECL|SC_RANGE_CHANGED|enumerator|SC_RANGE_CHANGED, /* SC range changed */
DECL|SC_TIMEOUT|macro|SC_TIMEOUT
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|add_subscriptions|function|static void add_subscriptions(struct bt_conn *conn)
DECL|addr|member|bt_addr_le_t addr;
DECL|addr|member|const bt_addr_le_t *addr;
DECL|attr|member|const struct bt_gatt_attr *attr;
DECL|bt_gatt_attr_next|function|struct bt_gatt_attr *bt_gatt_attr_next(const struct bt_gatt_attr *attr)
DECL|bt_gatt_attr_read_ccc|function|ssize_t bt_gatt_attr_read_ccc(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|bt_gatt_attr_read_cep|function|ssize_t bt_gatt_attr_read_cep(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|bt_gatt_attr_read_chrc|function|ssize_t bt_gatt_attr_read_chrc(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|bt_gatt_attr_read_cpf|function|ssize_t bt_gatt_attr_read_cpf(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|bt_gatt_attr_read_cud|function|ssize_t bt_gatt_attr_read_cud(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|bt_gatt_attr_read_included|function|ssize_t bt_gatt_attr_read_included(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|bt_gatt_attr_read_service|function|ssize_t bt_gatt_attr_read_service(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|bt_gatt_attr_read|function|ssize_t bt_gatt_attr_read(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t buf_len, u16_t offset, const void *value, u16_t value_len)
DECL|bt_gatt_attr_write_ccc|function|ssize_t bt_gatt_attr_write_ccc(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|bt_gatt_cancel|function|void bt_gatt_cancel(struct bt_conn *conn, void *params)
DECL|bt_gatt_clear_ccc|function|int bt_gatt_clear_ccc(u8_t id, const bt_addr_le_t *addr)
DECL|bt_gatt_connected|function|void bt_gatt_connected(struct bt_conn *conn)
DECL|bt_gatt_disconnected|function|void bt_gatt_disconnected(struct bt_conn *conn)
DECL|bt_gatt_discover|function|int bt_gatt_discover(struct bt_conn *conn, struct bt_gatt_discover_params *params)
DECL|bt_gatt_exchange_mtu|function|int bt_gatt_exchange_mtu(struct bt_conn *conn, struct bt_gatt_exchange_params *params)
DECL|bt_gatt_foreach_attr|function|void bt_gatt_foreach_attr(u16_t start_handle, u16_t end_handle, bt_gatt_attr_func_t func, void *user_data)
DECL|bt_gatt_get_mtu|function|u16_t bt_gatt_get_mtu(struct bt_conn *conn)
DECL|bt_gatt_indicate|function|int bt_gatt_indicate(struct bt_conn *conn, struct bt_gatt_indicate_params *params)
DECL|bt_gatt_init|function|void bt_gatt_init(void)
DECL|bt_gatt_notification|function|void bt_gatt_notification(struct bt_conn *conn, u16_t handle, const void *data, u16_t length)
DECL|bt_gatt_notify_cb|function|int bt_gatt_notify_cb(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *data, u16_t len, bt_gatt_notify_complete_func_t func)
DECL|bt_gatt_read|function|int bt_gatt_read(struct bt_conn *conn, struct bt_gatt_read_params *params)
DECL|bt_gatt_service_register|function|int bt_gatt_service_register(struct bt_gatt_service *svc)
DECL|bt_gatt_service_unregister|function|int bt_gatt_service_unregister(struct bt_gatt_service *svc)
DECL|bt_gatt_store_ccc|function|int bt_gatt_store_ccc(u8_t id, const bt_addr_le_t *addr)
DECL|bt_gatt_subscribe|function|int bt_gatt_subscribe(struct bt_conn *conn, struct bt_gatt_subscribe_params *params)
DECL|bt_gatt_unsubscribe|function|int bt_gatt_unsubscribe(struct bt_conn *conn,struct bt_gatt_subscribe_params *params)
DECL|bt_gatt_write_without_response|function|int bt_gatt_write_without_response(struct bt_conn *conn, u16_t handle, const void *data, u16_t length, bool sign)
DECL|bt_gatt_write|function|int bt_gatt_write(struct bt_conn *conn, struct bt_gatt_write_params *params)
DECL|ccc_clear|function|static void ccc_clear(struct _bt_gatt_ccc *ccc, bt_addr_le_t *addr)
DECL|ccc_find_cfg|function|static struct bt_gatt_ccc_cfg *ccc_find_cfg(struct _bt_gatt_ccc *ccc, const bt_addr_le_t *addr)
DECL|ccc_load|function|static u8_t ccc_load(const struct bt_gatt_attr *attr, void *user_data)
DECL|ccc_load|struct|struct ccc_load {
DECL|ccc_save|function|static u8_t ccc_save(const struct bt_gatt_attr *attr, void *user_data)
DECL|ccc_save|struct|struct ccc_save {
DECL|ccc_set|function|static int ccc_set(int argc, char **argv, char *val)
DECL|ccc_store|struct|struct ccc_store {
DECL|connected_cb|function|static u8_t connected_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|count|member|size_t count;
DECL|count|member|size_t count;
DECL|data|member|const void *data;
DECL|db|variable|db
DECL|disconnected_cb|function|static u8_t disconnected_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|end_handle|member|u16_t end_handle;
DECL|end|member|u16_t end;
DECL|end|member|u16_t end;
DECL|entry|member|struct ccc_store *entry;
DECL|err|member|int err;
DECL|find_next|function|static u8_t find_next(const struct bt_gatt_attr *attr, void *user_data)
DECL|func|member|bt_gatt_notify_complete_func_t func;
DECL|gap_appearance|variable|gap_appearance
DECL|gap_attrs|variable|gap_attrs
DECL|gap_svc|variable|gap_svc
DECL|gatt_attrs|variable|gatt_attrs
DECL|gatt_ccc_changed|function|static void gatt_ccc_changed(const struct bt_gatt_attr *attr, struct _bt_gatt_ccc *ccc)
DECL|gatt_chrc|struct|struct gatt_chrc {
DECL|gatt_discover_next|function|static void gatt_discover_next(struct bt_conn *conn, u16_t last_handle, struct bt_gatt_discover_params *params)
DECL|gatt_exec_write|function|static int gatt_exec_write(struct bt_conn *conn, struct bt_gatt_write_params *params)
DECL|gatt_find_info_rsp|function|static void gatt_find_info_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|gatt_find_info|function|static int gatt_find_info(struct bt_conn *conn, struct bt_gatt_discover_params *params)
DECL|gatt_find_type_rsp|function|static void gatt_find_type_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|gatt_find_type|function|static int gatt_find_type(struct bt_conn *conn, struct bt_gatt_discover_params *params)
DECL|gatt_incl|struct|struct gatt_incl {
DECL|gatt_indicate_rsp|function|static void gatt_indicate_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|gatt_indicate|function|static int gatt_indicate(struct bt_conn *conn, struct bt_gatt_indicate_params *params)
DECL|gatt_mtu_rsp|function|static void gatt_mtu_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|gatt_notify|function|static int gatt_notify(struct bt_conn *conn, u16_t handle, const void *data, size_t len, bt_gatt_notify_complete_func_t cb)
DECL|gatt_prepare_write_rsp|function|static void gatt_prepare_write_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|gatt_prepare_write|function|static int gatt_prepare_write(struct bt_conn *conn, struct bt_gatt_write_params *params)
DECL|gatt_read_blob|function|static int gatt_read_blob(struct bt_conn *conn, struct bt_gatt_read_params *params)
DECL|gatt_read_multiple_rsp|function|static void gatt_read_multiple_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|gatt_read_multiple|function|static int gatt_read_multiple(struct bt_conn *conn, struct bt_gatt_read_params *params)
DECL|gatt_read_multiple|function|static int gatt_read_multiple(struct bt_conn *conn, struct bt_gatt_read_params *params)
DECL|gatt_read_rsp|function|static void gatt_read_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|gatt_read_type_rsp|function|static void gatt_read_type_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|gatt_read_type|function|static int gatt_read_type(struct bt_conn *conn, struct bt_gatt_discover_params *params)
DECL|gatt_register|function|static int gatt_register(struct bt_gatt_service *svc)
DECL|gatt_sc|struct|static struct gatt_sc {
DECL|gatt_sc|variable|gatt_sc
DECL|gatt_send|function|static int gatt_send(struct bt_conn *conn, struct net_buf *buf, bt_att_func_t func, void *params, bt_att_destroy_t destroy)
DECL|gatt_subscription_add|function|static void gatt_subscription_add(struct bt_conn *conn, struct bt_gatt_subscribe_params *params)
DECL|gatt_subscription_remove|function|static void gatt_subscription_remove(struct bt_conn *conn, sys_snode_t *prev, struct bt_gatt_subscribe_params *params)
DECL|gatt_svc|variable|gatt_svc
DECL|gatt_write_ccc_rsp|function|static void gatt_write_ccc_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|gatt_write_ccc|function|static int gatt_write_ccc(struct bt_conn *conn, u16_t handle, u16_t value, bt_att_func_t func, struct bt_gatt_subscribe_params *params)
DECL|gatt_write_rsp|function|static void gatt_write_rsp(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|get_service_handles|function|static u8_t get_service_handles(const struct bt_gatt_attr *attr, void *user_data)
DECL|handle|member|u16_t handle;
DECL|id|member|u8_t id;
DECL|init|variable|init
DECL|len|member|u16_t len;
DECL|notify_cb|function|static u8_t notify_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|notify_data|struct|struct notify_data {
DECL|params|member|struct bt_gatt_indicate_params *params;
DECL|params|member|struct bt_gatt_indicate_params params;
DECL|parse_characteristic|function|static u16_t parse_characteristic(struct bt_conn *conn, const void *pdu, struct bt_gatt_discover_params *params, u16_t length)
DECL|parse_include|function|static u16_t parse_include(struct bt_conn *conn, const void *pdu, struct bt_gatt_discover_params *params, u16_t length)
DECL|properties|member|u8_t properties;
DECL|read_appearance|function|static ssize_t read_appearance(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_central_addr_res|function|static ssize_t read_central_addr_res(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_included_uuid_cb|function|static void read_included_uuid_cb(struct bt_conn *conn, u8_t err, const void *pdu, u16_t length, void *user_data)
DECL|read_included_uuid|function|static int read_included_uuid(struct bt_conn *conn, struct bt_gatt_discover_params *params)
DECL|read_name|function|static ssize_t read_name(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|remove_subscriptions|function|static void remove_subscriptions(struct bt_conn *conn)
DECL|sc_ccc_cfg_changed|function|static void sc_ccc_cfg_changed(const struct bt_gatt_attr *attr, u16_t value)
DECL|sc_ccc_cfg|variable|sc_ccc_cfg
DECL|sc_data|struct|struct sc_data {
DECL|sc_indicate_rsp|function|static void sc_indicate_rsp(struct bt_conn *conn, const struct bt_gatt_attr *attr, u8_t err)
DECL|sc_indicate|function|static void sc_indicate(struct gatt_sc *sc, uint16_t start, uint16_t end)
DECL|sc_process|function|static void sc_process(struct k_work *work)
DECL|sc_restore|function|static void sc_restore(struct bt_gatt_ccc_cfg *cfg)
DECL|sc_save|function|static void sc_save(struct bt_gatt_ccc_cfg *cfg, struct bt_gatt_indicate_params *params)
DECL|start_handle|member|u16_t start_handle;
DECL|start|member|u16_t start;
DECL|start|member|u16_t start;
DECL|store|member|struct ccc_store store[CCC_STORE_MAX];
DECL|subscriptions|variable|subscriptions
DECL|type|member|u16_t type;
DECL|update_range|function|static bool update_range(u16_t *start, u16_t *end, u16_t new_start, u16_t new_end)
DECL|update_subscription|function|static void update_subscription(struct bt_conn *conn, struct bt_gatt_subscribe_params *params)
DECL|uuid16|member|u16_t uuid16;
DECL|uuid16|member|u16_t uuid16;
DECL|uuid|member|u8_t uuid[16];
DECL|value_handle|member|u16_t value_handle;
DECL|value|member|u16_t value;
DECL|work|member|struct k_delayed_work work;
DECL|write_name|function|static ssize_t write_name(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
