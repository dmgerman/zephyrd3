DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|gptp_call_phase_dis_cb|function|void gptp_call_phase_dis_cb(void)
DECL|gptp_clk_src_time_invoke|function|void gptp_clk_src_time_invoke(struct gptp_clk_src_time_invoke_params *arg)
DECL|gptp_event_capture|function|int gptp_event_capture(struct net_ptp_time *slave_time, bool *gm_present)
DECL|gptp_register_phase_dis_cb|function|void gptp_register_phase_dis_cb(struct gptp_phase_dis_cb *phase_dis,gptp_phase_dis_callback_t cb)
DECL|gptp_sprint_clock_id|function|char *gptp_sprint_clock_id(const u8_t *clk_id, char *output, size_t output_len)
DECL|gptp_unregister_phase_dis_cb|function|void gptp_unregister_phase_dis_cb(struct gptp_phase_dis_cb *phase_dis)
DECL|phase_dis_callbacks|variable|phase_dis_callbacks
