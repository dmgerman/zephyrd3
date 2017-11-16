DECL|BT_MESH_MODEL_CFG_CLI|macro|BT_MESH_MODEL_CFG_CLI
DECL|__BT_MESH_CFG_CLI_H|macro|__BT_MESH_CFG_CLI_H
DECL|addr|member|u16_t addr;
DECL|app_idx|member|u16_t app_idx;
DECL|bt_mesh_cfg_cli|struct|struct bt_mesh_cfg_cli {
DECL|bt_mesh_cfg_mod_pub|struct|struct bt_mesh_cfg_mod_pub {
DECL|cred_flag|member|bool cred_flag;
DECL|model|member|struct bt_mesh_model *model;
DECL|op_param|member|void *op_param;
DECL|op_pending|member|u32_t op_pending;
DECL|op_sync|member|struct k_sem op_sync;
DECL|period|member|u8_t period;
DECL|transmit|member|u8_t transmit;
DECL|ttl|member|u8_t ttl;
