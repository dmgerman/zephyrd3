DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|PACK_STRUCT|variable|PACK_STRUCT
DECL|attr_count|variable|attr_count
DECL|bt_gatt_attr_read_chrc|function|int bt_gatt_attr_read_chrc(const struct bt_gatt_attr *attr, void *buf, uint8_t len, uint16_t offset)
DECL|bt_gatt_attr_read_include|function|int bt_gatt_attr_read_include(struct bt_gatt_attr *attr, void *buf, uint8_t len, uint16_t offset)
DECL|bt_gatt_attr_read_service|function|int bt_gatt_attr_read_service(const struct bt_gatt_attr *attr, void *buf, uint8_t len, uint16_t offset)
DECL|bt_gatt_attr_read|function|int bt_gatt_attr_read(const struct bt_gatt_attr *attr, void *buf, uint8_t buf_len, uint16_t offset, const void *value, uint8_t value_len)
DECL|bt_gatt_foreach_attr|function|void bt_gatt_foreach_attr(uint16_t start_handle, uint16_t end_handle, bt_gatt_attr_func_t func, void *user_data)
DECL|bt_gatt_register|function|void bt_gatt_register(const struct bt_gatt_attr *attrs, size_t count)
DECL|db|variable|db
DECL|end_handle|member|uint16_t end_handle;
DECL|gatt_chrc|struct|struct gatt_chrc {
DECL|gatt_incl|struct|struct gatt_incl {
DECL|properties|member|uint8_t properties;
DECL|start_handle|member|uint16_t start_handle;
DECL|uuid16|member|uint16_t uuid16;
DECL|uuid16|member|uint16_t uuid16;
DECL|uuid|member|uint8_t uuid[16];
DECL|uuid|member|uint8_t uuid[16];
DECL|value_handle|member|uint16_t value_handle;
