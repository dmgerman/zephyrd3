DECL|CID_LOCAL|macro|CID_LOCAL
DECL|CONTROLLER_INDEX|macro|CONTROLLER_INDEX
DECL|CUR_FAULTS_MAX|macro|CUR_FAULTS_MAX
DECL|HEALTH_TEST_ID|macro|HEALTH_TEST_ID
DECL|addr|variable|addr
DECL|cfg_srv|variable|cfg_srv
DECL|comp|variable|comp
DECL|config_prov|function|static void config_prov(u8_t *data, u16_t len)
DECL|cur_faults|variable|cur_faults
DECL|dev_key|variable|dev_key
DECL|dev_uuid|variable|dev_uuid
DECL|dst|member|u16_t dst;
DECL|elements|variable|elements
DECL|fault_clear|function|static int fault_clear(struct bt_mesh_model *model, uint16_t company_id)
DECL|fault_get_cur|function|static int fault_get_cur(struct bt_mesh_model *model, u8_t *test_id, u16_t *company_id, u8_t *faults, u8_t *fault_count)
DECL|fault_get_reg|function|static int fault_get_reg(struct bt_mesh_model *model, u16_t company_id, u8_t *test_id, u8_t *faults, u8_t *fault_count)
DECL|fault_test|function|static int fault_test(struct bt_mesh_model *model, uint8_t test_id, uint16_t company_id)
DECL|flags|variable|flags
DECL|get_faults|function|static void get_faults(u8_t *faults, u8_t faults_size, u8_t *dst, u8_t *count)
DECL|health_pub|variable|health_pub
DECL|health_srv_cb|variable|health_srv_cb
DECL|health_srv|variable|health_srv
DECL|init|function|static void init(u8_t *data, u16_t len)
DECL|input_number|function|static void input_number(u8_t *data, u16_t len)
DECL|input_size|variable|input_size
DECL|input_string|function|static void input_string(u8_t *data, u16_t len)
DECL|input|function|static int input(bt_mesh_input_action_t action, u8_t size)
DECL|iv_index|variable|iv_index
DECL|ivu_test_mode|function|static void ivu_test_mode(u8_t *data, u16_t len)
DECL|ivu_toggle_state|function|static void ivu_toggle_state(u8_t *data, u16_t len)
DECL|link_close|function|static void link_close(bt_mesh_prov_bearer_t bearer)
DECL|link_open|function|static void link_open(bt_mesh_prov_bearer_t bearer)
DECL|local|member|u16_t local;
DECL|lpn_poll|function|static void lpn_poll(u8_t *data, u16_t len)
DECL|lpn|function|static void lpn(u8_t *data, u16_t len)
DECL|net_idx|member|u16_t net_idx;
DECL|net_key_idx|variable|net_key_idx
DECL|net_key|variable|net_key
DECL|net|variable|net
DECL|output_number|function|static int output_number(bt_mesh_output_action_t action, uint32_t number)
DECL|output_string|function|static int output_string(const char *str)
DECL|prov_complete|function|static void prov_complete(u16_t net_idx, u16_t addr)
DECL|prov_reset|function|static void prov_reset(void)
DECL|provision_node|function|static void provision_node(u8_t *data, u16_t len)
DECL|prov|variable|prov
DECL|reg_faults|variable|reg_faults
DECL|reset|function|static void reset(u8_t *data, u16_t len)
DECL|root_models|variable|root_models
DECL|seq_num|variable|seq_num
DECL|static_auth|variable|static_auth
DECL|supported_commands|function|static void supported_commands(u8_t *data, u16_t len)
DECL|tester_handle_mesh|function|void tester_handle_mesh(u8_t opcode, u8_t index, u8_t *data, u16_t len)
DECL|tester_init_mesh|function|u8_t tester_init_mesh(void)
