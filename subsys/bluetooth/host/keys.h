DECL|BT_KEYS_ALL|enumerator|BT_KEYS_ALL = (BT_KEYS_SLAVE_LTK | BT_KEYS_IRK | \
DECL|BT_KEYS_AUTHENTICATED|enumerator|BT_KEYS_AUTHENTICATED = BIT(0),
DECL|BT_KEYS_DEBUG|enumerator|BT_KEYS_DEBUG = BIT(1),
DECL|BT_KEYS_ID_PENDING_ADD|enumerator|BT_KEYS_ID_PENDING_ADD = BIT(2),
DECL|BT_KEYS_ID_PENDING_DEL|enumerator|BT_KEYS_ID_PENDING_DEL = BIT(3),
DECL|BT_KEYS_IRK|enumerator|BT_KEYS_IRK = BIT(1),
DECL|BT_KEYS_LOCAL_CSRK|enumerator|BT_KEYS_LOCAL_CSRK = BIT(3),
DECL|BT_KEYS_LTK_P256|enumerator|BT_KEYS_LTK_P256 = BIT(5),
DECL|BT_KEYS_LTK|enumerator|BT_KEYS_LTK = BIT(2),
DECL|BT_KEYS_REMOTE_CSRK|enumerator|BT_KEYS_REMOTE_CSRK = BIT(4),
DECL|BT_KEYS_SLAVE_LTK|enumerator|BT_KEYS_SLAVE_LTK = BIT(0),
DECL|BT_KEYS_STORAGE_LEN|macro|BT_KEYS_STORAGE_LEN
DECL|BT_LINK_KEY_AUTHENTICATED|enumerator|BT_LINK_KEY_AUTHENTICATED = BIT(0),
DECL|BT_LINK_KEY_DEBUG|enumerator|BT_LINK_KEY_DEBUG = BIT(1),
DECL|BT_LINK_KEY_SC|enumerator|BT_LINK_KEY_SC = BIT(2),
DECL|addr|member|bt_addr_le_t addr;
DECL|addr|member|bt_addr_t addr;
DECL|bt_csrk|struct|struct bt_csrk {
DECL|bt_irk|struct|struct bt_irk {
DECL|bt_keys_func_t|typedef|typedef void (*bt_keys_func_t)(struct bt_keys *keys);
DECL|bt_keys_link_key|struct|struct bt_keys_link_key {
DECL|bt_keys_store|function|static inline int bt_keys_store(struct bt_keys *keys)
DECL|bt_keys|struct|struct bt_keys {
DECL|bt_ltk|struct|struct bt_ltk {
DECL|cnt|member|u32_t cnt;
DECL|ediv|member|u8_t ediv[2];
DECL|enc_size|member|u8_t enc_size;
DECL|flags|member|u8_t flags;
DECL|flags|member|u8_t flags;
DECL|irk|member|struct bt_irk irk;
DECL|keys|member|u16_t keys;
DECL|local_csrk|member|struct bt_csrk local_csrk;
DECL|ltk|member|struct bt_ltk ltk;
DECL|rand|member|u8_t rand[8];
DECL|remote_csrk|member|struct bt_csrk remote_csrk;
DECL|rpa|member|bt_addr_t rpa;
DECL|slave_ltk|member|struct bt_ltk slave_ltk;
DECL|storage_start|member|u8_t storage_start[0];
DECL|val|member|u8_t val[16];
DECL|val|member|u8_t val[16];
DECL|val|member|u8_t val[16];
DECL|val|member|u8_t val[16];
