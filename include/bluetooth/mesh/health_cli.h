DECL|BT_MESH_MODEL_HEALTH_CLI|macro|BT_MESH_MODEL_HEALTH_CLI
DECL|__BT_MESH_HEALTH_CLI_H|macro|__BT_MESH_HEALTH_CLI_H
DECL|bt_mesh_health_cli|struct|struct bt_mesh_health_cli {
DECL|model|member|struct bt_mesh_model *model;
DECL|op_param|member|void *op_param;
DECL|op_pending|member|u32_t op_pending;
DECL|op_sync|member|struct k_sem op_sync;
