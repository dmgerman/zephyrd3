DECL|HIDS_FEATURE|enumerator|HIDS_FEATURE = 0x03,
DECL|HIDS_INPUT|enumerator|HIDS_INPUT = 0x01,
DECL|HIDS_NORMALLY_CONNECTABLE|enumerator|HIDS_NORMALLY_CONNECTABLE = BIT(1),
DECL|HIDS_OUTPUT|enumerator|HIDS_OUTPUT = 0x02,
DECL|HIDS_REMOTE_WAKE|enumerator|HIDS_REMOTE_WAKE = BIT(0),
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|attrs|variable|attrs
DECL|code|member|uint8_t code; /* country HID Device hardware is localized for. */
DECL|ctrl_point|variable|ctrl_point
DECL|flags|member|uint8_t flags;
DECL|hids_info|struct|struct hids_info {
DECL|hids_report|struct|struct hids_report {
DECL|hog_init|function|void hog_init(void)
DECL|id|member|uint8_t id; /* report id */
DECL|info|variable|info
DECL|input_ccc_cfg|variable|input_ccc_cfg
DECL|input_ccc_changed|function|static void input_ccc_changed(const struct bt_gatt_attr *attr, uint16_t value)
DECL|input|variable|input
DECL|read_info|function|static ssize_t read_info(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_input_report|function|static ssize_t read_input_report(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_report_map|function|static ssize_t read_report_map(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_report|function|static ssize_t read_report(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|report_map|variable|report_map
DECL|simulate_input|variable|simulate_input
DECL|type|member|uint8_t type; /* report type */
DECL|version|member|uint16_t version; /* version number of base USB HID Specification */
DECL|write_ctrl_point|function|static ssize_t write_ctrl_point(struct bt_conn *conn,const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
