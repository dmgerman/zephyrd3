DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|NBLE_BTWAKE_PIN|macro|NBLE_BTWAKE_PIN
DECL|NBLE_RESET_PIN|macro|NBLE_RESET_PIN
DECL|NBLE_SWDIO_PIN|macro|NBLE_SWDIO_PIN
DECL|bt_addr_le_str|function|static const char *bt_addr_le_str(const bt_addr_le_t *addr)
DECL|bt_enable|function|int bt_enable(bt_ready_cb_t cb)
DECL|bt_le_adv_start|function|int bt_le_adv_start(const struct bt_le_adv_param *param, const struct bt_data *ad, size_t ad_len, const struct bt_data *sd, size_t sd_len)
DECL|bt_le_adv_stop|function|int bt_le_adv_stop(void)
DECL|bt_le_scan_start|function|int bt_le_scan_start(const struct bt_le_scan_param *param, bt_le_scan_cb_t cb)
DECL|bt_le_scan_stop|function|int bt_le_scan_stop(void)
DECL|bt_ready_cb|variable|bt_ready_cb
DECL|nble_bdaddr|variable|nble_bdaddr
DECL|nble_log|function|void nble_log(const struct nble_log_s *param, char *format, uint8_t len)
DECL|on_nble_gap_adv_report_evt|function|void on_nble_gap_adv_report_evt(const struct nble_gap_adv_report_evt *evt,const uint8_t *buf, uint8_t len)
DECL|on_nble_gap_read_bda_rsp|function|void on_nble_gap_read_bda_rsp(const struct nble_service_read_bda_response *rsp)
DECL|on_nble_gap_scan_start_stop_rsp|function|void on_nble_gap_scan_start_stop_rsp(const struct nble_response *rsp)
DECL|on_nble_gap_sm_config_rsp|function|void on_nble_gap_sm_config_rsp(struct nble_gap_sm_config_rsp *rsp)
DECL|on_nble_gap_start_advertise_rsp|function|void on_nble_gap_start_advertise_rsp(const struct nble_response *rsp)
DECL|on_nble_get_version_rsp|function|void on_nble_get_version_rsp(const struct nble_version_response *rsp)
DECL|on_nble_up|function|void on_nble_up(void)
DECL|scan_dev_found_cb|variable|scan_dev_found_cb
DECL|send_dm_config|function|static void send_dm_config(void)
DECL|valid_adv_param|function|static bool valid_adv_param(const struct bt_le_adv_param *param)
DECL|valid_le_scan_param|function|static bool valid_le_scan_param(const struct bt_le_scan_param *param)
