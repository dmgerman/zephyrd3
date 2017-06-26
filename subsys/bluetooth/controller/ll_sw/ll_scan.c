DECL|filter_policy|member|u8_t filter_policy:2;
DECL|interval|member|u16_t interval;
DECL|ll_scan_enable|function|u32_t ll_scan_enable(u8_t enable)
DECL|ll_scan_params_set|function|u32_t ll_scan_params_set(u8_t type, u16_t interval, u16_t window, u8_t own_addr_type, u8_t filter_policy)
DECL|ll_scan|variable|ll_scan
DECL|own_addr_type|member|u8_t own_addr_type:2;
DECL|type|member|u8_t type:1;
DECL|type|member|u8_t type:4;
DECL|window|member|u16_t window;
