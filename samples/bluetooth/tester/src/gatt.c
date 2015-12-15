DECL|CONTROLLER_INDEX|macro|CONTROLLER_INDEX
DECL|GATT_PERM_ENC_READ_MASK|macro|GATT_PERM_ENC_READ_MASK
DECL|GATT_PERM_ENC_WRITE_MASK|macro|GATT_PERM_ENC_WRITE_MASK
DECL|MAX_ATTRIBUTES|macro|MAX_ATTRIBUTES
DECL|MAX_BUFFER_SIZE|macro|MAX_BUFFER_SIZE
DECL|add_ccc|function|static struct bt_gatt_attr *add_ccc(const struct bt_gatt_attr *attr_chrc)
DECL|add_cep|function|static struct bt_gatt_attr *add_cep(const struct bt_gatt_attr *attr_chrc)
DECL|add_characteristic_cb|function|static uint8_t add_characteristic_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|add_characteristic|function|static void add_characteristic(uint8_t *data, uint16_t len)
DECL|add_descriptor_cb|function|static uint8_t add_descriptor_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|add_descriptor|function|static void add_descriptor(uint8_t *data, uint16_t len)
DECL|add_included_cb|function|static uint8_t add_included_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|add_included|function|static void add_included(uint8_t *data, uint16_t len)
DECL|add_service|function|static void add_service(uint8_t *data, uint16_t len)
DECL|btp2bt_uuid|function|static uint8_t btp2bt_uuid(const uint8_t *uuid, uint8_t len, struct bt_uuid *bt_uuid)
DECL|buf|member|uint8_t buf[MAX_BUFFER_SIZE];
DECL|ccc_added|variable|ccc_added
DECL|ccc_cfg_changed|function|static void ccc_cfg_changed(uint16_t value)
DECL|ccc_cfg|variable|ccc_cfg
DECL|ccc|variable|ccc
DECL|cep|variable|cep
DECL|chr_val|variable|chr_val
DECL|chr|variable|chr
DECL|config_subscription|function|static void config_subscription(uint8_t *data, uint16_t len, uint16_t op)
DECL|data|member|uint8_t *data;
DECL|default_conn|variable|default_conn
DECL|disable_subscription|function|static int disable_subscription(struct bt_conn *conn, uint16_t ccc_handle)
DECL|disc_all_chrc_result|function|static void disc_all_chrc_result(void *user_data)
DECL|disc_all_chrc|function|static void disc_all_chrc(uint8_t *data, uint16_t len)
DECL|disc_all_desc_cb|function|static uint8_t disc_all_desc_cb(struct bt_conn *conn,const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|disc_all_desc_result|function|static void disc_all_desc_result(void *user_data)
DECL|disc_all_desc|function|static void disc_all_desc(uint8_t *data, uint16_t len)
DECL|disc_chrc_cb|function|static uint8_t disc_chrc_cb(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|disc_chrc_uuid_result|function|static void disc_chrc_uuid_result(void *user_data)
DECL|disc_chrc_uuid|function|static void disc_chrc_uuid(uint8_t *data, uint16_t len)
DECL|disc_prim_uuid_cb|function|static uint8_t disc_prim_uuid_cb(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|disc_prim_uuid_result|function|static void disc_prim_uuid_result(void *user_data)
DECL|disc_prim_uuid|function|static void disc_prim_uuid(uint8_t *data, uint16_t len)
DECL|discover_complete|function|static void discover_complete(void *user_data)
DECL|discover_destroy|function|static void discover_destroy(void *user_data)
DECL|discover_func|function|static uint8_t discover_func(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|discover_params|variable|discover_params
DECL|dsc|variable|dsc
DECL|enable_subscription|function|static int enable_subscription(struct bt_conn *conn, uint16_t ccc_handle, uint16_t value)
DECL|enc_key_size|member|uint8_t enc_key_size;
DECL|ev_buf|variable|ev_buf
DECL|exchange_mtu_rsp|function|static void exchange_mtu_rsp(struct bt_conn *conn, uint8_t err)
DECL|exchange_mtu|function|static void exchange_mtu(uint8_t *data, uint16_t len)
DECL|find_included_cb|function|static uint8_t find_included_cb(struct bt_conn *conn,const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|find_included_result|function|static void find_included_result(void *user_data)
DECL|find_included|function|static void find_included(uint8_t *data, uint16_t len)
DECL|flush_value|function|static int flush_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, uint8_t flags)
DECL|gatt_buf_add|function|static void *gatt_buf_add(const void *data, size_t len)
DECL|gatt_buf_clear|function|static void gatt_buf_clear(void)
DECL|gatt_buf_isempty|function|static bool gatt_buf_isempty(void)
DECL|gatt_buf_reserve|function|static void *gatt_buf_reserve(size_t len)
DECL|gatt_buf|variable|gatt_buf
DECL|gatt_db_add|function|static struct bt_gatt_attr *gatt_db_add(const struct bt_gatt_attr *pattern)
DECL|gatt_db|variable|gatt_db
DECL|gatt_value|struct|struct gatt_value {
DECL|get_service_handles|function|static uint8_t get_service_handles(const struct bt_gatt_attr *attr, void *user_data)
DECL|has_ccc|member|bool has_ccc;
DECL|len|member|uint16_t len;
DECL|len|member|uint16_t len;
DECL|prep_data|member|uint8_t *prep_data;
DECL|read_cb|function|static uint8_t read_cb(struct bt_conn *conn, int err, const void *data, uint16_t length)
DECL|read_destroy|function|static void read_destroy(void *user_data)
DECL|read_long_result|function|static void read_long_result(void *user_data)
DECL|read_long|function|static void read_long(uint8_t *data, uint16_t len)
DECL|read_multiple_result|function|static uint8_t read_multiple_result(struct bt_conn *conn, int err, const void *data, uint16_t length)
DECL|read_multiple|function|static void read_multiple(uint8_t *data, uint16_t len)
DECL|read_params|variable|read_params
DECL|read_result|function|static void read_result(void *user_data)
DECL|read_value|function|static int read_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read|function|static void read(uint8_t *data, uint16_t len)
DECL|set_ccc_value|function|static uint8_t set_ccc_value(struct bt_gatt_attr *attr, const void *value, const uint16_t len)
DECL|set_cep_value|function|static uint8_t set_cep_value(struct bt_gatt_attr *attr, const void *value, const uint16_t len)
DECL|set_enc_key_size_cb|function|static uint8_t set_enc_key_size_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|set_enc_key_size|function|static void set_enc_key_size(uint8_t *data, uint16_t len)
DECL|set_value_cb|function|static uint8_t set_value_cb(struct bt_gatt_attr *attr, void *user_data)
DECL|set_value|function|static void set_value(uint8_t *data, uint16_t len)
DECL|signed_write_without_rsp|function|static void signed_write_without_rsp(uint8_t *data, uint16_t len)
DECL|start_server|function|static void start_server(uint8_t *data, uint16_t len)
DECL|subscribe_destroy|function|static void subscribe_destroy(void *user_data)
DECL|subscribe_func|function|static uint8_t subscribe_func(struct bt_conn *conn, int err, const void *data, uint16_t length)
DECL|subscribe_params|variable|subscribe_params
DECL|supported_commands|function|static void supported_commands(uint8_t *data, uint16_t len)
DECL|svc_inc|variable|svc_inc
DECL|svc_pri|variable|svc_pri
DECL|svc_sec|variable|svc_sec
DECL|tester_handle_gatt|function|void tester_handle_gatt(uint8_t opcode, uint8_t index, uint8_t *data, uint16_t len)
DECL|tester_init_gatt|function|uint8_t tester_init_gatt(void)
DECL|uuid|variable|uuid
DECL|write_long_rsp|function|static void write_long_rsp(struct bt_conn *conn, uint8_t err)
DECL|write_long|function|static void write_long(uint8_t *data, uint16_t len)
DECL|write_rsp|function|static void write_rsp(struct bt_conn *conn, uint8_t err)
DECL|write_value|function|static int write_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
DECL|write_without_rsp|function|static void write_without_rsp(uint8_t *data, uint16_t len)
DECL|write|function|static void write(uint8_t *data, uint16_t len)
