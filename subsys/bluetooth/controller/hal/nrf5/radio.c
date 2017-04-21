DECL|RADIO_PDU_LEN_MAX|macro|RADIO_PDU_LEN_MAX
DECL|RADIO_PDU_LEN_MAX|macro|RADIO_PDU_LEN_MAX
DECL|isr_radio|function|void isr_radio(void)
DECL|radio_aa_set|function|void radio_aa_set(u8_t *aa)
DECL|radio_ar_configure|function|void radio_ar_configure(u32_t nirk, void *irk)
DECL|radio_ar_has_match|function|u32_t radio_ar_has_match(void)
DECL|radio_ar_match_get|function|u32_t radio_ar_match_get(void)
DECL|radio_ar_status_reset|function|void radio_ar_status_reset(void)
DECL|radio_bc_configure|function|void radio_bc_configure(u32_t n)
DECL|radio_bc_has_match|function|u32_t radio_bc_has_match(void)
DECL|radio_bc_status_reset|function|void radio_bc_status_reset(void)
DECL|radio_ccm_is_done|function|u32_t radio_ccm_is_done(void)
DECL|radio_ccm_mic_is_valid|function|u32_t radio_ccm_mic_is_valid(void)
DECL|radio_ccm_rx_pkt_set|function|void *radio_ccm_rx_pkt_set(struct ccm *ccm, void *pkt)
DECL|radio_ccm_tx_pkt_set|function|void *radio_ccm_tx_pkt_set(struct ccm *ccm, void *pkt)
DECL|radio_crc_configure|function|void radio_crc_configure(u32_t polynomial, u32_t iv)
DECL|radio_crc_is_valid|function|u32_t radio_crc_is_valid(void)
DECL|radio_disable|function|void radio_disable(void)
DECL|radio_filter_configure|function|void radio_filter_configure(u8_t bitmask_enable, u8_t bitmask_addr_type, u8_t *bdaddr)
DECL|radio_filter_disable|function|void radio_filter_disable(void)
DECL|radio_filter_has_match|function|u32_t radio_filter_has_match(void)
DECL|radio_filter_status_reset|function|void radio_filter_status_reset(void)
DECL|radio_freq_chan_set|function|void radio_freq_chan_set(u32_t chan)
DECL|radio_has_disabled|function|u32_t radio_has_disabled(void)
DECL|radio_is_done|function|u32_t radio_is_done(void)
DECL|radio_is_idle|function|u32_t radio_is_idle(void)
DECL|radio_is_ready|function|u32_t radio_is_ready(void)
DECL|radio_isr_set|function|void radio_isr_set(radio_isr_fp fp_radio_isr)
DECL|radio_phy_set|function|void radio_phy_set(u8_t phy)
DECL|radio_pkt_configure|function|void radio_pkt_configure(u8_t preamble16, u8_t bits_len, u8_t max_len)
DECL|radio_pkt_empty_get|function|void *radio_pkt_empty_get(void)
DECL|radio_pkt_rx_set|function|void radio_pkt_rx_set(void *rx_packet)
DECL|radio_pkt_scratch_get|function|void *radio_pkt_scratch_get(void)
DECL|radio_pkt_tx_set|function|void radio_pkt_tx_set(void *tx_packet)
DECL|radio_reset|function|void radio_reset(void)
DECL|radio_rssi_get|function|u32_t radio_rssi_get(void)
DECL|radio_rssi_is_ready|function|u32_t radio_rssi_is_ready(void)
DECL|radio_rssi_measure|function|void radio_rssi_measure(void)
DECL|radio_rssi_status_reset|function|void radio_rssi_status_reset(void)
DECL|radio_rx_enable|function|void radio_rx_enable(void)
DECL|radio_status_reset|function|void radio_status_reset(void)
DECL|radio_switch_complete_and_disable|function|void radio_switch_complete_and_disable(void)
DECL|radio_switch_complete_and_rx|function|void radio_switch_complete_and_rx(void)
DECL|radio_switch_complete_and_tx|function|void radio_switch_complete_and_tx(void)
DECL|radio_tmr_aa_capture|function|void radio_tmr_aa_capture(void)
DECL|radio_tmr_aa_get|function|u32_t radio_tmr_aa_get(void)
DECL|radio_tmr_end_capture|function|void radio_tmr_end_capture(void)
DECL|radio_tmr_end_get|function|u32_t radio_tmr_end_get(void)
DECL|radio_tmr_hcto_configure|function|void radio_tmr_hcto_configure(u32_t hcto)
DECL|radio_tmr_sample_get|function|u32_t radio_tmr_sample_get(void)
DECL|radio_tmr_sample|function|void radio_tmr_sample(void)
DECL|radio_tmr_start|function|u32_t radio_tmr_start(u8_t trx, u32_t ticks_start, u32_t remainder)
DECL|radio_tmr_status_reset|function|void radio_tmr_status_reset(void)
DECL|radio_tmr_stop|function|void radio_tmr_stop(void)
DECL|radio_tmr_tifs_set|function|void radio_tmr_tifs_set(u32_t tifs)
DECL|radio_tx_enable|function|void radio_tx_enable(void)
DECL|radio_tx_power_set|function|void radio_tx_power_set(u32_t power)
DECL|radio_whiten_iv_set|function|void radio_whiten_iv_set(u32_t iv)
DECL|sfp_radio_isr|variable|sfp_radio_isr
