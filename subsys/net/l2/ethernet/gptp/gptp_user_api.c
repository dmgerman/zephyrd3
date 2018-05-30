DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|gptp_call_phase_dis_cb|function|void gptp_call_phase_dis_cb(void)
DECL|gptp_event_capture|function|int gptp_event_capture(struct net_ptp_time *slave_time, bool *gm_present)
DECL|gptp_register_phase_dis_cb|function|void gptp_register_phase_dis_cb(struct gptp_phase_dis_cb *phase_dis,gptp_phase_dis_callback_t cb)
DECL|gptp_sprint_clock_id|function|char *gptp_sprint_clock_id(const u8_t *clk_id, char *output, size_t output_len)
DECL|gptp_unregister_phase_dis_cb|function|void gptp_unregister_phase_dis_cb(struct gptp_phase_dis_cb *phase_dis)
DECL|phase_dis_callbacks|variable|phase_dis_callbacks