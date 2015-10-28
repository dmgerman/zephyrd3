DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|HEART_RATE_APPEARANCE|macro|HEART_RATE_APPEARANCE
DECL|MAX_DATA|macro|MAX_DATA
DECL|ad|variable|ad
DECL|appeareance_uuid|variable|appeareance_uuid
DECL|attrs|variable|attrs
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb_display|variable|auth_cb_display
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|bas_uuid|variable|bas_uuid
DECL|battery|variable|battery
DECL|blvl_ccc_cfg_changed|function|static void blvl_ccc_cfg_changed(uint16_t value)
DECL|blvl_ccc_cfg|variable|blvl_ccc_cfg
DECL|blvl_uuid|variable|blvl_uuid
DECL|bslc_uuid|variable|bslc_uuid
DECL|bt_ready|function|static void bt_ready(int err)
DECL|buf|member|uint8_t buf[MAX_DATA];
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn)
DECL|ct_ccc_cfg_changed|function|static void ct_ccc_cfg_changed(uint16_t value)
DECL|ct_ccc_cfg|variable|ct_ccc_cfg
DECL|ct_update|variable|ct_update
DECL|ct_uuid|variable|ct_uuid
DECL|cts_uuid|variable|cts_uuid
DECL|ct|variable|ct
DECL|data|member|uint8_t data[MAX_DATA];
DECL|device_name_uuid|variable|device_name_uuid
DECL|dis_uuid|variable|dis_uuid
DECL|disconnected|function|static void disconnected(struct bt_conn *conn)
DECL|flush_long_vnd|function|static int flush_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, uint8_t flags)
DECL|gap_uuid|variable|gap_uuid
DECL|generate_current_time|function|static void generate_current_time(uint8_t *buf)
DECL|hrcpc_uuid|variable|hrcpc_uuid
DECL|hrmc_ccc_cfg_changed|function|static void hrmc_ccc_cfg_changed(uint16_t value)
DECL|hrmc_ccc_cfg|variable|hrmc_ccc_cfg
DECL|hrmc_uuid|variable|hrmc_uuid
DECL|hrs_uuid|variable|hrs_uuid
DECL|mainloop|function|void mainloop(void)
DECL|manuf_uuid|variable|manuf_uuid
DECL|model_uuid|variable|model_uuid
DECL|read_appearance|function|static int read_appearance(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_blsc|function|static int read_blsc(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_blvl|function|static int read_blvl(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_ct|function|static int read_ct(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_long_vnd|function|static int read_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_manuf|function|static int read_manuf(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_model|function|static int read_model(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_name|function|static int read_name(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_signed|function|static int read_signed(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_vnd|function|static int read_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|sd|variable|sd
DECL|signed_value|variable|signed_value
DECL|simulate_blvl|variable|simulate_blvl
DECL|simulate_hrm|variable|simulate_hrm
DECL|vnd_auth_uuid|variable|vnd_auth_uuid
DECL|vnd_enc_uuid|variable|vnd_enc_uuid
DECL|vnd_long_cep|variable|vnd_long_cep
DECL|vnd_long_uuid|variable|vnd_long_uuid
DECL|vnd_long_value|struct|static struct vnd_long_value {
DECL|vnd_long_value|variable|vnd_long_value
DECL|vnd_signed_uuid|variable|vnd_signed_uuid
DECL|vnd_uuid|variable|vnd_uuid
DECL|vnd_value|variable|vnd_value
DECL|write_ct|function|static int write_ct(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
DECL|write_long_vnd|function|static int write_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
DECL|write_signed|function|static int write_signed(struct bt_conn *conn, const struct bt_gatt_attr *attr,const void *buf, uint16_t len, uint16_t offset)
DECL|write_vnd|function|static int write_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset)
