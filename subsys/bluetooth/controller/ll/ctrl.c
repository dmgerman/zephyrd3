DECL|FAST_ENC_PROCEDURE|macro|FAST_ENC_PROCEDURE
DECL|OFFSET_M_MAX|macro|OFFSET_M_MAX
DECL|OFFSET_S_MAX|macro|OFFSET_S_MAX
DECL|QUICK_FIX_EXTRA_WINDOW|macro|QUICK_FIX_EXTRA_WINDOW
DECL|QUICK_FIX_EXTRA_WINDOW|macro|QUICK_FIX_EXTRA_WINDOW
DECL|RADIO_CONN_EVENTS|macro|RADIO_CONN_EVENTS
DECL|RADIO_DEFERRED_PREEMPT|macro|RADIO_DEFERRED_PREEMPT
DECL|RADIO_DEFERRED_PREEMPT|macro|RADIO_DEFERRED_PREEMPT
DECL|RADIO_HCTO_US|macro|RADIO_HCTO_US
DECL|RADIO_IRK_COUNT_MAX|macro|RADIO_IRK_COUNT_MAX
DECL|RADIO_PHY_ADV|macro|RADIO_PHY_ADV
DECL|RADIO_PHY_CONN|macro|RADIO_PHY_CONN
DECL|RADIO_PREAMBLE_TO_ADDRESS_US|macro|RADIO_PREAMBLE_TO_ADDRESS_US
DECL|RADIO_RSSI_SAMPLE_COUNT|macro|RADIO_RSSI_SAMPLE_COUNT
DECL|RADIO_RSSI_THRESHOLD|macro|RADIO_RSSI_THRESHOLD
DECL|RADIO_TICKER_JITTER_US|macro|RADIO_TICKER_JITTER_US
DECL|RADIO_TICKER_PREEMPT_PART_MAX_US|macro|RADIO_TICKER_PREEMPT_PART_MAX_US
DECL|RADIO_TICKER_PREEMPT_PART_MIN_US|macro|RADIO_TICKER_PREEMPT_PART_MIN_US
DECL|RADIO_TICKER_PREEMPT_PART_US|macro|RADIO_TICKER_PREEMPT_PART_US
DECL|RADIO_TICKER_START_PART_US|macro|RADIO_TICKER_START_PART_US
DECL|RADIO_TICKER_XTAL_OFFSET_US|macro|RADIO_TICKER_XTAL_OFFSET_US
DECL|ROLE_ADV|enumerator|ROLE_ADV,
DECL|ROLE_MASTER|enumerator|ROLE_MASTER,
DECL|ROLE_NONE|enumerator|ROLE_NONE,
DECL|ROLE_OBS|enumerator|ROLE_OBS,
DECL|ROLE_SLAVE|enumerator|ROLE_SLAVE,
DECL|SCHED_ADVANCED|macro|SCHED_ADVANCED
DECL|SILENT_CONNECTION|macro|SILENT_CONNECTION
DECL|STATE_ABORT|enumerator|STATE_ABORT,
DECL|STATE_CLOSE|enumerator|STATE_CLOSE,
DECL|STATE_NONE|enumerator|STATE_NONE,
DECL|STATE_RX|enumerator|STATE_RX,
DECL|STATE_STOP|enumerator|STATE_STOP,
DECL|STATE_TX|enumerator|STATE_TX,
DECL|XTAL_ADVANCED|macro|XTAL_ADVANCED
DECL|_radio|variable|_radio
DECL|access_addr_get|function|static uint32_t access_addr_get(void)
DECL|adv_addr_type|member|uint8_t adv_addr_type:1;
DECL|adv_addr|member|uint8_t adv_addr[BDADDR_SIZE];
DECL|adv_data|member|struct radio_adv_data adv_data;
DECL|adv_obs_configure|function|static void adv_obs_configure(uint8_t phy)
DECL|adv_obs_conn_configure|function|static void adv_obs_conn_configure(uint8_t phy)
DECL|adv_scan_disable|function|static uint32_t adv_scan_disable(uint8_t ticker_id_primary, uint8_t ticker_id_stop, uint32_t ticks_xtal_to_start, uint32_t ticks_active_to_start)
DECL|adv_setup|function|static void adv_setup(void)
DECL|advertiser|member|struct advertiser advertiser;
DECL|advertiser|struct|struct advertiser {
DECL|channel_calc|function|static uint8_t channel_calc(uint8_t *channel_use, uint8_t hop, uint16_t latency, uint8_t *channel_map, uint8_t channel_count)
DECL|channel_map_update|function|static uint32_t channel_map_update(struct connection *conn, struct pdu_data *pdu_data_rx)
DECL|channel_set|function|static void channel_set(uint32_t channel)
DECL|chl_map_current|member|uint8_t chl_map_current:3;
DECL|chl_map|member|uint8_t chl_map:3;
DECL|conn_curr|member|struct connection *conn_curr;
DECL|conn_free|member|void *conn_free;
DECL|conn_interval|member|uint16_t conn_interval;
DECL|conn_latency|member|uint16_t conn_latency;
DECL|conn_pool|member|void *conn_pool;
DECL|conn_timeout|member|uint16_t conn_timeout;
DECL|conn_update_req|function|static uint32_t conn_update_req(struct connection *conn)
DECL|conn_update|function|static uint32_t conn_update(struct connection *conn, struct pdu_data *pdu_data_rx)
DECL|conn_upd|member|struct connection *conn_upd;
DECL|connection_configure|function|static void connection_configure(struct connection *conn)
DECL|connection_count|member|uint8_t connection_count;
DECL|connection_get|function|static struct connection *connection_get(uint16_t handle)
DECL|connection_release|function|static void connection_release(struct connection *conn)
DECL|conn|member|struct connection *conn;
DECL|conn|member|struct connection *conn;
DECL|crc_expire|member|uint8_t crc_expire;
DECL|ctrl_tx_enqueue|function|static void ctrl_tx_enqueue(struct connection *conn, struct radio_pdu_node_tx *node_tx)
DECL|data_channel_count|member|uint8_t data_channel_count;
DECL|data_channel_map|member|uint8_t data_channel_map[5];
DECL|do_adv_scan_disable|function|static inline void do_adv_scan_disable(uint8_t ticker_id_stop, uint32_t ticks_xtal_to_start, uint32_t ticks_active_to_start)
DECL|do_radio_rx_fc_set|function|uint8_t do_radio_rx_fc_set(uint16_t handle, uint8_t req,uint8_t ack)
DECL|empty_tx_enqueue|function|static struct pdu_data *empty_tx_enqueue(struct connection *conn)
DECL|enc_req_reused_send|function|static void enc_req_reused_send(struct connection *conn,struct radio_pdu_node_tx *node_tx)
DECL|enc_rsp_send|function|static void enc_rsp_send(struct connection *conn)
DECL|event_active|function|static void event_active(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|event_adv_stop|function|void event_adv_stop(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|event_adv|function|static void event_adv(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|event_ch_map_prep|function|static inline void event_ch_map_prep(struct connection *conn, uint16_t event_counter)
DECL|event_common_prepare|function|static void event_common_prepare(uint32_t ticks_at_expire, uint32_t remainder, uint32_t *ticks_xtal_to_start, uint32_t *ticks_active_to_start, uint32_t ticks_preempt_to_start,
DECL|event_conn_update_prep|function|static inline uint32_t event_conn_update_prep(struct connection *conn, uint16_t event_counter, uint32_t ticks_at_expire)
DECL|event_conn_update_st_init|function|static inline void event_conn_update_st_init(struct connection *conn, uint16_t event_counter, struct pdu_data *pdu_ctrl_tx, uint32_t ticks_at_expire, struct work *work_sched_offset,
DECL|event_conn_update_st_req|function|static inline void event_conn_update_st_req(struct connection *conn, uint16_t event_counter, struct pdu_data *pdu_ctrl_tx, uint32_t ticks_at_expire, struct work *work_sched_offset)
DECL|event_conn_update_st_rsp|function|static inline void event_conn_update_st_rsp(struct connection *conn, struct pdu_data *pdu_ctrl_tx)
DECL|event_connection_prepare|function|static void event_connection_prepare(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, struct connection *conn)
DECL|event_enc_prep|function|static inline void event_enc_prep(struct connection *conn)
DECL|event_fex_prep|function|static inline void event_fex_prep(struct connection *conn)
DECL|event_inactive|function|static void event_inactive(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|event_len_prep|function|static inline void event_len_prep(struct connection *conn)
DECL|event_master_prepare|function|static void event_master_prepare(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|event_master|function|static void event_master(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|event_obs_prepare|function|static void event_obs_prepare(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|event_obs|function|static void event_obs(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|event_ping_prep|function|static inline void event_ping_prep(struct connection *conn)
DECL|event_slave_prepare|function|static void event_slave_prepare(uint32_t ticks_at_expire, uint32_t remainder,uint16_t lazy, void *context)
DECL|event_slave|function|static void event_slave(uint32_t ticks_at_expire, uint32_t remainder,uint16_t lazy, void *context)
DECL|event_stop|function|static void event_stop(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|event_vex_prep|function|static inline void event_vex_prep(struct connection *conn)
DECL|event_xtal|function|static void event_xtal(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|fc_ack|member|uint8_t fc_ack;
DECL|fc_ena|member|uint8_t fc_ena;
DECL|fc_handle|member|uint16_t fc_handle[TRIPLE_BUFFER_SIZE];
DECL|fc_req|member|uint8_t volatile fc_req;
DECL|feature_rsp_send|function|static void feature_rsp_send(struct connection *conn)
DECL|filter_addr_type_bitmask|member|uint8_t filter_addr_type_bitmask;
DECL|filter_addr_type_bitmask|member|uint8_t filter_addr_type_bitmask;
DECL|filter_addr_type_bitmask|member|uint8_t filter_addr_type_bitmask;
DECL|filter_bdaddr|member|uint8_t filter_bdaddr[8][BDADDR_SIZE];
DECL|filter_bdaddr|member|uint8_t filter_bdaddr[8][BDADDR_SIZE];
DECL|filter_bdaddr|member|uint8_t filter_bdaddr[8][BDADDR_SIZE];
DECL|filter_enable_bitmask|member|uint8_t filter_enable_bitmask;
DECL|filter_enable_bitmask|member|uint8_t filter_enable_bitmask;
DECL|filter_enable_bitmask|member|uint8_t filter_enable_bitmask;
DECL|filter_policy|member|uint8_t filter_policy:1;
DECL|filter_policy|member|uint8_t filter_policy:2;
DECL|gc_lookup_ppm|variable|gc_lookup_ppm
DECL|hdr|member|struct shdr hdr;
DECL|hdr|member|struct shdr hdr;
DECL|hf_clock|member|struct device *hf_clock;
DECL|init_addr_type|member|uint8_t init_addr_type:1;
DECL|init_addr|member|uint8_t init_addr[BDADDR_SIZE];
DECL|irk|member|uint8_t irk[RADIO_IRK_COUNT_MAX][16];
DECL|is_peer_compatible|function|static uint32_t is_peer_compatible(struct connection *conn)
DECL|isr_close_adv|function|static inline uint32_t isr_close_adv(void)
DECL|isr_close_conn|function|static inline void isr_close_conn(void)
DECL|isr_close_obs|function|static inline uint32_t isr_close_obs(void)
DECL|isr_radio_state_close|function|static inline void isr_radio_state_close(void)
DECL|isr_radio_state_rx|function|static inline void isr_radio_state_rx(uint8_t trx_done, uint8_t crc_ok, uint8_t devmatch_ok, uint8_t irkmatch_ok, uint8_t irkmatch_id, uint8_t rssi_ready)
DECL|isr_radio_state_tx|function|static inline void isr_radio_state_tx(void)
DECL|isr_rx_adv|function|static inline uint32_t isr_rx_adv(uint8_t devmatch_ok, uint8_t irkmatch_ok,uint8_t irkmatch_id, uint8_t rssi_ready)
DECL|isr_rx_conn_pkt_ack|function|static inline uint8_t isr_rx_conn_pkt_ack(struct pdu_data *pdu_data_tx, struct radio_pdu_node_tx **node_tx)
DECL|isr_rx_conn_pkt_ctrl_dle|function|static inline void isr_rx_conn_pkt_ctrl_dle(struct pdu_data *pdu_data_rx,uint8_t *rx_enqueue)
DECL|isr_rx_conn_pkt_ctrl_rej|function|isr_rx_conn_pkt_ctrl_rej(struct radio_pdu_node_rx *radio_pdu_node_rx, struct pdu_data *pdu_data_rx, uint8_t *rx_enqueue)
DECL|isr_rx_conn_pkt_ctrl|function|isr_rx_conn_pkt_ctrl(struct radio_pdu_node_rx *radio_pdu_node_rx, struct pdu_data *pdu_data_rx, uint8_t *rx_enqueue)
DECL|isr_rx_conn_pkt_release|function|static inline void isr_rx_conn_pkt_release(struct radio_pdu_node_tx *node_tx)
DECL|isr_rx_conn_pkt|function|isr_rx_conn_pkt(struct radio_pdu_node_rx *radio_pdu_node_rx,struct pdu_data *pdu_data_rx)
DECL|isr_rx_conn|function|static inline void isr_rx_conn(uint8_t crc_ok, uint8_t trx_done, uint8_t rssi_ready)
DECL|isr_rx_obs|function|static inline uint32_t isr_rx_obs(uint8_t irkmatch_id, uint8_t rssi_ready)
DECL|isr|function|static void isr(void)
DECL|length_resp_send|function|static void length_resp_send(struct connection *conn, uint16_t eff_rx_octets, uint16_t eff_tx_octets)
DECL|link_rx_data_quota|member|uint8_t link_rx_data_quota;
DECL|link_rx_free|member|void *link_rx_free;
DECL|link_rx_head|member|void *link_rx_head;
DECL|link_rx_pool|member|void *link_rx_pool;
DECL|link_rx_tail|member|void *volatile link_rx_tail;
DECL|nirk|member|uint8_t nirk;
DECL|observer|member|struct observer observer;
DECL|observer|struct|struct observer {
DECL|packet_counter|member|uint8_t packet_counter;
DECL|packet_data_octets_max|member|uint16_t packet_data_octets_max;
DECL|packet_release_first|member|uint8_t packet_release_first;
DECL|packet_release_last|member|uint8_t volatile packet_release_last;
DECL|packet_rx_acquired_count_get|function|static uint8_t packet_rx_acquired_count_get(void)
DECL|packet_rx_acquire|member|uint8_t packet_rx_acquire;
DECL|packet_rx_allocate|function|static void packet_rx_allocate(uint8_t max)
DECL|packet_rx_count|member|uint8_t packet_rx_count;
DECL|packet_rx_data_count|member|uint8_t packet_rx_data_count;
DECL|packet_rx_data_pool_size|member|uint16_t packet_rx_data_pool_size;
DECL|packet_rx_data_size|member|uint16_t packet_rx_data_size;
DECL|packet_rx_enqueue|function|static void packet_rx_enqueue(void)
DECL|packet_rx_last|member|uint8_t volatile packet_rx_last;
DECL|packet_rx_reserve_get|function|static struct radio_pdu_node_rx *packet_rx_reserve_get(uint8_t count)
DECL|packet_rx|member|struct radio_pdu_node_rx **packet_rx;
DECL|packet_tx_count|member|uint8_t packet_tx_count;
DECL|packet_tx_data_pool_size|member|uint16_t packet_tx_data_pool_size;
DECL|packet_tx_data_size|member|uint16_t packet_tx_data_size;
DECL|packet_tx_enqueue|function|static void packet_tx_enqueue(uint8_t max)
DECL|packet_tx_first|member|uint8_t volatile packet_tx_first;
DECL|packet_tx_last|member|uint8_t packet_tx_last;
DECL|pause_enc_rsp_send|function|static void pause_enc_rsp_send(struct connection *conn)
DECL|pdu_node_tx_release|function|static void pdu_node_tx_release(uint16_t handle,struct radio_pdu_node_tx *node_tx)
DECL|ping_resp_send|function|static void ping_resp_send(struct connection *conn)
DECL|pkt_release|member|struct pdu_data_q_tx *pkt_release;
DECL|pkt_rx_data_free|member|void *pkt_rx_data_free;
DECL|pkt_rx_data_pool|member|void *pkt_rx_data_pool;
DECL|pkt_tx_ctrl_free|member|void *pkt_tx_ctrl_free;
DECL|pkt_tx_ctrl_pool|member|void *pkt_tx_ctrl_pool;
DECL|pkt_tx_data_free|member|void *pkt_tx_data_free;
DECL|pkt_tx_data_pool|member|void *pkt_tx_data_pool;
DECL|pkt_tx|member|struct pdu_data_q_tx *pkt_tx;
DECL|preempt_calc|function|static uint32_t preempt_calc(struct shdr *hdr, uint8_t ticker_id, uint32_t ticks_at_expire)
DECL|prepare_normal_set|function|static void prepare_normal_set(struct shdr *hdr, uint8_t ticker_user_id, uint8_t ticker_id)
DECL|prepare_normal|function|static void prepare_normal(uint32_t status, void *op_context)
DECL|prepare_pdu_data_tx|function|static void prepare_pdu_data_tx(struct connection *conn,struct pdu_data **pdu_data_tx)
DECL|prepare_reduced|function|static void prepare_reduced(uint32_t status, void *op_context)
DECL|radio_adv_data_get|function|struct radio_adv_data *radio_adv_data_get(void)
DECL|radio_adv_disable|function|uint32_t radio_adv_disable(void)
DECL|radio_adv_enable|function|uint32_t radio_adv_enable(uint16_t interval, uint8_t chl_map, uint8_t filter_policy)
DECL|radio_chm_get|function|uint32_t radio_chm_get(uint16_t handle, uint8_t *chm)
DECL|radio_chm_update|function|uint32_t radio_chm_update(uint8_t *chm)
DECL|radio_conn_update|function|uint32_t radio_conn_update(uint16_t handle, uint8_t cmd, uint8_t status, uint16_t interval, uint16_t latency, uint16_t timeout)
DECL|radio_connect_disable|function|uint32_t radio_connect_disable(void)
DECL|radio_connect_enable|function|uint32_t radio_connect_enable(uint8_t adv_addr_type, uint8_t *adv_addr, uint16_t interval, uint16_t latency, uint16_t timeout)
DECL|radio_enc_req_send|function|uint32_t radio_enc_req_send(uint16_t handle, uint8_t *rand, uint8_t *ediv, uint8_t *ltk)
DECL|radio_event_adv_prepare|function|void radio_event_adv_prepare(uint32_t ticks_at_expire, uint32_t remainder, uint16_t lazy, void *context)
DECL|radio_feature_req_send|function|uint32_t radio_feature_req_send(uint16_t handle)
DECL|radio_filter_add|function|uint32_t radio_filter_add(uint8_t addr_type, uint8_t *addr)
DECL|radio_filter_clear|function|void radio_filter_clear(void)
DECL|radio_filter_remove|function|uint32_t radio_filter_remove(uint8_t addr_type, uint8_t *addr)
DECL|radio_init|function|uint32_t radio_init(void *hf_clock, uint8_t sca, uint8_t connection_count_max, uint8_t rx_count_max, uint8_t tx_count_max, uint16_t packet_data_octets_max, uint8_t *mem_radio, uint16_t mem_size)
DECL|radio_irk_add|function|uint32_t radio_irk_add(uint8_t *irk)
DECL|radio_irk_clear|function|void radio_irk_clear(void)
DECL|radio_length_req_send|function|uint32_t radio_length_req_send(uint16_t handle, uint16_t tx_octets)
DECL|radio_rx_dequeue|function|void radio_rx_dequeue(void)
DECL|radio_rx_fc_get|function|uint8_t radio_rx_fc_get(uint16_t *handle)
DECL|radio_rx_fc_set|function|uint8_t radio_rx_fc_set(uint16_t handle, uint8_t fc)
DECL|radio_rx_get|function|uint8_t radio_rx_get(struct radio_pdu_node_rx **radio_pdu_node_rx, uint16_t *handle)
DECL|radio_rx_mem_release|function|void radio_rx_mem_release(struct radio_pdu_node_rx **radio_pdu_node_rx)
DECL|radio_scan_data_get|function|struct radio_adv_data *radio_scan_data_get(void)
DECL|radio_scan_disable|function|uint32_t radio_scan_disable(void)
DECL|radio_scan_enable|function|uint32_t radio_scan_enable(uint8_t scan_type, uint8_t init_addr_type, uint8_t *init_addr, uint16_t interval, uint16_t window, uint8_t filter_policy)
DECL|radio_start_enc_req_send|function|uint32_t radio_start_enc_req_send(uint16_t handle, uint8_t error_code, uint8_t const *const ltk)
DECL|radio_terminate_ind_send|function|uint32_t radio_terminate_ind_send(uint16_t handle, uint8_t reason)
DECL|radio_ticks_active_to_start_set|function|void radio_ticks_active_to_start_set(uint32_t ticks_active_to_start)
DECL|radio_tx_mem_acquire|function|struct radio_pdu_node_tx *radio_tx_mem_acquire(void)
DECL|radio_tx_mem_enqueue|function|uint32_t radio_tx_mem_enqueue(uint16_t handle, struct radio_pdu_node_tx *node_tx)
DECL|radio_tx_mem_release|function|void radio_tx_mem_release(struct radio_pdu_node_tx *node_tx)
DECL|radio_version_ind_send|function|uint32_t radio_version_ind_send(uint16_t handle)
DECL|reject_ind_ext_send|function|static void reject_ind_ext_send(struct connection *conn,uint8_t reject_opcode, uint8_t error_code)
DECL|remainder_anchor|member|uint32_t remainder_anchor;
DECL|rfu0|member|uint8_t rfu0:1;
DECL|role|enum|enum role {
DECL|role|member|enum role volatile role;
DECL|rx_fc_lock|function|static void rx_fc_lock(uint16_t handle)
DECL|rx_packet_set|function|static void rx_packet_set(struct connection *conn, struct pdu_data *pdu_data_rx)
DECL|scan_channel|member|uint8_t scan_channel:2;
DECL|scan_data|member|struct radio_adv_data scan_data;
DECL|scan_state|member|uint8_t scan_state:1;
DECL|scan_type|member|uint8_t scan_type:1;
DECL|sca|member|uint8_t sca;
DECL|sched_after_master_free_offset_get|function|static void sched_after_master_free_offset_get(uint16_t conn_interval, uint32_t ticks_slot, uint32_t ticks_anchor, uint32_t *win_offset_us)
DECL|sched_after_master_free_slot_get|function|static void sched_after_master_free_slot_get(uint8_t user_id, uint32_t ticks_slot_abs, uint32_t *ticks_anchor, uint32_t *us_offset)
DECL|sched_free_win_offset_calc|function|static void sched_free_win_offset_calc(struct connection *conn_curr, uint8_t is_select, uint32_t *ticks_to_offset_next, uint16_t conn_interval, uint8_t *offset_max,
DECL|start_enc_rsp_send|function|static void start_enc_rsp_send(struct connection *conn, struct pdu_data *pdu_ctrl_tx)
DECL|state|enum|enum state {
DECL|state|member|enum state state;
DECL|terminate_ind_rx_enqueue|function|static void terminate_ind_rx_enqueue(struct connection *conn, uint8_t reason)
DECL|ticker_id_event|member|uint8_t volatile ticker_id_event;
DECL|ticker_id_prepare|member|uint8_t volatile ticker_id_prepare;
DECL|ticker_if_done|function|static void ticker_if_done(uint32_t status, void *ops_context)
DECL|ticker_job_disable|function|static void ticker_job_disable(uint32_t status, void *op_context)
DECL|ticker_op_latency_cancelled|function|static void ticker_op_latency_cancelled(uint32_t ticker_status, void *params)
DECL|ticker_success_assert|function|static void ticker_success_assert(uint32_t status, void *params)
DECL|ticks_active_to_start|member|uint32_t ticks_active_to_start;
DECL|ticks_anchor|member|uint32_t ticks_anchor;
DECL|ticks_conn_slot|member|uint32_t ticks_conn_slot;
DECL|ticks_window|member|uint32_t ticks_window;
DECL|tx_cmplt_get|function|static uint8_t tx_cmplt_get(uint16_t *handle, uint8_t *first, uint8_t last)
DECL|tx_packet_set|function|static void tx_packet_set(struct connection *conn, struct pdu_data *pdu_data_tx)
DECL|unknown_rsp_send|function|static void unknown_rsp_send(struct connection *conn, uint8_t type)
DECL|version_ind_send|function|static void version_ind_send(struct connection *conn)
DECL|win_offset_us|member|uint32_t win_offset_us;
DECL|work_radio_active|function|static void work_radio_active(void *params)
DECL|work_radio_inactive|function|static void work_radio_inactive(void *params)
DECL|work_radio_stop|function|static void work_radio_stop(void *params)
DECL|work_sched_after_master_free_offset_get|function|static void work_sched_after_master_free_offset_get(void *params)
DECL|work_sched_free_win_offset_calc|function|static void work_sched_free_win_offset_calc(void *params)
DECL|work_sched_win_offset_select|function|static void work_sched_win_offset_select(void *params)
DECL|work_sched_win_offset_use|function|static void work_sched_win_offset_use(void *params)
DECL|work_xtal_retain|function|static void work_xtal_retain(uint8_t retain)
DECL|work_xtal_start|function|static void work_xtal_start(void *params)
DECL|work_xtal_stop_calc|function|static void work_xtal_stop_calc(void *params)
DECL|work_xtal_stop|function|static void work_xtal_stop(void *params)
