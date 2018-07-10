DECL|EDS_IDLE_TIMEOUT|macro|EDS_IDLE_TIMEOUT
DECL|EDS_LOCKED|enumerator|EDS_LOCKED = 0x00,
DECL|EDS_SLOT_EID|enumerator|EDS_SLOT_EID = sys_cpu_to_be16(BIT(3)),
DECL|EDS_SLOT_TLM|enumerator|EDS_SLOT_TLM = sys_cpu_to_be16(BIT(2)),
DECL|EDS_SLOT_UID|enumerator|EDS_SLOT_UID = sys_cpu_to_be16(BIT(0)),
DECL|EDS_SLOT_URL|enumerator|EDS_SLOT_URL = sys_cpu_to_be16(BIT(1)),
DECL|EDS_TYPE_EID|enumerator|EDS_TYPE_EID = 0x30,
DECL|EDS_TYPE_NONE|enumerator|EDS_TYPE_NONE = 0xff,
DECL|EDS_TYPE_TLM|enumerator|EDS_TYPE_TLM = 0x20,
DECL|EDS_TYPE_UID|enumerator|EDS_TYPE_UID = 0x00,
DECL|EDS_TYPE_URL|enumerator|EDS_TYPE_URL = 0x10,
DECL|EDS_UNLOCKED_NO_RELOCKING|enumerator|EDS_UNLOCKED_NO_RELOCKING = 0x02,
DECL|EDS_UNLOCKED|enumerator|EDS_UNLOCKED = 0x01,
DECL|EDS_URL_READ_OFFSET|macro|EDS_URL_READ_OFFSET
DECL|EDS_URL_WRITE_OFFSET|macro|EDS_URL_WRITE_OFFSET
DECL|EDS_VERSION|macro|EDS_VERSION
DECL|NUMBER_OF_SLOTS|macro|NUMBER_OF_SLOTS
DECL|__packed|variable|__packed
DECL|adv_tx_power|member|u8_t adv_tx_power;
DECL|adv_types|member|u8_t adv_types;
DECL|ad|member|struct bt_data ad[3];
DECL|ad|variable|ad
DECL|bt_ready|function|static void bt_ready(int err)
DECL|challenge|member|u8_t challenge[16];
DECL|conn_callbacks|variable|conn_callbacks
DECL|connectable|member|u8_t connectable;
DECL|connected|function|static void connected(struct bt_conn *conn, u8_t err)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, u8_t reason)
DECL|eds_active_slot|variable|eds_active_slot
DECL|eds_adv_tx_uuid|variable|eds_adv_tx_uuid
DECL|eds_attrs|variable|eds_attrs
DECL|eds_capabilities|struct|struct eds_capabilities {
DECL|eds_caps_uuid|variable|eds_caps_uuid
DECL|eds_caps|variable|eds_caps
DECL|eds_connectable_uuid|variable|eds_connectable_uuid
DECL|eds_data_uuid|variable|eds_data_uuid
DECL|eds_ecdh_uuid|variable|eds_ecdh_uuid
DECL|eds_ecdh|variable|eds_ecdh
DECL|eds_eid_uuid|variable|eds_eid_uuid
DECL|eds_eid|variable|eds_eid
DECL|eds_intv_uuid|variable|eds_intv_uuid
DECL|eds_lock_uuid|variable|eds_lock_uuid
DECL|eds_reset_uuid|variable|eds_reset_uuid
DECL|eds_slot_restart|function|static int eds_slot_restart(struct eds_slot *slot, u8_t type)
DECL|eds_slot_uuid|variable|eds_slot_uuid
DECL|eds_slots|variable|eds_slots
DECL|eds_slot|struct|struct eds_slot {
DECL|eds_svc|variable|eds_svc
DECL|eds_tx_uuid|variable|eds_tx_uuid
DECL|eds_unlock_uuid|variable|eds_unlock_uuid
DECL|eds_uuid|variable|eds_uuid
DECL|idle_timeout|function|static void idle_timeout(struct k_work *work)
DECL|idle_work|variable|idle_work
DECL|interval|member|u16_t interval;
DECL|lock|member|u8_t lock[16];
DECL|main|function|void main(void)
DECL|read_adv_data|function|static ssize_t read_adv_data(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_adv_tx_power|function|static ssize_t read_adv_tx_power(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_caps|function|static ssize_t read_caps(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_connectable|function|static ssize_t read_connectable(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_ecdh|function|static ssize_t read_ecdh(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_eid|function|static ssize_t read_eid(struct bt_conn *conn, const struct bt_gatt_attr *attr,void *buf, u16_t len, u16_t offset)
DECL|read_interval|function|static ssize_t read_interval(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_lock|function|static ssize_t read_lock(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_slot|function|static ssize_t read_slot(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_tx_power|function|static ssize_t read_tx_power(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_unlock|function|static ssize_t read_unlock(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|slot_types|member|u16_t slot_types;
DECL|slots|member|u8_t slots;
DECL|state|member|u8_t state;
DECL|tx_power|member|u8_t tx_power;
DECL|tx_power|member|u8_t tx_power;
DECL|type|member|u8_t type;
DECL|uids|member|u8_t uids;
DECL|version|member|u8_t version;
DECL|write_adv_data|function|static ssize_t write_adv_data(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_adv_tx_power|function|static ssize_t write_adv_tx_power(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_connectable|function|static ssize_t write_connectable(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_lock|function|static ssize_t write_lock(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_reset|function|static ssize_t write_reset(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_slot|function|static ssize_t write_slot(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_tx_power|function|static ssize_t write_tx_power(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_unlock|function|static ssize_t write_unlock(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
