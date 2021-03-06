DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|attention|member|u8_t *attention;
DECL|bt_mesh_health_attention_get|function|int bt_mesh_health_attention_get(u16_t net_idx, u16_t addr, u16_t app_idx, u8_t *attention)
DECL|bt_mesh_health_attention_set|function|int bt_mesh_health_attention_set(u16_t net_idx, u16_t addr, u16_t app_idx, u8_t attention, u8_t *updated_attention)
DECL|bt_mesh_health_cli_init|function|int bt_mesh_health_cli_init(struct bt_mesh_model *model, bool primary)
DECL|bt_mesh_health_cli_op|variable|bt_mesh_health_cli_op
DECL|bt_mesh_health_cli_set|function|int bt_mesh_health_cli_set(struct bt_mesh_model *model)
DECL|bt_mesh_health_cli_timeout_get|function|s32_t bt_mesh_health_cli_timeout_get(void)
DECL|bt_mesh_health_cli_timeout_set|function|void bt_mesh_health_cli_timeout_set(s32_t timeout)
DECL|bt_mesh_health_fault_clear|function|int bt_mesh_health_fault_clear(u16_t net_idx, u16_t addr, u16_t app_idx, u16_t cid, u8_t *test_id, u8_t *faults, size_t *fault_count)
DECL|bt_mesh_health_fault_get|function|int bt_mesh_health_fault_get(u16_t net_idx, u16_t addr, u16_t app_idx, u16_t cid, u8_t *test_id, u8_t *faults, size_t *fault_count)
DECL|bt_mesh_health_fault_test|function|int bt_mesh_health_fault_test(u16_t net_idx, u16_t addr, u16_t app_idx, u16_t cid, u8_t test_id, u8_t *faults, size_t *fault_count)
DECL|bt_mesh_health_period_get|function|int bt_mesh_health_period_get(u16_t net_idx, u16_t addr, u16_t app_idx, u8_t *divisor)
DECL|bt_mesh_health_period_set|function|int bt_mesh_health_period_set(u16_t net_idx, u16_t addr, u16_t app_idx, u8_t divisor, u8_t *updated_divisor)
DECL|cid|member|u16_t cid;
DECL|cli_prepare|function|static int cli_prepare(void *param, u32_t op)
DECL|cli_reset|function|static void cli_reset(void)
DECL|cli_wait|function|static int cli_wait(void)
DECL|divisor|member|u8_t *divisor;
DECL|expect_test_id|member|u8_t *expect_test_id;
DECL|fault_count|member|size_t *fault_count;
DECL|faults|member|u8_t *faults;
DECL|health_attention_param|struct|struct health_attention_param {
DECL|health_attention_status|function|static void health_attention_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_cli|variable|health_cli
DECL|health_current_status|function|static void health_current_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_fault_param|struct|struct health_fault_param {
DECL|health_fault_status|function|static void health_fault_status(struct bt_mesh_model *model,struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_period_param|struct|struct health_period_param {
DECL|health_period_status|function|static void health_period_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|msg_timeout|variable|msg_timeout
DECL|test_id|member|u8_t *test_id;
