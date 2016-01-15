DECL|NBLE_CHANNEL|macro|NBLE_CHANNEL
DECL|NBLE_RESET_PIN|macro|NBLE_RESET_PIN
DECL|NBLE_SWDIO_PIN|macro|NBLE_SWDIO_PIN
DECL|bt_enable|function|int bt_enable(bt_ready_cb_t cb)
DECL|bt_le_adv_start|function|int bt_le_adv_start(const struct bt_le_adv_param *param, const struct bt_data *ad, size_t ad_len, const struct bt_data *sd, size_t sd_len)
DECL|bt_le_adv_stop|function|int bt_le_adv_stop(void)
DECL|bt_le_scan_start|function|int bt_le_scan_start(const struct bt_le_scan_param *param, bt_le_scan_cb_t cb)
DECL|bt_le_scan_stop|function|int bt_le_scan_stop(void)
DECL|channel|variable|channel
DECL|recv_cb|function|static int recv_cb(int channel, int request, int len, void *p_data)
