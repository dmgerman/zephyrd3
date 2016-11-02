DECL|_ll_adv_params|variable|_ll_adv_params
DECL|_ll_context|variable|_ll_context
DECL|_ll_scan_params|variable|_ll_scan_params
DECL|adv_addr|member|uint8_t adv_addr[BDADDR_SIZE];
DECL|adv_type|member|uint8_t adv_type:4;
DECL|chl_map|member|uint8_t chl_map:3;
DECL|direct_addr|member|uint8_t direct_addr[BDADDR_SIZE];
DECL|filter_policy|member|uint8_t filter_policy:1;
DECL|filter_policy|member|uint8_t filter_policy:2;
DECL|interval|member|uint16_t interval;
DECL|interval|member|uint16_t interval;
DECL|ll_address_get|function|void ll_address_get(uint8_t addr_type, uint8_t *bdaddr)
DECL|ll_address_set|function|void ll_address_set(uint8_t addr_type, uint8_t const *const bdaddr)
DECL|ll_adv_data_set|function|void ll_adv_data_set(uint8_t len, uint8_t const *const data)
DECL|ll_adv_enable|function|uint32_t ll_adv_enable(uint8_t enable)
DECL|ll_adv_params_set|function|void ll_adv_params_set(uint16_t interval, uint8_t adv_type, uint8_t own_addr_type, uint8_t direct_addr_type, uint8_t const *const direct_addr, uint8_t chl_map, uint8_t filter_policy)
DECL|ll_create_connection|function|uint32_t ll_create_connection(uint16_t scan_interval, uint16_t scan_window, uint8_t filter_policy, uint8_t peer_addr_type, uint8_t *peer_addr, uint8_t own_addr_type, uint16_t interval, uint16_t latency, uint16_t timeout)
DECL|ll_scan_data_set|function|void ll_scan_data_set(uint8_t len, uint8_t const *const data)
DECL|ll_scan_enable|function|uint32_t ll_scan_enable(uint8_t enable)
DECL|ll_scan_params_set|function|void ll_scan_params_set(uint8_t scan_type, uint16_t interval, uint16_t window,uint8_t own_addr_type, uint8_t filter_policy)
DECL|pub_addr|member|uint8_t pub_addr[BDADDR_SIZE];
DECL|rnd_addr|member|uint8_t rnd_addr[BDADDR_SIZE];
DECL|rx_addr|member|uint8_t rx_addr:1;
DECL|scan_type|member|uint8_t scan_type:1;
DECL|tx_addr|member|uint8_t tx_addr:1;
DECL|tx_addr|member|uint8_t tx_addr:1;
DECL|window|member|uint16_t window;
