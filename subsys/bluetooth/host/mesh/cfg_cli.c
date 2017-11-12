DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|MSG_TIMEOUT|macro|MSG_TIMEOUT
DECL|beacon_status|function|static void beacon_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|bt_mesh_cfg_beacon_get|function|int bt_mesh_cfg_beacon_get(u16_t net_idx, u16_t addr, u8_t *status)
DECL|bt_mesh_cfg_beacon_set|function|int bt_mesh_cfg_beacon_set(u16_t net_idx, u16_t addr, u8_t val, u8_t *status)
DECL|bt_mesh_cfg_cli_init|function|int bt_mesh_cfg_cli_init(struct bt_mesh_model *model, bool primary)
DECL|bt_mesh_cfg_cli_op|variable|bt_mesh_cfg_cli_op
DECL|bt_mesh_cfg_comp_data_get|function|int bt_mesh_cfg_comp_data_get(u16_t net_idx, u16_t addr, u8_t page, u8_t *status, struct net_buf_simple *comp)
DECL|check_cli|function|static int check_cli(void)
DECL|cli|variable|cli
DECL|comp_data_status|function|static void comp_data_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|comp_data|struct|struct comp_data {
DECL|comp|member|struct net_buf_simple *comp;
DECL|status|member|u8_t *status;
