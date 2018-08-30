DECL|GPTP_ANNOUNCE_MESSAGE|macro|GPTP_ANNOUNCE_MESSAGE
DECL|GPTP_CLOCK_ID_LEN|macro|GPTP_CLOCK_ID_LEN
DECL|GPTP_DELAY_REQ_MESSAGE|macro|GPTP_DELAY_REQ_MESSAGE
DECL|GPTP_DELAY_RESP_MESSAGE|macro|GPTP_DELAY_RESP_MESSAGE
DECL|GPTP_FOLLOWUP_MESSAGE|macro|GPTP_FOLLOWUP_MESSAGE
DECL|GPTP_GET_CURRENT_TIME_USCALED_NS|macro|GPTP_GET_CURRENT_TIME_USCALED_NS
DECL|GPTP_IS_EVENT_MSG|macro|GPTP_IS_EVENT_MSG
DECL|GPTP_MANAGEMENT_MESSAGE|macro|GPTP_MANAGEMENT_MESSAGE
DECL|GPTP_OFFSET_SCALED_LOG_VAR_UNKNOWN|macro|GPTP_OFFSET_SCALED_LOG_VAR_UNKNOWN
DECL|GPTP_PATH_DELAY_FOLLOWUP_MESSAGE|macro|GPTP_PATH_DELAY_FOLLOWUP_MESSAGE
DECL|GPTP_PATH_DELAY_REQ_MESSAGE|macro|GPTP_PATH_DELAY_REQ_MESSAGE
DECL|GPTP_PATH_DELAY_RESP_MESSAGE|macro|GPTP_PATH_DELAY_RESP_MESSAGE
DECL|GPTP_POW2|macro|GPTP_POW2
DECL|GPTP_POW2|macro|GPTP_POW2
DECL|GPTP_PRIORITY1_GM_CAPABLE|macro|GPTP_PRIORITY1_GM_CAPABLE
DECL|GPTP_PRIORITY1_NON_GM_CAPABLE|macro|GPTP_PRIORITY1_NON_GM_CAPABLE
DECL|GPTP_PRIORITY2_DEFAULT|macro|GPTP_PRIORITY2_DEFAULT
DECL|GPTP_SIGNALING_MESSAGE|macro|GPTP_SIGNALING_MESSAGE
DECL|GPTP_SYNC_MESSAGE|macro|GPTP_SYNC_MESSAGE
DECL|ZEPHYR_INCLUDE_NET_GPTP_H_|macro|ZEPHYR_INCLUDE_NET_GPTP_H_
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|_gptp_pow2|function|static inline double _gptp_pow2(int exp)
DECL|all|member|u16_t all;
DECL|cb|member|gptp_phase_dis_callback_t cb;
DECL|clk_id|member|u8_t clk_id[GPTP_CLOCK_ID_LEN];
DECL|control|member|u8_t control;
DECL|correction_field|member|s64_t correction_field;
DECL|domain_number|member|u8_t domain_number;
DECL|flags|member|struct gptp_flags flags;
DECL|gptp_clk_src_time_invoke_params|struct|struct gptp_clk_src_time_invoke_params {
DECL|gptp_flags|struct|struct gptp_flags {
DECL|gptp_hdr|struct|struct gptp_hdr {
DECL|gptp_phase_dis_callback_t|typedef|typedef void (*gptp_phase_dis_callback_t)(
DECL|gptp_phase_dis_cb|struct|struct gptp_phase_dis_cb {
DECL|gptp_port_cb_t|typedef|typedef void (*gptp_port_cb_t)(int port, struct net_if *iface,
DECL|gptp_port_identity|struct|struct gptp_port_identity {
DECL|gptp_scaled_ns|struct|struct gptp_scaled_ns {
DECL|gptp_uscaled_ns|struct|struct gptp_uscaled_ns {
DECL|high|member|s32_t high;
DECL|high|member|u32_t high;
DECL|last_gm_freq_change|member|double last_gm_freq_change;
DECL|last_gm_phase_change|member|struct gptp_scaled_ns last_gm_phase_change;
DECL|log_msg_interval|member|s8_t log_msg_interval;
DECL|low|member|s64_t low;
DECL|low|member|u64_t low;
DECL|message_length|member|u16_t message_length;
DECL|message_type|member|u8_t message_type:4;
DECL|node|member|sys_snode_t node;
DECL|octets|member|u8_t octets[2];
DECL|port_id|member|struct gptp_port_identity port_id;
DECL|port_number|member|u16_t port_number;
DECL|ptp_version|member|u8_t ptp_version:4;
DECL|reserved0|member|u8_t reserved0:4;
DECL|reserved1|member|u8_t reserved1;
DECL|reserved2|member|u32_t reserved2;
DECL|sequence_id|member|u16_t sequence_id;
DECL|src_time|member|struct net_ptp_extended_time src_time;
DECL|time_base_indicator|member|u16_t time_base_indicator;
DECL|transport_specific|member|u8_t transport_specific:4;
