DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|bt_mesh_health_cli_init|function|int bt_mesh_health_cli_init(struct bt_mesh_model *model, bool primary)
DECL|bt_mesh_health_cli_op|variable|bt_mesh_health_cli_op
DECL|bt_mesh_health_cli_set|function|int bt_mesh_health_cli_set(struct bt_mesh_model *model)
DECL|bt_mesh_health_cli_timeout_get|function|s32_t bt_mesh_health_cli_timeout_get(void)
DECL|bt_mesh_health_cli_timeout_set|function|void bt_mesh_health_cli_timeout_set(s32_t timeout)
DECL|bt_mesh_health_fault_get|function|int bt_mesh_health_fault_get(u16_t net_idx, u16_t addr, u16_t app_idx, u16_t cid, u8_t *test_id, u8_t *faults, size_t *fault_count)
DECL|check_cli|function|static int check_cli(void)
DECL|cid|member|u16_t cid;
DECL|fault_count|member|size_t *fault_count;
DECL|faults|member|u8_t *faults;
DECL|health_cli|variable|health_cli
DECL|health_current_status|function|static void health_current_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_fault_param|struct|struct health_fault_param {
DECL|health_fault_status|function|static void health_fault_status(struct bt_mesh_model *model,struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|msg_timeout|variable|msg_timeout
DECL|test_id|member|u8_t *test_id;
