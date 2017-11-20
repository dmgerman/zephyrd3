DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|HEALTH_TEST_STANDARD|macro|HEALTH_TEST_STANDARD
DECL|attention_get|function|static void attention_get(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|attention_off|function|static void attention_off(struct k_work *work)
DECL|attention_set_unrel|function|static void attention_set_unrel(struct bt_mesh_model *model,struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|attention_set|function|static void attention_set(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|bt_mesh_attention|function|void bt_mesh_attention(struct bt_mesh_model *model, u8_t time)
DECL|bt_mesh_fault_update|function|int bt_mesh_fault_update(struct bt_mesh_elem *elem)
DECL|bt_mesh_health_srv_init|function|int bt_mesh_health_srv_init(struct bt_mesh_model *model, bool primary)
DECL|bt_mesh_health_srv_op|variable|bt_mesh_health_srv_op
DECL|health_fault_clear_unrel|function|static void health_fault_clear_unrel(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_fault_clear|function|static void health_fault_clear(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_fault_get|function|static void health_fault_get(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_fault_test_unrel|function|static void health_fault_test_unrel(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_fault_test|function|static void health_fault_test(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_get_current|function|static size_t health_get_current(struct bt_mesh_model *mod, struct net_buf_simple *msg)
DECL|health_get_registered|function|static void health_get_registered(struct bt_mesh_model *mod, u16_t company_id, struct net_buf_simple *msg)
DECL|health_period_get|function|static void health_period_get(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_period_set_unrel|function|static void health_period_set_unrel(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_period_set|function|static void health_period_set(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_pub_update|function|static int health_pub_update(struct bt_mesh_model *mod)
DECL|health_srv|variable|health_srv
DECL|send_attention_status|function|static void send_attention_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx)
DECL|send_health_period_status|function|static void send_health_period_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx)
