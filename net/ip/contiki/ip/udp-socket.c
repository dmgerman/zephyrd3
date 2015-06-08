DECL|PROCESS_THREAD|function|PROCESS_THREAD(udp_socket_process, ev, data, buf)
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|init|function|init(void)
DECL|udp_socket_bind|function|udp_socket_bind(struct udp_socket *c, uint16_t local_port)
DECL|udp_socket_close|function|udp_socket_close(struct udp_socket *c)
DECL|udp_socket_connect|function|udp_socket_connect(struct udp_socket *c, uip_ipaddr_t *remote_addr, uint16_t remote_port)
DECL|udp_socket_register|function|udp_socket_register(struct udp_socket *c, void *ptr, udp_socket_input_callback_t input_callback)
DECL|udp_socket_sendto|function|udp_socket_sendto(struct net_buf *buf, struct udp_socket *c, const void *data, uint16_t datalen, const uip_ipaddr_t *to, uint16_t port)
DECL|udp_socket_send|function|udp_socket_send(struct net_buf *buf, struct udp_socket *c, const void *data, uint16_t datalen)
