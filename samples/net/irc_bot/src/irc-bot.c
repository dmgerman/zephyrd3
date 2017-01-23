DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|CONFIG_NET_SAMPLES_MY_IPV6_ADDR|macro|CONFIG_NET_SAMPLES_MY_IPV6_ADDR
DECL|CONFIG_NET_SAMPLES_PEER_IPV6_ADDR|macro|CONFIG_NET_SAMPLES_PEER_IPV6_ADDR
DECL|DEFAULT_CHANNEL|macro|DEFAULT_CHANNEL
DECL|DEFAULT_PORT|macro|DEFAULT_PORT
DECL|DEFAULT_SERVER|macro|DEFAULT_SERVER
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_PIN|macro|LED_PIN
DECL|LED_PIN|macro|LED_PIN
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|STACK_SIZE|macro|STACK_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|chans|member|struct zirc_chan *chans;
DECL|chan|member|const char *chan;
DECL|conn|member|struct net_context *conn;
DECL|data|member|void *data;
DECL|data|member|void *data;
DECL|fake_led|variable|fake_led
DECL|in_addr_set|function|static int in_addr_set(sa_family_t family, const char *ip_addr, int port, struct sockaddr *_sockaddr)
DECL|initialize_hardware|function|initialize_hardware(void)
DECL|initialize_network|function|initialize_network(void)
DECL|irc_bot|function|static void irc_bot(void)
DECL|irc|member|struct zirc *irc;
DECL|led0|variable|led0
DECL|main|function|void main(void)
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
DECL|on_connect|function|on_connect(void *data, struct zirc *irc)
DECL|on_connect|member|void (*on_connect)(void *data, struct zirc *irc);
DECL|on_context_connect|function|on_context_connect(struct net_context *ctx, void *data)
DECL|on_context_recv|function|on_context_recv(struct net_context *ctx, struct net_buf *buf,int status, void *data)
DECL|on_msg_rcvd|function|on_msg_rcvd(void *data, struct zirc_chan *chan, char *umask, char *msg)
DECL|on_privmsg_rcvd_cb_t|typedef|typedef void (*on_privmsg_rcvd_cb_t)(void *data, struct zirc_chan *chan,
DECL|on_privmsg_rcvd|member|on_privmsg_rcvd_cb_t on_privmsg_rcvd;
DECL|panic|function|panic(const char *msg)
DECL|process_command|function|process_command(struct zirc *irc, char *cmd, size_t len)
DECL|read_led|function|read_led(void)
DECL|stack|variable|stack
DECL|transmit|function|transmit(struct net_context *ctx, char buffer[], size_t len)
DECL|write_led|function|write_led(bool led)
DECL|zirc_chan_join|function|zirc_chan_join(struct zirc *irc, struct zirc_chan *chan, const char *channel, on_privmsg_rcvd_cb_t on_privmsg_rcvd, void *data)
DECL|zirc_chan_part|function|zirc_chan_part(struct zirc_chan *chan)
DECL|zirc_chan_send_msg|function|zirc_chan_send_msg(const struct zirc_chan *chan, const char *msg)
DECL|zirc_chan|struct|struct zirc_chan {
DECL|zirc_connect|function|zirc_connect(struct zirc *irc, const char *host, int port,void (*on_connect)(void *data, struct zirc *irc), void *data)
DECL|zirc_disconnect|function|zirc_disconnect(struct zirc *irc)
DECL|zirc_nick_set|function|zirc_nick_set(struct zirc *irc, const char *nick)
DECL|zirc_user_set|function|zirc_user_set(struct zirc *irc, const char *user, const char *realname)
DECL|zirc|struct|struct zirc {
