DECL|GPTP_ANNOUNCE_CHECK_LEN|macro|GPTP_ANNOUNCE_CHECK_LEN
DECL|GPTP_ANNOUNCE_LEN|macro|GPTP_ANNOUNCE_LEN
DECL|GPTP_ANNOUNCE_MSG_PATH_SEQ_TYPE|macro|GPTP_ANNOUNCE_MSG_PATH_SEQ_TYPE
DECL|GPTP_ANNOUNCE|macro|GPTP_ANNOUNCE
DECL|GPTP_CHECK_LEN|macro|GPTP_CHECK_LEN
DECL|GPTP_DELAY_REQ|macro|GPTP_DELAY_REQ
DECL|GPTP_FLAG_ALT_MASTER|macro|GPTP_FLAG_ALT_MASTER
DECL|GPTP_FLAG_COMPUTE_NEIGHBOR_PROP_DELAY|macro|GPTP_FLAG_COMPUTE_NEIGHBOR_PROP_DELAY
DECL|GPTP_FLAG_COMPUTE_NEIGHBOR_RATE_RATIO|macro|GPTP_FLAG_COMPUTE_NEIGHBOR_RATE_RATIO
DECL|GPTP_FLAG_CUR_UTC_OFF_VALID|macro|GPTP_FLAG_CUR_UTC_OFF_VALID
DECL|GPTP_FLAG_FREQ_TRACEABLE|macro|GPTP_FLAG_FREQ_TRACEABLE
DECL|GPTP_FLAG_LEAP59|macro|GPTP_FLAG_LEAP59
DECL|GPTP_FLAG_LEAP61|macro|GPTP_FLAG_LEAP61
DECL|GPTP_FLAG_PROFILE_SPECIFIC1|macro|GPTP_FLAG_PROFILE_SPECIFIC1
DECL|GPTP_FLAG_PROFILE_SPECIFIC2|macro|GPTP_FLAG_PROFILE_SPECIFIC2
DECL|GPTP_FLAG_PTP_TIMESCALE|macro|GPTP_FLAG_PTP_TIMESCALE
DECL|GPTP_FLAG_TIME_TRACEABLE|macro|GPTP_FLAG_TIME_TRACEABLE
DECL|GPTP_FLAG_TWO_STEP|macro|GPTP_FLAG_TWO_STEP
DECL|GPTP_FLAG_UNICAST|macro|GPTP_FLAG_UNICAST
DECL|GPTP_FOLLOW_UP_LEN|macro|GPTP_FOLLOW_UP_LEN
DECL|GPTP_FOLLOW_UP|macro|GPTP_FOLLOW_UP
DECL|GPTP_FUP_CONTROL_VALUE|macro|GPTP_FUP_CONTROL_VALUE
DECL|GPTP_FUP_TLV_ORG_ID_BYTE_0|macro|GPTP_FUP_TLV_ORG_ID_BYTE_0
DECL|GPTP_FUP_TLV_ORG_ID_BYTE_1|macro|GPTP_FUP_TLV_ORG_ID_BYTE_1
DECL|GPTP_FUP_TLV_ORG_ID_BYTE_2|macro|GPTP_FUP_TLV_ORG_ID_BYTE_2
DECL|GPTP_FUP_TLV_ORG_SUB_TYPE|macro|GPTP_FUP_TLV_ORG_SUB_TYPE
DECL|GPTP_HDR|macro|GPTP_HDR
DECL|GPTP_ITV_KEEP|macro|GPTP_ITV_KEEP
DECL|GPTP_ITV_SET_TO_INIT|macro|GPTP_ITV_SET_TO_INIT
DECL|GPTP_ITV_STOP|macro|GPTP_ITV_STOP
DECL|GPTP_L2_HDR_LEN|macro|GPTP_L2_HDR_LEN
DECL|GPTP_OTHER_CONTROL_VALUE|macro|GPTP_OTHER_CONTROL_VALUE
DECL|GPTP_PACKET_LEN|macro|GPTP_PACKET_LEN
DECL|GPTP_PDELAY_REQ_LEN|macro|GPTP_PDELAY_REQ_LEN
DECL|GPTP_PDELAY_REQ|macro|GPTP_PDELAY_REQ
DECL|GPTP_PDELAY_RESP_FOLLOWUP|macro|GPTP_PDELAY_RESP_FOLLOWUP
DECL|GPTP_PDELAY_RESP_FUP_LEN|macro|GPTP_PDELAY_RESP_FUP_LEN
DECL|GPTP_PDELAY_RESP_LEN|macro|GPTP_PDELAY_RESP_LEN
DECL|GPTP_PDELAY_RESP|macro|GPTP_PDELAY_RESP
DECL|GPTP_RESP_LOG_MSG_ITV|macro|GPTP_RESP_LOG_MSG_ITV
DECL|GPTP_SIGNALING_LEN|macro|GPTP_SIGNALING_LEN
DECL|GPTP_SIGNALING|macro|GPTP_SIGNALING
DECL|GPTP_SYNC_CONTROL_VALUE|macro|GPTP_SYNC_CONTROL_VALUE
DECL|GPTP_SYNC_LEN|macro|GPTP_SYNC_LEN
DECL|GPTP_SYNC|macro|GPTP_SYNC
DECL|GPTP_TRANSPORT_802_1_AS|macro|GPTP_TRANSPORT_802_1_AS
DECL|GPTP_VALID_LEN|macro|GPTP_VALID_LEN
DECL|GPTP_VERSION|macro|GPTP_VERSION
DECL|__GPTP_MESSAGES_H|macro|__GPTP_MESSAGES_H
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|announce_itv|member|s8_t announce_itv;
DECL|clk_quality|member|struct gptp_clock_quality clk_quality;
DECL|clock_accuracy|member|u8_t clock_accuracy;
DECL|clock_class|member|u8_t clock_class;
DECL|compute_neighbor_prop_delay|member|u8_t compute_neighbor_prop_delay : 1;
DECL|compute_neighbor_rate_ratio|member|u8_t compute_neighbor_rate_ratio : 1;
DECL|cumulative_scaled_rate_offset|member|s32_t cumulative_scaled_rate_offset;
DECL|cur_utc_offset|member|s16_t cur_utc_offset;
DECL|flags|member|u8_t flags;
DECL|gm_time_base_indicator|member|u16_t gm_time_base_indicator;
DECL|gptp_announce|struct|struct gptp_announce {
DECL|gptp_clock_quality|struct|struct gptp_clock_quality {
DECL|gptp_data|function|static inline u8_t *gptp_data(struct net_pkt *pkt)
DECL|gptp_follow_up_tlv|struct|struct gptp_follow_up_tlv {
DECL|gptp_follow_up|struct|struct gptp_follow_up {
DECL|gptp_message_itv_req_tlv|struct|struct gptp_message_itv_req_tlv {
DECL|gptp_path_trace_tlv|struct|struct gptp_path_trace_tlv {
DECL|gptp_pdelay_req|struct|struct gptp_pdelay_req {
DECL|gptp_pdelay_resp_follow_up|struct|struct gptp_pdelay_resp_follow_up {
DECL|gptp_pdelay_resp|struct|struct gptp_pdelay_resp {
DECL|gptp_root_system_identity|struct|struct gptp_root_system_identity {
DECL|gptp_signaling|struct|struct gptp_signaling {
DECL|gptp_sync|struct|struct gptp_sync {
DECL|grand_master_id|member|u8_t grand_master_id[GPTP_CLOCK_ID_LEN];
DECL|grand_master_prio1|member|u8_t grand_master_prio1;
DECL|grand_master_prio2|member|u8_t grand_master_prio2;
DECL|last_gm_phase_change|member|struct gptp_scaled_ns last_gm_phase_change;
DECL|len|member|u16_t len;
DECL|len|member|u16_t len;
DECL|len|member|u16_t len;
DECL|link_delay_itv|member|s8_t link_delay_itv;
DECL|offset_scaled_log_var|member|u16_t offset_scaled_log_var;
DECL|org_id|member|u8_t org_id[3];
DECL|org_id|member|u8_t org_id[3];
DECL|org_sub_type|member|u8_t org_sub_type[3];
DECL|org_sub_type|member|u8_t org_sub_type[3];
DECL|path_sequence|member|u8_t path_sequence[1][8];
DECL|prec_orig_ts_nsecs|member|u32_t prec_orig_ts_nsecs;
DECL|prec_orig_ts_secs_high|member|u16_t prec_orig_ts_secs_high;
DECL|prec_orig_ts_secs_low|member|u32_t prec_orig_ts_secs_low;
DECL|req_receipt_ts_nsecs|member|u32_t req_receipt_ts_nsecs;
DECL|req_receipt_ts_secs_high|member|u16_t req_receipt_ts_secs_high;
DECL|req_receipt_ts_secs_low|member|u32_t req_receipt_ts_secs_low;
DECL|requesting_port_id|member|struct gptp_port_identity requesting_port_id;
DECL|requesting_port_id|member|struct gptp_port_identity requesting_port_id;
DECL|reserved1|member|u8_t reserved1[10];
DECL|reserved1|member|u8_t reserved1[10];
DECL|reserved2|member|u8_t reserved2;
DECL|reserved2|member|u8_t reserved2[10];
DECL|reserved|member|u8_t reserved[10];
DECL|reserved|member|u8_t reserved[2];
DECL|resp_orig_ts_nsecs|member|u32_t resp_orig_ts_nsecs;
DECL|resp_orig_ts_secs_high|member|u16_t resp_orig_ts_secs_high;
DECL|resp_orig_ts_secs_low|member|u32_t resp_orig_ts_secs_low;
DECL|root_system_id|member|struct gptp_root_system_identity root_system_id;
DECL|scaled_last_gm_freq_change|member|s32_t scaled_last_gm_freq_change;
DECL|steps_removed|member|u16_t steps_removed;
DECL|target_port_id|member|struct gptp_port_identity target_port_id;
DECL|time_source|member|u8_t time_source;
DECL|time_sync_itv|member|s8_t time_sync_itv;
DECL|tlv|member|struct gptp_follow_up_tlv tlv;
DECL|tlv|member|struct gptp_message_itv_req_tlv tlv;
DECL|tlv|member|struct gptp_path_trace_tlv tlv;
DECL|type|member|u16_t type;
DECL|type|member|u16_t type;
DECL|type|member|u16_t type;
