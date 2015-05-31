DECL|BT_KEYS_ALL|enumerator|BT_KEYS_ALL = (BT_KEYS_SLAVE_LTK),
DECL|BT_KEYS_SLAVE_LTK|enumerator|BT_KEYS_SLAVE_LTK = (1 << 0),
DECL|addr|member|bt_addr_le_t addr;
DECL|bt_keys|struct|struct bt_keys {
DECL|bt_ltk|struct|struct bt_ltk {
DECL|ediv|member|uint16_t ediv;
DECL|keys|member|int keys;
DECL|next|member|struct bt_keys *next;
DECL|rand|member|uint64_t rand;
DECL|slave_ltk|member|struct bt_ltk slave_ltk;
DECL|val|member|uint8_t val[16];
