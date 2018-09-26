DECL|CONNECTION_T_SIZE|macro|CONNECTION_T_SIZE
DECL|LLCP_CHAN_MAP|enumerator|LLCP_CHAN_MAP,
DECL|LLCP_CONNECTION_PARAM_REQ|enumerator|LLCP_CONNECTION_PARAM_REQ,
DECL|LLCP_CONN_UPD|enumerator|LLCP_CONN_UPD,
DECL|LLCP_CPR_STATE_APP_REQ|enumerator|LLCP_CPR_STATE_APP_REQ,
DECL|LLCP_CPR_STATE_APP_WAIT|enumerator|LLCP_CPR_STATE_APP_WAIT,
DECL|LLCP_CPR_STATE_REQ|enumerator|LLCP_CPR_STATE_REQ,
DECL|LLCP_CPR_STATE_RSP_WAIT|enumerator|LLCP_CPR_STATE_RSP_WAIT,
DECL|LLCP_CPR_STATE_RSP|enumerator|LLCP_CPR_STATE_RSP,
DECL|LLCP_CPR_STATE_UPD|enumerator|LLCP_CPR_STATE_UPD
DECL|LLCP_CUI_STATE_INPROG|enumerator|LLCP_CUI_STATE_INPROG,
DECL|LLCP_CUI_STATE_SELECT|enumerator|LLCP_CUI_STATE_SELECT
DECL|LLCP_CUI_STATE_USE|enumerator|LLCP_CUI_STATE_USE,
DECL|LLCP_ENCRYPTION|enumerator|LLCP_ENCRYPTION,
DECL|LLCP_FEATURE_EXCHANGE|enumerator|LLCP_FEATURE_EXCHANGE,
DECL|LLCP_LENGTH_STATE_ACK_WAIT|macro|LLCP_LENGTH_STATE_ACK_WAIT
DECL|LLCP_LENGTH_STATE_REQ|macro|LLCP_LENGTH_STATE_REQ
DECL|LLCP_LENGTH_STATE_RESIZE|macro|LLCP_LENGTH_STATE_RESIZE
DECL|LLCP_LENGTH_STATE_RSP_WAIT|macro|LLCP_LENGTH_STATE_RSP_WAIT
DECL|LLCP_NONE|enumerator|LLCP_NONE,
DECL|LLCP_PHY_STATE_ACK_WAIT|macro|LLCP_PHY_STATE_ACK_WAIT
DECL|LLCP_PHY_STATE_REQ|macro|LLCP_PHY_STATE_REQ
DECL|LLCP_PHY_STATE_RSP_WAIT|macro|LLCP_PHY_STATE_RSP_WAIT
DECL|LLCP_PHY_STATE_UPD|macro|LLCP_PHY_STATE_UPD
DECL|LLCP_PHY_UPD|enumerator|LLCP_PHY_UPD,
DECL|LLCP_PING|enumerator|LLCP_PING,
DECL|LLCP_VERSION_EXCHANGE|enumerator|LLCP_VERSION_EXCHANGE,
DECL|LL_MEM_CONN|macro|LL_MEM_CONN
DECL|LL_MEM_RXQ|macro|LL_MEM_RXQ
DECL|LL_MEM_RX_LINK_POOL|macro|LL_MEM_RX_LINK_POOL
DECL|LL_MEM_RX_POOL_SZ|macro|LL_MEM_RX_POOL_SZ
DECL|LL_MEM_TOTAL|macro|LL_MEM_TOTAL
DECL|LL_MEM_TXQ|macro|LL_MEM_TXQ
DECL|LL_MEM_TX_CTRL_POOL|macro|LL_MEM_TX_CTRL_POOL
DECL|LL_MEM_TX_DATA_POOL|macro|LL_MEM_TX_DATA_POOL
DECL|PACKET_MEM_COUNT_TX_CTRL|macro|PACKET_MEM_COUNT_TX_CTRL
DECL|PACKET_RX_DATA_SIZE_MIN|macro|PACKET_RX_DATA_SIZE_MIN
DECL|PACKET_TX_CTRL_SIZE_MIN|macro|PACKET_TX_CTRL_SIZE_MIN
DECL|PDU_AC_SIZE_EXTRA|macro|PDU_AC_SIZE_EXTRA
DECL|PDU_AC_SIZE_EXTRA|macro|PDU_AC_SIZE_EXTRA
DECL|access_addr|member|u8_t access_addr[4];
DECL|ack|member|u8_t ack;
DECL|ack|member|u8_t ack;
DECL|ack|member|u8_t ack;
DECL|ack|member|u8_t ack;
DECL|appto_expire|member|u16_t appto_expire;
DECL|appto_reload|member|u16_t appto_reload;
DECL|apto_expire|member|u16_t apto_expire;
DECL|apto_reload|member|u16_t apto_reload;
DECL|ccm_rx|member|struct ccm ccm_rx;
DECL|ccm_tx|member|struct ccm ccm_tx;
DECL|chan_map|member|} chan_map;
DECL|chm_update|member|u8_t chm_update;
DECL|chm|member|u8_t chm[5];
DECL|cmd|member|u8_t cmd:1;
DECL|cmd|member|u8_t cmd:1;
DECL|cmd|member|u8_t cmd:1;
DECL|common|member|} common;
DECL|company_id|member|u16_t company_id;
DECL|conn_interval|member|u16_t conn_interval;
DECL|conn_upd|member|} conn_upd;
DECL|connect_expire|member|u16_t connect_expire;
DECL|connection|struct|struct connection {
DECL|crc_init|member|u8_t crc_init[3];
DECL|data_chan_count|member|u8_t data_chan_count:6;
DECL|data_chan_hop|member|u8_t data_chan_hop;
DECL|data_chan_id|member|u16_t data_chan_id;
DECL|data_chan_map|member|u8_t data_chan_map[5];
DECL|data_chan_sel|member|u8_t data_chan_sel:1;
DECL|data_chan_use|member|u8_t data_chan_use;
DECL|default_tx_octets|member|u16_t default_tx_octets;
DECL|default_tx_time|member|u16_t default_tx_time;
DECL|disabled|member|u8_t disabled:1;
DECL|ediv|member|u8_t ediv[2];
DECL|empty|member|u8_t empty:1;
DECL|enc_rx|member|u8_t enc_rx:1;
DECL|enc_tx|member|u8_t enc_tx:1;
DECL|encryption|member|} encryption;
DECL|error_code|member|u8_t error_code;
DECL|event_counter|member|u16_t event_counter;
DECL|fex_valid|member|u8_t fex_valid:1;
DECL|fex_valid|member|u8_t fex_valid:1;
DECL|fex_valid|member|u8_t fex_valid:1;
DECL|flags|member|u8_t flags:1;
DECL|force|member|u32_t force;
DECL|handle|member|u16_t handle;
DECL|handle|member|u16_t handle;
DECL|hdr|member|struct radio_pdu_node_rx_hdr hdr;
DECL|hdr|member|struct shdr hdr;
DECL|initiate|member|u8_t initiate:1;
DECL|initiate|member|u8_t initiate;
DECL|initiate|member|u8_t initiate;
DECL|instant|member|u16_t instant;
DECL|instant|member|u16_t instant;
DECL|instant|member|u16_t instant;
DECL|interval|member|u16_t interval;
DECL|interval|member|u16_t interval;
DECL|is_internal|member|u8_t is_internal:1;
DECL|latency_cancel|member|u8_t latency_cancel:1;
DECL|latency_enabled|member|u8_t latency_enabled:1;
DECL|latency_event|member|u16_t latency_event;
DECL|latency_prepare|member|u16_t latency_prepare;
DECL|latency|member|u16_t latency;
DECL|latency|member|u16_t latency;
DECL|latency|member|u16_t latency;
DECL|llcp_ack|member|u8_t llcp_ack;
DECL|llcp_conn_param|member|} llcp_conn_param;
DECL|llcp_features|member|u32_t llcp_features;
DECL|llcp_length|member|} llcp_length;
DECL|llcp_phy|member|} llcp_phy;
DECL|llcp_req|member|u8_t llcp_req;
DECL|llcp_terminate|member|} llcp_terminate;
DECL|llcp_type|member|enum llcp llcp_type;
DECL|llcp_version|member|} llcp_version;
DECL|llcp|enum|enum llcp {
DECL|llcp|member|} llcp;
DECL|ltk|member|u8_t ltk[16];
DECL|master|member|} master;
DECL|max_rx_octets|member|u16_t max_rx_octets;
DECL|max_rx_time|member|u16_t max_rx_time;
DECL|max_tx_octets|member|u16_t max_tx_octets;
DECL|max_tx_time|member|u16_t max_tx_time;
DECL|nesn|member|u8_t nesn:1;
DECL|node_tx|member|struct radio_pdu_node_tx *node_tx;
DECL|offset0|member|u16_t offset0;
DECL|offset1|member|u16_t offset1;
DECL|offset2|member|u16_t offset2;
DECL|offset3|member|u16_t offset3;
DECL|offset4|member|u16_t offset4;
DECL|offset5|member|u16_t offset5;
DECL|packet_tx_head_len|member|u8_t packet_tx_head_len;
DECL|packet_tx_head_offset|member|u8_t packet_tx_head_offset;
DECL|pause_rx|member|u8_t pause_rx:1;
DECL|pause_tx|member|u8_t pause_tx:1;
DECL|pause_tx|member|u8_t pause_tx:1;
DECL|pdu_data_q_tx|struct|struct pdu_data_q_tx {
DECL|pdu_win_offset0|member|u16_t *pdu_win_offset0;
DECL|pdu_win_offset|member|u16_t *pdu_win_offset;
DECL|phy_flags|member|u8_t phy_flags:1;
DECL|phy_pref_flags|member|u8_t phy_pref_flags:1;
DECL|phy_pref_rx|member|u8_t phy_pref_rx:3;
DECL|phy_pref_tx|member|u8_t phy_pref_tx:3;
DECL|phy_rx|member|u8_t phy_rx:3;
DECL|phy_tx_time|member|u8_t phy_tx_time:3;
DECL|phy_tx|member|u8_t phy_tx:3;
DECL|phy_upd_ind|member|} phy_upd_ind;
DECL|pkt_tx_ctrl_last|member|struct radio_pdu_node_tx *pkt_tx_ctrl_last;
DECL|pkt_tx_ctrl|member|struct radio_pdu_node_tx *pkt_tx_ctrl;
DECL|pkt_tx_data|member|struct radio_pdu_node_tx *pkt_tx_data;
DECL|pkt_tx_head|member|struct radio_pdu_node_tx *pkt_tx_head;
DECL|pkt_tx_last|member|struct radio_pdu_node_tx *pkt_tx_last;
DECL|preferred_periodicity|member|u8_t preferred_periodicity;
DECL|procedure_expire|member|u16_t procedure_expire;
DECL|procedure_reload|member|u16_t procedure_reload;
DECL|radio_pdu_node_rx|member|} radio_pdu_node_rx;
DECL|rand|member|u8_t rand[8];
DECL|reason_own|member|u8_t reason_own;
DECL|reason_peer|member|u8_t reason_peer;
DECL|reason|member|u8_t reason;
DECL|reference_conn_event_count|member|u16_t reference_conn_event_count;
DECL|refresh|member|u8_t refresh:1;
DECL|req|member|u8_t req;
DECL|req|member|u8_t req;
DECL|req|member|u8_t req;
DECL|req|member|u8_t req;
DECL|reserved|member|u8_t reserved:5;
DECL|rfu|member|u8_t rfu:4;
DECL|role|member|u8_t role:1;
DECL|rssi_latest|member|u8_t rssi_latest;
DECL|rssi_reported|member|u8_t rssi_reported;
DECL|rssi_sample_count|member|u8_t rssi_sample_count;
DECL|rx_octets|member|u16_t rx_octets;
DECL|rx_time|member|u16_t rx_time;
DECL|rx|member|u8_t rx:1;
DECL|rx|member|u8_t rx:3;
DECL|rx|member|u8_t rx:3;
DECL|sca|member|u8_t sca:3;
DECL|shdr|struct|struct shdr {
DECL|skd|member|u8_t skd[16];
DECL|slave|member|} slave;
DECL|sn|member|u8_t sn:1;
DECL|state|member|u8_t state:2;
DECL|state|member|u8_t state:2;
DECL|state|member|} state:2 __packed;
DECL|state|member|} state:3 __packed;
DECL|status|member|u8_t status;
DECL|sub_version_number|member|u16_t sub_version_number;
DECL|supervision_expire|member|u16_t supervision_expire;
DECL|supervision_reload|member|u16_t supervision_reload;
DECL|terminate_ack|member|u8_t terminate_ack:1;
DECL|ticks_active_to_start|member|u32_t ticks_active_to_start;
DECL|ticks_anchor|member|u32_t ticks_anchor;
DECL|ticks_preempt_to_start|member|u32_t ticks_preempt_to_start;
DECL|ticks_ref|member|u32_t ticks_ref;
DECL|ticks_slot|member|u32_t ticks_slot;
DECL|ticks_to_offset_next|member|u32_t ticks_to_offset_next;
DECL|ticks_to_offset|member|u32_t ticks_to_offset;
DECL|ticks_xtal_to_start|member|u32_t ticks_xtal_to_start;
DECL|timeout|member|u16_t timeout;
DECL|timeout|member|u16_t timeout;
DECL|tx_octets|member|u16_t tx_octets;
DECL|tx_time|member|u16_t tx_time;
DECL|tx|member|u8_t tx:1;
DECL|tx|member|u8_t tx:3;
DECL|tx|member|u8_t tx:3;
DECL|version_number|member|u8_t version_number;
DECL|win_offset_us|member|u32_t win_offset_us;
DECL|win_size|member|u8_t win_size;
DECL|window_size_event_us|member|u32_t window_size_event_us;
DECL|window_size_prepare_us|member|u32_t window_size_prepare_us;
DECL|window_widening_event_us|member|u32_t window_widening_event_us;
DECL|window_widening_max_us|member|u32_t window_widening_max_us;
DECL|window_widening_periodic_us|member|u32_t window_widening_periodic_us;
DECL|window_widening_prepare_us|member|u32_t window_widening_prepare_us;
