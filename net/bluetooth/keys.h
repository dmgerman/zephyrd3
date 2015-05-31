DECL|BT_KEYS_ALL|enumerator|BT_KEYS_ALL = (BT_KEYS_SLAVE_LTK | BT_KEYS_IRK),
DECL|BT_KEYS_IRK|enumerator|BT_KEYS_IRK = (1 << 1),
DECL|BT_KEYS_SLAVE_LTK|enumerator|BT_KEYS_SLAVE_LTK = (1 << 0),
DECL|addr|member|bt_addr_le_t addr;
DECL|bt_irk|struct|struct bt_irk {
DECL|bt_keys|struct|struct bt_keys {
DECL|bt_ltk|struct|struct bt_ltk {
DECL|ediv|member|uint16_t ediv;
DECL|irk|member|struct bt_irk irk;
DECL|keys|member|int keys;
DECL|next|member|struct bt_keys *next;
DECL|next|member|struct bt_keys *next;
DECL|rand|member|uint64_t rand;
DECL|rpa|member|bt_addr_t rpa;
DECL|slave_ltk|member|struct bt_ltk slave_ltk;
DECL|val|member|uint8_t val[16];
DECL|val|member|uint8_t val[16];
