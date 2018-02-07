DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|RX_STACK|macro|RX_STACK
DECL|RX_STACK|macro|RX_STACK
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|TX_STACK|macro|TX_STACK
DECL|TX_STACK|macro|TX_STACK
DECL|net_rx_priority2tc|function|int net_rx_priority2tc(enum net_priority prio)
DECL|net_tc_rx_init|function|void net_tc_rx_init(void)
DECL|net_tc_submit_to_rx_queue|function|void net_tc_submit_to_rx_queue(u8_t tc, struct net_pkt *pkt)
DECL|net_tc_submit_to_tx_queue|function|void net_tc_submit_to_tx_queue(u8_t tc, struct net_pkt *pkt)
DECL|net_tc_tx_init|function|void net_tc_tx_init(void)
DECL|net_tx_priority2tc|function|int net_tx_priority2tc(enum net_priority prio)
DECL|rx_classes|variable|rx_classes
DECL|rx_tc2thread|function|static int rx_tc2thread(int tc)
DECL|tx_classes|variable|tx_classes
DECL|tx_tc2thread|function|static int tx_tc2thread(int tc)
