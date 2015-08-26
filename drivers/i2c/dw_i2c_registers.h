DECL|DW_INTR_STAT_ACTIVITY|macro|DW_INTR_STAT_ACTIVITY
DECL|DW_INTR_STAT_GEN_CALL|macro|DW_INTR_STAT_GEN_CALL
DECL|DW_INTR_STAT_MST_ON_HOLD|macro|DW_INTR_STAT_MST_ON_HOLD
DECL|DW_INTR_STAT_RD_REQ|macro|DW_INTR_STAT_RD_REQ
DECL|DW_INTR_STAT_RESTART_DET|macro|DW_INTR_STAT_RESTART_DET
DECL|DW_INTR_STAT_RX_DONE|macro|DW_INTR_STAT_RX_DONE
DECL|DW_INTR_STAT_RX_FULL|macro|DW_INTR_STAT_RX_FULL
DECL|DW_INTR_STAT_RX_OVER|macro|DW_INTR_STAT_RX_OVER
DECL|DW_INTR_STAT_RX_UNDER|macro|DW_INTR_STAT_RX_UNDER
DECL|DW_INTR_STAT_START_DET|macro|DW_INTR_STAT_START_DET
DECL|DW_INTR_STAT_STOP_DET|macro|DW_INTR_STAT_STOP_DET
DECL|DW_INTR_STAT_TX_ABRT|macro|DW_INTR_STAT_TX_ABRT
DECL|DW_INTR_STAT_TX_EMPTY|macro|DW_INTR_STAT_TX_EMPTY
DECL|DW_INTR_STAT_TX_OVER|macro|DW_INTR_STAT_TX_OVER
DECL|IC_CON_10BIT_ADDR_MASTER|macro|IC_CON_10BIT_ADDR_MASTER
DECL|IC_CON_10BIT_ADDR_SLAVE|macro|IC_CON_10BIT_ADDR_SLAVE
DECL|IC_CON_MASTER_MODE|macro|IC_CON_MASTER_MODE
DECL|IC_CON_RESTART_EN|macro|IC_CON_RESTART_EN
DECL|IC_CON_SLAVE_DISABLE|macro|IC_CON_SLAVE_DISABLE
DECL|IC_CON_SPEED_MASK|macro|IC_CON_SPEED_MASK
DECL|IC_CON_STOP_DET_IFADDR|macro|IC_CON_STOP_DET_IFADDR
DECL|IC_CON_TX_INTR_MODE|macro|IC_CON_TX_INTR_MODE
DECL|IC_DATA_CMD_CMD|macro|IC_DATA_CMD_CMD
DECL|IC_DATA_CMD_DAT_MASK|macro|IC_DATA_CMD_DAT_MASK
DECL|IC_DATA_CMD_RESTART|macro|IC_DATA_CMD_RESTART
DECL|IC_DATA_CMD_STOP|macro|IC_DATA_CMD_STOP
DECL|IC_ENABLE_ABORT|macro|IC_ENABLE_ABORT
DECL|IC_ENABLE_ENABLE|macro|IC_ENABLE_ENABLE
DECL|__DRIVERS_DW_I2C_REGISTERS_H|macro|__DRIVERS_DW_I2C_REGISTERS_H
DECL|abort|member|uint16_t abort : 1 __packed;
DECL|activity|member|uint16_t activity : 1 __packed;
DECL|activity|member|uint32_t activity : 1 __packed;
DECL|add_encoded_params|member|uint32_t add_encoded_params : 1 __packed;
DECL|addr_master_10bit|member|uint16_t addr_master_10bit : 1 __packed;
DECL|addr_slave_10bit|member|uint16_t addr_slave_10bit : 1 __packed;
DECL|apb_data_width|member|uint32_t apb_data_width : 2 __packed;
DECL|bits|member|} bits;
DECL|bits|member|} bits;
DECL|bits|member|} bits;
DECL|bits|member|} bits;
DECL|bits|member|} bits;
DECL|bits|member|} bits;
DECL|bits|member|} bits;
DECL|bits|member|} bits;
DECL|cmd|member|uint16_t cmd : 1 __packed;
DECL|dat|member|uint16_t dat : 8 __packed;
DECL|dummy10|member|uint16_t dummy10;
DECL|dummy11|member|uint16_t dummy11;
DECL|dummy12|member|uint16_t dummy12;
DECL|dummy13|member|uint16_t dummy13;
DECL|dummy14|member|uint16_t dummy14;
DECL|dummy15|member|uint16_t dummy15;
DECL|dummy16|member|uint16_t dummy16;
DECL|dummy17|member|uint16_t dummy17;
DECL|dummy18|member|uint16_t dummy18;
DECL|dummy19|member|uint16_t dummy19;
DECL|dummy1|member|uint16_t dummy1;
DECL|dummy20|member|uint16_t dummy20;
DECL|dummy21|member|uint16_t dummy21;
DECL|dummy22|member|uint16_t dummy22;
DECL|dummy23|member|uint16_t dummy23;
DECL|dummy24|member|uint16_t dummy24;
DECL|dummy25|member|uint16_t dummy25;
DECL|dummy26|member|uint16_t dummy26;
DECL|dummy27|member|uint16_t dummy27;
DECL|dummy28|member|uint16_t dummy28;
DECL|dummy2|member|uint16_t dummy2;
DECL|dummy3|member|uint16_t dummy3;
DECL|dummy4|member|uint16_t dummy4;
DECL|dummy5|member|uint16_t dummy5;
DECL|dummy6|member|uint16_t dummy6;
DECL|dummy7|member|uint16_t dummy7;
DECL|dummy8|member|uint16_t dummy8;
DECL|dummy9|member|uint16_t dummy9;
DECL|dw_i2c_registers|struct|struct dw_i2c_registers {
DECL|enable|member|uint16_t enable : 1 __packed;
DECL|filler|member|uint8_t filler[72];
DECL|gc_or_start|member|uint16_t gc_or_start : 1 __packed;
DECL|gen_call|member|uint16_t gen_call : 1 __packed;
DECL|has_dma|member|uint32_t has_dma : 1 __packed;
DECL|hc_count_values|member|uint32_t hc_count_values : 1 __packed;
DECL|ic_10bitaddr_master|member|uint16_t ic_10bitaddr_master : 1 __packed;
DECL|ic_ack_general_call|member|uint32_t ic_ack_general_call; /* offset 0x98 */
DECL|ic_clr_activity|member|uint16_t ic_clr_activity; /* offset 0x5C */
DECL|ic_clr_gen_call|member|uint16_t ic_clr_gen_call; /* offset 0x68 */
DECL|ic_clr_intr|member|uint16_t ic_clr_intr; /* offset 0x40 */
DECL|ic_clr_rd_req|member|uint16_t ic_clr_rd_req; /* offset 0x50 */
DECL|ic_clr_restart_det|member|uint16_t ic_clr_restart_det; /* offset 0xA8 */
DECL|ic_clr_rx_done|member|uint16_t ic_clr_rx_done; /* offset 0x58 */
DECL|ic_clr_rx_over|member|uint16_t ic_clr_rx_over; /* offset 0x48 */
DECL|ic_clr_rx_under|member|uint16_t ic_clr_rx_under; /* offset 0x44 */
DECL|ic_clr_start_det|member|uint16_t ic_clr_start_det; /* offset 0x64 */
DECL|ic_clr_stop_det|member|uint16_t ic_clr_stop_det; /* offset 0x60 */
DECL|ic_clr_tx_abrt|member|uint16_t ic_clr_tx_abrt; /* offset 0x54 */
DECL|ic_clr_tx_over|member|uint16_t ic_clr_tx_over; /* offset 0x4C */
DECL|ic_comp_param_1_register|union|union ic_comp_param_1_register {
DECL|ic_comp_param_1|member|union ic_comp_param_1_register ic_comp_param_1; /* offset 0xF4 */
DECL|ic_comp_type|member|uint32_t ic_comp_type; /* offset 0xFC */
DECL|ic_comp_version|member|uint32_t ic_comp_version; /* offset 0xF8 */
DECL|ic_con_register|union|union ic_con_register {
DECL|ic_con|member|union ic_con_register ic_con; /* offset 0x00 */
DECL|ic_data_cmd_register|union|union ic_data_cmd_register {
DECL|ic_data_cmd|member|union ic_data_cmd_register ic_data_cmd; /* offset 0x10 */
DECL|ic_dma_cr|member|uint32_t ic_dma_cr; /* offset 0x88 */
DECL|ic_dma_rdlr|member|uint32_t ic_dma_rdlr; /* offset 0x90 */
DECL|ic_dma_tdlr|member|uint32_t ic_dma_tdlr; /* offset 0x8C */
DECL|ic_enable_register|union|union ic_enable_register {
DECL|ic_enable_status|member|uint32_t ic_enable_status; /* offset 0x9C */
DECL|ic_enable|member|union ic_enable_register ic_enable; /* offset 0x6c */
DECL|ic_fs_scl_hcnt|member|uint16_t ic_fs_scl_hcnt; /* offset 0x1C */
DECL|ic_fs_scl_lcnt|member|uint16_t ic_fs_scl_lcnt; /* offset 0x20 */
DECL|ic_fs_spklen|member|uint32_t ic_fs_spklen; /* offset 0xA0 */
DECL|ic_hs_maddr|member|uint16_t ic_hs_maddr; /* offset 0x0C */
DECL|ic_hs_scl_hcnt|member|uint16_t ic_hs_scl_hcnt; /* offset 0x24 */
DECL|ic_hs_scl_lcnt|member|uint16_t ic_hs_scl_lcnt; /* offset 0x28 */
DECL|ic_hs_spklen|member|uint32_t ic_hs_spklen; /* offset 0xA4 */
DECL|ic_interrupt_register|union|union ic_interrupt_register {
DECL|ic_intr_mask|member|union ic_interrupt_register ic_intr_mask; /* offset 0x30 */
DECL|ic_intr_stat|member|union ic_interrupt_register ic_intr_stat; /* offset 0x2C */
DECL|ic_raw_intr_stat|member|union ic_interrupt_register ic_raw_intr_stat; /* offset 0x34 */
DECL|ic_rx_tl|member|uint16_t ic_rx_tl; /* offset 0x38 */
DECL|ic_rxflr|member|uint32_t ic_rxflr; /* offset 0x78 */
DECL|ic_sar_register|union|union ic_sar_register {
DECL|ic_sar|member|uint16_t ic_sar : 9 __packed;
DECL|ic_sar|member|union ic_sar_register ic_sar; /* offset 0x08 */
DECL|ic_sda_hold|member|uint32_t ic_sda_hold; /* offset 0x7C */
DECL|ic_sda_setup|member|uint32_t ic_sda_setup; /* offset 0x94 */
DECL|ic_slv_data_nack_only|member|uint32_t ic_slv_data_nack_only; /* offset 0x84 */
DECL|ic_ss_scl_hcnt|member|uint16_t ic_ss_scl_hcnt; /* offset 0x14 */
DECL|ic_ss_scl_lcnt|member|uint16_t ic_ss_scl_lcnt; /* offset 0x18 */
DECL|ic_status_register|union|union ic_status_register {
DECL|ic_status|member|union ic_status_register ic_status; /* offset 0x70 */
DECL|ic_tar_register|union|union ic_tar_register {
DECL|ic_tar|member|uint16_t ic_tar : 9 __packed;
DECL|ic_tar|member|union ic_tar_register ic_tar; /* offset 0x04 */
DECL|ic_tx_abrt_source|member|uint32_t ic_tx_abrt_source; /* offset 0x80 */
DECL|ic_tx_tl|member|uint16_t ic_tx_tl; /* offset 0x3C */
DECL|ic_txflr|member|uint32_t ic_txflr; /* offset 0x74 */
DECL|intr_io|member|uint32_t intr_io : 1 __packed;
DECL|master_mode|member|uint16_t master_mode : 1 __packed;
DECL|max_speed_mode|member|uint32_t max_speed_mode : 2 __packed;
DECL|mst_activity|member|uint32_t mst_activity : 1 __packed;
DECL|mst_on_hold|member|uint16_t mst_on_hold : 1 __packed;
DECL|raw|member|uint16_t raw;
DECL|raw|member|uint16_t raw;
DECL|raw|member|uint16_t raw;
DECL|raw|member|uint16_t raw;
DECL|raw|member|uint16_t raw;
DECL|raw|member|uint16_t raw;
DECL|raw|member|uint32_t raw;
DECL|raw|member|uint32_t raw;
DECL|rd_req|member|uint16_t rd_req : 1 __packed;
DECL|reserved|member|uint16_t reserved : 13 __packed;
DECL|reserved|member|uint16_t reserved : 2 __packed;
DECL|reserved|member|uint16_t reserved : 3 __packed;
DECL|reserved|member|uint16_t reserved : 4 __packed;
DECL|reserved|member|uint16_t reserved : 6 __packed;
DECL|reserved|member|uint32_t reserved : 24 __packed;
DECL|reserved|member|uint32_t reserved : 7 __packed;
DECL|restart_det|member|uint16_t restart_det : 1 __packed;
DECL|restart_en|member|uint16_t restart_en : 1 __packed;
DECL|restart|member|uint16_t restart : 1 __packed;
DECL|rff|member|uint32_t rff : 1 __packed;
DECL|rfne|member|uint32_t rfne : 1 __packed;
DECL|rx_buffer_depth|member|uint32_t rx_buffer_depth : 8 __packed;
DECL|rx_done|member|uint16_t rx_done : 1 __packed;
DECL|rx_fifo_full|member|uint16_t rx_fifo_full : 1 __packed;
DECL|rx_full|member|uint16_t rx_full : 1 __packed;
DECL|rx_over|member|uint16_t rx_over : 1 __packed;
DECL|rx_under|member|uint16_t rx_under : 1 __packed;
DECL|slave_disable|member|uint16_t slave_disable : 1 __packed;
DECL|slv_activity|member|uint32_t slv_activity : 1 __packed;
DECL|special|member|uint16_t special : 1 __packed;
DECL|speed|member|uint16_t speed : 2 __packed;
DECL|start_det|member|uint16_t start_det : 1 __packed;
DECL|stop_det|member|uint16_t stop_det : 1 __packed;
DECL|stop_det|member|uint16_t stop_det : 1 __packed;
DECL|stop|member|uint16_t stop : 1 __packed;
DECL|tfe|member|uint32_t tfe : 1 __packed;
DECL|tfnf|member|uint32_t tfnf : 1 __packed;
DECL|tx_abrt|member|uint16_t tx_abrt : 1 __packed;
DECL|tx_buffer_depth|member|uint32_t tx_buffer_depth : 8 __packed;
DECL|tx_empty_ctl|member|uint16_t tx_empty_ctl : 1 __packed;
DECL|tx_empty|member|uint16_t tx_empty : 1 __packed;
DECL|tx_over|member|uint16_t tx_over : 1 __packed;
