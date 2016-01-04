DECL|BT_KEYS_ALL|enumerator|BT_KEYS_ALL = (BT_KEYS_SLAVE_LTK | BT_KEYS_IRK | \
DECL|BT_KEYS_AUTHENTICATED|enumerator|BT_KEYS_AUTHENTICATED,
DECL|BT_KEYS_IRK|enumerator|BT_KEYS_IRK = (1 << 1),
DECL|BT_KEYS_LOCAL_CSRK|enumerator|BT_KEYS_LOCAL_CSRK = (1 << 3),
DECL|BT_KEYS_LTK_P256|enumerator|BT_KEYS_LTK_P256 = (1 << 5),
DECL|BT_KEYS_LTK|enumerator|BT_KEYS_LTK = (1 << 2),
DECL|BT_KEYS_REMOTE_CSRK|enumerator|BT_KEYS_REMOTE_CSRK = (1 << 4),
DECL|BT_KEYS_SLAVE_LTK|enumerator|BT_KEYS_SLAVE_LTK = (1 << 0),
DECL|addr|member|bt_addr_le_t addr;
DECL|bt_csrk|struct|struct bt_csrk {
DECL|bt_irk|struct|struct bt_irk {
DECL|bt_keys_find_addr|function|static inline struct bt_keys *bt_keys_find_addr(const bt_addr_le_t *addr)
DECL|bt_keys|struct|struct bt_keys {
DECL|bt_ltk|struct|struct bt_ltk {
DECL|cnt|member|uint32_t cnt;
DECL|ediv|member|uint16_t ediv;
DECL|enc_size|member|uint8_t enc_size;
DECL|flags|member|atomic_t flags;
DECL|irk|member|struct bt_irk irk;
DECL|keys|member|uint16_t keys;
DECL|local_csrk|member|struct bt_csrk local_csrk;
DECL|ltk|member|struct bt_ltk ltk;
DECL|rand|member|uint64_t rand;
DECL|remote_csrk|member|struct bt_csrk remote_csrk;
DECL|rpa|member|bt_addr_t rpa;
DECL|slave_ltk|member|struct bt_ltk slave_ltk;
DECL|val|member|uint8_t val[16];
DECL|val|member|uint8_t val[16];
DECL|val|member|uint8_t val[16];
