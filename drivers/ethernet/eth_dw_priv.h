DECL|DRIVERS_ETHERNET_ETH_DW_PRIV_H_|macro|DRIVERS_ETHERNET_ETH_DW_PRIV_H_
DECL|INT_ENABLE_NORMAL|macro|INT_ENABLE_NORMAL
DECL|INT_ENABLE_RX|macro|INT_ENABLE_RX
DECL|MAC_CONF_11_DUPLEX|macro|MAC_CONF_11_DUPLEX
DECL|MAC_CONF_14_RMII_100M|macro|MAC_CONF_14_RMII_100M
DECL|MAC_CONF_2_RX_EN|macro|MAC_CONF_2_RX_EN
DECL|MAC_CONF_3_TX_EN|macro|MAC_CONF_3_TX_EN
DECL|OP_MODE_13_START_TX|macro|OP_MODE_13_START_TX
DECL|OP_MODE_1_START_RX|macro|OP_MODE_1_START_RX
DECL|OP_MODE_21_TX_STORE_N_FORWARD|macro|OP_MODE_21_TX_STORE_N_FORWARD
DECL|OP_MODE_25_RX_STORE_N_FORWARD|macro|OP_MODE_25_RX_STORE_N_FORWARD
DECL|REG_ADDR_DMA_OPERATION|macro|REG_ADDR_DMA_OPERATION
DECL|REG_ADDR_INT_ENABLE|macro|REG_ADDR_INT_ENABLE
DECL|REG_ADDR_MACADDR_HI|macro|REG_ADDR_MACADDR_HI
DECL|REG_ADDR_MACADDR_LO|macro|REG_ADDR_MACADDR_LO
DECL|REG_ADDR_MAC_CONF|macro|REG_ADDR_MAC_CONF
DECL|REG_ADDR_RX_DESC_LIST|macro|REG_ADDR_RX_DESC_LIST
DECL|REG_ADDR_RX_POLL_DEMAND|macro|REG_ADDR_RX_POLL_DEMAND
DECL|REG_ADDR_STATUS|macro|REG_ADDR_STATUS
DECL|REG_ADDR_TX_DESC_LIST|macro|REG_ADDR_TX_DESC_LIST
DECL|REG_ADDR_TX_POLL_DEMAND|macro|REG_ADDR_TX_POLL_DEMAND
DECL|STATUS_RX_INT|macro|STATUS_RX_INT
DECL|addr2_chained|member|uint32_t addr2_chained : 1;
DECL|addr2_chained|member|uint32_t addr2_chained : 1;
DECL|base_addr|member|uint32_t base_addr;
DECL|buf1_ptr|member|uint8_t *buf1_ptr;
DECL|buf1_ptr|member|uint8_t *buf1_ptr;
DECL|buf2_ptr|member|uint8_t *buf2_ptr;
DECL|buf2_ptr|member|uint8_t *buf2_ptr;
DECL|chksum_ins_ctrl|member|uint32_t chksum_ins_ctrl : 2;
DECL|coll_cnt_slot_num|member|uint32_t coll_cnt_slot_num : 4;
DECL|config_func|member|eth_config_irq_t config_func;
DECL|d_addr_filt_fail|member|uint32_t d_addr_filt_fail : 1;
DECL|deferred_bit|member|uint32_t deferred_bit : 1;
DECL|dis_crc|member|uint32_t dis_crc : 1;
DECL|dis_int_compl|member|uint32_t dis_int_compl : 1;
DECL|dis_pad|member|uint32_t dis_pad : 1;
DECL|err_carrier_loss|member|uint32_t err_carrier_loss : 1;
DECL|err_crc|member|uint32_t err_crc : 1;
DECL|err_desc|member|uint32_t err_desc : 1;
DECL|err_dribble_bit|member|uint32_t err_dribble_bit : 1;
DECL|err_excess_coll|member|uint32_t err_excess_coll : 1;
DECL|err_excess_defer|member|uint32_t err_excess_defer : 1;
DECL|err_frm_flushed|member|uint32_t err_frm_flushed : 1;
DECL|err_ip_hdr|member|uint32_t err_ip_hdr : 1;
DECL|err_ip_payload|member|uint32_t err_ip_payload : 1;
DECL|err_jabber_tout|member|uint32_t err_jabber_tout : 1;
DECL|err_late_coll|member|uint32_t err_late_coll : 1;
DECL|err_late_coll|member|uint32_t err_late_coll : 1;
DECL|err_no_carrier|member|uint32_t err_no_carrier : 1;
DECL|err_overflow|member|uint32_t err_overflow : 1;
DECL|err_rx_mii|member|uint32_t err_rx_mii : 1;
DECL|err_rx_wdt|member|uint32_t err_rx_wdt : 1;
DECL|err_summary|member|uint32_t err_summary : 1;
DECL|err_summary|member|uint32_t err_summary : 1;
DECL|err_underflow|member|uint32_t err_underflow : 1;
DECL|eth_config_irq_t|typedef|typedef void (*eth_config_irq_t)(struct device *port);
DECL|eth_config|struct|struct eth_config {
DECL|eth_runtime|struct|struct eth_runtime {
DECL|eth_rx_desc|struct|struct eth_rx_desc {
DECL|eth_tx_desc|struct|struct eth_tx_desc {
DECL|ext_stat|member|uint32_t ext_stat : 1;
DECL|first_desc|member|uint32_t first_desc : 1;
DECL|first_seg_in_frm|member|uint32_t first_seg_in_frm : 1;
DECL|frm_len|member|uint32_t frm_len : 14;
DECL|frm_type|member|uint32_t frm_type : 1;
DECL|giant_frm|member|uint32_t giant_frm : 1;
DECL|intr_on_complete|member|uint32_t intr_on_complete : 1;
DECL|irq_num|member|uint32_t irq_num;
DECL|last_desc|member|uint32_t last_desc : 1;
DECL|last_seg_in_frm|member|uint32_t last_seg_in_frm : 1;
DECL|length_err|member|uint32_t length_err : 1;
DECL|own|member|uint32_t own : 1;
DECL|own|member|uint32_t own : 1;
DECL|pci_dev|member|struct pci_dev_info pci_dev;
DECL|rdes0|member|uint32_t rdes0;
DECL|rdes1|member|uint32_t rdes1;
DECL|replace_crc|member|uint32_t replace_crc : 1;
DECL|rx_buf1_sz|member|uint32_t rx_buf1_sz : 13;
DECL|rx_buf2_sz|member|uint32_t rx_buf2_sz : 13;
DECL|rx_buf|member|volatile uint8_t rx_buf[UIP_BUFSIZE];
DECL|rx_desc|member|volatile struct eth_rx_desc rx_desc;
DECL|rx_end_of_ring|member|uint32_t rx_end_of_ring : 1;
DECL|s_addr_filt_fail|member|uint32_t s_addr_filt_fail : 1;
DECL|shared_irq_dev_name|member|char *shared_irq_dev_name;
DECL|src_addr_ins_ctrl|member|uint32_t src_addr_ins_ctrl : 3;
DECL|tdes0|member|uint32_t tdes0;
DECL|tdes1|member|uint32_t tdes1;
DECL|tx_buf1_sz|member|uint32_t tx_buf1_sz : 13;
DECL|tx_buf2_sz|member|uint32_t tx_buf2_sz : 13;
DECL|tx_buf|member|volatile uint8_t tx_buf[UIP_BUFSIZE];
DECL|tx_desc|member|volatile struct eth_tx_desc tx_desc;
DECL|tx_end_of_ring|member|uint32_t tx_end_of_ring : 1;
DECL|tx_timestamp_en|member|uint32_t tx_timestamp_en : 1;
DECL|tx_timestamp_stat|member|uint32_t tx_timestamp_stat : 1;
DECL|uint32_t|member|uint32_t : 1;
DECL|uint32_t|member|uint32_t : 2;
DECL|uint32_t|member|uint32_t : 3;
DECL|vlan_frm|member|uint32_t vlan_frm : 1;
DECL|vlan_ins_ctrl|member|uint32_t vlan_ins_ctrl : 2;
DECL|vlan_tag|member|uint32_t vlan_tag : 1;
