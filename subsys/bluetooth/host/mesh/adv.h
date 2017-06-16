DECL|BT_MESH_ADV_BEACON|enumerator|BT_MESH_ADV_BEACON,
DECL|BT_MESH_ADV_DATA_SIZE|macro|BT_MESH_ADV_DATA_SIZE
DECL|BT_MESH_ADV_DATA|enumerator|BT_MESH_ADV_DATA,
DECL|BT_MESH_ADV_PROV|enumerator|BT_MESH_ADV_PROV,
DECL|BT_MESH_ADV|macro|BT_MESH_ADV
DECL|adv_int|member|adv_int:5;
DECL|attempts|member|u8_t attempts:6,
DECL|bt_mesh_adv_func_t|typedef|typedef void (*bt_mesh_adv_func_t)(struct net_buf *buf, int err);
DECL|bt_mesh_adv_type|enum|enum bt_mesh_adv_type {
DECL|bt_mesh_adv|struct|struct bt_mesh_adv {
DECL|busy|member|busy:1;
DECL|count|member|u8_t count:3,
DECL|friend_cred|member|friend_cred:1;
DECL|new_key|member|new_key:1,
DECL|seg|member|} seg;
DECL|sent|member|bt_mesh_adv_func_t sent;
DECL|tx_id|member|u8_t tx_id;
DECL|type|member|u8_t type:2,
DECL|user_data|member|u8_t user_data[2];
