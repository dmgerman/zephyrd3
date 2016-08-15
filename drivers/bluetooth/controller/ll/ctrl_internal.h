DECL|CONNECTION_T_SIZE|macro|CONNECTION_T_SIZE
DECL|LLCP_CHANNEL_MAP|enumerator|LLCP_CHANNEL_MAP,
DECL|LLCP_CONNECTION_UPDATE|enumerator|LLCP_CONNECTION_UPDATE,
DECL|LLCP_CONN_STATE_APP_WAIT|macro|LLCP_CONN_STATE_APP_WAIT
DECL|LLCP_CONN_STATE_INITIATE|macro|LLCP_CONN_STATE_INITIATE
DECL|LLCP_CONN_STATE_INPROG|macro|LLCP_CONN_STATE_INPROG
DECL|LLCP_CONN_STATE_REQ|macro|LLCP_CONN_STATE_REQ
DECL|LLCP_CONN_STATE_RSP_WAIT|macro|LLCP_CONN_STATE_RSP_WAIT
DECL|LLCP_CONN_STATE_RSP|macro|LLCP_CONN_STATE_RSP
DECL|LLCP_ENCRYPTION|enumerator|LLCP_ENCRYPTION,
DECL|LLCP_FEATURE_EXCHANGE|enumerator|LLCP_FEATURE_EXCHANGE,
DECL|LLCP_LENGTH_STATE_ACK_WAIT|macro|LLCP_LENGTH_STATE_ACK_WAIT
DECL|LLCP_LENGTH_STATE_REQ|macro|LLCP_LENGTH_STATE_REQ
DECL|LLCP_LENGTH_STATE_RESIZE|macro|LLCP_LENGTH_STATE_RESIZE
DECL|LLCP_LENGTH_STATE_RSP_WAIT|macro|LLCP_LENGTH_STATE_RSP_WAIT
DECL|LLCP_NONE|enumerator|LLCP_NONE,
DECL|LLCP_PING|enumerator|LLCP_PING,
DECL|LLCP_VERSION_EXCHANGE|enumerator|LLCP_VERSION_EXCHANGE,
DECL|LL_MEM_CONN|macro|LL_MEM_CONN
DECL|LL_MEM_RXQ|macro|LL_MEM_RXQ
DECL|LL_MEM_RX_DATA_POOL|macro|LL_MEM_RX_DATA_POOL
DECL|LL_MEM_RX_LINK_POOL|macro|LL_MEM_RX_LINK_POOL
DECL|LL_MEM_RX_POOL_SZ|macro|LL_MEM_RX_POOL_SZ
DECL|LL_MEM_TOTAL|macro|LL_MEM_TOTAL
DECL|LL_MEM_TXQ|macro|LL_MEM_TXQ
DECL|LL_MEM_TX_CTRL_POOL|macro|LL_MEM_TX_CTRL_POOL
DECL|PACKET_MEM_COUNT_TX_CTRL|macro|PACKET_MEM_COUNT_TX_CTRL
DECL|access_addr|member|uint8_t access_addr[4];
DECL|ack|member|uint8_t ack;
DECL|ack|member|uint8_t ack;
DECL|appto_expire|member|uint16_t appto_expire;
DECL|appto_reload|member|uint16_t appto_reload;
DECL|apto_expire|member|uint16_t apto_expire;
DECL|apto_reload|member|uint16_t apto_reload;
DECL|ccm_rx|member|struct ccm ccm_rx;
DECL|ccm_tx|member|struct ccm ccm_tx;
DECL|channel_map|member|} channel_map;
DECL|chm|member|uint8_t chm[5];
DECL|company_id|member|uint16_t company_id;
DECL|conn_interval|member|uint16_t conn_interval;
DECL|connect_expire|member|uint8_t connect_expire;
DECL|connection_update|member|} connection_update;
DECL|connection|struct|struct connection {
DECL|crc_init|member|uint8_t crc_init[3];
DECL|data_channel_count|member|uint8_t data_channel_count;
DECL|data_channel_hop|member|uint8_t data_channel_hop;
DECL|data_channel_map|member|uint8_t data_channel_map[5];
DECL|data_channel_use|member|uint8_t data_channel_use;
DECL|ediv|member|uint8_t ediv[2];
DECL|empty|member|uint8_t empty:1;
DECL|enc_rx|member|uint8_t enc_rx:1;
DECL|enc_tx|member|uint8_t enc_tx:1;
DECL|encryption|member|} encryption;
DECL|error_code|member|uint8_t error_code;
DECL|event_counter|member|uint16_t event_counter;
DECL|force|member|uint32_t force;
DECL|handle|member|uint16_t handle;
DECL|handle|member|uint16_t handle;
DECL|hdr|member|struct radio_pdu_node_rx_hdr hdr;
DECL|hdr|member|struct shdr hdr;
DECL|initiate|member|uint8_t initiate;
DECL|instant|member|uint16_t instant;
DECL|instant|member|uint16_t instant;
DECL|interval|member|uint16_t interval;
DECL|is_internal|member|uint8_t is_internal:2;
DECL|latency_cancel|member|uint8_t latency_cancel:1;
DECL|latency_event|member|uint16_t latency_event;
DECL|latency_prepare|member|uint16_t latency_prepare;
DECL|latency|member|uint16_t latency;
DECL|latency|member|uint16_t latency;
DECL|llcp_ack|member|uint8_t llcp_ack;
DECL|llcp_features|member|uint8_t llcp_features;
DECL|llcp_length|member|} llcp_length;
DECL|llcp_req|member|uint8_t llcp_req;
DECL|llcp_terminate|member|} llcp_terminate;
DECL|llcp_type|member|enum llcp llcp_type;
DECL|llcp_version|member|} llcp_version;
DECL|llcp|enum|enum llcp {
DECL|llcp|member|} llcp;
DECL|ltk|member|uint8_t ltk[16];
DECL|master|member|} master;
DECL|max_rx_octets|member|uint16_t max_rx_octets;
DECL|max_tx_octets|member|uint16_t max_tx_octets;
DECL|nesn|member|uint8_t nesn:1;
DECL|node_tx|member|struct radio_pdu_node_tx *node_tx;
DECL|offset0|member|uint16_t offset0;
DECL|offset1|member|uint16_t offset1;
DECL|offset2|member|uint16_t offset2;
DECL|offset3|member|uint16_t offset3;
DECL|offset4|member|uint16_t offset4;
DECL|offset5|member|uint16_t offset5;
DECL|packet_tx_head_len|member|uint8_t packet_tx_head_len;
DECL|packet_tx_head_offset|member|uint8_t packet_tx_head_offset;
DECL|pause_rx|member|uint8_t pause_rx:1;
DECL|pause_tx|member|uint8_t pause_tx:1;
DECL|pdu_data_q_tx|struct|struct pdu_data_q_tx {
DECL|pdu_win_offset|member|uint16_t *pdu_win_offset;
DECL|pkt_tx_ctrl|member|struct radio_pdu_node_tx *pkt_tx_ctrl;
DECL|pkt_tx_data|member|struct radio_pdu_node_tx *pkt_tx_data;
DECL|pkt_tx_head|member|struct radio_pdu_node_tx *pkt_tx_head;
DECL|pkt_tx_last|member|struct radio_pdu_node_tx *pkt_tx_last;
DECL|preferred_periodicity|member|uint8_t preferred_periodicity;
DECL|procedure_expire|member|uint16_t procedure_expire;
DECL|procedure_reload|member|uint16_t procedure_reload;
DECL|radio_pdu_node_rx|member|} radio_pdu_node_rx;
DECL|rand|member|uint8_t rand[8];
DECL|reason_own|member|uint8_t reason_own;
DECL|reason_peer|member|uint8_t reason_peer;
DECL|reason|member|uint8_t reason;
DECL|refresh|member|uint8_t refresh:1;
DECL|req|member|uint8_t req;
DECL|req|member|uint8_t req;
DECL|role|member|uint8_t role:1;
DECL|role|member|uint8_t role:1;
DECL|role|member|} role;
DECL|rssi_latest|member|uint8_t rssi_latest;
DECL|rssi_reported|member|uint8_t rssi_reported;
DECL|rssi_sample_count|member|uint8_t rssi_sample_count;
DECL|rx_octets|member|uint16_t rx_octets;
DECL|rx|member|uint8_t rx:1;
DECL|sca|member|uint8_t sca:3;
DECL|shdr|struct|struct shdr {
DECL|skd|member|uint8_t skd[16];
DECL|slave|member|} slave;
DECL|sn|member|uint8_t sn:1;
DECL|state|member|uint8_t state:2;
DECL|state|member|uint8_t state:3;
DECL|sub_version_number|member|uint16_t sub_version_number;
DECL|sug_tx_octets|member|uint16_t sug_tx_octets;
DECL|supervision_expire|member|uint16_t supervision_expire;
DECL|supervision_reload|member|uint16_t supervision_reload;
DECL|ticks_active_to_start|member|uint32_t ticks_active_to_start;
DECL|ticks_preempt_to_start|member|uint32_t ticks_preempt_to_start;
DECL|ticks_ref|member|uint32_t ticks_ref;
DECL|ticks_slot|member|uint32_t ticks_slot;
DECL|ticks_to_offset_next|member|uint32_t ticks_to_offset_next;
DECL|ticks_to_offset|member|uint32_t ticks_to_offset;
DECL|ticks_xtal_to_start|member|uint32_t ticks_xtal_to_start;
DECL|timeout|member|uint16_t timeout;
DECL|tx_octets|member|uint16_t tx_octets;
DECL|tx|member|uint8_t tx:1;
DECL|version_number|member|uint8_t version_number;
DECL|win_offset_us|member|uint32_t win_offset_us;
DECL|win_size|member|uint8_t win_size;
DECL|window_size_event_us|member|uint32_t window_size_event_us;
DECL|window_size_prepare_us|member|uint32_t window_size_prepare_us;
DECL|window_widening_event_us|member|uint32_t window_widening_event_us;
DECL|window_widening_max_us|member|uint32_t window_widening_max_us;
DECL|window_widening_periodic_us|member|uint32_t window_widening_periodic_us;
DECL|window_widening_prepare_us|member|uint32_t window_widening_prepare_us;
