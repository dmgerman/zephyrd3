DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|app_idx|member|u16_t app_idx;
DECL|app_key_param|struct|struct app_key_param {
DECL|app_key_status|function|static void app_key_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|beacon_status|function|static void beacon_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|bt_mesh_cfg_app_key_add|function|int bt_mesh_cfg_app_key_add(u16_t net_idx, u16_t addr, u16_t key_net_idx, u16_t key_app_idx, const u8_t app_key[16], u8_t *status)
DECL|bt_mesh_cfg_beacon_get|function|int bt_mesh_cfg_beacon_get(u16_t net_idx, u16_t addr, u8_t *status)
DECL|bt_mesh_cfg_beacon_set|function|int bt_mesh_cfg_beacon_set(u16_t net_idx, u16_t addr, u8_t val, u8_t *status)
DECL|bt_mesh_cfg_cli_init|function|int bt_mesh_cfg_cli_init(struct bt_mesh_model *model, bool primary)
DECL|bt_mesh_cfg_cli_op|variable|bt_mesh_cfg_cli_op
DECL|bt_mesh_cfg_cli_timeout_get|function|s32_t bt_mesh_cfg_cli_timeout_get(void)
DECL|bt_mesh_cfg_cli_timeout_set|function|void bt_mesh_cfg_cli_timeout_set(s32_t timeout)
DECL|bt_mesh_cfg_comp_data_get|function|int bt_mesh_cfg_comp_data_get(u16_t net_idx, u16_t addr, u8_t page, u8_t *status, struct net_buf_simple *comp)
DECL|bt_mesh_cfg_friend_get|function|int bt_mesh_cfg_friend_get(u16_t net_idx, u16_t addr, u8_t *status)
DECL|bt_mesh_cfg_friend_set|function|int bt_mesh_cfg_friend_set(u16_t net_idx, u16_t addr, u8_t val, u8_t *status)
DECL|bt_mesh_cfg_gatt_proxy_get|function|int bt_mesh_cfg_gatt_proxy_get(u16_t net_idx, u16_t addr, u8_t *status)
DECL|bt_mesh_cfg_gatt_proxy_set|function|int bt_mesh_cfg_gatt_proxy_set(u16_t net_idx, u16_t addr, u8_t val, u8_t *status)
DECL|bt_mesh_cfg_hb_pub_get|function|int bt_mesh_cfg_hb_pub_get(u16_t net_idx, u16_t addr, u16_t *pub_dst, u8_t *count, u8_t *period, u8_t *ttl, u16_t *feat, u16_t *pub_net_idx, u8_t *status)
DECL|bt_mesh_cfg_hb_pub_set|function|int bt_mesh_cfg_hb_pub_set(u16_t net_idx, u16_t addr, u16_t pub_dst, u8_t count, u8_t period, u8_t ttl, u16_t feat, u16_t pub_net_idx, u8_t *status)
DECL|bt_mesh_cfg_hb_sub_get|function|int bt_mesh_cfg_hb_sub_get(u16_t net_idx, u16_t addr, u16_t *src, u16_t *dst, u8_t *period, u8_t *count, u8_t *min, u8_t *max, u8_t *status)
DECL|bt_mesh_cfg_hb_sub_set|function|int bt_mesh_cfg_hb_sub_set(u16_t net_idx, u16_t addr, u16_t src, u16_t dst, u8_t period, u8_t *status)
DECL|bt_mesh_cfg_mod_app_bind_vnd|function|int bt_mesh_cfg_mod_app_bind_vnd(u16_t net_idx, u16_t addr, u16_t elem_addr, u16_t mod_app_idx, u16_t mod_id, u16_t cid, u8_t *status)
DECL|bt_mesh_cfg_mod_app_bind|function|int bt_mesh_cfg_mod_app_bind(u16_t net_idx, u16_t addr, u16_t elem_addr, u16_t mod_app_idx, u16_t mod_id, u8_t *status)
DECL|bt_mesh_cfg_mod_sub_add_vnd|function|int bt_mesh_cfg_mod_sub_add_vnd(u16_t net_idx, u16_t addr, u16_t elem_addr, u16_t sub_addr, u16_t mod_id, u16_t cid, u8_t *status)
DECL|bt_mesh_cfg_mod_sub_add|function|int bt_mesh_cfg_mod_sub_add(u16_t net_idx, u16_t addr, u16_t elem_addr, u16_t sub_addr, u16_t mod_id, u8_t *status)
DECL|bt_mesh_cfg_relay_get|function|int bt_mesh_cfg_relay_get(u16_t net_idx, u16_t addr, u8_t *status, u8_t *transmit)
DECL|bt_mesh_cfg_relay_set|function|int bt_mesh_cfg_relay_set(u16_t net_idx, u16_t addr, u8_t new_relay, u8_t new_transmit, u8_t *status, u8_t *transmit)
DECL|bt_mesh_cfg_ttl_get|function|int bt_mesh_cfg_ttl_get(u16_t net_idx, u16_t addr, u8_t *ttl)
DECL|bt_mesh_cfg_ttl_set|function|int bt_mesh_cfg_ttl_set(u16_t net_idx, u16_t addr, u8_t val, u8_t *ttl)
DECL|check_cli|function|static int check_cli(void)
DECL|cid|member|u16_t cid;
DECL|cid|member|u16_t cid;
DECL|cli|variable|cli
DECL|comp_data_status|function|static void comp_data_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|comp_data|struct|struct comp_data {
DECL|comp|member|struct net_buf_simple *comp;
DECL|count|member|u8_t *count;
DECL|count|member|u8_t *count;
DECL|dst|member|u16_t *dst;
DECL|dst|member|u16_t *dst;
DECL|elem_addr|member|u16_t elem_addr;
DECL|elem_addr|member|u16_t elem_addr;
DECL|feat|member|u16_t *feat;
DECL|friend_status|function|static void friend_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|gatt_proxy_status|function|static void gatt_proxy_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|get_state_u8|function|static int get_state_u8(u16_t net_idx, u16_t addr, u32_t op, u32_t rsp,u8_t *val)
DECL|hb_pub_param|struct|struct hb_pub_param {
DECL|hb_pub_status|function|static void hb_pub_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|hb_sub_param|struct|struct hb_sub_param {
DECL|hb_sub_status|function|static void hb_sub_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|max|member|u8_t *max;
DECL|min|member|u8_t *min;
DECL|mod_app_bind|function|int mod_app_bind(u16_t net_idx, u16_t addr, u16_t elem_addr, u16_t mod_app_idx, u16_t mod_id, bool vnd, u16_t cid, u8_t *status)
DECL|mod_app_idx|member|u16_t mod_app_idx;
DECL|mod_app_param|struct|struct mod_app_param {
DECL|mod_app_status|function|static void mod_app_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|mod_id|member|u16_t mod_id;
DECL|mod_id|member|u16_t mod_id;
DECL|mod_sub_add|function|int mod_sub_add(u16_t net_idx, u16_t addr, u16_t elem_addr, u16_t sub_addr,u16_t mod_id, bool vnd, u16_t cid, u8_t *status)
DECL|mod_sub_param|struct|struct mod_sub_param {
DECL|mod_sub_status|function|static void mod_sub_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|msg_timeout|variable|msg_timeout
DECL|net_idx|member|u16_t *net_idx;
DECL|net_idx|member|u16_t net_idx;
DECL|period|member|u8_t *period;
DECL|period|member|u8_t *period;
DECL|relay_param|struct|struct relay_param {
DECL|relay_status|function|static void relay_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|set_state_u8|function|static int set_state_u8(u16_t net_idx, u16_t addr, u32_t op, u32_t rsp,u8_t new_val, u8_t *val)
DECL|src|member|u16_t *src;
DECL|state_status_u8|function|static void state_status_u8(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf, u32_t expect_status)
DECL|status|member|u8_t *status;
DECL|status|member|u8_t *status;
DECL|status|member|u8_t *status;
DECL|status|member|u8_t *status;
DECL|status|member|u8_t *status;
DECL|status|member|u8_t *status;
DECL|status|member|u8_t *status;
DECL|sub_addr|member|u16_t sub_addr;
DECL|transmit|member|u8_t *transmit;
DECL|ttl_status|function|static void ttl_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|ttl|member|u8_t *ttl;
DECL|vnd|member|bool vnd;
DECL|vnd|member|bool vnd;
