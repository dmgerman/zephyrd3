DECL|ADDR_TYPE_ANON|macro|ADDR_TYPE_ANON
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|DEFAULT_RPA_TIMEOUT_MS|macro|DEFAULT_RPA_TIMEOUT_MS
DECL|LIST_MATCH|macro|LIST_MATCH
DECL|ctrl_filter_get|function|struct ll_filter *ctrl_filter_get(bool whitelist)
DECL|ctrl_irk_whitelisted|function|bool ctrl_irk_whitelisted(u8_t rl_idx)
DECL|ctrl_irks_get|function|u8_t *ctrl_irks_get(u8_t *count)
DECL|ctrl_lrpa_get|function|bt_addr_t *ctrl_lrpa_get(u8_t rl_idx)
DECL|ctrl_rl_addr_allowed|function|bool ctrl_rl_addr_allowed(u8_t id_addr_type, u8_t *id_addr, u8_t *rl_idx)
DECL|ctrl_rl_addr_resolve|function|bool ctrl_rl_addr_resolve(u8_t id_addr_type, u8_t *id_addr, u8_t rl_idx)
DECL|ctrl_rl_enabled|function|bool ctrl_rl_enabled(void)
DECL|ctrl_rl_idx_allowed|function|bool ctrl_rl_idx_allowed(u8_t irkmatch_ok, u8_t rl_idx)
DECL|ctrl_rl_idx|function|u8_t ctrl_rl_idx(bool whitelist, u8_t devmatch_id)
DECL|ctrl_rl_irk_idx|function|u8_t ctrl_rl_irk_idx(u8_t irkmatch_id)
DECL|dev|member|u8_t dev:1;
DECL|filter_add|function|static u32_t filter_add(struct ll_filter *filter, u8_t addr_type, u8_t *bdaddr)
DECL|filter_clear|function|static void filter_clear(struct ll_filter *filter)
DECL|filter_insert|function|static void filter_insert(struct ll_filter *filter, int index, u8_t addr_type, u8_t *bdaddr)
DECL|filter_remove|function|static u32_t filter_remove(struct ll_filter *filter, u8_t addr_type, u8_t *bdaddr)
DECL|filter_rl_update|function|static void filter_rl_update(void)
DECL|filter_wl_update|function|static void filter_wl_update(void)
DECL|id_addr_type|member|u8_t id_addr_type:1;
DECL|id_addr_type|member|u8_t id_addr_type:1;
DECL|id_addr|member|bt_addr_t id_addr;
DECL|id_addr|member|bt_addr_t id_addr;
DECL|lirk|member|u8_t lirk:1;
DECL|ll_adv_scan_state_cb|function|void ll_adv_scan_state_cb(u8_t bm)
DECL|ll_filter_reset|function|void ll_filter_reset(bool init)
DECL|ll_filters_adv_update|function|void ll_filters_adv_update(u8_t adv_fp)
DECL|ll_filters_scan_update|function|void ll_filters_scan_update(u8_t scan_fp)
DECL|ll_priv_mode_set|function|u32_t ll_priv_mode_set(bt_addr_le_t *id_addr, u8_t mode)
DECL|ll_rl_add|function|u32_t ll_rl_add(bt_addr_le_t *id_addr, const u8_t pirk[16],const u8_t lirk[16])
DECL|ll_rl_clear|function|u32_t ll_rl_clear(void)
DECL|ll_rl_enable|function|u32_t ll_rl_enable(u8_t enable)
DECL|ll_rl_find|function|u8_t ll_rl_find(u8_t id_addr_type, u8_t *id_addr, u8_t *free)
DECL|ll_rl_id_addr_get|function|void ll_rl_id_addr_get(u8_t rl_idx, u8_t *id_addr_type, u8_t *id_addr)
DECL|ll_rl_lrpa_get|function|u32_t ll_rl_lrpa_get(bt_addr_le_t *id_addr, bt_addr_t *lrpa)
DECL|ll_rl_pdu_adv_update|function|void ll_rl_pdu_adv_update(u8_t idx, struct pdu_adv *pdu)
DECL|ll_rl_prpa_get|function|u32_t ll_rl_prpa_get(bt_addr_le_t *id_addr, bt_addr_t *prpa)
DECL|ll_rl_remove|function|u32_t ll_rl_remove(bt_addr_le_t *id_addr)
DECL|ll_rl_rpa_update|function|void ll_rl_rpa_update(bool timeout)
DECL|ll_rl_size_get|function|u32_t ll_rl_size_get(void)
DECL|ll_rl_timeout_set|function|void ll_rl_timeout_set(u16_t timeout)
DECL|ll_wl_add|function|u32_t ll_wl_add(bt_addr_le_t *addr)
DECL|ll_wl_clear|function|u32_t ll_wl_clear(void)
DECL|ll_wl_remove|function|u32_t ll_wl_remove(bt_addr_le_t *addr)
DECL|ll_wl_size_get|function|u32_t ll_wl_size_get(void)
DECL|local_irk|member|u8_t local_irk[16];
DECL|local_rpas|variable|local_rpas
DECL|local_rpa|member|bt_addr_t *local_rpa;
DECL|peer_irk_count|variable|peer_irk_count
DECL|peer_irk_rl_ids|variable|peer_irk_rl_ids
DECL|peer_irks|variable|peer_irks
DECL|peer_rpa|member|bt_addr_t peer_rpa;
DECL|pirk_idx|member|u8_t pirk_idx;
DECL|pirk|member|u8_t pirk:1;
DECL|rl_access_check|function|static int rl_access_check(bool check_ar)
DECL|rl_clear|function|static void rl_clear(void)
DECL|rl_dev|struct|static struct rl_dev {
DECL|rl_enable|variable|rl_enable
DECL|rl_filter|variable|rl_filter
DECL|rl_idx|member|u8_t rl_idx;
DECL|rl|variable|rl
DECL|rpa_adv_refresh|function|static void rpa_adv_refresh(void)
DECL|rpa_last_ms|variable|rpa_last_ms
DECL|rpa_refresh_start|function|static void rpa_refresh_start(void)
DECL|rpa_refresh_stop|function|static void rpa_refresh_stop(void)
DECL|rpa_timeout_ms|variable|rpa_timeout_ms
DECL|rpa_timeout|function|static void rpa_timeout(struct k_work *work)
DECL|rpa_work|variable|rpa_work
DECL|rpas_ready|member|u8_t rpas_ready:1;
DECL|taken|member|u8_t taken:1;
DECL|taken|member|u8_t taken:1;
DECL|wl_add|function|static u32_t wl_add(bt_addr_le_t *id_addr)
DECL|wl_anon|variable|wl_anon
DECL|wl_clear|function|static void wl_clear(void)
DECL|wl_filter|variable|wl_filter
DECL|wl_find|function|static u8_t wl_find(u8_t addr_type, u8_t *addr, u8_t *free)
DECL|wl_remove|function|static u32_t wl_remove(bt_addr_le_t *id_addr)
DECL|wl|member|u8_t wl:1;
DECL|wl|variable|wl
