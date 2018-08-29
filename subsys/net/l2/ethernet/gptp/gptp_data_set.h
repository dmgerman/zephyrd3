DECL|CLEAR_RESELECT|macro|CLEAR_RESELECT
DECL|CLEAR_SELECTED|macro|CLEAR_SELECTED
DECL|GPTP_ALLOWED_LOST_RESP|macro|GPTP_ALLOWED_LOST_RESP
DECL|GPTP_CLASS_APP_SPECIFIC_DEGRADED_A|enumerator|GPTP_CLASS_APP_SPECIFIC_DEGRADED_A = 58,
DECL|GPTP_CLASS_APP_SPECIFIC_DEGRADED_B|enumerator|GPTP_CLASS_APP_SPECIFIC_DEGRADED_B = 193,
DECL|GPTP_CLASS_APP_SPECIFIC_LOST|enumerator|GPTP_CLASS_APP_SPECIFIC_LOST = 14,
DECL|GPTP_CLASS_APP_SPECIFIC|enumerator|GPTP_CLASS_APP_SPECIFIC = 13,
DECL|GPTP_CLASS_OTHER|enumerator|GPTP_CLASS_OTHER = 248,
DECL|GPTP_CLASS_PRIMARY_DEGRADED_A|enumerator|GPTP_CLASS_PRIMARY_DEGRADED_A = 52,
DECL|GPTP_CLASS_PRIMARY_DEGRADED_B|enumerator|GPTP_CLASS_PRIMARY_DEGRADED_B = 187,
DECL|GPTP_CLASS_PRIMARY|enumerator|GPTP_CLASS_PRIMARY = 6,
DECL|GPTP_CLASS_SLAVE_ONLY|enumerator|GPTP_CLASS_SLAVE_ONLY = 255,
DECL|GPTP_CURRENT_DS|macro|GPTP_CURRENT_DS
DECL|GPTP_DEFAULT_DS|macro|GPTP_DEFAULT_DS
DECL|GPTP_GLOBAL_DS|macro|GPTP_GLOBAL_DS
DECL|GPTP_MAX_PATHTRACE_SIZE|macro|GPTP_MAX_PATHTRACE_SIZE
DECL|GPTP_NEIGHBOR_PROP_DELAY_THR|macro|GPTP_NEIGHBOR_PROP_DELAY_THR
DECL|GPTP_NEIGHBOR_PROP_DELAY_THR|macro|GPTP_NEIGHBOR_PROP_DELAY_THR
DECL|GPTP_PARENT_DS|macro|GPTP_PARENT_DS
DECL|GPTP_PORT_BMCA_DATA|macro|GPTP_PORT_BMCA_DATA
DECL|GPTP_PORT_DISABLED|enumerator|GPTP_PORT_DISABLED,
DECL|GPTP_PORT_DS|macro|GPTP_PORT_DS
DECL|GPTP_PORT_END|macro|GPTP_PORT_END
DECL|GPTP_PORT_FAULTY|enumerator|GPTP_PORT_FAULTY,
DECL|GPTP_PORT_IFACE|macro|GPTP_PORT_IFACE
DECL|GPTP_PORT_INDEX|macro|GPTP_PORT_INDEX
DECL|GPTP_PORT_INITIALIZING|enumerator|GPTP_PORT_INITIALIZING,
DECL|GPTP_PORT_LISTENING|enumerator|GPTP_PORT_LISTENING,
DECL|GPTP_PORT_MASTER|enumerator|GPTP_PORT_MASTER,
DECL|GPTP_PORT_PARAM_DS|macro|GPTP_PORT_PARAM_DS
DECL|GPTP_PORT_PASSIVE|enumerator|GPTP_PORT_PASSIVE,
DECL|GPTP_PORT_PRE_MASTER|enumerator|GPTP_PORT_PRE_MASTER,
DECL|GPTP_PORT_SLAVE|enumerator|GPTP_PORT_SLAVE,
DECL|GPTP_PORT_START|macro|GPTP_PORT_START
DECL|GPTP_PORT_STATE|macro|GPTP_PORT_STATE
DECL|GPTP_PORT_UNCALIBRATED|enumerator|GPTP_PORT_UNCALIBRATED,
DECL|GPTP_PROPERTIES_DS|macro|GPTP_PROPERTIES_DS
DECL|GPTP_RCVD_INFO_INFERIOR_MASTER_INFO|enumerator|GPTP_RCVD_INFO_INFERIOR_MASTER_INFO,
DECL|GPTP_RCVD_INFO_OTHER_INFO|enumerator|GPTP_RCVD_INFO_OTHER_INFO,
DECL|GPTP_RCVD_INFO_REPEATED_MASTER_INFO|enumerator|GPTP_RCVD_INFO_REPEATED_MASTER_INFO,
DECL|GPTP_RCVD_INFO_SUPERIOR_MASTER_INFO|enumerator|GPTP_RCVD_INFO_SUPERIOR_MASTER_INFO,
DECL|GPTP_STATE|macro|GPTP_STATE
DECL|GPTP_TLV_ACK_CANCEL_UNICAST_TX|enumerator|GPTP_TLV_ACK_CANCEL_UNICAST_TX = 0x0007,
DECL|GPTP_TLV_ALT_TIME_OFFSET_INDICATOR|enumerator|GPTP_TLV_ALT_TIME_OFFSET_INDICATOR = 0x0009,
DECL|GPTP_TLV_AUTH_CHALLENGE|enumerator|GPTP_TLV_AUTH_CHALLENGE = 0x2001,
DECL|GPTP_TLV_AUTH|enumerator|GPTP_TLV_AUTH = 0x2000,
DECL|GPTP_TLV_CANCEL_UNICAST_TX|enumerator|GPTP_TLV_CANCEL_UNICAST_TX = 0x0006,
DECL|GPTP_TLV_CUM_FREQ_SCALE_FACTOR_OFFSET|enumerator|GPTP_TLV_CUM_FREQ_SCALE_FACTOR_OFFSET = 0x2003,
DECL|GPTP_TLV_GRANT_UNICAST_TX|enumerator|GPTP_TLV_GRANT_UNICAST_TX = 0x0005,
DECL|GPTP_TLV_MGNT_ERR_STATUS|enumerator|GPTP_TLV_MGNT_ERR_STATUS = 0x0002,
DECL|GPTP_TLV_MGNT|enumerator|GPTP_TLV_MGNT = 0x0001,
DECL|GPTP_TLV_ORGANIZATION_EXT|enumerator|GPTP_TLV_ORGANIZATION_EXT = 0x0003,
DECL|GPTP_TLV_PATH_TRACE|enumerator|GPTP_TLV_PATH_TRACE = 0x0008,
DECL|GPTP_TLV_REQ_UNICAST_TX|enumerator|GPTP_TLV_REQ_UNICAST_TX = 0x0004,
DECL|GPTP_TLV_SECURITY_ASSOC_UPDATE|enumerator|GPTP_TLV_SECURITY_ASSOC_UPDATE = 0x2002,
DECL|IS_RESELECT|macro|IS_RESELECT
DECL|IS_SELECTED|macro|IS_SELECTED
DECL|SET_RESELECT|macro|SET_RESELECT
DECL|SET_SELECTED|macro|SET_SELECTED
DECL|__GPTP_DS_H|macro|__GPTP_DS_H
DECL|allowed_lost_responses|member|u16_t allowed_lost_responses;
DECL|announce_receipt_timeout_count|member|u32_t announce_receipt_timeout_count;
DECL|announce_receipt_timeout|member|u8_t announce_receipt_timeout;
DECL|announce_seq_id|member|u16_t announce_seq_id;
DECL|as_capable|member|bool as_capable : 1;
DECL|clk_id|member|u8_t clk_id[GPTP_CLOCK_ID_LEN];
DECL|clk_master_sync_itv|member|u64_t clk_master_sync_itv;
DECL|clk_quality|member|struct gptp_clock_quality clk_quality;
DECL|clk_src_freq_offset|member|double clk_src_freq_offset;
DECL|clk_src_last_gm_freq_change|member|double clk_src_last_gm_freq_change;
DECL|clk_src_last_gm_phase_change|member|struct gptp_scaled_ns clk_src_last_gm_phase_change;
DECL|clk_src_phase_offset|member|struct gptp_scaled_ns clk_src_phase_offset;
DECL|clk_src_time_base_indicator_prev|member|u16_t clk_src_time_base_indicator_prev;
DECL|clk_src_time_base_indicator|member|u16_t clk_src_time_base_indicator;
DECL|compute_neighbor_prop_delay|member|bool compute_neighbor_prop_delay : 1;
DECL|compute_neighbor_rate_ratio|member|bool compute_neighbor_rate_ratio : 1;
DECL|cumulative_rate_ratio|member|s32_t cumulative_rate_ratio;
DECL|cur_log_announce_itv|member|s8_t cur_log_announce_itv;
DECL|cur_log_half_sync_itv|member|s8_t cur_log_half_sync_itv;
DECL|cur_log_pdelay_req_itv|member|s8_t cur_log_pdelay_req_itv;
DECL|cur_utc_offset_valid|member|bool cur_utc_offset_valid : 1;
DECL|cur_utc_offset|member|u16_t cur_utc_offset;
DECL|cur_utc_offset|member|u16_t cur_utc_offset;
DECL|current_ds|member|struct gptp_current_ds current_ds;
DECL|current_utc_offset|member|s16_t current_utc_offset;
DECL|default_ds|member|struct gptp_default_ds default_ds;
DECL|delay_asymmetry|member|s64_t delay_asymmetry;
DECL|flags|member|struct gptp_flags flags;
DECL|freq_traceable|member|bool freq_traceable : 1;
DECL|global_ds|member|struct gptp_global_ds global_ds;
DECL|global_flags|member|struct gptp_flags global_flags;
DECL|gm_capable|member|bool gm_capable;
DECL|gm_change_count|member|u32_t gm_change_count;
DECL|gm_clk_quality|member|struct gptp_clock_quality gm_clk_quality;
DECL|gm_id|member|u8_t gm_id[GPTP_CLOCK_ID_LEN];
DECL|gm_present|member|bool gm_present;
DECL|gm_priority1|member|u8_t gm_priority1;
DECL|gm_priority2|member|u8_t gm_priority2;
DECL|gm_priority|member|struct gptp_priority_vector gm_priority;
DECL|gm_rate_ratio|member|double gm_rate_ratio;
DECL|gm_time_base_indicator|member|u16_t gm_time_base_indicator;
DECL|gm_timebase_indicator|member|u16_t gm_timebase_indicator;
DECL|gptp_clock_class|enum|enum gptp_clock_class {
DECL|gptp_current_ds|struct|struct gptp_current_ds {
DECL|gptp_default_ds|struct|struct gptp_default_ds {
DECL|gptp_domain|struct|struct gptp_domain {
DECL|gptp_global_ds|struct|struct gptp_global_ds {
DECL|gptp_parent_ds|struct|struct gptp_parent_ds {
DECL|gptp_path_trace|struct|struct gptp_path_trace {
DECL|gptp_port_ds|struct|struct gptp_port_ds {
DECL|gptp_port_param_ds|struct|struct gptp_port_param_ds {
DECL|gptp_port_state|enum|enum gptp_port_state {
DECL|gptp_received_info|enum|enum gptp_received_info {
DECL|gptp_time_prop_ds|struct|struct gptp_time_prop_ds {
DECL|gptp_tlv_type|enum|enum gptp_tlv_type {
DECL|half_sync_itv|member|struct gptp_uscaled_ns half_sync_itv;
DECL|iface|member|struct net_if *iface[CONFIG_NET_GPTP_NUM_PORTS];
DECL|ini_log_announce_itv|member|s8_t ini_log_announce_itv;
DECL|ini_log_half_sync_itv|member|s8_t ini_log_half_sync_itv;
DECL|ini_log_pdelay_req_itv|member|s8_t ini_log_pdelay_req_itv;
DECL|is_measuring_delay|member|bool is_measuring_delay : 1;
DECL|last_gm_chg_evt_time|member|u32_t last_gm_chg_evt_time;
DECL|last_gm_freq_change|member|double last_gm_freq_change;
DECL|last_gm_freq_change|member|double last_gm_freq_change;
DECL|last_gm_freq_chg_evt_time|member|u32_t last_gm_freq_chg_evt_time;
DECL|last_gm_phase_change|member|struct gptp_scaled_ns last_gm_phase_change;
DECL|last_gm_phase_change|member|struct gptp_scaled_ns last_gm_phase_change;
DECL|last_gm_phase_chg_evt_time|member|u32_t last_gm_phase_chg_evt_time;
DECL|last_gm_priority|member|struct gptp_priority_vector last_gm_priority;
DECL|leap59|member|bool leap59 : 1;
DECL|leap61|member|bool leap61 : 1;
DECL|len|member|u16_t len;
DECL|local_time|member|struct gptp_uscaled_ns local_time;
DECL|master_steps_removed|member|u16_t master_steps_removed;
DECL|master_time|member|struct net_ptp_extended_time master_time;
DECL|nb_ports|member|u8_t nb_ports;
DECL|neighbor_prop_delay_exceeded|member|u32_t neighbor_prop_delay_exceeded;
DECL|neighbor_prop_delay_thresh|member|double neighbor_prop_delay_thresh;
DECL|neighbor_prop_delay|member|double neighbor_prop_delay;
DECL|neighbor_rate_ratio_valid|member|bool neighbor_rate_ratio_valid : 1;
DECL|neighbor_rate_ratio|member|double neighbor_rate_ratio;
DECL|offset_from_master|member|s64_t offset_from_master;
DECL|parent_ds|member|struct gptp_parent_ds parent_ds;
DECL|path_sequence|member|u8_t path_sequence[GPTP_MAX_PATHTRACE_SIZE][GPTP_CLOCK_ID_LEN];
DECL|path_trace|member|struct gptp_path_trace path_trace;
DECL|pdelay_allowed_lost_resp_exceed_count|member|u32_t pdelay_allowed_lost_resp_exceed_count;
DECL|pdelay_req_itv|member|struct gptp_uscaled_ns pdelay_req_itv;
DECL|pdelay_req_seq_id|member|u16_t pdelay_req_seq_id;
DECL|port_bmca_data|member|struct gptp_port_bmca_data port_bmca_data[CONFIG_NET_GPTP_NUM_PORTS];
DECL|port_ds|member|struct gptp_port_ds port_ds[CONFIG_NET_GPTP_NUM_PORTS];
DECL|port_id|member|struct gptp_port_identity port_id;
DECL|port_id|member|struct gptp_port_identity port_id;
DECL|port_param_ds|member|struct gptp_port_param_ds port_param_ds[CONFIG_NET_GPTP_NUM_PORTS];
DECL|port_state|member|struct gptp_port_states port_state[CONFIG_NET_GPTP_NUM_PORTS];
DECL|prev_ptt_port_enabled|member|bool prev_ptt_port_enabled : 1;
DECL|priority1|member|u8_t priority1;
DECL|priority2|member|u8_t priority2;
DECL|properties_ds|member|struct gptp_time_prop_ds properties_ds;
DECL|ptt_port_enabled|member|bool ptt_port_enabled : 1;
DECL|reselect_array|member|u32_t reselect_array;
DECL|rx_announce_count|member|u32_t rx_announce_count;
DECL|rx_fup_count|member|u32_t rx_fup_count;
DECL|rx_pdelay_req_count|member|u32_t rx_pdelay_req_count;
DECL|rx_pdelay_resp_count|member|u32_t rx_pdelay_resp_count;
DECL|rx_pdelay_resp_fup_count|member|u32_t rx_pdelay_resp_fup_count;
DECL|rx_ptp_packet_discard_count|member|u32_t rx_ptp_packet_discard_count;
DECL|rx_sync_count|member|u32_t rx_sync_count;
DECL|selected_array|member|u32_t selected_array;
DECL|selected_role|member|enum gptp_port_state selected_role[CONFIG_NET_GPTP_NUM_PORTS + 1];
DECL|signaling_seq_id|member|u16_t signaling_seq_id;
DECL|state|member|struct gptp_states state;
DECL|steps_removed|member|u8_t steps_removed;
DECL|sync_receipt_local_time|member|u64_t sync_receipt_local_time;
DECL|sync_receipt_timeout_count|member|u32_t sync_receipt_timeout_count;
DECL|sync_receipt_timeout_time_itv|member|u64_t sync_receipt_timeout_time_itv;
DECL|sync_receipt_timeout|member|u8_t sync_receipt_timeout;
DECL|sync_receipt_time|member|struct net_ptp_extended_time sync_receipt_time;
DECL|sync_seq_id|member|u16_t sync_seq_id;
DECL|sys_current_utc_offset|member|s16_t sys_current_utc_offset;
DECL|sys_flags|member|struct gptp_flags sys_flags;
DECL|sys_time_source|member|enum gptp_time_source sys_time_source;
DECL|time_source|member|enum gptp_time_source time_source;
DECL|time_source|member|enum gptp_time_source time_source;
DECL|time_source|member|enum gptp_time_source time_source;
DECL|time_traceable|member|bool time_traceable : 1;
DECL|tx_announce_count|member|u32_t tx_announce_count;
DECL|tx_fup_count|member|u32_t tx_fup_count;
DECL|tx_pdelay_req_count|member|u32_t tx_pdelay_req_count;
DECL|tx_pdelay_resp_count|member|u32_t tx_pdelay_resp_count;
DECL|tx_pdelay_resp_fup_count|member|u32_t tx_pdelay_resp_fup_count;
DECL|tx_sync_count|member|u32_t tx_sync_count;
DECL|version|member|u8_t version;
