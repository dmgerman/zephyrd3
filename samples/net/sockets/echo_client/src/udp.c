DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|RECV_BUF_SIZE|macro|RECV_BUF_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|UDP_SLEEP|macro|UDP_SLEEP
DECL|UDP_WAIT|macro|UDP_WAIT
DECL|compare_udp_data|function|static int compare_udp_data(struct data *data, const char *buf, u32_t received)
DECL|process_udp_proto|function|static int process_udp_proto(struct data *data)
DECL|process_udp|function|int process_udp(void)
DECL|recv_buf|variable|recv_buf
DECL|send_udp_data|function|static int send_udp_data(struct data *data)
DECL|start_udp_proto|function|static int start_udp_proto(struct data *data, struct sockaddr *addr, socklen_t addrlen)
DECL|start_udp|function|int start_udp(void)
DECL|stop_udp|function|void stop_udp(void)
DECL|wait_reply|function|static void wait_reply(struct k_work *work)
DECL|wait_transmit|function|static void wait_transmit(struct k_work *work)
