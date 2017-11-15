DECL|CONTROLLER_INDEX|macro|CONTROLLER_INDEX
DECL|GATT_PERM_ENC_READ_MASK|macro|GATT_PERM_ENC_READ_MASK
DECL|GATT_PERM_ENC_WRITE_MASK|macro|GATT_PERM_ENC_WRITE_MASK
DECL|GATT_PERM_MASK|macro|GATT_PERM_MASK
DECL|GATT_PERM_READ_AUTHORIZATION|macro|GATT_PERM_READ_AUTHORIZATION
DECL|GATT_PERM_WRITE_AUTHORIZATION|macro|GATT_PERM_WRITE_AUTHORIZATION
DECL|GATT_VALUE_CCC_FLAG|enumerator|GATT_VALUE_CCC_FLAG,
DECL|GATT_VALUE_READ_AUTHOR_FLAG|enumerator|GATT_VALUE_READ_AUTHOR_FLAG,
DECL|GATT_VALUE_WRITE_AUTHOR_FLAG|enumerator|GATT_VALUE_WRITE_AUTHOR_FLAG,
DECL|LAST_DB_ATTR|macro|LAST_DB_ATTR
DECL|MAX_BUFFER_SIZE|macro|MAX_BUFFER_SIZE
DECL|MAX_UUID_LEN|macro|MAX_UUID_LEN
DECL|NEXT_DB_ATTR|macro|NEXT_DB_ATTR
DECL|SERVER_BUF_SIZE|macro|SERVER_BUF_SIZE
DECL|SERVER_MAX_ATTRIBUTES|macro|SERVER_MAX_ATTRIBUTES
DECL|SERVER_MAX_SERVICES|macro|SERVER_MAX_SERVICES
DECL|add_ccc|function|static struct bt_gatt_attr *add_ccc(const struct bt_gatt_attr *attr)
DECL|add_cep|function|static struct bt_gatt_attr *add_cep(const struct bt_gatt_attr *attr_chrc)
DECL|add_characteristic|function|static void add_characteristic(u8_t *data, u16_t len)
DECL|add_characteristic|struct|struct add_characteristic {
DECL|add_descriptor|function|static void add_descriptor(u8_t *data, u16_t len)
DECL|add_descriptor|struct|struct add_descriptor {
DECL|add_included|function|static void add_included(u8_t *data, u16_t len)
DECL|add_service|function|static void add_service(u8_t *data, u16_t len)
DECL|alloc_characteristic|function|static int alloc_characteristic(struct add_characteristic *ch)
DECL|alloc_descriptor|function|static int alloc_descriptor(const struct bt_gatt_attr *attr, struct add_descriptor *d)
DECL|alloc_included|function|static int alloc_included(struct bt_gatt_attr *attr, u16_t *included_service_id, u16_t svc_handle)
DECL|alloc_value|function|static u8_t alloc_value(struct bt_gatt_attr *attr, struct set_value *data)
DECL|attr_count|variable|attr_count
DECL|attr_value_changed_ev|function|static void attr_value_changed_ev(u16_t handle, const u8_t *value, u16_t len)
DECL|btp2bt_uuid|function|static u8_t btp2bt_uuid(const u8_t *uuid, u8_t len, struct bt_uuid *bt_uuid)
DECL|btp_opcode|variable|btp_opcode
DECL|buf|member|struct net_buf_simple *buf;
DECL|buf|member|u8_t buf[MAX_BUFFER_SIZE];
DECL|ccc_added|variable|ccc_added
DECL|ccc_cfg_changed|function|static void ccc_cfg_changed(const struct bt_gatt_attr *attr, u16_t value)
DECL|ccc_cfg|variable|ccc_cfg
DECL|ccc_value|variable|ccc_value
DECL|ccc|variable|ccc
DECL|char_id|member|u16_t char_id;
DECL|config_subscription|function|static void config_subscription(u8_t *data, u16_t len, u16_t op)
DECL|count|member|u8_t count;
DECL|data|member|u8_t *data;
DECL|desc_id|member|u16_t desc_id;
DECL|disable_subscription|function|static int disable_subscription(struct bt_conn *conn, u16_t ccc_handle)
DECL|disc_all_chrc|function|static void disc_all_chrc(u8_t *data, u16_t len)
DECL|disc_all_desc_cb|function|static u8_t disc_all_desc_cb(struct bt_conn *conn,const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|disc_all_desc|function|static void disc_all_desc(u8_t *data, u16_t len)
DECL|disc_chrc_cb|function|static u8_t disc_chrc_cb(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|disc_chrc_uuid|function|static void disc_chrc_uuid(u8_t *data, u16_t len)
DECL|disc_prim_uuid_cb|function|static u8_t disc_prim_uuid_cb(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|disc_prim_uuid|function|static void disc_prim_uuid(u8_t *data, u16_t len)
DECL|discover_complete|function|static void discover_complete(struct bt_conn *conn, struct bt_gatt_discover_params *params)
DECL|discover_destroy|function|static void discover_destroy(struct bt_gatt_discover_params *params)
DECL|discover_func|function|static u8_t discover_func(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|discover_params|variable|discover_params
DECL|enable_subscription|function|static int enable_subscription(struct bt_conn *conn, u16_t ccc_handle, u16_t value)
DECL|enc_key_size|member|u8_t enc_key_size;
DECL|err_to_att|function|static u8_t err_to_att(int err)
DECL|ev_buf|variable|ev_buf
DECL|exchange_func|function|static void exchange_func(struct bt_conn *conn, u8_t err, struct bt_gatt_exchange_params *params)
DECL|exchange_mtu|function|static void exchange_mtu(u8_t *data, u16_t len)
DECL|exchange_params|variable|exchange_params
DECL|find_included_cb|function|static u8_t find_included_cb(struct bt_conn *conn,const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|find_included|function|static void find_included(u8_t *data, u16_t len)
DECL|flags|member|u8_t flags[1];
DECL|gatt_buf_add|function|static void *gatt_buf_add(const void *data, size_t len)
DECL|gatt_buf_clear|function|static void gatt_buf_clear(void)
DECL|gatt_buf_reserve|function|static void *gatt_buf_reserve(size_t len)
DECL|gatt_buf|variable|gatt_buf
DECL|gatt_db_add|function|static struct bt_gatt_attr *gatt_db_add(const struct bt_gatt_attr *pattern,size_t user_data_len)
DECL|gatt_value|struct|struct gatt_value {
DECL|get_attr_val_rp|function|static u8_t get_attr_val_rp(const struct bt_gatt_attr *attr, void *user_data)
DECL|get_attr_val|function|static void get_attr_val(u8_t *data, u16_t len)
DECL|get_attrs_foreach_data|struct|struct get_attrs_foreach_data {
DECL|get_attrs_rp|function|static u8_t get_attrs_rp(const struct bt_gatt_attr *attr, void *user_data)
DECL|get_attrs|function|static void get_attrs(u8_t *data, u16_t len)
DECL|get_base_chrc|function|static struct bt_gatt_attr *get_base_chrc(struct bt_gatt_attr *attr)
DECL|indicate_cb|function|static void indicate_cb(struct bt_conn *conn, const struct bt_gatt_attr *attr,u8_t err)
DECL|indicate_params|variable|indicate_params
DECL|len|member|u16_t len;
DECL|len|member|u16_t len;
DECL|len|member|u16_t len;
DECL|notify_func|function|static u8_t notify_func(struct bt_conn *conn, struct bt_gatt_subscribe_params *params, const void *data, u16_t length)
DECL|permissions|member|u8_t permissions;
DECL|permissions|member|u8_t permissions;
DECL|properties|member|u8_t properties;
DECL|read_cb|function|static u8_t read_cb(struct bt_conn *conn, u8_t err, struct bt_gatt_read_params *params, const void *data, u16_t length)
DECL|read_destroy|function|static void read_destroy(struct bt_gatt_read_params *params)
DECL|read_long|function|static void read_long(u8_t *data, u16_t len)
DECL|read_multiple|function|static void read_multiple(u8_t *data, u16_t len)
DECL|read_params|variable|read_params
DECL|read_value|function|static ssize_t read_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read|function|static void read(u8_t *data, u16_t len)
DECL|register_service|function|static int register_service(void)
DECL|server_buf_pull|macro|server_buf_pull
DECL|server_buf_push|macro|server_buf_push
DECL|server_buf|variable|server_buf
DECL|server_db|variable|server_db
DECL|server_svcs|variable|server_svcs
DECL|set_attr_enc_key_size|function|static int set_attr_enc_key_size(const struct bt_gatt_attr *attr, u8_t key_size)
DECL|set_cep_value|function|static u8_t set_cep_value(struct bt_gatt_attr *attr, const void *value, const u16_t len)
DECL|set_enc_key_size|function|static void set_enc_key_size(u8_t *data, u16_t len)
DECL|set_value|function|static void set_value(u8_t *data, u16_t len)
DECL|set_value|struct|struct set_value {
DECL|start_server|function|static void start_server(u8_t *data, u16_t len)
DECL|subscribe_params|variable|subscribe_params
DECL|supported_commands|function|static void supported_commands(u8_t *data, u16_t len)
DECL|svc_attr_count|variable|svc_attr_count
DECL|svc_count|variable|svc_count
DECL|tester_handle_gatt|function|void tester_handle_gatt(u8_t opcode, u8_t index, u8_t *data, u16_t len)
DECL|tester_init_gatt|function|u8_t tester_init_gatt(void)
DECL|u128|member|struct bt_uuid_128 u128;
DECL|u16|member|struct bt_uuid_16 u16;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|uuid|member|const struct bt_uuid *uuid;
DECL|uuid|member|struct bt_uuid *uuid;
DECL|uuid|member|struct bt_uuid uuid;
DECL|uuid|union|union uuid {
DECL|uuid|variable|uuid
DECL|value|member|const u8_t *value;
DECL|write_long_rsp|function|static void write_long_rsp(struct bt_conn *conn, u8_t err, struct bt_gatt_write_params *params)
DECL|write_long|function|static void write_long(u8_t *data, u16_t len)
DECL|write_params|variable|write_params
DECL|write_rsp|function|static void write_rsp(struct bt_conn *conn, u8_t err, struct bt_gatt_write_params *params)
DECL|write_value|function|static ssize_t write_value(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_without_rsp|function|static void write_without_rsp(u8_t *data, u16_t len, u8_t op, bool sign)
DECL|write|function|static void write(u8_t *data, u16_t len)
