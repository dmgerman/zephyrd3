DECL|BT_MESH_MODEL_HEALTH_SRV|macro|BT_MESH_MODEL_HEALTH_SRV
DECL|__BT_MESH_HEALTH_SRV_H|macro|__BT_MESH_HEALTH_SRV_H
DECL|attention|member|} attention;
DECL|bt_mesh_health|struct|struct bt_mesh_health {
DECL|fault_clear|member|int (*fault_clear)(struct bt_mesh_model *model, u16_t company_id);
DECL|fault_get_cur|member|int (*fault_get_cur)(struct bt_mesh_model *model, u8_t *test_id,
DECL|fault_get_reg|member|int (*fault_get_reg)(struct bt_mesh_model *model, u16_t company_id,
DECL|fault_test|member|int (*fault_test)(struct bt_mesh_model *model, u8_t test_id,
DECL|model|member|struct bt_mesh_model *model;
DECL|off|member|void (*off)(struct bt_mesh_model *model);
DECL|on|member|void (*on)(struct bt_mesh_model *model);
DECL|timer|member|struct k_delayed_work timer;
