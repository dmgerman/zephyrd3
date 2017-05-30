DECL|chl_map|member|u8_t chl_map:3;
DECL|filter_policy|member|u8_t filter_policy:2;
DECL|interval|member|u16_t interval;
DECL|interval|member|u32_t interval;
DECL|ll_adv_data_set|function|void ll_adv_data_set(u8_t len, u8_t const *const data)
DECL|ll_adv_enable|function|u32_t ll_adv_enable(u8_t enable)
DECL|ll_adv_params_set|function|u32_t ll_adv_params_set(u8_t handle, u16_t evt_prop, u32_t interval,u8_t adv_type, u8_t own_addr_type, u8_t direct_addr_type, u8_t const *const direct_addr, u8_t chl_map, u8_t filter_policy, u8_t *tx_pwr, u8_t phy_p, u8_t skip, u8_t phy_s, u8_t sid, u8_t sreq)
DECL|ll_adv|variable|ll_adv
DECL|ll_scan_data_set|function|void ll_scan_data_set(u8_t len, u8_t const *const data)
DECL|phy_p|member|u8_t phy_p:3;
