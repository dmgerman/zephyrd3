DECL|DEVICE_NAME_LEN|macro|DEVICE_NAME_LEN
DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|HEART_RATE_APPEARANCE|macro|HEART_RATE_APPEARANCE
DECL|MAX_DATA|macro|MAX_DATA
DECL|ad|variable|ad
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb_display|variable|auth_cb_display
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|bas_attrs|variable|bas_attrs
DECL|battery|variable|battery
DECL|blvl_ccc_cfg_changed|function|static void blvl_ccc_cfg_changed(uint16_t value)
DECL|blvl_ccc_cfg|variable|blvl_ccc_cfg
DECL|bt_ready|function|static void bt_ready(int err)
DECL|buf|member|uint8_t buf[MAX_DATA];
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, uint8_t err)
DECL|ct_ccc_cfg_changed|function|static void ct_ccc_cfg_changed(uint16_t value)
DECL|ct_ccc_cfg|variable|ct_ccc_cfg
DECL|ct_update|variable|ct_update
DECL|cts_attrs|variable|cts_attrs
DECL|ct|variable|ct
DECL|data|member|uint8_t data[MAX_DATA];
DECL|dis_attrs|variable|dis_attrs
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, uint8_t reason)
DECL|flush_long_vnd|function|static ssize_t flush_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, uint8_t flags)
DECL|generate_current_time|function|static void generate_current_time(uint8_t *buf)
DECL|ind_params|variable|ind_params
DECL|indicate_cb|function|static void indicate_cb(struct bt_conn *conn, const struct bt_gatt_attr *attr,int err)
DECL|indicating|variable|indicating
DECL|mainloop|function|void mainloop(void)
DECL|read_blvl|function|static ssize_t read_blvl(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_ct|function|static ssize_t read_ct(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_long_vnd|function|static ssize_t read_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_manuf|function|static ssize_t read_manuf(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_model|function|static ssize_t read_model(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_signed|function|static ssize_t read_signed(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_vnd|function|static ssize_t read_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr,void *buf, uint16_t len, uint16_t offset)
DECL|sd|variable|sd
DECL|signed_value|variable|signed_value
DECL|simulate_blvl|variable|simulate_blvl
DECL|simulate_vnd|variable|simulate_vnd
DECL|vnd_attrs|variable|vnd_attrs
DECL|vnd_auth_uuid|variable|vnd_auth_uuid
DECL|vnd_ccc_cfg_changed|function|static void vnd_ccc_cfg_changed(uint16_t value)
DECL|vnd_ccc_cfg|variable|vnd_ccc_cfg
DECL|vnd_enc_uuid|variable|vnd_enc_uuid
DECL|vnd_long_cep|variable|vnd_long_cep
DECL|vnd_long_uuid|variable|vnd_long_uuid
DECL|vnd_long_value|struct|static struct vnd_long_value {
DECL|vnd_long_value|variable|vnd_long_value
DECL|vnd_signed_uuid|variable|vnd_signed_uuid
DECL|vnd_uuid|variable|vnd_uuid
DECL|vnd_value|variable|vnd_value
DECL|write_ct|function|static ssize_t write_ct(struct bt_conn *conn, const struct bt_gatt_attr *attr,const void *buf, uint16_t len, uint16_t offset)
DECL|write_long_vnd|function|static ssize_t write_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
DECL|write_signed|function|static ssize_t write_signed(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
DECL|write_vnd|function|static ssize_t write_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
