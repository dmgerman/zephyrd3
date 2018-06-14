DECL|MODULO_INC|macro|MODULO_INC
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|check_gptp_msg|function|static struct gptp_hdr *check_gptp_msg(struct net_if *iface, struct net_pkt *pkt)
DECL|dcache_clean|function|static inline void dcache_clean(u32_t addr, u32_t size)
DECL|dcache_enabled|variable|dcache_enabled
DECL|dcache_invalidate|function|static inline void dcache_invalidate(u32_t addr, u32_t size)
DECL|eth0_config|variable|eth0_config
DECL|eth0_data|variable|eth0_data
DECL|eth0_iface_init|function|static void eth0_iface_init(struct net_if *iface)
DECL|eth0_irq_config|function|static void eth0_irq_config(void)
DECL|eth_api|variable|eth_api
DECL|eth_dev|member|struct device *eth_dev;
DECL|eth_initialize|function|static int eth_initialize(struct device *dev)
DECL|eth_rx|function|static void eth_rx(struct gmac_queue *queue)
DECL|eth_sam_gmac_get_capabilities|function|static enum ethernet_hw_caps eth_sam_gmac_get_capabilities(struct device *dev)
DECL|eth_sam_gmac_get_ptp_clock|function|static struct device *eth_sam_gmac_get_ptp_clock(struct device *dev)
DECL|eth_tx_timeout_work|function|static void eth_tx_timeout_work(struct k_work *item)
DECL|eth_tx|function|static int eth_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|frame_get|function|static struct net_pkt *frame_get(struct gmac_queue *queue)
DECL|free_rx_bufs|function|static void free_rx_bufs(struct ring_buf *rx_frag_list)
DECL|get_current_ts|function|static inline struct net_ptp_time get_current_ts(Gmac *gmac)
DECL|get_iface|function|static inline struct net_if *get_iface(struct eth_sam_dev_data *ctx, u16_t vlan_tag)
DECL|get_mac_addr_from_i2c_eeprom|function|void get_mac_addr_from_i2c_eeprom(u8_t mac_addr[6])
DECL|get_mck_clock_divisor|function|static int get_mck_clock_divisor(u32_t mck)
DECL|get_ptp_event_rx_ts|function|static inline struct net_ptp_time get_ptp_event_rx_ts(Gmac *gmac)
DECL|get_ptp_event_tx_ts|function|static inline struct net_ptp_time get_ptp_event_tx_ts(Gmac *gmac)
DECL|get_ptp_peer_event_rx_ts|function|static inline struct net_ptp_time get_ptp_peer_event_rx_ts(Gmac *gmac)
DECL|get_ptp_peer_event_tx_ts|function|static inline struct net_ptp_time get_ptp_peer_event_tx_ts(Gmac *gmac)
DECL|gmac_desc_append_w0|function|static inline void gmac_desc_append_w0(struct gmac_desc *desc, u32_t value)
DECL|gmac_desc_append_w1|function|static inline void gmac_desc_append_w1(struct gmac_desc *desc, u32_t value)
DECL|gmac_desc_get_w0|function|static inline u32_t gmac_desc_get_w0(struct gmac_desc *desc)
DECL|gmac_desc_get_w1|function|static inline u32_t gmac_desc_get_w1(struct gmac_desc *desc)
DECL|gmac_desc_set_w0|function|static inline void gmac_desc_set_w0(struct gmac_desc *desc, u32_t value)
DECL|gmac_desc_set_w1|function|static inline void gmac_desc_set_w1(struct gmac_desc *desc, u32_t value)
DECL|gmac_init|function|static int gmac_init(Gmac *gmac, u32_t gmac_ncfgr_val)
DECL|link_configure|function|static void link_configure(Gmac *gmac, u32_t flags)
DECL|mac_addr_set|function|static void mac_addr_set(Gmac *gmac, u8_t index, u8_t mac_addr[6])
DECL|need_timestamping|function|static bool need_timestamping(struct gptp_hdr *hdr)
DECL|nonpriority_queue_init|function|static int nonpriority_queue_init(Gmac *gmac, struct gmac_queue *queue)
DECL|pins_eth0|variable|pins_eth0
DECL|priority2queue|function|static int priority2queue(enum net_priority priority)
DECL|priority_queue_init_as_idle|function|static int priority_queue_init_as_idle(Gmac *gmac, struct gmac_queue *queue)
DECL|priority_queue_init|function|static int priority_queue_init(Gmac *gmac, struct gmac_queue *queue)
DECL|priority_queue_isr|function|static inline void priority_queue_isr(void *arg, unsigned int queue_idx)
DECL|ptp_api|variable|ptp_api
DECL|ptp_clock_sam_gmac_adjust|function|static int ptp_clock_sam_gmac_adjust(struct device *dev, int increment)
DECL|ptp_clock_sam_gmac_get|function|static int ptp_clock_sam_gmac_get(struct device *dev, struct net_ptp_time *tm)
DECL|ptp_clock_sam_gmac_rate_adjust|function|static int ptp_clock_sam_gmac_rate_adjust(struct device *dev, float ratio)
DECL|ptp_clock_sam_gmac_set|function|static int ptp_clock_sam_gmac_set(struct device *dev, struct net_ptp_time *tm)
DECL|ptp_context|struct|struct ptp_context {
DECL|ptp_gmac_0_context|variable|ptp_gmac_0_context
DECL|ptp_gmac_init|function|static int ptp_gmac_init(struct device *port)
DECL|queue0_isr|function|static void queue0_isr(void *arg)
DECL|queue1_isr|function|static void queue1_isr(void *arg)
DECL|queue2_isr|function|static void queue2_isr(void *arg)
DECL|queue_init|function|static int queue_init(Gmac *gmac, struct gmac_queue *queue)
DECL|ring_buf_get|function|static u32_t ring_buf_get(struct ring_buf *rb)
DECL|ring_buf_put|function|static void ring_buf_put(struct ring_buf *rb, u32_t val)
DECL|ring_buf_reset|function|static void ring_buf_reset(struct ring_buf *rb)
DECL|rx_descriptors_init|function|static int rx_descriptors_init(Gmac *gmac, struct gmac_queue *queue)
DECL|rx_error_handler|function|static void rx_error_handler(Gmac *gmac, struct gmac_queue *queue)
DECL|rx_frag_list_que0|variable|rx_frag_list_que0
DECL|rx_frag_list_que1|variable|rx_frag_list_que1
DECL|rx_frag_list_que2|variable|rx_frag_list_que2
DECL|timestamp_rx_pkt|function|static inline void timestamp_rx_pkt(Gmac *gmac, struct gptp_hdr *hdr, struct net_pkt *pkt)
DECL|timestamp_tx_pkt|function|static inline void timestamp_tx_pkt(Gmac *gmac, struct gptp_hdr *hdr, struct net_pkt *pkt)
DECL|tx_completed|function|static void tx_completed(Gmac *gmac, struct gmac_queue *queue)
DECL|tx_descriptors_init|function|static void tx_descriptors_init(Gmac *gmac, struct gmac_queue *queue)
DECL|tx_error_handler|function|static void tx_error_handler(Gmac *gmac, struct gmac_queue *queue)
DECL|tx_frame_list_que0|variable|tx_frame_list_que0
DECL|tx_frame_list_que1|variable|tx_frame_list_que1
DECL|tx_frame_list_que2|variable|tx_frame_list_que2
DECL|update_pkt_priority|function|static void update_pkt_priority(struct gptp_hdr *hdr, struct net_pkt *pkt)
