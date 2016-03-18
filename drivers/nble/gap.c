DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|BT_SMP_IO_DISPLAY_ONLY|macro|BT_SMP_IO_DISPLAY_ONLY
DECL|BT_SMP_IO_DISPLAY_YESNO|macro|BT_SMP_IO_DISPLAY_YESNO
DECL|BT_SMP_IO_KEYBOARD_DISPLAY|macro|BT_SMP_IO_KEYBOARD_DISPLAY
DECL|BT_SMP_IO_KEYBOARD_ONLY|macro|BT_SMP_IO_KEYBOARD_ONLY
DECL|BT_SMP_IO_NO_INPUT_OUTPUT|macro|BT_SMP_IO_NO_INPUT_OUTPUT
DECL|BT_SMP_MAX_ENC_KEY_SIZE|macro|BT_SMP_MAX_ENC_KEY_SIZE
DECL|BT_SMP_OOB_NOT_PRESENT|macro|BT_SMP_OOB_NOT_PRESENT
DECL|BT_SMP_OOB_PRESENT|macro|BT_SMP_OOB_PRESENT
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
DECL|compatibe_firmware|variable|compatibe_firmware
DECL|get_io_capa|function|static uint8_t get_io_capa(void)
DECL|nble_bdaddr|variable|nble_bdaddr
DECL|nble_log|function|void nble_log(const struct nble_log_s *param, char *format, uint8_t len)
DECL|on_nble_common_rsp|function|void on_nble_common_rsp(const struct nble_response *rsp)
DECL|on_nble_gap_adv_report_evt|function|void on_nble_gap_adv_report_evt(const struct nble_gap_adv_report_evt *evt,const uint8_t *buf, uint8_t len)
DECL|on_nble_gap_read_bda_rsp|function|void on_nble_gap_read_bda_rsp(const struct nble_service_read_bda_response *rsp)
DECL|on_nble_gap_scan_start_stop_rsp|function|void on_nble_gap_scan_start_stop_rsp(const struct nble_response *rsp)
DECL|on_nble_gap_sm_common_rsp|function|void on_nble_gap_sm_common_rsp(const struct nble_gap_sm_response *rsp)
DECL|on_nble_gap_sm_config_rsp|function|void on_nble_gap_sm_config_rsp(struct nble_gap_sm_config_rsp *rsp)
DECL|on_nble_gap_sm_passkey_display_evt|function|void on_nble_gap_sm_passkey_display_evt(const struct nble_gap_sm_passkey_disp_evt *ev)
DECL|on_nble_gap_sm_passkey_req_evt|function|void on_nble_gap_sm_passkey_req_evt(const struct nble_gap_sm_passkey_req_evt *ev)
DECL|on_nble_gap_sm_status_evt|function|void on_nble_gap_sm_status_evt(const struct nble_gap_sm_status_evt *ev)
DECL|on_nble_gap_start_advertise_rsp|function|void on_nble_gap_start_advertise_rsp(const struct nble_response *rsp)
DECL|on_nble_gap_stop_advertise_rsp|function|void on_nble_gap_stop_advertise_rsp(const struct nble_response *rsp)
DECL|on_nble_get_version_rsp|function|void on_nble_get_version_rsp(const struct nble_version_response *rsp)
DECL|on_nble_up|function|void on_nble_up(void)
DECL|scan_dev_found_cb|variable|scan_dev_found_cb
DECL|send_dm_config|function|static void send_dm_config(void)
DECL|set_ad|function|static int set_ad(struct bt_eir_data *eir, const struct bt_data *ad, size_t ad_len)
DECL|valid_adv_param|function|static bool valid_adv_param(const struct bt_le_adv_param *param)
DECL|valid_le_scan_param|function|static bool valid_le_scan_param(const struct bt_le_scan_param *param)
