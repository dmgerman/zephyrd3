DECL|BT_MESH_MODEL_CFG_CLI|macro|BT_MESH_MODEL_CFG_CLI
DECL|__BT_MESH_CFG_CLI_H|macro|__BT_MESH_CFG_CLI_H
DECL|bt_mesh_cfg_cli|struct|struct bt_mesh_cfg_cli {
DECL|model|member|struct bt_mesh_model *model;
DECL|op_param|member|void *op_param;
DECL|op_pending|member|u32_t op_pending;
DECL|op_sync|member|struct k_sem op_sync;
