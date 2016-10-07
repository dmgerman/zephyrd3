DECL|SLIP_END|macro|SLIP_END
DECL|SLIP_ESC_END|macro|SLIP_ESC_END
DECL|SLIP_ESC_ESC|macro|SLIP_ESC_ESC
DECL|SLIP_ESC|macro|SLIP_ESC
DECL|STATE_ESC|enumerator|STATE_ESC,
DECL|STATE_GARBAGE|enumerator|STATE_GARBAGE,
DECL|STATE_OK|enumerator|STATE_OK,
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|get_ieee_addr|function|static void get_ieee_addr(void)
DECL|get_mac|function|static uint8_t *get_mac(struct device *dev)
DECL|hexdump|function|static void hexdump(const char *str, const uint8_t *packet, size_t length)
DECL|ieee802154_dev|variable|ieee802154_dev
DECL|ieee802154_init|function|void ieee802154_init(struct net_if *iface)
DECL|ieee802154_radio_handle_ack|function|extern enum net_verdict ieee802154_radio_handle_ack(struct net_if *iface, struct net_buf *buf)
DECL|ieee802154_radio_send|function|int ieee802154_radio_send(struct net_if *iface, struct net_buf *buf)
DECL|init_ieee802154|function|static bool init_ieee802154(void)
DECL|init_rx_queue|function|static void init_rx_queue(void)
DECL|init_tx_queue|function|static void init_tx_queue(void)
DECL|interrupt_handler|function|static void interrupt_handler(struct device *dev)
DECL|mac_addr|variable|mac_addr
DECL|main|function|void main(void)
DECL|net_recv_data|function|int net_recv_data(struct net_if *iface, struct net_buf *pkt)
DECL|pkt_curr|variable|pkt_curr
DECL|process_config|function|static void process_config(struct net_buf *pkt)
DECL|process_data|function|static void process_data(struct net_buf *pkt)
DECL|process_request|function|static void process_request(struct net_buf *buf)
DECL|radio_api|variable|radio_api
DECL|rx_fiber_id|variable|rx_fiber_id
DECL|rx_fiber_stack|variable|rx_fiber_stack
DECL|rx_fiber|function|static void rx_fiber(void)
DECL|rx_queue|variable|rx_queue
DECL|send_data|function|static void send_data(uint8_t *cfg, uint8_t *data, size_t len)
DECL|send_pkt_report|function|static void send_pkt_report(uint8_t seq, uint8_t status, uint8_t num_tx)
DECL|set_channel|function|static void set_channel(uint8_t chan)
DECL|slip_buffer|function|static size_t slip_buffer(uint8_t *sbuf, struct net_buf *buf)
DECL|slip_buf|variable|slip_buf
DECL|slip_process_byte|function|static int slip_process_byte(unsigned char c)
DECL|slip_state|enum|enum slip_state {
DECL|slip_state|variable|slip_state
DECL|tx_fiber_id|variable|tx_fiber_id
DECL|tx_fiber_stack|variable|tx_fiber_stack
DECL|tx_fiber|function|static void tx_fiber(void)
DECL|tx_queue|variable|tx_queue
DECL|tx_sem|variable|tx_sem
DECL|uart_dev|variable|uart_dev
