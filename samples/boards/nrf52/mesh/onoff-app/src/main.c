DECL|BT_MESH_MODEL_OP_GEN_ONOFF_GET|macro|BT_MESH_MODEL_OP_GEN_ONOFF_GET
DECL|BT_MESH_MODEL_OP_GEN_ONOFF_SET_UNACK|macro|BT_MESH_MODEL_OP_GEN_ONOFF_SET_UNACK
DECL|BT_MESH_MODEL_OP_GEN_ONOFF_SET|macro|BT_MESH_MODEL_OP_GEN_ONOFF_SET
DECL|BT_MESH_MODEL_OP_GEN_ONOFF_STATUS|macro|BT_MESH_MODEL_OP_GEN_ONOFF_STATUS
DECL|BUTTON_DEBOUNCE_DELAY_MS|macro|BUTTON_DEBOUNCE_DELAY_MS
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|bt_ready|function|static void bt_ready(int err)
DECL|button_cb|variable|button_cb
DECL|button_cnt_timer|function|static void button_cnt_timer(struct k_timer *work)
DECL|button_press_cnt|variable|button_press_cnt
DECL|button_pressed_worker|function|static void button_pressed_worker(struct k_work *work)
DECL|button_pressed|function|static void button_pressed(struct device *dev, struct gpio_callback *cb, u32_t pin_pos)
DECL|button_timer|member|struct k_timer button_timer;
DECL|button_work|member|struct k_work button_work;
DECL|cfg_cli|variable|cfg_cli
DECL|cfg_srv|variable|cfg_srv
DECL|comp|variable|comp
DECL|current|member|u8_t current;
DECL|dev_uuid|variable|dev_uuid
DECL|elements|variable|elements
DECL|gen_onoff_cli_op|variable|gen_onoff_cli_op
DECL|gen_onoff_get|function|static void gen_onoff_get(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|gen_onoff_set_unack|function|static void gen_onoff_set_unack(struct bt_mesh_model *model,struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|gen_onoff_set|function|static void gen_onoff_set(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|gen_onoff_srv_op|variable|gen_onoff_srv_op
DECL|gen_onoff_status|function|static void gen_onoff_status(struct bt_mesh_model *model, struct bt_mesh_msg_ctx *ctx, struct net_buf_simple *buf)
DECL|health_srv|variable|health_srv
DECL|init_led|function|void init_led(u8_t dev, const char *port, u32_t pin_num)
DECL|last_time|variable|last_time
DECL|led_device|member|struct device *led_device;
DECL|led_gpio_pin|member|u8_t led_gpio_pin;
DECL|log_cbuf_put|function|void log_cbuf_put(const char *format, ...)
DECL|main|function|void main(void)
DECL|mod_cli_sw|variable|mod_cli_sw
DECL|mod_srv_sw|variable|mod_srv_sw
DECL|onoff_state|member|u8_t onoff_state;
DECL|onoff_state|struct|struct onoff_state {
DECL|onoff_state|variable|onoff_state
DECL|output_number|function|static int output_number(bt_mesh_output_action_t action, u32_t number)
DECL|output_string|function|static int output_string(const char *str)
DECL|pin_to_sw|function|static uint8_t pin_to_sw(uint32_t pin_pos)
DECL|previous|member|u8_t previous;
DECL|primary_addr|variable|primary_addr
DECL|primary_net_idx|variable|primary_net_idx
DECL|prov_complete|function|static void prov_complete(u16_t net_idx, u16_t addr)
DECL|prov_reset|function|static void prov_reset(void)
DECL|prov|variable|prov
DECL|root_models|variable|root_models
DECL|secondary_0_models|variable|secondary_0_models
DECL|secondary_1_models|variable|secondary_1_models
DECL|secondary_2_models|variable|secondary_2_models
DECL|sw_device|variable|sw_device
DECL|sw_num|member|u8_t sw_num;
DECL|sw|struct|struct sw {
DECL|sw|variable|sw
DECL|time|variable|time
DECL|trans_id|variable|trans_id
