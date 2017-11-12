DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|MSG_TIMEOUT|macro|MSG_TIMEOUT
DECL|beacon_status|function|static void beacon_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|bt_mesh_cfg_beacon_get|function|int bt_mesh_cfg_beacon_get(u16_t net_idx, u16_t addr, u8_t *status)
DECL|bt_mesh_cfg_beacon_set|function|int bt_mesh_cfg_beacon_set(u16_t net_idx, u16_t addr, u8_t val, u8_t *status)
DECL|bt_mesh_cfg_cli_init|function|int bt_mesh_cfg_cli_init(struct bt_mesh_model *model, bool primary)
DECL|bt_mesh_cfg_cli_op|variable|bt_mesh_cfg_cli_op
DECL|bt_mesh_cfg_comp_data_get|function|int bt_mesh_cfg_comp_data_get(u16_t net_idx, u16_t addr, u8_t page, u8_t *status, struct net_buf_simple *comp)
DECL|bt_mesh_cfg_friend_get|function|int bt_mesh_cfg_friend_get(u16_t net_idx, u16_t addr, u8_t *status)
DECL|bt_mesh_cfg_friend_set|function|int bt_mesh_cfg_friend_set(u16_t net_idx, u16_t addr, u8_t val, u8_t *status)
DECL|bt_mesh_cfg_gatt_proxy_get|function|int bt_mesh_cfg_gatt_proxy_get(u16_t net_idx, u16_t addr, u8_t *status)
DECL|bt_mesh_cfg_gatt_proxy_set|function|int bt_mesh_cfg_gatt_proxy_set(u16_t net_idx, u16_t addr, u8_t val, u8_t *status)
DECL|bt_mesh_cfg_relay_get|function|int bt_mesh_cfg_relay_get(u16_t net_idx, u16_t addr, u8_t *status, u8_t *transmit)
DECL|bt_mesh_cfg_relay_set|function|int bt_mesh_cfg_relay_set(u16_t net_idx, u16_t addr, u8_t new_relay, u8_t new_transmit, u8_t *status, u8_t *transmit)
DECL|bt_mesh_cfg_ttl_get|function|int bt_mesh_cfg_ttl_get(u16_t net_idx, u16_t addr, u8_t *ttl)
DECL|bt_mesh_cfg_ttl_set|function|int bt_mesh_cfg_ttl_set(u16_t net_idx, u16_t addr, u8_t val, u8_t *ttl)
DECL|check_cli|function|static int check_cli(void)
DECL|cli|variable|cli
DECL|comp_data_status|function|static void comp_data_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|comp_data|struct|struct comp_data {
DECL|comp|member|struct net_buf_simple *comp;
DECL|friend_status|function|static void friend_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|gatt_proxy_status|function|static void gatt_proxy_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|get_state_u8|function|static int get_state_u8(u16_t net_idx, u16_t addr, u32_t op, u32_t rsp,u8_t *val)
DECL|relay_param|struct|struct relay_param {
DECL|relay_status|function|static void relay_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|set_state_u8|function|static int set_state_u8(u16_t net_idx, u16_t addr, u32_t op, u32_t rsp,u8_t new_val, u8_t *val)
DECL|state_status_u8|function|static void state_status_u8(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf, u32_t expect_status)
DECL|status|member|u8_t *status;
DECL|status|member|u8_t *status;
DECL|transmit|member|u8_t *transmit;
DECL|ttl_status|function|static void ttl_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
