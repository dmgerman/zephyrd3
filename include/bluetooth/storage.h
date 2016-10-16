DECL|BT_STORAGE_ADDRESSES|enumerator|BT_STORAGE_ADDRESSES,
DECL|BT_STORAGE_ID_ADDR|enumerator|BT_STORAGE_ID_ADDR,
DECL|BT_STORAGE_IRK|enumerator|BT_STORAGE_IRK,
DECL|BT_STORAGE_LOCAL_IRK|enumerator|BT_STORAGE_LOCAL_IRK,
DECL|BT_STORAGE_LTK_AUTHENTICATED|enumerator|BT_STORAGE_LTK_AUTHENTICATED = BIT(0),
DECL|BT_STORAGE_LTK|enumerator|BT_STORAGE_LTK,
DECL|BT_STORAGE_SLAVE_LTK|enumerator|BT_STORAGE_SLAVE_LTK,
DECL|__BT_STORAGE_H|macro|__BT_STORAGE_H
DECL|bt_storage_ltk|struct|struct bt_storage_ltk {
DECL|bt_storage|struct|struct bt_storage {
DECL|clear|member|int (*clear)(const bt_addr_le_t *addr);
DECL|ediv|member|uint16_t ediv;
DECL|flags|member|uint8_t flags;
DECL|rand|member|uint8_t rand[8];
DECL|read|member|ssize_t (*read)(const bt_addr_le_t *addr, uint16_t key,
DECL|size|member|uint8_t size;
DECL|val|member|uint8_t val[16];
DECL|write|member|ssize_t (*write)(const bt_addr_le_t *addr, uint16_t key,
