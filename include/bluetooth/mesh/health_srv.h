DECL|BT_MESH_HEALTH_PUB_DEFINE|macro|BT_MESH_HEALTH_PUB_DEFINE
DECL|BT_MESH_MODEL_HEALTH_SRV|macro|BT_MESH_MODEL_HEALTH_SRV
DECL|ZEPHYR_INCLUDE_BLUETOOTH_MESH_HEALTH_SRV_H_|macro|ZEPHYR_INCLUDE_BLUETOOTH_MESH_HEALTH_SRV_H_
DECL|attn_off|member|void (*attn_off)(struct bt_mesh_model *model);
DECL|attn_on|member|void (*attn_on)(struct bt_mesh_model *model);
DECL|attn_timer|member|struct k_delayed_work attn_timer;
DECL|bt_mesh_health_srv_cb|struct|struct bt_mesh_health_srv_cb {
DECL|bt_mesh_health_srv|struct|struct bt_mesh_health_srv {
DECL|cb|member|const struct bt_mesh_health_srv_cb *cb;
DECL|fault_clear|member|int (*fault_clear)(struct bt_mesh_model *model, u16_t company_id);
DECL|fault_get_cur|member|int (*fault_get_cur)(struct bt_mesh_model *model, u8_t *test_id,
DECL|fault_get_reg|member|int (*fault_get_reg)(struct bt_mesh_model *model, u16_t company_id,
DECL|fault_test|member|int (*fault_test)(struct bt_mesh_model *model, u8_t test_id,
DECL|model|member|struct bt_mesh_model *model;
