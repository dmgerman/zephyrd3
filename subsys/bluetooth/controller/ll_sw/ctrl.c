DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|OFFSET_M_MAX|macro|OFFSET_M_MAX
DECL|OFFSET_S_MAX|macro|OFFSET_S_MAX
DECL|RADIO_CONN_EVENTS|macro|RADIO_CONN_EVENTS
DECL|RADIO_DEFERRED_PREEMPT|macro|RADIO_DEFERRED_PREEMPT
DECL|RADIO_DEFERRED_PREEMPT|macro|RADIO_DEFERRED_PREEMPT
DECL|RADIO_IRK_COUNT_MAX|macro|RADIO_IRK_COUNT_MAX
DECL|RADIO_RSSI_SAMPLE_COUNT|macro|RADIO_RSSI_SAMPLE_COUNT
DECL|RADIO_RSSI_THRESHOLD|macro|RADIO_RSSI_THRESHOLD
DECL|RADIO_TICKER_JITTER_US|macro|RADIO_TICKER_JITTER_US
DECL|RADIO_TICKER_PREEMPT_PART_MAX_US|macro|RADIO_TICKER_PREEMPT_PART_MAX_US
DECL|RADIO_TICKER_PREEMPT_PART_MIN_US|macro|RADIO_TICKER_PREEMPT_PART_MIN_US
DECL|RADIO_TICKER_PREEMPT_PART_US|macro|RADIO_TICKER_PREEMPT_PART_US
DECL|RADIO_TICKER_START_PART_US|macro|RADIO_TICKER_START_PART_US
DECL|RADIO_TICKER_XTAL_OFFSET_US|macro|RADIO_TICKER_XTAL_OFFSET_US
DECL|RADIO_TIFS|macro|RADIO_TIFS
DECL|ROLE_ADV|enumerator|ROLE_ADV,
DECL|ROLE_MASTER|enumerator|ROLE_MASTER,
DECL|ROLE_NONE|enumerator|ROLE_NONE,
DECL|ROLE_SCAN|enumerator|ROLE_SCAN,
DECL|ROLE_SLAVE|enumerator|ROLE_SLAVE,
DECL|SILENT_CONNECTION|macro|SILENT_CONNECTION
DECL|STATE_ABORT|enumerator|STATE_ABORT,
DECL|STATE_CLOSE|enumerator|STATE_CLOSE,
DECL|STATE_NONE|enumerator|STATE_NONE,
DECL|STATE_RX|enumerator|STATE_RX,
DECL|STATE_STOP|enumerator|STATE_STOP,
DECL|STATE_TX|enumerator|STATE_TX,
DECL|_radio|variable|_radio
DECL|access_addr_get|function|static u32_t access_addr_get(void)
DECL|addr_us_get|function|static inline u32_t addr_us_get(u8_t phy)
DECL|adv_addr_type|member|u8_t adv_addr_type:1;
DECL|adv_addr|member|u8_t adv_addr[BDADDR_SIZE];
DECL|adv_data|member|struct radio_adv_data adv_data;
DECL|adv_scan_configure|function|static void adv_scan_configure(u8_t phy, u8_t flags)
DECL|adv_scan_conn_configure|function|static void adv_scan_conn_configure(void)
DECL|adv_setup|function|static void adv_setup(void)
DECL|advertiser|member|struct advertiser advertiser;
DECL|advertiser|struct|struct advertiser {
DECL|chan_mam|function|static u16_t chan_mam(u16_t a, u16_t b)
DECL|chan_map_update|function|static u32_t chan_map_update(struct connection *conn, struct pdu_data *pdu_data_rx)
DECL|chan_perm|function|static u16_t chan_perm(u16_t i)
DECL|chan_prn|function|static u16_t chan_prn(u16_t counter, u16_t chan_id)
DECL|chan_rev_8|function|static u8_t chan_rev_8(u8_t i)
DECL|chan_sel_1|function|static u8_t chan_sel_1(u8_t *chan_use, u8_t hop, u16_t latency, u8_t *chan_map, u8_t chan_count)
DECL|chan_sel_2_ut|function|static void chan_sel_2_ut(void)
DECL|chan_sel_2|function|static u8_t chan_sel_2(u16_t counter, u16_t chan_id, u8_t *chan_map, u8_t chan_count)
DECL|chan_sel_remap|function|static u8_t chan_sel_remap(u8_t *chan_map, u8_t chan_index)
DECL|chan_set|function|static void chan_set(u32_t chan)
DECL|chan|member|u8_t chan:2;
DECL|chl_map_current|member|u8_t chl_map_current:3;
DECL|chl_map|member|u8_t chl_map:3;
DECL|common_init|function|static void common_init(void)
DECL|conn_curr|member|struct connection *conn_curr;
DECL|conn_free|member|void *conn_free;
DECL|conn_interval|member|u16_t conn_interval;
DECL|conn_latency|member|u16_t conn_latency;
DECL|conn_pool|member|void *conn_pool;
DECL|conn_timeout|member|u16_t conn_timeout;
DECL|conn_update_req|function|static u32_t conn_update_req(struct connection *conn)
DECL|conn_update|function|static u32_t conn_update(struct connection *conn, struct pdu_data *pdu_data_rx)
DECL|conn_upd|member|struct connection *conn_upd;
DECL|connection_configure|function|static void connection_configure(struct connection *conn)
DECL|connection_count|member|u8_t connection_count;
DECL|connection_get|function|static struct connection *connection_get(u16_t handle)
DECL|connection_release|function|static void connection_release(struct connection *conn)
DECL|conn|member|struct connection *conn;
DECL|conn|member|struct connection *conn;
DECL|crc_expire|member|u8_t crc_expire;
DECL|ctrl_tx_enqueue_tail|function|static void ctrl_tx_enqueue_tail(struct connection *conn, struct radio_pdu_node_tx *node_tx)
DECL|ctrl_tx_enqueue|function|static void ctrl_tx_enqueue(struct connection *conn, struct radio_pdu_node_tx *node_tx)
DECL|data_chan_count|member|u8_t data_chan_count;
DECL|data_chan_map|member|u8_t data_chan_map[5];
DECL|default_phy_rx|member|u16_t default_phy_rx;
DECL|default_phy_tx|member|u16_t default_phy_tx;
DECL|default_tx_octets|member|u16_t default_tx_octets;
DECL|default_tx_time|member|u16_t default_tx_time;
DECL|do_radio_rx_fc_set|function|u8_t do_radio_rx_fc_set(u16_t handle, u8_t req, u8_t ack)
DECL|empty_pkt_us_get|function|static inline u32_t empty_pkt_us_get(u8_t phy)
DECL|empty_tx_enqueue|function|static struct pdu_data *empty_tx_enqueue(struct connection *conn)
DECL|enc_req_reused_send|function|static void enc_req_reused_send(struct connection *conn,struct radio_pdu_node_tx *node_tx)
DECL|enc_rsp_send|function|static void enc_rsp_send(struct connection *conn)
DECL|event_active|function|static void event_active(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|event_adv_stop|function|void event_adv_stop(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|event_adv|function|static void event_adv(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|event_ch_map_prep|function|static inline void event_ch_map_prep(struct connection *conn, u16_t event_counter)
DECL|event_common_prepare|function|static u32_t event_common_prepare(u32_t ticks_at_expire, u32_t remainder, u32_t *ticks_xtal_to_start, u32_t *ticks_active_to_start, u32_t ticks_preempt_to_start,
DECL|event_conn_update_prep|function|static inline u32_t event_conn_update_prep(struct connection *conn, u16_t event_counter, u32_t ticks_at_expire)
DECL|event_conn_update_st_init|function|event_conn_update_st_init(struct connection *conn, u16_t event_counter, struct pdu_data *pdu_ctrl_tx, u32_t ticks_at_expire, struct mayfly *mayfly_sched_offset,
DECL|event_conn_update_st_req|function|static inline void event_conn_update_st_req(struct connection *conn, u16_t event_counter, struct pdu_data *pdu_ctrl_tx, u32_t ticks_at_expire, struct mayfly *mayfly_sched_offset)
DECL|event_conn_update_st_rsp|function|static inline void event_conn_update_st_rsp(struct connection *conn, struct pdu_data *pdu_ctrl_tx)
DECL|event_connection_prepare|function|static void event_connection_prepare(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, struct connection *conn)
DECL|event_enc_prep|function|static inline void event_enc_prep(struct connection *conn)
DECL|event_fex_prep|function|static inline void event_fex_prep(struct connection *conn)
DECL|event_inactive|function|static void event_inactive(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|event_len_prep|function|static inline void event_len_prep(struct connection *conn)
DECL|event_master_prepare|function|static void event_master_prepare(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|event_master|function|static void event_master(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|event_phy_req_prep|function|static inline void event_phy_req_prep(struct connection *conn)
DECL|event_phy_upd_ind_prep|function|static inline void event_phy_upd_ind_prep(struct connection *conn, u16_t event_counter)
DECL|event_ping_prep|function|static inline void event_ping_prep(struct connection *conn)
DECL|event_scan_prepare|function|static void event_scan_prepare(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|event_scan|function|static void event_scan(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|event_slave_prepare|function|static void event_slave_prepare(u32_t ticks_at_expire, u32_t remainder,u16_t lazy, void *context)
DECL|event_slave|function|static void event_slave(u32_t ticks_at_expire, u32_t remainder, u16_t lazy,void *context)
DECL|event_stop|function|static void event_stop(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|event_vex_prep|function|static inline void event_vex_prep(struct connection *conn)
DECL|event_xtal|function|static void event_xtal(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|fc_ack|member|u8_t fc_ack;
DECL|fc_ena|member|u8_t fc_ena;
DECL|fc_handle|member|u16_t fc_handle[TRIPLE_BUFFER_SIZE];
DECL|fc_req|member|u8_t volatile fc_req;
DECL|feat_get|function|static inline u32_t feat_get(u8_t *features)
DECL|feature_rsp_send|function|static void feature_rsp_send(struct connection *conn)
DECL|filter_policy|member|u8_t filter_policy:2;
DECL|filter_policy|member|u8_t filter_policy:2;
DECL|gc_lookup_ppm|variable|gc_lookup_ppm
DECL|hdr|member|struct shdr hdr;
DECL|hdr|member|struct shdr hdr;
DECL|hf_clock|member|struct device *hf_clock;
DECL|init_addr_type|member|u8_t init_addr_type:1;
DECL|init_addr|member|u8_t init_addr[BDADDR_SIZE];
DECL|irk|member|u8_t irk[RADIO_IRK_COUNT_MAX][16];
DECL|is_enabled|member|u8_t is_enabled:1;
DECL|is_enabled|member|u8_t is_enabled:1;
DECL|is_peer_compatible|function|static u32_t is_peer_compatible(struct connection *conn)
DECL|isr_close_adv|function|static inline u32_t isr_close_adv(void)
DECL|isr_close_conn|function|static inline void isr_close_conn(void)
DECL|isr_close_scan|function|static inline u32_t isr_close_scan(void)
DECL|isr_radio_state_close|function|static inline void isr_radio_state_close(void)
DECL|isr_radio_state_rx|function|static inline void isr_radio_state_rx(u8_t trx_done, u8_t crc_ok, u8_t devmatch_ok, u8_t irkmatch_ok, u8_t irkmatch_id, u8_t rssi_ready)
DECL|isr_radio_state_tx|function|static inline void isr_radio_state_tx(void)
DECL|isr_rx_adv_sr_report|function|static u32_t isr_rx_adv_sr_report(struct pdu_adv *pdu_adv_rx, u8_t rssi_ready)
DECL|isr_rx_adv|function|static inline u32_t isr_rx_adv(u8_t devmatch_ok, u8_t irkmatch_ok, u8_t irkmatch_id, u8_t rssi_ready)
DECL|isr_rx_conn_pkt_ack|function|static inline u8_t isr_rx_conn_pkt_ack(struct pdu_data *pdu_data_tx, struct radio_pdu_node_tx **node_tx)
DECL|isr_rx_conn_pkt_ctrl_dle|function|static inline u8_t isr_rx_conn_pkt_ctrl_dle(struct pdu_data *pdu_data_rx, u8_t *rx_enqueue)
DECL|isr_rx_conn_pkt_ctrl_rej_conn_upd|function|isr_rx_conn_pkt_ctrl_rej_conn_upd(struct radio_pdu_node_rx *radio_pdu_node_rx, u8_t *rx_enqueue)
DECL|isr_rx_conn_pkt_ctrl_rej_dle|function|isr_rx_conn_pkt_ctrl_rej_dle(struct radio_pdu_node_rx *radio_pdu_node_rx, u8_t *rx_enqueue)
DECL|isr_rx_conn_pkt_ctrl_rej_phy_upd|function|isr_rx_conn_pkt_ctrl_rej_phy_upd(struct radio_pdu_node_rx *radio_pdu_node_rx, u8_t *rx_enqueue)
DECL|isr_rx_conn_pkt_ctrl_rej|function|isr_rx_conn_pkt_ctrl_rej(struct radio_pdu_node_rx *radio_pdu_node_rx, u8_t *rx_enqueue)
DECL|isr_rx_conn_pkt_ctrl|function|isr_rx_conn_pkt_ctrl(struct radio_pdu_node_rx *radio_pdu_node_rx, u8_t *rx_enqueue)
DECL|isr_rx_conn_pkt_release|function|isr_rx_conn_pkt_release(struct radio_pdu_node_tx *node_tx)
DECL|isr_rx_conn_pkt|function|isr_rx_conn_pkt(struct radio_pdu_node_rx *radio_pdu_node_rx,struct radio_pdu_node_tx **tx_release, u8_t *rx_enqueue)
DECL|isr_rx_conn|function|static inline void isr_rx_conn(u8_t crc_ok, u8_t trx_done, u8_t rssi_ready)
DECL|isr_rx_scan_report|function|static u32_t isr_rx_scan_report(u8_t rssi_ready)
DECL|isr_rx_scan|function|static inline u32_t isr_rx_scan(u8_t irkmatch_id, u8_t rssi_ready)
DECL|isr|function|static void isr(void)
DECL|length_resp_send|function|static void length_resp_send(struct connection *conn, u16_t eff_rx_octets, u16_t eff_tx_octets)
DECL|link_rx_data_quota|member|u8_t link_rx_data_quota;
DECL|link_rx_free|member|void *link_rx_free;
DECL|link_rx_head|member|void *link_rx_head;
DECL|link_rx_pool|member|void *link_rx_pool;
DECL|link_rx_tail|member|void *volatile link_rx_tail;
DECL|ll_adv_scan_state_cb|function|void __weak ll_adv_scan_state_cb(u8_t bm)
DECL|ll_chm_get|function|u32_t ll_chm_get(u16_t handle, u8_t *chm)
DECL|ll_chm_update|function|u32_t ll_chm_update(u8_t *chm)
DECL|ll_conn_update|function|u32_t ll_conn_update(u16_t handle, u8_t cmd, u8_t status, u16_t interval, u16_t latency, u16_t timeout)
DECL|ll_connect_disable|function|u32_t ll_connect_disable(void)
DECL|ll_enc_req_send|function|u32_t ll_enc_req_send(u16_t handle, u8_t *rand, u8_t *ediv, u8_t *ltk)
DECL|ll_feature_req_send|function|u32_t ll_feature_req_send(u16_t handle)
DECL|ll_irk_add|function|u32_t ll_irk_add(u8_t *irk)
DECL|ll_irk_clear|function|void ll_irk_clear(void)
DECL|ll_length_default_get|function|void ll_length_default_get(u16_t *max_tx_octets, u16_t *max_tx_time)
DECL|ll_length_default_set|function|u32_t ll_length_default_set(u16_t max_tx_octets, u16_t max_tx_time)
DECL|ll_length_max_get|function|void ll_length_max_get(u16_t *max_tx_octets, u16_t *max_tx_time, u16_t *max_rx_octets, u16_t *max_rx_time)
DECL|ll_length_req_send|function|u32_t ll_length_req_send(u16_t handle, u16_t tx_octets)
DECL|ll_phy_default_set|function|u32_t ll_phy_default_set(u8_t tx, u8_t rx)
DECL|ll_phy_get|function|u32_t ll_phy_get(u16_t handle, u8_t *tx, u8_t *rx)
DECL|ll_phy_req_send|function|u32_t ll_phy_req_send(u16_t handle, u8_t tx, u8_t flags, u8_t rx)
DECL|ll_radio_state_abort|function|void ll_radio_state_abort(void)
DECL|ll_radio_state_is_idle|function|u32_t ll_radio_state_is_idle(void)
DECL|ll_reset|function|void ll_reset(void)
DECL|ll_start_enc_req_send|function|u32_t ll_start_enc_req_send(u16_t handle, u8_t error_code, u8_t const *const ltk)
DECL|ll_terminate_ind_send|function|u32_t ll_terminate_ind_send(u16_t handle, u8_t reason)
DECL|ll_version_ind_send|function|u32_t ll_version_ind_send(u16_t handle)
DECL|mayfly_radio_active|function|static void mayfly_radio_active(void *params)
DECL|mayfly_radio_inactive|function|static void mayfly_radio_inactive(void *params)
DECL|mayfly_radio_stop|function|static void mayfly_radio_stop(void *params)
DECL|mayfly_sched_after_mstr_free_offset_get|function|static void mayfly_sched_after_mstr_free_offset_get(void *params)
DECL|mayfly_sched_free_win_offset_calc|function|static void mayfly_sched_free_win_offset_calc(void *params)
DECL|mayfly_sched_win_offset_select|function|static void mayfly_sched_win_offset_select(void *params)
DECL|mayfly_sched_win_offset_use|function|static void mayfly_sched_win_offset_use(void *params)
DECL|mayfly_xtal_retain|function|static void mayfly_xtal_retain(u8_t caller_id, u8_t retain)
DECL|mayfly_xtal_start|function|static void mayfly_xtal_start(void *params)
DECL|mayfly_xtal_stop_calc|function|static void mayfly_xtal_stop_calc(void *params)
DECL|mayfly_xtal_stop|function|static void mayfly_xtal_stop(void *params)
DECL|nirk|member|u8_t nirk;
DECL|packet_counter|member|u8_t packet_counter;
DECL|packet_data_octets_max|member|u16_t packet_data_octets_max;
DECL|packet_release_first|member|u8_t packet_release_first;
DECL|packet_release_last|member|u8_t volatile packet_release_last;
DECL|packet_rx_acquired_count_get|function|static u8_t packet_rx_acquired_count_get(void)
DECL|packet_rx_acquire|member|u8_t packet_rx_acquire;
DECL|packet_rx_allocate|function|static void packet_rx_allocate(u8_t max)
DECL|packet_rx_callback|function|static void packet_rx_callback(void)
DECL|packet_rx_count|member|u8_t packet_rx_count;
DECL|packet_rx_data_count|member|u8_t packet_rx_data_count;
DECL|packet_rx_data_pool_size|member|u16_t packet_rx_data_pool_size;
DECL|packet_rx_data_size|member|u16_t packet_rx_data_size;
DECL|packet_rx_enqueue|function|static void packet_rx_enqueue(void)
DECL|packet_rx_last|member|u8_t volatile packet_rx_last;
DECL|packet_rx_reserve_get|function|static struct radio_pdu_node_rx *packet_rx_reserve_get(u8_t count)
DECL|packet_rx|member|struct radio_pdu_node_rx **packet_rx;
DECL|packet_tx_count|member|u8_t packet_tx_count;
DECL|packet_tx_data_size|member|u16_t packet_tx_data_size;
DECL|packet_tx_enqueue|function|static void packet_tx_enqueue(u8_t max)
DECL|packet_tx_first|member|u8_t volatile packet_tx_first;
DECL|packet_tx_last|member|u8_t packet_tx_last;
DECL|pause_enc_rsp_send|function|static void pause_enc_rsp_send(struct connection *conn)
DECL|pdu_node_tx_release|function|static void pdu_node_tx_release(u16_t handle,struct radio_pdu_node_tx *node_tx)
DECL|phy_p|member|u8_t phy_p:3;
DECL|phy_rsp_send|function|static void phy_rsp_send(struct connection *conn)
DECL|phy_upd_ind|function|static inline u32_t phy_upd_ind(struct radio_pdu_node_rx *radio_pdu_node_rx,u8_t *rx_enqueue)
DECL|phy|member|u8_t phy:3;
DECL|ping_resp_send|function|static void ping_resp_send(struct connection *conn)
DECL|pkt_release|member|struct pdu_data_q_tx *pkt_release;
DECL|pkt_rx_data_free|member|void *pkt_rx_data_free;
DECL|pkt_rx_data_pool|member|void *pkt_rx_data_pool;
DECL|pkt_tx_ctrl_free|member|void *pkt_tx_ctrl_free;
DECL|pkt_tx_ctrl_pool|member|void *pkt_tx_ctrl_pool;
DECL|pkt_tx_data_free|member|void *pkt_tx_data_free;
DECL|pkt_tx_data_pool|member|void *pkt_tx_data_pool;
DECL|pkt_tx|member|struct pdu_data_q_tx *pkt_tx;
DECL|preempt_calc|function|static u32_t preempt_calc(struct shdr *hdr, u8_t ticker_id, u32_t ticks_at_expire)
DECL|prepare_normal_set|function|static void prepare_normal_set(struct shdr *hdr, u8_t ticker_user_id, u8_t ticker_id)
DECL|prepare_normal|function|static void prepare_normal(u32_t status, void *op_context)
DECL|prepare_pdu_data_tx|function|static void prepare_pdu_data_tx(struct connection *conn,struct pdu_data **pdu_data_tx)
DECL|prepare_reduced|function|static void prepare_reduced(u32_t status, void *op_context)
DECL|radio_adv_data_get|function|struct radio_adv_data *radio_adv_data_get(void)
DECL|radio_adv_disable|function|u32_t radio_adv_disable(void)
DECL|radio_adv_enable|function|u32_t radio_adv_enable(u8_t phy_p, u16_t interval, u8_t chl_map, u8_t filter_policy) #else /* !CONFIG_BLUETOOTH_CONTROLLER_ADV_EXT */ u32_t radio_adv_enable(u16_t interval, u8_t chl_map, u8_t filter_policy) #endif /* !CONFIG_BLUETOOTH_CONTROLLER_ADV_EXT */
DECL|radio_adv_filter_pol_get|function|u32_t radio_adv_filter_pol_get(void)
DECL|radio_adv_is_enabled|function|u32_t radio_adv_is_enabled(void)
DECL|radio_connect_enable|function|u32_t radio_connect_enable(u8_t adv_addr_type, u8_t *adv_addr, u16_t interval, u16_t latency, u16_t timeout)
DECL|radio_event_adv_prepare|function|void radio_event_adv_prepare(u32_t ticks_at_expire, u32_t remainder, u16_t lazy, void *context)
DECL|radio_init|function|u32_t radio_init(void *hf_clock, u8_t sca, u8_t connection_count_max, u8_t rx_count_max, u8_t tx_count_max, u16_t packet_data_octets_max, u16_t packet_tx_data_size, u8_t *mem_radio, u16_t mem_size)
DECL|radio_rx_dequeue|function|void radio_rx_dequeue(void)
DECL|radio_rx_fc_get|function|u8_t radio_rx_fc_get(u16_t *handle)
DECL|radio_rx_fc_set|function|u8_t radio_rx_fc_set(u16_t handle, u8_t fc)
DECL|radio_rx_get|function|u8_t radio_rx_get(struct radio_pdu_node_rx **radio_pdu_node_rx, u16_t *handle)
DECL|radio_rx_mem_release|function|void radio_rx_mem_release(struct radio_pdu_node_rx **radio_pdu_node_rx)
DECL|radio_scan_data_get|function|struct radio_adv_data *radio_scan_data_get(void)
DECL|radio_scan_disable|function|u32_t radio_scan_disable(void)
DECL|radio_scan_enable|function|u32_t radio_scan_enable(u8_t type, u8_t init_addr_type, u8_t *init_addr,u16_t interval, u16_t window, u8_t filter_policy)
DECL|radio_scan_filter_pol_get|function|u32_t radio_scan_filter_pol_get(void)
DECL|radio_scan_is_enabled|function|u32_t radio_scan_is_enabled(void)
DECL|radio_ticks_active_to_start_set|function|void radio_ticks_active_to_start_set(u32_t ticks_active_to_start)
DECL|radio_tx_mem_acquire|function|struct radio_pdu_node_tx *radio_tx_mem_acquire(void)
DECL|radio_tx_mem_enqueue|function|u32_t radio_tx_mem_enqueue(u16_t handle, struct radio_pdu_node_tx *node_tx)
DECL|radio_tx_mem_release|function|void radio_tx_mem_release(struct radio_pdu_node_tx *node_tx)
DECL|reject_ind_ext_send|function|static void reject_ind_ext_send(struct connection *conn,u8_t reject_opcode, u8_t error_code)
DECL|remainder_anchor|member|u32_t remainder_anchor;
DECL|rfu|member|u8_t rfu:4;
DECL|rfu|member|u8_t rfu:4;
DECL|role_active_disable|function|static inline void role_active_disable(u8_t ticker_id_stop, u32_t ticks_xtal_to_start, u32_t ticks_active_to_start)
DECL|role_disable|function|static u32_t role_disable(u8_t ticker_id_primary, u8_t ticker_id_stop)
DECL|role|enum|enum role {
DECL|role|member|enum role volatile role;
DECL|rx_fc_lock|function|static void rx_fc_lock(u16_t handle)
DECL|rx_packet_set|function|static void rx_packet_set(struct connection *conn, struct pdu_data *pdu_data_rx)
DECL|scan_data|member|struct radio_adv_data scan_data;
DECL|scanner|member|struct scanner scanner;
DECL|scanner|struct|struct scanner {
DECL|sca|member|u8_t sca;
DECL|sched_after_mstr_free_offset_get|function|static void sched_after_mstr_free_offset_get(u16_t conn_interval, u32_t ticks_slot, u32_t ticks_anchor, u32_t *win_offset_us)
DECL|sched_after_mstr_free_slot_get|function|static void sched_after_mstr_free_slot_get(u8_t user_id, u32_t ticks_slot_abs, u32_t *ticks_anchor, u32_t *us_offset)
DECL|sched_free_win_offset_calc|function|static void sched_free_win_offset_calc(struct connection *conn_curr, u8_t is_select, u32_t *ticks_to_offset_next, u16_t conn_interval, u8_t *offset_max,
DECL|start_enc_rsp_send|function|static void start_enc_rsp_send(struct connection *conn, struct pdu_data *pdu_ctrl_tx)
DECL|state|enum|enum state {
DECL|state|member|enum state state;
DECL|state|member|u8_t state:1;
DECL|terminate_ind_rx_enqueue|function|static void terminate_ind_rx_enqueue(struct connection *conn, u8_t reason)
DECL|ticker_id_event|member|u8_t volatile ticker_id_event;
DECL|ticker_id_prepare|member|u8_t volatile ticker_id_prepare;
DECL|ticker_id_stop|member|u8_t volatile ticker_id_stop;
DECL|ticker_if_done|function|static void ticker_if_done(u32_t status, void *ops_context)
DECL|ticker_job_disable|function|static void ticker_job_disable(u32_t status, void *op_context)
DECL|ticker_op_latency_cancelled|function|static void ticker_op_latency_cancelled(u32_t ticker_status, void *params)
DECL|ticker_stop_adv_assert|function|static void ticker_stop_adv_assert(u32_t status, void *params)
DECL|ticker_stop_scan_assert|function|static void ticker_stop_scan_assert(u32_t status, void *params)
DECL|ticker_success_assert|function|static void ticker_success_assert(u32_t status, void *params)
DECL|ticker_update_adv_assert|function|static void ticker_update_adv_assert(u32_t status, void *params)
DECL|ticker_update_slave_assert|function|static void ticker_update_slave_assert(u32_t status, void *params)
DECL|ticks_active_to_start|member|u32_t ticks_active_to_start;
DECL|ticks_anchor|member|u32_t ticks_anchor;
DECL|ticks_conn_slot|member|u32_t ticks_conn_slot;
DECL|ticks_window|member|u32_t ticks_window;
DECL|tx_cmplt_get|function|static u8_t tx_cmplt_get(u16_t *handle, u8_t *first, u8_t last)
DECL|tx_packet_set|function|static void tx_packet_set(struct connection *conn, struct pdu_data *pdu_data_tx)
DECL|type|member|u8_t type:1;
DECL|unknown_rsp_send|function|static void unknown_rsp_send(struct connection *conn, u8_t type)
DECL|version_ind_send|function|static void version_ind_send(struct connection *conn)
DECL|win_offset_us|member|u32_t win_offset_us;
