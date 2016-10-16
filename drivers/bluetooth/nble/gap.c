DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|NBLE_VERSION_MAJOR|macro|NBLE_VERSION_MAJOR
DECL|NBLE_VERSION_MINOR|macro|NBLE_VERSION_MINOR
DECL|NBLE_VERSION_PATCH|macro|NBLE_VERSION_PATCH
DECL|NBLE_VERSION|macro|NBLE_VERSION
DECL|bt_addr_le_str|function|static const char *bt_addr_le_str(const bt_addr_le_t *addr)
DECL|bt_enable|function|int bt_enable(bt_ready_cb_t cb)
DECL|bt_le_adv_start|function|int bt_le_adv_start(const struct bt_le_adv_param *param, const struct bt_data *ad, size_t ad_len, const struct bt_data *sd, size_t sd_len)
DECL|bt_le_adv_stop|function|int bt_le_adv_stop(void)
DECL|bt_le_oob_get_local|function|int bt_le_oob_get_local(struct bt_le_oob *oob)
DECL|bt_le_scan_start|function|int bt_le_scan_start(const struct bt_le_scan_param *param, bt_le_scan_cb_t cb)
DECL|bt_le_scan_stop|function|int bt_le_scan_stop(void)
DECL|bt_ready_cb|variable|bt_ready_cb
DECL|bt_storage_clear|function|int bt_storage_clear(const bt_addr_le_t *addr)
DECL|bt_storage_register|function|void bt_storage_register(const struct bt_storage *bt_storage)
DECL|clear_bonds|function|static void clear_bonds(const bt_addr_le_t *addr)
DECL|compatible_firmware|variable|compatible_firmware
DECL|nble_log|function|void nble_log(const struct nble_log_s *param, char *format, uint8_t len)
DECL|nble|variable|nble
DECL|on_nble_common_rsp|function|void on_nble_common_rsp(const struct nble_common_rsp *rsp)
DECL|on_nble_gap_adv_report_evt|function|void on_nble_gap_adv_report_evt(const struct nble_gap_adv_report_evt *evt,const uint8_t *buf, uint8_t len)
DECL|on_nble_gap_scan_start_stop_rsp|function|void on_nble_gap_scan_start_stop_rsp(const struct nble_common_rsp *rsp)
DECL|on_nble_gap_start_adv_rsp|function|void on_nble_gap_start_adv_rsp(const struct nble_common_rsp *rsp)
DECL|on_nble_gap_stop_advertise_rsp|function|void on_nble_gap_stop_advertise_rsp(const struct nble_common_rsp *rsp)
DECL|on_nble_get_bda_rsp|function|void on_nble_get_bda_rsp(const struct nble_get_bda_rsp *rsp)
DECL|rpc_init_cb|function|void rpc_init_cb(uint32_t version, bool compatible)
DECL|scan_dev_found_cb|variable|scan_dev_found_cb
DECL|set_ad|function|static int set_ad(struct nble_eir_data *eir, const struct bt_data *ad, size_t ad_len)
DECL|storage|variable|storage
DECL|valid_adv_param|function|static bool valid_adv_param(const struct bt_le_adv_param *param)
DECL|valid_le_scan_param|function|static bool valid_le_scan_param(const struct bt_le_scan_param *param)
