DECL|DEBUG|macro|DEBUG
DECL|PACKET_INPUT|enumerator|PACKET_INPUT
DECL|PROCESS_THREAD|function|PROCESS_THREAD(tcpip_process, ev, data, buf)
DECL|TCP_POLL|enumerator|TCP_POLL,
DECL|TCP_SYN|macro|TCP_SYN
DECL|UDP_POLL|enumerator|UDP_POLL,
DECL|UIP_ICMP_BUF|macro|UIP_ICMP_BUF
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_TCP_BUF|macro|UIP_TCP_BUF
DECL|check_for_tcp_syn|function|check_for_tcp_syn(struct net_buf *buf)
DECL|eventhandler|function|eventhandler(process_event_t ev, process_data_t data, struct net_buf *buf)
DECL|icmp6_new|function|icmp6_new(void *appstate) {
DECL|internal_state|struct|static struct internal_state {
DECL|listenports|member|struct listenport listenports[UIP_LISTENPORTS];
DECL|listenport|struct|struct listenport {
DECL|outputfunc|variable|outputfunc
DECL|outputfunc|variable|outputfunc
DECL|packet_input|function|packet_input(struct net_buf *buf)
DECL|periodic|variable|periodic
DECL|port|member|uint16_t port;
DECL|p|member|struct process *p;
DECL|p|member|struct process *p;
DECL|start_periodic_tcp_timer|function|start_periodic_tcp_timer(void)
DECL|s|variable|s
DECL|tcp_attach|function|tcp_attach(struct uip_conn *conn, void *appstate)
DECL|tcp_connect|function|tcp_connect(uip_ipaddr_t *ripaddr, uint16_t port, void *appstate)
DECL|tcp_listen|function|tcp_listen(uint16_t port)
DECL|tcp_unlisten|function|tcp_unlisten(uint16_t port)
DECL|tcpip_event|variable|tcpip_event
DECL|tcpip_icmp6_call|function|tcpip_icmp6_call(uint8_t type)
DECL|tcpip_icmp6_event|variable|tcpip_icmp6_event
DECL|tcpip_input|function|tcpip_input(struct net_buf *buf)
DECL|tcpip_ipv6_output|function|tcpip_ipv6_output(struct net_buf *buf)
DECL|tcpip_is_forwarding|variable|tcpip_is_forwarding
DECL|tcpip_output|function|tcpip_output(struct net_buf *buf, const uip_lladdr_t *a)
DECL|tcpip_output|function|tcpip_output(void)
DECL|tcpip_poll_tcp|function|tcpip_poll_tcp(struct uip_conn *conn)
DECL|tcpip_poll_udp|function|tcpip_poll_udp(struct uip_udp_conn *conn)
DECL|tcpip_set_outputfunc|function|tcpip_set_outputfunc(uint8_t (*f)(struct net_buf *buf, const uip_lladdr_t *))
DECL|tcpip_set_outputfunc|function|tcpip_set_outputfunc(uint8_t (*f)(void))
DECL|tcpip_uipcall|function|tcpip_uipcall(struct net_buf *buf)
DECL|udp_attach|function|udp_attach(struct uip_udp_conn *conn, void *appstate)
DECL|udp_broadcast_new|function|udp_broadcast_new(uint16_t port, void *appstate)
DECL|udp_new|function|udp_new(const uip_ipaddr_t *ripaddr, uint16_t port, void *appstate)
