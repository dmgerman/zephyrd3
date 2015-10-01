DECL|CONTROLLER_INDEX|macro|CONTROLLER_INDEX
DECL|MAX_ATTRIBUTES|macro|MAX_ATTRIBUTES
DECL|MAX_BUFFER_SIZE|macro|MAX_BUFFER_SIZE
DECL|add_characteristic|function|static void add_characteristic(uint8_t *data, uint16_t len)
DECL|add_service|function|static void add_service(uint8_t *data, uint16_t len)
DECL|buf|member|uint8_t buf[MAX_BUFFER_SIZE];
DECL|chr_val|variable|chr_val
DECL|chr|variable|chr
DECL|data|member|uint8_t *data;
DECL|flush_value|function|static int flush_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, uint8_t flags)
DECL|gatt_buf_add|function|static void *gatt_buf_add(const void *data, size_t len)
DECL|gatt_buf_reserve|function|static void *gatt_buf_reserve(size_t len)
DECL|gatt_buf|variable|gatt_buf
DECL|gatt_db_add|function|static struct bt_gatt_attr *gatt_db_add(const struct bt_gatt_attr *pattern)
DECL|gatt_db_lookup_id|function|static struct bt_gatt_attr *gatt_db_lookup_id(uint16_t attr_id)
DECL|gatt_db|variable|gatt_db
DECL|gatt_value|struct|struct gatt_value {
DECL|len|member|uint16_t len;
DECL|len|member|uint8_t len;
DECL|prep_data|member|uint8_t *prep_data;
DECL|read_value|function|static int read_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|set_value|function|static void set_value(uint8_t *data, uint16_t len)
DECL|start_server|function|static void start_server(uint8_t *data, uint16_t len)
DECL|supported_commands|function|static void supported_commands(uint8_t *data, uint16_t len)
DECL|svc_pri|variable|svc_pri
DECL|svc_sec|variable|svc_sec
DECL|tester_handle_gatt|function|void tester_handle_gatt(uint8_t opcode, uint8_t index, uint8_t *data, uint16_t len)
DECL|tester_init_gatt|function|uint8_t tester_init_gatt(void)
DECL|write_value|function|static int write_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
