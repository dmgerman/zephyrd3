DECL|MAX_DATA|macro|MAX_DATA
DECL|ad|variable|ad
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb_display|variable|auth_cb_display
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|bt_ready|function|static void bt_ready(int err)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, u8_t err)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, u8_t reason)
DECL|ind_params|variable|ind_params
DECL|indicate_cb|function|static void indicate_cb(struct bt_conn *conn, const struct bt_gatt_attr *attr,u8_t err)
DECL|indicating|variable|indicating
DECL|main|function|void main(void)
DECL|read_long_vnd|function|static ssize_t read_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_signed|function|static ssize_t read_signed(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_vnd|function|static ssize_t read_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr,void *buf, u16_t len, u16_t offset)
DECL|signed_value|variable|signed_value
DECL|simulate_vnd|variable|simulate_vnd
DECL|vnd_attrs|variable|vnd_attrs
DECL|vnd_auth_uuid|variable|vnd_auth_uuid
DECL|vnd_ccc_cfg_changed|function|static void vnd_ccc_cfg_changed(const struct bt_gatt_attr *attr, u16_t value)
DECL|vnd_ccc_cfg|variable|vnd_ccc_cfg
DECL|vnd_enc_uuid|variable|vnd_enc_uuid
DECL|vnd_long_cep|variable|vnd_long_cep
DECL|vnd_long_uuid|variable|vnd_long_uuid
DECL|vnd_long_value|variable|vnd_long_value
DECL|vnd_signed_uuid|variable|vnd_signed_uuid
DECL|vnd_svc|variable|vnd_svc
DECL|vnd_uuid|variable|vnd_uuid
DECL|vnd_value|variable|vnd_value
DECL|write_long_vnd|function|static ssize_t write_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_signed|function|static ssize_t write_signed(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_vnd|function|static ssize_t write_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
