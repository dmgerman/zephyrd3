DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|CMD_HANDLER|macro|CMD_HANDLER
DECL|MAX_MDM_CONTROL_PINS|enumerator|MAX_MDM_CONTROL_PINS,
DECL|MDM_BOOT_MODE_NORMAL|macro|MDM_BOOT_MODE_NORMAL
DECL|MDM_BOOT_MODE_SEL|enumerator|MDM_BOOT_MODE_SEL = 0,
DECL|MDM_BOOT_MODE_SPECIAL|macro|MDM_BOOT_MODE_SPECIAL
DECL|MDM_CMD_CONN_TIMEOUT|macro|MDM_CMD_CONN_TIMEOUT
DECL|MDM_CMD_SEND_TIMEOUT|macro|MDM_CMD_SEND_TIMEOUT
DECL|MDM_CMD_TIMEOUT|macro|MDM_CMD_TIMEOUT
DECL|MDM_IMEI_LENGTH|macro|MDM_IMEI_LENGTH
DECL|MDM_KEEP_AWAKE_DISABLED|macro|MDM_KEEP_AWAKE_DISABLED
DECL|MDM_KEEP_AWAKE_ENABLED|macro|MDM_KEEP_AWAKE_ENABLED
DECL|MDM_KEEP_AWAKE|enumerator|MDM_KEEP_AWAKE,
DECL|MDM_MANUFACTURER_LENGTH|macro|MDM_MANUFACTURER_LENGTH
DECL|MDM_MAX_DATA_LENGTH|macro|MDM_MAX_DATA_LENGTH
DECL|MDM_MAX_SOCKETS|macro|MDM_MAX_SOCKETS
DECL|MDM_MODEL_LENGTH|macro|MDM_MODEL_LENGTH
DECL|MDM_POWER_DISABLE|macro|MDM_POWER_DISABLE
DECL|MDM_POWER_ENABLE|macro|MDM_POWER_ENABLE
DECL|MDM_POWER|enumerator|MDM_POWER,
DECL|MDM_RECV_BUF_SIZE|macro|MDM_RECV_BUF_SIZE
DECL|MDM_RECV_MAX_BUF|macro|MDM_RECV_MAX_BUF
DECL|MDM_RESET_ASSERTED|macro|MDM_RESET_ASSERTED
DECL|MDM_RESET_NOT_ASSERTED|macro|MDM_RESET_NOT_ASSERTED
DECL|MDM_RESET|enumerator|MDM_RESET,
DECL|MDM_REVISION_LENGTH|macro|MDM_REVISION_LENGTH
DECL|MDM_SEND_OK_DISABLED|macro|MDM_SEND_OK_DISABLED
DECL|MDM_SEND_OK_ENABLED|macro|MDM_SEND_OK_ENABLED
DECL|MDM_SEND_OK|enumerator|MDM_SEND_OK,
DECL|MDM_UART_DEV_NAME|macro|MDM_UART_DEV_NAME
DECL|PINCONFIG|macro|PINCONFIG
DECL|RSSI_TIMEOUT_SECS|macro|RSSI_TIMEOUT_SECS
DECL|SHLD_3V3_1V8_SIG_TRANS_DISABLED|macro|SHLD_3V3_1V8_SIG_TRANS_DISABLED
DECL|SHLD_3V3_1V8_SIG_TRANS_ENABLED|macro|SHLD_3V3_1V8_SIG_TRANS_ENABLED
DECL|SHLD_3V3_1V8_SIG_TRANS_ENA|enumerator|SHLD_3V3_1V8_SIG_TRANS_ENA,
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_hexdump|function|static inline void _hexdump(const u8_t *packet, size_t length)
DECL|_hexdump|macro|_hexdump
DECL|api_funcs|variable|api_funcs
DECL|cmd_handler|struct|struct cmd_handler {
DECL|cmd_len|member|u16_t cmd_len;
DECL|cmd|member|const char *cmd;
DECL|context|member|struct net_context *context;
DECL|dev_name|member|char *dev_name;
DECL|dst|member|struct sockaddr dst;
DECL|ev_csps|member|int ev_csps;
DECL|ev_rrcstate|member|int ev_rrcstate;
DECL|family|member|sa_family_t family;
DECL|func|member|void (*func)(struct net_buf **buf, u16_t len);
DECL|gpio_port_dev|member|struct device *gpio_port_dev[MAX_MDM_CONTROL_PINS];
DECL|ictx|variable|ictx
DECL|iface|member|struct net_if *iface;
DECL|ip_proto|member|enum net_ip_protocol ip_proto;
DECL|is_crlf|function|static bool is_crlf(u8_t c)
DECL|last_error|member|int last_error;
DECL|last_socket_id|member|int last_socket_id;
DECL|mac_addr|member|u8_t mac_addr[6];
DECL|mdm_control_pinconfig|struct|struct mdm_control_pinconfig {
DECL|mdm_control_pins|enum|enum mdm_control_pins {
DECL|mdm_ctx|member|struct mdm_receiver_context mdm_ctx;
DECL|mdm_imei|member|char mdm_imei[MDM_IMEI_LENGTH];
DECL|mdm_manufacturer|member|char mdm_manufacturer[MDM_MANUFACTURER_LENGTH];
DECL|mdm_model|member|char mdm_model[MDM_MODEL_LENGTH];
DECL|mdm_recv_buf|variable|mdm_recv_buf
DECL|mdm_revision|member|char mdm_revision[MDM_REVISION_LENGTH];
DECL|modem_pin_init|function|static int modem_pin_init(void)
DECL|modem_wakeup_pin_fix|function|static void modem_wakeup_pin_fix(void)
DECL|net_buf_findcrlf|function|static u16_t net_buf_findcrlf(struct net_buf *buf, struct net_buf **frag, u16_t *offset)
DECL|net_buf_ncmp|function|static int net_buf_ncmp(struct net_buf *buf, const u8_t *s2, size_t n)
DECL|net_buf_skipcrlf|function|static void net_buf_skipcrlf(struct net_buf **buf)
DECL|net_pkt_setup_ip_data|function|static int net_pkt_setup_ip_data(struct net_pkt *pkt, struct wncm14a2a_socket *sock)
DECL|offload_accept|function|static int offload_accept(struct net_context *context, net_tcp_accept_cb_t cb, s32_t timeout, void *user_data)
DECL|offload_bind|function|static int offload_bind(struct net_context *context,const struct sockaddr *addr, socklen_t addrlen)
DECL|offload_connect|function|static int offload_connect(struct net_context *context, const struct sockaddr *addr, socklen_t addrlen, net_context_connect_cb_t cb, s32_t timeout,
DECL|offload_funcs|variable|offload_funcs
DECL|offload_get|function|static int offload_get(sa_family_t family, enum net_sock_type type, enum net_ip_protocol ip_proto, struct net_context **context)
DECL|offload_iface_init|function|static void offload_iface_init(struct net_if *iface)
DECL|offload_listen|function|static int offload_listen(struct net_context *context, int backlog)
DECL|offload_put|function|static int offload_put(struct net_context *context)
DECL|offload_recv|function|static int offload_recv(struct net_context *context,net_context_recv_cb_t cb, s32_t timeout, void *user_data)
DECL|offload_sendto|function|static int offload_sendto(struct net_pkt *pkt, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb, s32_t timeout,
DECL|offload_send|function|static int offload_send(struct net_pkt *pkt,net_context_send_cb_t cb, s32_t timeout, void *token, void *user_data)
DECL|on_cmd_atcmdecho_nosock_imei|function|static void on_cmd_atcmdecho_nosock_imei(struct net_buf **buf, u16_t len)
DECL|on_cmd_atcmdecho_nosock|function|static void on_cmd_atcmdecho_nosock(struct net_buf **buf, u16_t len)
DECL|on_cmd_atcmdecho|function|static void on_cmd_atcmdecho(struct net_buf **buf, u16_t len)
DECL|on_cmd_atcmdinfo_manufacturer|function|static void on_cmd_atcmdinfo_manufacturer(struct net_buf **buf, u16_t len)
DECL|on_cmd_atcmdinfo_model|function|static void on_cmd_atcmdinfo_model(struct net_buf **buf, u16_t len)
DECL|on_cmd_atcmdinfo_revision|function|static void on_cmd_atcmdinfo_revision(struct net_buf **buf, u16_t len)
DECL|on_cmd_atcmdinfo_rssi|function|static void on_cmd_atcmdinfo_rssi(struct net_buf **buf, u16_t len)
DECL|on_cmd_sockcreat|function|static void on_cmd_sockcreat(struct net_buf **buf, u16_t len)
DECL|on_cmd_sockdataind|function|static void on_cmd_sockdataind(struct net_buf **buf, u16_t len)
DECL|on_cmd_sockdial|function|static void on_cmd_sockdial(struct net_buf **buf, u16_t len)
DECL|on_cmd_sockerror|function|static void on_cmd_sockerror(struct net_buf **buf, u16_t len)
DECL|on_cmd_sockexterror|function|static void on_cmd_sockexterror(struct net_buf **buf, u16_t len)
DECL|on_cmd_socknotifyev|function|static void on_cmd_socknotifyev(struct net_buf **buf, u16_t len)
DECL|on_cmd_sockok|function|static void on_cmd_sockok(struct net_buf **buf, u16_t len)
DECL|on_cmd_sockread|function|static void on_cmd_sockread(struct net_buf **buf, u16_t len)
DECL|on_cmd_sockwrite|function|static void on_cmd_sockwrite(struct net_buf **buf, u16_t len)
DECL|pinconfig|variable|pinconfig
DECL|pin|member|u32_t pin;
DECL|read_rx_allocator|function|static inline struct net_buf *read_rx_allocator(s32_t timeout, void *user_data)
DECL|recv_cb_work|member|struct k_work recv_cb_work;
DECL|recv_cb|member|net_context_recv_cb_t recv_cb;
DECL|recv_pkt|member|struct net_pkt *recv_pkt;
DECL|recv_user_data|member|void *recv_user_data;
DECL|response_sem|member|struct k_sem response_sem;
DECL|rssi_query_work|member|struct k_delayed_work rssi_query_work;
DECL|send_at_cmd|function|static int send_at_cmd(struct wncm14a2a_socket *sock,const u8_t *data, int timeout)
DECL|send_data|function|static int send_data(struct wncm14a2a_socket *sock, struct net_pkt *pkt)
DECL|sock_send_sem|member|struct k_sem sock_send_sem;
DECL|socket_from_id|function|static struct wncm14a2a_socket *socket_from_id(int socket_id)
DECL|socket_get|function|static struct wncm14a2a_socket *socket_get(void)
DECL|socket_id|member|int socket_id;
DECL|socket_put|function|static void socket_put(struct wncm14a2a_socket *sock)
DECL|socket_reading|member|bool socket_reading;
DECL|sockets|member|struct wncm14a2a_socket sockets[MDM_MAX_SOCKETS];
DECL|sockreadrecv_cb_work|function|static void sockreadrecv_cb_work(struct k_work *work)
DECL|src|member|struct sockaddr src;
DECL|type|member|enum net_sock_type type;
DECL|wncm14a2a_get_mac|function|static inline u8_t *wncm14a2a_get_mac(struct device *dev)
DECL|wncm14a2a_iface_ctx|struct|struct wncm14a2a_iface_ctx {
DECL|wncm14a2a_init|function|static int wncm14a2a_init(struct device *dev)
DECL|wncm14a2a_modem_reset_work|function|static void wncm14a2a_modem_reset_work(struct k_work *work)
DECL|wncm14a2a_modem_reset|function|static void wncm14a2a_modem_reset(void)
DECL|wncm14a2a_read_rx|function|static void wncm14a2a_read_rx(struct net_buf **buf)
DECL|wncm14a2a_rssi_query_work|function|static void wncm14a2a_rssi_query_work(struct k_work *work)
DECL|wncm14a2a_rx_thread|variable|wncm14a2a_rx_thread
DECL|wncm14a2a_rx|function|static void wncm14a2a_rx(void)
DECL|wncm14a2a_socket|struct|struct wncm14a2a_socket {
DECL|wncm14a2a_sprint_ip_addr|function|char *wncm14a2a_sprint_ip_addr(const struct sockaddr *addr)
DECL|wncm14a2a_workq|variable|wncm14a2a_workq
