DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|RECV_BUF_SIZE|macro|RECV_BUF_SIZE
DECL|compare_tcp_data|function|static int compare_tcp_data(struct data *data, const char *buf, u32_t received)
DECL|process_tcp_proto|function|static int process_tcp_proto(struct data *data)
DECL|process_tcp|function|int process_tcp(void)
DECL|send_tcp_data|function|static int send_tcp_data(struct data *data)
DECL|sendall|function|static ssize_t sendall(int sock, const void *buf, size_t len)
DECL|start_tcp_proto|function|static int start_tcp_proto(struct data *data, struct sockaddr *addr, socklen_t addrlen)
DECL|start_tcp|function|int start_tcp(void)
DECL|stop_tcp|function|void stop_tcp(void)
