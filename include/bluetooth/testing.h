DECL|__BT_TESTING_H|macro|__BT_TESTING_H
DECL|bt_test_cb|struct|struct bt_test_cb {
DECL|mesh_model_bound|member|void (*mesh_model_bound)(u16_t addr, struct bt_mesh_model *model,
DECL|mesh_model_unbound|member|void (*mesh_model_unbound)(u16_t addr, struct bt_mesh_model *model,
DECL|mesh_net_recv|member|void (*mesh_net_recv)(u8_t ttl, u8_t ctl, u16_t src, u16_t dst,
DECL|mesh_prov_invalid_bearer|member|void (*mesh_prov_invalid_bearer)(u8_t opcode);
DECL|node|member|sys_snode_t node;
