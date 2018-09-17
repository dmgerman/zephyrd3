DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|SLIP_END|macro|SLIP_END
DECL|SLIP_ESC_END|macro|SLIP_ESC_END
DECL|SLIP_ESC_ESC|macro|SLIP_ESC_ESC
DECL|SLIP_ESC|macro|SLIP_ESC
DECL|STATE_ESC|enumerator|STATE_ESC,
DECL|STATE_GARBAGE|enumerator|STATE_GARBAGE,
DECL|STATE_OK|enumerator|STATE_OK,
DECL|get_ieee_addr|function|static void get_ieee_addr(void)
DECL|get_mac|function|static u8_t *get_mac(struct device *dev)
DECL|hexdump|function|static void hexdump(const char *str, const u8_t *packet, size_t length)
DECL|hexdump|macro|hexdump
DECL|ieee802154_dev|variable|ieee802154_dev
DECL|init_ieee802154|function|static bool init_ieee802154(void)
DECL|init_rx_queue|function|static void init_rx_queue(void)
DECL|init_tx_queue|function|static void init_tx_queue(void)
DECL|interrupt_handler|function|static void interrupt_handler(struct device *dev)
DECL|mac_addr|variable|mac_addr
DECL|main|function|void main(void)
DECL|net_recv_data|function|int net_recv_data(struct net_if *iface, struct net_pkt *pkt)
DECL|pkt_curr|variable|pkt_curr
DECL|process_config|function|static void process_config(struct net_pkt *pkt)
DECL|process_data|function|static void process_data(struct net_pkt *pkt)
DECL|process_request|function|static void process_request(struct net_buf *buf)
DECL|radio_api|variable|radio_api
DECL|rx_queue|variable|rx_queue
DECL|rx_thread_data|variable|rx_thread_data
DECL|rx_thread|function|static void rx_thread(void)
DECL|send_data|function|static void send_data(u8_t *cfg, u8_t *data, size_t len)
DECL|send_pkt_report|function|static void send_pkt_report(u8_t seq, u8_t status, u8_t num_tx)
DECL|set_channel|function|static void set_channel(u8_t chan)
DECL|slip_buffer|function|static size_t slip_buffer(u8_t *sbuf, struct net_buf *buf)
DECL|slip_buf|variable|slip_buf
DECL|slip_process_byte|function|static int slip_process_byte(unsigned char c)
DECL|slip_state|enum|enum slip_state {
DECL|slip_state|variable|slip_state
DECL|tx_queue|variable|tx_queue
DECL|tx_sem|variable|tx_sem
DECL|tx_thread_data|variable|tx_thread_data
DECL|tx_thread|function|static void tx_thread(void)
DECL|uart_dev|variable|uart_dev
