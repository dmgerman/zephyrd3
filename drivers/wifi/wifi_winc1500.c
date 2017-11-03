DECL|HOSTNAME_MAX_SIZE|macro|HOSTNAME_MAX_SIZE
DECL|SOCKET_MSG_ACCEPT|enumerator|SOCKET_MSG_ACCEPT,
DECL|SOCKET_MSG_BIND|enumerator|SOCKET_MSG_BIND = 1,
DECL|SOCKET_MSG_CONNECT|enumerator|SOCKET_MSG_CONNECT,
DECL|SOCKET_MSG_DNS_RESOLVE|enumerator|SOCKET_MSG_DNS_RESOLVE,
DECL|SOCKET_MSG_LISTEN|enumerator|SOCKET_MSG_LISTEN,
DECL|SOCKET_MSG_RECVFROM|enumerator|SOCKET_MSG_RECVFROM,
DECL|SOCKET_MSG_RECV|enumerator|SOCKET_MSG_RECV,
DECL|SOCKET_MSG_SENDTO|enumerator|SOCKET_MSG_SENDTO,
DECL|SOCKET_MSG_SEND|enumerator|SOCKET_MSG_SEND,
DECL|SOCK_ERR_ADDR_ALREADY_IN_USE|enumerator|SOCK_ERR_ADDR_ALREADY_IN_USE = -2,
DECL|SOCK_ERR_ADDR_IS_REQUIRED|enumerator|SOCK_ERR_ADDR_IS_REQUIRED = -11,
DECL|SOCK_ERR_BUFFER_FULL|enumerator|SOCK_ERR_BUFFER_FULL = -14,
DECL|SOCK_ERR_CONN_ABORTED|enumerator|SOCK_ERR_CONN_ABORTED = -12,
DECL|SOCK_ERR_INVALID_ADDRESS|enumerator|SOCK_ERR_INVALID_ADDRESS = -1,
DECL|SOCK_ERR_INVALID_ARG|enumerator|SOCK_ERR_INVALID_ARG = -6,
DECL|SOCK_ERR_INVALID|enumerator|SOCK_ERR_INVALID = -9,
DECL|SOCK_ERR_MAX_LISTEN_SOCK|enumerator|SOCK_ERR_MAX_LISTEN_SOCK = -7,
DECL|SOCK_ERR_MAX_TCP_SOCK|enumerator|SOCK_ERR_MAX_TCP_SOCK = -3,
DECL|SOCK_ERR_MAX_UDP_SOCK|enumerator|SOCK_ERR_MAX_UDP_SOCK = -4,
DECL|SOCK_ERR_NO_ERROR|enumerator|SOCK_ERR_NO_ERROR = 0,
DECL|SOCK_ERR_TIMEOUT|enumerator|SOCK_ERR_TIMEOUT = -13,
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WINC1500_BIND_TIMEOUT|macro|WINC1500_BIND_TIMEOUT
DECL|WINC1500_LISTEN_TIMEOUT|macro|WINC1500_LISTEN_TIMEOUT
DECL|__SOCKET_H__|macro|__SOCKET_H__
DECL|accept_cb|member|net_tcp_accept_cb_t accept_cb;
DECL|accept_user_data|member|void *accept_user_data;
DECL|connect_cb|member|net_context_connect_cb_t connect_cb;
DECL|connect_user_data|member|void *connect_user_data;
DECL|context|member|struct net_context *context;
DECL|handle_socket_msg_accept|function|static void handle_socket_msg_accept(struct socket_data *sd, void *pvMsg)
DECL|handle_socket_msg_bind|function|static void handle_socket_msg_bind(struct socket_data *sd, void *pvMsg)
DECL|handle_socket_msg_connect|function|static void handle_socket_msg_connect(struct socket_data *sd, void *pvMsg)
DECL|handle_socket_msg_listen|function|static void handle_socket_msg_listen(struct socket_data *sd, void *pvMsg)
DECL|handle_socket_msg_recv|function|static bool handle_socket_msg_recv(SOCKET sock, struct socket_data *sd, void *pvMsg)
DECL|handle_wifi_con_state_changed|function|static void handle_wifi_con_state_changed(void *pvMsg)
DECL|handle_wifi_dhcp_conf|function|static void handle_wifi_dhcp_conf(void *pvMsg)
DECL|iface|member|struct net_if *iface;
DECL|mac|member|unsigned char mac[6];
DECL|pkt_buf|member|struct net_buf *pkt_buf;
DECL|prepare_pkt|function|static int prepare_pkt(struct socket_data *sock_data)
DECL|pu8Buffer|member|uint8 *pu8Buffer;
DECL|recv_cb|member|net_context_recv_cb_t recv_cb;
DECL|recv_user_data|member|void *recv_user_data;
DECL|ret_code|member|int ret_code;
DECL|rx_pkt|member|struct net_pkt *rx_pkt;
DECL|s16BufferSize|member|sint16 s16BufferSize;
DECL|s8Error|member|sint8 s8Error;
DECL|send_cb|member|net_context_send_cb_t send_cb;
DECL|send_user_data|member|void *send_user_data;
DECL|socket_data|member|struct socket_data socket_data[
DECL|socket_data|struct|struct socket_data {
DECL|socket_error_string|function|static char *socket_error_string(s8_t err)
DECL|socket_errors|enum|enum socket_errors {
DECL|socket_message_to_string|function|static char *socket_message_to_string(u8_t message)
DECL|socket_messages|enum|enum socket_messages {
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|status|member|sint8 status;
DECL|status|member|sint8 status;
DECL|strAddr|member|struct sockaddr_in strAddr;
DECL|strRemoteAddr|member|struct sockaddr_in strRemoteAddr;
DECL|tpfAppResolveCb|typedef|typedef void (*tpfAppResolveCb) (uint8 *pu8DomainName, uint32 u32ServerIP);
DECL|tpfAppSocketCb|typedef|typedef void (*tpfAppSocketCb) (SOCKET sock, uint8 u8Msg, void *pvMsg);
DECL|tstrSocketAcceptMsg|typedef|} tstrSocketAcceptMsg;
DECL|tstrSocketBindMsg|typedef|} tstrSocketBindMsg;
DECL|tstrSocketConnectMsg|typedef|} tstrSocketConnectMsg;
DECL|tstrSocketListenMsg|typedef|} tstrSocketListenMsg;
DECL|tstrSocketRecvMsg|typedef|} tstrSocketRecvMsg;
DECL|u16RemainingSize|member|uint16 u16RemainingSize;
DECL|w1500_data|variable|w1500_data
DECL|wait_sem|member|struct k_sem wait_sem;
DECL|wifi_cb_msg_2_str|function|static char *wifi_cb_msg_2_str(u8_t message_type)
DECL|winc1500_accept|function|static int winc1500_accept(struct net_context *context, net_tcp_accept_cb_t cb, s32_t timeout, void *user_data)
DECL|winc1500_api|variable|winc1500_api
DECL|winc1500_bind|function|static int winc1500_bind(struct net_context *context, const struct sockaddr *addr, socklen_t addrlen)
DECL|winc1500_connect|function|static int winc1500_connect(struct net_context *context, const struct sockaddr *addr, socklen_t addrlen, net_context_connect_cb_t cb, s32_t timeout,
DECL|winc1500_data|struct|struct winc1500_data {
DECL|winc1500_get|function|static int winc1500_get(sa_family_t family,enum net_sock_type type, enum net_ip_protocol ip_proto, struct net_context **context)
DECL|winc1500_iface_init|function|static void winc1500_iface_init(struct net_if *iface)
DECL|winc1500_init|function|static int winc1500_init(struct device *dev)
DECL|winc1500_listen|function|static int winc1500_listen(struct net_context *context, int backlog)
DECL|winc1500_offload|variable|winc1500_offload
DECL|winc1500_put|function|static int winc1500_put(struct net_context *context)
DECL|winc1500_recv|function|static int winc1500_recv(struct net_context *context, net_context_recv_cb_t cb, s32_t timeout, void *user_data)
DECL|winc1500_sendto|function|static int winc1500_sendto(struct net_pkt *pkt, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb, s32_t timeout,
DECL|winc1500_send|function|static int winc1500_send(struct net_pkt *pkt, net_context_send_cb_t cb, s32_t timeout, void *token, void *user_data)
DECL|winc1500_socket_cb|function|static void winc1500_socket_cb(SOCKET sock, uint8 message, void *pvMsg)
DECL|winc1500_thread_data|variable|winc1500_thread_data
DECL|winc1500_thread|function|static void winc1500_thread(void)
DECL|winc1500_wifi_cb|function|static void winc1500_wifi_cb(u8_t message_type, void *pvMsg)
