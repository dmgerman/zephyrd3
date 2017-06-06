DECL|chl_map|member|u8_t chl_map:3;
DECL|filter_policy|member|u8_t filter_policy:2;
DECL|interval|member|u16_t interval;
DECL|ll_adv_data_set|function|void ll_adv_data_set(u8_t len, u8_t const *const data)
DECL|ll_adv_enable|function|u32_t ll_adv_enable(u8_t enable)
DECL|ll_adv_params_set|function|u32_t ll_adv_params_set(u16_t interval, u8_t adv_type,u8_t own_addr_type, u8_t direct_addr_type, u8_t const *const direct_addr, u8_t chl_map, u8_t filter_policy)
DECL|ll_adv|variable|ll_adv
DECL|ll_scan_data_set|function|void ll_scan_data_set(u8_t len, u8_t const *const data)
