DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|bt_mesh_init|function|int bt_mesh_init(const struct bt_mesh_prov *prov, const struct bt_mesh_comp *comp)
DECL|bt_mesh_is_provisioned|function|bool bt_mesh_is_provisioned(void)
DECL|bt_mesh_prov_disable|function|int bt_mesh_prov_disable(bt_mesh_prov_bearer_t bearers)
DECL|bt_mesh_prov_enable|function|int bt_mesh_prov_enable(bt_mesh_prov_bearer_t bearers)
DECL|bt_mesh_provision|function|int bt_mesh_provision(const u8_t net_key[16], u16_t net_idx, u8_t flags, u32_t iv_index, u32_t seq, u16_t addr, const u8_t dev_key[16])
DECL|bt_mesh_reset|function|void bt_mesh_reset(void)
