DECL|BT_STORAGE_ID_ADDR|enumerator|BT_STORAGE_ID_ADDR, /** Identity Address */
DECL|BT_STORAGE_LOCAL_IRK|enumerator|BT_STORAGE_LOCAL_IRK, /** Local Identity Resolving Key */
DECL|__BT_STORAGE_H|macro|__BT_STORAGE_H
DECL|bt_storage|struct|struct bt_storage {
DECL|clear|member|int (*clear)(const bt_addr_le_t *addr);
DECL|read|member|ssize_t (*read)(const bt_addr_le_t *addr, uint16_t key,
DECL|write|member|ssize_t (*write)(const bt_addr_le_t *addr, uint16_t key,
