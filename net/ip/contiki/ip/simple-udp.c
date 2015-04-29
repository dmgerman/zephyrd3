DECL|DEBUG|macro|DEBUG
DECL|PROCESS_THREAD|function|PROCESS_THREAD(simple_udp_process, ev, data, buf)
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_LOG|macro|UIP_LOG
DECL|init_simple_udp|function|init_simple_udp(void)
DECL|simple_udp_register|function|simple_udp_register(struct simple_udp_connection *c, uint16_t local_port, uip_ipaddr_t *remote_addr, uint16_t remote_port, simple_udp_callback receive_callback,
DECL|simple_udp_sendto_port|function|simple_udp_sendto_port(struct net_buf *buf, struct simple_udp_connection *c, const void *data, uint16_t datalen, const uip_ipaddr_t *to, uint16_t port)
DECL|simple_udp_sendto|function|simple_udp_sendto(struct net_buf *buf, struct simple_udp_connection *c, const void *data, uint16_t datalen, const uip_ipaddr_t *to)
DECL|simple_udp_send|function|simple_udp_send(struct net_buf *buf, struct simple_udp_connection *c, const void *data, uint16_t datalen)
DECL|started|variable|started
