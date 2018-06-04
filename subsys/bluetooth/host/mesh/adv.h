DECL|BT_MESH_ADV_BEACON|enumerator|BT_MESH_ADV_BEACON,
DECL|BT_MESH_ADV_DATA_SIZE|macro|BT_MESH_ADV_DATA_SIZE
DECL|BT_MESH_ADV_DATA|enumerator|BT_MESH_ADV_DATA,
DECL|BT_MESH_ADV_PROV|enumerator|BT_MESH_ADV_PROV,
DECL|BT_MESH_ADV_URI|enumerator|BT_MESH_ADV_URI,
DECL|BT_MESH_ADV_USER_DATA_SIZE|macro|BT_MESH_ADV_USER_DATA_SIZE
DECL|BT_MESH_ADV|macro|BT_MESH_ADV
DECL|addr|member|u16_t addr;
DECL|attempts|member|u8_t attempts;
DECL|bt_mesh_adv_alloc_t|typedef|typedef struct bt_mesh_adv *(*bt_mesh_adv_alloc_t)(int id);
DECL|bt_mesh_adv_func_t|typedef|typedef void (*bt_mesh_adv_func_t)(struct net_buf *buf, u16_t duration,
DECL|bt_mesh_adv_type|enum|enum bt_mesh_adv_type {
DECL|bt_mesh_adv|struct|struct bt_mesh_adv {
DECL|busy|member|busy:1;
DECL|cb_data|member|void *cb_data;
DECL|cb|member|const struct bt_mesh_send_cb *cb;
DECL|seg|member|} seg;
DECL|type|member|u8_t type:2,
DECL|xmit|member|u8_t xmit;
