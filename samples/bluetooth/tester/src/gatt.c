DECL|CONTROLLER_INDEX|macro|CONTROLLER_INDEX
DECL|GATT_PERM_ENC_READ_MASK|macro|GATT_PERM_ENC_READ_MASK
DECL|GATT_PERM_ENC_WRITE_MASK|macro|GATT_PERM_ENC_WRITE_MASK
DECL|MAX_ATTRIBUTES|macro|MAX_ATTRIBUTES
DECL|MAX_BUFFER_SIZE|macro|MAX_BUFFER_SIZE
DECL|add_characteristic_cb|function|static uint8_t add_characteristic_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|add_characteristic|function|static void add_characteristic(uint8_t *data, uint16_t len)
DECL|add_descriptor_cb|function|static uint8_t add_descriptor_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|add_descriptor|function|static void add_descriptor(uint8_t *data, uint16_t len)
DECL|add_included_cb|function|static uint8_t add_included_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|add_included|function|static void add_included(uint8_t *data, uint16_t len)
DECL|add_service|function|static void add_service(uint8_t *data, uint16_t len)
DECL|btp2bt_uuid|function|static uint8_t btp2bt_uuid(const uint8_t *uuid, uint8_t len, struct bt_uuid *bt_uuid)
DECL|buf|member|uint8_t buf[MAX_BUFFER_SIZE];
DECL|ccc|variable|ccc
DECL|cep|variable|cep
DECL|chr_val|variable|chr_val
DECL|chr|variable|chr
DECL|data|member|uint8_t *data;
DECL|disc_prim_uuid_cb|function|static uint8_t disc_prim_uuid_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|disc_prim_uuid_result|function|static void disc_prim_uuid_result(void *user_data)
DECL|disc_prim_uuid|function|static void disc_prim_uuid(uint8_t *data, uint16_t len)
DECL|discover_destroy|function|static void discover_destroy(void *user_data)
DECL|discover_params|variable|discover_params
DECL|dsc|variable|dsc
DECL|enc_key_size|member|uint8_t enc_key_size;
DECL|exchange_mtu_rsp|function|static void exchange_mtu_rsp(struct bt_conn *conn, uint8_t err)
DECL|exchange_mtu|function|static void exchange_mtu(uint8_t *data, uint16_t len)
DECL|find_included_cb|function|static uint8_t find_included_cb(const struct bt_gatt_attr *attr,void *user_data)
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
DECL|len|member|uint16_t len;
DECL|len|member|uint16_t len;
DECL|prep_data|member|uint8_t *prep_data;
DECL|read_value|function|static int read_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|set_enc_key_size_cb|function|static uint8_t set_enc_key_size_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|set_enc_key_size|function|static void set_enc_key_size(uint8_t *data, uint16_t len)
DECL|set_value_cb|function|static uint8_t set_value_cb(struct bt_gatt_attr *attr, void *user_data)
DECL|set_value|function|static void set_value(uint8_t *data, uint16_t len)
DECL|start_server|function|static void start_server(uint8_t *data, uint16_t len)
DECL|supported_commands|function|static void supported_commands(uint8_t *data, uint16_t len)
DECL|svc_inc|variable|svc_inc
DECL|svc_pri|variable|svc_pri
DECL|svc_sec|variable|svc_sec
DECL|tester_handle_gatt|function|void tester_handle_gatt(uint8_t opcode, uint8_t index, uint8_t *data, uint16_t len)
DECL|tester_init_gatt|function|uint8_t tester_init_gatt(void)
DECL|uuid|variable|uuid
DECL|write_value|function|static int write_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
