DECL|MODULO_INC|macro|MODULO_INC
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|eth0_api|variable|eth0_api
DECL|eth0_config|variable|eth0_config
DECL|eth0_data|variable|eth0_data
DECL|eth0_iface_init|function|static void eth0_iface_init(struct net_if *iface)
DECL|eth0_irq_config|function|static void eth0_irq_config(void)
DECL|eth_initialize|function|static int eth_initialize(struct device *dev)
DECL|eth_rx|function|static void eth_rx(struct gmac_queue *queue)
DECL|eth_tx|function|static int eth_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|frame_get|function|static struct net_buf *frame_get(struct gmac_queue *queue)
DECL|free_rx_bufs|function|static void free_rx_bufs(struct ring_buf *rx_pkt_list)
DECL|get_mck_clock_divisor|function|static int get_mck_clock_divisor(uint32_t mck)
DECL|gmac_init|function|static int gmac_init(Gmac *gmac, uint32_t gmac_ncfgr_val)
DECL|link_configure|function|static void link_configure(Gmac *gmac, uint32_t flags)
DECL|mac_addr_set|function|static void mac_addr_set(Gmac *gmac, uint8_t index, uint8_t mac_addr[6])
DECL|pins_eth0|variable|pins_eth0
DECL|priority_queue_init_as_idle|function|static int priority_queue_init_as_idle(Gmac *gmac, struct gmac_queue *queue)
DECL|queue0_isr|function|static void queue0_isr(void *arg)
DECL|queue_init|function|static int queue_init(Gmac *gmac, struct gmac_queue *queue)
DECL|ring_buf_get|function|static uint32_t ring_buf_get(struct ring_buf *rb)
DECL|ring_buf_put|function|static void ring_buf_put(struct ring_buf *rb, uint32_t val)
DECL|ring_buf_reset|function|static void ring_buf_reset(struct ring_buf *rb)
DECL|rx_buf_list_que0|variable|rx_buf_list_que0
DECL|rx_descriptors_init|function|static int rx_descriptors_init(Gmac *gmac, struct gmac_queue *queue)
DECL|rx_error_handler|function|static void rx_error_handler(Gmac *gmac, struct gmac_queue *queue)
DECL|tx_completed|function|static void tx_completed(Gmac *gmac, struct gmac_queue *queue)
DECL|tx_descriptors_init|function|static void tx_descriptors_init(Gmac *gmac, struct gmac_queue *queue)
DECL|tx_error_handler|function|static void tx_error_handler(Gmac *gmac, struct gmac_queue *queue)
DECL|tx_frame_list_que0|variable|tx_frame_list_que0
