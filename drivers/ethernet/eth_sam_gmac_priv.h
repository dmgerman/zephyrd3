DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|GMAC_DCACHE_ALIGNMENT|macro|GMAC_DCACHE_ALIGNMENT
DECL|GMAC_DESC_ALIGNMENT|macro|GMAC_DESC_ALIGNMENT
DECL|GMAC_DESC_ALIGNMENT|macro|GMAC_DESC_ALIGNMENT
DECL|GMAC_FRAME_SIZE_MAX|macro|GMAC_FRAME_SIZE_MAX
DECL|GMAC_INTPQ_EN_FLAGS|macro|GMAC_INTPQ_EN_FLAGS
DECL|GMAC_INTPQ_RX_ERR_BITS|macro|GMAC_INTPQ_RX_ERR_BITS
DECL|GMAC_INTPQ_TX_ERR_BITS|macro|GMAC_INTPQ_TX_ERR_BITS
DECL|GMAC_INT_EN_FLAGS|macro|GMAC_INT_EN_FLAGS
DECL|GMAC_INT_RX_ERR_BITS|macro|GMAC_INT_RX_ERR_BITS
DECL|GMAC_INT_TX_ERR_BITS|macro|GMAC_INT_TX_ERR_BITS
DECL|GMAC_MTU|macro|GMAC_MTU
DECL|GMAC_PRIORITY_QUEUE_NO|macro|GMAC_PRIORITY_QUEUE_NO
DECL|GMAC_QUEUE_NO|macro|GMAC_QUEUE_NO
DECL|GMAC_QUE_0|enumerator|GMAC_QUE_0, /** Main queue */
DECL|GMAC_QUE_1|enumerator|GMAC_QUE_1, /** Priority queue 1 */
DECL|GMAC_QUE_2|enumerator|GMAC_QUE_2, /** Priority queue 2 */
DECL|GMAC_RXW0_ADDR|macro|GMAC_RXW0_ADDR
DECL|GMAC_RXW0_OWNERSHIP|macro|GMAC_RXW0_OWNERSHIP
DECL|GMAC_RXW0_WRAP|macro|GMAC_RXW0_WRAP
DECL|GMAC_RXW1_ADDRFOUND|macro|GMAC_RXW1_ADDRFOUND
DECL|GMAC_RXW1_ADDRMATCH|macro|GMAC_RXW1_ADDRMATCH
DECL|GMAC_RXW1_BROADCASTDETECTED|macro|GMAC_RXW1_BROADCASTDETECTED
DECL|GMAC_RXW1_CFI|macro|GMAC_RXW1_CFI
DECL|GMAC_RXW1_EOF|macro|GMAC_RXW1_EOF
DECL|GMAC_RXW1_FCS_STATUS|macro|GMAC_RXW1_FCS_STATUS
DECL|GMAC_RXW1_LEN|macro|GMAC_RXW1_LEN
DECL|GMAC_RXW1_MULTIHASHMATCH|macro|GMAC_RXW1_MULTIHASHMATCH
DECL|GMAC_RXW1_PRIORITYDETECTED|macro|GMAC_RXW1_PRIORITYDETECTED
DECL|GMAC_RXW1_SOF|macro|GMAC_RXW1_SOF
DECL|GMAC_RXW1_TYPEIDFOUND|macro|GMAC_RXW1_TYPEIDFOUND
DECL|GMAC_RXW1_TYPEIDMATCH|macro|GMAC_RXW1_TYPEIDMATCH
DECL|GMAC_RXW1_UNIHASHMATCH|macro|GMAC_RXW1_UNIHASHMATCH
DECL|GMAC_RXW1_VLANDETECTED|macro|GMAC_RXW1_VLANDETECTED
DECL|GMAC_RXW1_VLANPRIORITY|macro|GMAC_RXW1_VLANPRIORITY
DECL|GMAC_TXW1_CHKSUMERR|macro|GMAC_TXW1_CHKSUMERR
DECL|GMAC_TXW1_LASTBUFFER|macro|GMAC_TXW1_LASTBUFFER
DECL|GMAC_TXW1_LATECOLERR|macro|GMAC_TXW1_LATECOLERR
DECL|GMAC_TXW1_LEN|macro|GMAC_TXW1_LEN
DECL|GMAC_TXW1_NOCRC|macro|GMAC_TXW1_NOCRC
DECL|GMAC_TXW1_RETRYEXC|macro|GMAC_TXW1_RETRYEXC
DECL|GMAC_TXW1_TRANSERR|macro|GMAC_TXW1_TRANSERR
DECL|GMAC_TXW1_USED|macro|GMAC_TXW1_USED
DECL|GMAC_TXW1_WRAP|macro|GMAC_TXW1_WRAP
DECL|MAIN_QUEUE_RX_DESC_COUNT|macro|MAIN_QUEUE_RX_DESC_COUNT
DECL|MAIN_QUEUE_TX_DESC_COUNT|macro|MAIN_QUEUE_TX_DESC_COUNT
DECL|PRIORITY_QUEUE1_RX_DESC_COUNT|macro|PRIORITY_QUEUE1_RX_DESC_COUNT
DECL|PRIORITY_QUEUE1_RX_DESC_COUNT|macro|PRIORITY_QUEUE1_RX_DESC_COUNT
DECL|PRIORITY_QUEUE1_TX_DESC_COUNT|macro|PRIORITY_QUEUE1_TX_DESC_COUNT
DECL|PRIORITY_QUEUE1_TX_DESC_COUNT|macro|PRIORITY_QUEUE1_TX_DESC_COUNT
DECL|PRIORITY_QUEUE2_RX_DESC_COUNT|macro|PRIORITY_QUEUE2_RX_DESC_COUNT
DECL|PRIORITY_QUEUE2_RX_DESC_COUNT|macro|PRIORITY_QUEUE2_RX_DESC_COUNT
DECL|PRIORITY_QUEUE2_TX_DESC_COUNT|macro|PRIORITY_QUEUE2_TX_DESC_COUNT
DECL|PRIORITY_QUEUE2_TX_DESC_COUNT|macro|PRIORITY_QUEUE2_TX_DESC_COUNT
DECL|_ETH_SAM_GMAC_PRIV_H_|macro|_ETH_SAM_GMAC_PRIV_H_
DECL|buf|member|struct gmac_desc *buf;
DECL|buf|member|u32_t *buf;
DECL|config_func|member|void (*config_func)(void);
DECL|err_rx_flushed_count|member|volatile u32_t err_rx_flushed_count;
DECL|err_rx_frames_dropped|member|volatile u32_t err_rx_frames_dropped;
DECL|err_tx_flushed_count|member|volatile u32_t err_tx_flushed_count;
DECL|eth_sam_dev_cfg|struct|struct eth_sam_dev_cfg {
DECL|eth_sam_dev_data|struct|struct eth_sam_dev_data {
DECL|gmac_desc_list|struct|struct gmac_desc_list {
DECL|gmac_desc|struct|struct gmac_desc {
DECL|gmac_queue|struct|struct gmac_queue {
DECL|head|member|u16_t head;
DECL|head|member|u16_t head;
DECL|iface|member|struct net_if *iface;
DECL|len|member|u16_t len;
DECL|len|member|u16_t len;
DECL|mac_addr|member|u8_t mac_addr[6];
DECL|periph_id|member|u32_t periph_id;
DECL|phy|member|struct phy_sam_gmac_dev phy;
DECL|pin_list_size|member|u32_t pin_list_size;
DECL|pin_list|member|const struct soc_gpio_pin *pin_list;
DECL|ptp_clock|member|struct device *ptp_clock;
DECL|que_idx|member|enum queue_idx que_idx;
DECL|queue_idx|enum|enum queue_idx {
DECL|queue_list|member|struct gmac_queue queue_list[GMAC_QUEUE_NO];
DECL|regs|member|Gmac *regs;
DECL|ring_buf|struct|struct ring_buf {
DECL|rx_desc_list|member|struct gmac_desc_list rx_desc_list;
DECL|rx_frag_list|member|struct ring_buf rx_frag_list;
DECL|tail|member|u16_t tail;
DECL|tail|member|u16_t tail;
DECL|tx_desc_list|member|struct gmac_desc_list tx_desc_list;
DECL|tx_desc_sem|member|struct k_sem tx_desc_sem;
DECL|tx_frames|member|struct ring_buf tx_frames;
DECL|tx_timeout_work|member|struct k_delayed_work tx_timeout_work;
DECL|w0|member|u32_t w0;
DECL|w1|member|u32_t w1;
