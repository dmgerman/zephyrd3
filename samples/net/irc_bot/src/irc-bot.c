DECL|CMD_BUFFER_SIZE|macro|CMD_BUFFER_SIZE
DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|DAD_TIMEOUT|macro|DAD_TIMEOUT
DECL|DEFAULT_CHANNEL|macro|DEFAULT_CHANNEL
DECL|DEFAULT_PORT|macro|DEFAULT_PORT
DECL|DEFAULT_SERVER|macro|DEFAULT_SERVER
DECL|DHCPV4_TIMEOUT|macro|DHCPV4_TIMEOUT
DECL|DNS_QUERY_TIMEOUT|macro|DNS_QUERY_TIMEOUT
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_PIN|macro|LED_PIN
DECL|LED_PIN|macro|LED_PIN
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|STACK_SIZE|macro|STACK_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|ZIRC_AF_INET|macro|ZIRC_AF_INET
DECL|ZIRC_AF_INET|macro|ZIRC_AF_INET
DECL|ZIRC_LOCAL_IP_ADDR|macro|ZIRC_LOCAL_IP_ADDR
DECL|ZIRC_LOCAL_IP_ADDR|macro|ZIRC_LOCAL_IP_ADDR
DECL|ZIRC_LOCAL_IP_ADDR|macro|ZIRC_LOCAL_IP_ADDR
DECL|ZIRC_LOCAL_IP_ADDR|macro|ZIRC_LOCAL_IP_ADDR
DECL|ZIRC_PEER_IP_ADDR|macro|ZIRC_PEER_IP_ADDR
DECL|ZIRC_PEER_IP_ADDR|macro|ZIRC_PEER_IP_ADDR
DECL|ZIRC_PEER_IP_ADDR|macro|ZIRC_PEER_IP_ADDR
DECL|ZIRC_PEER_IP_ADDR|macro|ZIRC_PEER_IP_ADDR
DECL|ZIRC_SOCKADDR_IN|macro|ZIRC_SOCKADDR_IN
DECL|ZIRC_SOCKADDR_IN|macro|ZIRC_SOCKADDR_IN
DECL|bot_thread|variable|bot_thread
DECL|chans|member|struct zirc_chan *chans;
DECL|chan|member|const char *chan;
DECL|cmd_buf|variable|cmd_buf
DECL|conn|member|struct net_context *conn;
DECL|data|member|void *data;
DECL|data|member|void *data;
DECL|fake_led|variable|fake_led
DECL|in_addr_set|function|static int in_addr_set(sa_family_t family, const char *ip_addr, int port, struct sockaddr *_sockaddr)
DECL|initialize_hardware|function|initialize_hardware(void)
DECL|initialize_network|function|initialize_network(struct zirc *irc)
DECL|ipv4_addr_add_handler|function|static void ipv4_addr_add_handler(struct net_mgmt_event_callback *cb, u32_t mgmt_event, struct net_if *iface)
DECL|ipv6_dad_ok_handler|function|static void ipv6_dad_ok_handler(struct net_mgmt_event_callback *cb,u32_t mgmt_event, struct net_if *iface)
DECL|irc_bot|function|static void irc_bot(void)
DECL|irc|member|struct zirc *irc;
DECL|laddr|variable|laddr
DECL|led0|variable|led0
DECL|local_addr|member|struct sockaddr local_addr;
DECL|main|function|void main(void)
DECL|mgmt4_cb|variable|mgmt4_cb
DECL|mgmt6_cb|variable|mgmt6_cb
DECL|next|member|struct zirc_chan *next;
DECL|on_cmd_disconnect|function|on_cmd_disconnect(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_hello|function|on_cmd_hello(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_led_off|function|on_cmd_led_off(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_led_on|function|on_cmd_led_on(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_led_toggle|function|on_cmd_led_toggle(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_ping|function|on_cmd_ping(struct zirc *irc, char *umask, char *cmd, size_t len)
DECL|on_cmd_privmsg|function|on_cmd_privmsg(struct zirc *irc, char *umask, char *cmd, size_t len)
DECL|on_cmd_random|function|on_cmd_random(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_rejoin|function|on_cmd_rejoin(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_context_recv|function|on_context_recv(struct net_context *ctx, struct net_pkt *pkt,int status, void *data)
DECL|on_msg_rcvd|function|on_msg_rcvd(void *data, struct zirc_chan *chan, char *umask, char *msg)
DECL|on_privmsg_rcvd_cb_t|typedef|typedef void (*on_privmsg_rcvd_cb_t)(void *data, struct zirc_chan *chan,
DECL|on_privmsg_rcvd|member|on_privmsg_rcvd_cb_t on_privmsg_rcvd;
DECL|panic|function|panic(const char *msg)
DECL|process_command|function|process_command(struct zirc *irc, char *cmd, size_t len)
DECL|read_led|function|read_led(void)
DECL|remote_addr|member|struct sockaddr remote_addr;
DECL|resolve_cb|function|static void resolve_cb(enum dns_resolve_status status,struct dns_addrinfo *info, void *user_data)
DECL|setup_dhcpv4|function|static void setup_dhcpv4(struct zirc *irc, struct net_if *iface)
DECL|setup_dhcpv4|macro|setup_dhcpv4
DECL|setup_ipv4|function|static void setup_ipv4(struct zirc *irc, struct net_if *iface)
DECL|setup_ipv4|macro|setup_ipv4
DECL|setup_ipv6|function|static void setup_ipv6(struct zirc *irc, struct net_if *iface)
DECL|setup_ipv6|macro|setup_ipv6
DECL|transmit|function|transmit(struct net_context *ctx, char buffer[], size_t len)
DECL|wait_dns|member|struct k_sem wait_dns;
DECL|wait_iface|member|struct k_sem wait_iface;
DECL|write_led|function|write_led(bool led)
DECL|zirc_chan_join|function|zirc_chan_join(struct zirc *irc, struct zirc_chan *chan, const char *channel, on_privmsg_rcvd_cb_t on_privmsg_rcvd, void *data)
DECL|zirc_chan_part|function|zirc_chan_part(struct zirc_chan *chan)
DECL|zirc_chan_send_msg|function|zirc_chan_send_msg(const struct zirc_chan *chan, const char *msg)
DECL|zirc_chan|struct|struct zirc_chan {
DECL|zirc_connect|function|zirc_connect(struct zirc *irc, const char *host, int port, void *data)
DECL|zirc_disconnect|function|zirc_disconnect(struct zirc *irc)
DECL|zirc_dns_lookup|function|static inline int zirc_dns_lookup(const char *host, void *user_data)
DECL|zirc_nick_set|function|zirc_nick_set(struct zirc *irc, const char *nick)
DECL|zirc_user_set|function|zirc_user_set(struct zirc *irc, const char *user, const char *realname)
DECL|zirc|struct|struct zirc {
